/**
 * nhl_07_recomp - Recompiled code chunk 129
 * Functions: 250 (0x001D64F0 - 0x001DC9A0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_001D64F0
 * Original: 0x001D64F0 - 0x001D6565 (117 bytes, 41 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D64F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D64F0: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_001D6508; /* jne: not equal / not zero */

loc_001D64FC: ;
    esi = MEM32(esp + 0xC);
    MEM32(esi) = 0xFFFFFEDAu;
    goto loc_001D653D;

loc_001D6508: ;
    esi = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001D6512u); RECOMP_ABI_CALL(0x0003617Au, sub_0003617A); /* call 0x0003617A */

loc_001D6512: ;
    ecx = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x20);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, 0x20);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x24);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x001D653Du); RECOMP_ABI_CALL(0x00572FEFu, sub_00572FEF); /* call 0x00572FEF */

loc_001D653D: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x001D6546u); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_001D6546: ;
    _fa = (uint32_t)(MEM8(esp + 0x14)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x14), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001D6555; /* je: equal / zero */

loc_001D654D: ;
    MEM32(esp + 0x14) = 0;

loc_001D6555: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0x001D655Eu); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_001D655E: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_001D6590
 * Original: 0x001D6590 - 0x001D6605 (117 bytes, 41 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D6590(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D6590: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_001D65A8; /* jne: not equal / not zero */

loc_001D659C: ;
    esi = MEM32(esp + 0xC);
    MEM32(esi) = 0xFFFFFEDAu;
    goto loc_001D65DD;

loc_001D65A8: ;
    esi = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001D65B2u); RECOMP_ABI_CALL(0x005743B7u, sub_005743B7); /* call 0x005743B7 */

loc_001D65B2: ;
    ecx = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x20);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x24);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x001D65DDu); RECOMP_ABI_CALL(0x00572FEFu, sub_00572FEF); /* call 0x00572FEF */

loc_001D65DD: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x001D65E6u); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_001D65E6: ;
    _fa = (uint32_t)(MEM8(esp + 0x14)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x14), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001D65F5; /* je: equal / zero */

loc_001D65ED: ;
    MEM32(esp + 0x14) = 0;

loc_001D65F5: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0x001D65FEu); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_001D65FE: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_001D6630
 * Original: 0x001D6630 - 0x001D66B2 (130 bytes, 45 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D6630(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D6630: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_001D6648; /* jne: not equal / not zero */

loc_001D663C: ;
    esi = MEM32(esp + 0xC);
    MEM32(esi) = 0xFFFFFEDAu;
    goto loc_001D668A;

loc_001D6648: ;
    esi = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001D6652u); RECOMP_ABI_CALL(0x00567475u, sub_00567475); /* call 0x00567475 */

loc_001D6652: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D6665; /* jne: not equal / not zero */

loc_001D6659: ;
    esi = MEM32(esp + 0xC);
    MEM32(esi) = 0;
    goto loc_001D668A;

loc_001D6665: ;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x48);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x24);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x001D668Au); RECOMP_ABI_CALL(0x00572FEFu, sub_00572FEF); /* call 0x00572FEF */

loc_001D668A: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x001D6693u); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_001D6693: ;
    _fa = (uint32_t)(MEM8(esp + 0x14)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x14), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001D66A2; /* je: equal / zero */

loc_001D669A: ;
    MEM32(esp + 0x14) = 0;

loc_001D66A2: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0x001D66ABu); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_001D66AB: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_001D66E0
 * Original: 0x001D66E0 - 0x001D6762 (130 bytes, 45 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D66E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D66E0: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_001D66F8; /* jne: not equal / not zero */

loc_001D66EC: ;
    esi = MEM32(esp + 0xC);
    MEM32(esi) = 0xFFFFFEDAu;
    goto loc_001D673A;

loc_001D66F8: ;
    esi = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001D6702u); RECOMP_ABI_CALL(0x0056747Bu, sub_0056747B); /* call 0x0056747B */

loc_001D6702: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D6715; /* jne: not equal / not zero */

loc_001D6709: ;
    esi = MEM32(esp + 0xC);
    MEM32(esi) = 0;
    goto loc_001D673A;

loc_001D6715: ;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x30);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x24);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x001D673Au); RECOMP_ABI_CALL(0x00572FEFu, sub_00572FEF); /* call 0x00572FEF */

loc_001D673A: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x001D6743u); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_001D6743: ;
    _fa = (uint32_t)(MEM8(esp + 0x14)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x14), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001D6752; /* je: equal / zero */

loc_001D674A: ;
    MEM32(esp + 0x14) = 0;

loc_001D6752: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0x001D675Bu); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_001D675B: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_001D6790
 * Original: 0x001D6790 - 0x001D67AE (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D6790(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D6790: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001D6798u); RECOMP_ABI_CALL(0x0002562Cu, sub_0002562C); /* call 0x0002562C */

loc_001D6798: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001D67A8; /* je: equal / zero */

loc_001D679F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001D67A5u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_001D67A5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001D67A8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D67C0
 * Original: 0x001D67C0 - 0x001D6801 (65 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D67C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D67C0: ;
    SET_LO8(edx, MEM8(ecx + 0x10));
    eax = MEM32(ecx + 0x20);
    SET_LO8(edx, LO8(edx) | 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(ecx + 0x10) = LO8(edx);
    if (CMP_EQ(_fa, _fb)) goto loc_001D6800; /* je: equal / zero */

loc_001D67D0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(ecx + 0x24)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 0x24), LO16(eax) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001D6800; /* jbe: below or equal (unsigned <=) */

loc_001D67D8: ;
    PUSH32(esp, esi);
    /* nop */

loc_001D67E0: ;
    edx = MEM32(ecx + 0x20);
    SET_LO16(edx, MEM16(edx + eax * 2));
    esi = MEM32(ecx + 0x28);
    esi = MEM32(esi + 0x10);
    edx = ZX16(LO16(edx));
    edx = esi + edx * 4;
    MEM32(edx) = MEM32(edx) | 1;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = ZX16(MEM16(ecx + 0x24));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001D67E0; /* jb: below (unsigned <) */

loc_001D67FF: ;
    POP32(esp, esi);

loc_001D6800: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001D6820
 * Original: 0x001D6820 - 0x001D6861 (65 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D6820(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D6820: ;
    SET_LO8(edx, MEM8(ecx + 0x10));
    eax = MEM32(ecx + 0x20);
    SET_LO8(edx, LO8(edx) & 0xFE);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(ecx + 0x10) = LO8(edx);
    if (CMP_EQ(_fa, _fb)) goto loc_001D6860; /* je: equal / zero */

loc_001D6830: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(ecx + 0x24)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 0x24), LO16(eax) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001D6860; /* jbe: below or equal (unsigned <=) */

loc_001D6838: ;
    PUSH32(esp, esi);
    /* nop */

loc_001D6840: ;
    edx = MEM32(ecx + 0x20);
    SET_LO16(edx, MEM16(edx + eax * 2));
    esi = MEM32(ecx + 0x28);
    esi = MEM32(esi + 0x10);
    edx = ZX16(LO16(edx));
    edx = esi + edx * 4;
    MEM32(edx) = MEM32(edx) & 0xFFFFFFFEu;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = ZX16(MEM16(ecx + 0x24));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001D6840; /* jb: below (unsigned <) */

loc_001D685F: ;
    POP32(esp, esi);

loc_001D6860: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001D6880
 * Original: 0x001D6880 - 0x001D68A8 (40 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D6880(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D6880: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D688Bu); RECOMP_ABI_CALL(0x000356D0u, sub_000356D0); /* call 0x000356D0 */

loc_001D688B: ;
    SET_LO8(eax, MEM8(esp + 0xC));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001D68A2; /* je: equal / zero */

loc_001D6896: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x001D68A2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D689Fu); } /* indirect call */
    }

loc_001D68A2: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D68C0
 * Original: 0x001D68C0 - 0x001D6A05 (325 bytes, 97 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D68C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_001D68C0: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(edi + 0xC);
    esi = MEM32(edi + 4);
    eax = 0x55555556;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    eax = edx;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x1F) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(edi + 0x410) = LO8(eax);
    eax = ZX8(LO8(eax));
    xmm0 = XMM_SCALAR(MEMF(edi + eax * 4 + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x8F4C04); /* mulss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7F11F4); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001D6908; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(0x7F11F4)) */

loc_001D68F9: ;
    ecx = MEM32(edi + 0x440);
    ecx = MEM32(ecx);
    PUSH32(esp, 0x8F4C18);
    goto loc_001D6915;

loc_001D6908: ;
    edx = MEM32(edi + 0x440);
    ecx = MEM32(edx);
    PUSH32(esp, 0x8F4C38);

loc_001D6915: ;
    PUSH32(esp, 0x001D691Au); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_001D691A: ;
    eax = MEM32(edi + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001D6A01; /* jle: less or equal (signed <=) */

loc_001D6929: ;
    xmm1 = XMM_SCALAR(MEMF(0x7F11F4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x7F11F8)); /* movss */
    PUSH32(esp, ebx);
    goto loc_001D6940;

loc_001D693C: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edi;

loc_001D6940: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D69A0; /* je: equal / zero */

loc_001D6949: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D69A0; /* je: equal / zero */

loc_001D694D: ;
    SET_LO8(eax, MEM8(edi + 0x410));
    _fb = (uint32_t)(MEM8(esi)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + MEM8(esi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = ZX8(LO8(eax));
    xmm0 = XMM_SCALAR(MEMF(edi + eax * 4 + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x8F4C04); /* mulss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001D6972; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_001D696B: ;
    eax = 2;
    goto loc_001D6980;

loc_001D6972: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001D697E; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_001D6977: ;
    eax = 1;
    goto loc_001D6980;

loc_001D697E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001D6980: ;
    MEM8(esi + 2) = LO8(ecx);
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x3C);
    MEM8(esi + 1) = LO8(eax);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3C);
    SET_LO8(edx, MEM8(ecx + 0x8B4040));
    MEM8(esi + 3) = LO8(edx);
    SET_LO16(edx, MEM16(eax + 0x8B4044));
    goto loc_001D69B6;

loc_001D69A0: ;
    MEM8(esi + 1) = 2;
    MEM8(esi + 2) = LO8(ecx);
    SET_LO8(eax, MEM8(0x8B40B8));
    MEM8(esi + 3) = LO8(eax);
    SET_LO16(edx, MEM16(0x8B40BC));

loc_001D69B6: ;
    ecx = MEM32(edi);
    MEM16(ecx + ebp * 2) = LO16(edx);
    ecx = ZX8(MEM8(esi + 1));
    eax = ecx;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x1E);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3C);
    SET_LO16(edx, MEM16(eax + 0x8B4040));
    eax = ZX8(MEM8(esi));
    MEM8(esi + 3) = LO8(edx);
    ebx = ZX16(LO16(edx));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esi + -2) = LO8(edx);
    eax = MEM32(edi);
    edx = ZX8(LO8(edx));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO16(ecx, MEM16(ecx * 2 + 0x8B4044));
    MEM16(eax + ebp * 2) = LO16(ecx);
    eax = MEM32(edi + 8);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D693C; /* jl: less (signed <) */

loc_001D6A00: ;
    POP32(esp, ebx);

loc_001D6A01: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001D6A60
 * Original: 0x001D6A60 - 0x001D6BB9 (345 bytes, 101 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D6A60(void)
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

loc_001D6A60: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xC);
    eax = 0x55555556;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    eax = edx;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x1F) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, edi);
    edi = MEM32(0x8F4CA0);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    MEM8(esi + 0x410) = LO8(eax);
    MEM32(0x8F4CA0) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_001D6A99; /* jl: less (signed <) */

loc_001D6A91: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x8F4CA0) = edi;

loc_001D6A99: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    ebp = MEM32(0x8F4C68);
    if (CMP_EQ(_fa, _fb)) goto loc_001D6AD5; /* je: equal / zero */

loc_001D6AA8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D6AD5; /* je: equal / zero */

loc_001D6AAC: ;
    _fa = (uint32_t)(MEM32(0x8FC604)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8FC604), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D6AC5; /* jne: not equal / not zero */

loc_001D6AB4: ;
    _fa = (uint32_t)(MEM8(0x907E70)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x907E70), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D6AC5; /* je: equal / zero */

loc_001D6ABD: ;
    edx = MEM32(ebp + 0x240);
    goto loc_001D6AC8;

loc_001D6AC5: ;
    edx = MEM32(esi + 8);

loc_001D6AC8: ;
    _fa = (uint32_t)(MEM8(ebp + 0x238)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x238), LO8(ecx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D6AD8; /* jne: not equal / not zero */

loc_001D6AD0: ;
    ebx = MEM32(esi + 8);
    goto loc_001D6ADA;

loc_001D6AD5: ;
    edx = MEM32(esi + 8);

loc_001D6AD8: ;
    ebx = edx;

loc_001D6ADA: ;
    _fa = (uint32_t)(MEM8(ebp + 0x238)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x238), LO8(ecx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D6AE6; /* je: equal / zero */

loc_001D6AE2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001D6AEB;

loc_001D6AE6: ;
    eax = MEM32(esi + 8);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_001D6AEB: ;
    MEM32(esi + 0x414) = ecx;
    MEM32(esi + 0x418) = ecx;
    MEM32(esi + 0x41C) = ecx;
    MEM32(esi + 0x420) = ecx;
    MEM32(esi + 0x424) = ecx;
    MEM32(esi + 0x428) = ecx;
    MEM32(esi + 0x42C) = ecx;
    MEM32(esi + 0x430) = ecx;
    MEM32(esi + 0x434) = ecx;
    ecx = ZX8(MEM8(esi + 0x410));
    xmm0 = XMM_SCALAR(MEMF(esi + ecx * 4 + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x8F4C04); /* mulss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7F11F4); /* comiss */
    ebp = edi + eax;
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001D6B51; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(0x7F11F4)) */

loc_001D6B42: ;
    edx = MEM32(esi + 0x440);
    ecx = MEM32(edx);
    PUSH32(esp, 0x8F4C18);
    goto loc_001D6B5E;

loc_001D6B51: ;
    eax = MEM32(esi + 0x440);
    ecx = MEM32(eax);
    PUSH32(esp, 0x8F4C38);

loc_001D6B5E: ;
    PUSH32(esp, 0x001D6B63u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_001D6B63: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    ecx = MEM32(esi + 4);
    edi = ecx + ebp * 4;
    if (CMP_GE(_fas, _fbs)) goto loc_001D6BB2; /* jge: greater or equal (signed >=) */

loc_001D6B6D: ;
    /* nop */

loc_001D6B70: ;
    SET_LO8(eax, MEM8(edi + 2));
    SET_LO8(edx, MEM8(esp + 0x14));
    SET_LO8(ecx, MEM8(edi + 3));
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + LO8(edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ecx) (8-bit) */
    MEM8(edi + 2) = LO8(eax);
    if (CMP_B(_fa, _fb)) goto loc_001D6B8E; /* jb: below (unsigned <) */

loc_001D6B83: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x001D6B8Cu); RECOMP_ABI_CALL(0x00027EAEu, sub_00027EAE); /* call 0x00027EAE */

loc_001D6B8C: ;
    goto loc_001D6BA8;

loc_001D6B8E: ;
    ecx = ZX8(MEM8(edi + 1));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x1E);
    edx = ZX8(LO8(eax));
    eax = MEM32(esi);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO16(ecx, MEM16(ecx * 2 + 0x8B4044));
    MEM16(eax + ebp * 2) = LO16(ecx);

loc_001D6BA8: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 2;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D6B70; /* jl: less (signed <) */

loc_001D6BB2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D6C10
 * Original: 0x001D6C10 - 0x001D6CA0 (144 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D6C10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_001D6C10: ;
    eax = MEM32(ecx + 0x438);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001D6C9F; /* jg: greater (signed >) */

loc_001D6C1E: ;
    xmm1 = XMM_SCALAR(MEMF(0x8B4038)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x7AEBC8); /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x7B1D9C); /* mulss */
    xmm0 = XMM_SCALAR(MEMF(0x8F4C04)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_SCALAR(MEMF(0x7F11F0)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(0x8F4C04) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001D6C62; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_001D6C57: ;
    xmm0 = xmm1; /* movaps */
    MEMF(0x8F4C04) = xmm0.f[0]; /* movss */

loc_001D6C62: ;
    xmm1 = XMM_SCALAR(MEMF(0x8F4C58)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001D6C7A; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_001D6C6F: ;
    xmm0 = xmm1; /* movaps */
    MEMF(0x8F4C04) = xmm0.f[0]; /* movss */

loc_001D6C7A: ;
    edx = MEM32(0x8F4C10);
    eax = MEM32(0x8FC604);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(0x8F4C10) = edx;
    MEMF(0x8F4C14) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_001D6C9F; /* je: equal / zero */

loc_001D6C98: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x001D6C9Fu); RECOMP_ABI_CALL(0x00024B50u, sub_00024B50); /* call 0x00024B50 */

loc_001D6C9F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001D6CD0
 * Original: 0x001D6CD0 - 0x001D6CE0 (16 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D6CD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D6CD0: ;
    ecx = MEM32(0x8F4C5C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D6CDF; /* je: equal / zero */

loc_001D6CDA: ;
    g_seh_ebp = ebp; sub_0001BA4B(); return; /* tail jmp 0x0001BA4B */

loc_001D6CDF: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001D6CF0
 * Original: 0x001D6CF0 - 0x001D6D53 (99 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D6CF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_001D6CF0: ;
    eax = MEM32(esp + 4);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x24);
    edx = MEM32(ecx * 4 + 0x8E8FA8);
    SET_LO8(eax, MEM8(edx + 0x30));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    eax = MEM32(0x8F4C5C);
    if (CMP_NE(_fa, _fb)) goto loc_001D6D21; /* jne: not equal / not zero */

loc_001D6D0B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D6D52; /* je: equal / zero */

loc_001D6D0F: ;
    xmm0 = XMM_SCALAR(MEMF(0x8F4C04)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7F11F0); /* addss */
    goto loc_001D6D35;

loc_001D6D21: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D6D52; /* je: equal / zero */

loc_001D6D25: ;
    xmm0 = XMM_SCALAR(MEMF(0x8F4C04)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7AB7CC); /* addss */

loc_001D6D35: ;
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(0x8F4C04) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001D6D52; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_001D6D4A: ;
    MEMF(0x8F4C04) = xmm1.f[0]; /* movss */

loc_001D6D52: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001D6D70
 * Original: 0x001D6D70 - 0x001D6DDE (110 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D6D70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D6D70: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    ecx = MEM32(0x8F4C5C);
    if (CMP_EQ(_fa, _fb)) goto loc_001D6DA7; /* je: equal / zero */

loc_001D6D7F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001D6DDD; /* jle: less or equal (signed <=) */

loc_001D6D84: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001D6DDD; /* jg: greater (signed >) */

loc_001D6D89: ;
    eax = MEM32(0x8F4C10);
    ecx = MEM32(0x8F4C14);
    MEM32(0x8F4C08) = eax;
    MEM32(0x8F4C0C) = ecx;
    MEM8(0x8F4C64) = 1;
    esp += 4; return; /* ret */

loc_001D6DA7: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = MEM32(0x8F4C0C);
    edx = MEM32(0x8F4C08);
    MEM32(0x8F4C14) = eax;
    xmm0 = XMM_SCALAR(MEMF(0x8F4C14)); /* movss */
    MEM32(0x8F4C10) = edx;
    MEMF(0x8F4C04) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_001D6DD6; /* je: equal / zero */

loc_001D6DD1: ;
    PUSH32(esp, 0x001D6DD6u); RECOMP_ABI_CALL(0x0002E47Fu, sub_0002E47F); /* call 0x0002E47F */

loc_001D6DD6: ;
    MEM8(0x8F4C64) = 0;

loc_001D6DDD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001D6E00
 * Original: 0x001D6E00 - 0x001D6E8A (138 bytes, 42 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D6E00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D6E00: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(ecx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    edi = eax + 8;
    MEM32(esi) = edi;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ecx) = MEM32(ecx) + 8;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = MEM32(0x8F4C5C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D6E85; /* je: equal / zero */

loc_001D6E20: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 4); /* subss */
    ecx = MEM32(edx);
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 4); /* addss */
    eax = MEM32(eax);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm2.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = MEM32(esi + 0xC);
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    eax = (int32_t)xmm2.f[0]; /* cvttss2si */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D6E85; /* je: equal / zero */

loc_001D6E5A: ;
    MEM32(esi + 0xC) = eax;
    SET_LO8(eax, MEM8(0x8F4C64));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEMF(0x8F4C04) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_001D6E7C; /* je: equal / zero */

loc_001D6E6E: ;
    ecx = esi;
    MEM8(0x8F4C64) = 0;
    PUSH32(esp, 0x001D6E7Cu); RECOMP_ABI_CALL(0x0002E47Fu, sub_0002E47F); /* call 0x0002E47F */

loc_001D6E7C: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x001D6E85u); RECOMP_ABI_CALL(0x00024B50u, sub_00024B50); /* call 0x00024B50 */

loc_001D6E85: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001D6EB0
 * Original: 0x001D6EB0 - 0x001D6EB5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D6EB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D6EB0: ;
    g_seh_ebp = ebp; sub_0002686A(); return; /* tail jmp 0x0002686A */

}

/**
 * sub_001D6EC0
 * Original: 0x001D6EC0 - 0x001D6FF3 (307 bytes, 97 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D6EC0(void)
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

loc_001D6EC0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x22C);
    MEM8(esi + 0x238) = 0;
    eax = MEM32(eax);
    ebx = MEM32(eax + 8);
    ebp = MEM32(eax + 0xC);
    PUSH32(esp, edi);
    edi = 0;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x10) = esi;
    MEM32(esp + 0x14) = 1;
    ecx = edi;
    if ((_fa == 0)) goto loc_001D6F4E; /* je: equal / zero */

loc_001D6EF9: ;
    edx = ebp + -1;
    MEM32(esp + 0x18) = edx;

loc_001D6F00: ;
    edx = MEM32(esp + 0x18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D6F36; /* jl: less (signed <) */

loc_001D6F08: ;
    esi = MEM32(esp + 0x20);
    esi = MEM32(esi + 4);
    eax = edx + edx * 4;
    esi = esi + eax * 8;

loc_001D6F15: ;
    eax = MEM32(esi + 4);
    _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0x14) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D6F26; /* jne: not equal / not zero */

loc_001D6F21: ;
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edx;

loc_001D6F26: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001D6F4A; /* jae: above or equal (unsigned >=) */

loc_001D6F2A: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x28;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001D6F15; /* jge: greater or equal (signed >=) */

loc_001D6F32: ;
    esi = MEM32(esp + 0x10);

loc_001D6F36: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001D6F4E; /* jae: above or equal (unsigned >=) */

loc_001D6F3A: ;
    eax = MEM32(esp + 0x14);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_001D6F00; /* jbe: below or equal (unsigned <=) */

loc_001D6F48: ;
    goto loc_001D6F4E;

loc_001D6F4A: ;
    esi = MEM32(esp + 0x10);

loc_001D6F4E: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(esi + 0x230) = ebp;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    if (CMP_LE(_fas, _fbs)) goto loc_001D6FD0; /* jle: less or equal (signed <=) */

loc_001D6F68: ;
    edx = MEM32(esp + 0x20);
    eax = MEM32(edx);
    edx = MEM32(eax + 8);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm1.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0.f[0] = (float)(int32_t)ebx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    xmm1 = XMM_SCALAR(MEMF(0x7AA820)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001D6FAD; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_001D6F8C: ;
    xmm1 = XMM_SCALAR(MEMF(0x7ABD64)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001D6FA3; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_001D6F99: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AB1C8)); /* movss */
    goto loc_001D6FCA;

loc_001D6FA3: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AD40C)); /* movss */
    goto loc_001D6FCA;

loc_001D6FAD: ;
    xmm1 = XMM_SCALAR(MEMF(0x7AD370)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm0 = XMM_SCALAR(MEMF(0x7F1404)); /* movss */
    if ((_fca >= _fcb)) goto loc_001D6FCA; /* jae: above or equal (unsigned >=) (xmm1.f[0] vs xmm0.f[0]) */

loc_001D6FC2: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AD39C)); /* movss */

loc_001D6FCA: ;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */

loc_001D6FD0: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x28);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001D6FE9u); RECOMP_ABI_CALL(0x0001810Cu, sub_0001810C); /* call 0x0001810C */

loc_001D6FE9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D7040
 * Original: 0x001D7040 - 0x001D72AD (621 bytes, 182 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D7040(void)
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

loc_001D7040: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D7053u); RECOMP_ABI_CALL(0x0002221Fu, sub_0002221F); /* call 0x0002221F */

loc_001D7053: ;
    PUSH32(esp, 0x64);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x7F140C);
    ecx = eax;
    MEM32(esp + 0x30) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D7070u); RECOMP_ABI_CALL(0x0002DBE2u, sub_0002DBE2); /* call 0x0002DBE2 */

loc_001D7070: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 0x14) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_001D72A6; /* je: equal / zero */

loc_001D707E: ;
    ecx = esp + 0x30;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D7087u); RECOMP_ABI_CALL(0x0059DE73u, sub_0059DE73); /* call 0x0059DE73 */

loc_001D7087: ;
    PUSH32(esp, esi);
    ecx = esp + 0x34;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D7091u); RECOMP_ABI_CALL(0x0059E1E4u, sub_0059E1E4); /* call 0x0059E1E4 */

loc_001D7091: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x1C) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_001D709E; /* jne: not equal / not zero */

loc_001D7099: ;
    MEM32(ebx + 0x10) = esi;
    goto loc_001D70BA;

loc_001D709E: ;
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D70A9u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_001D70A9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = esp + 0x38;
    MEM32(ebx + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D70BAu); RECOMP_ABI_CALL(0x0059DF4Fu, sub_0059DF4F); /* call 0x0059DF4F */

loc_001D70BA: ;
    edi = MEM32(ebx + 0x10);
    edx = MEM32(edi + 8);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    eax = edi + 0x14;
    MEM32(esp + 0x24) = eax;
    eax = MEM32(edi + 0xC);
    eax = eax + eax * 4;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(3) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(5) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax + edi + 0x14;
    MEMF(0x8B425C) = xmm0.f[0]; /* movss */
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9C4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x9C4 (32-bit) */
    esi = edx + edi + 0x14;
    MEM32(esp + 0x20) = edi;
    MEM32(esp + 0x28) = ecx;
    MEM32(esp + 0x2C) = esi;
    if (CMP_LE(_fas, _fbs)) goto loc_001D711B; /* jle: less or equal (signed <=) */

loc_001D7103: ;
    xmm1 = XMM_SCALAR(MEMF(0x7F1408)); /* movss */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] / xmm0.f[0]; /* divss */
    MEMF(0x8B425C) = xmm1.f[0]; /* movss */

loc_001D711B: ;
    fp_push((double)SMEM32(edi + 8)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x8B425C)); /* fmul dword ptr [0x8b425c] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D7129u); RECOMP_ABI_CALL(0x005CBF44u, sub_005CBF44); /* call 0x005CBF44 */

loc_001D7129: ;
    MEM32(ebx + 0x22C) = eax;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(5) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, 0x400);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D713Du); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_001D713D: ;
    MEM32(ebx + 0x220) = eax;
    eax = MEM32(ebx + 0x22C);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, 0x400);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D7156u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_001D7156: ;
    MEM32(ebx + 0x224) = eax;
    edi = MEM32(edi + 0x10);
    eax = edi * 4;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    MEM32(ebx + 0x234) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D7174u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_001D7174: ;
    ecx = MEM32(ebx + 0x234);
    edx = MEM32(esp + 0x38);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM32(ebx + 0x228) = eax;
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
    ecx = MEM32(ebx + 0x22C);
    eax = MEM32(edx + 8);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001D71B5; /* jae: above or equal (unsigned >=) */

loc_001D71A7: ;
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D71B3u); RECOMP_ABI_CALL(0x000218B0u, sub_000218B0); /* call 0x000218B0 */

loc_001D71B3: ;
    goto loc_001D71C1;

loc_001D71B5: ;
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D71C1u); RECOMP_ABI_CALL(0x00037237u, sub_00037237); /* call 0x00037237 */

loc_001D71C1: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x24);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ebx + 0x20;

loc_001D71D3: ;
    esi = MEM32(0x8B4260);
    esi = (uint32_t)((int32_t)esi * (int32_t)eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 0x10) = esi;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_001D71EE; /* jge: greater or equal (signed >=) */

loc_001D71E8: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7B8E10)); /* fadd dword ptr [0x7b8e10] */

loc_001D71EE: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7AB7C8)); /* fmul dword ptr [0x7ab7c8] */
    esi = ecx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEMF(esp + 0x10) = (float)fp_top(); /* fst */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1E (32-bit) */
    fp_top() = sin(fp_top()); /* fsin */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    edi = MEM32(esp + 0x20);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    MEM32(esi) = edi;
    fp_top() = -fp_top(); /* fchs */
    MEM32(esi + 4) = edx;
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    edi = MEM32(esp + 0x28);
    MEM32(esi + 8) = edi;
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    edi = MEM32(esp + 0x2C);
    MEM32(esi + 0xC) = edi;
    if (CMP_B(_fa, _fb)) goto loc_001D71D3; /* jb: below (unsigned <) */

loc_001D7232: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D7244; /* je: equal / zero */

loc_001D723B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    eax = 6;
    if (CMP_NE(_fa, _fb)) goto loc_001D7249; /* jne: not equal / not zero */

loc_001D7244: ;
    eax = 3;

loc_001D7249: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x234)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx + 0x234) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001D725C; /* jae: above or equal (unsigned >=) */

loc_001D7251: ;
    edx = MEM32(ebx + 0x228);
    eax = MEM32(edx + eax * 4);
    goto loc_001D725E;

loc_001D725C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001D725E: ;
    ecx = MEM32(ebx + 0x14);
    MEM32(ebx + 0x23C) = eax;
    eax = eax + eax * 4;
    edx = MEM32(ecx + eax * 8 + 4);
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    MEM32(ebx + 0x240) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D7282u); RECOMP_ABI_CALL(0x00037B2Eu, sub_00037B2E); /* call 0x00037B2E */

loc_001D7282: ;
    eax = MEM32(esp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D7296; /* je: equal / zero */

loc_001D728A: ;
    ecx = MEM32(ebx + 0x10);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D7293u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_001D7293: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001D7296: ;
    ecx = esp + 0x30;
    MEM32(ebx + 0x10) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D72A6u); RECOMP_ABI_CALL(0x0059DEB2u, sub_0059DEB2); /* call 0x0059DEB2 */

loc_001D72A6: ;
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
 * sub_001D7350
 * Original: 0x001D7350 - 0x001D738E (62 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D7350(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D7350: ;
    eax = MEM32(0x8F4C68);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D738D; /* jne: not equal / not zero */

loc_001D7359: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x250);
    PUSH32(esp, 0x001D7365u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_001D7365: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D737F; /* je: equal / zero */

loc_001D736C: ;
    ecx = eax;
    PUSH32(esp, 0x001D7373u); RECOMP_ABI_CALL(0x00037D36u, sub_00037D36); /* call 0x00037D36 */

loc_001D7373: ;
    MEM32(0x8F4C68) = eax;
    ecx = eax;
    g_seh_ebp = ebp; sub_00023D77(); return; /* tail jmp 0x00023D77 */

loc_001D737F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x8F4C68) = eax;
    ecx = eax;
    g_seh_ebp = ebp; sub_00023D77(); return; /* tail jmp 0x00023D77 */

loc_001D738D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001D73A0
 * Original: 0x001D73A0 - 0x001D73CA (42 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D73A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D73A0: ;
    ecx = MEM32(0x8F4C68);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D73C9; /* je: equal / zero */

loc_001D73AA: ;
    PUSH32(esp, 0x001D73AFu); RECOMP_ABI_CALL(0x0002884Au, sub_0002884A); /* call 0x0002884A */

loc_001D73AF: ;
    ecx = MEM32(0x8F4C68);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D73BF; /* je: equal / zero */

loc_001D73B9: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x001D73BFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D73BDu); } /* indirect call */
    }

loc_001D73BF: ;
    MEM32(0x8F4C68) = 0;

loc_001D73C9: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001D73E0
 * Original: 0x001D73E0 - 0x001D73F2 (18 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D73E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D73E0: ;
    edx = MEM32(esp + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM32(esp + 8) = edx;
    g_seh_ebp = ebp; sub_000324F3(); return; /* tail jmp 0x000324F3 */

}

/**
 * sub_001D7400
 * Original: 0x001D7400 - 0x001D75F8 (504 bytes, 159 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D7400(void)
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

loc_001D7400: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x001D7411u); RECOMP_ABI_CALL(0x000337EAu, sub_000337EA); /* call 0x000337EA */

loc_001D7411: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x5C)); /* movss */
    MEM32(esp + 8) = edi;
    MEM32(esi + 0x74) = edi;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    { fp_top() = tan(fp_top()); fp_push(1.0); } /* fptan */
    fp_pop(); /* fstp st(0) */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(0x8F4C68);
    ecx = MEM32(eax + 0x230);
    edx = MEM32(esp + 0x24);
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm1.f[0] = xmm1.f[0] / MEMF(esp + 0x14); /* divss */
    xmm0 = XMM_SCALAR(MEMF(0x8B426C)); /* movss */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    if (CMP_B(_fa, _fb)) ecx = edx; /* cmovb */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    xmm0.f[0] = xmm0.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    if (CMP_BE(_fa, _fb)) goto loc_001D75EE; /* jbe: below or equal (unsigned <=) */

loc_001D747A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x20) = ecx;
    goto loc_001D7490;

loc_001D7484: ;
    eax = MEM32(0x8F4C68);
    /* nop */

loc_001D7490: ;
    ecx = MEM32(eax + 0x14);
    edi = MEM32(ecx + ebp);
    ebx = MEM32(ecx + ebp + 4);
    eax = MEM32(eax + 0x14);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    MEM32(esp + 0x18) = edi;
    MEM32(esp + 0x2C) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_001D7510; /* jne: not equal / not zero */

loc_001D74AB: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x2C);
    PUSH32(esp, 0x42C80000);
    ecx = eax + ebp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x001D74C6u); RECOMP_ABI_CALL(0x00028390u, sub_00028390); /* call 0x00028390 */

loc_001D74C6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D75CE; /* je: equal / zero */

loc_001D74CE: ;
    eax = MEM32(esi + 0x74);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x1C); /* comiss */
    eax = eax + eax * 2;
    MEM16(esi + eax * 2) = LO16(edi);
    eax = MEM32(esi + 0x74);
    ecx = eax + eax * 2;
    MEM16(esi + ecx * 2 + 0x7A) = LO16(ebx);
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001D74F7; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esp + 0x1C)) */

loc_001D74F3: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001D74FC;

loc_001D74F7: ;
    ecx = 1;

loc_001D74FC: ;
    eax = MEM32(esi + 0x74);
    edx = eax + eax * 2;
    MEM16(esi + edx * 2 + 0x7C) = LO16(ecx);
    MEM32(esp + 0x10) = MEM32(esp + 0x10) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_001D75CB;

loc_001D7510: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x30;
    PUSH32(esp, edx);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    edx = eax + 0x18;
    PUSH32(esp, edx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x3C);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001D7535u); RECOMP_ABI_CALL(0x00029934u, sub_00029934); /* call 0x00029934 */

loc_001D7535: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D75CE; /* je: equal / zero */

loc_001D753D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001D755F; /* jge: greater or equal (signed >=) */

loc_001D7541: ;
    eax = MEM32(esp + 0x30);
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x2C);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) ecx = edi; /* cmovle */
    edi = edx + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D757A; /* jl: less (signed <) */

loc_001D755B: ;
    edi = ebx;
    goto loc_001D757A;

loc_001D755F: ;
    ecx = MEM32(esp + 0x30);
    eax = MEM32(esp + 0x2C);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) edi = eax; /* cmovge */
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D757A; /* jl: less (signed <) */

loc_001D7578: ;
    ecx = ebx;

loc_001D757A: ;
    eax = MEM32(esi + 0x74);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x1C); /* comiss */
    edx = eax + eax * 2;
    MEM16(esi + edx * 2) = LO16(ecx);
    eax = MEM32(esi + 0x74);
    eax = eax + eax * 2;
    MEM16(esi + eax * 2 + 0x7A) = LO16(edi);
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001D75A3; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esp + 0x1C)) */

loc_001D759F: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001D75A8;

loc_001D75A3: ;
    edx = 1;

loc_001D75A8: ;
    eax = MEM32(esi + 0x74);
    eax = eax + eax * 2;
    MEM16(esi + eax * 2 + 0x7C) = LO16(edx);
    eax = edi;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001D75BF; /* jg: greater (signed >) */

loc_001D75BB: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ecx;

loc_001D75BF: ;
    ecx = MEM32(esp + 0x10);
    edx = ecx + eax + 1;
    MEM32(esp + 0x10) = edx;

loc_001D75CB: ;
    MEM32(esi + 0x74) = MEM32(esi + 0x74) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x74)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001D75CE: ;
    eax = MEM32(esp + 0x20);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x28;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x20) = eax;
    if ((_fa != 0)) goto loc_001D7484; /* jne: not equal / not zero */

loc_001D75E0: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_001D75EE: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001D7680
 * Original: 0x001D7680 - 0x001D769F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D7680(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D7680: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x7F1364;
    if (TEST_Z(_fa, _fb)) goto loc_001D7699; /* je: equal / zero */

loc_001D7690: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001D7696u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_001D7696: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001D7699: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D76B0
 * Original: 0x001D76B0 - 0x001D76EC (60 bytes, 28 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D76B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D76B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x50);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001D76DB; /* jbe: below or equal (unsigned <=) */

loc_001D76BD: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001D76C0: ;
    eax = MEM32(esi + 0x24);
    ecx = MEM32(esi + 0x54);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001D76CFu); RECOMP_ABI_CALL(0x0001A3D0u, sub_0001A3D0); /* call 0x0001A3D0 */

loc_001D76CF: ;
    eax = MEM32(esi + 0x50);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x1C;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001D76C0; /* jb: below (unsigned <) */

loc_001D76DA: ;
    POP32(esp, ebx);

loc_001D76DB: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x001D76E7u); RECOMP_ABI_CALL(0x00027747u, sub_00027747); /* call 0x00027747 */

loc_001D76E7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D7700
 * Original: 0x001D7700 - 0x001D77DB (219 bytes, 73 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D7700(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D7700: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x50);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_BE(_fa, _fb)) goto loc_001D772B; /* jbe: below or equal (unsigned <=) */

loc_001D770E: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001D7710: ;
    eax = MEM32(esi + 0x54);
    ecx = MEM32(edi + eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D7720; /* je: equal / zero */

loc_001D771B: ;
    PUSH32(esp, 0x001D7720u); RECOMP_ABI_CALL(0x00016325u, sub_00016325); /* call 0x00016325 */

loc_001D7720: ;
    eax = MEM32(esi + 0x50);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x1C;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001D7710; /* jb: below (unsigned <) */

loc_001D772B: ;
    eax = MEM32(esi + 0x78);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D77D5; /* jne: not equal / not zero */

loc_001D7736: ;
    ecx = MEM32(0x8F4C68);
    eax = MEM32(ecx + 0x23C);
    ecx = MEM32(esi + 0x50);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    PUSH32(esp, 0);
    if (CMP_A(_fa, _fb)) eax = ecx; /* cmova */
    ecx = MEM32(0x8F4C6C);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001D775Eu); RECOMP_ABI_CALL(0x0002B270u, sub_0002B270); /* call 0x0002B270 */

loc_001D775E: ;
    edx = MEM32(0x8F4C6C);
    eax = MEM32(edx + 0x74);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(0x8F4C68);
    ebp = MEM32(ecx + 0x22C);
    if (CMP_BE(_fa, _fb)) goto loc_001D77D4; /* jbe: below or equal (unsigned <=) */

loc_001D7777: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x14) = eax;
    goto loc_001D7790;

loc_001D7781: ;
    edx = MEM32(0x8F4C6C);
    goto loc_001D7790;

    /* nop */

loc_001D7790: ;
    SET_LO16(ecx, MEM16(ebx + edx + 0x78));
    SET_LO16(edx, MEM16(ebx + edx + 0x7A));
    eax = ZX16(LO16(ecx));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001D77C3; /* jae: above or equal (unsigned >=) */

loc_001D77A1: ;
    eax = ZX16(LO16(edx));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001D77C3; /* jae: above or equal (unsigned >=) */

loc_001D77A8: ;
    eax = MEM32(esi + 0x54);
    eax = MEM32(edi + eax + 4);
    MEM16(eax + 0x18) = LO16(ecx);
    MEM16(eax + 0x1A) = LO16(edx);
    ecx = MEM32(esi + 0x54);
    ecx = MEM32(edi + ecx + 4);
    PUSH32(esp, 0x001D77C3u); RECOMP_ABI_CALL(0x00013C4Cu, sub_00013C4C); /* call 0x00013C4C */

loc_001D77C3: ;
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 6;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x1C;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = eax;
    if ((_fa != 0)) goto loc_001D7781; /* jne: not equal / not zero */

loc_001D77D4: ;
    POP32(esp, ebp);

loc_001D77D5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D7820
 * Original: 0x001D7820 - 0x001D79DE (446 bytes, 153 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D7820(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D7820: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x78);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_001D78CE; /* jne: not equal / not zero */

loc_001D7834: ;
    eax = MEM32(0x901E28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D78A0; /* je: equal / zero */

loc_001D783D: ;
    eax = MEM32(eax + 0x100);
    ecx = MEM32(eax);
    edx = MEM32(ecx + 0x14);
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D78A0; /* je: equal / zero */

loc_001D784C: ;
    _fa = (uint32_t)(MEM8(0x8B4274)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8B4274), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D78A0; /* je: equal / zero */

loc_001D7854: ;
    eax = MEM32(esi + 0x50);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001D788D; /* jbe: below or equal (unsigned <=) */

loc_001D785D: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_001D7860: ;
    ecx = MEM32(0x8B4278);
    eax = MEM32(esi + 0x54);
    eax = MEM32(edi + eax + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM16(eax + 0x18) = LO16(ebx);
    MEM16(eax + 0x1A) = LO16(ecx);
    ecx = MEM32(esi + 0x54);
    ecx = MEM32(edi + ecx + 4);
    PUSH32(esp, 0x001D7882u); RECOMP_ABI_CALL(0x00013C4Cu, sub_00013C4C); /* call 0x00013C4C */

loc_001D7882: ;
    eax = MEM32(esi + 0x50);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x1C;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001D7860; /* jb: below (unsigned <) */

loc_001D788D: ;
    edx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x001D7899u); RECOMP_ABI_CALL(0x0001AC95u, sub_0001AC95); /* call 0x0001AC95 */

loc_001D7899: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

loc_001D78A0: ;
    eax = MEM32(esi + 0x50);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001D79D7; /* jbe: below or equal (unsigned <=) */

loc_001D78AD: ;
    /* nop */

loc_001D78B0: ;
    eax = MEM32(esi + 0x54);
    ecx = MEM32(ebx + eax + 4);
    PUSH32(esp, 0x001D78BCu); RECOMP_ABI_CALL(0x00016325u, sub_00016325); /* call 0x00016325 */

loc_001D78BC: ;
    eax = MEM32(esi + 0x50);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x1C;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001D78B0; /* jb: below (unsigned <) */

loc_001D78C7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

loc_001D78CE: ;
    edi = MEM32(esp + 0x1C);
    _fa = (uint32_t)(MEM32(esi + 0x3C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x3C), edi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001D78DD; /* jae: above or equal (unsigned >=) */

loc_001D78D7: ;
    MEM32(esi + 0x2C) = ebx;
    MEM32(esi + 0x3C) = edi;

loc_001D78DD: ;
    ecx = MEM32(0x8F4C6C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D79D7; /* je: equal / zero */

loc_001D78EB: ;
    _fa = (uint32_t)(MEM32(0x8FC604)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8FC604), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D7929; /* jne: not equal / not zero */

loc_001D78F3: ;
    PUSH32(esp, 0x001D78F8u); RECOMP_ABI_CALL(0x00014791u, sub_00014791); /* call 0x00014791 */

loc_001D78F8: ;
    ecx = eax;
    PUSH32(esp, 0x001D78FFu); RECOMP_ABI_CALL(0x0002B955u, sub_0002B955); /* call 0x0002B955 */

loc_001D78FF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D7923; /* je: equal / zero */

loc_001D7903: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D7923; /* je: equal / zero */

loc_001D790C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D7923; /* je: equal / zero */

loc_001D7910: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x001D791Cu); RECOMP_ABI_CALL(0x00013BB1u, sub_00013BB1); /* call 0x00013BB1 */

loc_001D791C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

loc_001D7923: ;
    ecx = MEM32(0x8F4C6C);

loc_001D7929: ;
    _fa = (uint32_t)(MEM32(0x8F4C74)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8F4C74), edi (32-bit) */
    eax = MEM32(esi + 0x50);
    if (CMP_AE(_fa, _fb)) goto loc_001D794D; /* jae: above or equal (unsigned >=) */

loc_001D7934: ;
    edx = MEM32(esp + 0x18);
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    MEM32(0x8F4C74) = edi;
    PUSH32(esp, 0x001D7947u); RECOMP_ABI_CALL(0x0002B270u, sub_0002B270); /* call 0x0002B270 */

loc_001D7947: ;
    ecx = MEM32(0x8F4C6C);

loc_001D794D: ;
    eax = MEM32(0x8F4C68);
    eax = ZX16(MEM16(eax + 0x22C));
    edx = MEM32(esi + 0x50);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    MEM32(esp + 0x18) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_001D79D7; /* jbe: below or equal (unsigned <=) */

loc_001D7966: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001D7974;

loc_001D796A: ;
    ecx = MEM32(0x8F4C6C);
    eax = MEM32(esp + 0x18);

loc_001D7974: ;
    edx = ZX16(MEM16(ebx + ecx + 0x7C));
    _fa = (uint32_t)(MEM32(esi + 0x78)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x78), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D79BD; /* jne: not equal / not zero */

loc_001D797E: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x74)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(ecx + 0x74) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001D79BD; /* jae: above or equal (unsigned >=) */

loc_001D7983: ;
    SET_LO16(edx, MEM16(ebx + ecx + 0x78));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), LO16(eax) (16-bit) */
    SET_LO16(ecx, MEM16(ebx + ecx + 0x7A));
    if (CMP_AE(_fa, _fb)) goto loc_001D79B4; /* jae: above or equal (unsigned >=) */

loc_001D7992: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), LO16(eax) (16-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001D79B4; /* jae: above or equal (unsigned >=) */

loc_001D7997: ;
    eax = MEM32(esi + 0x54);
    eax = MEM32(edi + eax + 4);
    MEM16(eax + 0x18) = LO16(edx);
    MEM16(eax + 0x1A) = LO16(ecx);
    ecx = MEM32(esi + 0x54);
    ecx = MEM32(edi + ecx + 4);
    PUSH32(esp, 0x001D79B2u); RECOMP_ABI_CALL(0x00013C4Cu, sub_00013C4C); /* call 0x00013C4C */

loc_001D79B2: ;
    goto loc_001D79C9;

loc_001D79B4: ;
    edx = MEM32(esi + 0x54);
    ecx = MEM32(edi + edx + 4);
    goto loc_001D79C4;

loc_001D79BD: ;
    eax = MEM32(esi + 0x54);
    ecx = MEM32(edi + eax + 4);

loc_001D79C4: ;
    PUSH32(esp, 0x001D79C9u); RECOMP_ABI_CALL(0x00016325u, sub_00016325); /* call 0x00016325 */

loc_001D79C9: ;
    eax = MEM32(esi + 0x50);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 6;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x1C;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001D796A; /* jb: below (unsigned <) */

loc_001D79D7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001D7A50
 * Original: 0x001D7A50 - 0x001D7AEB (155 bytes, 56 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D7A50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D7A50: ;
    _fb = (uint32_t)(0x208) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x208;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = ecx;
    eax = MEM32(ebx + 4);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_BE(_fa, _fb)) goto loc_001D7ADE; /* jbe: below or equal (unsigned <=) */

loc_001D7A65: ;
    ebp = MEM32(esp + 0x21C);
    /* nop */

loc_001D7A70: ;
    eax = MEM32(ebx);
    edi = MEM32(eax + esi * 4);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, esp);
    ecx = edi;
    PUSH32(esp, 0x001D7A83u); RECOMP_ABI_CALL(0x0055B62Eu, sub_0055B62E); /* call 0x0055B62E */

loc_001D7A83: ;
    PUSH32(esp, 0x001D7A88u); RECOMP_ABI_CALL(0x000279CCu, sub_000279CC); /* call 0x000279CC */

loc_001D7A88: ;
    PUSH32(esp, esi);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    eax = esp + 0x128;
    PUSH32(esp, 0x7F1418);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D7AA0u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_001D7AA0: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    edx = esp + 0x12C;
    MEM32(eax) = 0;
    PUSH32(esp, edx);
    MEM32(eax) = 0;
    PUSH32(esp, 0x001D7ACAu); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_001D7ACA: ;
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x001D7AD6u); RECOMP_ABI_CALL(0x00028D5Eu, sub_00028D5E); /* call 0x00028D5E */

loc_001D7AD6: ;
    eax = MEM32(ebx + 4);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001D7A70; /* jb: below (unsigned <) */

loc_001D7ADE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x208) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x208;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D7B20
 * Original: 0x001D7B20 - 0x001D7BC9 (169 bytes, 58 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D7B20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D7B20: ;
    _fb = (uint32_t)(0x20C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 4);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001D7BBD; /* jbe: below or equal (unsigned <=) */

loc_001D7B38: ;
    ebx = MEM32(esp + 0x21C);
    /* nop */

loc_001D7B40: ;
    eax = MEM32(edi);
    ecx = MEM32(eax + esi * 4);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, esp);
    PUSH32(esp, 0x001D7B51u); RECOMP_ABI_CALL(0x0055B62Eu, sub_0055B62E); /* call 0x0055B62E */

loc_001D7B51: ;
    PUSH32(esp, 0x001D7B56u); RECOMP_ABI_CALL(0x000279CCu, sub_000279CC); /* call 0x000279CC */

loc_001D7B56: ;
    PUSH32(esp, esi);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    ecx = esp + 0x128;
    PUSH32(esp, 0x7F1418);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001D7B6Eu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_001D7B6E: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, ecx);
    MEM32(eax) = 0;
    ecx = esp;
    MEM32(eax) = 0;
    PUSH32(esp, 0);
    eax = esp + 0x128;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D7B97u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_001D7B97: ;
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x001D7BA3u); RECOMP_ABI_CALL(0x0057287Du, sub_0057287D); /* call 0x0057287D */

loc_001D7BA3: ;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D7BB2u); RECOMP_ABI_CALL(0x005737B4u, sub_005737B4); /* call 0x005737B4 */

loc_001D7BB2: ;
    eax = MEM32(edi + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001D7B40; /* jb: below (unsigned <) */

loc_001D7BBD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x20C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D7C00
 * Original: 0x001D7C00 - 0x001D7C86 (134 bytes, 47 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D7C00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D7C00: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    esi = ecx;
    ecx = esp + 0x14;
    PUSH32(esp, 0x7F13FC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001D7C1Eu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_001D7C1E: ;
    edx = MEM32(esp + 0x120);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = esi + 0xC;
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D7C3Cu); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_001D7C3C: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001D7C46u); RECOMP_ABI_CALL(0x00572F47u, sub_00572F47); /* call 0x00572F47 */

loc_001D7C46: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    edx = esp + 0x24;
    MEM32(eax) = 0;
    PUSH32(esp, edx);
    MEM32(eax) = 0;
    PUSH32(esp, 0x001D7C6Fu); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_001D7C6F: ;
    ecx = MEM32(edi);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D7C7Bu); RECOMP_ABI_CALL(0x0001A60Fu, sub_0001A60F); /* call 0x0001A60F */

loc_001D7C7B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001D7CB0
 * Original: 0x001D7CB0 - 0x001D7CBD (13 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D7CB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D7CB0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_001D7CC0
 * Original: 0x001D7CC0 - 0x001D7CF3 (51 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D7CC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D7CC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D7CDD; /* je: equal / zero */

loc_001D7CC9: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001D7CDD; /* jle: less or equal (signed <=) */

loc_001D7CD0: ;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001D7CDAu); RECOMP_ABI_CALL(0x00574865u, sub_00574865); /* call 0x00574865 */

loc_001D7CDA: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001D7CDD: ;
    MEM32(esi) = 0;
    MEM32(esi + 4) = 0;
    MEM32(esi + 8) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001D7D00
 * Original: 0x001D7D00 - 0x001D7D8B (139 bytes, 54 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D7D00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D7D00: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D7D26; /* jne: not equal / not zero */

loc_001D7D0A: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x10);
    MEM32(esi + 8) = 4;
    PUSH32(esp, 0x001D7D1Du); RECOMP_ABI_CALL(0x0057484Du, sub_0057484D); /* call 0x0057484D */

loc_001D7D1D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001D7D26: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(esp + 8);
    ecx = ecx + edx + -1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D7D87; /* jl: less (signed <) */

loc_001D7D35: ;
    PUSH32(esp, edi);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(3) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D7D44u); RECOMP_ABI_CALL(0x0057484Du, sub_0057484D); /* call 0x0057484D */

loc_001D7D44: ;
    ecx = MEM32(esi + 4);
    edi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001D7D6A; /* jle: less or equal (signed <=) */

loc_001D7D52: ;
    ecx = edi;

loc_001D7D54: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D7D5F; /* je: equal / zero */

loc_001D7D58: ;
    edx = MEM32(esi);
    edx = MEM32(edx + eax * 4);
    MEM32(ecx) = edx;

loc_001D7D5F: ;
    edx = MEM32(esi + 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D7D54; /* jl: less (signed <) */

loc_001D7D6A: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(esi);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001D7D79u); RECOMP_ABI_CALL(0x00574865u, sub_00574865); /* call 0x00574865 */

loc_001D7D79: ;
    edx = MEM32(esi + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM32(esi) = edi;
    MEM32(esi + 8) = edx;
    POP32(esp, edi);

loc_001D7D87: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D7DB0
 * Original: 0x001D7DB0 - 0x001D7DF9 (73 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D7DB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D7DB0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D7DC6; /* je: equal / zero */

loc_001D7DBA: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D7DC3u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_001D7DC3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001D7DC6: ;
    ecx = MEM32(esi + 0x43C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D7DD6; /* je: equal / zero */

loc_001D7DD0: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x001D7DD6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D7DD4u); } /* indirect call */
    }

loc_001D7DD6: ;
    esi = MEM32(esi + 0x440);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D7DF7; /* je: equal / zero */

loc_001D7DE0: ;
    ecx = MEM32(esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001D7DE8u); RECOMP_ABI_CALL(0x000356D0u, sub_000356D0); /* call 0x000356D0 */

loc_001D7DE8: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x001D7DF7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D7DF4u); } /* indirect call */
    }

loc_001D7DF7: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001D7E10
 * Original: 0x001D7E10 - 0x001D8023 (531 bytes, 160 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D7E10(void)
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

loc_001D7E10: ;
    _fb = (uint32_t)(0x94) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x94;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi + 8);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = esi * 4 + 4;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D7E2Fu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_001D7E2F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D7E5E; /* je: equal / zero */

loc_001D7E36: ;
    ecx = esi + -1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    edx = eax + 4;
    MEM32(eax) = esi;
    eax = edx;
    if (CMP_L(_fas, _fbs)) goto loc_001D7E5A; /* jl: less (signed <) */

loc_001D7E44: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001D7E45: ;
    MEM8(eax) = 0;
    MEM8(eax + 1) = 0;
    MEM8(eax + 2) = 0;
    MEM8(eax + 3) = 0;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001D7E45; /* jne: not equal / not zero */

loc_001D7E5A: ;
    eax = edx;
    goto loc_001D7E60;

loc_001D7E5E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001D7E60: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AD3C8)); /* movss */
    MEM32(edi + 4) = eax;
    MEM32(0x8F4C60) = eax;
    MEM32(edi + 0xC) = 0xFFFFFFFFu;
    MEMF(0x8F4C04) = xmm0.f[0]; /* movss */
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    esi = MEM32(edi + 4);
    MEM32(edi + 0x438) = ebp;
    ebx = MEM32(0x8B4040);
    if (CMP_LE(_fas, _fbs)) goto loc_001D7ED8; /* jle: less or equal (signed <=) */

loc_001D7E95: ;
    PUSH32(esp, 0x001D7E9Au); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_001D7E9A: ;
    eax = eax & 0x800000FFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_001D7EA8; /* jns: not sign (positive) */

loc_001D7EA1: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax | 0xFFFFFF00u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001D7EA8: ;
    MEM8(esi) = LO8(eax);
    eax = ZX8(LO8(eax));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = ZX16(LO16(ebx));
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM8(esi + 1) = 1;
    MEM8(esi + 3) = LO8(ebx);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esi + -2) = LO8(edx);
    ecx = ZX8(LO8(edx));
    SET_LO16(eax, MEM16(ecx * 2 + 0x8B4080));
    edx = MEM32(edi);
    MEM16(edx + ebp * 2 + -2) = LO16(eax);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(edi + 8) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D7E95; /* jl: less (signed <) */

loc_001D7ED8: ;
    fp_push(MEMD(0x7F1468)); /* fld double */
    xmm2 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    fp_push(0.69314718055994530942); /* fldln2 */
    xmm1 = XMM_SCALAR(MEMF(0x7AD368)); /* movss */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    eax = 1;
    ecx = edi + 0x14;
    { fp_st1() = fp_st1() * log2(fp_top()); fp_pop(); } /* fyl2x */
    fp_top() = RECOMP_FP_PC(MEMF(0x7A9980) / fp_top()); /* fdivr dword ptr [0x7a9980] */

loc_001D7F02: ;
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0x10) = xmm3.f[0]; /* movss */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_top() = RECOMP_FP_PC(MEMF(0x7F1464) - fp_top()); /* fsubr dword ptr [0x7f1464] */
    fp_push(0.69314718055994530942); /* fldln2 */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    { fp_st1() = fp_st1() * log2(fp_top()); fp_pop(); } /* fyl2x */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x7A9980)); /* fsub dword ptr [0x7a9980] */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7A9980)); /* fadd dword ptr [0x7a9980] */
    MEMF(esp + 0x14) = (float)fp_top(); /* fst */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001D7F53; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_001D7F42: ;
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x14); /* subss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(ecx) = xmm0.f[0]; /* movss */

loc_001D7F53: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x100 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D7F02; /* jl: less (signed <) */

loc_001D7F5E: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AD448)); /* movss */
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, 0);
    PUSH32(esp, 0x1C);
    MEMF(edi + 0x10) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x001D7F76u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_001D7F76: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D7FA2; /* je: equal / zero */

loc_001D7F7F: ;
    ecx = MEM32(0x8FC1D0);
    edx = MEM32(ecx + 0x1E4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x7F1338);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x001D7F9Au); RECOMP_ABI_CALL(0x00018E81u, sub_00018E81); /* call 0x00018E81 */

loc_001D7F9A: ;
    MEM32(esi) = 0x7F1328;
    goto loc_001D7FA4;

loc_001D7FA2: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001D7FA4: ;
    ecx = esp + 0x18;
    MEM32(edi + 0x43C) = esi;
    PUSH32(esp, 0x001D7FB3u); RECOMP_ABI_CALL(0x00027F94u, sub_00027F94); /* call 0x00027F94 */

loc_001D7FB3: ;
    ecx = MEM32(0x907BA4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7B891F);
    MEM32(esp + 0x1C) = 0x7F143C;
    eax = MEM32(ecx);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x001D7FCCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D7FCAu); } /* indirect call */
    }

loc_001D7FCC: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D7FFD; /* je: equal / zero */

loc_001D7FD2: ;
    PUSH32(esp, 0x7F1428);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x001D7FE0u); RECOMP_ABI_CALL(0x0001E359u, sub_0001E359); /* call 0x0001E359 */

loc_001D7FE0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x20F4A9A1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001D7FF8u); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_001D7FF8: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_001D7FFF;

loc_001D7FFD: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001D7FFF: ;
    MEM32(edi + 0x440) = esi;
    ecx = MEM32(esi);
    PUSH32(esp, 0x8F4C38);
    PUSH32(esp, 0x001D8011u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_001D8011: ;
    ecx = edi;
    PUSH32(esp, 0x001D8018u); RECOMP_ABI_CALL(0x0002E47Fu, sub_0002E47F); /* call 0x0002E47F */

loc_001D8018: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x94) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x94;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001D80B0
 * Original: 0x001D80B0 - 0x001D80E3 (51 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D80B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D80B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D80CD; /* je: equal / zero */

loc_001D80B9: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001D80CD; /* jle: less or equal (signed <=) */

loc_001D80C0: ;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001D80CAu); RECOMP_ABI_CALL(0x00574865u, sub_00574865); /* call 0x00574865 */

loc_001D80CA: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001D80CD: ;
    MEM32(esi) = 0;
    MEM32(esi + 4) = 0;
    MEM32(esi + 8) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001D80F0
 * Original: 0x001D80F0 - 0x001D8116 (38 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D80F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D80F0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    esi = ecx;
    PUSH32(esp, 0x001D80FAu); RECOMP_ABI_CALL(0x0001ACF9u, sub_0001ACF9); /* call 0x0001ACF9 */

loc_001D80FA: ;
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
    if (CMP_EQ(_fa, _fb)) goto loc_001D8113; /* je: equal / zero */

loc_001D810B: ;
    edx = MEM32(esp + 4);
    eax = MEM32(edx);
    MEM32(ecx) = eax;

loc_001D8113: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D8120
 * Original: 0x001D8120 - 0x001D817F (95 bytes, 36 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D8120(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D8120: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D8136; /* je: equal / zero */

loc_001D812A: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D8133u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_001D8133: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001D8136: ;
    ecx = MEM32(esi + 0x43C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D8146; /* je: equal / zero */

loc_001D8140: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x001D8146u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D8144u); } /* indirect call */
    }

loc_001D8146: ;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x440);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D8168; /* je: equal / zero */

loc_001D8151: ;
    ecx = MEM32(edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001D8159u); RECOMP_ABI_CALL(0x000356D0u, sub_000356D0); /* call 0x000356D0 */

loc_001D8159: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x001D8168u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D8165u); } /* indirect call */
    }

loc_001D8168: ;
    _fa = (uint32_t)(MEM8(esp + 0xC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0xC), 1 (8-bit) */
    POP32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_001D8179; /* je: equal / zero */

loc_001D8170: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001D8176u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_001D8176: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001D8179: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D81A0
 * Original: 0x001D81A0 - 0x001D81C8 (40 bytes, 14 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D81A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D81A0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(esi) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 8) = ecx;
    ecx = esi;
    MEM32(esi + 4) = eax;
    MEM32(esi + 0x43C) = eax;
    PUSH32(esp, 0x001D81C2u); RECOMP_ABI_CALL(0x00030658u, sub_00030658); /* call 0x00030658 */

loc_001D81C2: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001D81E0
 * Original: 0x001D81E0 - 0x001D81ED (13 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D81E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D81E0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_001D81F0
 * Original: 0x001D81F0 - 0x001D8223 (51 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D81F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D81F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D820D; /* je: equal / zero */

loc_001D81F9: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001D820D; /* jle: less or equal (signed <=) */

loc_001D8200: ;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001D820Au); RECOMP_ABI_CALL(0x00574865u, sub_00574865); /* call 0x00574865 */

loc_001D820A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001D820D: ;
    MEM32(esi) = 0;
    MEM32(esi + 4) = 0;
    MEM32(esi + 8) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001D8230
 * Original: 0x001D8230 - 0x001D82D3 (163 bytes, 69 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D8230(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D8230: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001D823Cu); RECOMP_ABI_CALL(0x0001AEE3u, sub_0001AEE3); /* call 0x0001AEE3 */

loc_001D823C: ;
    ebx = MEM32(esp + 0x14);
    esi = eax;
    eax = esi + esi * 2;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = eax * 4 + 4;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    MEM32(ebx) = esi;
    PUSH32(esp, 0x001D8257u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_001D8257: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D8282; /* je: equal / zero */

loc_001D825E: ;
    MEM32(eax) = esi;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    edx = eax + 4;
    eax = edx;
    if (CMP_L(_fas, _fbs)) goto loc_001D827E; /* jl: less (signed <) */

loc_001D826A: ;
    ecx = esi + 1;
    /* nop */

loc_001D8270: ;
    MEM32(eax) = edi;
    MEM32(eax + 4) = edi;
    MEM32(eax + 8) = edi;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001D8270; /* jne: not equal / not zero */

loc_001D827E: ;
    eax = edx;
    goto loc_001D8284;

loc_001D8282: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001D8284: ;
    edx = MEM32(esp + 0x10);
    MEM32(edx) = eax;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), edi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001D82CF; /* jbe: below or equal (unsigned <=) */

loc_001D828E: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebp);

loc_001D8291: ;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001D829Bu); RECOMP_ABI_CALL(0x000303CEu, sub_000303CE); /* call 0x000303CE */

loc_001D829B: ;
    ebp = eax;
    eax = MEM32(esp + 0x14);
    esi = MEM32(eax);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x001D82AEu); RECOMP_ABI_CALL(0x0001ACF9u, sub_0001ACF9); /* call 0x0001ACF9 */

loc_001D82AE: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(esi);
    ecx = ecx + eax * 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi + 4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001D82C0; /* je: equal / zero */

loc_001D82BE: ;
    MEM32(ecx) = ebp;

loc_001D82C0: ;
    edx = MEM32(esp + 0x18);
    eax = MEM32(edx);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0xC;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001D8291; /* jb: below (unsigned <) */

loc_001D82CE: ;
    POP32(esp, ebp);

loc_001D82CF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001D8300
 * Original: 0x001D8300 - 0x001D830E (14 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D8300(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D8300: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_001D8320
 * Original: 0x001D8320 - 0x001D8355 (53 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D8320(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D8320: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D833E; /* je: equal / zero */

loc_001D832A: ;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001D833E; /* jle: less or equal (signed <=) */

loc_001D8331: ;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001D833Bu); RECOMP_ABI_CALL(0x00574865u, sub_00574865); /* call 0x00574865 */

loc_001D833B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001D833E: ;
    MEM32(esi + 0x10) = 0;
    MEM32(esi + 0x14) = 0;
    MEM32(esi + 0x18) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001D8370
 * Original: 0x001D8370 - 0x001D83EB (123 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D8370(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D8370: ;
    eax = MEM32(0x7F147C);
    SET_LO8(ecx, MEM8(0x7F1480));
    edx = MEM32(0x7F1474);
    PUSH32(esp, esi);
    MEM32(0x8F4C38) = eax;
    SET_LO8(eax, MEM8(0x7F1478));
    PUSH32(esp, 0);
    PUSH32(esp, 0x444);
    MEM8(0x8F4C3C) = LO8(ecx);
    MEM32(0x8F4C18) = edx;
    MEM8(0x8F4C1C) = LO8(eax);
    PUSH32(esp, 0x001D83A9u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_001D83A9: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D83DF; /* je: equal / zero */

loc_001D83B2: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    MEM32(esi) = ecx;
    ecx = esi;
    MEM32(esi + 4) = 0;
    MEM32(esi + 8) = edx;
    MEM32(esi + 0x43C) = 0;
    PUSH32(esp, 0x001D83D7u); RECOMP_ABI_CALL(0x00030658u, sub_00030658); /* call 0x00030658 */

loc_001D83D7: ;
    MEM32(0x8F4C5C) = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001D83DF: ;
    MEM32(0x8F4C5C) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001D8410
 * Original: 0x001D8410 - 0x001D842C (28 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D8410(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D8410: ;
    ecx = MEM32(0x8F4C5C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D842B; /* je: equal / zero */

loc_001D841A: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x001D8421u); RECOMP_ABI_CALL(0x0002DBDDu, sub_0002DBDD); /* call 0x0002DBDD */

loc_001D8421: ;
    MEM32(0x8F4C5C) = 0;

loc_001D842B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001D8440
 * Original: 0x001D8440 - 0x001D84E2 (162 bytes, 67 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D8440(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D8440: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 2 (8-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_001D84A7; /* je: equal / zero */

loc_001D844B: ;
    eax = MEM32(esi + -4);
    PUSH32(esp, ebx);
    ebx = esi + -4;
    ecx = eax + eax * 2;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = esi + ecx * 4;
    if ((_fas < 0)) goto loc_001D848F; /* js: sign (negative) */

loc_001D845B: ;
    PUSH32(esp, ebp);
    ebp = eax + 1;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001D8461: ;
    eax = MEM32(esi + -12);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D8483; /* je: equal / zero */

loc_001D846B: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001D8483; /* jle: less or equal (signed <=) */

loc_001D8472: ;
    edx = ecx * 4;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D8480u); RECOMP_ABI_CALL(0x00574865u, sub_00574865); /* call 0x00574865 */

loc_001D8480: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001D8483: ;
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi) = edi;
    MEM32(esi + 4) = edi;
    MEM32(esi + 8) = edi;
    if ((_fa != 0)) goto loc_001D8461; /* jne: not equal / not zero */

loc_001D848E: ;
    POP32(esp, ebp);

loc_001D848F: ;
    _fa = (uint32_t)(MEM8(esp + 0x10)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x10), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001D849F; /* je: equal / zero */

loc_001D8496: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001D849Cu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_001D849C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001D849F: ;
    eax = ebx;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001D84A7: ;
    ecx = MEM32(esi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D84C3; /* je: equal / zero */

loc_001D84AF: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001D84C3; /* jle: less or equal (signed <=) */

loc_001D84B6: ;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001D84C0u); RECOMP_ABI_CALL(0x00574865u, sub_00574865); /* call 0x00574865 */

loc_001D84C0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001D84C3: ;
    _fa = (uint32_t)(MEM8(esp + 0xC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0xC), 1 (8-bit) */
    MEM32(esi) = edi;
    MEM32(esi + 4) = edi;
    MEM32(esi + 8) = edi;
    if (TEST_Z(_fa, _fb)) goto loc_001D84DB; /* je: equal / zero */

loc_001D84D2: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001D84D8u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_001D84D8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001D84DB: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D8510
 * Original: 0x001D8510 - 0x001D85C5 (181 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D8510(void)
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

loc_001D8510: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x8F4C68);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(0x9067D4) = 1;
    if (CMP_NE(_fa, _fb)) goto loc_001D8591; /* jne: not equal / not zero */

loc_001D8521: ;
    ecx = MEM32(0x8F9CCC);
    PUSH32(esp, 0x001D852Cu); RECOMP_ABI_CALL(0x0003010Du, sub_0003010D); /* call 0x0003010D */

loc_001D852C: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x001D8533u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D8530u); } /* indirect call */
    }

loc_001D8533: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001D853Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D8537u); } /* indirect call */
    }

loc_001D853A: ;
    MEMF(esp) = (float)fp_top(); /* fst */
    fp_push(MEMF(0x7F11EC)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(0x7F11EC)); /* movss */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp == 1) /* fcompi */) goto loc_001D8556; /* ja: above (unsigned >) */

loc_001D8551: ;
    xmm0 = XMM_SCALAR(MEMF(esp)); /* movss */

loc_001D8556: ;
    eax = MEM32(0x8F4C68);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEMF(0x8B425C) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_001D8591; /* jne: not equal / not zero */

loc_001D8567: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x250);
    PUSH32(esp, 0x001D8573u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_001D8573: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D8583; /* je: equal / zero */

loc_001D857A: ;
    ecx = eax;
    PUSH32(esp, 0x001D8581u); RECOMP_ABI_CALL(0x00037D36u, sub_00037D36); /* call 0x00037D36 */

loc_001D8581: ;
    goto loc_001D8585;

loc_001D8583: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001D8585: ;
    ecx = eax;
    MEM32(0x8F4C68) = eax;
    PUSH32(esp, 0x001D8591u); RECOMP_ABI_CALL(0x00023D77u, sub_00023D77); /* call 0x00023D77 */

loc_001D8591: ;
    eax = MEM32(0x8F4C6C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D859F; /* jne: not equal / not zero */

loc_001D859A: ;
    PUSH32(esp, 0x001D859Fu); RECOMP_ABI_CALL(0x00036364u, sub_00036364); /* call 0x00036364 */

loc_001D859F: ;
    eax = MEM32(0x8F4C5C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D85C3; /* jne: not equal / not zero */

loc_001D85A8: ;
    eax = MEM32(0x8F4C68);
    ecx = MEM32(eax + 0x22C);
    edx = MEM32(eax + 0x224);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001D85C0u); RECOMP_ABI_CALL(0x0001C9B4u, sub_0001C9B4); /* call 0x0001C9B4 */

loc_001D85C0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001D85C3: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001D8600
 * Original: 0x001D8600 - 0x001D865F (95 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D8600(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D8600: ;
    ecx = MEM32(0x8F4C5C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D861B; /* je: equal / zero */

loc_001D860A: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x001D8611u); RECOMP_ABI_CALL(0x0002DBDDu, sub_0002DBDD); /* call 0x0002DBDD */

loc_001D8611: ;
    MEM32(0x8F4C5C) = 0;

loc_001D861B: ;
    ecx = MEM32(0x8F4C6C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D8635; /* je: equal / zero */

loc_001D8625: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x001D862Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D8629u); } /* indirect call */
    }

loc_001D862B: ;
    MEM32(0x8F4C6C) = 0;

loc_001D8635: ;
    ecx = MEM32(0x8F4C68);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D865E; /* je: equal / zero */

loc_001D863F: ;
    PUSH32(esp, 0x001D8644u); RECOMP_ABI_CALL(0x0002884Au, sub_0002884A); /* call 0x0002884A */

loc_001D8644: ;
    ecx = MEM32(0x8F4C68);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D8654; /* je: equal / zero */

loc_001D864E: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x001D8654u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D8652u); } /* indirect call */
    }

loc_001D8654: ;
    MEM32(0x8F4C68) = 0;

loc_001D865E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001D8680
 * Original: 0x001D8680 - 0x001D8792 (274 bytes, 101 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D8680(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D8680: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    eax = ebp;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    MEM32(esp + 0x18) = ecx;
    PUSH32(esp, 0x001D869Eu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_001D869E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D86C7; /* je: equal / zero */

loc_001D86A5: ;
    ecx = ebp + -1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    MEM32(eax) = ebp;
    edx = eax + 4;
    if (CMP_L(_fas, _fbs)) goto loc_001D86C3; /* jl: less (signed <) */

loc_001D86B1: ;
    eax = edx + 0x18;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001D86B5: ;
    MEM32(eax + -8) = esi;
    MEM32(eax + -4) = esi;
    MEM32(eax) = esi;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001D86B5; /* jne: not equal / not zero */

loc_001D86C3: ;
    eax = edx;
    goto loc_001D86C9;

loc_001D86C7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001D86C9: ;
    edi = MEM32(esp + 0x20);
    MEM32(edi) = eax;
    PUSH32(esp, 0x001D86D4u); RECOMP_ABI_CALL(0x0055D52Du, sub_0055D52D); /* call 0x0055D52D */

loc_001D86D4: ;
    ebx = MEM32(esp + 0x1C);
    PUSH32(esp, esi);
    ecx = ebx * 4;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, ecx);
    MEM32(esp + 0x2C) = eax;
    PUSH32(esp, 0x001D86EFu); RECOMP_ABI_CALL(0x00574504u, sub_00574504); /* call 0x00574504 */

loc_001D86EF: ;
    edx = MEM32(esp + 0x1C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, esi (32-bit) */
    MEM32(edx + 0x64) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_001D878A; /* jbe: below or equal (unsigned <=) */

loc_001D8701: ;
    MEM32(esp + 0x24) = ebp;

loc_001D8705: ;
    eax = MEM32(edi);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    MEM32(eax) = 0;
    PUSH32(esp, 0x7F1318);
    MEM32(eax) = 0;
    PUSH32(esp, 0x001D8728u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_001D8728: ;
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x30);
    PUSH32(esp, 0x001D8736u); RECOMP_ABI_CALL(0x0055D3B8u, sub_0055D3B8); /* call 0x0055D3B8 */

loc_001D8736: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(eax + 0x64);
    edx = MEM32(edi);
    MEM32(esi + edx + 8) = ecx;
    edx = MEM32(edi);
    ecx = MEM32(esi + edx + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = esi + edx;
    eax = MEM32(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_001D8758; /* je: equal / zero */

loc_001D8752: ;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ebx;

loc_001D8758: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001D8778; /* jbe: below or equal (unsigned <=) */

loc_001D875E: ;
    ecx = MEM32(esp + 0x18);

loc_001D8762: ;
    edx = MEM32(ecx);
    ebp = MEM32(edi);
    ebp = MEM32(esi + ebp + 8);
    edx = MEM32(edx);
    MEM32(ebp + eax * 4) = edx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001D8762; /* jb: below (unsigned <) */

loc_001D8778: ;
    eax = MEM32(esp + 0x24);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x1C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x24) = eax;
    if ((_fa != 0)) goto loc_001D8705; /* jne: not equal / not zero */

loc_001D878A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001D87E0
 * Original: 0x001D87E0 - 0x001D8887 (167 bytes, 69 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D87E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D87E0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 2 (8-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_001D8846; /* je: equal / zero */

loc_001D87EB: ;
    ecx = MEM32(esi + -4);
    PUSH32(esp, ebx);
    ebx = esi + -4;
    eax = ecx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_001D882E; /* js: sign (negative) */

loc_001D87FC: ;
    PUSH32(esp, ebp);
    esi = eax + 0x18;
    ebp = ecx + 1;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001D8805: ;
    eax = MEM32(esi + -36);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x1C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D8822; /* je: equal / zero */

loc_001D880F: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001D8822; /* jle: less or equal (signed <=) */

loc_001D8815: ;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D881Fu); RECOMP_ABI_CALL(0x00574865u, sub_00574865); /* call 0x00574865 */

loc_001D881F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001D8822: ;
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + -8) = edi;
    MEM32(esi + -4) = edi;
    MEM32(esi) = edi;
    if ((_fa != 0)) goto loc_001D8805; /* jne: not equal / not zero */

loc_001D882D: ;
    POP32(esp, ebp);

loc_001D882E: ;
    _fa = (uint32_t)(MEM8(esp + 0x10)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x10), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001D883E; /* je: equal / zero */

loc_001D8835: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001D883Bu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_001D883B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001D883E: ;
    eax = ebx;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001D8846: ;
    ecx = MEM32(esi + 0x10);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D8867; /* je: equal / zero */

loc_001D884F: ;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001D8867; /* jle: less or equal (signed <=) */

loc_001D8856: ;
    edx = eax * 4;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001D8864u); RECOMP_ABI_CALL(0x00574865u, sub_00574865); /* call 0x00574865 */

loc_001D8864: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001D8867: ;
    _fa = (uint32_t)(MEM8(esp + 0xC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0xC), 1 (8-bit) */
    MEM32(esi + 0x10) = edi;
    MEM32(esi + 0x14) = edi;
    MEM32(esi + 0x18) = edi;
    if (TEST_Z(_fa, _fb)) goto loc_001D8880; /* je: equal / zero */

loc_001D8877: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001D887Du); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_001D887D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001D8880: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D88B0
 * Original: 0x001D88B0 - 0x001D895B (171 bytes, 69 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D88B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D88B0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = ecx;
    PUSH32(esp, 0x001D88BBu); RECOMP_ABI_CALL(0x0055D52Du, sub_0055D52D); /* call 0x0055D52D */

loc_001D88BB: ;
    edi = MEM32(esp + 0x18);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    ebx = eax;
    if (CMP_BE(_fa, _fb)) goto loc_001D88E5; /* jbe: below or equal (unsigned <=) */

loc_001D88C5: ;
    esi = MEM32(esp + 0x14);
    /* nop */

loc_001D88D0: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x001D88DFu); RECOMP_ABI_CALL(0x0055D6C9u, sub_0055D6C9); /* call 0x0055D6C9 */

loc_001D88DF: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x1C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001D88D0; /* jne: not equal / not zero */

loc_001D88E5: ;
    eax = MEM32(ebp + 0x64);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D8903; /* je: equal / zero */

loc_001D88EC: ;
    edx = MEM32(ebp + 0x5C);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D88F9u); RECOMP_ABI_CALL(0x00574573u, sub_00574573); /* call 0x00574573 */

loc_001D88F9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x64) = 0;

loc_001D8903: ;
    edx = MEM32(esp + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D8954; /* je: equal / zero */

loc_001D890B: ;
    ecx = MEM32(edx + -4);
    ebx = edx + -4;
    eax = ecx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_001D894B; /* js: sign (negative) */

loc_001D891B: ;
    esi = eax + 0x18;
    edi = ecx + 1;

loc_001D8921: ;
    eax = MEM32(esi + -36);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x1C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D893E; /* je: equal / zero */

loc_001D892B: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001D893E; /* jle: less or equal (signed <=) */

loc_001D8931: ;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D893Bu); RECOMP_ABI_CALL(0x00574865u, sub_00574865); /* call 0x00574865 */

loc_001D893B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001D893E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + -8) = eax;
    MEM32(esi + -4) = eax;
    MEM32(esi) = eax;
    if ((_fa != 0)) goto loc_001D8921; /* jne: not equal / not zero */

loc_001D894B: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001D8951u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_001D8951: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001D8954: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001D8990
 * Original: 0x001D8990 - 0x001D89B6 (38 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D8990(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D8990: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x60);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = 0x7F1368;
    if (CMP_EQ(_fa, _fb)) goto loc_001D89AE; /* je: equal / zero */

loc_001D89A0: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x001D89A7u); RECOMP_ABI_CALL(0x0002BB3Au, sub_0002BB3A); /* call 0x0002BB3A */

loc_001D89A7: ;
    MEM32(esi + 0x60) = 0;

loc_001D89AE: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0001CC20(); return; /* tail jmp 0x0001CC20 */

}

/**
 * sub_001D89C0
 * Original: 0x001D89C0 - 0x001D8B7E (446 bytes, 158 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D89C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D89C0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x4C);
    eax = MEM32(eax + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_001D89F9; /* je: equal / zero */

loc_001D89D3: ;
    PUSH32(esp, eax);
    edi = esi + 0x5C;
    ebx = esi + 0x60;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001D89E1u); RECOMP_ABI_CALL(0x0002CAF8u, sub_0002CAF8); /* call 0x0002CAF8 */

loc_001D89E1: ;
    ecx = MEM32(esi + 0x50);
    eax = MEM32(edi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = MEM32(ebx);
    edx = esi + 0x54;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x001D89F9u); RECOMP_ABI_CALL(0x000261BCu, sub_000261BC); /* call 0x000261BC */

loc_001D89F9: ;
    eax = MEM32(0x8F4C68);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    MEM32(eax) = 0;
    PUSH32(esp, 0x7F12FC);
    MEM32(eax) = 0;
    PUSH32(esp, 0x001D8A25u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_001D8A25: ;
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, 0x001D8A32u); RECOMP_ABI_CALL(0x00034DD9u, sub_00034DD9); /* call 0x00034DD9 */

loc_001D8A32: ;
    eax = MEM32(0x8F4C68);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x200) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x200;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    MEM32(eax) = 0;
    PUSH32(esp, 0x7F12E8);
    MEM32(eax) = 0;
    PUSH32(esp, 0x001D8A60u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_001D8A60: ;
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, 0x001D8A6Du); RECOMP_ABI_CALL(0x00034DD9u, sub_00034DD9); /* call 0x00034DD9 */

loc_001D8A6D: ;
    eax = MEM32(0x8F4C68);
    ecx = MEM32(eax + 0x22C);
    eax = MEM32(eax + 0x220);
    edx = esi + 0x6C;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    MEM32(eax) = 0;
    PUSH32(esp, 0x7F130C);
    MEM32(eax) = 0;
    PUSH32(esp, 0x001D8AA2u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_001D8AA2: ;
    ecx = MEM32(esi + 0x24);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D8AAFu); RECOMP_ABI_CALL(0x0002BA86u, sub_0002BA86); /* call 0x0002BA86 */

loc_001D8AAF: ;
    eax = MEM32(0x8F4C68);
    ecx = MEM32(eax + 0x22C);
    eax = MEM32(eax + 0x224);
    edx = esi + 0x68;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    MEM32(eax) = 0;
    PUSH32(esp, 0x7F1318);
    MEM32(eax) = 0;
    PUSH32(esp, 0x001D8AE4u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_001D8AE4: ;
    ecx = MEM32(esi + 0x24);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D8AF1u); RECOMP_ABI_CALL(0x00034D34u, sub_00034D34); /* call 0x00034D34 */

loc_001D8AF1: ;
    eax = MEM32(esi + 0x50);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001D8B1A; /* jbe: below or equal (unsigned <=) */

loc_001D8AFA: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_001D8B00: ;
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x54);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001D8B0Fu); RECOMP_ABI_CALL(0x0001D6B1u, sub_0001D6B1); /* call 0x0001D6B1 */

loc_001D8B0F: ;
    eax = MEM32(esi + 0x50);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x1C;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001D8B00; /* jb: below (unsigned <) */

loc_001D8B1A: ;
    eax = MEM32(esi + 0x70);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esi + 0x11) = 3;
    if (CMP_EQ(_fa, _fb)) goto loc_001D8B76; /* je: equal / zero */

loc_001D8B25: ;
    eax = MEM32(esi + 0x50);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001D8B76; /* jbe: below or equal (unsigned <=) */

loc_001D8B2E: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001D8B30: ;
    edx = MEM32(0x8F4C68);
    eax = MEM32(edx + 0x22C);
    MEM32(esp + 0x10) = eax;
    eax = MEM32(esi + 0x54);
    ecx = MEM32(eax + ebp);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax + 4;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x70);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    PUSH32(esp, 0x001D8B5Au); RECOMP_ABI_CALL(0x0055A6F1u, sub_0055A6F1); /* call 0x0055A6F1 */

loc_001D8B5A: ;
    eax = MEM32(esp + 0x10);
    edi = MEM32(edi);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM16(edi + 0x18) = 0;
    MEM16(edi + 0x1A) = LO16(eax);
    eax = MEM32(esi + 0x50);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x1C;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001D8B30; /* jb: below (unsigned <) */

loc_001D8B76: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001D8BF0
 * Original: 0x001D8BF0 - 0x001D8C95 (165 bytes, 66 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D8BF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D8BF0: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    edx = ZX8(MEM8(esi + 0x11));
    PUSH32(esp, eax);
    SET_LO8(eax, MEM8(esi + 0x10));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = ebp;
    PUSH32(esp, 0x001D8C11u); RECOMP_ABI_CALL(0x000324F3u, sub_000324F3); /* call 0x000324F3 */

loc_001D8C11: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D8C90; /* je: equal / zero */

loc_001D8C15: ;
    eax = MEM32(esi + 0x70);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D8C52; /* je: equal / zero */

loc_001D8C1C: ;
    eax = MEM32(esi + 0x50);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001D8C51; /* jbe: below or equal (unsigned <=) */

loc_001D8C26: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_001D8C30: ;
    eax = MEM32(esi + 0x54);
    ecx = MEM32(ebx + eax + 4);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x70);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 0x001D8C45u); RECOMP_ABI_CALL(0x005599F1u, sub_005599F1); /* call 0x005599F1 */

loc_001D8C45: ;
    eax = MEM32(esi + 0x50);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x1C;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001D8C30; /* jb: below (unsigned <) */

loc_001D8C50: ;
    POP32(esp, ebx);

loc_001D8C51: ;
    POP32(esp, edi);

loc_001D8C52: ;
    eax = MEM32(esi + 0x50);
    ecx = MEM32(esi + 0x54);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x001D8C61u); RECOMP_ABI_CALL(0x0001BFF5u, sub_0001BFF5); /* call 0x0001BFF5 */

loc_001D8C61: ;
    _fa = (uint32_t)(MEM32(esi + 0x78)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x78), 0xFFFFFFFFu (32-bit) */
    ecx = esi;
    if (CMP_NE(_fa, _fb)) goto loc_001D8C7F; /* jne: not equal / not zero */

loc_001D8C69: ;
    PUSH32(esp, 0x001D8C6Eu); RECOMP_ABI_CALL(0x00028FDEu, sub_00028FDE); /* call 0x00028FDE */

loc_001D8C6E: ;
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x001D8C76u); RECOMP_ABI_CALL(0x00017ABDu, sub_00017ABD); /* call 0x00017ABD */

loc_001D8C76: ;
    MEM8(esi + 0x11) = 4;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_001D8C7F: ;
    PUSH32(esp, 0x001D8C84u); RECOMP_ABI_CALL(0x00027341u, sub_00027341); /* call 0x00027341 */

loc_001D8C84: ;
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x001D8C8Cu); RECOMP_ABI_CALL(0x00017ABDu, sub_00017ABD); /* call 0x00017ABD */

loc_001D8C8C: ;
    MEM8(esi + 0x11) = 4;

loc_001D8C90: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D8CC0
 * Original: 0x001D8CC0 - 0x001D8E6B (427 bytes, 155 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D8CC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D8CC0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x4C);
    eax = MEM32(eax + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_001D8CF9; /* je: equal / zero */

loc_001D8CD3: ;
    PUSH32(esp, eax);
    edi = esi + 0x5C;
    ebx = esi + 0x60;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001D8CE1u); RECOMP_ABI_CALL(0x0002CAF8u, sub_0002CAF8); /* call 0x0002CAF8 */

loc_001D8CE1: ;
    ecx = MEM32(esi + 0x50);
    eax = MEM32(edi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = MEM32(ebx);
    edx = esi + 0x54;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x001D8CF9u); RECOMP_ABI_CALL(0x000261BCu, sub_000261BC); /* call 0x000261BC */

loc_001D8CF9: ;
    eax = MEM32(0x8F4C80);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    MEM32(eax) = 0;
    PUSH32(esp, 0x7F12FC);
    MEM32(eax) = 0;
    PUSH32(esp, 0x001D8D22u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_001D8D22: ;
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, 0x001D8D2Fu); RECOMP_ABI_CALL(0x00034DD9u, sub_00034DD9); /* call 0x00034DD9 */

loc_001D8D2F: ;
    eax = MEM32(0x8F4C68);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x200) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x200;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    MEM32(eax) = 0;
    PUSH32(esp, 0x7F12E8);
    MEM32(eax) = 0;
    PUSH32(esp, 0x001D8D5Du); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_001D8D5D: ;
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, 0x001D8D6Au); RECOMP_ABI_CALL(0x00034DD9u, sub_00034DD9); /* call 0x00034DD9 */

loc_001D8D6A: ;
    ecx = MEM32(0x8F4C78);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(0x8B4278));
    edx = esi + 0x6C;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    MEM32(eax) = 0;
    PUSH32(esp, 0x7F130C);
    MEM32(eax) = 0;
    PUSH32(esp, 0x001D8D9Cu); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_001D8D9C: ;
    ecx = MEM32(esi + 0x24);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    PUSH32(esp, 0x001D8DA9u); RECOMP_ABI_CALL(0x0002BA86u, sub_0002BA86); /* call 0x0002BA86 */

loc_001D8DA9: ;
    edx = MEM32(0x8F4C7C);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(0x8B4278));
    eax = esi + 0x68;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    MEM32(eax) = 0;
    PUSH32(esp, 0x7F1318);
    MEM32(eax) = 0;
    PUSH32(esp, 0x001D8DDCu); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_001D8DDC: ;
    ecx = MEM32(esi + 0x24);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D8DE9u); RECOMP_ABI_CALL(0x00034D34u, sub_00034D34); /* call 0x00034D34 */

loc_001D8DE9: ;
    eax = MEM32(esi + 0x50);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001D8E0E; /* jbe: below or equal (unsigned <=) */

loc_001D8DF2: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001D8DF4: ;
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x54);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001D8E03u); RECOMP_ABI_CALL(0x0001D6B1u, sub_0001D6B1); /* call 0x0001D6B1 */

loc_001D8E03: ;
    eax = MEM32(esi + 0x50);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x1C;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001D8DF4; /* jb: below (unsigned <) */

loc_001D8E0E: ;
    eax = MEM32(esi + 0x70);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esi + 0x11) = 3;
    if (CMP_EQ(_fa, _fb)) goto loc_001D8E63; /* je: equal / zero */

loc_001D8E19: ;
    eax = MEM32(esi + 0x50);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001D8E63; /* jbe: below or equal (unsigned <=) */

loc_001D8E22: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001D8E24: ;
    eax = MEM32(esi + 0x54);
    edx = MEM32(0x8B4278);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax + 4;
    eax = MEM32(eax);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x70);
    MEM32(esp + 0x1C) = edx;
    PUSH32(esp, 0x001D8E47u); RECOMP_ABI_CALL(0x0055A6F1u, sub_0055A6F1); /* call 0x0055A6F1 */

loc_001D8E47: ;
    edx = MEM32(esp + 0x10);
    edi = MEM32(edi);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM16(edi + 0x18) = 0;
    MEM16(edi + 0x1A) = LO16(edx);
    eax = MEM32(esi + 0x50);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x1C;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001D8E24; /* jb: below (unsigned <) */

loc_001D8E63: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001D8EE0
 * Original: 0x001D8EE0 - 0x001D8F1E (62 bytes, 20 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D8EE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D8EE0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x60);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = 0x7F1368;
    if (CMP_EQ(_fa, _fb)) goto loc_001D8EFE; /* je: equal / zero */

loc_001D8EF0: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x001D8EF7u); RECOMP_ABI_CALL(0x0002BB3Au, sub_0002BB3A); /* call 0x0002BB3A */

loc_001D8EF7: ;
    MEM32(esi + 0x60) = 0;

loc_001D8EFE: ;
    ecx = esi;
    PUSH32(esp, 0x001D8F05u); RECOMP_ABI_CALL(0x0001CC20u, sub_0001CC20); /* call 0x0001CC20 */

loc_001D8F05: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001D8F18; /* je: equal / zero */

loc_001D8F0C: ;
    ecx = MEM32(0x9094E8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x001D8F18u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D8F15u); } /* indirect call */
    }

loc_001D8F18: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D8F30
 * Original: 0x001D8F30 - 0x001D8FA7 (119 bytes, 42 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D8F30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D8F30: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x001D8F3Eu); RECOMP_ABI_CALL(0x00017ABDu, sub_00017ABD); /* call 0x00017ABD */

loc_001D8F3E: ;
    _fa = (uint32_t)(MEM8(esi + 0x11)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x11), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D8F57; /* jne: not equal / not zero */

loc_001D8F44: ;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x001D8F4Fu); RECOMP_ABI_CALL(0x000229FEu, sub_000229FE); /* call 0x000229FE */

loc_001D8F4F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D8F57; /* je: equal / zero */

loc_001D8F53: ;
    MEM8(esi + 0x11) = 2;

loc_001D8F57: ;
    _fa = (uint32_t)(MEM8(esi + 0x11)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x11), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D8FA2; /* jne: not equal / not zero */

loc_001D8F5D: ;
    ecx = MEM32(esi + 0x4C);
    _fa = (uint32_t)(MEM8(ecx + 0x11)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x11), 3 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D8F9F; /* jne: not equal / not zero */

loc_001D8F66: ;
    ecx = esi;
    PUSH32(esp, 0x001D8F6Du); RECOMP_ABI_CALL(0x00018035u, sub_00018035); /* call 0x00018035 */

loc_001D8F6D: ;
    _fa = (uint32_t)(MEM32(esi + 0x78)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x78), 0xFFFFFFFFu (32-bit) */
    ecx = esi;
    if (CMP_NE(_fa, _fb)) goto loc_001D8F86; /* jne: not equal / not zero */

loc_001D8F75: ;
    PUSH32(esp, 0x001D8F7Au); RECOMP_ABI_CALL(0x0002DE3Fu, sub_0002DE3F); /* call 0x0002DE3F */

loc_001D8F7A: ;
    ecx = esi;
    PUSH32(esp, 0x001D8F81u); RECOMP_ABI_CALL(0x00032A84u, sub_00032A84); /* call 0x00032A84 */

loc_001D8F81: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001D8F86: ;
    edx = MEM32(0x8F4C68);
    eax = MEM32(edx + 0x230);
    MEM32(esi + 0x50) = eax;
    PUSH32(esp, 0x001D8F9Au); RECOMP_ABI_CALL(0x00024961u, sub_00024961); /* call 0x00024961 */

loc_001D8F9A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001D8F9F: ;
    MEM32(edi + 8) = MEM32(edi + 8) + 1;
    _fa = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001D8FA2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D8FD0
 * Original: 0x001D8FD0 - 0x001D907D (173 bytes, 77 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D8FD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D8FD0: ;
    SET_LO8(eax, MEM8(0x8C36FE));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001D9016; /* je: equal / zero */

loc_001D8FD9: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    _fb = (uint32_t)(0xFFFFFFF9u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0xFFFFFFF9u)) >> 32) & 1);
    edx = edx + 0xFFFFFFF9u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 9 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_001D9012; /* ja: above (unsigned >) */

loc_001D8FE7: ;
    { uint32_t _jt = MEM32(edx * 4 + 0x1D9020); /* switch: 10 entries, 6 targets */
    if (_jt == 0x001D8FEEu) goto loc_001D8FEE;
    if (_jt == 0x001D8FF7u) goto loc_001D8FF7;
    if (_jt == 0x001D9000u) goto loc_001D9000;
    if (_jt == 0x001D9009u) goto loc_001D9009;
    if (_jt == 0x001D9012u) goto loc_001D9012;
    if (_jt == 0x001D901Bu) goto loc_001D901B;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001D8FEE: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00014BB5(); return; /* tail jmp 0x00014BB5 */

loc_001D8FF7: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00025D34(); return; /* tail jmp 0x00025D34 */

loc_001D9000: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0002D098(); return; /* tail jmp 0x0002D098 */

loc_001D9009: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00037CCD(); return; /* tail jmp 0x00037CCD */

loc_001D9012: ;
    MEM32(esp + 4) = eax;

loc_001D9016: ;
    g_seh_ebp = ebp; sub_00027747(); return; /* tail jmp 0x00027747 */

loc_001D901B: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D9080
 * Original: 0x001D9080 - 0x001D9090 (16 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9080(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D9080: ;
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_001D90A0
 * Original: 0x001D90A0 - 0x001D90A6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D90A0(void)
{

loc_001D90A0: ;
    eax = MEM32(0x8F5B04);
    esp += 4; return; /* ret */

}

/**
 * sub_001D90B0
 * Original: 0x001D90B0 - 0x001D90B6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D90B0(void)
{

loc_001D90B0: ;
    eax = MEM32(0x8F5AE8);
    esp += 4; return; /* ret */

}

/**
 * sub_001D90C0
 * Original: 0x001D90C0 - 0x001D90D1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D90C0(void)
{

loc_001D90C0: ;
    ecx = MEM32(0x8F5B04);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x001D90D0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D90CDu); } /* indirect call */
    }

loc_001D90D0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001D90E0
 * Original: 0x001D90E0 - 0x001D90F5 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D90E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D90E0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D90F4; /* je: equal / zero */

loc_001D90E8: ;
    ecx = MEM32(0x8F5B04);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x001D90F4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D90F1u); } /* indirect call */
    }

loc_001D90F4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001D9100
 * Original: 0x001D9100 - 0x001D9109 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9100(void)
{

loc_001D9100: ;
    eax = ecx;
    MEM32(eax) = 0xFFFFFFFFu;
    esp += 4; return; /* ret */

}

/**
 * sub_001D9110
 * Original: 0x001D9110 - 0x001D9131 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9110(void)
{

loc_001D9110: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x1058);
    ecx = MEM32(0x9016AC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D9125u); RECOMP_ABI_CALL(0x0003451Eu, sub_0003451E); /* call 0x0003451E */

loc_001D9125: ;
    MEM32(esi + 0x1058) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001D9140
 * Original: 0x001D9140 - 0x001D9179 (57 bytes, 20 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9140(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D9140: ;
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x1058);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D9175; /* je: equal / zero */

loc_001D914D: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x7F14C8);
    ecx = esi;
    PUSH32(esp, 0x001D915Fu); RECOMP_ABI_CALL(0x00020717u, sub_00020717); /* call 0x00020717 */

loc_001D915F: ;
    eax = MEM32(edi + 0x1058);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001D916Du); RECOMP_ABI_CALL(0x000259C4u, sub_000259C4); /* call 0x000259C4 */

loc_001D916D: ;
    ecx = esi;
    PUSH32(esp, 0x001D9174u); RECOMP_ABI_CALL(0x000115F0u, sub_000115F0); /* call 0x000115F0 */

loc_001D9174: ;
    POP32(esp, esi);

loc_001D9175: ;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D9190
 * Original: 0x001D9190 - 0x001D91A4 (20 bytes, 6 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9190(void)
{

loc_001D9190: ;
    eax = MEM32(ecx + 0x1058);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D91A1u); RECOMP_ABI_CALL(0x000346A9u, sub_000346A9); /* call 0x000346A9 */

loc_001D91A1: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001D91B0
 * Original: 0x001D91B0 - 0x001D9298 (232 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D91B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D91B0: ;
    SET_LO8(eax, MEM8(0x8F9010));
    edx = 1;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(eax) (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_001D927E; /* jne: not equal / not zero */

loc_001D91C5: ;
    eax = MEM32(0x8F9010);
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x8F9010) = eax;
    SET_LO8(eax, 0xA);
    MEM16(0x8B47DE) = LO16(ecx);
    MEM8(0x8B47E0) = LO8(eax);
    MEM16(0x8B47E2) = 0x320;
    MEM16(0x8B47E4) = 0xB8;
    MEM8(0x8B47E6) = LO8(eax);
    MEM16(0x8B47E8) = 3;
    MEM16(0x8B47EA) = 0x3D8;
    MEM8(0x8B47EC) = LO8(eax);
    MEM16(0x8B47EE) = LO16(edx);
    MEM16(0x8B47F0) = 0x3DB;
    MEM8(0x8B47F2) = LO8(eax);
    MEM16(0x8B47F4) = LO16(edx);
    MEM16(0x8B47F6) = 0x3DC;
    MEM8(0x8B47F8) = LO8(ecx);
    MEM16(0x8B47FA) = LO16(edx);
    MEM16(0x8B47FC) = 0x3DD;
    MEM8(0x8B47FE) = LO8(ecx);
    MEM16(0x8B4800) = 2;
    MEM16(0x8B4802) = 0x3DE;
    MEM8(0x8B4804) = LO8(eax);
    MEM16(0x8B4806) = 0x800;
    MEM16(0x8B4808) = 0x3E0;
    MEM8(0x8B480A) = LO8(eax);

loc_001D927E: ;
    ecx = MEM32(0x9016AC);
    PUSH32(esp, 8);
    PUSH32(esp, 0x8B47DC);
    PUSH32(esp, 0x001D9290u); RECOMP_ABI_CALL(0x0001E8E0u, sub_0001E8E0); /* call 0x0001E8E0 */

loc_001D9290: ;
    MEM32(esi + 0x1930) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001D92E0
 * Original: 0x001D92E0 - 0x001D9301 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D92E0(void)
{

loc_001D92E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x1930);
    ecx = MEM32(0x9016AC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D92F5u); RECOMP_ABI_CALL(0x0003451Eu, sub_0003451E); /* call 0x0003451E */

loc_001D92F5: ;
    MEM32(esi + 0x1930) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001D9310
 * Original: 0x001D9310 - 0x001D9349 (57 bytes, 20 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9310(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D9310: ;
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x1930);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D9345; /* je: equal / zero */

loc_001D931D: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x7F14D4);
    ecx = esi;
    PUSH32(esp, 0x001D932Fu); RECOMP_ABI_CALL(0x00020717u, sub_00020717); /* call 0x00020717 */

loc_001D932F: ;
    eax = MEM32(edi + 0x1930);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001D933Du); RECOMP_ABI_CALL(0x000259C4u, sub_000259C4); /* call 0x000259C4 */

loc_001D933D: ;
    ecx = esi;
    PUSH32(esp, 0x001D9344u); RECOMP_ABI_CALL(0x000115F0u, sub_000115F0); /* call 0x000115F0 */

loc_001D9344: ;
    POP32(esp, esi);

loc_001D9345: ;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D9360
 * Original: 0x001D9360 - 0x001D93AC (76 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9360(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001D9360: ;
    ecx = MEM32(esp + 4);
    SET_LO8(eax, LO8(ecx));
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 3);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0x76C) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0x76C (16-bit) */
    _cf = (int)(_fa < _fb);
    edx = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001D937C; /* jl: less (signed <) */

loc_001D9376: ;
    _fb = (uint32_t)(0x76C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(0x76C));
    ecx = ecx - 0x76C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_001D937C: ;
    eax = (uint32_t)(int32_t)SMEM16(esp + 8);
    PUSH32(esp, esi);
    esi = edx;
    esi = (uint32_t)((int32_t)esi * (int32_t)0xD);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(eax)) >> 32) & 1);
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, LO16(ecx));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x16D);
    if (((2) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int16_t)(LO16(eax))) >> ((((2) & 31u)) - 1)) & 1);
    SET_LO16(eax, (uint32_t)(((int32_t)(int16_t)(LO16(eax))) >> ((2) & 31u)));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* sar result */
    _fb = (uint32_t)(MEM16(esi * 2 + 0x8B432E)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO16(eax)) + (uint64_t)(MEM16(esi * 2 + 0x8B432E))) >> 16) & 1);
    SET_LO16(eax, LO16(eax) + MEM16(esi * 2 + 0x8B432E));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esp + 0xC);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001D93C0
 * Original: 0x001D93C0 - 0x001D944D (141 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D93C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001D93C0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = ZX16(LO16(esi));
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = 0x166DB073;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    if (((7) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(edx)) >> ((((7) & 31u)) - 1)) & 1);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((7) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = edx;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x1F) & 31u;
      if (_sc) {
        _cf = (int)((_sv >> (_sc - 1u)) & 1u);
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(edx)) >> 32) & 1);
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xFE93);
    SET_LO16(edx, LO16(eax));
    if (((2) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int16_t)(LO16(edx))) >> ((((2) & 31u)) - 1)) & 1);
    SET_LO16(edx, (uint32_t)(((int32_t)(int16_t)(LO16(edx))) >> ((2) & 31u)));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* sar result */
    _fb = (uint32_t)(0x76C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x76C)) >> 32) & 1);
    eax = eax + 0x76C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(edx));
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(esp + 0x10);
    MEM16(edx) = LO16(eax);
    edx = MEM32(esp + 0x14);
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 3);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(esi)) >> 32) & 1);
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    MEM16(edx) = 0;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(eax)) >> 32) & 1);
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)((int32_t)eax * (int32_t)0xD);
    edi = (uint32_t)(int32_t)SMEM16(eax * 2 + 0x8B4330);
    esi = ZX16(LO16(ecx));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_001D9436; /* jle: less or equal (signed <=) */

loc_001D9422: ;
    MEM16(edx) = MEM16(edx) + 1;
    _fa = (uint32_t)(MEM16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    edi = (uint32_t)(int32_t)SMEM16(edx);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(eax)) >> 32) & 1);
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = (uint32_t)(int32_t)SMEM16(edi * 2 + 0x8B4330);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_001D9422; /* jg: greater (signed >) */

loc_001D9436: ;
    edx = (uint32_t)(int32_t)SMEM16(edx);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(eax)) >> 32) & 1);
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM16(edx * 2 + 0x8B432E)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(LO16(ecx)) < (uint32_t)(MEM16(edx * 2 + 0x8B432E)));
    SET_LO16(ecx, LO16(ecx) - MEM16(edx * 2 + 0x8B432E));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x18);
    POP32(esp, edi);
    MEM16(eax) = LO16(ecx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001D9470
 * Original: 0x001D9470 - 0x001D9473 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001D9470(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D9470: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_001D9480
 * Original: 0x001D9480 - 0x001D9486 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9480(void)
{

loc_001D9480: ;
    eax = MEM32(0x8FA540);
    esp += 4; return; /* ret */

}

/**
 * sub_001D9490
 * Original: 0x001D9490 - 0x001D94A1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9490(void)
{

loc_001D9490: ;
    ecx = MEM32(0x8FA540);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x001D94A0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D949Du); } /* indirect call */
    }

loc_001D94A0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001D94B0
 * Original: 0x001D94B0 - 0x001D94C1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D94B0(void)
{

loc_001D94B0: ;
    ecx = MEM32(0x8FA540);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x001D94C0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D94BDu); } /* indirect call */
    }

loc_001D94C0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001D94D0
 * Original: 0x001D94D0 - 0x001D94D8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D94D0(void)
{

loc_001D94D0: ;
    MEM8(0x8F5ADC) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_001D94E0
 * Original: 0x001D94E0 - 0x001D94FB (27 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D94E0(void)
{

loc_001D94E0: ;
    edx = MEM32(esp + 4);
    ecx = MEM32(0x8F5B04);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x100);
    PUSH32(esp, edx);
    PUSH32(esp, 0x7F14E8);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001D94FAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D94F7u); } /* indirect call */
    }

loc_001D94FA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001D9510
 * Original: 0x001D9510 - 0x001D9525 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9510(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D9510: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D9524; /* je: equal / zero */

loc_001D9518: ;
    ecx = MEM32(0x8F5B04);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x001D9524u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D9521u); } /* indirect call */
    }

loc_001D9524: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001D9530
 * Original: 0x001D9530 - 0x001D954B (27 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9530(void)
{

loc_001D9530: ;
    edx = MEM32(esp + 4);
    ecx = MEM32(0x8F5B04);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x100);
    PUSH32(esp, edx);
    PUSH32(esp, 0x7F14E8);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001D954Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D9547u); } /* indirect call */
    }

loc_001D954A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001D9560
 * Original: 0x001D9560 - 0x001D9575 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9560(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D9560: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D9574; /* je: equal / zero */

loc_001D9568: ;
    ecx = MEM32(0x8F5B04);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x001D9574u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D9571u); } /* indirect call */
    }

loc_001D9574: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001D9580
 * Original: 0x001D9580 - 0x001D959B (27 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9580(void)
{

loc_001D9580: ;
    edx = MEM32(esp + 4);
    ecx = MEM32(0x8F5B04);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x100);
    PUSH32(esp, edx);
    PUSH32(esp, 0x7F14E8);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001D959Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D9597u); } /* indirect call */
    }

loc_001D959A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001D95B0
 * Original: 0x001D95B0 - 0x001D95C5 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D95B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D95B0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D95C4; /* je: equal / zero */

loc_001D95B8: ;
    ecx = MEM32(0x8F5B04);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x001D95C4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D95C1u); } /* indirect call */
    }

loc_001D95C4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001D95D0
 * Original: 0x001D95D0 - 0x001D95EB (27 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D95D0(void)
{

loc_001D95D0: ;
    edx = MEM32(esp + 4);
    ecx = MEM32(0x8F5B04);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x100);
    PUSH32(esp, edx);
    PUSH32(esp, 0x7F14E8);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001D95EAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D95E7u); } /* indirect call */
    }

loc_001D95EA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001D9600
 * Original: 0x001D9600 - 0x001D9615 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9600(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D9600: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D9614; /* je: equal / zero */

loc_001D9608: ;
    ecx = MEM32(0x8F5B04);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x001D9614u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D9611u); } /* indirect call */
    }

loc_001D9614: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001D9620
 * Original: 0x001D9620 - 0x001D963B (27 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9620(void)
{

loc_001D9620: ;
    edx = MEM32(esp + 4);
    ecx = MEM32(0x8F5B04);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x100);
    PUSH32(esp, edx);
    PUSH32(esp, 0x7F14E8);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001D963Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D9637u); } /* indirect call */
    }

loc_001D963A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001D9650
 * Original: 0x001D9650 - 0x001D9665 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9650(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D9650: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D9664; /* je: equal / zero */

loc_001D9658: ;
    ecx = MEM32(0x8F5B04);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x001D9664u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D9661u); } /* indirect call */
    }

loc_001D9664: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001D9670
 * Original: 0x001D9670 - 0x001D9673 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9670(void)
{

loc_001D9670: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_001D9680
 * Original: 0x001D9680 - 0x001D969B (27 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9680(void)
{

loc_001D9680: ;
    edx = MEM32(esp + 4);
    ecx = MEM32(0x8F5B04);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x100);
    PUSH32(esp, edx);
    PUSH32(esp, 0x7F1500);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001D969Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D9697u); } /* indirect call */
    }

loc_001D969A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001D96B0
 * Original: 0x001D96B0 - 0x001D96C5 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D96B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D96B0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D96C4; /* je: equal / zero */

loc_001D96B8: ;
    ecx = MEM32(0x8F5B04);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x001D96C4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D96C1u); } /* indirect call */
    }

loc_001D96C4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001D96D0
 * Original: 0x001D96D0 - 0x001D96D6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D96D0(void)
{

loc_001D96D0: ;
    eax = MEM32(0x8F5AD0);
    esp += 4; return; /* ret */

}

/**
 * sub_001D96E0
 * Original: 0x001D96E0 - 0x001D981D (317 bytes, 106 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D96E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D96E0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_A(_fa, _fb)) goto loc_001D9819; /* ja: above (unsigned >) */

loc_001D96F0: ;
    PUSH32(esp, edi);
    { uint32_t _jt = MEM32(eax * 4 + 0x1D9820); /* switch: 14 entries, 8 targets */
    if (_jt == 0x001D96F8u) goto loc_001D96F8;
    if (_jt == 0x001D972Cu) goto loc_001D972C;
    if (_jt == 0x001D9762u) goto loc_001D9762;
    if (_jt == 0x001D97AAu) goto loc_001D97AA;
    if (_jt == 0x001D97D0u) goto loc_001D97D0;
    if (_jt == 0x001D97F6u) goto loc_001D97F6;
    if (_jt == 0x001D9802u) goto loc_001D9802;
    if (_jt == 0x001D980Eu) goto loc_001D980E;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001D96F8: ;
    eax = MEM32(esi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D970B; /* je: equal / zero */

loc_001D9700: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D9706u); RECOMP_ABI_CALL(0x0001B6E0u, sub_0001B6E0); /* call 0x0001B6E0 */

loc_001D9706: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = edi;

loc_001D970B: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D9721; /* je: equal / zero */

loc_001D9712: ;
    ecx = MEM32(0x8F5B04);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x001D971Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D971Bu); } /* indirect call */
    }

loc_001D971E: ;
    MEM32(esi + 0xC) = edi;

loc_001D9721: ;
    MEM32(esi + 4) = edi;
    MEM32(esi + 8) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001D972C: ;
    eax = MEM32(esi + 0x5C);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D9741; /* je: equal / zero */

loc_001D9735: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D973Bu); RECOMP_ABI_CALL(0x0001F506u, sub_0001F506); /* call 0x0001F506 */

loc_001D973B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x5C) = edi;

loc_001D9741: ;
    eax = MEM32(esi + 0x68);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D9757; /* je: equal / zero */

loc_001D9748: ;
    ecx = MEM32(0x8F5B04);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x001D9754u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D9751u); } /* indirect call */
    }

loc_001D9754: ;
    MEM32(esi + 0x68) = edi;

loc_001D9757: ;
    MEM32(esi + 0x60) = edi;
    MEM32(esi + 0x64) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001D9762: ;
    eax = MEM32(esi + 0x8C);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D977D; /* je: equal / zero */

loc_001D976E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D9774u); RECOMP_ABI_CALL(0x0002602Cu, sub_0002602C); /* call 0x0002602C */

loc_001D9774: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x8C) = edi;

loc_001D977D: ;
    eax = MEM32(esi + 0x98);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D9799; /* je: equal / zero */

loc_001D9787: ;
    ecx = MEM32(0x8F5B04);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x001D9793u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D9790u); } /* indirect call */
    }

loc_001D9793: ;
    MEM32(esi + 0x98) = edi;

loc_001D9799: ;
    MEM32(esi + 0x90) = edi;
    MEM32(esi + 0x94) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001D97AA: ;
    eax = MEM32(esi + 0xB8);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D97C5; /* je: equal / zero */

loc_001D97B6: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D97BCu); RECOMP_ABI_CALL(0x00020659u, sub_00020659); /* call 0x00020659 */

loc_001D97BC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xB8) = edi;

loc_001D97C5: ;
    MEM32(esi + 0xBC) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001D97D0: ;
    eax = MEM32(esi + 0x128);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D97EB; /* je: equal / zero */

loc_001D97DC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D97E2u); RECOMP_ABI_CALL(0x0002DA8Eu, sub_0002DA8E); /* call 0x0002DA8E */

loc_001D97E2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x128) = edi;

loc_001D97EB: ;
    MEM32(esi + 0x12C) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001D97F6: ;
    POP32(esp, edi);
    MEM32(esi + 8) = 0;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001D9802: ;
    POP32(esp, edi);
    MEM32(esi + 0x64) = 0;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001D980E: ;
    MEM32(esi + 0x94) = 0;
    POP32(esp, edi);

loc_001D9819: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D9970
 * Original: 0x001D9970 - 0x001D99AD (61 bytes, 24 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9970(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D9970: ;
    eax = MEM32(ecx + 0xC);
    edx = MEM32(esp + 4);
    SET_LO16(eax, MEM16(eax + edx * 2));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_L(_fas, _fbs)) goto loc_001D9991; /* jl: less (signed <) */

loc_001D9982: ;
    esi = MEM32(ecx + 4);
    edx = MEM32(ecx + 8);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = SX16(LO16(eax));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D9993; /* jl: less (signed <) */

loc_001D9991: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001D9993: ;
    edi = MEM32(esp + 0x10);
    esi = SX16(LO16(eax));
    eax = MEM32(ecx);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x4C);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x13;
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
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001D99C0
 * Original: 0x001D99C0 - 0x001D9A27 (103 bytes, 35 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D99C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D99C0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2000 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D99DD; /* jl: less (signed <) */

loc_001D99CB: ;
    SET_LO8(eax, MEM8(0x8F9015));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D99DB; /* jne: not equal / not zero */

loc_001D99D4: ;
    MEM8(0x8F9015) = 1;

loc_001D99DB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001D99DD: ;
    edx = MEM32(ecx + 0x68);
    SET_LO16(eax, MEM16(edx + eax * 2));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_L(_fas, _fbs)) goto loc_001D99FA; /* jl: less (signed <) */

loc_001D99EB: ;
    esi = MEM32(ecx + 0x60);
    edx = MEM32(ecx + 0x64);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = SX16(LO16(eax));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D9A0C; /* jl: less (signed <) */

loc_001D99FA: ;
    SET_LO8(eax, MEM8(0x8F9014));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D9A0A; /* jne: not equal / not zero */

loc_001D9A03: ;
    MEM8(0x8F9014) = 1;

loc_001D9A0A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001D9A0C: ;
    edi = MEM32(esp + 0x10);
    esi = SX16(LO16(eax));
    eax = MEM32(ecx + 0x5C);
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(5) & 31u;
      if (_sc) {
        esi = _sv << _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 8;
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
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001D9A40
 * Original: 0x001D9A40 - 0x001D9AB3 (115 bytes, 35 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9A40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D9A40: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2000 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D9A5D; /* jl: less (signed <) */

loc_001D9A4B: ;
    SET_LO8(eax, MEM8(0x8F9017));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D9A5B; /* jne: not equal / not zero */

loc_001D9A54: ;
    MEM8(0x8F9017) = 1;

loc_001D9A5B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001D9A5D: ;
    edx = MEM32(ecx + 0x98);
    SET_LO16(eax, MEM16(edx + eax * 2));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_L(_fas, _fbs)) goto loc_001D9A83; /* jl: less (signed <) */

loc_001D9A6E: ;
    esi = MEM32(ecx + 0x90);
    edx = MEM32(ecx + 0x94);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = SX16(LO16(eax));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D9A95; /* jl: less (signed <) */

loc_001D9A83: ;
    SET_LO8(eax, MEM8(0x8F9016));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D9A93; /* jne: not equal / not zero */

loc_001D9A8C: ;
    MEM8(0x8F9016) = 1;

loc_001D9A93: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001D9A95: ;
    edi = MEM32(esp + 0x10);
    esi = SX16(LO16(eax));
    eax = MEM32(ecx + 0x8C);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x1C);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 7;
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
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001D9AD0
 * Original: 0x001D9AD0 - 0x001D9B1B (75 bytes, 32 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9AD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D9AD0: ;
    edx = MEM32(ecx + 0xBC);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001D9B17; /* jle: less or equal (signed <=) */

loc_001D9ADD: ;
    ecx = MEM32(ecx + 0xB8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = ecx;
    PUSH32(esp, ebx);
    goto loc_001D9AF0;

    /* nop */

loc_001D9AF0: ;
    ebx = (uint32_t)(int32_t)SMEM8(eax);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D9B05; /* je: equal / zero */

loc_001D9AF7: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x68) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x68;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D9AF0; /* jl: less (signed <) */

loc_001D9AFF: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_001D9B05: ;
    edi = MEM32(esp + 0x14);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x68);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x1A;
    POP32(esp, ebx);
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

loc_001D9B17: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001D9B30
 * Original: 0x001D9B30 - 0x001D9B7B (75 bytes, 32 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9B30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D9B30: ;
    edx = MEM32(ecx + 0x12C);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001D9B77; /* jle: less or equal (signed <=) */

loc_001D9B3D: ;
    ecx = MEM32(ecx + 0x128);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = ecx;
    PUSH32(esp, ebx);
    goto loc_001D9B50;

    /* nop */

loc_001D9B50: ;
    ebx = (uint32_t)(int32_t)SMEM8(eax);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D9B65; /* je: equal / zero */

loc_001D9B57: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x6C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D9B50; /* jl: less (signed <) */

loc_001D9B5F: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_001D9B65: ;
    edi = MEM32(esp + 0x14);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x6C);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x1B;
    POP32(esp, ebx);
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

loc_001D9B77: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001D9B90
 * Original: 0x001D9B90 - 0x001D9BC1 (49 bytes, 18 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9B90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D9B90: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x12C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x12C) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001D9BBB; /* jge: greater or equal (signed >=) */

loc_001D9B9D: ;
    esi = MEM32(ecx + 0x128);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6C);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x1B;
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
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_001D9BBB: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001D9BD0
 * Original: 0x001D9BD0 - 0x001D9C11 (65 bytes, 27 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9BD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D9BD0: ;
    eax = MEM32(ecx + 0xC);
    edx = MEM32(esp + 4);
    SET_LO16(edx, MEM16(eax + edx * 2));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 0 (16-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_L(_fas, _fbs)) goto loc_001D9C0A; /* jl: less (signed <) */

loc_001D9BE2: ;
    eax = MEM32(ecx + 8);
    esi = MEM32(ecx + 4);
    edi = SX16(LO16(edx));
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001D9C0A; /* jge: greater or equal (signed >=) */

loc_001D9BF1: ;
    eax = MEM32(ecx);
    edi = (uint32_t)((int32_t)edi * (int32_t)0x4C);
    esi = MEM32(esp + 0x10);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x13;
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
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_001D9C0A: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001D9C30
 * Original: 0x001D9C30 - 0x001D9C72 (66 bytes, 27 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9C30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D9C30: ;
    eax = MEM32(ecx + 0x68);
    edx = MEM32(esp + 4);
    SET_LO16(edx, MEM16(eax + edx * 2));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 0 (16-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_L(_fas, _fbs)) goto loc_001D9C6B; /* jl: less (signed <) */

loc_001D9C42: ;
    eax = MEM32(ecx + 0x64);
    esi = MEM32(ecx + 0x60);
    edi = SX16(LO16(edx));
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001D9C6B; /* jge: greater or equal (signed >=) */

loc_001D9C51: ;
    eax = MEM32(ecx + 0x5C);
    esi = MEM32(esp + 0x10);
    { uint32_t _sv=(uint32_t)(edi), _sc=(uint32_t)(5) & 31u;
      if (_sc) {
        edi = _sv << _sc;
        _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 8;
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
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_001D9C6B: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001D9C90
 * Original: 0x001D9C90 - 0x001D9CDE (78 bytes, 27 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9C90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D9C90: ;
    eax = MEM32(ecx + 0x98);
    edx = MEM32(esp + 4);
    SET_LO16(edx, MEM16(eax + edx * 2));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 0 (16-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_L(_fas, _fbs)) goto loc_001D9CD7; /* jl: less (signed <) */

loc_001D9CA5: ;
    eax = MEM32(ecx + 0x94);
    esi = MEM32(ecx + 0x90);
    edi = SX16(LO16(edx));
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001D9CD7; /* jge: greater or equal (signed >=) */

loc_001D9CBA: ;
    eax = MEM32(ecx + 0x8C);
    edi = (uint32_t)((int32_t)edi * (int32_t)0x1C);
    esi = MEM32(esp + 0x10);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 7;
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
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_001D9CD7: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001D9D00
 * Original: 0x001D9D00 - 0x001D9D4F (79 bytes, 34 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9D00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D9D00: ;
    edx = MEM32(ecx + 0x12C);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001D9D2F; /* jle: less or equal (signed <=) */

loc_001D9D0F: ;
    ecx = MEM32(ecx + 0x128);
    esi = MEM32(esp + 0x10);
    eax = ecx;
    goto loc_001D9D20;

    /* nop */

loc_001D9D20: ;
    ebx = (uint32_t)(int32_t)SMEM8(eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D9D37; /* je: equal / zero */

loc_001D9D27: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x6C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D9D20; /* jl: less (signed <) */

loc_001D9D2F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_001D9D37: ;
    esi = MEM32(esp + 0x14);
    edi = (uint32_t)((int32_t)edi * (int32_t)0x6C);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x1B;
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
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001D9D70
 * Original: 0x001D9D70 - 0x001D9DBC (76 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9D70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D9D70: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x5C) = ecx;
    MEM32(eax + 0x60) = ecx;
    MEM32(eax + 0x64) = ecx;
    MEM32(eax + 0x68) = ecx;
    MEM32(eax + 0x8C) = ecx;
    MEM32(eax + 0x90) = ecx;
    MEM32(eax + 0x94) = ecx;
    MEM32(eax + 0x98) = ecx;
    MEM32(eax + 0xB8) = ecx;
    MEM32(eax + 0xBC) = ecx;
    MEM32(eax + 0x128) = ecx;
    MEM32(eax + 0x12C) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_001D9DD0
 * Original: 0x001D9DD0 - 0x001D9E10 (64 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9DD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D9DD0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D9DE5; /* je: equal / zero */

loc_001D9DD9: ;
    ecx = MEM32(0x8F5B04);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x001D9DE5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D9DE2u); } /* indirect call */
    }

loc_001D9DE5: ;
    eax = MEM32(esi + 0x5C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D9DF8; /* je: equal / zero */

loc_001D9DEC: ;
    ecx = MEM32(0x8F5B04);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x001D9DF8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D9DF5u); } /* indirect call */
    }

loc_001D9DF8: ;
    esi = MEM32(esi + 0x8C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D9E0E; /* je: equal / zero */

loc_001D9E02: ;
    ecx = MEM32(0x8F5B04);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x001D9E0Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D9E0Bu); } /* indirect call */
    }

loc_001D9E0E: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001D9E20
 * Original: 0x001D9E20 - 0x001D9E2F (15 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9E20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D9E20: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x110) = eax;
    MEM32(ecx + 0x114) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_001D9E40
 * Original: 0x001D9E40 - 0x001D9E5B (27 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9E40(void)
{

loc_001D9E40: ;
    edx = MEM32(esp + 4);
    ecx = MEM32(0x8F5B04);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x100);
    PUSH32(esp, edx);
    PUSH32(esp, 0x7F1500);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001D9E5Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D9E57u); } /* indirect call */
    }

loc_001D9E5A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001D9E70
 * Original: 0x001D9E70 - 0x001D9E8B (27 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9E70(void)
{

loc_001D9E70: ;
    edx = MEM32(esp + 4);
    ecx = MEM32(0x8F5B04);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x100);
    PUSH32(esp, edx);
    PUSH32(esp, 0x7F1500);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001D9E8Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D9E87u); } /* indirect call */
    }

loc_001D9E8A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001D9EA0
 * Original: 0x001D9EA0 - 0x001D9EB5 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9EA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D9EA0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D9EB4; /* je: equal / zero */

loc_001D9EA8: ;
    ecx = MEM32(0x8F5B04);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x001D9EB4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D9EB1u); } /* indirect call */
    }

loc_001D9EB4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001D9EC0
 * Original: 0x001D9EC0 - 0x001D9ECB (11 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9EC0(void)
{

loc_001D9EC0: ;
    eax = MEM32(esp + 4);
    SET_LO8(eax, MEM8(eax + ecx + 0x24));
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D9ED0
 * Original: 0x001D9ED0 - 0x001D9EDF (15 bytes, 4 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9ED0(void)
{

loc_001D9ED0: ;
    SET_LO8(eax, MEM8(esp + 8));
    edx = MEM32(esp + 4);
    MEM8(edx + ecx + 0x24) = LO8(eax);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001D9EF0
 * Original: 0x001D9EF0 - 0x001D9EF4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9EF0(void)
{

loc_001D9EF0: ;
    eax = MEM32(ecx + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_001D9F00
 * Original: 0x001D9F00 - 0x001D9F1B (27 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9F00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D9F00: ;
    ecx = MEM32(0x8F5AD4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D9F1A; /* je: equal / zero */

loc_001D9F0A: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x001D9F10u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D9F0Eu); } /* indirect call */
    }

loc_001D9F10: ;
    MEM32(0x8F5AD4) = 0;

loc_001D9F1A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001D9F30
 * Original: 0x001D9F30 - 0x001D9F36 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9F30(void)
{

loc_001D9F30: ;
    eax = MEM32(0x8F5AD4);
    esp += 4; return; /* ret */

}

/**
 * sub_001D9F40
 * Original: 0x001D9F40 - 0x001DA1BF (639 bytes, 175 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9F40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D9F40: ;
    _fb = (uint32_t)(0x118) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x118;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x7F15F0);
    ecx = esp + 0xC;
    PUSH32(esp, 0x001D9F57u); RECOMP_ABI_CALL(0x000319B3u, sub_000319B3); /* call 0x000319B3 */

loc_001D9F57: ;
    PUSH32(esp, 0);
    ecx = esp + 8;
    MEM32(esp + 0x118) = 0;
    MEM32(esp + 0x11C) = 0;
    PUSH32(esp, 0x001D9F78u); RECOMP_ABI_CALL(0x0001682Au, sub_0001682A); /* call 0x0001682A */

loc_001D9F78: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DA1AE; /* je: equal / zero */

loc_001D9F82: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x7F15E8);
    PUSH32(esp, 0x001D9F8Du); RECOMP_ABI_CALL(0x005CDE09u, sub_005CDE09); /* call 0x005CDE09 */

loc_001D9F8D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D9FA5; /* jne: not equal / not zero */

loc_001D9F94: ;
    ecx = esp + 4;
    PUSH32(esp, 0x001D9F9Du); RECOMP_ABI_CALL(0x0001D274u, sub_0001D274); /* call 0x0001D274 */

loc_001D9F9D: ;
    eax = SX16(LO16(eax));
    MEM32(0x8F5830) = eax;

loc_001D9FA5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x7F15D8);
    PUSH32(esp, 0x001D9FB0u); RECOMP_ABI_CALL(0x005CDE09u, sub_005CDE09); /* call 0x005CDE09 */

loc_001D9FB0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D9FC9; /* jne: not equal / not zero */

loc_001D9FB7: ;
    ecx = esp + 4;
    PUSH32(esp, 0x001D9FC0u); RECOMP_ABI_CALL(0x0001D274u, sub_0001D274); /* call 0x0001D274 */

loc_001D9FC0: ;
    ecx = SX16(LO16(eax));
    MEM32(0x8F5834) = ecx;

loc_001D9FC9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x7F15C8);
    PUSH32(esp, 0x001D9FD4u); RECOMP_ABI_CALL(0x005CDE09u, sub_005CDE09); /* call 0x005CDE09 */

loc_001D9FD4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D9FED; /* jne: not equal / not zero */

loc_001D9FDB: ;
    ecx = esp + 4;
    PUSH32(esp, 0x001D9FE4u); RECOMP_ABI_CALL(0x0001D274u, sub_0001D274); /* call 0x0001D274 */

loc_001D9FE4: ;
    edx = SX16(LO16(eax));
    MEM32(0x8F5838) = edx;

loc_001D9FED: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x7F15B4);
    PUSH32(esp, 0x001D9FF8u); RECOMP_ABI_CALL(0x005CDE09u, sub_005CDE09); /* call 0x005CDE09 */

loc_001D9FF8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DA010; /* jne: not equal / not zero */

loc_001D9FFF: ;
    ecx = esp + 4;
    PUSH32(esp, 0x001DA008u); RECOMP_ABI_CALL(0x0001D274u, sub_0001D274); /* call 0x0001D274 */

loc_001DA008: ;
    eax = SX16(LO16(eax));
    MEM32(0x8F583C) = eax;

loc_001DA010: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x7F15A8);
    PUSH32(esp, 0x001DA01Bu); RECOMP_ABI_CALL(0x005CDE09u, sub_005CDE09); /* call 0x005CDE09 */

loc_001DA01B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DA034; /* jne: not equal / not zero */

loc_001DA022: ;
    ecx = esp + 4;
    PUSH32(esp, 0x001DA02Bu); RECOMP_ABI_CALL(0x0001D274u, sub_0001D274); /* call 0x0001D274 */

loc_001DA02B: ;
    ecx = SX16(LO16(eax));
    MEM32(0x8F5840) = ecx;

loc_001DA034: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x7F15A0);
    PUSH32(esp, 0x001DA03Fu); RECOMP_ABI_CALL(0x005CDE09u, sub_005CDE09); /* call 0x005CDE09 */

loc_001DA03F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DA058; /* jne: not equal / not zero */

loc_001DA046: ;
    ecx = esp + 4;
    PUSH32(esp, 0x001DA04Fu); RECOMP_ABI_CALL(0x0001D274u, sub_0001D274); /* call 0x0001D274 */

loc_001DA04F: ;
    edx = SX16(LO16(eax));
    MEM32(0x8F5844) = edx;

loc_001DA058: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x7F158C);
    PUSH32(esp, 0x001DA063u); RECOMP_ABI_CALL(0x005CDE09u, sub_005CDE09); /* call 0x005CDE09 */

loc_001DA063: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DA07B; /* jne: not equal / not zero */

loc_001DA06A: ;
    ecx = esp + 4;
    PUSH32(esp, 0x001DA073u); RECOMP_ABI_CALL(0x0001D274u, sub_0001D274); /* call 0x0001D274 */

loc_001DA073: ;
    eax = SX16(LO16(eax));
    MEM32(0x8F5848) = eax;

loc_001DA07B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x7F1580);
    PUSH32(esp, 0x001DA086u); RECOMP_ABI_CALL(0x005CDE09u, sub_005CDE09); /* call 0x005CDE09 */

loc_001DA086: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DA09F; /* jne: not equal / not zero */

loc_001DA08D: ;
    ecx = esp + 4;
    PUSH32(esp, 0x001DA096u); RECOMP_ABI_CALL(0x0001D274u, sub_0001D274); /* call 0x0001D274 */

loc_001DA096: ;
    ecx = SX16(LO16(eax));
    MEM32(0x8F584C) = ecx;

loc_001DA09F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x7F1570);
    PUSH32(esp, 0x001DA0AAu); RECOMP_ABI_CALL(0x005CDE09u, sub_005CDE09); /* call 0x005CDE09 */

loc_001DA0AA: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DA0C3; /* jne: not equal / not zero */

loc_001DA0B1: ;
    ecx = esp + 4;
    PUSH32(esp, 0x001DA0BAu); RECOMP_ABI_CALL(0x0001D274u, sub_0001D274); /* call 0x0001D274 */

loc_001DA0BA: ;
    edx = SX16(LO16(eax));
    MEM32(0x8F5850) = edx;

loc_001DA0C3: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x7F1564);
    PUSH32(esp, 0x001DA0CEu); RECOMP_ABI_CALL(0x005CDE09u, sub_005CDE09); /* call 0x005CDE09 */

loc_001DA0CE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DA0E6; /* jne: not equal / not zero */

loc_001DA0D5: ;
    ecx = esp + 4;
    PUSH32(esp, 0x001DA0DEu); RECOMP_ABI_CALL(0x0001D274u, sub_0001D274); /* call 0x0001D274 */

loc_001DA0DE: ;
    eax = SX16(LO16(eax));
    MEM32(0x8F5854) = eax;

loc_001DA0E6: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x7F1554);
    PUSH32(esp, 0x001DA0F1u); RECOMP_ABI_CALL(0x005CDE09u, sub_005CDE09); /* call 0x005CDE09 */

loc_001DA0F1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DA10A; /* jne: not equal / not zero */

loc_001DA0F8: ;
    ecx = esp + 4;
    PUSH32(esp, 0x001DA101u); RECOMP_ABI_CALL(0x0001D274u, sub_0001D274); /* call 0x0001D274 */

loc_001DA101: ;
    ecx = SX16(LO16(eax));
    MEM32(0x8F5858) = ecx;

loc_001DA10A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x7F1544);
    PUSH32(esp, 0x001DA115u); RECOMP_ABI_CALL(0x005CDE09u, sub_005CDE09); /* call 0x005CDE09 */

loc_001DA115: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DA12E; /* jne: not equal / not zero */

loc_001DA11C: ;
    ecx = esp + 4;
    PUSH32(esp, 0x001DA125u); RECOMP_ABI_CALL(0x0001D274u, sub_0001D274); /* call 0x0001D274 */

loc_001DA125: ;
    edx = SX16(LO16(eax));
    MEM32(0x8F585C) = edx;

loc_001DA12E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x7F153C);
    PUSH32(esp, 0x001DA139u); RECOMP_ABI_CALL(0x005CDE09u, sub_005CDE09); /* call 0x005CDE09 */

loc_001DA139: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DA151; /* jne: not equal / not zero */

loc_001DA140: ;
    ecx = esp + 4;
    PUSH32(esp, 0x001DA149u); RECOMP_ABI_CALL(0x0001D274u, sub_0001D274); /* call 0x0001D274 */

loc_001DA149: ;
    eax = SX16(LO16(eax));
    MEM32(0x8F5860) = eax;

loc_001DA151: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x7F152C);
    PUSH32(esp, 0x001DA15Cu); RECOMP_ABI_CALL(0x005CDE09u, sub_005CDE09); /* call 0x005CDE09 */

loc_001DA15C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DA175; /* jne: not equal / not zero */

loc_001DA163: ;
    ecx = esp + 4;
    PUSH32(esp, 0x001DA16Cu); RECOMP_ABI_CALL(0x0001D274u, sub_0001D274); /* call 0x0001D274 */

loc_001DA16C: ;
    ecx = SX16(LO16(eax));
    MEM32(0x8F5864) = ecx;

loc_001DA175: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x7F1510);
    PUSH32(esp, 0x001DA180u); RECOMP_ABI_CALL(0x005CDE09u, sub_005CDE09); /* call 0x005CDE09 */

loc_001DA180: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DA199; /* jne: not equal / not zero */

loc_001DA187: ;
    ecx = esp + 4;
    PUSH32(esp, 0x001DA190u); RECOMP_ABI_CALL(0x0001D274u, sub_0001D274); /* call 0x0001D274 */

loc_001DA190: ;
    edx = SX16(LO16(eax));
    MEM32(0x8F5868) = edx;

loc_001DA199: ;
    PUSH32(esp, 0);
    ecx = esp + 8;
    PUSH32(esp, 0x001DA1A4u); RECOMP_ABI_CALL(0x0001682Au, sub_0001682A); /* call 0x0001682A */

loc_001DA1A4: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D9F82; /* jne: not equal / not zero */

loc_001DA1AE: ;
    ecx = esp + 4;
    PUSH32(esp, 0x001DA1B7u); RECOMP_ABI_CALL(0x000172A7u, sub_000172A7); /* call 0x000172A7 */

loc_001DA1B7: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x118) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x118;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001DA260
 * Original: 0x001DA260 - 0x001DA27E (30 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DA260(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DA260: ;
    eax = MEM32(esp + 4);
    ecx = 0x8F5830;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = 0xF;
    PUSH32(esp, esi);

loc_001DA271: ;
    esi = MEM32(ecx + eax);
    MEM32(eax) = esi;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001DA271; /* jne: not equal / not zero */

loc_001DA27C: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001DA290
 * Original: 0x001DA290 - 0x001DA2B7 (39 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DA290(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DA290: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x98);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x8F5870) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x8F5870;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);

loc_001DA2A7: ;
    esi = MEM32(ecx);
    MEM32(edx + eax * 4) = esi;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x26) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x26 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001DA2A7; /* jl: less (signed <) */

loc_001DA2B5: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001DA2C0
 * Original: 0x001DA2C0 - 0x001DA2D5 (21 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DA2C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DA2C0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x26);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(eax * 4 + 0x8F4F80);
    esp += 4; return; /* ret */

}

/**
 * sub_001DA2E0
 * Original: 0x001DA2E0 - 0x001DA33F (95 bytes, 42 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DA2E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DA2E0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x7F1608);
    PUSH32(esp, ebx);
    esi = ecx;
    PUSH32(esp, 0x001DA2F3u); RECOMP_ABI_CALL(0x005CDE09u, sub_005CDE09); /* call 0x005CDE09 */

loc_001DA2F3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DA304; /* jne: not equal / not zero */

loc_001DA2FA: ;
    POP32(esp, esi);
    eax = 0x6D;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_001DA304: ;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    /* nop */

loc_001DA310: ;
    eax = ebx;
    edx = eax + 1;

loc_001DA315: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DA315; /* jne: not equal / not zero */

loc_001DA31C: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001DA327u); RECOMP_ABI_CALL(0x005CDDB4u, sub_005CDDB4); /* call 0x005CDDB4 */

loc_001DA327: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DA337; /* je: equal / zero */

loc_001DA32E: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x6D (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001DA310; /* jl: less (signed <) */

loc_001DA337: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001DA360
 * Original: 0x001DA360 - 0x001DA3A1 (65 bytes, 30 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DA360(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DA360: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001DA370;

    /* nop */

loc_001DA370: ;
    eax = MEM32(esi * 4 + 0x8B4818);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001DA37Eu); RECOMP_ABI_CALL(0x005CDE09u, sub_005CDE09); /* call 0x005CDE09 */

loc_001DA37E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DA393; /* je: equal / zero */

loc_001DA385: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x26) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x26 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001DA370; /* jl: less (signed <) */

loc_001DA38B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_001DA393: ;
    ecx = MEM32(esp + 0x14);
    POP32(esp, edi);
    MEM32(ecx) = esi;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001DA3C0
 * Original: 0x001DA3C0 - 0x001DA3E2 (34 bytes, 16 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DA3C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DA3C0: ;
    edx = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001DA3DF; /* jle: less or equal (signed <=) */

loc_001DA3CC: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);

loc_001DA3D2: ;
    edi = ZX8(MEM8(ecx + esi));
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001DA3D2; /* jl: less (signed <) */

loc_001DA3DD: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_001DA3DF: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001DA3F0
 * Original: 0x001DA3F0 - 0x001DA451 (97 bytes, 22 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DA3F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DA3F0: ;
    ecx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x10 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001DA44E; /* ja: above (unsigned >) */

loc_001DA3FB: ;
    ecx = ZX8(MEM8(ecx + 0x1DA464));
    { uint32_t _jt = MEM32(ecx * 4 + 0x1DA454); /* switch: 4 entries, 4 targets */
    if (_jt == 0x001DA409u) goto loc_001DA409;
    if (_jt == 0x001DA41Bu) goto loc_001DA41B;
    if (_jt == 0x001DA42Du) goto loc_001DA42D;
    if (_jt == 0x001DA43Fu) goto loc_001DA43F;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001DA409: ;
    edx = MEM32(esp + 8);
    MEM32(edx) = 0x17;
    eax = 0x8B4368;
    esp += 12; return; /* ret 8 */

loc_001DA41B: ;
    eax = MEM32(esp + 8);
    MEM32(eax) = 0x20;
    eax = 0x8B43C8;
    esp += 12; return; /* ret 8 */

loc_001DA42D: ;
    ecx = MEM32(esp + 8);
    MEM32(ecx) = 0x1E;
    eax = 0x8B4448;
    esp += 12; return; /* ret 8 */

loc_001DA43F: ;
    edx = MEM32(esp + 8);
    MEM32(edx) = 0x28;
    eax = 0x8B44C0;

loc_001DA44E: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001DA4A0
 * Original: 0x001DA4A0 - 0x001DA554 (180 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DA4A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DA4A0: ;
    _fb = (uint32_t)(0x324) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x324;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x8FA540);
    eax = MEM32(ecx);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x251C0);
    MEM32(esp + 0x14) = esi;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x001DA4C0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001DA4BDu); } /* indirect call */
    }

loc_001DA4C0: ;
    ecx = esp + 0x14;
    MEM32(esi + 0x10) = eax;
    PUSH32(esp, 0x001DA4CCu); RECOMP_ABI_CALL(0x000157D6u, sub_000157D6); /* call 0x000157D6 */

loc_001DA4CC: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001DA4D6;

loc_001DA4D2: ;
    esi = MEM32(esp + 0x10);

loc_001DA4D6: ;
    ecx = esp + 0x3C;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x001DA4E5u); RECOMP_ABI_CALL(0x00022C83u, sub_00022C83); /* call 0x00022C83 */

loc_001DA4E5: ;
    _fa = (uint32_t)(MEM8(esp + 0x29C)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0x29C), 4 (8-bit) */
    ecx = esp + 0x14;
    if (CMP_NE(_fa, _fb)) goto loc_001DA503; /* jne: not equal / not zero */

loc_001DA4F3: ;
    edx = esp + 0x2F8;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001DA501u); RECOMP_ABI_CALL(0x0001318Eu, sub_0001318E); /* call 0x0001318E */

loc_001DA501: ;
    goto loc_001DA511;

loc_001DA503: ;
    eax = esp + 0x2F8;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001DA511u); RECOMP_ABI_CALL(0x00011A19u, sub_00011A19); /* call 0x00011A19 */

loc_001DA511: ;
    ecx = esp + 0x3C;
    PUSH32(esp, 0x001DA51Au); RECOMP_ABI_CALL(0x00021CE3u, sub_00021CE3); /* call 0x00021CE3 */

loc_001DA51A: ;
    edi = MEM32(esi + 0x10);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ebp;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x2F8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x2F8;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0xBE;
    esi = esp + 0x3C;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x251C0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x251C0 (32-bit) */
    MEM8(esp + 0x309) = LO8(eax);
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
    if (CMP_L(_fas, _fbs)) goto loc_001DA4D2; /* jl: less (signed <) */

loc_001DA540: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0x001DA549u); RECOMP_ABI_CALL(0x000220C1u, sub_000220C1); /* call 0x000220C1 */

loc_001DA549: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x324) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x324;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001DA590
 * Original: 0x001DA590 - 0x001DA661 (209 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DA590(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DA590: ;
    _fb = (uint32_t)(0x420) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x420;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = esp + 0x1C;
    MEM32(esp + 0x10) = esi;
    PUSH32(esp, 0x001DA5A9u); RECOMP_ABI_CALL(0x000157D6u, sub_000157D6); /* call 0x000157D6 */

loc_001DA5A9: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0x001DA5B2u); RECOMP_ABI_CALL(0x000133F0u, sub_000133F0); /* call 0x000133F0 */

loc_001DA5B2: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001DA5B6: ;
    eax = esp + 0x138;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    ecx = esp + 0x24;
    PUSH32(esp, 0x001DA5C8u); RECOMP_ABI_CALL(0x00022C83u, sub_00022C83); /* call 0x00022C83 */

loc_001DA5C8: ;
    ecx = esp + 0x138;
    PUSH32(esp, 0x001DA5D4u); RECOMP_ABI_CALL(0x0001FFD8u, sub_0001FFD8); /* call 0x0001FFD8 */

loc_001DA5D4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DA61B; /* je: equal / zero */

loc_001DA5D8: ;
    ecx = MEM32(esi + 0x10);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001DA5E2u); RECOMP_ABI_CALL(0x0001FFD8u, sub_0001FFD8); /* call 0x0001FFD8 */

loc_001DA5E2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DA61B; /* jne: not equal / not zero */

loc_001DA5E6: ;
    esi = MEM32(esi + 0x10);
    _fb = (uint32_t)(0x2F8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2F8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = esp;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0xBE;
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
    ecx = esp + 0x33C;
    PUSH32(esp, 0x001DA606u); RECOMP_ABI_CALL(0x0002C4E5u, sub_0002C4E5); /* call 0x0002C4E5 */

loc_001DA606: ;
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    ecx = esp + 0x4C;
    PUSH32(esp, ecx);
    ecx = esp + 0x20;
    PUSH32(esp, 0x001DA617u); RECOMP_ABI_CALL(0x0001F7DBu, sub_0001F7DB); /* call 0x0001F7DB */

loc_001DA617: ;
    esi = MEM32(esp + 0x10);

loc_001DA61B: ;
    _fb = (uint32_t)(0x2F8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x2F8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x251C0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x251C0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001DA5B6; /* jl: less (signed <) */

loc_001DA62A: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DA644; /* je: equal / zero */

loc_001DA631: ;
    ecx = MEM32(0x8FA540);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x001DA63Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001DA63Au); } /* indirect call */
    }

loc_001DA63D: ;
    MEM32(esi + 0x10) = 0;

loc_001DA644: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0x001DA64Du); RECOMP_ABI_CALL(0x0001AE8Eu, sub_0001AE8E); /* call 0x0001AE8E */

loc_001DA64D: ;
    ecx = esp + 0x1C;
    PUSH32(esp, 0x001DA656u); RECOMP_ABI_CALL(0x000220C1u, sub_000220C1); /* call 0x000220C1 */

loc_001DA656: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x420) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x420;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001DA6A0
 * Original: 0x001DA6A0 - 0x001DA6AD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DA6A0(void)
{

loc_001DA6A0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x2F6566;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001DA6B0
 * Original: 0x001DA6B0 - 0x001DA6C9 (25 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DA6B0(void)
{

loc_001DA6B0: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax) = 0x7F19AC;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = 0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001DA6D0
 * Original: 0x001DA6D0 - 0x001DA6F5 (37 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DA6D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DA6D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x7F19AC;
    if (CMP_EQ(_fa, _fb)) goto loc_001DA6F3; /* je: equal / zero */

loc_001DA6E0: ;
    ecx = MEM32(0x8FA540);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x001DA6ECu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001DA6E9u); } /* indirect call */
    }

loc_001DA6EC: ;
    MEM32(esi + 0x10) = 0;

loc_001DA6F3: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001DA700
 * Original: 0x001DA700 - 0x001DA793 (147 bytes, 74 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DA700(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DA700: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001DA707u); RECOMP_ABI_CALL(0x0002221Fu, sub_0002221F); /* call 0x0002221F */

loc_001DA707: ;
    eax = MEM32(eax + 8);
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 4) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_001DA78E; /* jle: less or equal (signed <=) */

loc_001DA716: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    /* nop */

loc_001DA720: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001DA726u); RECOMP_ABI_CALL(0x0002221Fu, sub_0002221F); /* call 0x0002221F */

loc_001DA726: ;
    ecx = eax;
    PUSH32(esp, 0x001DA72Du); RECOMP_ABI_CALL(0x000180A8u, sub_000180A8); /* call 0x000180A8 */

loc_001DA72D: ;
    edx = ebp;
    /* nop */

loc_001DA730: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_001DA730; /* jne: not equal / not zero */

loc_001DA73A: ;
    eax = MEM32(esp + 0x18);
    edx = eax;

loc_001DA740: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DA740; /* jne: not equal / not zero */

loc_001DA747: ;
    edi = ebp;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    /* nop */

loc_001DA750: ;
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DA750; /* jne: not equal / not zero */

loc_001DA758: ;
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
    PUSH32(esp, ebp);
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
    PUSH32(esp, 0x001DA76Eu); RECOMP_ABI_CALL(0x00598596u, sub_00598596); /* call 0x00598596 */

loc_001DA76E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DA786; /* jne: not equal / not zero */

loc_001DA775: ;
    eax = MEM32(esp + 0x10);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001DA720; /* jl: less (signed <) */

loc_001DA77E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_001DA786: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_001DA78E: ;
    SET_LO8(eax, LO8(ecx));
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001DA7C0
 * Original: 0x001DA7C0 - 0x001DA7E2 (34 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DA7C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DA7C0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001DA7CEu); RECOMP_ABI_CALL(0x0002221Fu, sub_0002221F); /* call 0x0002221F */

loc_001DA7CE: ;
    ecx = eax;
    PUSH32(esp, 0x001DA7D5u); RECOMP_ABI_CALL(0x00025983u, sub_00025983); /* call 0x00025983 */

loc_001DA7D5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    eax = 0x24;
    if (CMP_EQ(_fa, _fb)) goto loc_001DA7E0; /* je: equal / zero */

loc_001DA7DE: ;
    eax = esi;

loc_001DA7E0: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001DA7F0
 * Original: 0x001DA7F0 - 0x001DA84D (93 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DA7F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001DA7F0: ;
    ecx = MEM32(esp + 0xC);
    _fb = (uint32_t)(0x400) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x400));
    esp = esp - 0x400;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    eax = esp + 4;
    PUSH32(esp, eax);
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ecx);
    MEM32(0x8F4CA8) = esi;
    MEM32(0x8F4CAC) = esi;
    PUSH32(esp, 0x001DA814u); RECOMP_ABI_CALL(0x00015BCDu, sub_00015BCD); /* call 0x00015BCD */

loc_001DA814: ;
    SET_LO8(edx, MEM8(esp + 0x41C));
    _cf = (int)((LO8(edx)) != 0);
    SET_LO8(edx, (uint32_t)(-(int32_t)LO8(edx)));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    PUSH32(esp, 0x64);
    eax = esp + 0x10;
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    edx = edx & 0xFFFFFFFBu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(6)) >> 32) & 1);
    edx = edx + 6;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001DA832u); RECOMP_ABI_CALL(0x00598C36u, sub_00598C36); /* call 0x00598C36 */

loc_001DA832: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x8F4CA8) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    eax = 0x24;
    if (CMP_EQ(_fa, _fb)) goto loc_001DA845; /* je: equal / zero */

loc_001DA843: ;
    eax = esi;

loc_001DA845: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x400) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x400)) >> 32) & 1);
    esp = esp + 0x400;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001DA870
 * Original: 0x001DA870 - 0x001DA8B2 (66 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DA870(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DA870: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x8F4CAC);
    edx = MEM32(0x8F4CA8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, 0x64);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x001DA893u); RECOMP_ABI_CALL(0x00598C5Du, sub_00598C5D); /* call 0x00598C5D */

loc_001DA893: ;
    ecx = MEM32(esp + 0x2C);
    MEM32(ecx) = eax;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(0x8F4CAC) = MEM32(0x8F4CAC) + eax;
    _fa = (uint32_t)(MEM32(0x8F4CAC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ecx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    eax = 0x24;
    if (CMP_NE(_fa, _fb)) goto loc_001DA8AF; /* jne: not equal / not zero */

loc_001DA8AD: ;
    eax = edi;

loc_001DA8AF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001DA8D0
 * Original: 0x001DA8D0 - 0x001DA912 (66 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DA8D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DA8D0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x8F4CAC);
    edx = MEM32(0x8F4CA8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, 0x64);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x001DA8F3u); RECOMP_ABI_CALL(0x00598C91u, sub_00598C91); /* call 0x00598C91 */

loc_001DA8F3: ;
    ecx = MEM32(esp + 0x2C);
    MEM32(ecx) = eax;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(0x8F4CAC) = MEM32(0x8F4CAC) + eax;
    _fa = (uint32_t)(MEM32(0x8F4CAC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ecx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    eax = 0x24;
    if (CMP_NE(_fa, _fb)) goto loc_001DA90F; /* jne: not equal / not zero */

loc_001DA90D: ;
    eax = edi;

loc_001DA90F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001DA930
 * Original: 0x001DA930 - 0x001DA93C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001DA930(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DA930: ;
    eax = MEM32(esp + 8);
    MEM32(0x8F4CAC) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_001DA940
 * Original: 0x001DA940 - 0x001DA960 (32 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DA940(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DA940: ;
    eax = MEM32(0x8F4CA8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x64);
    PUSH32(esp, eax);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x001DA950u); RECOMP_ABI_CALL(0x00598CBFu, sub_00598CBF); /* call 0x00598CBF */

loc_001DA950: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    eax = 0x24;
    if (CMP_EQ(_fa, _fb)) goto loc_001DA95E; /* je: equal / zero */

loc_001DA95C: ;
    eax = esi;

loc_001DA95E: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001DA970
 * Original: 0x001DA970 - 0x001DA98F (31 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DA970(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DA970: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x64);
    PUSH32(esp, eax);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x001DA97Fu); RECOMP_ABI_CALL(0x00598D34u, sub_00598D34); /* call 0x00598D34 */

loc_001DA97F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    eax = 0x24;
    if (CMP_EQ(_fa, _fb)) goto loc_001DA98D; /* je: equal / zero */

loc_001DA98B: ;
    eax = esi;

loc_001DA98D: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001DA9A0
 * Original: 0x001DA9A0 - 0x001DA9A3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001DA9A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DA9A0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_001DA9B0
 * Original: 0x001DA9B0 - 0x001DAA3E (142 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DA9B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DA9B0: ;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x64);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x400);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001DA9CBu); RECOMP_ABI_CALL(0x0002221Fu, sub_0002221F); /* call 0x0002221F */

loc_001DA9CB: ;
    ecx = eax;
    PUSH32(esp, 0x001DA9D2u); RECOMP_ABI_CALL(0x0002DBE2u, sub_0002DBE2); /* call 0x0002DBE2 */

loc_001DA9D2: ;
    ecx = esp + 4;
    esi = eax;
    PUSH32(esp, 0x001DA9DDu); RECOMP_ABI_CALL(0x0059DE73u, sub_0059DE73); /* call 0x0059DE73 */

loc_001DA9DD: ;
    PUSH32(esp, esi);
    ecx = esp + 8;
    PUSH32(esp, 0x001DA9E7u); RECOMP_ABI_CALL(0x0059E1E4u, sub_0059E1E4); /* call 0x0059E1E4 */

loc_001DA9E7: ;
    ecx = MEM32(0x8FC1D0);
    ecx = MEM32(ecx + 0xE8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    PUSH32(esp, 0x7F19B0);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001DAA03u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001DAA00u); } /* indirect call */
    }

loc_001DAA03: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = esp + 0xC;
    MEM32(0x8F4CB0) = eax;
    PUSH32(esp, 0x001DAA13u); RECOMP_ABI_CALL(0x0059DF4Fu, sub_0059DF4F); /* call 0x0059DF4F */

loc_001DAA13: ;
    eax = MEM32(0x8FC1D0);
    ecx = MEM32(eax + 0xE8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x001DAA24u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001DAA21u); } /* indirect call */
    }

loc_001DAA24: ;
    ecx = esp + 4;
    MEM32(0x8F4CAC) = 0;
    PUSH32(esp, 0x001DAA37u); RECOMP_ABI_CALL(0x0059DEB2u, sub_0059DEB2); /* call 0x0059DEB2 */

loc_001DAA37: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001DAA70
 * Original: 0x001DAA70 - 0x001DAA86 (22 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001DAA70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DAA70: ;
    eax = MEM32(esp + 0xC);
    MEM32(0x8F4CB0) = eax;
    MEM32(0x8F4CAC) = 0;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_001DAA90
 * Original: 0x001DAA90 - 0x001DAAE2 (82 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DAA90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DAA90: ;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    MEM32(ebx) = edx;
    esi = MEM32(0x8F4CB0);
    PUSH32(esp, edi);
    edi = MEM32(0x8F4CAC);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = MEM32(esp + 0x18);
    ecx = edx;
    ebp = ecx;
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
    ecx = ebp;
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
    ecx = MEM32(ebx);
    esi = MEM32(0x8F4CAC);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(0x8F4CAC) = esi;
    ecx = MEM32(ebx);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_001DAAE1; /* je: equal / zero */

loc_001DAADC: ;
    eax = 0x24;

loc_001DAAE1: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001DAB00
 * Original: 0x001DAB00 - 0x001DAB42 (66 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DAB00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DAB00: ;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    MEM32(ebx) = edx;
    ebp = MEM32(0x8F4CAC);
    edi = MEM32(0x8F4CB0);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ebp;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edx;
    ebp = ecx;
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
    ecx = ebp;
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
    ecx = MEM32(ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_001DAB41; /* je: equal / zero */

loc_001DAB3C: ;
    eax = 0x24;

loc_001DAB41: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001DAB60
 * Original: 0x001DAB60 - 0x001DAB6C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001DAB60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DAB60: ;
    eax = MEM32(esp + 8);
    MEM32(0x8F4CAC) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_001DAB70
 * Original: 0x001DAB70 - 0x001DAB73 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001DAB70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DAB70: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_001DAB80
 * Original: 0x001DAB80 - 0x001DABAF (47 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DAB80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DAB80: ;
    eax = MEM32(0x8F4CB0);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DABA8; /* je: equal / zero */

loc_001DAB8C: ;
    ecx = MEM32(0x8FC1D0);
    ecx = MEM32(ecx + 0xE8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x001DAB9Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001DAB9Bu); } /* indirect call */
    }

loc_001DAB9E: ;
    MEM32(0x8F4CB0) = esi;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001DABA8: ;
    eax = 0x24;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001DABC0
 * Original: 0x001DABC0 - 0x001DABC3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DABC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DABC0: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_001DABD0
 * Original: 0x001DABD0 - 0x001DABD3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DABD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DABD0: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_001DABE0
 * Original: 0x001DABE0 - 0x001DABFB (27 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DABE0(void)
{

loc_001DABE0: ;
    edx = MEM32(esp + 4);
    ecx = MEM32(0x8F5B04);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x100);
    PUSH32(esp, edx);
    PUSH32(esp, 0x7F1500);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001DABFAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001DABF7u); } /* indirect call */
    }

loc_001DABFA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001DAC10
 * Original: 0x001DAC10 - 0x001DAC25 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DAC10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DAC10: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DAC24; /* je: equal / zero */

loc_001DAC18: ;
    ecx = MEM32(0x8F5B04);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x001DAC24u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001DAC21u); } /* indirect call */
    }

loc_001DAC24: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001DAC30
 * Original: 0x001DAC30 - 0x001DAC3E (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DAC30(void)
{

loc_001DAC30: ;
    ecx = MEM32(0x8F5B04);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x001DAC3Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001DAC3Au); } /* indirect call */
    }

loc_001DAC3D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001DAC50
 * Original: 0x001DAC50 - 0x001DAC61 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DAC50(void)
{

loc_001DAC50: ;
    ecx = MEM32(0x8F5B04);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x001DAC60u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001DAC5Du); } /* indirect call */
    }

loc_001DAC60: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001DAC70
 * Original: 0x001DAC70 - 0x001DAC76 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DAC70(void)
{

loc_001DAC70: ;
    eax = MEM32(0x8F5AE4);
    esp += 4; return; /* ret */

}

/**
 * sub_001DAC80
 * Original: 0x001DAC80 - 0x001DACAE (46 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DAC80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DAC80: ;
    ecx = MEM32(0x8F5AE0);
    SET_LO8(eax, MEM8(0x8F5ADD));
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM32(0x8F5AE0) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_001DACAD; /* je: equal / zero */

loc_001DAC96: ;
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DACAD; /* jne: not equal / not zero */

loc_001DAC9C: ;
    MEM8(0x8F5ADD) = 0;
    PUSH32(esp, 0x001DACA8u); RECOMP_ABI_CALL(0x0002EDB7u, sub_0002EDB7); /* call 0x0002EDB7 */

loc_001DACA8: ;
    g_seh_ebp = ebp; sub_000316A2(); return; /* tail jmp 0x000316A2 */

loc_001DACAD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001DACC0
 * Original: 0x001DACC0 - 0x001DACC3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DACC0(void)
{

loc_001DACC0: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_001DACD0
 * Original: 0x001DACD0 - 0x001DACD1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DACD0(void)
{

loc_001DACD0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001DACE0
 * Original: 0x001DACE0 - 0x001DACFB (27 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DACE0(void)
{

loc_001DACE0: ;
    edx = MEM32(esp + 0xC);
    ecx = MEM32(0x902558);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001DACFAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001DACF7u); } /* indirect call */
    }

loc_001DACFA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001DAD10
 * Original: 0x001DAD10 - 0x001DAD16 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DAD10(void)
{

loc_001DAD10: ;
    eax = MEM32(0x8F5B00);
    esp += 4; return; /* ret */

}

/**
 * sub_001DAD20
 * Original: 0x001DAD20 - 0x001DADFC (220 bytes, 69 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DAD20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DAD20: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x8F5AF0);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    PUSH32(esp, ebx);
    ebx = ecx;
    MEM32(0x8F5AF0) = eax;
    if (CMP_G(_fas, _fbs)) goto loc_001DADF9; /* jg: greater (signed >) */

loc_001DAD38: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x001DAD46u); RECOMP_ABI_CALL(0x000333D5u, sub_000333D5); /* call 0x000333D5 */

loc_001DAD46: ;
    PUSH32(esp, 0x8B4560);
    PUSH32(esp, 0);
    PUSH32(esp, 0x7F19C0);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x001DAD5Cu); RECOMP_ABI_CALL(0x0002390Du, sub_0002390D); /* call 0x0002390D */

loc_001DAD5C: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 0x8B45B0;

loc_001DAD64: ;
    ecx = MEM32(esi);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0xFF);
    MEM32(esp + 0x1C) = 0;
    PUSH32(esp, 0x001DAD80u); RECOMP_ABI_CALL(0x00029394u, sub_00029394); /* call 0x00029394 */

loc_001DAD80: ;
    edx = MEM32(0x8FC1D0);
    ecx = MEM32(edx + 0xE8);
    edx = MEM32(esp + 0x1C);
    eax = MEM32(ecx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x100);
    PUSH32(esp, edx);
    PUSH32(esp, 0x7F19B0);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001DADA3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001DADA0u); } /* indirect call */
    }

loc_001DADA3: ;
    ecx = MEM32(esi);
    edi = eax;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x001DADB8u); RECOMP_ABI_CALL(0x00029394u, sub_00029394); /* call 0x00029394 */

loc_001DADB8: ;
    edx = MEM32(esi);
    eax = MEM32(ebx);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001DADC6u); RECOMP_ABI_CALL(0x00028EC6u, sub_00028EC6); /* call 0x00028EC6 */

loc_001DADC6: ;
    ecx = MEM32(0x8FC1D0);
    ecx = MEM32(ecx + 0xE8);
    edx = MEM32(ecx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x001DADDBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001DADD8u); } /* indirect call */
    }

loc_001DADDB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8B45B8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x8B45B8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001DAD64; /* jl: less (signed <) */

loc_001DADEA: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x001DADF4u); RECOMP_ABI_CALL(0x00012A5Eu, sub_00012A5E); /* call 0x00012A5E */

loc_001DADF4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);

loc_001DADF9: ;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001DAE40
 * Original: 0x001DAE40 - 0x001DAE72 (50 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DAE40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DAE40: ;
    eax = MEM32(0x8F5AF0);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(0x8F5AF0) = eax;
    if ((_fa != 0)) goto loc_001DAE70; /* jne: not equal / not zero */

loc_001DAE50: ;
    PUSH32(esp, esi);
    esi = 0x8B45B0;

loc_001DAE56: ;
    eax = MEM32(esi);
    ecx = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001DAE61u); RECOMP_ABI_CALL(0x0002B08Bu, sub_0002B08B); /* call 0x0002B08B */

loc_001DAE61: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8B45B8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x8B45B8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001DAE56; /* jl: less (signed <) */

loc_001DAE6F: ;
    POP32(esp, esi);

loc_001DAE70: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_001DAE80
 * Original: 0x001DAE80 - 0x001DAF48 (200 bytes, 59 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DAE80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DAE80: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x8F5AF4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(0x8F5AF4) = eax;
    if (CMP_G(_fas, _fbs)) goto loc_001DAF45; /* jg: greater (signed >) */

loc_001DAE98: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x001DAEA5u); RECOMP_ABI_CALL(0x000333D5u, sub_000333D5); /* call 0x000333D5 */

loc_001DAEA5: ;
    PUSH32(esp, 0x8B4560);
    PUSH32(esp, 0);
    PUSH32(esp, 0x7F19D8);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x001DAEBBu); RECOMP_ABI_CALL(0x0002390Du, sub_0002390D); /* call 0x0002390D */

loc_001DAEBB: ;
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x41574153);
    PUSH32(esp, 0xFF);
    MEM32(esp + 0x30) = 0;
    PUSH32(esp, 0x001DAED9u); RECOMP_ABI_CALL(0x00029394u, sub_00029394); /* call 0x00029394 */

loc_001DAED9: ;
    ecx = MEM32(0x8FC1D0);
    eax = MEM32(esp + 0x30);
    ecx = MEM32(ecx + 0xE8);
    edx = MEM32(ecx);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    PUSH32(esp, 0x7F19B0);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001DAEFCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001DAEF9u); } /* indirect call */
    }

loc_001DAEFC: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    esi = eax;
    PUSH32(esp, esi);
    PUSH32(esp, 0x41574153);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x001DAF13u); RECOMP_ABI_CALL(0x00029394u, sub_00029394); /* call 0x00029394 */

loc_001DAF13: ;
    edx = MEM32(edi);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x41574153);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001DAF23u); RECOMP_ABI_CALL(0x00028EC6u, sub_00028EC6); /* call 0x00028EC6 */

loc_001DAF23: ;
    eax = MEM32(0x8FC1D0);
    ecx = MEM32(eax + 0xE8);
    edx = MEM32(ecx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x001DAF37u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001DAF34u); } /* indirect call */
    }

loc_001DAF37: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x001DAF41u); RECOMP_ABI_CALL(0x00012A5Eu, sub_00012A5E); /* call 0x00012A5E */

loc_001DAF41: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);

loc_001DAF45: ;
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001DAF80
 * Original: 0x001DAF80 - 0x001DAF99 (25 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DAF80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DAF80: ;
    MEM32(0x8F5AF4) = MEM32(0x8F5AF4) - 1;
    _fa = (uint32_t)(MEM32(0x8F5AF4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001DAF98; /* jne: not equal / not zero */

loc_001DAF88: ;
    eax = MEM32(ecx);
    PUSH32(esp, 0x41574153);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001DAF95u); RECOMP_ABI_CALL(0x0002B08Bu, sub_0002B08B); /* call 0x0002B08B */

loc_001DAF95: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001DAF98: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001DAFA0
 * Original: 0x001DAFA0 - 0x001DB063 (195 bytes, 78 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DAFA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DAFA0: ;
    PUSH32(esp, ecx);
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
    edi = edi;

loc_001DAFB0: ;
    ecx = MEM32(esi * 4 + 0x8B45B8);
    edx = MEM32(edi);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    MEM32(esp + 0x20) = ebp;
    PUSH32(esp, 0x001DAFCAu); RECOMP_ABI_CALL(0x00029394u, sub_00029394); /* call 0x00029394 */

loc_001DAFCA: ;
    ecx = MEM32(0x8F5B04);
    edx = MEM32(esp + 0x20);
    eax = MEM32(ecx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x001DAFDDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001DAFDAu); } /* indirect call */
    }

loc_001DAFDD: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    MEM32(ebx) = eax;
    edx = MEM32(esi * 4 + 0x8B45B8);
    PUSH32(esp, eax);
    eax = MEM32(edi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001DAFF5u); RECOMP_ABI_CALL(0x00029394u, sub_00029394); /* call 0x00029394 */

loc_001DAFF5: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001DAFB0; /* jl: less (signed <) */

loc_001DB001: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 6 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001DB05D; /* jge: greater or equal (signed >=) */

loc_001DB006: ;
    ebx = esi * 4 + 0x8B45D0;
    esi = edi + esi * 4 + 8;

loc_001DB011: ;
    edx = MEM32(ebx);
    eax = MEM32(edi);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(esp + 0x20) = ebp;
    PUSH32(esp, 0x001DB026u); RECOMP_ABI_CALL(0x00029394u, sub_00029394); /* call 0x00029394 */

loc_001DB026: ;
    ecx = MEM32(0x8F5B04);
    eax = MEM32(esp + 0x20);
    edx = MEM32(ecx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x001DB039u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001DB036u); } /* indirect call */
    }

loc_001DB039: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    MEM32(esi) = eax;
    edx = MEM32(ebx);
    PUSH32(esp, eax);
    eax = MEM32(edi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001DB04Cu); RECOMP_ABI_CALL(0x00029394u, sub_00029394); /* call 0x00029394 */

loc_001DB04C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8B45E8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x8B45E8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001DB011; /* jl: less (signed <) */

loc_001DB05D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001DB0A0
 * Original: 0x001DB0A0 - 0x001DB12E (142 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DB0A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DB0A0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = ebx + 8;
    /* nop */

loc_001DB0B0: ;
    eax = MEM32(esi);
    ecx = MEM32(edi * 4 + 0x8B45B8);
    edx = MEM32(ebx);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001DB0C5u); RECOMP_ABI_CALL(0x00028EC6u, sub_00028EC6); /* call 0x00028EC6 */

loc_001DB0C5: ;
    ecx = MEM32(0x8F5B04);
    edx = MEM32(esi);
    eax = MEM32(ecx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x001DB0D6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001DB0D3u); } /* indirect call */
    }

loc_001DB0D6: ;
    MEM32(esi) = 0;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001DB0B0; /* jl: less (signed <) */

loc_001DB0E5: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 6 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001DB12A; /* jge: greater or equal (signed >=) */

loc_001DB0EA: ;
    esi = ebx + edi * 4 + 8;
    edi = edi * 4 + 0x8B45D0;

loc_001DB0F5: ;
    eax = MEM32(esi);
    ecx = MEM32(edi);
    edx = MEM32(ebx);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001DB105u); RECOMP_ABI_CALL(0x00028EC6u, sub_00028EC6); /* call 0x00028EC6 */

loc_001DB105: ;
    ecx = MEM32(0x8F5B04);
    edx = MEM32(esi);
    eax = MEM32(ecx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x001DB116u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001DB113u); } /* indirect call */
    }

loc_001DB116: ;
    MEM32(esi) = 0;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8B45E8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x8B45E8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001DB0F5; /* jl: less (signed <) */

loc_001DB12A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001DB160
 * Original: 0x001DB160 - 0x001DB163 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DB160(void)
{

loc_001DB160: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001DB170
 * Original: 0x001DB170 - 0x001DB17C (12 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DB170(void)
{

loc_001DB170: ;
    eax = MEM32(esp + 4);
    MEM32(0x8F5AF8) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001DB180
 * Original: 0x001DB180 - 0x001DB18D (13 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DB180(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DB180: ;
    MEM32(0x8F5AF8) = 0;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_001DB190
 * Original: 0x001DB190 - 0x001DB25F (207 bytes, 71 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DB190(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DB190: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x38);
    PUSH32(esp, esi);
    edx = eax;
    esi = eax;
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((0x10) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edx = edx & 0xFF0000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx | esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = eax;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x10) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    esi = esi & 0xFF00;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi | eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((8) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        esi = _sv << _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = edx | esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 8) = edx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x28) = eax;
    eax = MEM32(esp + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(esp + 0xC) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_001DB23B; /* je: equal / zero */

loc_001DB1D9: ;
    PUSH32(esp, edi);
    esi = eax;
    edi = eax;
    edi = (uint32_t)(((int32_t)(int32_t)(edi)) >> ((0x10) & 31u));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esi = esi & 0xFF0000;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi | edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi = eax;
    edi = edi & 0xFF00;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x10) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edi = edi | eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(esp + 0x48);
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((8) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    { uint32_t _sv=(uint32_t)(edi), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        edi = _sv << _sc;
        _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    esi = esi | edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(esp + 0x1C) = esi;
    MEM32(esp + 0x20) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_001DB23A; /* je: equal / zero */

loc_001DB20E: ;
    esi = eax;
    edi = eax;
    edi = (uint32_t)(((int32_t)(int32_t)(edi)) >> ((0x10) & 31u));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esi = esi & 0xFF0000;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi | edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi = eax;
    edi = edi & 0xFF00;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x10) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edi = edi | eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((8) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    { uint32_t _sv=(uint32_t)(edi), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        edi = _sv << _sc;
        _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    esi = esi | edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x1C) = esi;
    MEM32(esp + 0x20) = edx;

loc_001DB23A: ;
    POP32(esp, edi);

loc_001DB23B: ;
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x40);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    eax = MEM32(ecx);
    PUSH32(esp, 0x31303049);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001DB255u); RECOMP_ABI_CALL(0x00029254u, sub_00029254); /* call 0x00029254 */

loc_001DB255: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001DB2A0
 * Original: 0x001DB2A0 - 0x001DB2B8 (24 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DB2A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DB2A0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(ecx);
    PUSH32(esp, 0x31303049);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001DB2B2u); RECOMP_ABI_CALL(0x00037967u, sub_00037967); /* call 0x00037967 */

loc_001DB2B2: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001DB2C0
 * Original: 0x001DB2C0 - 0x001DB2DA (26 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DB2C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DB2C0: ;
    PUSH32(esp, ecx);
    ecx = MEM32(0x8B45F4);
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001DB2D1u); RECOMP_ABI_CALL(0x0001F114u, sub_0001F114); /* call 0x0001F114 */

loc_001DB2D1: ;
    eax = MEM32(0x8B45F4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001DB2E0
 * Original: 0x001DB2E0 - 0x001DB38F (175 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DB2E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DB2E0: ;
    SET_LO8(eax, MEM8(0x8F5B0C));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DB38B; /* je: equal / zero */

loc_001DB2F0: ;
    edx = MEM32(0x8F5B08);
    PUSH32(esp, edi);
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = 0x8F84A8;
    PUSH32(esp, 0x001DB30Cu); RECOMP_ABI_CALL(0x0059E0FEu, sub_0059E0FE); /* call 0x0059E0FE */

loc_001DB30C: ;
    edx = MEM32(esp + 4);
    ecx = MEM32(0x8F5B04);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x100);
    PUSH32(esp, edx);
    PUSH32(esp, 0x7F19E8);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001DB326u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001DB323u); } /* indirect call */
    }

loc_001DB326: ;
    edi = eax;
    eax = MEM32(0x8F5B08);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = 0x8F84A8;
    PUSH32(esp, 0x001DB339u); RECOMP_ABI_CALL(0x0059DF4Fu, sub_0059DF4F); /* call 0x0059DF4F */

loc_001DB339: ;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 4), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DB377; /* jne: not equal / not zero */

loc_001DB33F: ;
    PUSH32(esp, esi);
    esi = 0x8F5440;

loc_001DB345: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(esi);
    eax = MEM32(esi + 4);
    PUSH32(esp, 1);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001DB359u); RECOMP_ABI_CALL(0x00028EC6u, sub_00028EC6); /* call 0x00028EC6 */

loc_001DB359: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8F5830) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x8F5830 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001DB345; /* jl: less (signed <) */

loc_001DB367: ;
    ecx = MEM32(0x8F5B08);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001DB373u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_001DB373: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);

loc_001DB377: ;
    ecx = MEM32(0x8F5B04);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x001DB383u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001DB380u); } /* indirect call */
    }

loc_001DB383: ;
    MEM8(0x8F5B0C) = 0;
    POP32(esp, edi);

loc_001DB38B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001DB3C0
 * Original: 0x001DB3C0 - 0x001DB3C3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DB3C0(void)
{

loc_001DB3C0: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_001DB3D0
 * Original: 0x001DB3D0 - 0x001DB3D1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DB3D0(void)
{

loc_001DB3D0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001DB3E0
 * Original: 0x001DB3E0 - 0x001DB3EC (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DB3E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DB3E0: ;
    eax = MEM32(ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001DB3E8u); RECOMP_ABI_CALL(0x00026D92u, sub_00026D92); /* call 0x00026D92 */

loc_001DB3E8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001DB3F0
 * Original: 0x001DB3F0 - 0x001DB426 (54 bytes, 21 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DB3F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DB3F0: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DB410; /* jne: not equal / not zero */

loc_001DB3F9: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001DB40Au); RECOMP_ABI_CALL(0x000351CBu, sub_000351CB); /* call 0x000351CB */

loc_001DB40A: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_001DB410: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    eax = MEM32(ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001DB420u); RECOMP_ABI_CALL(0x000351CBu, sub_000351CB); /* call 0x000351CB */

loc_001DB420: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001DB440
 * Original: 0x001DB440 - 0x001DB47C (60 bytes, 18 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DB440(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DB440: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    MEM32(esp + 8) = eax;
    eax = MEM32(esp + 0x2C);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = MEM32(ecx + 4);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(esp + 0x20) = 0;
    MEM32(esp + 0x24) = 0xFFFFFFFFu;
    PUSH32(esp, 0x001DB476u); RECOMP_ABI_CALL(0x00037FA7u, sub_00037FA7); /* call 0x00037FA7 */

loc_001DB476: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001DB490
 * Original: 0x001DB490 - 0x001DB4B1 (33 bytes, 13 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DB490(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DB490: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(ecx + 4);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001DB4ABu); RECOMP_ABI_CALL(0x00037FA7u, sub_00037FA7); /* call 0x00037FA7 */

loc_001DB4AB: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001DB4C0
 * Original: 0x001DB4C0 - 0x001DB4CC (12 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DB4C0(void)
{

loc_001DB4C0: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax + 4) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001DB4D0
 * Original: 0x001DB4D0 - 0x001DB4D1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DB4D0(void)
{

loc_001DB4D0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001DB4E0
 * Original: 0x001DB4E0 - 0x001DB503 (35 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DB4E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DB4E0: ;
    edx = MEM32(esp + 4);
    ecx = ZX8(MEM8(edx));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001DB502; /* jle: less or equal (signed <=) */

loc_001DB4ED: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);

loc_001DB4F3: ;
    edi = ZX8(MEM8(eax + edx));
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + eax * 4) = edi;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001DB4F3; /* jl: less (signed <) */

loc_001DB500: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_001DB502: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001DB510
 * Original: 0x001DB510 - 0x001DB540 (48 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DB510(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DB510: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = MEM32(esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001DB536; /* jle: less or equal (signed <=) */

loc_001DB51D: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);

loc_001DB522: ;
    SET_LO8(edx, MEM8(esi + eax * 4));
    SET_LO8(edx, LO8(edx) + 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM8(eax + edi) = LO8(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001DB522; /* jl: less (signed <) */

loc_001DB52F: ;
    MEM8(ecx + edi) = 0;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001DB536: ;
    eax = MEM32(esp + 0xC);
    MEM8(ecx + eax) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001DB550
 * Original: 0x001DB550 - 0x001DB570 (32 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DB550(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DB550: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    goto loc_001DB560;

    /* nop */

loc_001DB560: ;
    esi = (uint32_t)(int32_t)SMEM8(eax + edx);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + eax * 4) = esi;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001DB560; /* jl: less (signed <) */

loc_001DB56E: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001DB580
 * Original: 0x001DB580 - 0x001DB5A4 (36 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DB580(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DB580: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001DB590;

    /* nop */

loc_001DB590: ;
    SET_LO8(edx, MEM8(esi + eax * 4));
    SET_LO8(edx, LO8(edx) + 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM8(eax + ecx) = LO8(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001DB590; /* jl: less (signed <) */

loc_001DB59E: ;
    MEM8(ecx + 0xF) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001DB5B0
 * Original: 0x001DB5B0 - 0x001DB5D0 (32 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DB5B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DB5B0: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    goto loc_001DB5C0;

    /* nop */

loc_001DB5C0: ;
    esi = (uint32_t)(int32_t)SMEM8(eax + edx);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + eax * 4) = esi;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x26) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x26 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001DB5C0; /* jl: less (signed <) */

loc_001DB5CE: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001DB5E0
 * Original: 0x001DB5E0 - 0x001DB604 (36 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DB5E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DB5E0: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001DB5F0;

    /* nop */

loc_001DB5F0: ;
    SET_LO8(edx, MEM8(esi + eax * 4));
    SET_LO8(edx, LO8(edx) + 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM8(eax + ecx) = LO8(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x26) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x26 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001DB5F0; /* jl: less (signed <) */

loc_001DB5FE: ;
    MEM8(ecx + 0x26) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001DB610
 * Original: 0x001DB610 - 0x001DB619 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DB610(void)
{

loc_001DB610: ;
    eax = ecx;
    MEM32(eax) = 0x7F1A00;
    esp += 4; return; /* ret */

}

/**
 * sub_001DB620
 * Original: 0x001DB620 - 0x001DB627 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DB620(void)
{

loc_001DB620: ;
    MEM32(ecx) = 0x7F1A00;
    esp += 4; return; /* ret */

}

/**
 * sub_001DB630
 * Original: 0x001DB630 - 0x001DB6FF (207 bytes, 71 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DB630(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DB630: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x34);
    PUSH32(esp, esi);
    edx = eax;
    esi = eax;
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((0x10) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edx = edx & 0xFF0000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx | esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = eax;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x10) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    esi = esi & 0xFF00;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi | eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((8) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        esi = _sv << _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = edx | esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 8) = edx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x28) = eax;
    eax = MEM32(esp + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(esp + 0xC) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_001DB6DB; /* je: equal / zero */

loc_001DB679: ;
    PUSH32(esp, edi);
    esi = eax;
    edi = eax;
    edi = (uint32_t)(((int32_t)(int32_t)(edi)) >> ((0x10) & 31u));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esi = esi & 0xFF0000;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi | edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi = eax;
    edi = edi & 0xFF00;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x10) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edi = edi | eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(esp + 0x44);
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((8) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    { uint32_t _sv=(uint32_t)(edi), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        edi = _sv << _sc;
        _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    esi = esi | edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(esp + 0x1C) = esi;
    MEM32(esp + 0x20) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_001DB6DA; /* je: equal / zero */

loc_001DB6AE: ;
    esi = eax;
    edi = eax;
    edi = (uint32_t)(((int32_t)(int32_t)(edi)) >> ((0x10) & 31u));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esi = esi & 0xFF0000;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi | edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi = eax;
    edi = edi & 0xFF00;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x10) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edi = edi | eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((8) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    { uint32_t _sv=(uint32_t)(edi), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        edi = _sv << _sc;
        _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    esi = esi | edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x1C) = esi;
    MEM32(esp + 0x20) = edx;

loc_001DB6DA: ;
    POP32(esp, edi);

loc_001DB6DB: ;
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    edx = MEM32(ecx + 0xC);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    eax = MEM32(ecx + 0x20);
    PUSH32(esp, 0x31303049);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001DB6F5u); RECOMP_ABI_CALL(0x00029254u, sub_00029254); /* call 0x00029254 */

loc_001DB6F5: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001DB740
 * Original: 0x001DB740 - 0x001DB756 (22 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DB740(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DB740: ;
    eax = MEM32(ecx + 0xC);
    ecx = MEM32(ecx + 0x20);
    PUSH32(esp, 0x31303049);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001DB752u); RECOMP_ABI_CALL(0x00037967u, sub_00037967); /* call 0x00037967 */

loc_001DB752: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001DB760
 * Original: 0x001DB760 - 0x001DB764 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DB760(void)
{

loc_001DB760: ;
    eax = MEM32(ecx + 0x20);
    esp += 4; return; /* ret */

}

/**
 * sub_001DB770
 * Original: 0x001DB770 - 0x001DB774 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DB770(void)
{

loc_001DB770: ;
    eax = MEM32(ecx + 0xC);
    esp += 4; return; /* ret */

}

/**
 * sub_001DB780
 * Original: 0x001DB780 - 0x001DB784 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DB780(void)
{

loc_001DB780: ;
    eax = MEM32(ecx + 0x10);
    esp += 4; return; /* ret */

}

/**
 * sub_001DB790
 * Original: 0x001DB790 - 0x001DB794 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DB790(void)
{

loc_001DB790: ;
    eax = MEM32(ecx + 0x14);
    esp += 4; return; /* ret */

}

/**
 * sub_001DB7A0
 * Original: 0x001DB7A0 - 0x001DB7A5 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DB7A0(void)
{

loc_001DB7A0: ;
    SET_LO16(eax, MEM16(ecx + 0x18));
    esp += 4; return; /* ret */

}

/**
 * sub_001DB7B0
 * Original: 0x001DB7B0 - 0x001DB7B5 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DB7B0(void)
{

loc_001DB7B0: ;
    SET_LO16(eax, MEM16(ecx + 0x1A));
    esp += 4; return; /* ret */

}

/**
 * sub_001DB7C0
 * Original: 0x001DB7C0 - 0x001DB7C5 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DB7C0(void)
{

loc_001DB7C0: ;
    MEM8(ecx + 0x24) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_001DB7D0
 * Original: 0x001DB7D0 - 0x001DB804 (52 bytes, 20 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DB7D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DB7D0: ;
    SET_LO16(eax, MEM16(esp + 4));
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xC);
    edx = MEM32(esi + 0x20);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    MEM16(esi + 0x18) = LO16(eax);
    PUSH32(esp, 0x001DB7E9u); RECOMP_ABI_CALL(0x0002A4C4u, sub_0002A4C4); /* call 0x0002A4C4 */

loc_001DB7E9: ;
    ecx = MEM32(esi + 0xC);
    edx = MEM32(esi + 0x20);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(esi + 0x18));
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001DB7FDu); RECOMP_ABI_CALL(0x000196ECu, sub_000196EC); /* call 0x000196EC */

loc_001DB7FD: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001DB820
 * Original: 0x001DB820 - 0x001DB874 (84 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DB820(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DB820: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(esi + 0x20);
    edi = esi + 0x14;
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001DB837u); RECOMP_ABI_CALL(0x00032F4Du, sub_00032F4D); /* call 0x00032F4D */

loc_001DB837: ;
    eax = MEM32(edi);
    ecx = MEM32(0x8F5B04);
    edx = MEM32(ecx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x001DB84Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001DB849u); } /* indirect call */
    }

loc_001DB84C: ;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    MEM32(esi + 0x10) = eax;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001DB85Eu); RECOMP_ABI_CALL(0x00032F4Du, sub_00032F4D); /* call 0x00032F4D */

loc_001DB85E: ;
    edx = MEM32(edi);
    eax = MEM32(esi + 0x10);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    POP32(esp, edi);
    MEM32(edx + eax + 8) = 0xFFFFFFFFu;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001DB890
 * Original: 0x001DB890 - 0x001DB8BE (46 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DB890(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DB890: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xC);
    edx = MEM32(esi + 0x20);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    MEM8(esi + 8) = 0;
    PUSH32(esp, 0x001DB8ACu); RECOMP_ABI_CALL(0x00015001u, sub_00015001); /* call 0x00015001 */

loc_001DB8AC: ;
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DB8BB; /* je: equal / zero */

loc_001DB8B7: ;
    MEM8(esi + 8) = 1;

loc_001DB8BB: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001DB8D0
 * Original: 0x001DB8D0 - 0x001DB8FC (44 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DB8D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DB8D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xC);
    edx = MEM32(esi + 0x20);
    eax = esi + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001DB8E6u); RECOMP_ABI_CALL(0x0001346Du, sub_0001346D); /* call 0x0001346D */

loc_001DB8E6: ;
    ecx = MEM32(esi + 0xC);
    edx = MEM32(esi + 0x20);
    eax = esi + 0x1A;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001DB8F7u); RECOMP_ABI_CALL(0x0001F380u, sub_0001F380); /* call 0x0001F380 */

loc_001DB8F7: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001DB910
 * Original: 0x001DB910 - 0x001DB93C (44 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DB910(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DB910: ;
    eax = MEM32(ecx + 0x1C);
    PUSH32(esp, esi);
    edx = eax;
    esi = eax;
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((0x10) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edx = edx & 0xFF0000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx | esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = eax;
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(0x10) & 31u;
      if (_sc) {
        esi = _sv << _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 0xFF00;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi | eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        esi = _sv << _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((8) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edx = edx | esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx + 0xC) = edx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001DB950
 * Original: 0x001DB950 - 0x001DB961 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DB950(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DB950: ;
    eax = MEM32(ecx + 0xC);
    ecx = MEM32(ecx + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001DB95Du); RECOMP_ABI_CALL(0x00034EBAu, sub_00034EBA); /* call 0x00034EBA */

loc_001DB95D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001DB970
 * Original: 0x001DB970 - 0x001DB99F (47 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DB970(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DB970: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001DB980u); RECOMP_ABI_CALL(0x00034EBAu, sub_00034EBA); /* call 0x00034EBA */

loc_001DB980: ;
    eax = MEM32(esi + 0x10);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DB99D; /* je: equal / zero */

loc_001DB98A: ;
    ecx = MEM32(0x8F5B04);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x001DB996u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001DB993u); } /* indirect call */
    }

loc_001DB996: ;
    MEM32(esi + 0x10) = 0;

loc_001DB99D: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001DB9B0
 * Original: 0x001DB9B0 - 0x001DB9B1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DB9B0(void)
{

loc_001DB9B0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001DB9C0
 * Original: 0x001DB9C0 - 0x001DB9C1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DB9C0(void)
{

loc_001DB9C0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001DB9D0
 * Original: 0x001DB9D0 - 0x001DB9D1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DB9D0(void)
{

loc_001DB9D0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001DB9E0
 * Original: 0x001DB9E0 - 0x001DBAA2 (194 bytes, 62 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DB9E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DB9E0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x27) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x27 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001DBA9C; /* ja: above (unsigned >) */

loc_001DB9ED: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x1DBAA4); /* switch: 40 entries, 29 targets */
    if (_jt == 0x001DB9F4u) goto loc_001DB9F4;
    if (_jt == 0x001DB9FAu) goto loc_001DB9FA;
    if (_jt == 0x001DBA00u) goto loc_001DBA00;
    if (_jt == 0x001DBA06u) goto loc_001DBA06;
    if (_jt == 0x001DBA0Cu) goto loc_001DBA0C;
    if (_jt == 0x001DBA12u) goto loc_001DBA12;
    if (_jt == 0x001DBA18u) goto loc_001DBA18;
    if (_jt == 0x001DBA1Eu) goto loc_001DBA1E;
    if (_jt == 0x001DBA24u) goto loc_001DBA24;
    if (_jt == 0x001DBA2Au) goto loc_001DBA2A;
    if (_jt == 0x001DBA30u) goto loc_001DBA30;
    if (_jt == 0x001DBA36u) goto loc_001DBA36;
    if (_jt == 0x001DBA3Cu) goto loc_001DBA3C;
    if (_jt == 0x001DBA42u) goto loc_001DBA42;
    if (_jt == 0x001DBA48u) goto loc_001DBA48;
    if (_jt == 0x001DBA4Eu) goto loc_001DBA4E;
    if (_jt == 0x001DBA54u) goto loc_001DBA54;
    if (_jt == 0x001DBA5Au) goto loc_001DBA5A;
    if (_jt == 0x001DBA60u) goto loc_001DBA60;
    if (_jt == 0x001DBA66u) goto loc_001DBA66;
    if (_jt == 0x001DBA6Cu) goto loc_001DBA6C;
    if (_jt == 0x001DBA72u) goto loc_001DBA72;
    if (_jt == 0x001DBA78u) goto loc_001DBA78;
    if (_jt == 0x001DBA7Eu) goto loc_001DBA7E;
    if (_jt == 0x001DBA84u) goto loc_001DBA84;
    if (_jt == 0x001DBA8Au) goto loc_001DBA8A;
    if (_jt == 0x001DBA90u) goto loc_001DBA90;
    if (_jt == 0x001DBA96u) goto loc_001DBA96;
    if (_jt == 0x001DBA9Cu) goto loc_001DBA9C;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001DB9F4: ;
    eax = 0x7F1D48;
    esp += 4; return; /* ret */

loc_001DB9FA: ;
    eax = 0x7F1D34;
    esp += 4; return; /* ret */

loc_001DBA00: ;
    eax = 0x7F1D28;
    esp += 4; return; /* ret */

loc_001DBA06: ;
    eax = 0x7F1D10;
    esp += 4; return; /* ret */

loc_001DBA0C: ;
    eax = 0x7F1D00;
    esp += 4; return; /* ret */

loc_001DBA12: ;
    eax = 0x7F1CE4;
    esp += 4; return; /* ret */

loc_001DBA18: ;
    eax = 0x7F1CCC;
    esp += 4; return; /* ret */

loc_001DBA1E: ;
    eax = 0x7F1CB4;
    esp += 4; return; /* ret */

loc_001DBA24: ;
    eax = 0x7F1C98;
    esp += 4; return; /* ret */

loc_001DBA2A: ;
    eax = 0x7F1C7C;
    esp += 4; return; /* ret */

loc_001DBA30: ;
    eax = 0x7F1C60;
    esp += 4; return; /* ret */

loc_001DBA36: ;
    eax = 0x7F1C44;
    esp += 4; return; /* ret */

loc_001DBA3C: ;
    eax = 0x7F1C24;
    esp += 4; return; /* ret */

loc_001DBA42: ;
    eax = 0x7F1C14;
    esp += 4; return; /* ret */

loc_001DBA48: ;
    eax = 0x7F1BF8;
    esp += 4; return; /* ret */

loc_001DBA4E: ;
    eax = 0x7F1BDC;
    esp += 4; return; /* ret */

loc_001DBA54: ;
    eax = 0x7F1BC0;
    esp += 4; return; /* ret */

loc_001DBA5A: ;
    eax = 0x7F1BA4;
    esp += 4; return; /* ret */

loc_001DBA60: ;
    eax = 0x7F1B90;
    esp += 4; return; /* ret */

loc_001DBA66: ;
    eax = 0x7F1B70;
    esp += 4; return; /* ret */

loc_001DBA6C: ;
    eax = 0x7F1B54;
    esp += 4; return; /* ret */

loc_001DBA72: ;
    eax = 0x7F1B20;
    esp += 4; return; /* ret */

loc_001DBA78: ;
    eax = 0x7F1AEC;
    esp += 4; return; /* ret */

loc_001DBA7E: ;
    eax = 0x7F1AA8;
    esp += 4; return; /* ret */

loc_001DBA84: ;
    eax = 0x7F1A80;
    esp += 4; return; /* ret */

loc_001DBA8A: ;
    eax = 0x7F1A68;
    esp += 4; return; /* ret */

loc_001DBA90: ;
    eax = 0x7F1A4C;
    esp += 4; return; /* ret */

loc_001DBA96: ;
    eax = 0x7F1A20;
    esp += 4; return; /* ret */

loc_001DBA9C: ;
    eax = 0x7F1A04;
    esp += 4; return; /* ret */

}

/**
 * sub_001DBAA2
 * Original: 0x001DBAA2 - 0x001DBBA3 (257 bytes, 126 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DBAA2(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001DBAA2: ;
    edi = edi;
    RECOMP_UNIMPL("hlt", 0x001DBAA4u); /* TODO: hlt */
    ecx = 0xB9FA001Du;
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0x1DBA0000) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edx)) + (uint64_t)(LO8(edx))) >> 8) & 1);
    MEM8(edx) = MEM8(edx) + LO8(edx);
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    edx = 0xBA18001Du;
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0x1DBA1E00) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edx + edi * 4)) + (uint64_t)(HI8(eax))) >> 8) & 1);
    MEM8(edx + edi * 4) = MEM8(edx + edi * 4) + HI8(eax);
    _fa = (uint32_t)(MEM8(edx + edi * 4)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0x1DBA2A00) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _fb = (uint32_t)(HI8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(HI8(edx))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + HI8(edx);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    edx = 0xBA36001Du;
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0x1DBA9C00) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edx + edi * 4 + -1169686499)) + (uint64_t)(LO8(ebx))) >> 8) & 1);
    MEM8(edx + edi * 4 + -1169686499) = MEM8(edx + edi * 4 + -1169686499) + LO8(ebx);
    _fa = (uint32_t)(MEM8(edx + edi * 4 + -1169686499)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0x1DBA4E00) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edx + edi * 4 + -1164181475)) + (uint64_t)(LO8(ebx))) >> 8) & 1);
    MEM8(edx + edi * 4 + -1164181475) = MEM8(edx + edi * 4 + -1164181475) + LO8(ebx);
    _fa = (uint32_t)(MEM8(edx + edi * 4 + -1164181475)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0x1DBA9C00) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edx + edi * 4 + -1168900067)) + (uint64_t)(LO8(ebx))) >> 8) & 1);
    MEM8(edx + edi * 4 + -1168900067) = MEM8(edx + edi * 4 + -1168900067) + LO8(ebx);
    _fa = (uint32_t)(MEM8(edx + edi * 4 + -1168900067)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0x1DBA0600) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edx + edi * 4 + -1164181475)) + (uint64_t)(LO8(ebx))) >> 8) & 1);
    MEM8(edx + edi * 4 + -1164181475) = MEM8(edx + edi * 4 + -1164181475) + LO8(ebx);
    _fa = (uint32_t)(MEM8(edx + edi * 4 + -1164181475)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0x1DBA5A00) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _fb = (uint32_t)(HI8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edx + edi * 4)) + (uint64_t)(HI8(ebx))) >> 8) & 1);
    MEM8(edx + edi * 4) = MEM8(edx + edi * 4) + HI8(ebx);
    _fa = (uint32_t)(MEM8(edx + edi * 4)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0x1DBA9C00) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edx + edi * 4 + -1167720419)) + (uint64_t)(LO8(ebx))) >> 8) & 1);
    MEM8(edx + edi * 4 + -1167720419) = MEM8(edx + edi * 4 + -1167720419) + LO8(ebx);
    _fa = (uint32_t)(MEM8(edx + edi * 4 + -1167720419)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0x1DBA7200) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _fb = (uint32_t)(HI8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax + -70)) + (uint64_t)(HI8(ebx))) >> 8) & 1);
    MEM8(eax + -70) = MEM8(eax + -70) + HI8(ebx);
    _fa = (uint32_t)(MEM8(eax + -70)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0x1DBA6C00) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edx + edi * 4 + -1168113635)) + (uint64_t)(LO8(ebx))) >> 8) & 1);
    MEM8(edx + edi * 4 + -1168113635) = MEM8(edx + edi * 4 + -1168113635) + LO8(ebx);
    _fa = (uint32_t)(MEM8(edx + edi * 4 + -1168113635)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0x1DBA8400) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _fb = (uint32_t)(HI8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(esi + -70)) + (uint64_t)(HI8(ebx))) >> 8) & 1);
    MEM8(esi + -70) = MEM8(esi + -70) + HI8(ebx);
    _fa = (uint32_t)(MEM8(esi + -70)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0x1DBA4200) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edx + edi * 4 + -1173618659)) + (uint64_t)(LO8(ebx))) >> 8) & 1);
    MEM8(edx + edi * 4 + -1173618659) = MEM8(edx + edi * 4 + -1173618659) + LO8(ebx);
    _fa = (uint32_t)(MEM8(edx + edi * 4 + -1173618659)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0x1DBA9600) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edx + -1879040582)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(edx + -1879040582) = MEM8(edx + -1879040582) + LO8(ecx);
    _fa = (uint32_t)(MEM8(edx + -1879040582)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    edx = 0xCCCC001Du;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_001DBBB0
 * Original: 0x001DBBB0 - 0x001DBBB1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DBBB0(void)
{

loc_001DBBB0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001DBBC0
 * Original: 0x001DBBC0 - 0x001DBBEE (46 bytes, 14 insns)
 * Category: game_ui
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DBBC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001DBBC0: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, 0x7F1D50);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001DBBDCu); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_001DBBDC: ;
    _cf = 0; /* xor clears CF */
    SET_LO16(edx, 0); /* xor self */
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(esp + 0x10)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), MEM16(esp + 0x10) (16-bit) */
    _cf = (int)(_fa < _fb);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x1C)) >> 32) & 1);
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001DBC00
 * Original: 0x001DBC00 - 0x001DBC0D (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001DBC00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DBC00: ;
    eax = MEM32(esp + 0xC);
    MEM32(eax) = 0;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_001DBC10
 * Original: 0x001DBC10 - 0x001DBC13 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001DBC10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DBC10: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_001DBC20
 * Original: 0x001DBC20 - 0x001DBC44 (36 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DBC20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DBC20: ;
    ecx = MEM32(0x8F5B04);
    edx = MEM32(esp + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x001DBC30u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001DBC2Du); } /* indirect call */
    }

loc_001DBC30: ;
    ecx = MEM32(esp + 0xC);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM32(ecx) = eax;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx & 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_001DBC50
 * Original: 0x001DBC50 - 0x001DBC7E (46 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DBC50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DBC50: ;
    edx = MEM32(esp + 8);
    ecx = MEM32(0x8F5B04);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x100);
    PUSH32(esp, edx);
    PUSH32(esp, 0x7F19E8);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001DBC6Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001DBC67u); } /* indirect call */
    }

loc_001DBC6A: ;
    ecx = MEM32(esp + 0xC);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM32(ecx) = eax;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx & 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_001DBC90
 * Original: 0x001DBC90 - 0x001DBCC4 (52 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DBC90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DBC90: ;
    ecx = MEM32(0x8F5B04);
    edx = MEM32(esp + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x001DBCA0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001DBC9Du); } /* indirect call */
    }

loc_001DBCA0: ;
    ecx = MEM32(0x8F5B04);
    edx = MEM32(esp + 0x10);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x001DBCB0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001DBCADu); } /* indirect call */
    }

loc_001DBCB0: ;
    ecx = MEM32(esp + 0x14);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM32(ecx) = eax;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx & 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_001DBCE0
 * Original: 0x001DBCE0 - 0x001DBCF1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DBCE0(void)
{

loc_001DBCE0: ;
    ecx = MEM32(0x8F5B04);
    edx = MEM32(esp + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x001DBCF0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001DBCEDu); } /* indirect call */
    }

loc_001DBCF0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001DBD00
 * Original: 0x001DBD00 - 0x001DBD24 (36 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DBD00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DBD00: ;
    ecx = MEM32(esp + 4);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp + 0x108;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0xB;
    PUSH32(esp, edx);
    PUSH32(esp, 0x001DBD1Du); RECOMP_ABI_CALL(0x005CC6CDu, sub_005CC6CD); /* call 0x005CC6CD */

loc_001DBD1D: ;
    _fb = (uint32_t)(0x10C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001DBD30
 * Original: 0x001DBD30 - 0x001DBD3A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DBD30(void)
{

loc_001DBD30: ;
    eax = MEM32(esp + 4);
    eax = ecx + eax * 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001DBD40
 * Original: 0x001DBD40 - 0x001DBD43 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DBD40(void)
{

loc_001DBD40: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001DBD50
 * Original: 0x001DBD50 - 0x001DBD54 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DBD50(void)
{

loc_001DBD50: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_001DBD60
 * Original: 0x001DBD60 - 0x001DBD64 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DBD60(void)
{

loc_001DBD60: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_001DBD70
 * Original: 0x001DBD70 - 0x001DBD79 (9 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DBD70(void)
{

loc_001DBD70: ;
    eax = MEM32(esp + 4);
    MEM32(ecx) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001DBD80
 * Original: 0x001DBD80 - 0x001DBD8A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DBD80(void)
{

loc_001DBD80: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 4) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001DBD90
 * Original: 0x001DBD90 - 0x001DBD9B (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DBD90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DBD90: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 4) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_001DBDA0
 * Original: 0x001DBDA0 - 0x001DBDD5 (53 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DBDA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DBDA0: ;
    eax = ecx;
    MEM32(eax) = 0xFFFFFFFFu;
    MEM32(eax + 0xC) = 0xFFFFFFFFu;
    edx = eax + 0xC;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx) = 0xFFFFFFFFu;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx) = 0xFFFFFFFFu;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx) = 0xFFFFFFFFu;
    MEM32(edx + 0xC) = 0xFFFFFFFFu;
    esp += 4; return; /* ret */

}

/**
 * sub_001DBDF0
 * Original: 0x001DBDF0 - 0x001DBE51 (97 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DBDF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DBDF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(ecx, MEM8(0x8F9018));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001DBE37; /* jne: not equal / not zero */

loc_001DBE02: ;
    ecx = MEM32(0x8F9018);
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    SET_LO8(eax, 0xA);
    MEM32(0x8F9018) = ecx;
    MEM16(0x8B48D2) = 0x758;
    MEM8(0x8B48D4) = LO8(eax);
    MEM16(0x8B48D6) = 4;
    MEM16(0x8B48D8) = 0xED0;
    MEM8(0x8B48DA) = LO8(eax);

loc_001DBE37: ;
    ecx = MEM32(0x9016AC);
    PUSH32(esp, 2);
    PUSH32(esp, 0x8B48D0);
    PUSH32(esp, 0x001DBE49u); RECOMP_ABI_CALL(0x0001E8E0u, sub_0001E8E0); /* call 0x0001E8E0 */

loc_001DBE49: ;
    MEM32(esi + 0x1058) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001DBE70
 * Original: 0x001DBE70 - 0x001DBEAF (63 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DBE70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DBE70: ;
    eax = MEM32(0x8F5AD0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DBEAE; /* jne: not equal / not zero */

loc_001DBE79: ;
    ecx = MEM32(0x8F5B04);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x19C);
    PUSH32(esp, 0x7F1500);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001DBE93u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001DBE90u); } /* indirect call */
    }

loc_001DBE93: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DBEA4; /* je: equal / zero */

loc_001DBE97: ;
    ecx = eax;
    PUSH32(esp, 0x001DBE9Eu); RECOMP_ABI_CALL(0x000329F8u, sub_000329F8); /* call 0x000329F8 */

loc_001DBE9E: ;
    MEM32(0x8F5AD0) = eax;
    esp += 4; return; /* ret */

loc_001DBEA4: ;
    MEM32(0x8F5AD0) = 0;

loc_001DBEAE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001DBEC0
 * Original: 0x001DBEC0 - 0x001DBF17 (87 bytes, 32 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DBEC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DBEC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DBED5; /* je: equal / zero */

loc_001DBEC9: ;
    ecx = MEM32(0x8F5B04);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x001DBED5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001DBED2u); } /* indirect call */
    }

loc_001DBED5: ;
    eax = MEM32(esi + 0x5C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DBEE8; /* je: equal / zero */

loc_001DBEDC: ;
    ecx = MEM32(0x8F5B04);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x001DBEE8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001DBEE5u); } /* indirect call */
    }

loc_001DBEE8: ;
    eax = MEM32(esi + 0x8C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DBEFE; /* je: equal / zero */

loc_001DBEF2: ;
    ecx = MEM32(0x8F5B04);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x001DBEFEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001DBEFBu); } /* indirect call */
    }

loc_001DBEFE: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001DBF11; /* je: equal / zero */

loc_001DBF05: ;
    ecx = MEM32(0x8F5B04);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x001DBF11u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001DBF0Eu); } /* indirect call */
    }

loc_001DBF11: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001DBF30
 * Original: 0x001DBF30 - 0x001DBFEB (187 bytes, 57 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DBF30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DBF30: ;
    _fb = (uint32_t)(0x118) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x118;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x7F1D84);
    ecx = esp + 0xC;
    PUSH32(esp, 0x001DBF47u); RECOMP_ABI_CALL(0x000319B3u, sub_000319B3); /* call 0x000319B3 */

loc_001DBF47: ;
    PUSH32(esp, 0);
    ecx = esp + 8;
    MEM32(esp + 0x118) = 0;
    MEM32(esp + 0x11C) = 0;
    PUSH32(esp, 0x001DBF68u); RECOMP_ABI_CALL(0x0001682Au, sub_0001682A); /* call 0x0001682A */

loc_001DBF68: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DBFD8; /* je: equal / zero */

loc_001DBF6E: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x124);
    PUSH32(esp, esi);
    goto loc_001DBF80;

    /* nop */

loc_001DBF80: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001DBF82: ;
    eax = MEM32(esi * 4 + 0x8B4818);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001DBF90u); RECOMP_ABI_CALL(0x005CDE09u, sub_005CDE09); /* call 0x005CDE09 */

loc_001DBF90: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DBF9F; /* je: equal / zero */

loc_001DBF97: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x26) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x26 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001DBF82; /* jl: less (signed <) */

loc_001DBF9D: ;
    goto loc_001DBFC5;

loc_001DBF9F: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001DBFA1: ;
    ecx = esp + 0xC;
    PUSH32(esp, 0x001DBFAAu); RECOMP_ABI_CALL(0x0001D274u, sub_0001D274); /* call 0x0001D274 */

loc_001DBFAA: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    eax = SX16(LO16(eax));
    if (CMP_NE(_fa, _fb)) goto loc_001DBFBF; /* jne: not equal / not zero */

loc_001DBFB1: ;
    ecx = ebx;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x26);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx * 4 + 0x8F5870) = eax;

loc_001DBFBF: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001DBFA1; /* jl: less (signed <) */

loc_001DBFC5: ;
    PUSH32(esp, 0);
    ecx = esp + 0x10;
    PUSH32(esp, 0x001DBFD0u); RECOMP_ABI_CALL(0x0001682Au, sub_0001682A); /* call 0x0001682A */

loc_001DBFD0: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DBF80; /* jne: not equal / not zero */

loc_001DBFD6: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_001DBFD8: ;
    ecx = esp + 4;
    PUSH32(esp, 0x001DBFE1u); RECOMP_ABI_CALL(0x000172A7u, sub_000172A7); /* call 0x000172A7 */

loc_001DBFE1: ;
    POP32(esp, edi);
    _fb = (uint32_t)(0x118) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x118;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001DC020
 * Original: 0x001DC020 - 0x001DC0D5 (181 bytes, 52 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DC020(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DC020: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x001DC02Eu); RECOMP_ABI_CALL(0x000333D5u, sub_000333D5); /* call 0x000333D5 */

loc_001DC02E: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, 0x8B4560);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x001DC044u); RECOMP_ABI_CALL(0x0002390Du, sub_0002390D); /* call 0x0002390D */

loc_001DC044: ;
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x4843534C);
    PUSH32(esp, 0xFF);
    MEM32(esp + 0x2C) = 0;
    PUSH32(esp, 0x001DC062u); RECOMP_ABI_CALL(0x00029394u, sub_00029394); /* call 0x00029394 */

loc_001DC062: ;
    edx = MEM32(0x8FC1D0);
    ecx = MEM32(edx + 0xE8);
    edx = MEM32(esp + 0x2C);
    eax = MEM32(ecx);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x100);
    PUSH32(esp, edx);
    PUSH32(esp, 0x7F19B0);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001DC085u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001DC082u); } /* indirect call */
    }

loc_001DC085: ;
    esi = eax;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x4843534C);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x001DC09Cu); RECOMP_ABI_CALL(0x00029394u, sub_00029394); /* call 0x00029394 */

loc_001DC09C: ;
    ecx = MEM32(0x8F5B00);
    edx = MEM32(ecx);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x4843534C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001DC0B2u); RECOMP_ABI_CALL(0x00028EC6u, sub_00028EC6); /* call 0x00028EC6 */

loc_001DC0B2: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x001DC0BCu); RECOMP_ABI_CALL(0x00012A5Eu, sub_00012A5E); /* call 0x00012A5E */

loc_001DC0BC: ;
    eax = MEM32(0x8FC1D0);
    ecx = MEM32(eax + 0xE8);
    edx = MEM32(ecx);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x001DC0D0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001DC0CDu); } /* indirect call */
    }

loc_001DC0D0: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001DC110
 * Original: 0x001DC110 - 0x001DC1BA (170 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DC110(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DC110: ;
    _fb = (uint32_t)(0x118) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x118;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x7F1D9C);
    ecx = esp + 0xC;
    PUSH32(esp, 0x001DC127u); RECOMP_ABI_CALL(0x000319B3u, sub_000319B3); /* call 0x000319B3 */

loc_001DC127: ;
    PUSH32(esp, 0);
    ecx = esp + 8;
    MEM32(esp + 0x118) = 0;
    MEM32(esp + 0x11C) = 0;
    PUSH32(esp, 0x001DC148u); RECOMP_ABI_CALL(0x0001682Au, sub_0001682A); /* call 0x0001682A */

loc_001DC148: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DC1A9; /* je: equal / zero */

loc_001DC14E: ;
    PUSH32(esp, esi);
    /* nop */

loc_001DC150: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001DC152: ;
    eax = MEM32(esi * 4 + 0x8B4818);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001DC160u); RECOMP_ABI_CALL(0x005CDE09u, sub_005CDE09); /* call 0x005CDE09 */

loc_001DC160: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DC16F; /* je: equal / zero */

loc_001DC167: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x26) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x26 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001DC152; /* jl: less (signed <) */

loc_001DC16D: ;
    goto loc_001DC197;

loc_001DC16F: ;
    esi = esi * 4 + 0x8F4F80;
    edi = 8;
    goto loc_001DC180;

    /* nop */

loc_001DC180: ;
    ecx = esp + 8;
    PUSH32(esp, 0x001DC189u); RECOMP_ABI_CALL(0x0001D274u, sub_0001D274); /* call 0x0001D274 */

loc_001DC189: ;
    ecx = SX16(LO16(eax));
    MEM32(esi) = ecx;
    _fb = (uint32_t)(0x98) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x98;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001DC180; /* jne: not equal / not zero */

loc_001DC197: ;
    PUSH32(esp, 0);
    ecx = esp + 0xC;
    PUSH32(esp, 0x001DC1A2u); RECOMP_ABI_CALL(0x0001682Au, sub_0001682A); /* call 0x0001682A */

loc_001DC1A2: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DC150; /* jne: not equal / not zero */

loc_001DC1A8: ;
    POP32(esp, esi);

loc_001DC1A9: ;
    ecx = esp + 4;
    PUSH32(esp, 0x001DC1B2u); RECOMP_ABI_CALL(0x000172A7u, sub_000172A7); /* call 0x000172A7 */

loc_001DC1B2: ;
    POP32(esp, edi);
    _fb = (uint32_t)(0x118) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x118;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001DC1F0
 * Original: 0x001DC1F0 - 0x001DC200 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DC1F0(void)
{

loc_001DC1F0: ;
    eax = ecx;
    MEM32(eax) = 0x7F1DBC;
    MEM32(eax + 4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_001DC210
 * Original: 0x001DC210 - 0x001DC234 (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DC210(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DC210: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x7F1DBC;
    if (CMP_EQ(_fa, _fb)) goto loc_001DC22C; /* je: equal / zero */

loc_001DC220: ;
    ecx = MEM32(0x8F5B04);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x001DC22Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001DC229u); } /* indirect call */
    }

loc_001DC22C: ;
    MEM32(esi) = 0x7F1A00;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001DC240
 * Original: 0x001DC240 - 0x001DC272 (50 bytes, 24 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DC240(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DC240: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, esi);
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xFFFFFFFCu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    if (CMP_LE(_fas, _fbs)) goto loc_001DC265; /* jle: less or equal (signed <=) */

loc_001DC257: ;
    PUSH32(esp, ebx);

loc_001DC258: ;
    ebx = ZX8(MEM8(edi + ecx + 4));
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001DC258; /* jl: less (signed <) */

loc_001DC264: ;
    POP32(esp, ebx);

loc_001DC265: ;
    ecx = MEM32(edi);
    POP32(esp, edi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_001DC26F; /* jne: not equal / not zero */

loc_001DC26D: ;
    SET_LO8(eax, 1);

loc_001DC26F: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001DC280
 * Original: 0x001DC280 - 0x001DC2B9 (57 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DC280(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DC280: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x7F19AC;
    if (CMP_EQ(_fa, _fb)) goto loc_001DC2A3; /* je: equal / zero */

loc_001DC290: ;
    ecx = MEM32(0x8FA540);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x001DC29Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001DC299u); } /* indirect call */
    }

loc_001DC29C: ;
    MEM32(esi + 0x10) = 0;

loc_001DC2A3: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001DC2B3; /* je: equal / zero */

loc_001DC2AA: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DC2B0u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_001DC2B0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001DC2B3: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001DC2D0
 * Original: 0x001DC2D0 - 0x001DC2EC (28 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DC2D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DC2D0: ;
    eax = MEM32(0x8F5AE4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DC2EB; /* jne: not equal / not zero */

loc_001DC2D9: ;
    ecx = MEM32(0x8F5B04);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x001DC2E6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001DC2E3u); } /* indirect call */
    }

loc_001DC2E6: ;
    MEM32(0x8F5AE4) = eax;

loc_001DC2EB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001DC300
 * Original: 0x001DC300 - 0x001DC31C (28 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DC300(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DC300: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_001DC316; /* je: equal / zero */

loc_001DC30A: ;
    ecx = MEM32(0x8F5B04);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x001DC316u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001DC313u); } /* indirect call */
    }

loc_001DC316: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001DC330
 * Original: 0x001DC330 - 0x001DC36A (58 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DC330(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DC330: ;
    SET_LO8(eax, MEM8(0x8F5ADD));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DC363; /* jne: not equal / not zero */

loc_001DC339: ;
    PUSH32(esp, 0x1E);
    PUSH32(esp, 6);
    PUSH32(esp, 0x50);
    PUSH32(esp, 0x7F);
    PUSH32(esp, 3);
    MEM8(0x8F5ADD) = 1;
    PUSH32(esp, 0x001DC34Fu); RECOMP_ABI_CALL(0x00031C88u, sub_00031C88); /* call 0x00031C88 */

loc_001DC34F: ;
    eax = MEM32(0x8F5B00);
    ecx = MEM32(eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001DC360u); RECOMP_ABI_CALL(0x0002F96Fu, sub_0002F96F); /* call 0x0002F96F */

loc_001DC360: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001DC363: ;
    MEM32(0x8F5AE0) = MEM32(0x8F5AE0) + 1;
    _fa = (uint32_t)(MEM32(0x8F5AE0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_001DC380
 * Original: 0x001DC380 - 0x001DC3A9 (41 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DC380(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DC380: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    edx = MEM32(0x8F5B00);
    eax = esp;
    PUSH32(esp, eax);
    MEM32(esp + 4) = 0;
    eax = MEM32(edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001DC3A0u); RECOMP_ABI_CALL(0x0001F380u, sub_0001F380); /* call 0x0001F380 */

loc_001DC3A0: ;
    eax = ZX16(MEM16(esp + 0xC));
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001DC3C0
 * Original: 0x001DC3C0 - 0x001DC3EB (43 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DC3C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DC3C0: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    edx = MEM32(0x8F5B00);
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    MEM32(esp + 8) = 0;
    eax = MEM32(edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001DC3E2u); RECOMP_ABI_CALL(0x0001346Du, sub_0001346D); /* call 0x0001346D */

loc_001DC3E2: ;
    eax = ZX16(MEM16(esp + 0x10));
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001DC400
 * Original: 0x001DC400 - 0x001DC420 (32 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DC400(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DC400: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_001DC41A; /* je: equal / zero */

loc_001DC40A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DC41A; /* je: equal / zero */

loc_001DC40E: ;
    ecx = MEM32(0x8F5B04);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x001DC41Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001DC417u); } /* indirect call */
    }

loc_001DC41A: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001DC430
 * Original: 0x001DC430 - 0x001DC5EA (442 bytes, 135 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DC430(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DC430: ;
    eax = MEM32(0x8F5AEC);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    PUSH32(esp, ebx);
    ebx = ecx;
    MEM32(0x8F5AEC) = eax;
    if (CMP_G(_fas, _fbs)) goto loc_001DC5E5; /* jg: greater (signed >) */

loc_001DC44A: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x001DC459u); RECOMP_ABI_CALL(0x000333D5u, sub_000333D5); /* call 0x000333D5 */

loc_001DC459: ;
    PUSH32(esp, 0x8B4560);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebp);
    PUSH32(esp, 0x7F1DC0);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x001DC470u); RECOMP_ABI_CALL(0x0002390Du, sub_0002390D); /* call 0x0002390D */

loc_001DC470: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 0x8B4598;

loc_001DC478: ;
    ecx = MEM32(esi);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, 0xFF);
    MEM32(esp + 0x20) = ebp;
    PUSH32(esp, 0x001DC48Fu); RECOMP_ABI_CALL(0x00029394u, sub_00029394); /* call 0x00029394 */

loc_001DC48F: ;
    edx = MEM32(0x8FC1D0);
    ecx = MEM32(edx + 0xE8);
    edx = MEM32(esp + 0x20);
    eax = MEM32(ecx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x100);
    PUSH32(esp, edx);
    PUSH32(esp, 0x7F19B0);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001DC4B2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001DC4AFu); } /* indirect call */
    }

loc_001DC4B2: ;
    ecx = MEM32(esi);
    edi = eax;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x001DC4C7u); RECOMP_ABI_CALL(0x00029394u, sub_00029394); /* call 0x00029394 */

loc_001DC4C7: ;
    edx = MEM32(esi);
    eax = MEM32(ebx);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001DC4D5u); RECOMP_ABI_CALL(0x00028EC6u, sub_00028EC6); /* call 0x00028EC6 */

loc_001DC4D5: ;
    ecx = MEM32(0x8FC1D0);
    ecx = MEM32(ecx + 0xE8);
    edx = MEM32(ecx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x001DC4EAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001DC4E7u); } /* indirect call */
    }

loc_001DC4EA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8B45B0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x8B45B0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001DC478; /* jl: less (signed <) */

loc_001DC4F5: ;
    ecx = MEM32(0x8B4598);
    edx = MEM32(ebx);
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x31303049);
    PUSH32(esp, ecx);
    edi = 0x58444E49;
    esi = 0x52414559;
    PUSH32(esp, edx);
    MEM32(esp + 0x30) = edi;
    MEM32(esp + 0x34) = ebp;
    MEM32(esp + 0x50) = 0xFFFFFFFFu;
    MEM32(esp + 0x40) = esi;
    MEM32(esp + 0x44) = ebp;
    PUSH32(esp, 0x001DC533u); RECOMP_ABI_CALL(0x00029254u, sub_00029254); /* call 0x00029254 */

loc_001DC533: ;
    ecx = MEM32(0x8B459C);
    edx = MEM32(ebx);
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    PUSH32(esp, 0x31303049);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    MEM32(esp + 0x48) = edi;
    MEM32(esp + 0x4C) = ebp;
    MEM32(esp + 0x68) = 0xFFFFFFFFu;
    MEM32(esp + 0x58) = esi;
    MEM32(esp + 0x5C) = ebp;
    PUSH32(esp, 0x001DC567u); RECOMP_ABI_CALL(0x00029254u, sub_00029254); /* call 0x00029254 */

loc_001DC567: ;
    ecx = MEM32(0x8B45A0);
    edx = MEM32(ebx);
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    eax = esp + 0x4C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x31303049);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    MEM32(esp + 0x60) = edi;
    MEM32(esp + 0x64) = ebp;
    MEM32(esp + 0x80) = 0xFFFFFFFFu;
    MEM32(esp + 0x70) = esi;
    MEM32(esp + 0x74) = ebp;
    PUSH32(esp, 0x001DC59Eu); RECOMP_ABI_CALL(0x00029254u, sub_00029254); /* call 0x00029254 */

loc_001DC59E: ;
    ecx = MEM32(0x8B45A4);
    edx = MEM32(ebx);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x31303049);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    MEM32(esp + 0x30) = edi;
    MEM32(esp + 0x34) = ebp;
    MEM32(esp + 0x50) = 0xFFFFFFFFu;
    MEM32(esp + 0x40) = esi;
    MEM32(esp + 0x44) = ebp;
    PUSH32(esp, 0x001DC5D5u); RECOMP_ABI_CALL(0x00029254u, sub_00029254); /* call 0x00029254 */

loc_001DC5D5: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x001DC5DFu); RECOMP_ABI_CALL(0x00012A5Eu, sub_00012A5E); /* call 0x00012A5E */

loc_001DC5DF: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);

loc_001DC5E5: ;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001DC660
 * Original: 0x001DC660 - 0x001DC6E3 (131 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DC660(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DC660: ;
    eax = MEM32(0x8F5AEC);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(0x8F5AEC) = eax;
    if ((_fa != 0)) goto loc_001DC6E1; /* jne: not equal / not zero */

loc_001DC670: ;
    eax = MEM32(0x8B4598);
    ecx = MEM32(edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x31303049);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001DC684u); RECOMP_ABI_CALL(0x00037967u, sub_00037967); /* call 0x00037967 */

loc_001DC684: ;
    edx = MEM32(0x8B459C);
    eax = MEM32(edi);
    PUSH32(esp, 0x31303049);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001DC698u); RECOMP_ABI_CALL(0x00037967u, sub_00037967); /* call 0x00037967 */

loc_001DC698: ;
    ecx = MEM32(0x8B45A0);
    edx = MEM32(edi);
    PUSH32(esp, 0x31303049);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001DC6ACu); RECOMP_ABI_CALL(0x00037967u, sub_00037967); /* call 0x00037967 */

loc_001DC6AC: ;
    eax = MEM32(0x8B45A4);
    ecx = MEM32(edi);
    PUSH32(esp, 0x31303049);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001DC6BFu); RECOMP_ABI_CALL(0x00037967u, sub_00037967); /* call 0x00037967 */

loc_001DC6BF: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 0x8B4598;

loc_001DC6C7: ;
    edx = MEM32(esi);
    eax = MEM32(edi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001DC6D2u); RECOMP_ABI_CALL(0x0002B08Bu, sub_0002B08B); /* call 0x0002B08B */

loc_001DC6D2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8B45B0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x8B45B0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001DC6C7; /* jl: less (signed <) */

loc_001DC6E0: ;
    POP32(esp, esi);

loc_001DC6E1: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_001DC710
 * Original: 0x001DC710 - 0x001DC768 (88 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DC710(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DC710: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_001DC755; /* je: equal / zero */

loc_001DC719: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_001DC732; /* je: equal / zero */

loc_001DC71C: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001DC767; /* jne: not equal / not zero */

loc_001DC71F: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001DC72Eu); RECOMP_ABI_CALL(0x0002668Fu, sub_0002668F); /* call 0x0002668F */

loc_001DC72E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001DC732: ;
    edx = MEM32(esp + 8);
    ecx = ZX8(MEM8(edx));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001DC767; /* jle: less or equal (signed <=) */

loc_001DC73F: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);

loc_001DC745: ;
    edi = ZX8(MEM8(eax + edx));
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + eax * 4) = edi;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001DC745; /* jl: less (signed <) */

loc_001DC752: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001DC755: ;
    edx = MEM32(esp + 0xC);
    eax = MEM32(esp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001DC764u); RECOMP_ABI_CALL(0x00017E32u, sub_00017E32); /* call 0x00017E32 */

loc_001DC764: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001DC767: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001DC780
 * Original: 0x001DC780 - 0x001DC7C8 (72 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DC780(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DC780: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_001DC7B5; /* je: equal / zero */

loc_001DC789: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_001DC7A2; /* je: equal / zero */

loc_001DC78C: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001DC7C7; /* jne: not equal / not zero */

loc_001DC78F: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001DC79Eu); RECOMP_ABI_CALL(0x0002B2D9u, sub_0002B2D9); /* call 0x0002B2D9 */

loc_001DC79E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001DC7A2: ;
    edx = MEM32(esp + 0xC);
    eax = MEM32(esp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001DC7B1u); RECOMP_ABI_CALL(0x0001C3B0u, sub_0001C3B0); /* call 0x0001C3B0 */

loc_001DC7B1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001DC7B5: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001DC7C4u); RECOMP_ABI_CALL(0x00014E9Eu, sub_00014E9E); /* call 0x00014E9E */

loc_001DC7C4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001DC7C7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001DC7E0
 * Original: 0x001DC7E0 - 0x001DC7FF (31 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DC7E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DC7E0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x7F1A00;
    if (TEST_Z(_fa, _fb)) goto loc_001DC7F9; /* je: equal / zero */

loc_001DC7F0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DC7F6u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_001DC7F6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001DC7F9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001DC810
 * Original: 0x001DC810 - 0x001DC856 (70 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DC810(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DC810: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001DC820u); RECOMP_ABI_CALL(0x00034EBAu, sub_00034EBA); /* call 0x00034EBA */

loc_001DC820: ;
    eax = MEM32(esi + 0x10);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DC83D; /* je: equal / zero */

loc_001DC82A: ;
    ecx = MEM32(0x8F5B04);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x001DC836u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001DC833u); } /* indirect call */
    }

loc_001DC836: ;
    MEM32(esi + 0x10) = 0;

loc_001DC83D: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001DC850; /* je: equal / zero */

loc_001DC844: ;
    ecx = MEM32(0x8F5B04);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x001DC850u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001DC84Du); } /* indirect call */
    }

loc_001DC850: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001DC870
 * Original: 0x001DC870 - 0x001DC88A (26 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DC870(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DC870: ;
    eax = MEM32(0x8F84CC);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DC889; /* je: equal / zero */

loc_001DC87B: ;
    goto loc_001DC880;

    /* nop */

loc_001DC880: ;
    MEM8(eax + 0x24) = LO8(ecx);
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DC880; /* jne: not equal / not zero */

loc_001DC889: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001DC890
 * Original: 0x001DC890 - 0x001DC8CF (63 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DC890(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DC890: ;
    eax = MEM32(0x8F84CC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DC8CE; /* je: equal / zero */

loc_001DC899: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    ecx = edx;
    esi = edx;
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((0x10) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = ecx & 0xFF0000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = edx;
    esi = esi & 0xFF00;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(0x10) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    esi = esi | edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        esi = _sv << _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((8) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = ecx | esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);

loc_001DC8C3: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DC8CE; /* je: equal / zero */

loc_001DC8C8: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DC8C3; /* jne: not equal / not zero */

loc_001DC8CE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001DC8E0
 * Original: 0x001DC8E0 - 0x001DC909 (41 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DC8E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DC8E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001DC8F0u); RECOMP_ABI_CALL(0x0002A4C4u, sub_0002A4C4); /* call 0x0002A4C4 */

loc_001DC8F0: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(esi + 0x20);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(esi + 0x1A));
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001DC904u); RECOMP_ABI_CALL(0x000196ECu, sub_000196EC); /* call 0x000196EC */

loc_001DC904: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001DC920
 * Original: 0x001DC920 - 0x001DC956 (54 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DC920(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DC920: ;
    eax = MEM32(esp + 8);
    ecx = eax;
    edx = eax;
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(0x10) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = ecx & 0xFF0000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = eax;
    edx = edx & 0xFF00;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x10) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = edx | eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001DC94Eu); RECOMP_ABI_CALL(0x0001BBDBu, sub_0001BBDB); /* call 0x0001BBDB */

loc_001DC94E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(eax + 0x24) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_001DC970
 * Original: 0x001DC970 - 0x001DC988 (24 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DC970(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DC970: ;
    eax = MEM32(ecx + 0xC);
    ecx = MEM32(ecx + 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, 0x2B946);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001DC984u); RECOMP_ABI_CALL(0x00017FC2u, sub_00017FC2); /* call 0x00017FC2 */

loc_001DC984: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001DC990
 * Original: 0x001DC990 - 0x001DC99A (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DC990(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DC990: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

}

/**
 * sub_001DC9A0
 * Original: 0x001DC9A0 - 0x001DCA11 (113 bytes, 37 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DC9A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DC9A0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, 0xDEADDEADu);
    eax = esp + 8;
    PUSH32(esp, 0x7F1E04);
    PUSH32(esp, eax);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x001DC9BAu); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_001DC9BA: ;
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DC9E6; /* jne: not equal / not zero */

loc_001DC9C5: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, 0x7F1DD0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001DC9DEu); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_001DC9DE: ;
    esi = ZX16(MEM16(esp + 0x14));
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001DC9E6: ;
    eax = MEM32(0x8F84CC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DC9FF; /* je: equal / zero */

loc_001DC9EF: ;
    ecx = 0x53524556;

loc_001DC9F4: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DC9FF; /* je: equal / zero */

loc_001DC9F9: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DC9F4; /* jne: not equal / not zero */

loc_001DC9FF: ;
    MEM8(eax + 0x24) = 0;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    SET_LO8(eax, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}
