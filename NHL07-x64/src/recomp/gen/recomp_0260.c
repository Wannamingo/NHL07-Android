/**
 * nhl_07_recomp - Recompiled code chunk 260
 * Functions: 250 (0x006078A0 - 0x0060962E)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_006078A0
 * Original: 0x006078A0 - 0x00607931 (145 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006078A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006078A0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x006078A7u); RECOMP_ABI_CALL(0x004580F0u, sub_004580F0); /* call 0x004580F0 */

loc_006078A7: ;
    ebx = eax;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x78626970);
    PUSH32(esp, 0x17C8);
    PUSH32(esp, 0x006078B9u); RECOMP_ABI_CALL(0x004DBC20u, sub_004DBC20); /* call 0x004DBC20 */

loc_006078B9: ;
    esi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060792E; /* je: equal / zero */

loc_006078C4: ;
    PUSH32(esp, edi);
    ecx = 0x5F2;
    edi = esi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(esp + 0x10);
    PUSH32(esp, 0);
    MEM32(esi + 0x17A0) = eax;
    eax = 1;
    PUSH32(esp, 0);
    PUSH32(esp, 0x736C6E6B);
    MEM32(esi + 0x17A4) = ebx;
    MEM32(esi + 0x17AC) = eax;
    MEM32(esi + 0x17B0) = 0;
    MEM32(esi + 0x17A8) = eax;
    PUSH32(esp, 0x00607907u); RECOMP_ABI_CALL(0x00453B10u, sub_00453B10); /* call 0x00453B10 */

loc_00607907: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x6076F0);
    MEM8(esi + 0x17C6) = LO8(eax);
    PUSH32(esp, 0x00607918u); RECOMP_ABI_CALL(0x00454730u, sub_00454730); /* call 0x00454730 */

loc_00607918: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00607920u); RECOMP_ABI_CALL(0x0045CDC0u, sub_0045CDC0); /* call 0x0045CDC0 */

loc_00607920: ;
    _fb = (uint32_t)(0x3A98) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x3A98;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x17C0) = eax;
    eax = esi;
    POP32(esp, edi);

loc_0060792E: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00607940
 * Original: 0x00607940 - 0x0060797E (62 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00607940(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00607940: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x6076F0);
    PUSH32(esp, 0x00607950u); RECOMP_ABI_CALL(0x00454780u, sub_00454780); /* call 0x00454780 */

loc_00607950: ;
    edx = MEM32(esi + 0x17A4);
    eax = MEM32(esi + 0x17AC);
    ecx = MEM32(esi + 0x17BC);
    PUSH32(esp, edx);
    PUSH32(esp, 0x78626970);
    PUSH32(esp, esi);
    MEM32(0x922B00) = eax;
    MEM32(0x922B04) = ecx;
    PUSH32(esp, 0x00607979u); RECOMP_ABI_CALL(0x004DBCD4u, sub_004DBCD4); /* call 0x004DBCD4 */

loc_00607979: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00607980
 * Original: 0x00607980 - 0x006079AB (43 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00607980(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00607980: ;
    ecx = MEM32(esp + 4);
    SET_LO8(eax, MEM8(esp + 0xC));
    MEM8(ecx + 0x17C4) = LO8(eax);
    eax = MEM32(esp + 8);
    edx = ecx + 0x1790;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_006079A0: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_006079A0; /* jne: not equal / not zero */

loc_006079AA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_006079B0
 * Original: 0x006079B0 - 0x00607A3E (142 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006079B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006079B0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x17AC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(edi + 0x17AC) (32-bit) */
    esi = edi + 0x1700;
    MEM8(esi) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_00607A38; /* jne: not equal / not zero */

loc_006079CC: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006079D6; /* je: equal / zero */

loc_006079D1: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00607A01; /* jne: not equal / not zero */

loc_006079D6: ;
    eax = MEM32(edi + 0x17B8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x8E4D38);
    PUSH32(esp, 0x80);
    PUSH32(esp, esi);
    PUSH32(esp, 0x006079EDu); RECOMP_ABI_CALL(0x005E4200u, sub_005E4200); /* call 0x005E4200 */

loc_006079ED: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x8E4D40);
    PUSH32(esp, 0x80);
    PUSH32(esp, esi);
    PUSH32(esp, 0x006079FEu); RECOMP_ABI_CALL(0x005E4200u, sub_005E4200); /* call 0x005E4200 */

loc_006079FE: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00607A01: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00607A38; /* jne: not equal / not zero */

loc_00607A06: ;
    ecx = ZX8(MEM8(edi + 0x17C5));
    PUSH32(esp, ecx);
    PUSH32(esp, 0x8E4D48);
    PUSH32(esp, 0x80);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00607A1Eu); RECOMP_ABI_CALL(0x005E4200u, sub_005E4200); /* call 0x005E4200 */

loc_00607A1E: ;
    _fb = (uint32_t)(0x1780) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x1780;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x8E4D50);
    PUSH32(esp, 0x80);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00607A35u); RECOMP_ABI_CALL(0x005E6040u, sub_005E6040); /* call 0x005E6040 */

loc_00607A35: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00607A38: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00607A40
 * Original: 0x00607A40 - 0x00607B63 (291 bytes, 94 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00607A40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00607A40: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x17AC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x17AC) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00607A56; /* je: equal / zero */

loc_00607A51: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00607A56: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_00607AB4; /* jne: not equal / not zero */

loc_00607A5D: ;
    ebx = MEM32(esp + 0x18);
    PUSH32(esp, 0);
    PUSH32(esp, 0x8E4D5C);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00607A6Eu); RECOMP_ABI_CALL(0x005E3F40u, sub_005E3F40); /* call 0x005E3F40 */

loc_00607A6E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00607A77u); RECOMP_ABI_CALL(0x005E4400u, sub_005E4400); /* call 0x005E4400 */

loc_00607A77: ;
    edi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00607B5D; /* je: equal / zero */

loc_00607A84: ;
    PUSH32(esp, 0x8E4D64);
    PUSH32(esp, 0x10);
    eax = esi + 0x1790;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8E4D68);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00607A9Du); RECOMP_ABI_CALL(0x005E3F40u, sub_005E3F40); /* call 0x005E3F40 */

loc_00607A9D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00607AA6u); RECOMP_ABI_CALL(0x005E4A10u, sub_005E4A10); /* call 0x005E4A10 */

loc_00607AA6: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00607AAEu); RECOMP_ABI_CALL(0x00607650u, sub_00607650); /* call 0x00607650 */

loc_00607AAE: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00607AB4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00607B5D; /* jne: not equal / not zero */

loc_00607ABD: ;
    ebx = MEM32(esp + 0x18);
    PUSH32(esp, 0);
    PUSH32(esp, 0x8E4D74);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00607ACEu); RECOMP_ABI_CALL(0x005E3F40u, sub_005E3F40); /* call 0x005E3F40 */

loc_00607ACE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00607AD7u); RECOMP_ABI_CALL(0x005E4400u, sub_005E4400); /* call 0x005E4400 */

loc_00607AD7: ;
    edi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00607B5D; /* je: equal / zero */

loc_00607AE0: ;
    PUSH32(esp, 0x922B08);
    PUSH32(esp, 0x3E);
    ecx = edi + 0x46;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x8E4D7C);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00607AF6u); RECOMP_ABI_CALL(0x005E3F40u, sub_005E3F40); /* call 0x005E3F40 */

loc_00607AF6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00607AFFu); RECOMP_ABI_CALL(0x005E4A10u, sub_005E4A10); /* call 0x005E4A10 */

loc_00607AFF: ;
    edx = esi + 0x1790;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00607B0Cu); RECOMP_ABI_CALL(0x00453850u, sub_00453850); /* call 0x00453850 */

loc_00607B0C: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00607B2D; /* jle: less or equal (signed <=) */

loc_00607B13: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    MEM32(esi + 0x17B0) = 2;
    MEM32(esi + 0x17A8) = 3;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00607B2D: ;
    MEM32(esi + 0x17B0) = 3;
    if (CMP_NE(_fa, _fb)) goto loc_00607B49; /* jne: not equal / not zero */

loc_00607B39: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    MEM32(esi + 0x17BC) = 0x2D70696E;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00607B49: ;
    MEM32(esi + 0x17BC) = 0x2D737663;
    MEM32(esi + 0x17B4) = 0;

loc_00607B5D: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00607B70
 * Original: 0x00607B70 - 0x00607BB6 (70 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00607B70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00607B70: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x17AC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x17AC) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00607B86; /* je: equal / zero */

loc_00607B81: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00607B86: ;
    _fa = (uint32_t)(MEM32(esi + 0x17B0)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x17B0), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00607B96; /* je: equal / zero */

loc_00607B8F: ;
    eax = 0xFFFFFFFEu;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00607B96: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00607BAE; /* jne: not equal / not zero */

loc_00607B9B: ;
    PUSH32(esp, 0x00607BA0u); RECOMP_ABI_CALL(0x00453A10u, sub_00453A10); /* call 0x00453A10 */

loc_00607BA0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x17B0) = eax;
    MEM32(esi + 0x17A8) = eax;

loc_00607BAE: ;
    eax = MEM32(esi + 0x17B0);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00607BC0
 * Original: 0x00607BC0 - 0x00607C49 (137 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00607BC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00607BC0: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x17AC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00607BD7; /* je: equal / zero */

loc_00607BD5: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00607BD7: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00607BE1; /* je: equal / zero */

loc_00607BDC: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00607BF2; /* jne: not equal / not zero */

loc_00607BE1: ;
    eax = MEM32(ecx + 0x17B4);
    esi = MEM32(ecx + 0x17A0);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00607BF2: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00607BFC; /* je: equal / zero */

loc_00607BF7: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00607C36; /* jne: not equal / not zero */

loc_00607BFC: ;
    edx = MEM32(ecx + 0x17BC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2D676174) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x2D676174 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00607C2B; /* je: equal / zero */

loc_00607C0C: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2D737663) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x2D737663 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00607C2B; /* je: equal / zero */

loc_00607C14: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00607C2B; /* jae: above or equal (unsigned >=) */

loc_00607C19: ;
    edx = MEM32(ecx + 0x17BC);
    esi = MEM32(eax * 4 + 0x880A28);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00607C14; /* jne: not equal / not zero */

loc_00607C2B: ;
    edx = MEM32(ecx + 0x17A0);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00607C36: ;
    MEM32(ecx + 0x17B0) = 0;
    MEM8(ecx + 0x17C4) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00607C50
 * Original: 0x00607C50 - 0x00607C62 (18 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00607C50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00607C50: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(MEM32(ecx + 0x17A0)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ecx + 0x17A0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((4) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esp += 4; return; /* ret */

}

/**
 * sub_00607C70
 * Original: 0x00607C70 - 0x00607C8D (29 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00607C70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00607C70: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x17AC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esp + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00607C87; /* jne: not equal / not zero */

loc_00607C80: ;
    eax = MEM32(eax + 0x17B0);
    esp += 4; return; /* ret */

loc_00607C87: ;
    eax = 4;
    esp += 4; return; /* ret */

}

/**
 * sub_00607C90
 * Original: 0x00607C90 - 0x00607CB3 (35 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00607C90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00607C90: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00607CB2; /* jge: greater or equal (signed >=) */

loc_00607C99: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    ecx = MEM32(esp + 4);
    if (CMP_NE(_fa, _fb)) goto loc_00607CAC; /* jne: not equal / not zero */

loc_00607CA2: ;
    MEM32(ecx + 0x17A8) = 2;

loc_00607CAC: ;
    MEM32(ecx + 0x17AC) = eax;

loc_00607CB2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00607CC0
 * Original: 0x00607CC0 - 0x00607CCB (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00607CC0(void)
{

loc_00607CC0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x17AC);
    esp += 4; return; /* ret */

}

/**
 * sub_00607CD0
 * Original: 0x00607CD0 - 0x00607DAC (220 bytes, 67 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00607CD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00607CD0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xC00) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC00;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00607CF3; /* je: equal / zero */

loc_00607CE5: ;
    esi = MEM32(eax + 0x17AC);
    edx = MEM32(eax + 0x17BC);
    goto loc_00607CFF;

loc_00607CF3: ;
    esi = MEM32(0x922B00);
    edx = MEM32(0x922B04);

loc_00607CFF: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2D757064) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x2D757064 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00607D9F; /* je: equal / zero */

loc_00607D0B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x300;
    edi = esp + 8;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00607D25; /* je: equal / zero */

loc_00607D1F: ;
    eax = MEM32(eax);
    MEM32(esp + 0x18) = eax;

loc_00607D25: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00607D5E; /* je: equal / zero */

loc_00607D2A: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2D737663) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x2D737663 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00607D5E; /* je: equal / zero */

loc_00607D32: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2D616374) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x2D616374 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00607D54; /* je: equal / zero */

loc_00607D3A: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2D696E76) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x2D696E76 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00607D54; /* je: equal / zero */

loc_00607D42: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2D6D7367) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x2D6D7367 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00607D54; /* je: equal / zero */

loc_00607D4A: ;
    MEM32(esp + 8) = 7;
    goto loc_00607D66;

loc_00607D54: ;
    MEM32(esp + 8) = 8;
    goto loc_00607D85;

loc_00607D5E: ;
    MEM32(esp + 8) = 6;

loc_00607D66: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x6F70656E);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00607D74u); RECOMP_ABI_CALL(0x00453B10u, sub_00453B10); /* call 0x00453B10 */

loc_00607D74: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00607D80; /* je: equal / zero */

loc_00607D7B: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00607D80u); RECOMP_ABI_CALL(0x00453A10u, sub_00453A10); /* call 0x00453A10 */

loc_00607D80: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00607D85u); RECOMP_ABI_CALL(0x0070A7C3u, sub_0070A7C3); /* call 0x0070A7C3 */

loc_00607D85: ;
    ecx = MEM32(esp + 8);
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    MEM32(esp + 0x14) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00607D99u); RECOMP_ABI_CALL(0x00448EE8u, sub_00448EE8); /* call 0x00448EE8 */

loc_00607D99: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00607D9F: ;
    PUSH32(esp, 4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00607DA6u); RECOMP_ABI_CALL(0x00708EB3u, sub_00708EB3); /* call 0x00708EB3 */

loc_00607DA6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00607DB0
 * Original: 0x00607DB0 - 0x00607E0C (92 bytes, 30 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00607DB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00607DB0: ;
    _fb = (uint32_t)(0x9C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x9C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    eax = esp + 4;
    PUSH32(esp, eax);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00607DC3u); RECOMP_ABI_CALL(0x007092B5u, sub_007092B5); /* call 0x007092B5 */

loc_00607DC3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00607DFD; /* jne: not equal / not zero */

loc_00607DC7: ;
    eax = MEM32(esp + 0xA4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00607DF0; /* je: equal / zero */

loc_00607DD2: ;
    _fa = (uint32_t)(MEM32(esp + 0xA8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xA8), 1 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00607DF0; /* jb: below (unsigned <) */

loc_00607DDC: ;
    ecx = ZX8(MEM8(esp + 0x38));
    PUSH32(esp, ecx);
    edx = esp + 0x3D;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00607DEDu); RECOMP_ABI_CALL(0x0045CC40u, sub_0045CC40); /* call 0x0045CC40 */

loc_00607DED: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00607DF0: ;
    eax = 1;
    POP32(esp, esi);
    _fb = (uint32_t)(0x9C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x9C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00607DFD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00607E04; /* jne: not equal / not zero */

loc_00607E02: ;
    eax = esi;

loc_00607E04: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x9C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x9C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00607E0C
 * Original: 0x00607E0C - 0x00607E15 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00607E0C(void)
{

loc_00607E0C: ;
    eax = ecx;
    MEM32(eax) = 0x880A48;
    esp += 4; return; /* ret */

}

/**
 * sub_00607E15
 * Original: 0x00607E15 - 0x00607E1C (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00607E15(void)
{

loc_00607E15: ;
    MEM32(ecx) = 0x880A48;
    esp += 4; return; /* ret */

}

/**
 * sub_00607E1C
 * Original: 0x00607E1C - 0x00607E39 (29 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00607E1C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00607E1C: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x880A48;
    if (TEST_Z(_fa, _fb)) goto loc_00607E33; /* je: equal / zero */

loc_00607E2C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00607E32u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_00607E32: ;
    POP32(esp, ecx);

loc_00607E33: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00607E39
 * Original: 0x00607E39 - 0x00607E42 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00607E39(void)
{

loc_00607E39: ;
    eax = ecx;
    MEM32(eax) = 0x880A50;
    esp += 4; return; /* ret */

}

/**
 * sub_00607E42
 * Original: 0x00607E42 - 0x00607E49 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00607E42(void)
{

loc_00607E42: ;
    MEM32(ecx) = 0x880A50;
    esp += 4; return; /* ret */

}

/**
 * sub_00607E49
 * Original: 0x00607E49 - 0x00607E66 (29 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00607E49(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00607E49: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x880A50;
    if (TEST_Z(_fa, _fb)) goto loc_00607E60; /* je: equal / zero */

loc_00607E59: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00607E5Fu); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_00607E5F: ;
    POP32(esp, ecx);

loc_00607E60: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00607E66
 * Original: 0x00607E66 - 0x00607E6F (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00607E66(void)
{

loc_00607E66: ;
    eax = ecx;
    MEM32(eax) = 0x880A5C;
    esp += 4; return; /* ret */

}

/**
 * sub_00607E6F
 * Original: 0x00607E6F - 0x00607E76 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00607E6F(void)
{

loc_00607E6F: ;
    MEM32(ecx) = 0x880A5C;
    esp += 4; return; /* ret */

}

/**
 * sub_00607E76
 * Original: 0x00607E76 - 0x00607E93 (29 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00607E76(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00607E76: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x880A5C;
    if (TEST_Z(_fa, _fb)) goto loc_00607E8D; /* je: equal / zero */

loc_00607E86: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00607E8Cu); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_00607E8C: ;
    POP32(esp, ecx);

loc_00607E8D: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00607E93
 * Original: 0x00607E93 - 0x00607E9C (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00607E93(void)
{

loc_00607E93: ;
    eax = ecx;
    MEM32(eax) = 0x880A68;
    esp += 4; return; /* ret */

}

/**
 * sub_00607E9C
 * Original: 0x00607E9C - 0x00607EA3 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00607E9C(void)
{

loc_00607E9C: ;
    MEM32(ecx) = 0x880A68;
    esp += 4; return; /* ret */

}

/**
 * sub_00607EA3
 * Original: 0x00607EA3 - 0x00607EC0 (29 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00607EA3(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00607EA3: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x880A68;
    if (TEST_Z(_fa, _fb)) goto loc_00607EBA; /* je: equal / zero */

loc_00607EB3: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00607EB9u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_00607EB9: ;
    POP32(esp, ecx);

loc_00607EBA: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00607EC0
 * Original: 0x00607EC0 - 0x00607EC9 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00607EC0(void)
{

loc_00607EC0: ;
    eax = ecx;
    MEM32(eax) = 0x880A74;
    esp += 4; return; /* ret */

}

/**
 * sub_00607EC9
 * Original: 0x00607EC9 - 0x00607ED0 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00607EC9(void)
{

loc_00607EC9: ;
    MEM32(ecx) = 0x880A74;
    esp += 4; return; /* ret */

}

/**
 * sub_00607ED0
 * Original: 0x00607ED0 - 0x00607EED (29 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00607ED0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00607ED0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x880A74;
    if (TEST_Z(_fa, _fb)) goto loc_00607EE7; /* je: equal / zero */

loc_00607EE0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00607EE6u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_00607EE6: ;
    POP32(esp, ecx);

loc_00607EE7: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00607EED
 * Original: 0x00607EED - 0x00607EF6 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00607EED(void)
{

loc_00607EED: ;
    eax = ecx;
    MEM32(eax) = 0x880A80;
    esp += 4; return; /* ret */

}

/**
 * sub_00607EF6
 * Original: 0x00607EF6 - 0x00607EFD (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00607EF6(void)
{

loc_00607EF6: ;
    MEM32(ecx) = 0x880A80;
    esp += 4; return; /* ret */

}

/**
 * sub_00607EFD
 * Original: 0x00607EFD - 0x00607F1A (29 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00607EFD(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00607EFD: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x880A80;
    if (TEST_Z(_fa, _fb)) goto loc_00607F14; /* je: equal / zero */

loc_00607F0D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00607F13u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_00607F13: ;
    POP32(esp, ecx);

loc_00607F14: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00607F1A
 * Original: 0x00607F1A - 0x00607F23 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00607F1A(void)
{

loc_00607F1A: ;
    eax = ecx;
    MEM32(eax) = 0x880A8C;
    esp += 4; return; /* ret */

}

/**
 * sub_00607F23
 * Original: 0x00607F23 - 0x00607F2A (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00607F23(void)
{

loc_00607F23: ;
    MEM32(ecx) = 0x880A8C;
    esp += 4; return; /* ret */

}

/**
 * sub_00607F2A
 * Original: 0x00607F2A - 0x00607F47 (29 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00607F2A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00607F2A: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x880A8C;
    if (TEST_Z(_fa, _fb)) goto loc_00607F41; /* je: equal / zero */

loc_00607F3A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00607F40u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_00607F40: ;
    POP32(esp, ecx);

loc_00607F41: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00607F47
 * Original: 0x00607F47 - 0x00607F50 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00607F47(void)
{

loc_00607F47: ;
    eax = ecx;
    MEM32(eax) = 0x880A98;
    esp += 4; return; /* ret */

}

/**
 * sub_00607F50
 * Original: 0x00607F50 - 0x00607F57 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00607F50(void)
{

loc_00607F50: ;
    MEM32(ecx) = 0x880A98;
    esp += 4; return; /* ret */

}

/**
 * sub_00607F57
 * Original: 0x00607F57 - 0x00607F74 (29 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00607F57(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00607F57: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x880A98;
    if (TEST_Z(_fa, _fb)) goto loc_00607F6E; /* je: equal / zero */

loc_00607F67: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00607F6Du); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_00607F6D: ;
    POP32(esp, ecx);

loc_00607F6E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00607F74
 * Original: 0x00607F74 - 0x00607F7D (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00607F74(void)
{

loc_00607F74: ;
    eax = ecx;
    MEM32(eax) = 0x880AA4;
    esp += 4; return; /* ret */

}

/**
 * sub_00607F7D
 * Original: 0x00607F7D - 0x00607F84 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00607F7D(void)
{

loc_00607F7D: ;
    MEM32(ecx) = 0x880AA4;
    esp += 4; return; /* ret */

}

/**
 * sub_00607F84
 * Original: 0x00607F84 - 0x00607FA1 (29 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00607F84(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00607F84: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x880AA4;
    if (TEST_Z(_fa, _fb)) goto loc_00607F9B; /* je: equal / zero */

loc_00607F94: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00607F9Au); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_00607F9A: ;
    POP32(esp, ecx);

loc_00607F9B: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00607FA1
 * Original: 0x00607FA1 - 0x00607FAA (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00607FA1(void)
{

loc_00607FA1: ;
    eax = ecx;
    MEM32(eax) = 0x880AB0;
    esp += 4; return; /* ret */

}

/**
 * sub_00607FAA
 * Original: 0x00607FAA - 0x00607FB1 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00607FAA(void)
{

loc_00607FAA: ;
    MEM32(ecx) = 0x880AB0;
    esp += 4; return; /* ret */

}

/**
 * sub_00607FB1
 * Original: 0x00607FB1 - 0x00607FCE (29 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00607FB1(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00607FB1: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x880AB0;
    if (TEST_Z(_fa, _fb)) goto loc_00607FC8; /* je: equal / zero */

loc_00607FC1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00607FC7u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_00607FC7: ;
    POP32(esp, ecx);

loc_00607FC8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00607FCE
 * Original: 0x00607FCE - 0x00607FD7 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00607FCE(void)
{

loc_00607FCE: ;
    eax = ecx;
    MEM32(eax) = 0x880ABC;
    esp += 4; return; /* ret */

}

/**
 * sub_00607FD7
 * Original: 0x00607FD7 - 0x00607FDE (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00607FD7(void)
{

loc_00607FD7: ;
    MEM32(ecx) = 0x880ABC;
    esp += 4; return; /* ret */

}

/**
 * sub_00607FDE
 * Original: 0x00607FDE - 0x00607FFB (29 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00607FDE(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00607FDE: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x880ABC;
    if (TEST_Z(_fa, _fb)) goto loc_00607FF5; /* je: equal / zero */

loc_00607FEE: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00607FF4u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_00607FF4: ;
    POP32(esp, ecx);

loc_00607FF5: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00607FFB
 * Original: 0x00607FFB - 0x00608004 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00607FFB(void)
{

loc_00607FFB: ;
    eax = ecx;
    MEM32(eax) = 0x880AC8;
    esp += 4; return; /* ret */

}

/**
 * sub_00608004
 * Original: 0x00608004 - 0x0060800B (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00608004(void)
{

loc_00608004: ;
    MEM32(ecx) = 0x880AC8;
    esp += 4; return; /* ret */

}

/**
 * sub_0060800B
 * Original: 0x0060800B - 0x00608028 (29 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060800B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060800B: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x880AC8;
    if (TEST_Z(_fa, _fb)) goto loc_00608022; /* je: equal / zero */

loc_0060801B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00608021u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_00608021: ;
    POP32(esp, ecx);

loc_00608022: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00608028
 * Original: 0x00608028 - 0x00608031 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00608028(void)
{

loc_00608028: ;
    eax = ecx;
    MEM32(eax) = 0x880AD4;
    esp += 4; return; /* ret */

}

/**
 * sub_00608031
 * Original: 0x00608031 - 0x00608038 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00608031(void)
{

loc_00608031: ;
    MEM32(ecx) = 0x880AD4;
    esp += 4; return; /* ret */

}

/**
 * sub_00608038
 * Original: 0x00608038 - 0x00608055 (29 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00608038(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00608038: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x880AD4;
    if (TEST_Z(_fa, _fb)) goto loc_0060804F; /* je: equal / zero */

loc_00608048: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0060804Eu); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_0060804E: ;
    POP32(esp, ecx);

loc_0060804F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00608055
 * Original: 0x00608055 - 0x0060805E (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00608055(void)
{

loc_00608055: ;
    eax = ecx;
    MEM32(eax) = 0x880AE0;
    esp += 4; return; /* ret */

}

/**
 * sub_0060805E
 * Original: 0x0060805E - 0x00608065 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060805E(void)
{

loc_0060805E: ;
    MEM32(ecx) = 0x880AE0;
    esp += 4; return; /* ret */

}

/**
 * sub_00608065
 * Original: 0x00608065 - 0x00608082 (29 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00608065(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00608065: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x880AE0;
    if (TEST_Z(_fa, _fb)) goto loc_0060807C; /* je: equal / zero */

loc_00608075: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0060807Bu); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_0060807B: ;
    POP32(esp, ecx);

loc_0060807C: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00608082
 * Original: 0x00608082 - 0x0060808B (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00608082(void)
{

loc_00608082: ;
    eax = ecx;
    MEM32(eax) = 0x880AEC;
    esp += 4; return; /* ret */

}

/**
 * sub_0060808B
 * Original: 0x0060808B - 0x00608092 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060808B(void)
{

loc_0060808B: ;
    MEM32(ecx) = 0x880AEC;
    esp += 4; return; /* ret */

}

/**
 * sub_00608092
 * Original: 0x00608092 - 0x006080AF (29 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00608092(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00608092: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x880AEC;
    if (TEST_Z(_fa, _fb)) goto loc_006080A9; /* je: equal / zero */

loc_006080A2: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x006080A8u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_006080A8: ;
    POP32(esp, ecx);

loc_006080A9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_006080AF
 * Original: 0x006080AF - 0x006080B8 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006080AF(void)
{

loc_006080AF: ;
    eax = ecx;
    MEM32(eax) = 0x880AF8;
    esp += 4; return; /* ret */

}

/**
 * sub_006080B8
 * Original: 0x006080B8 - 0x006080BF (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006080B8(void)
{

loc_006080B8: ;
    MEM32(ecx) = 0x880AF8;
    esp += 4; return; /* ret */

}

/**
 * sub_006080BF
 * Original: 0x006080BF - 0x006080DC (29 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006080BF(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006080BF: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x880AF8;
    if (TEST_Z(_fa, _fb)) goto loc_006080D6; /* je: equal / zero */

loc_006080CF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x006080D5u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_006080D5: ;
    POP32(esp, ecx);

loc_006080D6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_006080DC
 * Original: 0x006080DC - 0x006080E5 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006080DC(void)
{

loc_006080DC: ;
    eax = ecx;
    MEM32(eax) = 0x880B04;
    esp += 4; return; /* ret */

}

/**
 * sub_006080E5
 * Original: 0x006080E5 - 0x006080EC (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006080E5(void)
{

loc_006080E5: ;
    MEM32(ecx) = 0x880B04;
    esp += 4; return; /* ret */

}

/**
 * sub_006080EC
 * Original: 0x006080EC - 0x00608109 (29 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006080EC(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006080EC: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x880B04;
    if (TEST_Z(_fa, _fb)) goto loc_00608103; /* je: equal / zero */

loc_006080FC: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00608102u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_00608102: ;
    POP32(esp, ecx);

loc_00608103: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00608109
 * Original: 0x00608109 - 0x00608112 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00608109(void)
{

loc_00608109: ;
    eax = ecx;
    MEM32(eax) = 0x880B10;
    esp += 4; return; /* ret */

}

/**
 * sub_00608112
 * Original: 0x00608112 - 0x00608119 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00608112(void)
{

loc_00608112: ;
    MEM32(ecx) = 0x880B10;
    esp += 4; return; /* ret */

}

/**
 * sub_00608119
 * Original: 0x00608119 - 0x00608136 (29 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00608119(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00608119: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x880B10;
    if (TEST_Z(_fa, _fb)) goto loc_00608130; /* je: equal / zero */

loc_00608129: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0060812Fu); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_0060812F: ;
    POP32(esp, ecx);

loc_00608130: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00608136
 * Original: 0x00608136 - 0x0060813F (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00608136(void)
{

loc_00608136: ;
    eax = ecx;
    MEM32(eax) = 0x880B1C;
    esp += 4; return; /* ret */

}

/**
 * sub_0060813F
 * Original: 0x0060813F - 0x00608146 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060813F(void)
{

loc_0060813F: ;
    MEM32(ecx) = 0x880B1C;
    esp += 4; return; /* ret */

}

/**
 * sub_00608146
 * Original: 0x00608146 - 0x00608163 (29 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00608146(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00608146: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x880B1C;
    if (TEST_Z(_fa, _fb)) goto loc_0060815D; /* je: equal / zero */

loc_00608156: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0060815Cu); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_0060815C: ;
    POP32(esp, ecx);

loc_0060815D: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00608163
 * Original: 0x00608163 - 0x0060816C (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00608163(void)
{

loc_00608163: ;
    eax = ecx;
    MEM32(eax) = 0x880B28;
    esp += 4; return; /* ret */

}

/**
 * sub_0060816C
 * Original: 0x0060816C - 0x00608173 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060816C(void)
{

loc_0060816C: ;
    MEM32(ecx) = 0x880B28;
    esp += 4; return; /* ret */

}

/**
 * sub_00608173
 * Original: 0x00608173 - 0x00608190 (29 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00608173(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00608173: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x880B28;
    if (TEST_Z(_fa, _fb)) goto loc_0060818A; /* je: equal / zero */

loc_00608183: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00608189u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_00608189: ;
    POP32(esp, ecx);

loc_0060818A: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00608190
 * Original: 0x00608190 - 0x00608199 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00608190(void)
{

loc_00608190: ;
    eax = ecx;
    MEM32(eax) = 0x880B34;
    esp += 4; return; /* ret */

}

/**
 * sub_00608199
 * Original: 0x00608199 - 0x006081A0 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00608199(void)
{

loc_00608199: ;
    MEM32(ecx) = 0x880B34;
    esp += 4; return; /* ret */

}

/**
 * sub_006081A0
 * Original: 0x006081A0 - 0x006081BD (29 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006081A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006081A0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x880B34;
    if (TEST_Z(_fa, _fb)) goto loc_006081B7; /* je: equal / zero */

loc_006081B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x006081B6u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_006081B6: ;
    POP32(esp, ecx);

loc_006081B7: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_006081BD
 * Original: 0x006081BD - 0x006081C6 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006081BD(void)
{

loc_006081BD: ;
    eax = ecx;
    MEM32(eax) = 0x880B40;
    esp += 4; return; /* ret */

}

/**
 * sub_006081C6
 * Original: 0x006081C6 - 0x006081CD (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006081C6(void)
{

loc_006081C6: ;
    MEM32(ecx) = 0x880B40;
    esp += 4; return; /* ret */

}

/**
 * sub_006081CD
 * Original: 0x006081CD - 0x006081EA (29 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006081CD(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006081CD: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x880B40;
    if (TEST_Z(_fa, _fb)) goto loc_006081E4; /* je: equal / zero */

loc_006081DD: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x006081E3u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_006081E3: ;
    POP32(esp, ecx);

loc_006081E4: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_006081EA
 * Original: 0x006081EA - 0x006081F3 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006081EA(void)
{

loc_006081EA: ;
    eax = ecx;
    MEM32(eax) = 0x880B4C;
    esp += 4; return; /* ret */

}

/**
 * sub_006081F3
 * Original: 0x006081F3 - 0x006081FA (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006081F3(void)
{

loc_006081F3: ;
    MEM32(ecx) = 0x880B4C;
    esp += 4; return; /* ret */

}

/**
 * sub_006081FA
 * Original: 0x006081FA - 0x00608217 (29 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006081FA(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006081FA: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x880B4C;
    if (TEST_Z(_fa, _fb)) goto loc_00608211; /* je: equal / zero */

loc_0060820A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00608210u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_00608210: ;
    POP32(esp, ecx);

loc_00608211: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00608217
 * Original: 0x00608217 - 0x00608220 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00608217(void)
{

loc_00608217: ;
    eax = ecx;
    MEM32(eax) = 0x880B58;
    esp += 4; return; /* ret */

}

/**
 * sub_00608220
 * Original: 0x00608220 - 0x00608227 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00608220(void)
{

loc_00608220: ;
    MEM32(ecx) = 0x880B58;
    esp += 4; return; /* ret */

}

/**
 * sub_00608227
 * Original: 0x00608227 - 0x00608244 (29 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00608227(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00608227: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x880B58;
    if (TEST_Z(_fa, _fb)) goto loc_0060823E; /* je: equal / zero */

loc_00608237: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0060823Du); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_0060823D: ;
    POP32(esp, ecx);

loc_0060823E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00608244
 * Original: 0x00608244 - 0x0060824D (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00608244(void)
{

loc_00608244: ;
    eax = ecx;
    MEM32(eax) = 0x880B60;
    esp += 4; return; /* ret */

}

/**
 * sub_0060824D
 * Original: 0x0060824D - 0x00608254 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060824D(void)
{

loc_0060824D: ;
    MEM32(ecx) = 0x880B60;
    esp += 4; return; /* ret */

}

/**
 * sub_00608254
 * Original: 0x00608254 - 0x00608271 (29 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00608254(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00608254: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x880B60;
    if (TEST_Z(_fa, _fb)) goto loc_0060826B; /* je: equal / zero */

loc_00608264: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0060826Au); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_0060826A: ;
    POP32(esp, ecx);

loc_0060826B: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00608271
 * Original: 0x00608271 - 0x0060827A (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00608271(void)
{

loc_00608271: ;
    eax = ecx;
    MEM32(eax) = 0x880B74;
    esp += 4; return; /* ret */

}

/**
 * sub_0060827A
 * Original: 0x0060827A - 0x00608281 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060827A(void)
{

loc_0060827A: ;
    MEM32(ecx) = 0x880B74;
    esp += 4; return; /* ret */

}

/**
 * sub_00608281
 * Original: 0x00608281 - 0x0060829E (29 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00608281(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00608281: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x880B74;
    if (TEST_Z(_fa, _fb)) goto loc_00608298; /* je: equal / zero */

loc_00608291: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00608297u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_00608297: ;
    POP32(esp, ecx);

loc_00608298: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060829E
 * Original: 0x0060829E - 0x006082A7 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060829E(void)
{

loc_0060829E: ;
    eax = ecx;
    MEM32(eax) = 0x880B80;
    esp += 4; return; /* ret */

}

/**
 * sub_006082A7
 * Original: 0x006082A7 - 0x006082AE (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006082A7(void)
{

loc_006082A7: ;
    MEM32(ecx) = 0x880B80;
    esp += 4; return; /* ret */

}

/**
 * sub_006082AE
 * Original: 0x006082AE - 0x006082CB (29 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006082AE(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006082AE: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x880B80;
    if (TEST_Z(_fa, _fb)) goto loc_006082C5; /* je: equal / zero */

loc_006082BE: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x006082C4u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_006082C4: ;
    POP32(esp, ecx);

loc_006082C5: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_006082CB
 * Original: 0x006082CB - 0x006082D4 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006082CB(void)
{

loc_006082CB: ;
    eax = ecx;
    MEM32(eax) = 0x880B8C;
    esp += 4; return; /* ret */

}

/**
 * sub_006082D4
 * Original: 0x006082D4 - 0x006082DB (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006082D4(void)
{

loc_006082D4: ;
    MEM32(ecx) = 0x880B8C;
    esp += 4; return; /* ret */

}

/**
 * sub_006082DB
 * Original: 0x006082DB - 0x006082F8 (29 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006082DB(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006082DB: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x880B8C;
    if (TEST_Z(_fa, _fb)) goto loc_006082F2; /* je: equal / zero */

loc_006082EB: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x006082F1u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_006082F1: ;
    POP32(esp, ecx);

loc_006082F2: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_006082F8
 * Original: 0x006082F8 - 0x00608301 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006082F8(void)
{

loc_006082F8: ;
    eax = ecx;
    MEM32(eax) = 0x880B98;
    esp += 4; return; /* ret */

}

/**
 * sub_00608301
 * Original: 0x00608301 - 0x00608308 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00608301(void)
{

loc_00608301: ;
    MEM32(ecx) = 0x880B98;
    esp += 4; return; /* ret */

}

/**
 * sub_00608308
 * Original: 0x00608308 - 0x00608325 (29 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00608308(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00608308: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x880B98;
    if (TEST_Z(_fa, _fb)) goto loc_0060831F; /* je: equal / zero */

loc_00608318: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0060831Eu); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_0060831E: ;
    POP32(esp, ecx);

loc_0060831F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00608325
 * Original: 0x00608325 - 0x0060832E (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00608325(void)
{

loc_00608325: ;
    eax = ecx;
    MEM32(eax) = 0x880BA4;
    esp += 4; return; /* ret */

}

/**
 * sub_0060832E
 * Original: 0x0060832E - 0x00608335 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060832E(void)
{

loc_0060832E: ;
    MEM32(ecx) = 0x880BA4;
    esp += 4; return; /* ret */

}

/**
 * sub_00608335
 * Original: 0x00608335 - 0x00608352 (29 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00608335(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00608335: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x880BA4;
    if (TEST_Z(_fa, _fb)) goto loc_0060834C; /* je: equal / zero */

loc_00608345: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0060834Bu); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_0060834B: ;
    POP32(esp, ecx);

loc_0060834C: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00608352
 * Original: 0x00608352 - 0x0060835B (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00608352(void)
{

loc_00608352: ;
    eax = ecx;
    MEM32(eax) = 0x880BB0;
    esp += 4; return; /* ret */

}

/**
 * sub_0060835B
 * Original: 0x0060835B - 0x00608362 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060835B(void)
{

loc_0060835B: ;
    MEM32(ecx) = 0x880BB0;
    esp += 4; return; /* ret */

}

/**
 * sub_00608362
 * Original: 0x00608362 - 0x0060837F (29 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00608362(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00608362: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x880BB0;
    if (TEST_Z(_fa, _fb)) goto loc_00608379; /* je: equal / zero */

loc_00608372: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00608378u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_00608378: ;
    POP32(esp, ecx);

loc_00608379: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060837F
 * Original: 0x0060837F - 0x00608388 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060837F(void)
{

loc_0060837F: ;
    eax = ecx;
    MEM32(eax) = 0x880BD8;
    esp += 4; return; /* ret */

}

/**
 * sub_00608388
 * Original: 0x00608388 - 0x0060838F (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00608388(void)
{

loc_00608388: ;
    MEM32(ecx) = 0x880BD8;
    esp += 4; return; /* ret */

}

/**
 * sub_0060838F
 * Original: 0x0060838F - 0x006083AC (29 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060838F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060838F: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x880BD8;
    if (TEST_Z(_fa, _fb)) goto loc_006083A6; /* je: equal / zero */

loc_0060839F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x006083A5u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_006083A5: ;
    POP32(esp, ecx);

loc_006083A6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_006083AC
 * Original: 0x006083AC - 0x006083D3 (39 bytes, 11 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006083AC(void)
{

loc_006083AC: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(esp + 8);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 0xC) = ecx;
    ecx = MEM32(esp + 0x10);
    MEM32(eax) = 0x880BE4;
    MEM32(eax + 0x10) = ecx;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_006083D3
 * Original: 0x006083D3 - 0x006083DA (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006083D3(void)
{

loc_006083D3: ;
    MEM32(ecx) = 0x880BE4;
    esp += 4; return; /* ret */

}

/**
 * sub_006083DA
 * Original: 0x006083DA - 0x006083F7 (29 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006083DA(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006083DA: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x880BE4;
    if (TEST_Z(_fa, _fb)) goto loc_006083F1; /* je: equal / zero */

loc_006083EA: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x006083F0u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_006083F0: ;
    POP32(esp, ecx);

loc_006083F1: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_006083F7
 * Original: 0x006083F7 - 0x00608400 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006083F7(void)
{

loc_006083F7: ;
    eax = ecx;
    MEM32(eax) = 0x880BE8;
    esp += 4; return; /* ret */

}

/**
 * sub_00608400
 * Original: 0x00608400 - 0x00608407 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00608400(void)
{

loc_00608400: ;
    MEM32(ecx) = 0x880BE8;
    esp += 4; return; /* ret */

}

/**
 * sub_00608407
 * Original: 0x00608407 - 0x00608424 (29 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00608407(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00608407: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x880BE8;
    if (TEST_Z(_fa, _fb)) goto loc_0060841E; /* je: equal / zero */

loc_00608417: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0060841Du); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_0060841D: ;
    POP32(esp, ecx);

loc_0060841E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00608424
 * Original: 0x00608424 - 0x0060842D (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00608424(void)
{

loc_00608424: ;
    eax = ecx;
    MEM32(eax) = 0x880BF4;
    esp += 4; return; /* ret */

}

/**
 * sub_0060842D
 * Original: 0x0060842D - 0x00608434 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060842D(void)
{

loc_0060842D: ;
    MEM32(ecx) = 0x880BF4;
    esp += 4; return; /* ret */

}

/**
 * sub_00608434
 * Original: 0x00608434 - 0x00608451 (29 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00608434(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00608434: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x880BF4;
    if (TEST_Z(_fa, _fb)) goto loc_0060844B; /* je: equal / zero */

loc_00608444: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0060844Au); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_0060844A: ;
    POP32(esp, ecx);

loc_0060844B: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00608451
 * Original: 0x00608451 - 0x0060845A (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00608451(void)
{

loc_00608451: ;
    eax = ecx;
    MEM32(eax) = 0x880C00;
    esp += 4; return; /* ret */

}

/**
 * sub_0060845A
 * Original: 0x0060845A - 0x00608461 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060845A(void)
{

loc_0060845A: ;
    MEM32(ecx) = 0x880C00;
    esp += 4; return; /* ret */

}

/**
 * sub_00608461
 * Original: 0x00608461 - 0x0060847E (29 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00608461(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00608461: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x880C00;
    if (TEST_Z(_fa, _fb)) goto loc_00608478; /* je: equal / zero */

loc_00608471: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00608477u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_00608477: ;
    POP32(esp, ecx);

loc_00608478: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060847E
 * Original: 0x0060847E - 0x00608487 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060847E(void)
{

loc_0060847E: ;
    eax = ecx;
    MEM32(eax) = 0x880C10;
    esp += 4; return; /* ret */

}

/**
 * sub_00608487
 * Original: 0x00608487 - 0x0060848E (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00608487(void)
{

loc_00608487: ;
    MEM32(ecx) = 0x880C10;
    esp += 4; return; /* ret */

}

/**
 * sub_0060848E
 * Original: 0x0060848E - 0x006084AB (29 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060848E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060848E: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x880C10;
    if (TEST_Z(_fa, _fb)) goto loc_006084A5; /* je: equal / zero */

loc_0060849E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x006084A4u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_006084A4: ;
    POP32(esp, ecx);

loc_006084A5: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_006084AB
 * Original: 0x006084AB - 0x006084B4 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006084AB(void)
{

loc_006084AB: ;
    eax = ecx;
    MEM32(eax) = 0x880C1C;
    esp += 4; return; /* ret */

}

/**
 * sub_006084B4
 * Original: 0x006084B4 - 0x006084BB (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006084B4(void)
{

loc_006084B4: ;
    MEM32(ecx) = 0x880C1C;
    esp += 4; return; /* ret */

}

/**
 * sub_006084BB
 * Original: 0x006084BB - 0x006084D8 (29 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006084BB(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006084BB: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x880C1C;
    if (TEST_Z(_fa, _fb)) goto loc_006084D2; /* je: equal / zero */

loc_006084CB: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x006084D1u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_006084D1: ;
    POP32(esp, ecx);

loc_006084D2: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_006084D8
 * Original: 0x006084D8 - 0x006084E1 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006084D8(void)
{

loc_006084D8: ;
    eax = ecx;
    MEM32(eax) = 0x880C24;
    esp += 4; return; /* ret */

}

/**
 * sub_006084E1
 * Original: 0x006084E1 - 0x006084E8 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006084E1(void)
{

loc_006084E1: ;
    MEM32(ecx) = 0x880C24;
    esp += 4; return; /* ret */

}

/**
 * sub_006084E8
 * Original: 0x006084E8 - 0x00608505 (29 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006084E8(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006084E8: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x880C24;
    if (TEST_Z(_fa, _fb)) goto loc_006084FF; /* je: equal / zero */

loc_006084F8: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x006084FEu); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_006084FE: ;
    POP32(esp, ecx);

loc_006084FF: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00608505
 * Original: 0x00608505 - 0x00608517 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00608505(void)
{

loc_00608505: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0060850Du); RECOMP_ABI_CALL(0x004BDD77u, sub_004BDD77); /* call 0x004BDD77 */

loc_0060850D: ;
    MEM32(esi) = 0x880C30;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00608517
 * Original: 0x00608517 - 0x00608522 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00608517(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00608517: ;
    MEM32(ecx) = 0x880C30;
    g_seh_ebp = ebp; sub_004BDD80(); return; /* tail jmp 0x004BDD80 */

}

/**
 * sub_00608522
 * Original: 0x00608522 - 0x00608544 (34 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00608522(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00608522: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x880C30;
    PUSH32(esp, 0x00608530u); RECOMP_ABI_CALL(0x004BDD80u, sub_004BDD80); /* call 0x004BDD80 */

loc_00608530: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0060853E; /* je: equal / zero */

loc_00608537: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0060853Du); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_0060853D: ;
    POP32(esp, ecx);

loc_0060853E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00608544
 * Original: 0x00608544 - 0x0060854D (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00608544(void)
{

loc_00608544: ;
    eax = ecx;
    MEM32(eax) = 0x880C4C;
    esp += 4; return; /* ret */

}

/**
 * sub_0060854D
 * Original: 0x0060854D - 0x00608554 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060854D(void)
{

loc_0060854D: ;
    MEM32(ecx) = 0x880C4C;
    esp += 4; return; /* ret */

}

/**
 * sub_00608554
 * Original: 0x00608554 - 0x00608571 (29 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00608554(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00608554: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x880C4C;
    if (TEST_Z(_fa, _fb)) goto loc_0060856B; /* je: equal / zero */

loc_00608564: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0060856Au); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_0060856A: ;
    POP32(esp, ecx);

loc_0060856B: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00608571
 * Original: 0x00608571 - 0x0060857A (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00608571(void)
{

loc_00608571: ;
    eax = ecx;
    MEM32(eax) = 0x880C5C;
    esp += 4; return; /* ret */

}

/**
 * sub_0060857A
 * Original: 0x0060857A - 0x00608581 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060857A(void)
{

loc_0060857A: ;
    MEM32(ecx) = 0x880C5C;
    esp += 4; return; /* ret */

}

/**
 * sub_00608581
 * Original: 0x00608581 - 0x0060859E (29 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00608581(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00608581: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x880C5C;
    if (TEST_Z(_fa, _fb)) goto loc_00608598; /* je: equal / zero */

loc_00608591: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00608597u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_00608597: ;
    POP32(esp, ecx);

loc_00608598: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060859E
 * Original: 0x0060859E - 0x006085A7 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060859E(void)
{

loc_0060859E: ;
    eax = ecx;
    MEM32(eax) = 0x880C68;
    esp += 4; return; /* ret */

}

/**
 * sub_006085A7
 * Original: 0x006085A7 - 0x006085AE (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006085A7(void)
{

loc_006085A7: ;
    MEM32(ecx) = 0x880C68;
    esp += 4; return; /* ret */

}

/**
 * sub_006085AE
 * Original: 0x006085AE - 0x006085CB (29 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006085AE(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006085AE: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x880C68;
    if (TEST_Z(_fa, _fb)) goto loc_006085C5; /* je: equal / zero */

loc_006085BE: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x006085C4u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_006085C4: ;
    POP32(esp, ecx);

loc_006085C5: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_006085CB
 * Original: 0x006085CB - 0x006085D4 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006085CB(void)
{

loc_006085CB: ;
    eax = ecx;
    MEM32(eax) = 0x880C74;
    esp += 4; return; /* ret */

}

/**
 * sub_006085D4
 * Original: 0x006085D4 - 0x006085DB (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006085D4(void)
{

loc_006085D4: ;
    MEM32(ecx) = 0x880C74;
    esp += 4; return; /* ret */

}

/**
 * sub_006085DB
 * Original: 0x006085DB - 0x006085F8 (29 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006085DB(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006085DB: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x880C74;
    if (TEST_Z(_fa, _fb)) goto loc_006085F2; /* je: equal / zero */

loc_006085EB: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x006085F1u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_006085F1: ;
    POP32(esp, ecx);

loc_006085F2: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_006085F8
 * Original: 0x006085F8 - 0x00608601 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006085F8(void)
{

loc_006085F8: ;
    eax = ecx;
    MEM32(eax) = 0x880C80;
    esp += 4; return; /* ret */

}

/**
 * sub_00608601
 * Original: 0x00608601 - 0x00608608 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00608601(void)
{

loc_00608601: ;
    MEM32(ecx) = 0x880C80;
    esp += 4; return; /* ret */

}

/**
 * sub_00608608
 * Original: 0x00608608 - 0x00608625 (29 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00608608(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00608608: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x880C80;
    if (TEST_Z(_fa, _fb)) goto loc_0060861F; /* je: equal / zero */

loc_00608618: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0060861Eu); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_0060861E: ;
    POP32(esp, ecx);

loc_0060861F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00608625
 * Original: 0x00608625 - 0x0060862E (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00608625(void)
{

loc_00608625: ;
    eax = ecx;
    MEM32(eax) = 0x880C88;
    esp += 4; return; /* ret */

}

/**
 * sub_0060862E
 * Original: 0x0060862E - 0x00608635 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060862E(void)
{

loc_0060862E: ;
    MEM32(ecx) = 0x880C88;
    esp += 4; return; /* ret */

}

/**
 * sub_00608635
 * Original: 0x00608635 - 0x00608652 (29 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00608635(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00608635: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x880C88;
    if (TEST_Z(_fa, _fb)) goto loc_0060864C; /* je: equal / zero */

loc_00608645: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0060864Bu); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_0060864B: ;
    POP32(esp, ecx);

loc_0060864C: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00608652
 * Original: 0x00608652 - 0x0060865B (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00608652(void)
{

loc_00608652: ;
    eax = ecx;
    MEM32(eax) = 0x880C94;
    esp += 4; return; /* ret */

}

/**
 * sub_0060865B
 * Original: 0x0060865B - 0x00608662 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060865B(void)
{

loc_0060865B: ;
    MEM32(ecx) = 0x880C94;
    esp += 4; return; /* ret */

}

/**
 * sub_00608662
 * Original: 0x00608662 - 0x0060867F (29 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00608662(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00608662: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x880C94;
    if (TEST_Z(_fa, _fb)) goto loc_00608679; /* je: equal / zero */

loc_00608672: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00608678u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_00608678: ;
    POP32(esp, ecx);

loc_00608679: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060867F
 * Original: 0x0060867F - 0x00608688 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060867F(void)
{

loc_0060867F: ;
    eax = ecx;
    MEM32(eax) = 0x880CA0;
    esp += 4; return; /* ret */

}

/**
 * sub_00608688
 * Original: 0x00608688 - 0x0060868F (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00608688(void)
{

loc_00608688: ;
    MEM32(ecx) = 0x880CA0;
    esp += 4; return; /* ret */

}

/**
 * sub_0060868F
 * Original: 0x0060868F - 0x006086AC (29 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060868F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060868F: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x880CA0;
    if (TEST_Z(_fa, _fb)) goto loc_006086A6; /* je: equal / zero */

loc_0060869F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x006086A5u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_006086A5: ;
    POP32(esp, ecx);

loc_006086A6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_006086AC
 * Original: 0x006086AC - 0x006086B5 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006086AC(void)
{

loc_006086AC: ;
    eax = ecx;
    MEM32(eax) = 0x880CB0;
    esp += 4; return; /* ret */

}

/**
 * sub_006086B5
 * Original: 0x006086B5 - 0x006086BC (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006086B5(void)
{

loc_006086B5: ;
    MEM32(ecx) = 0x880CB0;
    esp += 4; return; /* ret */

}

/**
 * sub_006086BC
 * Original: 0x006086BC - 0x006086D9 (29 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006086BC(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006086BC: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x880CB0;
    if (TEST_Z(_fa, _fb)) goto loc_006086D3; /* je: equal / zero */

loc_006086CC: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x006086D2u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_006086D2: ;
    POP32(esp, ecx);

loc_006086D3: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_006086D9
 * Original: 0x006086D9 - 0x00608709 (48 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006086D9(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006086D9: ;
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0xC));
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x006086E6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x006086E3u); } /* indirect call */
    }

loc_006086E6: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 0x10));
    edi = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x006086F3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x006086F0u); } /* indirect call */
    }

loc_006086F3: ;
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 8));
    PUSH32(esp, 0x00608701u); RECOMP_ABI_CALL(0x00611350u, sub_00611350); /* call 0x00611350 */

loc_00608701: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00608709
 * Original: 0x00608709 - 0x00608720 (23 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00608709(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00608709: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060871E; /* je: equal / zero */

loc_00608713: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00608719u); RECOMP_ABI_CALL(0x00611010u, sub_00611010); /* call 0x00611010 */

loc_00608719: ;
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, ecx);

loc_0060871E: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00608720
 * Original: 0x00608720 - 0x0060872A (10 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00608720(void)
{

loc_00608720: ;
    PUSH32(esp, MEM32(ecx + 8));
    PUSH32(esp, 0x00608728u); RECOMP_ABI_CALL(0x00611290u, sub_00611290); /* call 0x00611290 */

loc_00608728: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0060872A
 * Original: 0x0060872A - 0x0060875C (50 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060872A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060872A: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 8));
    esi = ecx;
    PUSH32(esp, 0x756E626C);
    PUSH32(esp, MEM32(esi + 8));
    PUSH32(esp, 0x0060873Eu); RECOMP_ABI_CALL(0x00611300u, sub_00611300); /* call 0x00611300 */

loc_0060873E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x14), eax (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    PUSH32(esp, eax);
    PUSH32(esp, 0x68616C74);
    PUSH32(esp, MEM32(esi + 8));
    PUSH32(esp, 0x00608755u); RECOMP_ABI_CALL(0x00611300u, sub_00611300); /* call 0x00611300 */

loc_00608755: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060875C
 * Original: 0x0060875C - 0x00608791 (53 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060875C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060875C: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00608781; /* je: equal / zero */

loc_00608765: ;
    PUSH32(esp, MEM32(esi * 8 + 0x8E4D88));
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x00608775u); RECOMP_ABI_CALL(0x005CFF90u, sub_005CFF90); /* call 0x005CFF90 */

loc_00608775: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_00608788; /* je: equal / zero */

loc_0060877B: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 7 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00608765; /* jl: less (signed <) */

loc_00608781: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00608784: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00608788: ;
    eax = MEM32(esi * 8 + 0x8E4D8C);
    goto loc_00608784;

}

/**
 * sub_00608791
 * Original: 0x00608791 - 0x006087C7 (54 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00608791(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00608791: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00608799u); RECOMP_ABI_CALL(0x0060CBA5u, sub_0060CBA5); /* call 0x0060CBA5 */

loc_00608799: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEM32(esi) = 0x880D80;
    PUSH32(esp, 0x006087A8u); RECOMP_ABI_CALL(0x00610FA0u, sub_00610FA0); /* call 0x00610FA0 */

loc_006087A8: ;
    MEM32(esi + 8) = eax;
    ecx = MEM32(0x90E7AC);
    ecx = MEM32(ecx + 0x18);
    ecx = MEM32(ecx + 0x28);
    PUSH32(esp, MEM32(ecx + 8));
    PUSH32(esp, eax);
    PUSH32(esp, 0x006087C0u); RECOMP_ABI_CALL(0x006110A0u, sub_006110A0); /* call 0x006110A0 */

loc_006087C0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_006087C7
 * Original: 0x006087C7 - 0x006087DD (22 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006087C7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_006087C7: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x880D80;
    PUSH32(esp, 0x006087D5u); RECOMP_ABI_CALL(0x00608709u, sub_00608709); /* call 0x00608709 */

loc_006087D5: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0060CBB7(); return; /* tail jmp 0x0060CBB7 */

}

/**
 * sub_006087DD
 * Original: 0x006087DD - 0x006087F9 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006087DD(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006087DD: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x006087E5u); RECOMP_ABI_CALL(0x006087C7u, sub_006087C7); /* call 0x006087C7 */

loc_006087E5: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_006087F3; /* je: equal / zero */

loc_006087EC: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x006087F2u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_006087F2: ;
    POP32(esp, ecx);

loc_006087F3: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_006087F9
 * Original: 0x006087F9 - 0x00608810 (23 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006087F9(void)
{

loc_006087F9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x86DCEC);
    esi = ecx;
    PUSH32(esp, 0x00608806u); RECOMP_ABI_CALL(0x0060CAC7u, sub_0060CAC7); /* call 0x0060CAC7 */

loc_00608806: ;
    MEM32(esi) = 0x880D98;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00608810
 * Original: 0x00608810 - 0x00608832 (34 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00608810(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00608810: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x880D98;
    PUSH32(esp, 0x0060881Eu); RECOMP_ABI_CALL(0x0060CAEFu, sub_0060CAEF); /* call 0x0060CAEF */

loc_0060881E: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0060882C; /* je: equal / zero */

loc_00608825: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0060882Bu); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_0060882B: ;
    POP32(esp, ecx);

loc_0060882C: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00608832
 * Original: 0x00608832 - 0x00608849 (23 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00608832(void)
{

loc_00608832: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x880DD0);
    esi = ecx;
    PUSH32(esp, 0x0060883Fu); RECOMP_ABI_CALL(0x0060CAC7u, sub_0060CAC7); /* call 0x0060CAC7 */

loc_0060883F: ;
    MEM32(esi) = 0x880DB4;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00608849
 * Original: 0x00608849 - 0x0060886B (34 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00608849(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00608849: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x880DB4;
    PUSH32(esp, 0x00608857u); RECOMP_ABI_CALL(0x0060CAEFu, sub_0060CAEF); /* call 0x0060CAEF */

loc_00608857: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00608865; /* je: equal / zero */

loc_0060885E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00608864u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_00608864: ;
    POP32(esp, ecx);

loc_00608865: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060886B
 * Original: 0x0060886B - 0x00608882 (23 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060886B(void)
{

loc_0060886B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x880DF4);
    esi = ecx;
    PUSH32(esp, 0x00608878u); RECOMP_ABI_CALL(0x0060CAC7u, sub_0060CAC7); /* call 0x0060CAC7 */

loc_00608878: ;
    MEM32(esi) = 0x880DD8;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00608882
 * Original: 0x00608882 - 0x006088A4 (34 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00608882(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00608882: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x880DD8;
    PUSH32(esp, 0x00608890u); RECOMP_ABI_CALL(0x0060CAEFu, sub_0060CAEF); /* call 0x0060CAEF */

loc_00608890: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0060889E; /* je: equal / zero */

loc_00608897: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0060889Du); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_0060889D: ;
    POP32(esp, ecx);

loc_0060889E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_006088A4
 * Original: 0x006088A4 - 0x006088BB (23 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006088A4(void)
{

loc_006088A4: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x880E18);
    esi = ecx;
    PUSH32(esp, 0x006088B1u); RECOMP_ABI_CALL(0x0060CAC7u, sub_0060CAC7); /* call 0x0060CAC7 */

loc_006088B1: ;
    MEM32(esi) = 0x880DFC;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_006088BB
 * Original: 0x006088BB - 0x006088DD (34 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006088BB(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006088BB: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x880DFC;
    PUSH32(esp, 0x006088C9u); RECOMP_ABI_CALL(0x0060CAEFu, sub_0060CAEF); /* call 0x0060CAEF */

loc_006088C9: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_006088D7; /* je: equal / zero */

loc_006088D0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x006088D6u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_006088D6: ;
    POP32(esp, ecx);

loc_006088D7: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_006088DD
 * Original: 0x006088DD - 0x006088F4 (23 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006088DD(void)
{

loc_006088DD: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x880E3C);
    esi = ecx;
    PUSH32(esp, 0x006088EAu); RECOMP_ABI_CALL(0x0060CAC7u, sub_0060CAC7); /* call 0x0060CAC7 */

loc_006088EA: ;
    MEM32(esi) = 0x880E20;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_006088F4
 * Original: 0x006088F4 - 0x00608916 (34 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006088F4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006088F4: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x880E20;
    PUSH32(esp, 0x00608902u); RECOMP_ABI_CALL(0x0060CAEFu, sub_0060CAEF); /* call 0x0060CAEF */

loc_00608902: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00608910; /* je: equal / zero */

loc_00608909: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0060890Fu); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_0060890F: ;
    POP32(esp, ecx);

loc_00608910: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00608916
 * Original: 0x00608916 - 0x0060892D (23 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00608916(void)
{

loc_00608916: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x880E64);
    esi = ecx;
    PUSH32(esp, 0x00608923u); RECOMP_ABI_CALL(0x0060CAC7u, sub_0060CAC7); /* call 0x0060CAC7 */

loc_00608923: ;
    MEM32(esi) = 0x880E48;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0060892D
 * Original: 0x0060892D - 0x0060894F (34 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060892D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060892D: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x880E48;
    PUSH32(esp, 0x0060893Bu); RECOMP_ABI_CALL(0x0060CAEFu, sub_0060CAEF); /* call 0x0060CAEF */

loc_0060893B: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00608949; /* je: equal / zero */

loc_00608942: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00608948u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_00608948: ;
    POP32(esp, ecx);

loc_00608949: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060894F
 * Original: 0x0060894F - 0x00608966 (23 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060894F(void)
{

loc_0060894F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x880E8C);
    esi = ecx;
    PUSH32(esp, 0x0060895Cu); RECOMP_ABI_CALL(0x0060CAC7u, sub_0060CAC7); /* call 0x0060CAC7 */

loc_0060895C: ;
    MEM32(esi) = 0x880E70;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00608966
 * Original: 0x00608966 - 0x00608988 (34 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00608966(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00608966: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x880E70;
    PUSH32(esp, 0x00608974u); RECOMP_ABI_CALL(0x0060CAEFu, sub_0060CAEF); /* call 0x0060CAEF */

loc_00608974: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00608982; /* je: equal / zero */

loc_0060897B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00608981u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_00608981: ;
    POP32(esp, ecx);

loc_00608982: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00608988
 * Original: 0x00608988 - 0x0060899F (23 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00608988(void)
{

loc_00608988: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x880EB4);
    esi = ecx;
    PUSH32(esp, 0x00608995u); RECOMP_ABI_CALL(0x0060CAC7u, sub_0060CAC7); /* call 0x0060CAC7 */

loc_00608995: ;
    MEM32(esi) = 0x880E98;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0060899F
 * Original: 0x0060899F - 0x006089C1 (34 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060899F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060899F: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x880E98;
    PUSH32(esp, 0x006089ADu); RECOMP_ABI_CALL(0x0060CAEFu, sub_0060CAEF); /* call 0x0060CAEF */

loc_006089AD: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_006089BB; /* je: equal / zero */

loc_006089B4: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x006089BAu); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_006089BA: ;
    POP32(esp, ecx);

loc_006089BB: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_006089C1
 * Original: 0x006089C1 - 0x006089D8 (23 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006089C1(void)
{

loc_006089C1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x880ED8);
    esi = ecx;
    PUSH32(esp, 0x006089CEu); RECOMP_ABI_CALL(0x0060CAC7u, sub_0060CAC7); /* call 0x0060CAC7 */

loc_006089CE: ;
    MEM32(esi) = 0x880EBC;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_006089D8
 * Original: 0x006089D8 - 0x006089FA (34 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006089D8(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006089D8: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x880EBC;
    PUSH32(esp, 0x006089E6u); RECOMP_ABI_CALL(0x0060CAEFu, sub_0060CAEF); /* call 0x0060CAEF */

loc_006089E6: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_006089F4; /* je: equal / zero */

loc_006089ED: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x006089F3u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_006089F3: ;
    POP32(esp, ecx);

loc_006089F4: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_006089FA
 * Original: 0x006089FA - 0x00608A11 (23 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006089FA(void)
{

loc_006089FA: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x880EFC);
    esi = ecx;
    PUSH32(esp, 0x00608A07u); RECOMP_ABI_CALL(0x0060CAC7u, sub_0060CAC7); /* call 0x0060CAC7 */

loc_00608A07: ;
    MEM32(esi) = 0x880EE0;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00608A11
 * Original: 0x00608A11 - 0x00608A33 (34 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00608A11(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00608A11: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x880EE0;
    PUSH32(esp, 0x00608A1Fu); RECOMP_ABI_CALL(0x0060CAEFu, sub_0060CAEF); /* call 0x0060CAEF */

loc_00608A1F: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00608A2D; /* je: equal / zero */

loc_00608A26: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00608A2Cu); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_00608A2C: ;
    POP32(esp, ecx);

loc_00608A2D: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00608A33
 * Original: 0x00608A33 - 0x00608A4A (23 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00608A33(void)
{

loc_00608A33: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x880F20);
    esi = ecx;
    PUSH32(esp, 0x00608A40u); RECOMP_ABI_CALL(0x0060CAC7u, sub_0060CAC7); /* call 0x0060CAC7 */

loc_00608A40: ;
    MEM32(esi) = 0x880F04;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00608A4A
 * Original: 0x00608A4A - 0x00608A6C (34 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00608A4A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00608A4A: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x880F04;
    PUSH32(esp, 0x00608A58u); RECOMP_ABI_CALL(0x0060CAEFu, sub_0060CAEF); /* call 0x0060CAEF */

loc_00608A58: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00608A66; /* je: equal / zero */

loc_00608A5F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00608A65u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_00608A65: ;
    POP32(esp, ecx);

loc_00608A66: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00608A6C
 * Original: 0x00608A6C - 0x00608A83 (23 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00608A6C(void)
{

loc_00608A6C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x880F48);
    esi = ecx;
    PUSH32(esp, 0x00608A79u); RECOMP_ABI_CALL(0x0060CAC7u, sub_0060CAC7); /* call 0x0060CAC7 */

loc_00608A79: ;
    MEM32(esi) = 0x880F2C;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00608A83
 * Original: 0x00608A83 - 0x00608AA5 (34 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00608A83(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00608A83: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x880F2C;
    PUSH32(esp, 0x00608A91u); RECOMP_ABI_CALL(0x0060CAEFu, sub_0060CAEF); /* call 0x0060CAEF */

loc_00608A91: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00608A9F; /* je: equal / zero */

loc_00608A98: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00608A9Eu); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_00608A9E: ;
    POP32(esp, ecx);

loc_00608A9F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00608AA5
 * Original: 0x00608AA5 - 0x00608ABC (23 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00608AA5(void)
{

loc_00608AA5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x880F6C);
    esi = ecx;
    PUSH32(esp, 0x00608AB2u); RECOMP_ABI_CALL(0x0060CAC7u, sub_0060CAC7); /* call 0x0060CAC7 */

loc_00608AB2: ;
    MEM32(esi) = 0x880F50;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00608ABC
 * Original: 0x00608ABC - 0x00608ADE (34 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00608ABC(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00608ABC: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x880F50;
    PUSH32(esp, 0x00608ACAu); RECOMP_ABI_CALL(0x0060CAEFu, sub_0060CAEF); /* call 0x0060CAEF */

loc_00608ACA: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00608AD8; /* je: equal / zero */

loc_00608AD1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00608AD7u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_00608AD7: ;
    POP32(esp, ecx);

loc_00608AD8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00608ADE
 * Original: 0x00608ADE - 0x00608AF5 (23 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00608ADE(void)
{

loc_00608ADE: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x880F90);
    esi = ecx;
    PUSH32(esp, 0x00608AEBu); RECOMP_ABI_CALL(0x0060CAC7u, sub_0060CAC7); /* call 0x0060CAC7 */

loc_00608AEB: ;
    MEM32(esi) = 0x880F74;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00608AF5
 * Original: 0x00608AF5 - 0x00608B17 (34 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00608AF5(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00608AF5: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x880F74;
    PUSH32(esp, 0x00608B03u); RECOMP_ABI_CALL(0x0060CAEFu, sub_0060CAEF); /* call 0x0060CAEF */

loc_00608B03: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00608B11; /* je: equal / zero */

loc_00608B0A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00608B10u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_00608B10: ;
    POP32(esp, ecx);

loc_00608B11: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00608B17
 * Original: 0x00608B17 - 0x00608B2E (23 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00608B17(void)
{

loc_00608B17: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x880FB4);
    esi = ecx;
    PUSH32(esp, 0x00608B24u); RECOMP_ABI_CALL(0x0060CAC7u, sub_0060CAC7); /* call 0x0060CAC7 */

loc_00608B24: ;
    MEM32(esi) = 0x880F98;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00608B2E
 * Original: 0x00608B2E - 0x00608B50 (34 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00608B2E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00608B2E: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x880F98;
    PUSH32(esp, 0x00608B3Cu); RECOMP_ABI_CALL(0x0060CAEFu, sub_0060CAEF); /* call 0x0060CAEF */

loc_00608B3C: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00608B4A; /* je: equal / zero */

loc_00608B43: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00608B49u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_00608B49: ;
    POP32(esp, ecx);

loc_00608B4A: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00608B50
 * Original: 0x00608B50 - 0x00608B67 (23 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00608B50(void)
{

loc_00608B50: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x880FD8);
    esi = ecx;
    PUSH32(esp, 0x00608B5Du); RECOMP_ABI_CALL(0x0060CAC7u, sub_0060CAC7); /* call 0x0060CAC7 */

loc_00608B5D: ;
    MEM32(esi) = 0x880FBC;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00608B67
 * Original: 0x00608B67 - 0x00608B89 (34 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00608B67(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00608B67: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x880FBC;
    PUSH32(esp, 0x00608B75u); RECOMP_ABI_CALL(0x0060CAEFu, sub_0060CAEF); /* call 0x0060CAEF */

loc_00608B75: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00608B83; /* je: equal / zero */

loc_00608B7C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00608B82u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_00608B82: ;
    POP32(esp, ecx);

loc_00608B83: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00608B89
 * Original: 0x00608B89 - 0x00608BA0 (23 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00608B89(void)
{

loc_00608B89: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x880FFC);
    esi = ecx;
    PUSH32(esp, 0x00608B96u); RECOMP_ABI_CALL(0x0060CAC7u, sub_0060CAC7); /* call 0x0060CAC7 */

loc_00608B96: ;
    MEM32(esi) = 0x880FE0;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00608BA0
 * Original: 0x00608BA0 - 0x00608BC2 (34 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00608BA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00608BA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x880FE0;
    PUSH32(esp, 0x00608BAEu); RECOMP_ABI_CALL(0x0060CAEFu, sub_0060CAEF); /* call 0x0060CAEF */

loc_00608BAE: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00608BBC; /* je: equal / zero */

loc_00608BB5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00608BBBu); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_00608BBB: ;
    POP32(esp, ecx);

loc_00608BBC: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00608BC2
 * Original: 0x00608BC2 - 0x00608BD9 (23 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00608BC2(void)
{

loc_00608BC2: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x881020);
    esi = ecx;
    PUSH32(esp, 0x00608BCFu); RECOMP_ABI_CALL(0x0060CAC7u, sub_0060CAC7); /* call 0x0060CAC7 */

loc_00608BCF: ;
    MEM32(esi) = 0x881004;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00608BD9
 * Original: 0x00608BD9 - 0x00608BFB (34 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00608BD9(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00608BD9: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x881004;
    PUSH32(esp, 0x00608BE7u); RECOMP_ABI_CALL(0x0060CAEFu, sub_0060CAEF); /* call 0x0060CAEF */

loc_00608BE7: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00608BF5; /* je: equal / zero */

loc_00608BEE: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00608BF4u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_00608BF4: ;
    POP32(esp, ecx);

loc_00608BF5: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00608BFB
 * Original: 0x00608BFB - 0x00608C12 (23 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00608BFB(void)
{

loc_00608BFB: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x881044);
    esi = ecx;
    PUSH32(esp, 0x00608C08u); RECOMP_ABI_CALL(0x0060CAC7u, sub_0060CAC7); /* call 0x0060CAC7 */

loc_00608C08: ;
    MEM32(esi) = 0x881028;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00608C12
 * Original: 0x00608C12 - 0x00608C34 (34 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00608C12(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00608C12: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x881028;
    PUSH32(esp, 0x00608C20u); RECOMP_ABI_CALL(0x0060CAEFu, sub_0060CAEF); /* call 0x0060CAEF */

loc_00608C20: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00608C2E; /* je: equal / zero */

loc_00608C27: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00608C2Du); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_00608C2D: ;
    POP32(esp, ecx);

loc_00608C2E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00608C34
 * Original: 0x00608C34 - 0x00608C4B (23 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00608C34(void)
{

loc_00608C34: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x88106C);
    esi = ecx;
    PUSH32(esp, 0x00608C41u); RECOMP_ABI_CALL(0x0060CAC7u, sub_0060CAC7); /* call 0x0060CAC7 */

loc_00608C41: ;
    MEM32(esi) = 0x881050;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00608C4B
 * Original: 0x00608C4B - 0x00608C6D (34 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00608C4B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00608C4B: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x881050;
    PUSH32(esp, 0x00608C59u); RECOMP_ABI_CALL(0x0060CAEFu, sub_0060CAEF); /* call 0x0060CAEF */

loc_00608C59: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00608C67; /* je: equal / zero */

loc_00608C60: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00608C66u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_00608C66: ;
    POP32(esp, ecx);

loc_00608C67: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00608C6D
 * Original: 0x00608C6D - 0x00608C84 (23 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00608C6D(void)
{

loc_00608C6D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x881090);
    esi = ecx;
    PUSH32(esp, 0x00608C7Au); RECOMP_ABI_CALL(0x0060CAC7u, sub_0060CAC7); /* call 0x0060CAC7 */

loc_00608C7A: ;
    MEM32(esi) = 0x881074;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00608C84
 * Original: 0x00608C84 - 0x00608CA6 (34 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00608C84(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00608C84: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x881074;
    PUSH32(esp, 0x00608C92u); RECOMP_ABI_CALL(0x0060CAEFu, sub_0060CAEF); /* call 0x0060CAEF */

loc_00608C92: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00608CA0; /* je: equal / zero */

loc_00608C99: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00608C9Fu); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_00608C9F: ;
    POP32(esp, ecx);

loc_00608CA0: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00608CA6
 * Original: 0x00608CA6 - 0x00608D0E (104 bytes, 45 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00608CA6(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00608CA6: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00608CADu); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_00608CAD: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x00608CB4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00608CB1u); } /* indirect call */
    }

loc_00608CB4: ;
    esi = eax;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x880DD0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00608CC2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00608CBFu); } /* indirect call */
    }

loc_00608CC2: ;
    edi = MEM32(esp + 0xC);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00608CCEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00608CCBu); } /* indirect call */
    }

loc_00608CCE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00608D07; /* jne: not equal / not zero */

loc_00608CD2: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x880DF4);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00608CDEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00608CDBu); } /* indirect call */
    }

loc_00608CDE: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00608CE6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00608CE3u); } /* indirect call */
    }

loc_00608CE6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00608D07; /* jne: not equal / not zero */

loc_00608CEA: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x880E18);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00608CF6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00608CF3u); } /* indirect call */
    }

loc_00608CF6: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00608CFEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00608CFBu); } /* indirect call */
    }

loc_00608CFE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00608D07; /* jne: not equal / not zero */

loc_00608D02: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00608D09;

loc_00608D07: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00608D09: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00608D0E
 * Original: 0x00608D0E - 0x00608DE3 (213 bytes, 95 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00608D0E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    int _jf_00608DD4 = 0; /* per-edge flags of joins */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00608D0E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00608D17u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_00608D17: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x00608D1Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00608D1Bu); } /* indirect call */
    }

loc_00608D1E: ;
    esi = eax;
    PUSH32(esp, 0x00608D25u); RECOMP_ABI_CALL(0x004DC9FAu, sub_004DC9FA); /* call 0x004DC9FA */

loc_00608D25: ;
    ebp = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x00608D2Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00608D2Bu); } /* indirect call */
    }

loc_00608D2E: ;
    esi = MEM32(esp + 0x14);
    edi = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x00608D3Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00608D38u); } /* indirect call */
    }

loc_00608D3B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00608DA1; /* jne: not equal / not zero */

loc_00608D3F: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00608D46u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00608D43u); } /* indirect call */
    }

loc_00608D46: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00608DA1; /* jne: not equal / not zero */

loc_00608D4A: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x00608D51u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00608D4Eu); } /* indirect call */
    }

loc_00608D51: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00608DA1; /* jne: not equal / not zero */

loc_00608D55: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x104); PUSH32(esp, 0x00608D5Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00608D59u); } /* indirect call */
    }

loc_00608D5F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00608DA1; /* jne: not equal / not zero */

loc_00608D63: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xF4); PUSH32(esp, 0x00608D6Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00608D67u); } /* indirect call */
    }

loc_00608D6D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00608DA1; /* jne: not equal / not zero */

loc_00608D71: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x00608D78u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00608D75u); } /* indirect call */
    }

loc_00608D78: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00608DA1; /* jne: not equal / not zero */

loc_00608D7C: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x00608D83u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00608D80u); } /* indirect call */
    }

loc_00608D83: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00608D9D; /* je: equal / zero */

loc_00608D87: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x4C); PUSH32(esp, 0x00608D8Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00608D8Bu); } /* indirect call */
    }

loc_00608D8E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00608D9D; /* je: equal / zero */

loc_00608D92: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x00608D99u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00608D96u); } /* indirect call */
    }

loc_00608D99: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00608DA1; /* je: equal / zero */

loc_00608D9D: ;
    SET_LO8(ebx, 1);
    goto loc_00608DA3;

loc_00608DA1: ;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_00608DA3: ;
    eax = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x00608DABu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00608DA8u); } /* indirect call */
    }

loc_00608DAB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00608DB7; /* jne: not equal / not zero */

loc_00608DAF: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00608DDA; /* je: equal / zero */

loc_00608DB3: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _jf_00608DD4 = (CMP_NE(_fa, _fb)) ? 1 : 0; /* flags of this edge */
    goto loc_00608DD4;

loc_00608DB7: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00608DDA; /* je: equal / zero */

loc_00608DBB: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00608DDA; /* je: equal / zero */

loc_00608DBF: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x00608DC6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00608DC3u); } /* indirect call */
    }

loc_00608DC6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00608DDA; /* jne: not equal / not zero */

loc_00608DCA: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00608DD2u); RECOMP_ABI_CALL(0x004BCAD4u, sub_004BCAD4); /* call 0x004BCAD4 */

loc_00608DD2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _jf_00608DD4 = (CMP_NE(_fa, _fb)) ? 1 : 0; /* flags of this edge */

loc_00608DD4: ;
    if (_jf_00608DD4 /* jne: not equal / not zero */) goto loc_00608DDA;

loc_00608DD6: ;
    SET_LO8(eax, 1);
    goto loc_00608DDC;

loc_00608DDA: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_00608DDC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00608DE3
 * Original: 0x00608DE3 - 0x00608E29 (70 bytes, 30 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00608DE3(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00608DE3: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00608DEAu); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_00608DEA: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x00608DF1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00608DEEu); } /* indirect call */
    }

loc_00608DF1: ;
    esi = MEM32(esp + 0xC);
    edi = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xF4); PUSH32(esp, 0x00608E01u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00608DFBu); } /* indirect call */
    }

loc_00608E01: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00608E22; /* jne: not equal / not zero */

loc_00608E05: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x880E18);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00608E11u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00608E0Eu); } /* indirect call */
    }

loc_00608E11: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00608E19u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00608E16u); } /* indirect call */
    }

loc_00608E19: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00608E22; /* jne: not equal / not zero */

loc_00608E1D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00608E24;

loc_00608E22: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00608E24: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00608E29
 * Original: 0x00608E29 - 0x00608E3A (17 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00608E29(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00608E29: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x00608E32u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00608E2Fu); } /* indirect call */
    }

loc_00608E32: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00608E3A
 * Original: 0x00608E3A - 0x00608E80 (70 bytes, 30 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00608E3A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00608E3A: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00608E41u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_00608E41: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x00608E48u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00608E45u); } /* indirect call */
    }

loc_00608E48: ;
    esi = MEM32(esp + 0xC);
    edi = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x104); PUSH32(esp, 0x00608E58u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00608E52u); } /* indirect call */
    }

loc_00608E58: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00608E79; /* jne: not equal / not zero */

loc_00608E5C: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x880E18);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00608E68u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00608E65u); } /* indirect call */
    }

loc_00608E68: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00608E70u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00608E6Du); } /* indirect call */
    }

loc_00608E70: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00608E79; /* jne: not equal / not zero */

loc_00608E74: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00608E7B;

loc_00608E79: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00608E7B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00608E80
 * Original: 0x00608E80 - 0x00608E91 (17 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00608E80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00608E80: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x00608E89u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00608E86u); } /* indirect call */
    }

loc_00608E89: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00608E91
 * Original: 0x00608E91 - 0x00608F09 (120 bytes, 56 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00608E91(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00608E91: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00608E99u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_00608E99: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x00608EA0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00608E9Du); } /* indirect call */
    }

loc_00608EA0: ;
    esi = eax;
    PUSH32(esp, 0x00608EA7u); RECOMP_ABI_CALL(0x004DC9FAu, sub_004DC9FA); /* call 0x004DC9FA */

loc_00608EA7: ;
    edi = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x00608EB0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00608EADu); } /* indirect call */
    }

loc_00608EB0: ;
    ebx = eax;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x00608EB9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00608EB6u); } /* indirect call */
    }

loc_00608EB9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00608EC1; /* jne: not equal / not zero */

loc_00608EBD: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_00608F03;

loc_00608EC1: ;
    edi = MEM32(esp + 0x10);
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00608ECCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00608EC9u); } /* indirect call */
    }

loc_00608ECC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00608F01; /* jne: not equal / not zero */

loc_00608ED0: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00608F01; /* je: equal / zero */

loc_00608ED4: ;
    eax = MEM32(ebx);
    PUSH32(esp, ebp);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x00608EDCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00608ED9u); } /* indirect call */
    }

loc_00608EDC: ;
    edx = MEM32(eax);
    ebp = MEM32(esi);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00608EE5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00608EE2u); } /* indirect call */
    }

loc_00608EE5: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(ebp + 0x34); PUSH32(esp, 0x00608EEBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00608EE8u); } /* indirect call */
    }

loc_00608EEB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, ebp);
    if (CMP_EQ(_fa, _fb)) goto loc_00608F01; /* je: equal / zero */

loc_00608EF0: ;
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x00608EF8u); RECOMP_ABI_CALL(0x004BCAD4u, sub_004BCAD4); /* call 0x004BCAD4 */

loc_00608EF8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00608F01; /* je: equal / zero */

loc_00608EFC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00608F03;

loc_00608F01: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00608F03: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00608F09
 * Original: 0x00608F09 - 0x00608F46 (61 bytes, 27 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00608F09(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00608F09: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00608F0Fu); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_00608F0F: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x00608F16u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00608F13u); } /* indirect call */
    }

loc_00608F16: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x00608F1Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00608F1Au); } /* indirect call */
    }

loc_00608F1D: ;
    ecx = MEM32(esp + 8);
    esi = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x00608F28u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00608F25u); } /* indirect call */
    }

loc_00608F28: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00608F40; /* jne: not equal / not zero */

loc_00608F2C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00608F40; /* je: equal / zero */

loc_00608F30: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x00608F37u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00608F34u); } /* indirect call */
    }

loc_00608F37: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00608F40; /* jne: not equal / not zero */

loc_00608F3B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00608F42;

loc_00608F40: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00608F42: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00608F46
 * Original: 0x00608F46 - 0x00608F94 (78 bytes, 34 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00608F46(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00608F46: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00608F4Du); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_00608F4D: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x00608F54u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00608F51u); } /* indirect call */
    }

loc_00608F54: ;
    esi = eax;
    PUSH32(esp, 0x00608F5Bu); RECOMP_ABI_CALL(0x004DC9FAu, sub_004DC9FA); /* call 0x004DC9FA */

loc_00608F5B: ;
    edi = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x00608F64u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00608F61u); } /* indirect call */
    }

loc_00608F64: ;
    esi = eax;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x00608F6Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00608F6Au); } /* indirect call */
    }

loc_00608F6D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00608F75; /* jne: not equal / not zero */

loc_00608F71: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_00608F8F;

loc_00608F75: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00608F8D; /* je: equal / zero */

loc_00608F79: ;
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = esi;
    PUSH32(esp, 0x00608F84u); RECOMP_ABI_CALL(0x004BCAD4u, sub_004BCAD4); /* call 0x004BCAD4 */

loc_00608F84: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00608F8D; /* je: equal / zero */

loc_00608F88: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00608F8F;

loc_00608F8D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00608F8F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00608F94
 * Original: 0x00608F94 - 0x00609031 (157 bytes, 70 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00608F94(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00608F94: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00608F9Du); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_00608F9D: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x00608FA4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00608FA1u); } /* indirect call */
    }

loc_00608FA4: ;
    esi = eax;
    PUSH32(esp, 0x00608FABu); RECOMP_ABI_CALL(0x004DC9FAu, sub_004DC9FA); /* call 0x004DC9FA */

loc_00608FAB: ;
    edi = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x00608FB4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00608FB1u); } /* indirect call */
    }

loc_00608FB4: ;
    ebp = eax;
    eax = MEM32(edi);
    ecx = edi;
    SET_LO8(ebx, 1);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x00608FBFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00608FBCu); } /* indirect call */
    }

loc_00608FBF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    edi = MEM32(esp + 0x14);
    if (CMP_NE(_fa, _fb)) goto loc_00609014; /* jne: not equal / not zero */

loc_00608FC8: ;
    eax = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x44); PUSH32(esp, 0x00608FD0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00608FCDu); } /* indirect call */
    }

loc_00608FD0: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00608FD7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00608FD4u); } /* indirect call */
    }

loc_00608FD7: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x865210);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00608FE5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00608FE2u); } /* indirect call */
    }

loc_00608FE5: ;
    ebx = eax;
    PUSH32(esp, 0x00608FECu); RECOMP_ABI_CALL(0x004DC976u, sub_004DC976); /* call 0x004DC976 */

loc_00608FEC: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00608FF3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00608FF0u); } /* indirect call */
    }

loc_00608FF3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00609012; /* je: equal / zero */

loc_00608FF7: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060900E; /* je: equal / zero */

loc_00608FFB: ;
    eax = MEM32(esi);
    ebx = MEM32(edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x68); PUSH32(esp, 0x00609004u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00609001u); } /* indirect call */
    }

loc_00609004: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebx + 0x18); PUSH32(esp, 0x0060900Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00609007u); } /* indirect call */
    }

loc_0060900A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00609012; /* jne: not equal / not zero */

loc_0060900E: ;
    SET_LO8(ebx, 1);
    goto loc_00609014;

loc_00609012: ;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_00609014: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x0060901Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00609018u); } /* indirect call */
    }

loc_0060901B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00609028; /* jne: not equal / not zero */

loc_0060901F: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00609028; /* je: equal / zero */

loc_00609023: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0060902A;

loc_00609028: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0060902A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00609031
 * Original: 0x00609031 - 0x00609081 (80 bytes, 32 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00609031(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00609031: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00609037u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_00609037: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x0060903Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060903Bu); } /* indirect call */
    }

loc_0060903E: ;
    esi = eax;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x880EB4);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0060904Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00609049u); } /* indirect call */
    }

loc_0060904C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 8));
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00609057u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00609054u); } /* indirect call */
    }

loc_00609057: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0060907B; /* jne: not equal / not zero */

loc_0060905B: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x880E8C);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00609067u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00609064u); } /* indirect call */
    }

loc_00609067: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 8));
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00609072u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060906Fu); } /* indirect call */
    }

loc_00609072: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0060907B; /* jne: not equal / not zero */

loc_00609076: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0060907D;

loc_0060907B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0060907D: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00609081
 * Original: 0x00609081 - 0x006090CB (74 bytes, 33 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00609081(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00609081: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0060908Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060908Au); } /* indirect call */
    }

loc_0060908D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_006090C5; /* jne: not equal / not zero */

loc_00609091: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00609098u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00609095u); } /* indirect call */
    }

loc_00609098: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_006090C5; /* jne: not equal / not zero */

loc_0060909C: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x006090A3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x006090A0u); } /* indirect call */
    }

loc_006090A3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_006090C5; /* jne: not equal / not zero */

loc_006090A7: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xEC); PUSH32(esp, 0x006090B1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x006090ABu); } /* indirect call */
    }

loc_006090B1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_006090C5; /* jne: not equal / not zero */

loc_006090B5: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x006090BCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x006090B9u); } /* indirect call */
    }

loc_006090BC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_006090C5; /* jne: not equal / not zero */

loc_006090C0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_006090C7;

loc_006090C5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_006090C7: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_006090CB
 * Original: 0x006090CB - 0x006090DE (19 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006090CB(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_006090CB: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x006090D4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x006090D1u); } /* indirect call */
    }

loc_006090D4: ;
    SET_LO8(eax, LO8(eax) - 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_006090DE
 * Original: 0x006090DE - 0x0060911A (60 bytes, 28 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006090DE(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006090DE: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x006090EAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x006090E7u); } /* indirect call */
    }

loc_006090EA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00609114; /* jne: not equal / not zero */

loc_006090EE: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x006090F5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x006090F2u); } /* indirect call */
    }

loc_006090F5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00609114; /* jne: not equal / not zero */

loc_006090F9: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x00609100u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x006090FDu); } /* indirect call */
    }

loc_00609100: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00609114; /* jne: not equal / not zero */

loc_00609104: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x0060910Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00609108u); } /* indirect call */
    }

loc_0060910B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00609114; /* jne: not equal / not zero */

loc_0060910F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00609116;

loc_00609114: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00609116: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060911A
 * Original: 0x0060911A - 0x00609143 (41 bytes, 18 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060911A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060911A: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xEC); PUSH32(esp, 0x00609129u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00609123u); } /* indirect call */
    }

loc_00609129: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060913D; /* je: equal / zero */

loc_0060912D: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x00609134u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00609131u); } /* indirect call */
    }

loc_00609134: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0060913D; /* jne: not equal / not zero */

loc_00609138: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0060913F;

loc_0060913D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0060913F: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00609143
 * Original: 0x00609143 - 0x00609154 (17 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00609143(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00609143: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x0060914Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00609149u); } /* indirect call */
    }

loc_0060914C: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00609154
 * Original: 0x00609154 - 0x006091D4 (128 bytes, 55 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00609154(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00609154: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0060915Bu); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_0060915B: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x00609162u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060915Fu); } /* indirect call */
    }

loc_00609162: ;
    esi = eax;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x880EFC);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00609170u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060916Du); } /* indirect call */
    }

loc_00609170: ;
    edi = MEM32(esp + 0xC);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0060917Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00609179u); } /* indirect call */
    }

loc_0060917C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_006091CD; /* jne: not equal / not zero */

loc_00609180: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x880F20);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0060918Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00609189u); } /* indirect call */
    }

loc_0060918C: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00609194u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00609191u); } /* indirect call */
    }

loc_00609194: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_006091CD; /* jne: not equal / not zero */

loc_00609198: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x880F48);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x006091A4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x006091A1u); } /* indirect call */
    }

loc_006091A4: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x006091ACu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x006091A9u); } /* indirect call */
    }

loc_006091AC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_006091CD; /* jne: not equal / not zero */

loc_006091B0: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x880F6C);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x006091BCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x006091B9u); } /* indirect call */
    }

loc_006091BC: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x006091C4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x006091C1u); } /* indirect call */
    }

loc_006091C4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_006091CD; /* jne: not equal / not zero */

loc_006091C8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_006091CF;

loc_006091CD: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_006091CF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_006091D4
 * Original: 0x006091D4 - 0x0060928E (186 bytes, 84 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006091D4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_006091D4: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x006091DDu); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_006091DD: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x006091E4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x006091E1u); } /* indirect call */
    }

loc_006091E4: ;
    esi = MEM32(esp + 0x14);
    edi = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xDC); PUSH32(esp, 0x006091F4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x006091EEu); } /* indirect call */
    }

loc_006091F4: ;
    ebp = eax;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x68); PUSH32(esp, 0x006091FDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x006091FAu); } /* indirect call */
    }

loc_006091FD: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xDC); PUSH32(esp, 0x00609207u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00609201u); } /* indirect call */
    }

loc_00609207: ;
    ebx = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x00609210u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060920Du); } /* indirect call */
    }

loc_00609210: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00609285; /* jne: not equal / not zero */

loc_00609214: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0060921Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00609218u); } /* indirect call */
    }

loc_0060921B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00609285; /* jne: not equal / not zero */

loc_0060921F: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x00609226u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00609223u); } /* indirect call */
    }

loc_00609226: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00609285; /* jne: not equal / not zero */

loc_0060922A: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00609285; /* jne: not equal / not zero */

loc_0060922F: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00609285; /* jne: not equal / not zero */

loc_00609233: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x0060923Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00609237u); } /* indirect call */
    }

loc_0060923A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00609249; /* jne: not equal / not zero */

loc_0060923E: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x4C); PUSH32(esp, 0x00609245u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00609242u); } /* indirect call */
    }

loc_00609245: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00609285; /* je: equal / zero */

loc_00609249: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x00609250u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060924Du); } /* indirect call */
    }

loc_00609250: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0060925F; /* jne: not equal / not zero */

loc_00609254: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x0060925Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00609258u); } /* indirect call */
    }

loc_0060925B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00609285; /* je: equal / zero */

loc_0060925F: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x00609266u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00609263u); } /* indirect call */
    }

loc_00609266: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00609285; /* jne: not equal / not zero */

loc_0060926A: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x00609271u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060926Eu); } /* indirect call */
    }

loc_00609271: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00609285; /* je: equal / zero */

loc_00609275: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x0060927Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00609279u); } /* indirect call */
    }

loc_0060927C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00609285; /* jne: not equal / not zero */

loc_00609280: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00609287;

loc_00609285: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00609287: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060928E
 * Original: 0x0060928E - 0x006092A4 (22 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060928E(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0060928E: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xFC); PUSH32(esp, 0x0060929Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00609294u); } /* indirect call */
    }

loc_0060929A: ;
    SET_LO8(eax, LO8(eax) - 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_006092A4
 * Original: 0x006092A4 - 0x006092B5 (17 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006092A4(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_006092A4: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x006092ADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x006092AAu); } /* indirect call */
    }

loc_006092AD: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_006092B5
 * Original: 0x006092B5 - 0x00609305 (80 bytes, 36 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006092B5(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006092B5: ;
    ecx = MEM32(0x90E7AC);
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x30); PUSH32(esp, 0x006092C2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x006092BFu); } /* indirect call */
    }

loc_006092C2: ;
    edi = MEM32(esp + 0xC);
    esi = eax;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x006092CFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x006092CCu); } /* indirect call */
    }

loc_006092CF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_006092FE; /* jne: not equal / not zero */

loc_006092D3: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x60); PUSH32(esp, 0x006092DAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x006092D7u); } /* indirect call */
    }

loc_006092DA: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x006092E1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x006092DEu); } /* indirect call */
    }

loc_006092E1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006092FE; /* je: equal / zero */

loc_006092E5: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x006092ECu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x006092E9u); } /* indirect call */
    }

loc_006092EC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006092FE; /* je: equal / zero */

loc_006092F0: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x006092F7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x006092F4u); } /* indirect call */
    }

loc_006092F7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_006092FE; /* jne: not equal / not zero */

loc_006092FB: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00609300;

loc_006092FE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00609300: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00609305
 * Original: 0x00609305 - 0x00609316 (17 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00609305(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00609305: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x0060930Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060930Bu); } /* indirect call */
    }

loc_0060930E: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00609316
 * Original: 0x00609316 - 0x0060938B (117 bytes, 50 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00609316(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00609316: ;
    ecx = MEM32(0x90E7AC);
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x30); PUSH32(esp, 0x00609322u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060931Fu); } /* indirect call */
    }

loc_00609322: ;
    esi = eax;
    PUSH32(esp, 0x00609329u); RECOMP_ABI_CALL(0x004DC9FAu, sub_004DC9FA); /* call 0x004DC9FA */

loc_00609329: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x00609330u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060932Du); } /* indirect call */
    }

loc_00609330: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00609338; /* jne: not equal / not zero */

loc_00609334: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_00609387;

loc_00609338: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00609344u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00609341u); } /* indirect call */
    }

loc_00609344: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00609384; /* jne: not equal / not zero */

loc_00609348: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x60); PUSH32(esp, 0x0060934Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060934Cu); } /* indirect call */
    }

loc_0060934F: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00609356u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00609353u); } /* indirect call */
    }

loc_00609356: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00609384; /* je: equal / zero */

loc_0060935A: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00609361u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060935Eu); } /* indirect call */
    }

loc_00609361: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00609384; /* je: equal / zero */

loc_00609365: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xDC); PUSH32(esp, 0x0060936Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00609369u); } /* indirect call */
    }

loc_0060936F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00609384; /* je: equal / zero */

loc_00609374: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x0060937Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00609378u); } /* indirect call */
    }

loc_0060937B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00609384; /* je: equal / zero */

loc_0060937F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00609386;

loc_00609384: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00609386: ;
    POP32(esp, edi);

loc_00609387: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060938B
 * Original: 0x0060938B - 0x006093B1 (38 bytes, 18 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060938B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060938B: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x00609397u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00609394u); } /* indirect call */
    }

loc_00609397: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_006093AB; /* jne: not equal / not zero */

loc_0060939B: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x006093A2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060939Fu); } /* indirect call */
    }

loc_006093A2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_006093AB; /* jne: not equal / not zero */

loc_006093A6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_006093AD;

loc_006093AB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_006093AD: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_006093B1
 * Original: 0x006093B1 - 0x00609426 (117 bytes, 50 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006093B1(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006093B1: ;
    ecx = MEM32(0x90E7AC);
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x30); PUSH32(esp, 0x006093BDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x006093BAu); } /* indirect call */
    }

loc_006093BD: ;
    esi = eax;
    PUSH32(esp, 0x006093C4u); RECOMP_ABI_CALL(0x004DC9FAu, sub_004DC9FA); /* call 0x004DC9FA */

loc_006093C4: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x006093CBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x006093C8u); } /* indirect call */
    }

loc_006093CB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_006093D3; /* jne: not equal / not zero */

loc_006093CF: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_00609422;

loc_006093D3: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x006093DFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x006093DCu); } /* indirect call */
    }

loc_006093DF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0060941F; /* jne: not equal / not zero */

loc_006093E3: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x60); PUSH32(esp, 0x006093EAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x006093E7u); } /* indirect call */
    }

loc_006093EA: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x006093F1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x006093EEu); } /* indirect call */
    }

loc_006093F1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060941F; /* je: equal / zero */

loc_006093F5: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x006093FCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x006093F9u); } /* indirect call */
    }

loc_006093FC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060941F; /* je: equal / zero */

loc_00609400: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xDC); PUSH32(esp, 0x0060940Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00609404u); } /* indirect call */
    }

loc_0060940A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0060941F; /* jne: not equal / not zero */

loc_0060940F: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x00609416u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00609413u); } /* indirect call */
    }

loc_00609416: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060941F; /* je: equal / zero */

loc_0060941A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00609421;

loc_0060941F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00609421: ;
    POP32(esp, edi);

loc_00609422: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00609426
 * Original: 0x00609426 - 0x0060944C (38 bytes, 18 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00609426(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00609426: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x00609432u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060942Fu); } /* indirect call */
    }

loc_00609432: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00609446; /* jne: not equal / not zero */

loc_00609436: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0060943Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060943Au); } /* indirect call */
    }

loc_0060943D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00609446; /* jne: not equal / not zero */

loc_00609441: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00609448;

loc_00609446: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00609448: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060944C
 * Original: 0x0060944C - 0x006094B4 (104 bytes, 45 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060944C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060944C: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00609453u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_00609453: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x0060945Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00609457u); } /* indirect call */
    }

loc_0060945A: ;
    esi = eax;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x880FB4);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00609468u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00609465u); } /* indirect call */
    }

loc_00609468: ;
    edi = MEM32(esp + 0xC);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00609474u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00609471u); } /* indirect call */
    }

loc_00609474: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_006094AD; /* jne: not equal / not zero */

loc_00609478: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x880FD8);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00609484u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00609481u); } /* indirect call */
    }

loc_00609484: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0060948Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00609489u); } /* indirect call */
    }

loc_0060948C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_006094AD; /* jne: not equal / not zero */

loc_00609490: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x880FFC);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0060949Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00609499u); } /* indirect call */
    }

loc_0060949C: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x006094A4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x006094A1u); } /* indirect call */
    }

loc_006094A4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_006094AD; /* jne: not equal / not zero */

loc_006094A8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_006094AF;

loc_006094AD: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_006094AF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_006094B4
 * Original: 0x006094B4 - 0x00609517 (99 bytes, 43 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006094B4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006094B4: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x006094C0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x006094BDu); } /* indirect call */
    }

loc_006094C0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00609511; /* jne: not equal / not zero */

loc_006094C4: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x006094CBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x006094C8u); } /* indirect call */
    }

loc_006094CB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00609511; /* jne: not equal / not zero */

loc_006094CF: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x006094D6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x006094D3u); } /* indirect call */
    }

loc_006094D6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00609511; /* jne: not equal / not zero */

loc_006094DA: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x4C); PUSH32(esp, 0x006094E1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x006094DEu); } /* indirect call */
    }

loc_006094E1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00609511; /* jne: not equal / not zero */

loc_006094E5: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x114); PUSH32(esp, 0x006094EFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x006094E9u); } /* indirect call */
    }

loc_006094EF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00609511; /* jne: not equal / not zero */

loc_006094F3: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x100); PUSH32(esp, 0x006094FDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x006094F7u); } /* indirect call */
    }

loc_006094FD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00609511; /* jne: not equal / not zero */

loc_00609501: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x00609508u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00609505u); } /* indirect call */
    }

loc_00609508: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00609511; /* jne: not equal / not zero */

loc_0060950C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00609513;

loc_00609511: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00609513: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00609517
 * Original: 0x00609517 - 0x0060952D (22 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00609517(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00609517: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x100); PUSH32(esp, 0x00609523u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060951Du); } /* indirect call */
    }

loc_00609523: ;
    SET_LO8(eax, LO8(eax) - 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060952D
 * Original: 0x0060952D - 0x0060953E (17 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060952D(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0060952D: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x00609536u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00609533u); } /* indirect call */
    }

loc_00609536: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060953E
 * Original: 0x0060953E - 0x00609554 (22 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060953E(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0060953E: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x114); PUSH32(esp, 0x0060954Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00609544u); } /* indirect call */
    }

loc_0060954A: ;
    SET_LO8(eax, LO8(eax) - 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00609554
 * Original: 0x00609554 - 0x00609565 (17 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00609554(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00609554: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x0060955Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060955Au); } /* indirect call */
    }

loc_0060955D: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00609565
 * Original: 0x00609565 - 0x00609578 (19 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00609565(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00609565: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x4C); PUSH32(esp, 0x0060956Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060956Bu); } /* indirect call */
    }

loc_0060956E: ;
    SET_LO8(eax, LO8(eax) - 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00609578
 * Original: 0x00609578 - 0x00609589 (17 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00609578(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00609578: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x00609581u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060957Eu); } /* indirect call */
    }

loc_00609581: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00609589
 * Original: 0x00609589 - 0x0060958E (5 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00609589(void)
{

loc_00609589: ;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060958E
 * Original: 0x0060958E - 0x006095B4 (38 bytes, 18 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060958E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060958E: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x0060959Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00609597u); } /* indirect call */
    }

loc_0060959A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_006095AE; /* jne: not equal / not zero */

loc_0060959E: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x006095A5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x006095A2u); } /* indirect call */
    }

loc_006095A5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_006095AE; /* jne: not equal / not zero */

loc_006095A9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_006095B0;

loc_006095AE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_006095B0: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_006095B4
 * Original: 0x006095B4 - 0x006095DF (43 bytes, 16 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006095B4(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_006095B4: ;
    PUSH32(esp, 0x006095B9u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_006095B9: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x006095C0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x006095BDu); } /* indirect call */
    }

loc_006095C0: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x88106C);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x006095CCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x006095C9u); } /* indirect call */
    }

loc_006095CC: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 4));
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x006095D7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x006095D4u); } /* indirect call */
    }

loc_006095D7: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_006095DF
 * Original: 0x006095DF - 0x0060961B (60 bytes, 28 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006095DF(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006095DF: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x006095EBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x006095E8u); } /* indirect call */
    }

loc_006095EB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00609615; /* jne: not equal / not zero */

loc_006095EF: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x006095F6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x006095F3u); } /* indirect call */
    }

loc_006095F6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00609615; /* jne: not equal / not zero */

loc_006095FA: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x00609601u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x006095FEu); } /* indirect call */
    }

loc_00609601: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00609615; /* jne: not equal / not zero */

loc_00609605: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x0060960Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00609609u); } /* indirect call */
    }

loc_0060960C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00609615; /* jne: not equal / not zero */

loc_00609610: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00609617;

loc_00609615: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00609617: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060961B
 * Original: 0x0060961B - 0x0060962E (19 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060961B(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0060961B: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x00609624u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00609621u); } /* indirect call */
    }

loc_00609624: ;
    SET_LO8(eax, LO8(eax) - 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060962E
 * Original: 0x0060962E - 0x0060963F (17 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060962E(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0060962E: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x00609637u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00609634u); } /* indirect call */
    }

loc_00609637: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

}
