/**
 * nhl_07_recomp - Recompiled code chunk 107
 * Functions: 250 (0x0011A7E0 - 0x0011ECC0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_0011A7E0
 * Original: 0x0011A7E0 - 0x0011A7E3 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011A7E0(void)
{

loc_0011A7E0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011A7F0
 * Original: 0x0011A7F0 - 0x0011A7FD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011A7F0(void)
{

loc_0011A7F0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7D8408;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011A800
 * Original: 0x0011A800 - 0x0011A809 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011A800(void)
{

loc_0011A800: ;
    eax = ecx;
    MEM32(eax) = 0x7D8424;
    esp += 4; return; /* ret */

}

/**
 * sub_0011A810
 * Original: 0x0011A810 - 0x0011A813 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011A810(void)
{

loc_0011A810: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011A820
 * Original: 0x0011A820 - 0x0011A82D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011A820(void)
{

loc_0011A820: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7D8434;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011A830
 * Original: 0x0011A830 - 0x0011A839 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011A830(void)
{

loc_0011A830: ;
    eax = ecx;
    MEM32(eax) = 0x7D8458;
    esp += 4; return; /* ret */

}

/**
 * sub_0011A840
 * Original: 0x0011A840 - 0x0011A843 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011A840(void)
{

loc_0011A840: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011A850
 * Original: 0x0011A850 - 0x0011A85D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011A850(void)
{

loc_0011A850: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7D8468;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011A860
 * Original: 0x0011A860 - 0x0011A869 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011A860(void)
{

loc_0011A860: ;
    eax = ecx;
    MEM32(eax) = 0x7D8488;
    esp += 4; return; /* ret */

}

/**
 * sub_0011A870
 * Original: 0x0011A870 - 0x0011A873 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011A870(void)
{

loc_0011A870: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011A880
 * Original: 0x0011A880 - 0x0011A88D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011A880(void)
{

loc_0011A880: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7D8498;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011A890
 * Original: 0x0011A890 - 0x0011A8B6 (38 bytes, 10 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011A890(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011A890: ;
    PUSH32(esp, 0x0011A895u); RECOMP_ABI_CALL(0x00014791u, sub_00014791); /* call 0x00014791 */

loc_0011A895: ;
    ecx = eax;
    PUSH32(esp, 0x0011A89Cu); RECOMP_ABI_CALL(0x0002B955u, sub_0002B955); /* call 0x0002B955 */

loc_0011A89C: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    eax = MEM32(esp + 4);
    if (CMP_NE(_fa, _fb)) goto loc_0011A8AF; /* jne: not equal / not zero */

loc_0011A8AC: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_0011A8AF: ;
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0011A8C0
 * Original: 0x0011A8C0 - 0x0011A8C9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011A8C0(void)
{

loc_0011A8C0: ;
    eax = ecx;
    MEM32(eax) = 0x7D84B4;
    esp += 4; return; /* ret */

}

/**
 * sub_0011A8D0
 * Original: 0x0011A8D0 - 0x0011A8D3 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011A8D0(void)
{

loc_0011A8D0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011A8E0
 * Original: 0x0011A8E0 - 0x0011A8ED (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011A8E0(void)
{

loc_0011A8E0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7D84C4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011A8F0
 * Original: 0x0011A8F0 - 0x0011A91C (44 bytes, 11 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011A8F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011A8F0: ;
    eax = MEM32(esp + 8);
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0x30);
    edx = MEM32(0x8E9380);
    SET_LO8(eax, MEM8(ecx + edx + 0x14));
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    eax = MEM32(esp + 4);
    if (CMP_NE(_fa, _fb)) goto loc_0011A915; /* jne: not equal / not zero */

loc_0011A912: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_0011A915: ;
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0011A930
 * Original: 0x0011A930 - 0x0011A939 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011A930(void)
{

loc_0011A930: ;
    eax = ecx;
    MEM32(eax) = 0x7D84D8;
    esp += 4; return; /* ret */

}

/**
 * sub_0011A940
 * Original: 0x0011A940 - 0x0011A943 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011A940(void)
{

loc_0011A940: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011A950
 * Original: 0x0011A950 - 0x0011A95D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011A950(void)
{

loc_0011A950: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7D84E8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011A960
 * Original: 0x0011A960 - 0x0011A98D (45 bytes, 12 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011A960(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011A960: ;
    eax = MEM32(esp + 8);
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0x30);
    edx = MEM32(0x8E9380);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    SET_LO8(eax, MEM8(edx + 0x15));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    eax = MEM32(esp + 4);
    if (CMP_NE(_fa, _fb)) goto loc_0011A986; /* jne: not equal / not zero */

loc_0011A983: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_0011A986: ;
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0011A9A0
 * Original: 0x0011A9A0 - 0x0011A9A9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011A9A0(void)
{

loc_0011A9A0: ;
    eax = ecx;
    MEM32(eax) = 0x7D8500;
    esp += 4; return; /* ret */

}

/**
 * sub_0011A9B0
 * Original: 0x0011A9B0 - 0x0011A9B3 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011A9B0(void)
{

loc_0011A9B0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011A9C0
 * Original: 0x0011A9C0 - 0x0011A9CD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011A9C0(void)
{

loc_0011A9C0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7D8510;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011A9D0
 * Original: 0x0011A9D0 - 0x0011A9F4 (36 bytes, 9 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011A9D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011A9D0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 0x3EC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_0011A9ED; /* je: equal / zero */

loc_0011A9EA: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_0011A9ED: ;
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0011AA00
 * Original: 0x0011AA00 - 0x0011AA09 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011AA00(void)
{

loc_0011AA00: ;
    eax = ecx;
    MEM32(eax) = 0x7D8528;
    esp += 4; return; /* ret */

}

/**
 * sub_0011AA10
 * Original: 0x0011AA10 - 0x0011AA13 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011AA10(void)
{

loc_0011AA10: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011AA20
 * Original: 0x0011AA20 - 0x0011AA2D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011AA20(void)
{

loc_0011AA20: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7D8538;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011AA30
 * Original: 0x0011AA30 - 0x0011AA53 (35 bytes, 8 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011AA30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011AA30: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(MEM32(eax + 0x3EC)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x3EC), 1 (32-bit) */
    eax = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_0011AA4C; /* je: equal / zero */

loc_0011AA49: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_0011AA4C: ;
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0011AA60
 * Original: 0x0011AA60 - 0x0011AA69 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011AA60(void)
{

loc_0011AA60: ;
    eax = ecx;
    MEM32(eax) = 0x7D8554;
    esp += 4; return; /* ret */

}

/**
 * sub_0011AA70
 * Original: 0x0011AA70 - 0x0011AA73 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011AA70(void)
{

loc_0011AA70: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011AA80
 * Original: 0x0011AA80 - 0x0011AA8D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011AA80(void)
{

loc_0011AA80: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7D8564;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011AA90
 * Original: 0x0011AA90 - 0x0011AAB3 (35 bytes, 8 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011AA90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011AA90: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(MEM32(eax + 0x3EC)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x3EC), 2 (32-bit) */
    eax = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_0011AAAC; /* je: equal / zero */

loc_0011AAA9: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_0011AAAC: ;
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0011AAC0
 * Original: 0x0011AAC0 - 0x0011AAC9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011AAC0(void)
{

loc_0011AAC0: ;
    eax = ecx;
    MEM32(eax) = 0x7D857C;
    esp += 4; return; /* ret */

}

/**
 * sub_0011AAD0
 * Original: 0x0011AAD0 - 0x0011AAD3 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011AAD0(void)
{

loc_0011AAD0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011AAE0
 * Original: 0x0011AAE0 - 0x0011AAED (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011AAE0(void)
{

loc_0011AAE0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7D858C;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011AAF0
 * Original: 0x0011AAF0 - 0x0011AB13 (35 bytes, 8 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011AAF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011AAF0: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(MEM32(eax + 0x3EC)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x3EC), 3 (32-bit) */
    eax = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_0011AB0C; /* je: equal / zero */

loc_0011AB09: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_0011AB0C: ;
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0011AB20
 * Original: 0x0011AB20 - 0x0011AB29 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011AB20(void)
{

loc_0011AB20: ;
    eax = ecx;
    MEM32(eax) = 0x7D85A4;
    esp += 4; return; /* ret */

}

/**
 * sub_0011AB30
 * Original: 0x0011AB30 - 0x0011AB33 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011AB30(void)
{

loc_0011AB30: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011AB40
 * Original: 0x0011AB40 - 0x0011AB4D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011AB40(void)
{

loc_0011AB40: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7D85B4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011AB50
 * Original: 0x0011AB50 - 0x0011AB73 (35 bytes, 8 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011AB50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011AB50: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(MEM32(eax + 0x3EC)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x3EC), 4 (32-bit) */
    eax = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_0011AB6C; /* je: equal / zero */

loc_0011AB69: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_0011AB6C: ;
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0011AB80
 * Original: 0x0011AB80 - 0x0011AB89 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011AB80(void)
{

loc_0011AB80: ;
    eax = ecx;
    MEM32(eax) = 0x7D85D4;
    esp += 4; return; /* ret */

}

/**
 * sub_0011AB90
 * Original: 0x0011AB90 - 0x0011AB93 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011AB90(void)
{

loc_0011AB90: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011ABA0
 * Original: 0x0011ABA0 - 0x0011ABAD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011ABA0(void)
{

loc_0011ABA0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7D85E4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011ABB0
 * Original: 0x0011ABB0 - 0x0011ABD3 (35 bytes, 8 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011ABB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011ABB0: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(MEM32(eax + 0x3EC)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x3EC), 5 (32-bit) */
    eax = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_0011ABCC; /* je: equal / zero */

loc_0011ABC9: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_0011ABCC: ;
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0011ABE0
 * Original: 0x0011ABE0 - 0x0011ABE9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011ABE0(void)
{

loc_0011ABE0: ;
    eax = ecx;
    MEM32(eax) = 0x7D8600;
    esp += 4; return; /* ret */

}

/**
 * sub_0011ABF0
 * Original: 0x0011ABF0 - 0x0011ABF3 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011ABF0(void)
{

loc_0011ABF0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011AC00
 * Original: 0x0011AC00 - 0x0011AC0D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011AC00(void)
{

loc_0011AC00: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7D8610;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011AC10
 * Original: 0x0011AC10 - 0x0011AC19 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011AC10(void)
{

loc_0011AC10: ;
    eax = ecx;
    MEM32(eax) = 0x7D8640;
    esp += 4; return; /* ret */

}

/**
 * sub_0011AC20
 * Original: 0x0011AC20 - 0x0011AC23 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011AC20(void)
{

loc_0011AC20: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011AC30
 * Original: 0x0011AC30 - 0x0011AC3D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011AC30(void)
{

loc_0011AC30: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7D8650;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011AC40
 * Original: 0x0011AC40 - 0x0011AC49 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011AC40(void)
{

loc_0011AC40: ;
    eax = ecx;
    MEM32(eax) = 0x7D8680;
    esp += 4; return; /* ret */

}

/**
 * sub_0011AC50
 * Original: 0x0011AC50 - 0x0011AC53 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011AC50(void)
{

loc_0011AC50: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011AC60
 * Original: 0x0011AC60 - 0x0011AC6D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011AC60(void)
{

loc_0011AC60: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7D8690;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011AC70
 * Original: 0x0011AC70 - 0x0011AC79 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011AC70(void)
{

loc_0011AC70: ;
    eax = ecx;
    MEM32(eax) = 0x7D869C;
    esp += 4; return; /* ret */

}

/**
 * sub_0011AC80
 * Original: 0x0011AC80 - 0x0011AC83 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011AC80(void)
{

loc_0011AC80: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011AC90
 * Original: 0x0011AC90 - 0x0011AC9D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011AC90(void)
{

loc_0011AC90: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7D86AC;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011ACA0
 * Original: 0x0011ACA0 - 0x0011ACA9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011ACA0(void)
{

loc_0011ACA0: ;
    eax = ecx;
    MEM32(eax) = 0x7D86C8;
    esp += 4; return; /* ret */

}

/**
 * sub_0011ACB0
 * Original: 0x0011ACB0 - 0x0011ACB3 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011ACB0(void)
{

loc_0011ACB0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011ACC0
 * Original: 0x0011ACC0 - 0x0011ACCD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011ACC0(void)
{

loc_0011ACC0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7D86D8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011ACD0
 * Original: 0x0011ACD0 - 0x0011ACF2 (34 bytes, 9 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011ACD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011ACD0: ;
    eax = MEM32(0x8F6A68);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    eax = MEM32(esp + 4);
    if (CMP_EQ(_fa, _fb)) goto loc_0011ACEB; /* je: equal / zero */

loc_0011ACE8: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_0011ACEB: ;
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0011AD00
 * Original: 0x0011AD00 - 0x0011AD09 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011AD00(void)
{

loc_0011AD00: ;
    eax = ecx;
    MEM32(eax) = 0x7D86F4;
    esp += 4; return; /* ret */

}

/**
 * sub_0011AD10
 * Original: 0x0011AD10 - 0x0011AD13 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011AD10(void)
{

loc_0011AD10: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011AD20
 * Original: 0x0011AD20 - 0x0011AD2D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011AD20(void)
{

loc_0011AD20: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7D8704;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011AD30
 * Original: 0x0011AD30 - 0x0011AD39 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011AD30(void)
{

loc_0011AD30: ;
    eax = ecx;
    MEM32(eax) = 0x7D8714;
    esp += 4; return; /* ret */

}

/**
 * sub_0011AD40
 * Original: 0x0011AD40 - 0x0011AD43 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011AD40(void)
{

loc_0011AD40: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011AD50
 * Original: 0x0011AD50 - 0x0011AD5D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011AD50(void)
{

loc_0011AD50: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7D8724;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011AD60
 * Original: 0x0011AD60 - 0x0011AD69 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011AD60(void)
{

loc_0011AD60: ;
    eax = ecx;
    MEM32(eax) = 0x7D8748;
    esp += 4; return; /* ret */

}

/**
 * sub_0011AD70
 * Original: 0x0011AD70 - 0x0011AD73 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011AD70(void)
{

loc_0011AD70: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011AD80
 * Original: 0x0011AD80 - 0x0011AD8D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011AD80(void)
{

loc_0011AD80: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7D8758;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011AD90
 * Original: 0x0011AD90 - 0x0011AD99 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011AD90(void)
{

loc_0011AD90: ;
    eax = ecx;
    MEM32(eax) = 0x7D8780;
    esp += 4; return; /* ret */

}

/**
 * sub_0011ADA0
 * Original: 0x0011ADA0 - 0x0011ADA3 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011ADA0(void)
{

loc_0011ADA0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011ADB0
 * Original: 0x0011ADB0 - 0x0011ADBD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011ADB0(void)
{

loc_0011ADB0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7D8790;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011ADC0
 * Original: 0x0011ADC0 - 0x0011ADC9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011ADC0(void)
{

loc_0011ADC0: ;
    eax = ecx;
    MEM32(eax) = 0x7D87B8;
    esp += 4; return; /* ret */

}

/**
 * sub_0011ADD0
 * Original: 0x0011ADD0 - 0x0011ADD3 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011ADD0(void)
{

loc_0011ADD0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011ADE0
 * Original: 0x0011ADE0 - 0x0011ADED (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011ADE0(void)
{

loc_0011ADE0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7D87C8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011ADF0
 * Original: 0x0011ADF0 - 0x0011ADF9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011ADF0(void)
{

loc_0011ADF0: ;
    eax = ecx;
    MEM32(eax) = 0x7D87E4;
    esp += 4; return; /* ret */

}

/**
 * sub_0011AE00
 * Original: 0x0011AE00 - 0x0011AE03 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011AE00(void)
{

loc_0011AE00: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011AE10
 * Original: 0x0011AE10 - 0x0011AE1D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011AE10(void)
{

loc_0011AE10: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7D87F4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011AE20
 * Original: 0x0011AE20 - 0x0011AE29 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011AE20(void)
{

loc_0011AE20: ;
    eax = ecx;
    MEM32(eax) = 0x7D8814;
    esp += 4; return; /* ret */

}

/**
 * sub_0011AE30
 * Original: 0x0011AE30 - 0x0011AE33 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011AE30(void)
{

loc_0011AE30: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011AE40
 * Original: 0x0011AE40 - 0x0011AE4D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011AE40(void)
{

loc_0011AE40: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7D8824;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011AE50
 * Original: 0x0011AE50 - 0x0011AE59 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011AE50(void)
{

loc_0011AE50: ;
    eax = ecx;
    MEM32(eax) = 0x7D8844;
    esp += 4; return; /* ret */

}

/**
 * sub_0011AE60
 * Original: 0x0011AE60 - 0x0011AE63 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011AE60(void)
{

loc_0011AE60: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011AE70
 * Original: 0x0011AE70 - 0x0011AE7D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011AE70(void)
{

loc_0011AE70: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7D8854;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011AE80
 * Original: 0x0011AE80 - 0x0011AE89 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011AE80(void)
{

loc_0011AE80: ;
    eax = ecx;
    MEM32(eax) = 0x7D8874;
    esp += 4; return; /* ret */

}

/**
 * sub_0011AE90
 * Original: 0x0011AE90 - 0x0011AE93 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011AE90(void)
{

loc_0011AE90: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011AEA0
 * Original: 0x0011AEA0 - 0x0011AEAD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011AEA0(void)
{

loc_0011AEA0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7D8884;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011AEB0
 * Original: 0x0011AEB0 - 0x0011AEB9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011AEB0(void)
{

loc_0011AEB0: ;
    eax = ecx;
    MEM32(eax) = 0x7D88A4;
    esp += 4; return; /* ret */

}

/**
 * sub_0011AEC0
 * Original: 0x0011AEC0 - 0x0011AEC3 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011AEC0(void)
{

loc_0011AEC0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011AED0
 * Original: 0x0011AED0 - 0x0011AEDD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011AED0(void)
{

loc_0011AED0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7D88B4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011AEE0
 * Original: 0x0011AEE0 - 0x0011AEE9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011AEE0(void)
{

loc_0011AEE0: ;
    eax = ecx;
    MEM32(eax) = 0x7D88D8;
    esp += 4; return; /* ret */

}

/**
 * sub_0011AEF0
 * Original: 0x0011AEF0 - 0x0011AEF3 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011AEF0(void)
{

loc_0011AEF0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011AF00
 * Original: 0x0011AF00 - 0x0011AF0D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011AF00(void)
{

loc_0011AF00: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7D88E8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011AF10
 * Original: 0x0011AF10 - 0x0011AF19 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011AF10(void)
{

loc_0011AF10: ;
    eax = ecx;
    MEM32(eax) = 0x7D8900;
    esp += 4; return; /* ret */

}

/**
 * sub_0011AF20
 * Original: 0x0011AF20 - 0x0011AF23 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011AF20(void)
{

loc_0011AF20: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011AF30
 * Original: 0x0011AF30 - 0x0011AF3D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011AF30(void)
{

loc_0011AF30: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7D8910;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011AF40
 * Original: 0x0011AF40 - 0x0011AF49 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011AF40(void)
{

loc_0011AF40: ;
    eax = ecx;
    MEM32(eax) = 0x7D892C;
    esp += 4; return; /* ret */

}

/**
 * sub_0011AF50
 * Original: 0x0011AF50 - 0x0011AF53 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011AF50(void)
{

loc_0011AF50: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011AF60
 * Original: 0x0011AF60 - 0x0011AF6D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011AF60(void)
{

loc_0011AF60: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7D893C;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011AF70
 * Original: 0x0011AF70 - 0x0011AF79 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011AF70(void)
{

loc_0011AF70: ;
    eax = ecx;
    MEM32(eax) = 0x7D8958;
    esp += 4; return; /* ret */

}

/**
 * sub_0011AF80
 * Original: 0x0011AF80 - 0x0011AF83 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011AF80(void)
{

loc_0011AF80: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011AF90
 * Original: 0x0011AF90 - 0x0011AF9D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011AF90(void)
{

loc_0011AF90: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7D8968;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011AFA0
 * Original: 0x0011AFA0 - 0x0011AFA9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011AFA0(void)
{

loc_0011AFA0: ;
    eax = ecx;
    MEM32(eax) = 0x7D8984;
    esp += 4; return; /* ret */

}

/**
 * sub_0011AFB0
 * Original: 0x0011AFB0 - 0x0011AFB3 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011AFB0(void)
{

loc_0011AFB0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011AFC0
 * Original: 0x0011AFC0 - 0x0011AFCD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011AFC0(void)
{

loc_0011AFC0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7D8994;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011AFD0
 * Original: 0x0011AFD0 - 0x0011AFD9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011AFD0(void)
{

loc_0011AFD0: ;
    eax = ecx;
    MEM32(eax) = 0x7D89B0;
    esp += 4; return; /* ret */

}

/**
 * sub_0011AFE0
 * Original: 0x0011AFE0 - 0x0011AFE3 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011AFE0(void)
{

loc_0011AFE0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011AFF0
 * Original: 0x0011AFF0 - 0x0011AFFD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011AFF0(void)
{

loc_0011AFF0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7D89C0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011B000
 * Original: 0x0011B000 - 0x0011B009 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011B000(void)
{

loc_0011B000: ;
    eax = ecx;
    MEM32(eax) = 0x7D89E4;
    esp += 4; return; /* ret */

}

/**
 * sub_0011B010
 * Original: 0x0011B010 - 0x0011B013 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011B010(void)
{

loc_0011B010: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011B020
 * Original: 0x0011B020 - 0x0011B02D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011B020(void)
{

loc_0011B020: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7D89F4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011B030
 * Original: 0x0011B030 - 0x0011B039 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011B030(void)
{

loc_0011B030: ;
    eax = ecx;
    MEM32(eax) = 0x7D8A1C;
    esp += 4; return; /* ret */

}

/**
 * sub_0011B040
 * Original: 0x0011B040 - 0x0011B043 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011B040(void)
{

loc_0011B040: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011B050
 * Original: 0x0011B050 - 0x0011B05D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011B050(void)
{

loc_0011B050: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7D8A2C;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011B060
 * Original: 0x0011B060 - 0x0011B069 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011B060(void)
{

loc_0011B060: ;
    eax = ecx;
    MEM32(eax) = 0x7D8A54;
    esp += 4; return; /* ret */

}

/**
 * sub_0011B070
 * Original: 0x0011B070 - 0x0011B073 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011B070(void)
{

loc_0011B070: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011B080
 * Original: 0x0011B080 - 0x0011B08D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011B080(void)
{

loc_0011B080: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7D8A64;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011B090
 * Original: 0x0011B090 - 0x0011B099 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011B090(void)
{

loc_0011B090: ;
    eax = ecx;
    MEM32(eax) = 0x7D8A84;
    esp += 4; return; /* ret */

}

/**
 * sub_0011B0A0
 * Original: 0x0011B0A0 - 0x0011B0A3 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011B0A0(void)
{

loc_0011B0A0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011B0B0
 * Original: 0x0011B0B0 - 0x0011B0BD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011B0B0(void)
{

loc_0011B0B0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7D8A94;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011B0C0
 * Original: 0x0011B0C0 - 0x0011B0C9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011B0C0(void)
{

loc_0011B0C0: ;
    eax = ecx;
    MEM32(eax) = 0x7D8AB4;
    esp += 4; return; /* ret */

}

/**
 * sub_0011B0D0
 * Original: 0x0011B0D0 - 0x0011B0D3 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011B0D0(void)
{

loc_0011B0D0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011B0E0
 * Original: 0x0011B0E0 - 0x0011B0ED (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011B0E0(void)
{

loc_0011B0E0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7D8AC4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011B0F0
 * Original: 0x0011B0F0 - 0x0011B0F9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011B0F0(void)
{

loc_0011B0F0: ;
    eax = ecx;
    MEM32(eax) = 0x7D8AE4;
    esp += 4; return; /* ret */

}

/**
 * sub_0011B100
 * Original: 0x0011B100 - 0x0011B103 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011B100(void)
{

loc_0011B100: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011B110
 * Original: 0x0011B110 - 0x0011B11D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011B110(void)
{

loc_0011B110: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7D8AF4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011B120
 * Original: 0x0011B120 - 0x0011B156 (54 bytes, 11 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011B120(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011B120: ;
    eax = MEM32(esp + 8);
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0x30);
    eax = MEM32(ecx * 4 + 0x8F0040);
    edx = (uint32_t)(int32_t)SMEM8(eax + 0xD4);
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0xB8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + edx * 4 + 0xB8), 1 (32-bit) */
    eax = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_0011B14F; /* je: equal / zero */

loc_0011B14C: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_0011B14F: ;
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0011B170
 * Original: 0x0011B170 - 0x0011B18A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0011B170(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011B170: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0011B179u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0011B179: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011B187; /* je: equal / zero */

loc_0011B180: ;
    MEM32(eax) = 0x7D7EFC;
    esp += 4; return; /* ret */

loc_0011B187: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011B190
 * Original: 0x0011B190 - 0x0011B1C6 (54 bytes, 11 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011B190(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011B190: ;
    eax = MEM32(esp + 8);
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0x30);
    eax = MEM32(ecx * 4 + 0x8F0040);
    edx = (uint32_t)(int32_t)SMEM8(eax + 0xD4);
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0xB8)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + edx * 4 + 0xB8), 3 (32-bit) */
    eax = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_0011B1BF; /* je: equal / zero */

loc_0011B1BC: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_0011B1BF: ;
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0011B1E0
 * Original: 0x0011B1E0 - 0x0011B1FA (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0011B1E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011B1E0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0011B1E9u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0011B1E9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011B1F7; /* je: equal / zero */

loc_0011B1F0: ;
    MEM32(eax) = 0x7D7F30;
    esp += 4; return; /* ret */

loc_0011B1F7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011B200
 * Original: 0x0011B200 - 0x0011B236 (54 bytes, 11 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011B200(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011B200: ;
    eax = MEM32(esp + 8);
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0x30);
    eax = MEM32(ecx * 4 + 0x8F0040);
    edx = (uint32_t)(int32_t)SMEM8(eax + 0xD4);
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0xB8)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + edx * 4 + 0xB8), 2 (32-bit) */
    eax = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_0011B22F; /* je: equal / zero */

loc_0011B22C: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_0011B22F: ;
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0011B250
 * Original: 0x0011B250 - 0x0011B26A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0011B250(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011B250: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0011B259u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0011B259: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011B267; /* je: equal / zero */

loc_0011B260: ;
    MEM32(eax) = 0x7D7F60;
    esp += 4; return; /* ret */

loc_0011B267: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011B270
 * Original: 0x0011B270 - 0x0011B2A0 (48 bytes, 11 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011B270(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011B270: ;
    eax = MEM32(esp + 8);
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0x30);
    edx = MEM32(ecx * 4 + 0x8F0040);
    eax = MEM32(edx + 0xCC);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    eax = MEM32(esp + 4);
    if (CMP_EQ(_fa, _fb)) goto loc_0011B299; /* je: equal / zero */

loc_0011B296: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_0011B299: ;
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0011B2B0
 * Original: 0x0011B2B0 - 0x0011B2CA (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0011B2B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011B2B0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0011B2B9u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0011B2B9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011B2C7; /* je: equal / zero */

loc_0011B2C0: ;
    MEM32(eax) = 0x7D7F98;
    esp += 4; return; /* ret */

loc_0011B2C7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011B2D0
 * Original: 0x0011B2D0 - 0x0011B300 (48 bytes, 11 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011B2D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011B2D0: ;
    eax = MEM32(esp + 8);
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0x30);
    edx = MEM32(ecx * 4 + 0x8F0040);
    eax = MEM32(edx + 0xCC);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    eax = MEM32(esp + 4);
    if (CMP_EQ(_fa, _fb)) goto loc_0011B2F9; /* je: equal / zero */

loc_0011B2F6: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_0011B2F9: ;
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0011B310
 * Original: 0x0011B310 - 0x0011B32A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0011B310(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011B310: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0011B319u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0011B319: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011B327; /* je: equal / zero */

loc_0011B320: ;
    MEM32(eax) = 0x7D7FD0;
    esp += 4; return; /* ret */

loc_0011B327: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011B330
 * Original: 0x0011B330 - 0x0011B360 (48 bytes, 11 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011B330(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011B330: ;
    eax = MEM32(esp + 8);
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0x30);
    edx = MEM32(ecx * 4 + 0x8F0040);
    eax = MEM32(edx + 0xCC);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    eax = MEM32(esp + 4);
    if (CMP_EQ(_fa, _fb)) goto loc_0011B359; /* je: equal / zero */

loc_0011B356: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_0011B359: ;
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0011B370
 * Original: 0x0011B370 - 0x0011B38A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0011B370(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011B370: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0011B379u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0011B379: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011B387; /* je: equal / zero */

loc_0011B380: ;
    MEM32(eax) = 0x7D8008;
    esp += 4; return; /* ret */

loc_0011B387: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011B390
 * Original: 0x0011B390 - 0x0011B3AA (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0011B390(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011B390: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0011B399u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0011B399: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011B3A7; /* je: equal / zero */

loc_0011B3A0: ;
    MEM32(eax) = 0x7D8038;
    esp += 4; return; /* ret */

loc_0011B3A7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011B3B0
 * Original: 0x0011B3B0 - 0x0011B3CA (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0011B3B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011B3B0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0011B3B9u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0011B3B9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011B3C7; /* je: equal / zero */

loc_0011B3C0: ;
    MEM32(eax) = 0x7D8058;
    esp += 4; return; /* ret */

loc_0011B3C7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011B3D0
 * Original: 0x0011B3D0 - 0x0011B446 (118 bytes, 37 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011B3D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011B3D0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x30);
    ecx = MEM32(eax * 4 + 0x8F00F8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x4C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ecx + 0x4C) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011B437; /* jne: not equal / not zero */

loc_0011B3E5: ;
    eax = MEM32(0x8EACE0);
    SET_LO8(ecx, MEM8(eax + 4));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011B423; /* je: equal / zero */

loc_0011B3F1: ;
    eax = MEM32(eax + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011B423; /* je: equal / zero */

loc_0011B3F8: ;
    edx = MEM32(eax + 0x1D4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0011B404u); RECOMP_ABI_CALL(0x0001D030u, sub_0001D030); /* call 0x0001D030 */

loc_0011B404: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011B423; /* je: equal / zero */

loc_0011B40B: ;
    eax = MEM32(esi + 0xF0);
    eax = MEM32(eax + 0x4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0011B423; /* jl: less (signed <) */

loc_0011B419: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0011B437; /* jle: less or equal (signed <=) */

loc_0011B41E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011B437; /* je: equal / zero */

loc_0011B423: ;
    eax = MEM32(esp + 8);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0011B437: ;
    eax = MEM32(esp + 8);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0011B470
 * Original: 0x0011B470 - 0x0011B48A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0011B470(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011B470: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0011B479u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0011B479: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011B487; /* je: equal / zero */

loc_0011B480: ;
    MEM32(eax) = 0x7D8084;
    esp += 4; return; /* ret */

loc_0011B487: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011B490
 * Original: 0x0011B490 - 0x0011B4AA (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0011B490(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011B490: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0011B499u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0011B499: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011B4A7; /* je: equal / zero */

loc_0011B4A0: ;
    MEM32(eax) = 0x7D80BC;
    esp += 4; return; /* ret */

loc_0011B4A7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011B4B0
 * Original: 0x0011B4B0 - 0x0011B4CA (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0011B4B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011B4B0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0011B4B9u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0011B4B9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011B4C7; /* je: equal / zero */

loc_0011B4C0: ;
    MEM32(eax) = 0x7D80E8;
    esp += 4; return; /* ret */

loc_0011B4C7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011B4D0
 * Original: 0x0011B4D0 - 0x0011B4EA (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0011B4D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011B4D0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0011B4D9u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0011B4D9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011B4E7; /* je: equal / zero */

loc_0011B4E0: ;
    MEM32(eax) = 0x7D8114;
    esp += 4; return; /* ret */

loc_0011B4E7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011B4F0
 * Original: 0x0011B4F0 - 0x0011B50A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0011B4F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011B4F0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0011B4F9u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0011B4F9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011B507; /* je: equal / zero */

loc_0011B500: ;
    MEM32(eax) = 0x7D8140;
    esp += 4; return; /* ret */

loc_0011B507: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011B510
 * Original: 0x0011B510 - 0x0011B540 (48 bytes, 11 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011B510(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011B510: ;
    eax = MEM32(esp + 8);
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0x30);
    edx = MEM32(ecx * 4 + 0x8F0040);
    eax = MEM32(edx + 0x14C);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    eax = MEM32(esp + 4);
    if (CMP_EQ(_fa, _fb)) goto loc_0011B539; /* je: equal / zero */

loc_0011B536: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_0011B539: ;
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0011B550
 * Original: 0x0011B550 - 0x0011B56A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0011B550(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011B550: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0011B559u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0011B559: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011B567; /* je: equal / zero */

loc_0011B560: ;
    MEM32(eax) = 0x7D816C;
    esp += 4; return; /* ret */

loc_0011B567: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011B570
 * Original: 0x0011B570 - 0x0011B58A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0011B570(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011B570: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0011B579u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0011B579: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011B587; /* je: equal / zero */

loc_0011B580: ;
    MEM32(eax) = 0x7D8194;
    esp += 4; return; /* ret */

loc_0011B587: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011B590
 * Original: 0x0011B590 - 0x0011B60D (125 bytes, 36 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011B590(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011B590: ;
    eax = MEM32(esp + 8);
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0x30);
    edx = MEM32(ecx * 4 + 0x8F00F8);
    _fa = (uint32_t)(MEM8(edx + 0x52)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx + 0x52), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0011B5FF; /* je: equal / zero */

loc_0011B5A5: ;
    eax = MEM32(0x8E8F84);
    ecx = MEM32(eax + 0xA8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0011B5EC; /* jge: greater or equal (signed >=) */

loc_0011B5B4: ;
    eax = MEM32(0x8EACE0);
    SET_LO8(ecx, MEM8(eax + 4));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011B5DA; /* je: equal / zero */

loc_0011B5C0: ;
    eax = MEM32(eax + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011B5DA; /* je: equal / zero */

loc_0011B5C7: ;
    ecx = MEM32(eax + 0x1D4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0011B5D3u); RECOMP_ABI_CALL(0x0001D030u, sub_0001D030); /* call 0x0001D030 */

loc_0011B5D3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011B5EC; /* jne: not equal / not zero */

loc_0011B5DA: ;
    eax = MEM32(0x8EACE4);
    SET_LO8(ecx, MEM8(eax + 4));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011B5FF; /* je: equal / zero */

loc_0011B5E6: ;
    _fa = (uint32_t)(MEM32(eax + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x24), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011B5FF; /* jne: not equal / not zero */

loc_0011B5EC: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

loc_0011B5FF: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0011B630
 * Original: 0x0011B630 - 0x0011B64A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0011B630(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011B630: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0011B639u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0011B639: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011B647; /* je: equal / zero */

loc_0011B640: ;
    MEM32(eax) = 0x7D81BC;
    esp += 4; return; /* ret */

loc_0011B647: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011B650
 * Original: 0x0011B650 - 0x0011B6AF (95 bytes, 28 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011B650(void)
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

loc_0011B650: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x30);
    eax = MEM32(eax * 4 + 0x8F00F8);
    PUSH32(esp, 0);
    ecx = eax + 0x34;
    PUSH32(esp, 0x0011B66Au); RECOMP_ABI_CALL(0x0002A76Cu, sub_0002A76C); /* call 0x0002A76C */

loc_0011B66A: ;
    SET_LO8(edx, MEM8(esi + 0x39));
    SET_LO8(ecx, MEM8(eax + 0x39));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(edx) (8-bit) */
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0011B682; /* jne: not equal / not zero */

loc_0011B675: ;
    PUSH32(esp, 0);
    ecx = eax + 0x218;
    PUSH32(esp, 0x0011B682u); RECOMP_ABI_CALL(0x0002A76Cu, sub_0002A76C); /* call 0x0002A76C */

loc_0011B682: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011B6A1; /* je: equal / zero */

loc_0011B686: ;
    ecx = eax;
    PUSH32(esp, 0x0011B68Du); RECOMP_ABI_CALL(0x0002152Cu, sub_0002152C); /* call 0x0002152C */

loc_0011B68D: ;
    fp_push(MEMF(0x7AA7D8)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp == 1) /* fcompi */) goto loc_0011B6A4; /* ja: above (unsigned >) */

loc_0011B6A1: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_0011B6A4: ;
    eax = MEM32(esp + 4);
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0011B6D0
 * Original: 0x0011B6D0 - 0x0011B6EA (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0011B6D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011B6D0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0011B6D9u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0011B6D9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011B6E7; /* je: equal / zero */

loc_0011B6E0: ;
    MEM32(eax) = 0x7D81EC;
    esp += 4; return; /* ret */

loc_0011B6E7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011B6F0
 * Original: 0x0011B6F0 - 0x0011B73B (75 bytes, 22 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011B6F0(void)
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

loc_0011B6F0: ;
    eax = MEM32(esp + 8);
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0x30);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = 0x8F00FC;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(edx);
    PUSH32(esp, 0);
    ecx = eax + 0x34;
    PUSH32(esp, 0x0011B70Eu); RECOMP_ABI_CALL(0x0002A76Cu, sub_0002A76C); /* call 0x0002A76C */

loc_0011B70E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011B72D; /* je: equal / zero */

loc_0011B712: ;
    ecx = eax;
    PUSH32(esp, 0x0011B719u); RECOMP_ABI_CALL(0x0002152Cu, sub_0002152C); /* call 0x0002152C */

loc_0011B719: ;
    fp_push(MEMF(0x7AA7D8)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp == 1) /* fcompi */) goto loc_0011B730; /* ja: above (unsigned >) */

loc_0011B72D: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_0011B730: ;
    eax = MEM32(esp + 4);
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0011B750
 * Original: 0x0011B750 - 0x0011B76A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0011B750(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011B750: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0011B759u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0011B759: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011B767; /* je: equal / zero */

loc_0011B760: ;
    MEM32(eax) = 0x7D8218;
    esp += 4; return; /* ret */

loc_0011B767: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011B770
 * Original: 0x0011B770 - 0x0011B7BC (76 bytes, 22 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011B770(void)
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

loc_0011B770: ;
    eax = MEM32(esp + 8);
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0x30);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = 0x8F00FC;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(edx);
    PUSH32(esp, 0);
    ecx = eax + 0x34;
    PUSH32(esp, 0x0011B78Eu); RECOMP_ABI_CALL(0x0002A76Cu, sub_0002A76C); /* call 0x0002A76C */

loc_0011B78E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011B7AE; /* je: equal / zero */

loc_0011B792: ;
    ecx = eax;
    PUSH32(esp, 0x0011B799u); RECOMP_ABI_CALL(0x0002152Cu, sub_0002152C); /* call 0x0002152C */

loc_0011B799: ;
    fp_pop(); /* fstp st(0) */
    eax = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

loc_0011B7AE: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0011B7D0
 * Original: 0x0011B7D0 - 0x0011B7EA (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0011B7D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011B7D0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0011B7D9u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0011B7D9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011B7E7; /* je: equal / zero */

loc_0011B7E0: ;
    MEM32(eax) = 0x7D8244;
    esp += 4; return; /* ret */

loc_0011B7E7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011B7F0
 * Original: 0x0011B7F0 - 0x0011B80A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0011B7F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011B7F0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0011B7F9u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0011B7F9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011B807; /* je: equal / zero */

loc_0011B800: ;
    MEM32(eax) = 0x7D8268;
    esp += 4; return; /* ret */

loc_0011B807: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011B810
 * Original: 0x0011B810 - 0x0011B82A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0011B810(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011B810: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0011B819u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0011B819: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011B827; /* je: equal / zero */

loc_0011B820: ;
    MEM32(eax) = 0x7D828C;
    esp += 4; return; /* ret */

loc_0011B827: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011B830
 * Original: 0x0011B830 - 0x0011B84A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0011B830(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011B830: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0011B839u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0011B839: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011B847; /* je: equal / zero */

loc_0011B840: ;
    MEM32(eax) = 0x7D82AC;
    esp += 4; return; /* ret */

loc_0011B847: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011B850
 * Original: 0x0011B850 - 0x0011B86A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0011B850(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011B850: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0011B859u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0011B859: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011B867; /* je: equal / zero */

loc_0011B860: ;
    MEM32(eax) = 0x7D82CC;
    esp += 4; return; /* ret */

loc_0011B867: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011B870
 * Original: 0x0011B870 - 0x0011B88A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0011B870(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011B870: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0011B879u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0011B879: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011B887; /* je: equal / zero */

loc_0011B880: ;
    MEM32(eax) = 0x7D82F8;
    esp += 4; return; /* ret */

loc_0011B887: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011B890
 * Original: 0x0011B890 - 0x0011B8AA (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0011B890(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011B890: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0011B899u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0011B899: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011B8A7; /* je: equal / zero */

loc_0011B8A0: ;
    MEM32(eax) = 0x7D8328;
    esp += 4; return; /* ret */

loc_0011B8A7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011B8B0
 * Original: 0x0011B8B0 - 0x0011B8CA (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0011B8B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011B8B0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0011B8B9u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0011B8B9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011B8C7; /* je: equal / zero */

loc_0011B8C0: ;
    MEM32(eax) = 0x7D8348;
    esp += 4; return; /* ret */

loc_0011B8C7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011B8D0
 * Original: 0x0011B8D0 - 0x0011B906 (54 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011B8D0(void)
{

loc_0011B8D0: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = esp + 8;
    MEM32(esp + 8) = 0x7D6598;
    PUSH32(esp, 0x0011B8ECu); RECOMP_ABI_CALL(0x0003649Fu, sub_0003649F); /* call 0x0003649F */

loc_0011B8EC: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    eax = MEM32(esp + 8);
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0xC); /* subss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0011B920
 * Original: 0x0011B920 - 0x0011B93A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0011B920(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011B920: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0011B929u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0011B929: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011B937; /* je: equal / zero */

loc_0011B930: ;
    MEM32(eax) = 0x7D8384;
    esp += 4; return; /* ret */

loc_0011B937: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011B940
 * Original: 0x0011B940 - 0x0011B95A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0011B940(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011B940: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0011B949u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0011B949: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011B957; /* je: equal / zero */

loc_0011B950: ;
    MEM32(eax) = 0x7D83AC;
    esp += 4; return; /* ret */

loc_0011B957: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011B960
 * Original: 0x0011B960 - 0x0011B97A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0011B960(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011B960: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0011B969u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0011B969: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011B977; /* je: equal / zero */

loc_0011B970: ;
    MEM32(eax) = 0x7D83CC;
    esp += 4; return; /* ret */

loc_0011B977: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011B980
 * Original: 0x0011B980 - 0x0011B9D9 (89 bytes, 22 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011B980(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0011B980: ;
    edx = MEM32(esp + 8);
    eax = (uint32_t)(int32_t)SMEM8(edx + 0x30);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = MEM32(eax + 0x8F00F8);
    ecx = MEM32(ecx + 0x6C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = MEM32(eax + 0x8F0040);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x134)); /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_0011B9CB; /* je: equal / zero */

loc_0011B9A6: ;
    ecx = MEM32(ecx + 0x20);
    edx = MEM32(edx + 0x20);
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x30)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(edx + 0x30)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    if ((_fca > _fcb)) goto loc_0011B9CE; /* ja: above (unsigned >) (xmm2.f[0] vs xmm1.f[0]) */

loc_0011B9CB: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_0011B9CE: ;
    eax = MEM32(esp + 4);
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0011B9F0
 * Original: 0x0011B9F0 - 0x0011BA0A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0011B9F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011B9F0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0011B9F9u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0011B9F9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011BA07; /* je: equal / zero */

loc_0011BA00: ;
    MEM32(eax) = 0x7D83F8;
    esp += 4; return; /* ret */

loc_0011BA07: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011BA10
 * Original: 0x0011BA10 - 0x0011BA70 (96 bytes, 24 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011BA10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0011BA10: ;
    edx = MEM32(esp + 8);
    eax = (uint32_t)(int32_t)SMEM8(edx + 0x30);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = MEM32(eax + 0x8F00F8);
    ecx = MEM32(ecx + 0x6C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = MEM32(eax + 0x8F0040);
    xmm1 = XMM_SCALAR(MEMF(eax + 0x134)); /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_0011BA5E; /* je: equal / zero */

loc_0011BA3E: ;
    ecx = MEM32(ecx + 0x20);
    edx = MEM32(edx + 0x20);
    xmm2 = XMM_SCALAR(MEMF(ecx + 0x30)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(edx + 0x30)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    _fca = xmm3.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm1 = xmm0; /* movaps */
    if ((_fca > _fcb)) goto loc_0011BA61; /* ja: above (unsigned >) (xmm3.f[0] vs xmm2.f[0]) */

loc_0011BA5E: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */

loc_0011BA61: ;
    eax = MEM32(esp + 4);
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0011BA90
 * Original: 0x0011BA90 - 0x0011BAAA (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0011BA90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011BA90: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0011BA99u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0011BA99: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011BAA7; /* je: equal / zero */

loc_0011BAA0: ;
    MEM32(eax) = 0x7D8424;
    esp += 4; return; /* ret */

loc_0011BAA7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011BAB0
 * Original: 0x0011BAB0 - 0x0011BB09 (89 bytes, 22 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011BAB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0011BAB0: ;
    edx = MEM32(esp + 8);
    eax = (uint32_t)(int32_t)SMEM8(edx + 0x30);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = MEM32(eax + 0x8F00F8);
    ecx = MEM32(ecx + 0x60);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = MEM32(eax + 0x8F0040);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x134)); /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_0011BAFB; /* je: equal / zero */

loc_0011BAD6: ;
    ecx = MEM32(ecx + 0x20);
    edx = MEM32(edx + 0x20);
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x30)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(edx + 0x30)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    if ((_fca > _fcb)) goto loc_0011BAFE; /* ja: above (unsigned >) (xmm2.f[0] vs xmm1.f[0]) */

loc_0011BAFB: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_0011BAFE: ;
    eax = MEM32(esp + 4);
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0011BB20
 * Original: 0x0011BB20 - 0x0011BB3A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0011BB20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011BB20: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0011BB29u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0011BB29: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011BB37; /* je: equal / zero */

loc_0011BB30: ;
    MEM32(eax) = 0x7D8458;
    esp += 4; return; /* ret */

loc_0011BB37: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011BB40
 * Original: 0x0011BB40 - 0x0011BBA0 (96 bytes, 24 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011BB40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0011BB40: ;
    edx = MEM32(esp + 8);
    eax = (uint32_t)(int32_t)SMEM8(edx + 0x30);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = MEM32(eax + 0x8F00F8);
    ecx = MEM32(ecx + 0x60);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = MEM32(eax + 0x8F0040);
    xmm1 = XMM_SCALAR(MEMF(eax + 0x134)); /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_0011BB8E; /* je: equal / zero */

loc_0011BB6E: ;
    ecx = MEM32(ecx + 0x20);
    edx = MEM32(edx + 0x20);
    xmm2 = XMM_SCALAR(MEMF(ecx + 0x30)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(edx + 0x30)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    _fca = xmm3.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm1 = xmm0; /* movaps */
    if ((_fca > _fcb)) goto loc_0011BB91; /* ja: above (unsigned >) (xmm3.f[0] vs xmm2.f[0]) */

loc_0011BB8E: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */

loc_0011BB91: ;
    eax = MEM32(esp + 4);
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0011BBC0
 * Original: 0x0011BBC0 - 0x0011BBDA (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0011BBC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011BBC0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0011BBC9u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0011BBC9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011BBD7; /* je: equal / zero */

loc_0011BBD0: ;
    MEM32(eax) = 0x7D8488;
    esp += 4; return; /* ret */

loc_0011BBD7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011BBE0
 * Original: 0x0011BBE0 - 0x0011BBFA (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0011BBE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011BBE0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0011BBE9u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0011BBE9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011BBF7; /* je: equal / zero */

loc_0011BBF0: ;
    MEM32(eax) = 0x7D84B4;
    esp += 4; return; /* ret */

loc_0011BBF7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011BC00
 * Original: 0x0011BC00 - 0x0011BC1A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0011BC00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011BC00: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0011BC09u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0011BC09: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011BC17; /* je: equal / zero */

loc_0011BC10: ;
    MEM32(eax) = 0x7D84D8;
    esp += 4; return; /* ret */

loc_0011BC17: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011BC20
 * Original: 0x0011BC20 - 0x0011BC3A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0011BC20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011BC20: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0011BC29u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0011BC29: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011BC37; /* je: equal / zero */

loc_0011BC30: ;
    MEM32(eax) = 0x7D8500;
    esp += 4; return; /* ret */

loc_0011BC37: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011BC40
 * Original: 0x0011BC40 - 0x0011BC5A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0011BC40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011BC40: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0011BC49u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0011BC49: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011BC57; /* je: equal / zero */

loc_0011BC50: ;
    MEM32(eax) = 0x7D8528;
    esp += 4; return; /* ret */

loc_0011BC57: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011BC60
 * Original: 0x0011BC60 - 0x0011BC7A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0011BC60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011BC60: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0011BC69u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0011BC69: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011BC77; /* je: equal / zero */

loc_0011BC70: ;
    MEM32(eax) = 0x7D8554;
    esp += 4; return; /* ret */

loc_0011BC77: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011BC80
 * Original: 0x0011BC80 - 0x0011BC9A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0011BC80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011BC80: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0011BC89u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0011BC89: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011BC97; /* je: equal / zero */

loc_0011BC90: ;
    MEM32(eax) = 0x7D857C;
    esp += 4; return; /* ret */

loc_0011BC97: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011BCA0
 * Original: 0x0011BCA0 - 0x0011BCBA (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0011BCA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011BCA0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0011BCA9u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0011BCA9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011BCB7; /* je: equal / zero */

loc_0011BCB0: ;
    MEM32(eax) = 0x7D85A4;
    esp += 4; return; /* ret */

loc_0011BCB7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011BCC0
 * Original: 0x0011BCC0 - 0x0011BCDA (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0011BCC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011BCC0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0011BCC9u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0011BCC9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011BCD7; /* je: equal / zero */

loc_0011BCD0: ;
    MEM32(eax) = 0x7D85D4;
    esp += 4; return; /* ret */

loc_0011BCD7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011BCE0
 * Original: 0x0011BCE0 - 0x0011BCFA (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0011BCE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011BCE0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0011BCE9u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0011BCE9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011BCF7; /* je: equal / zero */

loc_0011BCF0: ;
    MEM32(eax) = 0x7D8600;
    esp += 4; return; /* ret */

loc_0011BCF7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011BD00
 * Original: 0x0011BD00 - 0x0011BD35 (53 bytes, 13 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011BD00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011BD00: ;
    eax = MEM32(0x8E8F84);
    eax = MEM32(eax + 0xA8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0011BD27; /* jl: less (signed <) */

loc_0011BD0F: ;
    ecx = MEM32(eax * 4 + 0x8E8FA8);
    edx = MEM32(ecx + 0x4C);
    _fa = (uint32_t)(MEM32(edx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 8), 0x5A (32-bit) */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    if (CMP_G(_fas, _fbs)) goto loc_0011BD2A; /* jg: greater (signed >) */

loc_0011BD27: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_0011BD2A: ;
    eax = MEM32(esp + 4);
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0011BD50
 * Original: 0x0011BD50 - 0x0011BD6A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0011BD50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011BD50: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0011BD59u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0011BD59: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011BD67; /* je: equal / zero */

loc_0011BD60: ;
    MEM32(eax) = 0x7D8640;
    esp += 4; return; /* ret */

loc_0011BD67: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011BD70
 * Original: 0x0011BD70 - 0x0011BDFE (142 bytes, 43 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011BD70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011BD70: ;
    eax = MEM32(esp + 8);
    edx = (uint32_t)(int32_t)SMEM8(eax + 0x30);
    ecx = MEM32(edx * 4 + 0x8F0040);
    eax = MEM32(ecx + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = (uint32_t)(int32_t)SMEM16(eax + 4);
    eax = (uint32_t)(int32_t)SMEM16(eax + 2);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM16(0x896166)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x896166), 2 (16-bit) */
    esi = 5;
    if (CMP_L(_fas, _fbs)) goto loc_0011BDB2; /* jl: less (signed <) */

loc_0011BD9D: ;
    _fa = (uint32_t)(MEM16(0x896160)) & 0xFFFFu; _fb = (uint32_t)(0xB4) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x896160), 0xB4 (16-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0011BDB2; /* jge: greater or equal (signed >=) */

loc_0011BDA8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0011BDB0; /* jge: greater or equal (signed >=) */

loc_0011BDAC: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0011BDD3;

loc_0011BDB0: ;
    if (CMP_G(_fas, _fbs)) goto loc_0011BDCE; /* jg: greater (signed >) */

loc_0011BDB2: ;
    eax = MEM32(ecx);
    edi = (uint32_t)(int32_t)SMEM8(eax + 0xD2);
    eax = (uint32_t)(int32_t)SMEM8(ecx + 0xD2);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0011BDCC; /* jle: less or equal (signed <=) */

loc_0011BDC8: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0011BDD3;

loc_0011BDCC: ;
    if (CMP_GE(_fas, _fbs)) goto loc_0011BDD3; /* jge: greater or equal (signed >=) */

loc_0011BDCE: ;
    esi = 0xA;

loc_0011BDD3: ;
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, 5);
    ecx = 0x8E9CF0;
    PUSH32(esp, 0x0011BDE2u); RECOMP_ABI_CALL(0x0002E515u, sub_0002E515); /* call 0x0002E515 */

loc_0011BDE2: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    eax = MEM32(esp + 0xC);
    POP32(esp, edi);
    POP32(esp, esi);
    if (CMP_GE(_fas, _fbs)) goto loc_0011BDF7; /* jge: greater or equal (signed >=) */

loc_0011BDF4: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_0011BDF7: ;
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0011BE30
 * Original: 0x0011BE30 - 0x0011BE4A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0011BE30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011BE30: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0011BE39u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0011BE39: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011BE47; /* je: equal / zero */

loc_0011BE40: ;
    MEM32(eax) = 0x7D8680;
    esp += 4; return; /* ret */

loc_0011BE47: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011BE50
 * Original: 0x0011BE50 - 0x0011BE74 (36 bytes, 9 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011BE50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011BE50: ;
    eax = MEM32(esp + 8);
    SET_LO8(ecx, MEM8(eax + 0x1DC));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    eax = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    if (CMP_GE(_fas, _fbs)) goto loc_0011BE6D; /* jge: greater or equal (signed >=) */

loc_0011BE6A: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_0011BE6D: ;
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0011BE80
 * Original: 0x0011BE80 - 0x0011BE9A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0011BE80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011BE80: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0011BE89u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0011BE89: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011BE97; /* je: equal / zero */

loc_0011BE90: ;
    MEM32(eax) = 0x7D869C;
    esp += 4; return; /* ret */

loc_0011BE97: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011BEA0
 * Original: 0x0011BEA0 - 0x0011BF29 (137 bytes, 40 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011BEA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    int _cf = 0; /* carry flag */

loc_0011BEA0: ;
    eax = MEM32(0x8E8F84);
    eax = MEM32(eax + 0xA8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, esi);
    if (CMP_L(_fas, _fbs)) goto loc_0011BF1A; /* jl: less (signed <) */

loc_0011BEB0: ;
    esi = MEM32(eax * 4 + 0x8E9058);
    ecx = MEM32(esi + 0x20);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AA840); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011BF1A; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7AA840)) */

loc_0011BEC8: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x0011BECFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0011BECCu); } /* indirect call */
    }

loc_0011BECF: ;
    eax = MEM32(eax + 0x20);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    xmm3 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm0 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */
    xmm1 = xmm3; /* movaps */
    if ((_fca >= _fcb)) goto loc_0011BEF5; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm2.f[0]) */

loc_0011BEF2: ;
    xmm1 = xmm0; /* movaps */

loc_0011BEF5: ;
    ecx = MEM32(esi + 0x20);
    xmm4 = XMM_SCALAR(MEMF(ecx + 0x50)); /* movss */
    _fca = xmm4.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011BF05; /* jb: below (unsigned <) (xmm4.f[0] vs xmm2.f[0]) */

loc_0011BF02: ;
    xmm0 = xmm3; /* movaps */

loc_0011BF05: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0011BF1A; /* jp: parity */

loc_0011BF0E: ;
    eax = MEM32(esp + 8);
    MEMF(eax) = xmm3.f[0]; /* movss */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0011BF1A: ;
    eax = MEM32(esp + 8);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0011BF50
 * Original: 0x0011BF50 - 0x0011BF6A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0011BF50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011BF50: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0011BF59u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0011BF59: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011BF67; /* je: equal / zero */

loc_0011BF60: ;
    MEM32(eax) = 0x7D86C8;
    esp += 4; return; /* ret */

loc_0011BF67: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011BF70
 * Original: 0x0011BF70 - 0x0011BF8A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0011BF70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011BF70: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0011BF79u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0011BF79: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011BF87; /* je: equal / zero */

loc_0011BF80: ;
    MEM32(eax) = 0x7D86F4;
    esp += 4; return; /* ret */

loc_0011BF87: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011BF90
 * Original: 0x0011BF90 - 0x0011C096 (262 bytes, 81 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011BF90(void)
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

loc_0011BF90: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    eax = (uint32_t)(int32_t)SMEM8(edi + 0x30);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = 0x8F00FC;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ecx);
    PUSH32(esp, 0);
    ecx = eax + 0x1C;
    PUSH32(esp, 0x0011BFB1u); RECOMP_ABI_CALL(0x0002A76Cu, sub_0002A76C); /* call 0x0002A76C */

loc_0011BFB1: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011C085; /* je: equal / zero */

loc_0011BFBB: ;
    goto loc_0011BFC0;

    /* nop */

loc_0011BFC0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0011BFC7u); RECOMP_ABI_CALL(0x0001BF82u, sub_0001BF82); /* call 0x0001BF82 */

loc_0011BFC7: ;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(0x7B1DA0)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 8); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011C055; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esp + 8)) */

loc_0011BFE7: ;
    ecx = MEM32(esi + 0x20);
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x30)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011BFFC; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0011BFF7: ;
    xmm2 = xmm1; /* movaps */
    goto loc_0011C004;

loc_0011BFFC: ;
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] - MEMF(ecx + 0x30); /* subss */

loc_0011C004: ;
    eax = MEM32(edi + 0x20);
    xmm1 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011C013; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0011C011: ;
    goto loc_0011C01B;

loc_0011C013: ;
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 0x30); /* subss */

loc_0011C01B: ;
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011C055; /* jb: below (unsigned <) (xmm1.f[0] vs xmm2.f[0]) */

loc_0011C020: ;
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x38)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011C02C; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0011C02A: ;
    goto loc_0011C034;

loc_0011C02C: ;
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(ecx + 0x38); /* subss */

loc_0011C034: ;
    xmm2 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011C043; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_0011C03E: ;
    xmm0 = xmm2; /* movaps */
    goto loc_0011C048;

loc_0011C043: ;
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x38); /* subss */

loc_0011C048: ;
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7B04A0); /* addss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca >= _fcb)) goto loc_0011C06F; /* jae: above or equal (unsigned >=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0011C055: ;
    edx = (uint32_t)(int32_t)SMEM8(esi + 0x30);
    ecx = MEM32(edx * 4 + 0x8F00F8);
    PUSH32(esp, 1);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0011C06Au); RECOMP_ABI_CALL(0x0002A76Cu, sub_0002A76C); /* call 0x0002A76C */

loc_0011C06A: ;
    goto loc_0011BFC0;

loc_0011C06F: ;
    eax = MEM32(esp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    POP32(esp, edi);
    MEMF(eax) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_0011C085: ;
    eax = MEM32(esp + 0x10);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    POP32(esp, edi);
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
 * sub_0011C0E0
 * Original: 0x0011C0E0 - 0x0011C0FA (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0011C0E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011C0E0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0011C0E9u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0011C0E9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011C0F7; /* je: equal / zero */

loc_0011C0F0: ;
    MEM32(eax) = 0x7D8714;
    esp += 4; return; /* ret */

loc_0011C0F7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011C100
 * Original: 0x0011C100 - 0x0011C1AA (170 bytes, 48 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011C100(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0011C100: ;
    eax = MEM32(esp + 8);
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0x30);
    edx = MEM32(ecx * 4 + 0x8F00F8);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(edx + 0x58);
    SET_LO8(eax, MEM8(esi + 0x1DC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0011C16D; /* jl: less (signed <) */

loc_0011C120: ;
    PUSH32(esp, 0x41200000);
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0011C131u); RECOMP_ABI_CALL(0x000274C7u, sub_000274C7); /* call 0x000274C7 */

loc_0011C131: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AA840); /* comiss */
    PUSH32(esp, 0x41200000);
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011C157; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7AA840)) */

loc_0011C144: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0011C150u); RECOMP_ABI_CALL(0x000274C7u, sub_000274C7); /* call 0x000274C7 */

loc_0011C150: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    goto loc_0011C187;

loc_0011C157: ;
    edx = esp + 0x20;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0011C163u); RECOMP_ABI_CALL(0x000274C7u, sub_000274C7); /* call 0x000274C7 */

loc_0011C163: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 8); /* subss */
    goto loc_0011C187;

loc_0011C16D: ;
    esi = MEM32(esi + 0x20);
    xmm1 = XMM_SCALAR(MEMF(esi + 0x38)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011C182; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0011C17D: ;
    xmm0 = xmm1; /* movaps */
    goto loc_0011C187;

loc_0011C182: ;
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x38); /* subss */

loc_0011C187: ;
    _fca = xmm0.f[0]; _fcb = MEMF(0x7D7A60); /* comiss */
    eax = MEM32(esp + 0x2C);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    POP32(esp, esi);
    if ((_fca > _fcb)) goto loc_0011C1A0; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(0x7D7A60)) */

loc_0011C19D: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_0011C1A0: ;
    MEMF(eax) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0011C1E0
 * Original: 0x0011C1E0 - 0x0011C1FA (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0011C1E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011C1E0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0011C1E9u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0011C1E9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011C1F7; /* je: equal / zero */

loc_0011C1F0: ;
    MEM32(eax) = 0x7D8748;
    esp += 4; return; /* ret */

loc_0011C1F7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011C200
 * Original: 0x0011C200 - 0x0011C391 (401 bytes, 99 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011C200(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0011C200: ;
    eax = MEM32(esp + 8);
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0x30);
    edx = MEM32(ecx * 4 + 0x8F00F8);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(edx + 0x58);
    SET_LO8(eax, MEM8(esi + 0x1DC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0011C350; /* jl: less (signed <) */

loc_0011C224: ;
    eax = MEM32(esi + 0x20);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x50)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x4C)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x48)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x7AB868)); /* movss */
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    edx = esp + 8;
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    PUSH32(esp, edx);
    ecx = eax + 0x30;
    MEMF(esp + 0x18) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0011C26Eu); RECOMP_ABI_CALL(0x0001A1F5u, sub_0001A1F5); /* call 0x0001A1F5 */

loc_0011C26E: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 8); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011C27E; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esp + 8)) */

loc_0011C278: ;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */

loc_0011C27E: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    xmm2 = XMM_SCALAR(MEMF(0x7AB868)); /* movss */
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = edx;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    MEM32(esp + 0x10) = eax;
    eax = MEM32(esi + 0x20);
    xmm3 = XMM_SCALAR(MEMF(eax + 0x48)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x4C)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x50)); /* movss */
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    edx = esp + 8;
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    ecx = eax + 0x30;
    PUSH32(esp, edx);
    MEMF(esp + 0x18) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011C31B; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0011C2E6: ;
    PUSH32(esp, 0x0011C2EBu); RECOMP_ABI_CALL(0x0001A1F5u, sub_0001A1F5); /* call 0x0001A1F5 */

loc_0011C2EB: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 8); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011C2FB; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esp + 8)) */

loc_0011C2F5: ;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */

loc_0011C2FB: ;
    edx = MEM32(esp + 0xC);
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    MEM32(esp + 0x18) = edx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = ecx;
    goto loc_0011C36A;

loc_0011C31B: ;
    PUSH32(esp, 0x0011C320u); RECOMP_ABI_CALL(0x0001A1F5u, sub_0001A1F5); /* call 0x0001A1F5 */

loc_0011C320: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 8); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011C330; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esp + 8)) */

loc_0011C32A: ;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */

loc_0011C330: ;
    edx = MEM32(esp + 0xC);
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    MEM32(esp + 0x18) = edx;
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x18); /* subss */
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = ecx;
    goto loc_0011C36A;

loc_0011C350: ;
    esi = MEM32(esi + 0x20);
    xmm1 = XMM_SCALAR(MEMF(esi + 0x38)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011C365; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0011C360: ;
    xmm0 = xmm1; /* movaps */
    goto loc_0011C36A;

loc_0011C365: ;
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x38); /* subss */

loc_0011C36A: ;
    xmm1 = XMM_SCALAR(MEMF(0x7D2374)); /* movss */
    eax = MEM32(esp + 0x20);
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    POP32(esp, esi);
    if ((_fca > _fcb)) goto loc_0011C387; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_0011C384: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_0011C387: ;
    MEMF(eax) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0011C400
 * Original: 0x0011C400 - 0x0011C41A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0011C400(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011C400: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0011C409u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0011C409: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011C417; /* je: equal / zero */

loc_0011C410: ;
    MEM32(eax) = 0x7D8780;
    esp += 4; return; /* ret */

loc_0011C417: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011C420
 * Original: 0x0011C420 - 0x0011C606 (486 bytes, 117 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011C420(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0011C420: ;
    eax = MEM32(esp + 8);
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0x30);
    edx = MEM32(ecx * 4 + 0x8F00F8);
    ecx = MEM32(edx + 0x58);
    SET_LO8(eax, MEM8(ecx + 0x1DC));
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0011C5AF; /* jl: less (signed <) */

loc_0011C443: ;
    eax = MEM32(ecx + 0x20);
    xmm0 = XMM_SCALAR(MEMF(0x7AB868)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x48)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x4C)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x50)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    MEMF(esp) = xmm4.f[0]; /* movss */
    xmm4 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm4.f[0]; _fcb = xmm1.f[0]; /* comiss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    MEMF(esp + 8) = xmm2.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011C4A3; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs xmm1.f[0]) */

loc_0011C49D: ;
    MEMF(esp + 4) = xmm4.f[0]; /* movss */

loc_0011C4A3: ;
    eax = MEM32(esp);
    edx = MEM32(esp + 4);
    MEM32(esp + 0xC) = eax;
    eax = MEM32(esp + 8);
    MEM32(esp + 0x14) = eax;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm4.f[0]; /* comiss */
    MEM32(esp + 0x10) = edx;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011C53C; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm4.f[0]) */

loc_0011C4C5: ;
    eax = MEM32(ecx + 0x20);
    xmm1 = XMM_SCALAR(MEMF(eax + 0x48)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x4C)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x50)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    _fca = xmm4.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011C51A; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs xmm0.f[0]) */

loc_0011C514: ;
    MEMF(esp + 4) = xmm4.f[0]; /* movss */

loc_0011C51A: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp);
    edx = MEM32(esp + 4);
    MEM32(esp + 0x14) = eax;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = edx;
    goto loc_0011C5CC;

loc_0011C53C: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x20);
    PUSH32(esp, 0x41200000);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = esi + 0x48;
    PUSH32(esp, 0x0011C552u); RECOMP_ABI_CALL(0x000168D4u, sub_000168D4); /* call 0x000168D4 */

loc_0011C552: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax); /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esi + 0x34); /* addss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x38); /* addss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    POP32(esp, esi);
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011C590; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0011C58A: ;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */

loc_0011C590: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(esp);
    eax = MEM32(esp + 4);
    MEM32(esp + 0x14) = ecx;
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x14); /* subss */
    MEM32(esp + 0xC) = edx;
    MEM32(esp + 0x10) = eax;
    goto loc_0011C5C9;

loc_0011C5AF: ;
    ecx = MEM32(ecx + 0x20);
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x38)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011C5C4; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0011C5BF: ;
    xmm0 = xmm1; /* movaps */
    goto loc_0011C5C9;

loc_0011C5C4: ;
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 0x38); /* subss */

loc_0011C5C9: ;
    xmm4 = XMM_ZERO(); /* xorps self = zero */

loc_0011C5CC: ;
    xmm1 = XMM_SCALAR(MEMF(0x7D7A60)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011C5F8; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_0011C5D9: ;
    _fca = xmm0.f[0]; _fcb = MEMF(0x7D2374); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011C5F8; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(0x7D2374)) */

loc_0011C5E2: ;
    eax = MEM32(esp + 0x1C);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0011C5F8: ;
    eax = MEM32(esp + 0x1C);
    MEMF(eax) = xmm4.f[0]; /* movss */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0011C680
 * Original: 0x0011C680 - 0x0011C69A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0011C680(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011C680: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0011C689u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0011C689: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011C697; /* je: equal / zero */

loc_0011C690: ;
    MEM32(eax) = 0x7D87B8;
    esp += 4; return; /* ret */

loc_0011C697: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011C6A0
 * Original: 0x0011C6A0 - 0x0011C82D (397 bytes, 96 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011C6A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0011C6A0: ;
    eax = MEM32(esp + 8);
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0x30);
    edx = MEM32(ecx * 4 + 0x8F00F8);
    ecx = MEM32(edx + 0x58);
    SET_LO8(eax, MEM8(ecx + 0x1DC));
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0011C7E6; /* jl: less (signed <) */

loc_0011C6C3: ;
    eax = MEM32(ecx + 0x20);
    xmm0 = XMM_SCALAR(MEMF(0x7AB868)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x48)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x50)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x4C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm4.f[0]; /* comiss */
    MEMF(esp + 4) = xmm4.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011C723; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm4.f[0]) */

loc_0011C71D: ;
    MEMF(esp + 4) = xmm1.f[0]; /* movss */

loc_0011C723: ;
    eax = MEM32(esp);
    edx = MEM32(esp + 4);
    MEM32(esp + 0xC) = eax;
    eax = MEM32(esp + 8);
    xmm2 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEM32(esp + 0x14) = eax;
    eax = MEM32(ecx + 0x20);
    xmm4 = XMM_SCALAR(MEMF(eax + 0x50)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x4C)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x48)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm4.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    MEM32(esp + 0x10) = edx;
    MEMF(esp + 8) = xmm2.f[0]; /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011C7B9; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm1.f[0]) */

loc_0011C78F: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011C79A; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0011C794: ;
    MEMF(esp + 4) = xmm1.f[0]; /* movss */

loc_0011C79A: ;
    ecx = MEM32(esp);
    edx = MEM32(esp + 4);
    eax = MEM32(esp + 8);
    MEM32(esp + 0xC) = ecx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x14) = eax;
    goto loc_0011C800;

loc_0011C7B9: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011C7C4; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0011C7BE: ;
    MEMF(esp + 4) = xmm1.f[0]; /* movss */

loc_0011C7C4: ;
    ecx = MEM32(esp);
    edx = MEM32(esp + 4);
    eax = MEM32(esp + 8);
    MEM32(esp + 0xC) = ecx;
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0xC); /* subss */
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x14) = eax;
    goto loc_0011C800;

loc_0011C7E6: ;
    ecx = MEM32(ecx + 0x20);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x30)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011C7F8; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0011C7F6: ;
    goto loc_0011C800;

loc_0011C7F8: ;
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 0x30); /* subss */

loc_0011C800: ;
    xmm2 = XMM_SCALAR(MEMF(0x7AF0E4)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    eax = MEM32(esp + 0x1C);
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011C823; /* jb: below (unsigned <) (xmm2.f[0] vs xmm0.f[0]) */

loc_0011C811: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0011C823: ;
    MEMF(eax) = xmm1.f[0]; /* movss */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0011C890
 * Original: 0x0011C890 - 0x0011C8AA (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0011C890(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011C890: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0011C899u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0011C899: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011C8A7; /* je: equal / zero */

loc_0011C8A0: ;
    MEM32(eax) = 0x7D87E4;
    esp += 4; return; /* ret */

loc_0011C8A7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011C8B0
 * Original: 0x0011C8B0 - 0x0011CA4A (410 bytes, 99 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011C8B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0011C8B0: ;
    eax = MEM32(esp + 8);
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0x30);
    edx = MEM32(ecx * 4 + 0x8F00F8);
    ecx = MEM32(edx + 0x58);
    SET_LO8(eax, MEM8(ecx + 0x1DC));
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0011C9F6; /* jl: less (signed <) */

loc_0011C8D3: ;
    eax = MEM32(ecx + 0x20);
    xmm0 = XMM_SCALAR(MEMF(0x7AB868)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x48)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x50)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x4C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm4.f[0]; /* comiss */
    MEMF(esp + 4) = xmm4.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011C933; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm4.f[0]) */

loc_0011C92D: ;
    MEMF(esp + 4) = xmm1.f[0]; /* movss */

loc_0011C933: ;
    eax = MEM32(esp);
    edx = MEM32(esp + 4);
    MEM32(esp + 0xC) = eax;
    eax = MEM32(esp + 8);
    xmm2 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEM32(esp + 0x14) = eax;
    eax = MEM32(ecx + 0x20);
    xmm4 = XMM_SCALAR(MEMF(eax + 0x50)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x4C)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x48)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm4.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    MEM32(esp + 0x10) = edx;
    MEMF(esp + 8) = xmm2.f[0]; /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011C9C9; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm1.f[0]) */

loc_0011C99F: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011C9AA; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0011C9A4: ;
    MEMF(esp + 4) = xmm1.f[0]; /* movss */

loc_0011C9AA: ;
    ecx = MEM32(esp);
    edx = MEM32(esp + 4);
    eax = MEM32(esp + 8);
    MEM32(esp + 0xC) = ecx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x14) = eax;
    goto loc_0011CA10;

loc_0011C9C9: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011C9D4; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0011C9CE: ;
    MEMF(esp + 4) = xmm1.f[0]; /* movss */

loc_0011C9D4: ;
    ecx = MEM32(esp);
    edx = MEM32(esp + 4);
    eax = MEM32(esp + 8);
    MEM32(esp + 0xC) = ecx;
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0xC); /* subss */
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x14) = eax;
    goto loc_0011CA10;

loc_0011C9F6: ;
    ecx = MEM32(ecx + 0x20);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x30)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011CA08; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0011CA06: ;
    goto loc_0011CA10;

loc_0011CA08: ;
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 0x30); /* subss */

loc_0011CA10: ;
    xmm2 = XMM_SCALAR(MEMF(0x7AA7E0)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011CA3C; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_0011CA1D: ;
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AF0E4); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011CA3C; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7AF0E4)) */

loc_0011CA26: ;
    eax = MEM32(esp + 0x1C);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0011CA3C: ;
    eax = MEM32(esp + 0x1C);
    MEMF(eax) = xmm1.f[0]; /* movss */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0011CAB0
 * Original: 0x0011CAB0 - 0x0011CACA (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0011CAB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011CAB0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0011CAB9u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0011CAB9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011CAC7; /* je: equal / zero */

loc_0011CAC0: ;
    MEM32(eax) = 0x7D8814;
    esp += 4; return; /* ret */

loc_0011CAC7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011CAD0
 * Original: 0x0011CAD0 - 0x0011CC59 (393 bytes, 95 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011CAD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0011CAD0: ;
    eax = MEM32(esp + 8);
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0x30);
    edx = MEM32(ecx * 4 + 0x8F00F8);
    ecx = MEM32(edx + 0x58);
    SET_LO8(eax, MEM8(ecx + 0x1DC));
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0011CC16; /* jl: less (signed <) */

loc_0011CAF3: ;
    eax = MEM32(ecx + 0x20);
    xmm0 = XMM_SCALAR(MEMF(0x7AB868)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x48)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x50)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x4C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm4.f[0]; /* comiss */
    MEMF(esp + 4) = xmm4.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011CB53; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm4.f[0]) */

loc_0011CB4D: ;
    MEMF(esp + 4) = xmm1.f[0]; /* movss */

loc_0011CB53: ;
    eax = MEM32(esp);
    edx = MEM32(esp + 4);
    MEM32(esp + 0xC) = eax;
    eax = MEM32(esp + 8);
    xmm2 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEM32(esp + 0x14) = eax;
    eax = MEM32(ecx + 0x20);
    xmm4 = XMM_SCALAR(MEMF(eax + 0x50)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x4C)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x48)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm4.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    MEM32(esp + 0x10) = edx;
    MEMF(esp + 8) = xmm2.f[0]; /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011CBE9; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm1.f[0]) */

loc_0011CBBF: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011CBCA; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0011CBC4: ;
    MEMF(esp + 4) = xmm1.f[0]; /* movss */

loc_0011CBCA: ;
    ecx = MEM32(esp);
    edx = MEM32(esp + 4);
    eax = MEM32(esp + 8);
    MEM32(esp + 0xC) = ecx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x14) = eax;
    goto loc_0011CC30;

loc_0011CBE9: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011CBF4; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0011CBEE: ;
    MEMF(esp + 4) = xmm1.f[0]; /* movss */

loc_0011CBF4: ;
    ecx = MEM32(esp);
    edx = MEM32(esp + 4);
    eax = MEM32(esp + 8);
    MEM32(esp + 0xC) = ecx;
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0xC); /* subss */
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x14) = eax;
    goto loc_0011CC30;

loc_0011CC16: ;
    ecx = MEM32(ecx + 0x20);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x30)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011CC28; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0011CC26: ;
    goto loc_0011CC30;

loc_0011CC28: ;
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 0x30); /* subss */

loc_0011CC30: ;
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AA7E0); /* comiss */
    eax = MEM32(esp + 0x1C);
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011CC4F; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(0x7AA7E0)) */

loc_0011CC3D: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0011CC4F: ;
    MEMF(eax) = xmm1.f[0]; /* movss */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0011CCC0
 * Original: 0x0011CCC0 - 0x0011CCDA (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0011CCC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011CCC0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0011CCC9u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0011CCC9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011CCD7; /* je: equal / zero */

loc_0011CCD0: ;
    MEM32(eax) = 0x7D8844;
    esp += 4; return; /* ret */

loc_0011CCD7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011CCE0
 * Original: 0x0011CCE0 - 0x0011CE91 (433 bytes, 103 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011CCE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0011CCE0: ;
    eax = MEM32(esp + 8);
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0x30);
    edx = MEM32(ecx * 4 + 0x8F00F8);
    ecx = MEM32(edx + 0x68);
    SET_LO8(eax, MEM8(ecx + 0x1DC));
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0011CE4E; /* jl: less (signed <) */

loc_0011CD03: ;
    eax = MEM32(ecx + 0x20);
    xmm0 = XMM_SCALAR(MEMF(0x7AB868)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x48)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x4C)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x50)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    MEMF(esp + 8) = xmm2.f[0]; /* movss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(esp) = xmm4.f[0]; /* movss */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011CD63; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm1.f[0]) */

loc_0011CD5D: ;
    MEMF(esp + 4) = xmm2.f[0]; /* movss */

loc_0011CD63: ;
    eax = MEM32(esp);
    edx = MEM32(esp + 4);
    MEM32(esp + 0xC) = eax;
    eax = MEM32(esp + 8);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(ecx + 0x20);
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(eax + 0x50)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x4C)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x48)); /* movss */
    MEM32(esp + 0x10) = edx;
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011CDF9; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm2.f[0]) */

loc_0011CDA3: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm1.f[0] = xmm1.f[0] + xmm4.f[0]; /* addss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011CDDA; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_0011CDD4: ;
    MEMF(esp + 4) = xmm2.f[0]; /* movss */

loc_0011CDDA: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp);
    edx = MEM32(esp + 4);
    MEM32(esp + 0x14) = eax;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = edx;
    goto loc_0011CE68;

loc_0011CDF9: ;
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + 0x30); /* addss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    MEMF(esp) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm1.f[0] = xmm1.f[0] + xmm4.f[0]; /* addss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011CE2C; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_0011CE26: ;
    MEMF(esp + 4) = xmm2.f[0]; /* movss */

loc_0011CE2C: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp);
    edx = MEM32(esp + 4);
    MEM32(esp + 0x14) = eax;
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x14); /* subss */
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = edx;
    goto loc_0011CE68;

loc_0011CE4E: ;
    ecx = MEM32(ecx + 0x20);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x38)); /* movss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011CE60; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_0011CE5E: ;
    goto loc_0011CE68;

loc_0011CE60: ;
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 0x38); /* subss */

loc_0011CE68: ;
    _fca = xmm0.f[0]; _fcb = MEMF(0x7D7A60); /* comiss */
    eax = MEM32(esp + 0x1C);
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011CE87; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7D7A60)) */

loc_0011CE75: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0011CE87: ;
    MEMF(eax) = xmm2.f[0]; /* movss */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0011CF00
 * Original: 0x0011CF00 - 0x0011CF1A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0011CF00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011CF00: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0011CF09u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0011CF09: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011CF17; /* je: equal / zero */

loc_0011CF10: ;
    MEM32(eax) = 0x7D8874;
    esp += 4; return; /* ret */

loc_0011CF17: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011CF20
 * Original: 0x0011CF20 - 0x0011D0D5 (437 bytes, 104 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011CF20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0011CF20: ;
    eax = MEM32(esp + 8);
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0x30);
    edx = MEM32(ecx * 4 + 0x8F00F8);
    ecx = MEM32(edx + 0x68);
    SET_LO8(eax, MEM8(ecx + 0x1DC));
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0011D08E; /* jl: less (signed <) */

loc_0011CF43: ;
    eax = MEM32(ecx + 0x20);
    xmm0 = XMM_SCALAR(MEMF(0x7AB868)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x48)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x4C)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x50)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    MEMF(esp + 8) = xmm2.f[0]; /* movss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(esp) = xmm4.f[0]; /* movss */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011CFA3; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm1.f[0]) */

loc_0011CF9D: ;
    MEMF(esp + 4) = xmm2.f[0]; /* movss */

loc_0011CFA3: ;
    eax = MEM32(esp);
    edx = MEM32(esp + 4);
    MEM32(esp + 0xC) = eax;
    eax = MEM32(esp + 8);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(ecx + 0x20);
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(eax + 0x50)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x4C)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x48)); /* movss */
    MEM32(esp + 0x10) = edx;
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011D039; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm2.f[0]) */

loc_0011CFE3: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm1.f[0] = xmm1.f[0] + xmm4.f[0]; /* addss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011D01A; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_0011D014: ;
    MEMF(esp + 4) = xmm2.f[0]; /* movss */

loc_0011D01A: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp);
    edx = MEM32(esp + 4);
    MEM32(esp + 0x14) = eax;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = edx;
    goto loc_0011D0A8;

loc_0011D039: ;
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + 0x30); /* addss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    MEMF(esp) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm1.f[0] = xmm1.f[0] + xmm4.f[0]; /* addss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011D06C; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_0011D066: ;
    MEMF(esp + 4) = xmm2.f[0]; /* movss */

loc_0011D06C: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp);
    edx = MEM32(esp + 4);
    MEM32(esp + 0x14) = eax;
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x14); /* subss */
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = edx;
    goto loc_0011D0A8;

loc_0011D08E: ;
    ecx = MEM32(ecx + 0x20);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x38)); /* movss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011D0A0; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_0011D09E: ;
    goto loc_0011D0A8;

loc_0011D0A0: ;
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 0x38); /* subss */

loc_0011D0A8: ;
    xmm1 = XMM_SCALAR(MEMF(0x7D2374)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    eax = MEM32(esp + 0x1C);
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011D0CB; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0011D0B9: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0011D0CB: ;
    MEMF(eax) = xmm2.f[0]; /* movss */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0011D150
 * Original: 0x0011D150 - 0x0011D16A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0011D150(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011D150: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0011D159u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0011D159: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011D167; /* je: equal / zero */

loc_0011D160: ;
    MEM32(eax) = 0x7D88A4;
    esp += 4; return; /* ret */

loc_0011D167: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011D170
 * Original: 0x0011D170 - 0x0011D30A (410 bytes, 99 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011D170(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0011D170: ;
    eax = MEM32(esp + 8);
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0x30);
    edx = MEM32(ecx * 4 + 0x8F00F8);
    ecx = MEM32(edx + 0x68);
    SET_LO8(eax, MEM8(ecx + 0x1DC));
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0011D2B6; /* jl: less (signed <) */

loc_0011D193: ;
    eax = MEM32(ecx + 0x20);
    xmm0 = XMM_SCALAR(MEMF(0x7AB868)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x48)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x50)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x4C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm4.f[0]; /* comiss */
    MEMF(esp + 4) = xmm4.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011D1F3; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm4.f[0]) */

loc_0011D1ED: ;
    MEMF(esp + 4) = xmm1.f[0]; /* movss */

loc_0011D1F3: ;
    eax = MEM32(esp);
    edx = MEM32(esp + 4);
    MEM32(esp + 0xC) = eax;
    eax = MEM32(esp + 8);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(ecx + 0x20);
    xmm2 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(eax + 0x50)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x4C)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x48)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm4.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    MEM32(esp + 0x10) = edx;
    MEMF(esp + 8) = xmm2.f[0]; /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011D289; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm1.f[0]) */

loc_0011D25F: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011D26A; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0011D264: ;
    MEMF(esp + 4) = xmm1.f[0]; /* movss */

loc_0011D26A: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp);
    edx = MEM32(esp + 4);
    MEM32(esp + 0x14) = eax;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = edx;
    goto loc_0011D2D0;

loc_0011D289: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011D294; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0011D28E: ;
    MEMF(esp + 4) = xmm1.f[0]; /* movss */

loc_0011D294: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp);
    edx = MEM32(esp + 4);
    MEM32(esp + 0x14) = eax;
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x14); /* subss */
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = edx;
    goto loc_0011D2D0;

loc_0011D2B6: ;
    ecx = MEM32(ecx + 0x20);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x38)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011D2C8; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0011D2C6: ;
    goto loc_0011D2D0;

loc_0011D2C8: ;
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 0x38); /* subss */

loc_0011D2D0: ;
    xmm2 = XMM_SCALAR(MEMF(0x7D7A60)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011D2FC; /* jb: below (unsigned <) (xmm2.f[0] vs xmm0.f[0]) */

loc_0011D2DD: ;
    _fca = xmm0.f[0]; _fcb = MEMF(0x7D2374); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011D2FC; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(0x7D2374)) */

loc_0011D2E6: ;
    eax = MEM32(esp + 0x1C);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0011D2FC: ;
    eax = MEM32(esp + 0x1C);
    MEMF(eax) = xmm1.f[0]; /* movss */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0011D370
 * Original: 0x0011D370 - 0x0011D38A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0011D370(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011D370: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0011D379u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0011D379: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011D387; /* je: equal / zero */

loc_0011D380: ;
    MEM32(eax) = 0x7D88D8;
    esp += 4; return; /* ret */

loc_0011D387: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011D390
 * Original: 0x0011D390 - 0x0011D51D (397 bytes, 96 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011D390(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0011D390: ;
    eax = MEM32(esp + 8);
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0x30);
    edx = MEM32(ecx * 4 + 0x8F00F8);
    ecx = MEM32(edx + 0x68);
    SET_LO8(eax, MEM8(ecx + 0x1DC));
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0011D4D6; /* jl: less (signed <) */

loc_0011D3B3: ;
    eax = MEM32(ecx + 0x20);
    xmm0 = XMM_SCALAR(MEMF(0x7AB868)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x48)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x50)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x4C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm4.f[0]; /* comiss */
    MEMF(esp + 4) = xmm4.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011D413; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm4.f[0]) */

loc_0011D40D: ;
    MEMF(esp + 4) = xmm1.f[0]; /* movss */

loc_0011D413: ;
    eax = MEM32(esp);
    edx = MEM32(esp + 4);
    MEM32(esp + 0xC) = eax;
    eax = MEM32(esp + 8);
    xmm2 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEM32(esp + 0x14) = eax;
    eax = MEM32(ecx + 0x20);
    xmm4 = XMM_SCALAR(MEMF(eax + 0x50)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x4C)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x48)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm4.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    MEM32(esp + 0x10) = edx;
    MEMF(esp + 8) = xmm2.f[0]; /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011D4A9; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm1.f[0]) */

loc_0011D47F: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011D48A; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0011D484: ;
    MEMF(esp + 4) = xmm1.f[0]; /* movss */

loc_0011D48A: ;
    ecx = MEM32(esp);
    edx = MEM32(esp + 4);
    eax = MEM32(esp + 8);
    MEM32(esp + 0xC) = ecx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x14) = eax;
    goto loc_0011D4F0;

loc_0011D4A9: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011D4B4; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0011D4AE: ;
    MEMF(esp + 4) = xmm1.f[0]; /* movss */

loc_0011D4B4: ;
    ecx = MEM32(esp);
    edx = MEM32(esp + 4);
    eax = MEM32(esp + 8);
    MEM32(esp + 0xC) = ecx;
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0xC); /* subss */
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x14) = eax;
    goto loc_0011D4F0;

loc_0011D4D6: ;
    ecx = MEM32(ecx + 0x20);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x30)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011D4E8; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0011D4E6: ;
    goto loc_0011D4F0;

loc_0011D4E8: ;
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 0x30); /* subss */

loc_0011D4F0: ;
    xmm2 = XMM_SCALAR(MEMF(0x7AF0E4)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    eax = MEM32(esp + 0x1C);
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011D513; /* jb: below (unsigned <) (xmm2.f[0] vs xmm0.f[0]) */

loc_0011D501: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0011D513: ;
    MEMF(eax) = xmm1.f[0]; /* movss */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0011D580
 * Original: 0x0011D580 - 0x0011D59A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0011D580(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011D580: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0011D589u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0011D589: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011D597; /* je: equal / zero */

loc_0011D590: ;
    MEM32(eax) = 0x7D8900;
    esp += 4; return; /* ret */

loc_0011D597: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011D5A0
 * Original: 0x0011D5A0 - 0x0011D73A (410 bytes, 99 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011D5A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0011D5A0: ;
    eax = MEM32(esp + 8);
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0x30);
    edx = MEM32(ecx * 4 + 0x8F00F8);
    ecx = MEM32(edx + 0x68);
    SET_LO8(eax, MEM8(ecx + 0x1DC));
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0011D6E6; /* jl: less (signed <) */

loc_0011D5C3: ;
    eax = MEM32(ecx + 0x20);
    xmm0 = XMM_SCALAR(MEMF(0x7AB868)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x48)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x50)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x4C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm4.f[0]; /* comiss */
    MEMF(esp + 4) = xmm4.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011D623; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm4.f[0]) */

loc_0011D61D: ;
    MEMF(esp + 4) = xmm1.f[0]; /* movss */

loc_0011D623: ;
    eax = MEM32(esp);
    edx = MEM32(esp + 4);
    MEM32(esp + 0xC) = eax;
    eax = MEM32(esp + 8);
    xmm2 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEM32(esp + 0x14) = eax;
    eax = MEM32(ecx + 0x20);
    xmm4 = XMM_SCALAR(MEMF(eax + 0x50)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x4C)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x48)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm4.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    MEM32(esp + 0x10) = edx;
    MEMF(esp + 8) = xmm2.f[0]; /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011D6B9; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm1.f[0]) */

loc_0011D68F: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011D69A; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0011D694: ;
    MEMF(esp + 4) = xmm1.f[0]; /* movss */

loc_0011D69A: ;
    ecx = MEM32(esp);
    edx = MEM32(esp + 4);
    eax = MEM32(esp + 8);
    MEM32(esp + 0xC) = ecx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x14) = eax;
    goto loc_0011D700;

loc_0011D6B9: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011D6C4; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0011D6BE: ;
    MEMF(esp + 4) = xmm1.f[0]; /* movss */

loc_0011D6C4: ;
    ecx = MEM32(esp);
    edx = MEM32(esp + 4);
    eax = MEM32(esp + 8);
    MEM32(esp + 0xC) = ecx;
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0xC); /* subss */
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x14) = eax;
    goto loc_0011D700;

loc_0011D6E6: ;
    ecx = MEM32(ecx + 0x20);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x30)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011D6F8; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0011D6F6: ;
    goto loc_0011D700;

loc_0011D6F8: ;
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 0x30); /* subss */

loc_0011D700: ;
    xmm2 = XMM_SCALAR(MEMF(0x7AA7E0)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011D72C; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_0011D70D: ;
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AF0E4); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011D72C; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7AF0E4)) */

loc_0011D716: ;
    eax = MEM32(esp + 0x1C);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0011D72C: ;
    eax = MEM32(esp + 0x1C);
    MEMF(eax) = xmm1.f[0]; /* movss */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0011D7A0
 * Original: 0x0011D7A0 - 0x0011D7BA (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0011D7A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011D7A0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0011D7A9u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0011D7A9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011D7B7; /* je: equal / zero */

loc_0011D7B0: ;
    MEM32(eax) = 0x7D892C;
    esp += 4; return; /* ret */

loc_0011D7B7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011D7C0
 * Original: 0x0011D7C0 - 0x0011D949 (393 bytes, 95 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011D7C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0011D7C0: ;
    eax = MEM32(esp + 8);
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0x30);
    edx = MEM32(ecx * 4 + 0x8F00F8);
    ecx = MEM32(edx + 0x68);
    SET_LO8(eax, MEM8(ecx + 0x1DC));
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0011D906; /* jl: less (signed <) */

loc_0011D7E3: ;
    eax = MEM32(ecx + 0x20);
    xmm0 = XMM_SCALAR(MEMF(0x7AB868)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x48)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x50)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x4C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm4.f[0]; /* comiss */
    MEMF(esp + 4) = xmm4.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011D843; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm4.f[0]) */

loc_0011D83D: ;
    MEMF(esp + 4) = xmm1.f[0]; /* movss */

loc_0011D843: ;
    eax = MEM32(esp);
    edx = MEM32(esp + 4);
    MEM32(esp + 0xC) = eax;
    eax = MEM32(esp + 8);
    xmm2 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEM32(esp + 0x14) = eax;
    eax = MEM32(ecx + 0x20);
    xmm4 = XMM_SCALAR(MEMF(eax + 0x50)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x4C)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x48)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm4.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    MEM32(esp + 0x10) = edx;
    MEMF(esp + 8) = xmm2.f[0]; /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011D8D9; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm1.f[0]) */

loc_0011D8AF: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011D8BA; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0011D8B4: ;
    MEMF(esp + 4) = xmm1.f[0]; /* movss */

loc_0011D8BA: ;
    ecx = MEM32(esp);
    edx = MEM32(esp + 4);
    eax = MEM32(esp + 8);
    MEM32(esp + 0xC) = ecx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x14) = eax;
    goto loc_0011D920;

loc_0011D8D9: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011D8E4; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0011D8DE: ;
    MEMF(esp + 4) = xmm1.f[0]; /* movss */

loc_0011D8E4: ;
    ecx = MEM32(esp);
    edx = MEM32(esp + 4);
    eax = MEM32(esp + 8);
    MEM32(esp + 0xC) = ecx;
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0xC); /* subss */
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x14) = eax;
    goto loc_0011D920;

loc_0011D906: ;
    ecx = MEM32(ecx + 0x20);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x30)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011D918; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0011D916: ;
    goto loc_0011D920;

loc_0011D918: ;
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 0x30); /* subss */

loc_0011D920: ;
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AA7E0); /* comiss */
    eax = MEM32(esp + 0x1C);
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011D93F; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(0x7AA7E0)) */

loc_0011D92D: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0011D93F: ;
    MEMF(eax) = xmm1.f[0]; /* movss */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0011D9B0
 * Original: 0x0011D9B0 - 0x0011D9CA (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0011D9B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011D9B0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0011D9B9u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0011D9B9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011D9C7; /* je: equal / zero */

loc_0011D9C0: ;
    MEM32(eax) = 0x7D8958;
    esp += 4; return; /* ret */

loc_0011D9C7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011D9D0
 * Original: 0x0011D9D0 - 0x0011DA3D (109 bytes, 31 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011D9D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0011D9D0: ;
    ecx = MEM32(esp + 8);
    eax = (uint32_t)(int32_t)SMEM8(ecx + 0x30);
    edx = MEM32(eax * 4 + 0x8F00F8);
    eax = MEM32(edx + 0x5C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0011DA32; /* je: equal / zero */

loc_0011D9E9: ;
    eax = MEM32(eax + 0x20);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011D9FB; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_0011D9F6: ;
    xmm1 = xmm0; /* movaps */
    goto loc_0011DA03;

loc_0011D9FB: ;
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 0x38); /* subss */

loc_0011DA03: ;
    eax = MEM32(ecx + 0x20);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011DA12; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_0011DA10: ;
    goto loc_0011DA1A;

loc_0011DA12: ;
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x38); /* subss */

loc_0011DA1A: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011DA32; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0011DA1F: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

loc_0011DA32: ;
    eax = MEM32(esp + 4);
    MEMF(eax) = xmm2.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0011DA60
 * Original: 0x0011DA60 - 0x0011DA7A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0011DA60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011DA60: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0011DA69u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0011DA69: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011DA77; /* je: equal / zero */

loc_0011DA70: ;
    MEM32(eax) = 0x7D8984;
    esp += 4; return; /* ret */

loc_0011DA77: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011DA80
 * Original: 0x0011DA80 - 0x0011DAED (109 bytes, 31 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011DA80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0011DA80: ;
    ecx = MEM32(esp + 8);
    eax = (uint32_t)(int32_t)SMEM8(ecx + 0x30);
    edx = MEM32(eax * 4 + 0x8F00F8);
    eax = MEM32(edx + 0x60);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0011DAE2; /* je: equal / zero */

loc_0011DA99: ;
    eax = MEM32(eax + 0x20);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011DAAB; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_0011DAA6: ;
    xmm1 = xmm0; /* movaps */
    goto loc_0011DAB3;

loc_0011DAAB: ;
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 0x38); /* subss */

loc_0011DAB3: ;
    eax = MEM32(ecx + 0x20);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011DAC2; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_0011DAC0: ;
    goto loc_0011DACA;

loc_0011DAC2: ;
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x38); /* subss */

loc_0011DACA: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011DAE2; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0011DACF: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

loc_0011DAE2: ;
    eax = MEM32(esp + 4);
    MEMF(eax) = xmm2.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0011DB10
 * Original: 0x0011DB10 - 0x0011DB2A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0011DB10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011DB10: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0011DB19u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0011DB19: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011DB27; /* je: equal / zero */

loc_0011DB20: ;
    MEM32(eax) = 0x7D89B0;
    esp += 4; return; /* ret */

loc_0011DB27: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011DB30
 * Original: 0x0011DB30 - 0x0011DCFF (463 bytes, 147 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011DB30(void)
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

loc_0011DB30: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x0011DB38u); RECOMP_ABI_CALL(0x0001C095u, sub_0001C095); /* call 0x0001C095 */

loc_0011DB38: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011DCE9; /* jne: not equal / not zero */

loc_0011DB40: ;
    PUSH32(esp, 0x0011DB45u); RECOMP_ABI_CALL(0x0002CAB2u, sub_0002CAB2); /* call 0x0002CAB2 */

loc_0011DB45: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011DCE9; /* jne: not equal / not zero */

loc_0011DB4D: ;
    eax = MEM32(0x8EACE0);
    SET_LO8(ecx, MEM8(eax + 4));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0011DBB7; /* je: equal / zero */

loc_0011DB5A: ;
    eax = MEM32(eax + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011DBB7; /* je: equal / zero */

loc_0011DB61: ;
    eax = MEM32(eax + 0x1D4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011DB6Du); RECOMP_ABI_CALL(0x0001D030u, sub_0001D030); /* call 0x0001D030 */

loc_0011DB6D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011DBB7; /* je: equal / zero */

loc_0011DB74: ;
    ecx = MEM32(0x8EACE0);
    esi = ecx;
    PUSH32(esp, 0x0011DB81u); RECOMP_ABI_CALL(0x0002863Du, sub_0002863D); /* call 0x0002863D */

loc_0011DB81: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011DB8A; /* je: equal / zero */

loc_0011DB85: ;
    eax = MEM32(esi + 0x2C);
    goto loc_0011DB8C;

loc_0011DB8A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0011DB8C: ;
    _fa = (uint32_t)(MEM32(esp + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x28), eax (32-bit) */
    eax = MEM32(esp + 0x24);
    if (CMP_NE(_fa, _fb)) goto loc_0011DBA9; /* jne: not equal / not zero */

loc_0011DB96: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    POP32(esp, esi);
    MEMF(eax) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0011DBA9: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    POP32(esp, esi);
    MEMF(eax) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0011DBB7: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x2C);
    ecx = (uint32_t)(int32_t)SMEM8(ebx + 0x30);
    eax = MEM32(ecx * 4 + 0x8F00F8);
    PUSH32(esp, 1);
    ecx = eax + 0x1C;
    PUSH32(esp, 0x0011DBD1u); RECOMP_ABI_CALL(0x0002A76Cu, sub_0002A76C); /* call 0x0002A76C */

loc_0011DBD1: ;
    esi = eax;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0011DBDAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0011DBD7u); } /* indirect call */
    }

loc_0011DBDA: ;
    eax = MEM32(esi + 0x54);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7AD460)); /* fmul dword ptr [0x7ad460] */
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_EQ(_fa, _fb)) goto loc_0011DC1E; /* je: equal / zero */

loc_0011DBEF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011DC1E; /* je: equal / zero */

loc_0011DBF4: ;
    ecx = MEM32(0x8EB3BC);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011DC00u); RECOMP_ABI_CALL(0x00034B22u, sub_00034B22); /* call 0x00034B22 */

loc_0011DC00: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011DC1E; /* jne: not equal / not zero */

loc_0011DC04: ;
    ecx = MEM32(esi + 0x54);
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011DC1E; /* je: equal / zero */

loc_0011DC0F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011DC1E; /* je: equal / zero */

loc_0011DC14: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011DC1E; /* je: equal / zero */

loc_0011DC19: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011DC2D; /* jne: not equal / not zero */

loc_0011DC1E: ;
    PUSH32(esp, 0);
    ecx = esi + 0x200;
    PUSH32(esp, 0x0011DC2Bu); RECOMP_ABI_CALL(0x0002A76Cu, sub_0002A76C); /* call 0x0002A76C */

loc_0011DC2B: ;
    esi = eax;

loc_0011DC2D: ;
    ecx = MEM32(0x8E8F84);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x30);
    PUSH32(esp, edi);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0011DC43u); RECOMP_ABI_CALL(0x000274C7u, sub_000274C7); /* call 0x000274C7 */

loc_0011DC43: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0011DC51u); RECOMP_ABI_CALL(0x000274C7u, sub_000274C7); /* call 0x000274C7 */

loc_0011DC51: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011DC57u); RECOMP_ABI_CALL(0x0001EA4Du, sub_0001EA4D); /* call 0x0001EA4D */

loc_0011DC57: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7C3A94)); /* fadd dword ptr [0x7c3a94] */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_NE(_fa, _fb)) goto loc_0011DC81; /* jne: not equal / not zero */

loc_0011DC68: ;
    eax = MEM32(esp + 0x2C);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    MEMF(eax) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0011DC81: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x30);
    eax = MEM32(ecx * 4 + 0x8F00F8);
    PUSH32(esp, 1);
    ecx = eax + 0x1C;
    PUSH32(esp, 0x0011DC96u); RECOMP_ABI_CALL(0x0002A76Cu, sub_0002A76C); /* call 0x0002A76C */

loc_0011DC96: ;
    ecx = MEM32(0x8E8F84);
    PUSH32(esp, edi);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    esi = eax;
    PUSH32(esp, 0x0011DCA9u); RECOMP_ABI_CALL(0x000274C7u, sub_000274C7); /* call 0x000274C7 */

loc_0011DCA9: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0011DCB7u); RECOMP_ABI_CALL(0x000274C7u, sub_000274C7); /* call 0x000274C7 */

loc_0011DCB7: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011DCBDu); RECOMP_ABI_CALL(0x0001EA4Du, sub_0001EA4D); /* call 0x0001EA4D */

loc_0011DCBD: ;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011DCD5; /* jne: not equal / not zero */

loc_0011DCC8: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0xC); /* comiss */
    if ((_fca >= _fcb)) goto loc_0011DC68; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs MEMF(esp + 0xC)) */

loc_0011DCD5: ;
    eax = MEM32(esp + 0x2C);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    MEMF(eax) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0011DCE9: ;
    eax = MEM32(esp + 0x20);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0011DD80
 * Original: 0x0011DD80 - 0x0011DD9A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0011DD80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011DD80: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0011DD89u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0011DD89: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011DD97; /* je: equal / zero */

loc_0011DD90: ;
    MEM32(eax) = 0x7D89E4;
    esp += 4; return; /* ret */

loc_0011DD97: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011DDA0
 * Original: 0x0011DDA0 - 0x0011DDCC (44 bytes, 11 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011DDA0(void)
{

loc_0011DDA0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = esp + 0x10;
    PUSH32(esp, 0x0011DDB3u); RECOMP_ABI_CALL(0x00018AB2u, sub_00018AB2); /* call 0x00018AB2 */

loc_0011DDB3: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    eax = MEM32(esp + 4);
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 8); /* subss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0011DDE0
 * Original: 0x0011DDE0 - 0x0011DDFA (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0011DDE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011DDE0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0011DDE9u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0011DDE9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011DDF7; /* je: equal / zero */

loc_0011DDF0: ;
    MEM32(eax) = 0x7D8A1C;
    esp += 4; return; /* ret */

loc_0011DDF7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011DE00
 * Original: 0x0011DE00 - 0x0011DE35 (53 bytes, 15 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011DE00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011DE00: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x30);
    eax = MEM32(eax * 4 + 0x8F00F8);
    PUSH32(esp, 1);
    ecx = eax + 0x34;
    PUSH32(esp, 0x0011DE1Au); RECOMP_ABI_CALL(0x0002A76Cu, sub_0002A76C); /* call 0x0002A76C */

loc_0011DE1A: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    eax = MEM32(esp + 8);
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0011DE2E; /* je: equal / zero */

loc_0011DE2B: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_0011DE2E: ;
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0011DE50
 * Original: 0x0011DE50 - 0x0011DE6A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0011DE50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011DE50: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0011DE59u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0011DE59: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011DE67; /* je: equal / zero */

loc_0011DE60: ;
    MEM32(eax) = 0x7D8A54;
    esp += 4; return; /* ret */

loc_0011DE67: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011DE70
 * Original: 0x0011DE70 - 0x0011E10C (668 bytes, 166 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011DE70(void)
{
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

loc_0011DE70: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x28));
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x34);
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x30);
    eax = MEM32(eax * 4 + 0x8F00F8);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    ecx = eax + 0x1C;
    PUSH32(esp, 0x0011DE8Eu); RECOMP_ABI_CALL(0x0002A76Cu, sub_0002A76C); /* call 0x0002A76C */

loc_0011DE8E: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x30);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = 0x8F00FC;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(ecx));
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = eax;
    eax = MEM32(edx);
    PUSH32(esp, 1);
    ecx = eax + 0x1C;
    PUSH32(esp, 0x0011DEAAu); RECOMP_ABI_CALL(0x0002A76Cu, sub_0002A76C); /* call 0x0002A76C */

loc_0011DEAA: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AD450)); /* movss */
    esi = eax;
    eax = MEM32(0x8E8F84);
    eax = MEM32(eax + 0x20);
    xmm1 = XMM_SCALAR(MEMF(eax + 0x48)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x4C)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x50)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    MEMF(esp + 0xC) = xmm4.f[0]; /* movss */
    xmm4 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm4.f[0]; _fcb = xmm1.f[0]; /* comiss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm2.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011DF12; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs xmm1.f[0]) */

loc_0011DF0C: ;
    MEMF(esp + 0x10) = xmm4.f[0]; /* movss */

loc_0011DF12: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 0x10);
    MEM32(esp + 0x20) = eax;
    eax = MEM32(edi + 0x20);
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x1C) = edx;
    xmm1 = XMM_SCALAR(MEMF(eax + 0x48)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x4C)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x50)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    _fca = xmm4.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011DF80; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs xmm0.f[0]) */

loc_0011DF7A: ;
    MEMF(esp + 0x10) = xmm4.f[0]; /* movss */

loc_0011DF80: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x14);
    MEM32(esp + 0x24) = ecx;
    ecx = esp + 0x18;
    MEM32(esp + 0x28) = edx;
    PUSH32(esp, ecx);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    MEM32(esp + 0x34) = eax;
    PUSH32(esp, 0x0011DFA7u); RECOMP_ABI_CALL(0x0001EA4Du, sub_0001EA4D); /* call 0x0001EA4D */

loc_0011DFA7: ;
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(0x8E8F84);
    eax = MEM32(eax + 0x20);
    xmm0 = XMM_SCALAR(MEMF(0x7AD450)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x48)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x4C)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x50)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    MEMF(esp + 0x14) = xmm4.f[0]; /* movss */
    xmm4 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm4.f[0]; _fcb = xmm1.f[0]; /* comiss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm2.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011E014; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs xmm1.f[0]) */

loc_0011E00E: ;
    MEMF(esp + 0x10) = xmm4.f[0]; /* movss */

loc_0011E014: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 0x10);
    MEM32(esp + 0x2C) = eax;
    eax = MEM32(esi + 0x20);
    MEM32(esp + 0x24) = ecx;
    MEM32(esp + 0x28) = edx;
    xmm1 = XMM_SCALAR(MEMF(eax + 0x48)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x4C)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x50)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    _fca = xmm4.f[0]; _fcb = xmm0.f[0]; /* comiss */
    POP32(esp, edi);
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    POP32(esp, esi);
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011E084; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs xmm0.f[0]) */

loc_0011E07E: ;
    MEMF(esp + 8) = xmm4.f[0]; /* movss */

loc_0011E084: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    eax = MEM32(esp + 0xC);
    MEM32(esp + 0x10) = ecx;
    ecx = esp + 0x1C;
    MEM32(esp + 0x14) = edx;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, 0x0011E0ABu); RECOMP_ABI_CALL(0x0001EA4Du, sub_0001EA4D); /* call 0x0001EA4D */

loc_0011E0AB: ;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    fp_push(MEMF(esp + 8)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_0011E0FE; /* jbe: below or equal (unsigned <=) */

loc_0011E0C3: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp); /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011E0D8; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_0011E0D3: ;
    xmm1 = xmm0; /* movaps */
    goto loc_0011E0DF;

loc_0011E0D8: ;
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */

loc_0011E0DF: ;
    _fca = xmm1.f[0]; _fcb = MEMF(0x7C3A94); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011E0FE; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs MEMF(0x7C3A94)) */

loc_0011E0E8: ;
    eax = MEM32(esp + 0x2C);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x28)) >> 32) & 1);
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0011E0FE: ;
    eax = MEM32(esp + 0x2C);
    MEMF(eax) = xmm2.f[0]; /* movss */
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x28)) >> 32) & 1);
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0011E1C0
 * Original: 0x0011E1C0 - 0x0011E1DA (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0011E1C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011E1C0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0011E1C9u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0011E1C9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011E1D7; /* je: equal / zero */

loc_0011E1D0: ;
    MEM32(eax) = 0x7D8A84;
    esp += 4; return; /* ret */

loc_0011E1D7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011E1E0
 * Original: 0x0011E1E0 - 0x0011E478 (664 bytes, 165 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E1E0(void)
{
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

loc_0011E1E0: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x28));
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x34);
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x30);
    eax = MEM32(eax * 4 + 0x8F00F8);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    ecx = eax + 0x1C;
    PUSH32(esp, 0x0011E1FEu); RECOMP_ABI_CALL(0x0002A76Cu, sub_0002A76C); /* call 0x0002A76C */

loc_0011E1FE: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x30);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = 0x8F00FC;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(ecx));
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = eax;
    eax = MEM32(edx);
    PUSH32(esp, 1);
    ecx = eax + 0x1C;
    PUSH32(esp, 0x0011E21Au); RECOMP_ABI_CALL(0x0002A76Cu, sub_0002A76C); /* call 0x0002A76C */

loc_0011E21A: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AD450)); /* movss */
    esi = eax;
    eax = MEM32(0x8E8F84);
    eax = MEM32(eax + 0x20);
    xmm1 = XMM_SCALAR(MEMF(eax + 0x48)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x4C)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x50)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    MEMF(esp + 0xC) = xmm4.f[0]; /* movss */
    xmm4 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm4.f[0]; _fcb = xmm1.f[0]; /* comiss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm2.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011E282; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs xmm1.f[0]) */

loc_0011E27C: ;
    MEMF(esp + 0x10) = xmm4.f[0]; /* movss */

loc_0011E282: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 0x10);
    MEM32(esp + 0x20) = eax;
    eax = MEM32(edi + 0x20);
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x1C) = edx;
    xmm1 = XMM_SCALAR(MEMF(eax + 0x48)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x4C)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x50)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    _fca = xmm4.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011E2F0; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs xmm0.f[0]) */

loc_0011E2EA: ;
    MEMF(esp + 0x10) = xmm4.f[0]; /* movss */

loc_0011E2F0: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x14);
    MEM32(esp + 0x24) = ecx;
    ecx = esp + 0x18;
    MEM32(esp + 0x28) = edx;
    PUSH32(esp, ecx);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    MEM32(esp + 0x34) = eax;
    PUSH32(esp, 0x0011E317u); RECOMP_ABI_CALL(0x0001EA4Du, sub_0001EA4D); /* call 0x0001EA4D */

loc_0011E317: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(0x8E8F84);
    eax = MEM32(eax + 0x20);
    xmm0 = XMM_SCALAR(MEMF(0x7AD450)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x48)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x4C)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x50)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    MEMF(esp + 0x14) = xmm4.f[0]; /* movss */
    xmm4 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm4.f[0]; _fcb = xmm1.f[0]; /* comiss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm2.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011E384; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs xmm1.f[0]) */

loc_0011E37E: ;
    MEMF(esp + 0x10) = xmm4.f[0]; /* movss */

loc_0011E384: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 0x10);
    MEM32(esp + 0x2C) = eax;
    eax = MEM32(esi + 0x20);
    MEM32(esp + 0x24) = ecx;
    MEM32(esp + 0x28) = edx;
    xmm1 = XMM_SCALAR(MEMF(eax + 0x48)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x4C)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x50)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    _fca = xmm4.f[0]; _fcb = xmm0.f[0]; /* comiss */
    POP32(esp, edi);
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    POP32(esp, esi);
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011E3F4; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs xmm0.f[0]) */

loc_0011E3EE: ;
    MEMF(esp + 8) = xmm4.f[0]; /* movss */

loc_0011E3F4: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    eax = MEM32(esp + 0xC);
    MEM32(esp + 0x10) = ecx;
    ecx = esp + 0x1C;
    MEM32(esp + 0x14) = edx;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, 0x0011E41Bu); RECOMP_ABI_CALL(0x0001EA4Du, sub_0001EA4D); /* call 0x0001EA4D */

loc_0011E41B: ;
    MEMF(esp + 0x38) = (float)fp_top(); /* fst */
    fp_push(MEMF(esp + 8)); /* fld float */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_0011E46A; /* jbe: below or equal (unsigned <=) */

loc_0011E42F: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp); /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011E444; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_0011E43F: ;
    xmm1 = xmm0; /* movaps */
    goto loc_0011E44B;

loc_0011E444: ;
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */

loc_0011E44B: ;
    _fca = xmm1.f[0]; _fcb = MEMF(0x7C3A94); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011E46A; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs MEMF(0x7C3A94)) */

loc_0011E454: ;
    eax = MEM32(esp + 0x2C);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x28)) >> 32) & 1);
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0011E46A: ;
    eax = MEM32(esp + 0x2C);
    MEMF(eax) = xmm2.f[0]; /* movss */
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x28)) >> 32) & 1);
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0011E520
 * Original: 0x0011E520 - 0x0011E53A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0011E520(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011E520: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0011E529u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0011E529: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011E537; /* je: equal / zero */

loc_0011E530: ;
    MEM32(eax) = 0x7D8AB4;
    esp += 4; return; /* ret */

loc_0011E537: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011E540
 * Original: 0x0011E540 - 0x0011E7CF (655 bytes, 161 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E540(void)
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

loc_0011E540: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x34);
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x30);
    eax = MEM32(eax * 4 + 0x8F00F8);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    ecx = eax + 0x1C;
    PUSH32(esp, 0x0011E55Eu); RECOMP_ABI_CALL(0x0002A76Cu, sub_0002A76C); /* call 0x0002A76C */

loc_0011E55E: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x30);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = 0x8F00FC;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = eax;
    eax = MEM32(edx);
    PUSH32(esp, 1);
    ecx = eax + 0x1C;
    PUSH32(esp, 0x0011E57Au); RECOMP_ABI_CALL(0x0002A76Cu, sub_0002A76C); /* call 0x0002A76C */

loc_0011E57A: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AD450)); /* movss */
    esi = eax;
    eax = MEM32(0x8E8F84);
    eax = MEM32(eax + 0x20);
    xmm1 = XMM_SCALAR(MEMF(eax + 0x48)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x4C)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x50)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    MEMF(esp + 0xC) = xmm4.f[0]; /* movss */
    xmm4 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm4.f[0]; _fcb = xmm1.f[0]; /* comiss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm2.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011E5E2; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs xmm1.f[0]) */

loc_0011E5DC: ;
    MEMF(esp + 0x10) = xmm4.f[0]; /* movss */

loc_0011E5E2: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 0x10);
    MEM32(esp + 0x20) = eax;
    eax = MEM32(edi + 0x20);
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x1C) = edx;
    xmm1 = XMM_SCALAR(MEMF(eax + 0x48)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x4C)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x50)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    _fca = xmm4.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011E650; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs xmm0.f[0]) */

loc_0011E64A: ;
    MEMF(esp + 0x10) = xmm4.f[0]; /* movss */

loc_0011E650: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x14);
    MEM32(esp + 0x24) = ecx;
    ecx = esp + 0x18;
    MEM32(esp + 0x28) = edx;
    PUSH32(esp, ecx);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    MEM32(esp + 0x34) = eax;
    PUSH32(esp, 0x0011E677u); RECOMP_ABI_CALL(0x0001EA4Du, sub_0001EA4D); /* call 0x0001EA4D */

loc_0011E677: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(0x8E8F84);
    eax = MEM32(eax + 0x20);
    xmm0 = XMM_SCALAR(MEMF(0x7AD450)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x48)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x4C)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x50)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    MEMF(esp + 0x14) = xmm4.f[0]; /* movss */
    xmm4 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm4.f[0]; _fcb = xmm1.f[0]; /* comiss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm2.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011E6E4; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs xmm1.f[0]) */

loc_0011E6DE: ;
    MEMF(esp + 0x10) = xmm4.f[0]; /* movss */

loc_0011E6E4: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 0x10);
    MEM32(esp + 0x2C) = eax;
    eax = MEM32(esi + 0x20);
    MEM32(esp + 0x24) = ecx;
    MEM32(esp + 0x28) = edx;
    xmm1 = XMM_SCALAR(MEMF(eax + 0x48)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x4C)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x50)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    _fca = xmm4.f[0]; _fcb = xmm0.f[0]; /* comiss */
    POP32(esp, edi);
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    POP32(esp, esi);
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011E754; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs xmm0.f[0]) */

loc_0011E74E: ;
    MEMF(esp + 8) = xmm4.f[0]; /* movss */

loc_0011E754: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    eax = MEM32(esp + 0xC);
    MEM32(esp + 0x10) = ecx;
    ecx = esp + 0x1C;
    MEM32(esp + 0x14) = edx;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, 0x0011E77Bu); RECOMP_ABI_CALL(0x0001EA4Du, sub_0001EA4D); /* call 0x0001EA4D */

loc_0011E77B: ;
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 8); /* subss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011E79B; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_0011E796: ;
    xmm1 = xmm0; /* movaps */
    goto loc_0011E7A2;

loc_0011E79B: ;
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */

loc_0011E7A2: ;
    xmm0 = XMM_SCALAR(MEMF(0x7C3A94)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    eax = MEM32(esp + 0x2C);
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011E7C5; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0011E7B3: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0011E7C5: ;
    MEMF(eax) = xmm2.f[0]; /* movss */
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0011E880
 * Original: 0x0011E880 - 0x0011E89A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0011E880(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011E880: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0011E889u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0011E889: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011E897; /* je: equal / zero */

loc_0011E890: ;
    MEM32(eax) = 0x7D8AE4;
    esp += 4; return; /* ret */

loc_0011E897: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011E8A0
 * Original: 0x0011E8A0 - 0x0011E8A9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E8A0(void)
{

loc_0011E8A0: ;
    eax = ecx;
    MEM32(eax) = 0x7D8FB4;
    esp += 4; return; /* ret */

}

/**
 * sub_0011E8B0
 * Original: 0x0011E8B0 - 0x0011E8B3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E8B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011E8B0: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011E8C0
 * Original: 0x0011E8C0 - 0x0011E8CD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E8C0(void)
{

loc_0011E8C0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7D8FC4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011E8D0
 * Original: 0x0011E8D0 - 0x0011EA09 (313 bytes, 86 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E8D0(void)
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

loc_0011E8D0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(0x7B8DF8)); /* movss */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    eax = MEM32(esi + 0x20);
    xmm1 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011E8FB; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0011E8F6: ;
    xmm0 = xmm1; /* movaps */
    goto loc_0011E900;

loc_0011E8FB: ;
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x38); /* subss */

loc_0011E900: ;
    xmm1 = XMM_SCALAR(MEMF(0x7D8FE0)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    ecx = esi;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011E943; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0011E90F: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x48); PUSH32(esp, 0x0011E914u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0011E911u); } /* indirect call */
    }

loc_0011E914: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    SET_LO8(eax, MEM8(esi + 0x64));
    if (CMP_EQ(_fa, _fb)) goto loc_0011E92F; /* je: equal / zero */

loc_0011E91B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011E933; /* je: equal / zero */

loc_0011E91F: ;
    xmm0 = XMM_SCALAR(MEMF(0x7CC2AC)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    goto loc_0011E985;

loc_0011E92F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011E91F; /* je: equal / zero */

loc_0011E933: ;
    xmm0 = XMM_SCALAR(MEMF(0x7CEFA4)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    goto loc_0011E985;

loc_0011E943: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x0011E948u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0011E945u); } /* indirect call */
    }

loc_0011E948: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    SET_LO8(eax, MEM8(esi + 0x64));
    if (CMP_EQ(_fa, _fb)) goto loc_0011E95D; /* je: equal / zero */

loc_0011E94F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011E969; /* jne: not equal / not zero */

loc_0011E953: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AF0E4)); /* movss */
    goto loc_0011E971;

loc_0011E95D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    xmm0 = XMM_SCALAR(MEMF(0x7AF0E4)); /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_0011E971; /* jne: not equal / not zero */

loc_0011E969: ;
    xmm0 = XMM_SCALAR(MEMF(0x7D8FDC)); /* movss */

loc_0011E971: ;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AB1D8)); /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */

loc_0011E985: ;
    ecx = esi;
    PUSH32(esp, 0x0011E98Cu); RECOMP_ABI_CALL(0x0001C94Bu, sub_0001C94B); /* call 0x0001C94B */

loc_0011E98C: ;
    fp_push(MEMF(0x7B8DF4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_0011E9A1; /* jbe: below or equal (unsigned <=) */

loc_0011E998: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */

loc_0011E9A1: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0011E9A8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0011E9A5u); } /* indirect call */
    }

loc_0011E9A8: ;
    ecx = MEM32(eax + 0x20);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x38)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7D8EE0); /* comiss */
    xmm0 = XMM_SCALAR(MEMF(0x7D8B34)); /* movss */
    if ((_fca >= _fcb)) goto loc_0011E9C9; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs MEMF(0x7D8EE0)) */

loc_0011E9C1: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */

loc_0011E9C9: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0011E9D8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0011E9D5u); } /* indirect call */
    }

loc_0011E9D8: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0xC); /* mulss */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, 1);
    PUSH32(esp, 4);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011E9FFu); RECOMP_ABI_CALL(0x00014CE6u, sub_00014CE6); /* call 0x00014CE6 */

loc_0011E9FF: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
 * sub_0011EA60
 * Original: 0x0011EA60 - 0x0011EA69 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011EA60(void)
{

loc_0011EA60: ;
    eax = ecx;
    MEM32(eax) = 0x7D8FE4;
    esp += 4; return; /* ret */

}

/**
 * sub_0011EA70
 * Original: 0x0011EA70 - 0x0011EA73 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011EA70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011EA70: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011EA80
 * Original: 0x0011EA80 - 0x0011EA8D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011EA80(void)
{

loc_0011EA80: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7D8FF4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011EA90
 * Original: 0x0011EA90 - 0x0011EC04 (372 bytes, 93 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011EA90(void)
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

loc_0011EA90: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(0x7D8B30)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    eax = MEM32(esi + 0x20);
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7B8DF8)); /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011EAC6; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0011EAC4: ;
    goto loc_0011EACE;

loc_0011EAC6: ;
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x38); /* subss */

loc_0011EACE: ;
    xmm2 = XMM_SCALAR(MEMF(0x7CE744)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011EB0C; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_0011EADB: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x48); PUSH32(esp, 0x0011EAE2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0011EADFu); } /* indirect call */
    }

loc_0011EAE2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    xmm0 = XMM_SCALAR(MEMF(0x7CA7AC)); /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_0011EAF6; /* jne: not equal / not zero */

loc_0011EAEE: ;
    xmm0 = XMM_SCALAR(MEMF(0x7B1DA0)); /* movss */

loc_0011EAF6: ;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7C5FF8)); /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    goto loc_0011EB80;

loc_0011EB0C: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011EB18; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0011EB16: ;
    goto loc_0011EB20;

loc_0011EB18: ;
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x38); /* subss */

loc_0011EB20: ;
    xmm2 = XMM_SCALAR(MEMF(0x7D9014)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011EB6C; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_0011EB2D: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x0011EB34u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0011EB31u); } /* indirect call */
    }

loc_0011EB34: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    xmm0 = XMM_SCALAR(MEMF(0x7A99C0)); /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_0011EB48; /* jne: not equal / not zero */

loc_0011EB40: ;
    xmm0 = XMM_SCALAR(MEMF(0x7D9010)); /* movss */

loc_0011EB48: ;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7D8B34)); /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7D900C)); /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    goto loc_0011EB80;

loc_0011EB6C: ;
    xmm0 = XMM_SCALAR(MEMF(0x7D8B34)); /* movss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */

loc_0011EB80: ;
    ecx = esi;
    PUSH32(esp, 0x0011EB87u); RECOMP_ABI_CALL(0x0001C94Bu, sub_0001C94B); /* call 0x0001C94B */

loc_0011EB87: ;
    fp_push(MEMF(0x7B8DF4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_0011EB9C; /* jbe: below or equal (unsigned <=) */

loc_0011EB93: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */

loc_0011EB9C: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0011EBA3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0011EBA0u); } /* indirect call */
    }

loc_0011EBA3: ;
    ecx = MEM32(eax + 0x20);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x38)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7D8EE0); /* comiss */
    xmm0 = XMM_SCALAR(MEMF(0x7D8B34)); /* movss */
    if ((_fca >= _fcb)) goto loc_0011EBC4; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs MEMF(0x7D8EE0)) */

loc_0011EBBC: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */

loc_0011EBC4: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0011EBD3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0011EBD0u); } /* indirect call */
    }

loc_0011EBD3: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0xC); /* mulss */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x2C);
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011EBFAu); RECOMP_ABI_CALL(0x00014CE6u, sub_00014CE6); /* call 0x00014CE6 */

loc_0011EBFA: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0011EC70
 * Original: 0x0011EC70 - 0x0011EC79 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011EC70(void)
{

loc_0011EC70: ;
    eax = ecx;
    MEM32(eax) = 0x7D9018;
    esp += 4; return; /* ret */

}

/**
 * sub_0011EC80
 * Original: 0x0011EC80 - 0x0011EC83 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011EC80(void)
{

loc_0011EC80: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_0011EC90
 * Original: 0x0011EC90 - 0x0011EC9D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011EC90(void)
{

loc_0011EC90: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7D9028;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011ECA0
 * Original: 0x0011ECA0 - 0x0011ECA9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011ECA0(void)
{

loc_0011ECA0: ;
    eax = ecx;
    MEM32(eax) = 0x7D9038;
    esp += 4; return; /* ret */

}

/**
 * sub_0011ECB0
 * Original: 0x0011ECB0 - 0x0011ECB3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011ECB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011ECB0: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011ECC0
 * Original: 0x0011ECC0 - 0x0011ECCD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011ECC0(void)
{

loc_0011ECC0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7D9048;
    esp += 8; return; /* ret 4 */

}
