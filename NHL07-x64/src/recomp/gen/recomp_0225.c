/**
 * nhl_07_recomp - Recompiled code chunk 225
 * Functions: 250 (0x004DE893 - 0x004E3098)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_004DE893
 * Original: 0x004DE893 - 0x004DE8AE (27 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DE893(void)
{

loc_004DE893: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x004DE8A3u); RECOMP_ABI_CALL(0x004DD62Cu, sub_004DD62C); /* call 0x004DD62C */

loc_004DE8A3: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DE8C0
 * Original: 0x004DE8C0 - 0x004DE8D8 (24 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DE8C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DE8C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004DE8D2; /* je: equal / zero */

loc_004DE8CD: ;
    PUSH32(esp, 0x004DE8D2u); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_004DE8D2: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DE8E7
 * Original: 0x004DE8E7 - 0x004DE902 (27 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DE8E7(void)
{

loc_004DE8E7: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x004DE8F7u); RECOMP_ABI_CALL(0x004DD62Cu, sub_004DD62C); /* call 0x004DD62C */

loc_004DE8F7: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DE914
 * Original: 0x004DE914 - 0x004DE92C (24 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DE914(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DE914: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004DE926; /* je: equal / zero */

loc_004DE921: ;
    PUSH32(esp, 0x004DE926u); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_004DE926: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DE93B
 * Original: 0x004DE93B - 0x004DE956 (27 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DE93B(void)
{

loc_004DE93B: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x004DE94Bu); RECOMP_ABI_CALL(0x004DD62Cu, sub_004DD62C); /* call 0x004DD62C */

loc_004DE94B: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DE968
 * Original: 0x004DE968 - 0x004DE980 (24 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DE968(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DE968: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004DE97A; /* je: equal / zero */

loc_004DE975: ;
    PUSH32(esp, 0x004DE97Au); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_004DE97A: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DE98F
 * Original: 0x004DE98F - 0x004DE9AA (27 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DE98F(void)
{

loc_004DE98F: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x004DE99Fu); RECOMP_ABI_CALL(0x004DD62Cu, sub_004DD62C); /* call 0x004DD62C */

loc_004DE99F: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DE9BC
 * Original: 0x004DE9BC - 0x004DE9D4 (24 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DE9BC(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DE9BC: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004DE9CE; /* je: equal / zero */

loc_004DE9C9: ;
    PUSH32(esp, 0x004DE9CEu); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_004DE9CE: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DE9E3
 * Original: 0x004DE9E3 - 0x004DE9FE (27 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DE9E3(void)
{

loc_004DE9E3: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x004DE9F3u); RECOMP_ABI_CALL(0x004DD62Cu, sub_004DD62C); /* call 0x004DD62C */

loc_004DE9F3: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DEA10
 * Original: 0x004DEA10 - 0x004DEA28 (24 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DEA10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DEA10: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004DEA22; /* je: equal / zero */

loc_004DEA1D: ;
    PUSH32(esp, 0x004DEA22u); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_004DEA22: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DEA37
 * Original: 0x004DEA37 - 0x004DEA52 (27 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DEA37(void)
{

loc_004DEA37: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x004DEA47u); RECOMP_ABI_CALL(0x004DD62Cu, sub_004DD62C); /* call 0x004DD62C */

loc_004DEA47: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DEA64
 * Original: 0x004DEA64 - 0x004DEA7C (24 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DEA64(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DEA64: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004DEA76; /* je: equal / zero */

loc_004DEA71: ;
    PUSH32(esp, 0x004DEA76u); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_004DEA76: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DEA8B
 * Original: 0x004DEA8B - 0x004DEAA6 (27 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DEA8B(void)
{

loc_004DEA8B: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x004DEA9Bu); RECOMP_ABI_CALL(0x004DD62Cu, sub_004DD62C); /* call 0x004DD62C */

loc_004DEA9B: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DEAB8
 * Original: 0x004DEAB8 - 0x004DEAD0 (24 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DEAB8(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DEAB8: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004DEACA; /* je: equal / zero */

loc_004DEAC5: ;
    PUSH32(esp, 0x004DEACAu); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_004DEACA: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DEADF
 * Original: 0x004DEADF - 0x004DEAFA (27 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DEADF(void)
{

loc_004DEADF: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x004DEAEFu); RECOMP_ABI_CALL(0x004DD62Cu, sub_004DD62C); /* call 0x004DD62C */

loc_004DEAEF: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DEB0C
 * Original: 0x004DEB0C - 0x004DEB24 (24 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DEB0C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DEB0C: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004DEB1E; /* je: equal / zero */

loc_004DEB19: ;
    PUSH32(esp, 0x004DEB1Eu); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_004DEB1E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DEB33
 * Original: 0x004DEB33 - 0x004DEB4E (27 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DEB33(void)
{

loc_004DEB33: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x004DEB43u); RECOMP_ABI_CALL(0x004DD62Cu, sub_004DD62C); /* call 0x004DD62C */

loc_004DEB43: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DEB60
 * Original: 0x004DEB60 - 0x004DEB78 (24 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DEB60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DEB60: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004DEB72; /* je: equal / zero */

loc_004DEB6D: ;
    PUSH32(esp, 0x004DEB72u); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_004DEB72: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DEB87
 * Original: 0x004DEB87 - 0x004DEBA2 (27 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DEB87(void)
{

loc_004DEB87: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x004DEB97u); RECOMP_ABI_CALL(0x004DD62Cu, sub_004DD62C); /* call 0x004DD62C */

loc_004DEB97: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DEBB4
 * Original: 0x004DEBB4 - 0x004DEBCC (24 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DEBB4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DEBB4: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004DEBC6; /* je: equal / zero */

loc_004DEBC1: ;
    PUSH32(esp, 0x004DEBC6u); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_004DEBC6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DEBDB
 * Original: 0x004DEBDB - 0x004DEBF6 (27 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DEBDB(void)
{

loc_004DEBDB: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x004DEBEBu); RECOMP_ABI_CALL(0x004DD62Cu, sub_004DD62C); /* call 0x004DD62C */

loc_004DEBEB: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DEC08
 * Original: 0x004DEC08 - 0x004DEC20 (24 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DEC08(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DEC08: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004DEC1A; /* je: equal / zero */

loc_004DEC15: ;
    PUSH32(esp, 0x004DEC1Au); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_004DEC1A: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DEC2F
 * Original: 0x004DEC2F - 0x004DEC4A (27 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DEC2F(void)
{

loc_004DEC2F: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x004DEC3Fu); RECOMP_ABI_CALL(0x004DD62Cu, sub_004DD62C); /* call 0x004DD62C */

loc_004DEC3F: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DEC5C
 * Original: 0x004DEC5C - 0x004DEC74 (24 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DEC5C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DEC5C: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004DEC6E; /* je: equal / zero */

loc_004DEC69: ;
    PUSH32(esp, 0x004DEC6Eu); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_004DEC6E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DEC83
 * Original: 0x004DEC83 - 0x004DEC9E (27 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DEC83(void)
{

loc_004DEC83: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x004DEC93u); RECOMP_ABI_CALL(0x004DD62Cu, sub_004DD62C); /* call 0x004DD62C */

loc_004DEC93: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DECBE
 * Original: 0x004DECBE - 0x004DECDA (28 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DECBE(void)
{

loc_004DECBE: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004DECC6u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004DECC6: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = esi;
    PUSH32(esp, 4);
    PUSH32(esp, 0x004DECD4u); RECOMP_ABI_CALL(0x004DD66Du, sub_004DD66D); /* call 0x004DD66D */

loc_004DECD4: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DECDA
 * Original: 0x004DECDA - 0x004DECF2 (24 bytes, 9 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DECDA(void)
{

loc_004DECDA: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0xC));
    esi = ecx;
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 4);
    PUSH32(esp, 0x004DECECu); RECOMP_ABI_CALL(0x004DD66Du, sub_004DD66D); /* call 0x004DD66D */

loc_004DECEC: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004DECFD
 * Original: 0x004DECFD - 0x004DED18 (27 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DECFD(void)
{

loc_004DECFD: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x004DED0Du); RECOMP_ABI_CALL(0x004DD62Cu, sub_004DD62C); /* call 0x004DD62C */

loc_004DED0D: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DED2B
 * Original: 0x004DED2B - 0x004DED47 (28 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DED2B(void)
{

loc_004DED2B: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004DED33u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004DED33: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = esi;
    PUSH32(esp, 4);
    PUSH32(esp, 0x004DED41u); RECOMP_ABI_CALL(0x004DD66Du, sub_004DD66D); /* call 0x004DD66D */

loc_004DED41: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DED47
 * Original: 0x004DED47 - 0x004DED5F (24 bytes, 9 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DED47(void)
{

loc_004DED47: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0xC));
    esi = ecx;
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 4);
    PUSH32(esp, 0x004DED59u); RECOMP_ABI_CALL(0x004DD66Du, sub_004DD66D); /* call 0x004DD66D */

loc_004DED59: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004DED8E
 * Original: 0x004DED8E - 0x004DEDB6 (40 bytes, 12 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DED8E(void)
{

loc_004DED8E: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004DED96u); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_004DED96: ;
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = esi + 8;
    PUSH32(esp, MEM32(esp + 0x10));
    MEM32(esi) = 0x86CC9C;
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x004DEDB0u); RECOMP_ABI_CALL(0x004DB87Du, sub_004DB87D); /* call 0x004DB87D */

loc_004DEDB0: ;
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004DEE28
 * Original: 0x004DEE28 - 0x004DEE50 (40 bytes, 12 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DEE28(void)
{

loc_004DEE28: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004DEE30u); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_004DEE30: ;
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = esi + 8;
    PUSH32(esp, MEM32(esp + 0x10));
    MEM32(esi) = 0x86CCA0;
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x004DEE4Au); RECOMP_ABI_CALL(0x004DB87Du, sub_004DB87D); /* call 0x004DB87D */

loc_004DEE4A: ;
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004DEEC5
 * Original: 0x004DEEC5 - 0x004DEEDD (24 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DEEC5(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DEEC5: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004DEED7; /* je: equal / zero */

loc_004DEED2: ;
    PUSH32(esp, 0x004DEED7u); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_004DEED7: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DEEEF
 * Original: 0x004DEEEF - 0x004DEF0A (27 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DEEEF(void)
{

loc_004DEEEF: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x004DEEFFu); RECOMP_ABI_CALL(0x004DD62Cu, sub_004DD62C); /* call 0x004DD62C */

loc_004DEEFF: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DEF1C
 * Original: 0x004DEF1C - 0x004DEF34 (24 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DEF1C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DEF1C: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004DEF2E; /* je: equal / zero */

loc_004DEF29: ;
    PUSH32(esp, 0x004DEF2Eu); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_004DEF2E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DEF46
 * Original: 0x004DEF46 - 0x004DEF61 (27 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DEF46(void)
{

loc_004DEF46: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x004DEF56u); RECOMP_ABI_CALL(0x004DD62Cu, sub_004DD62C); /* call 0x004DD62C */

loc_004DEF56: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DEF6D
 * Original: 0x004DEF6D - 0x004DEF85 (24 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DEF6D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DEF6D: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004DEF7F; /* je: equal / zero */

loc_004DEF7A: ;
    PUSH32(esp, 0x004DEF7Fu); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_004DEF7F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DEF94
 * Original: 0x004DEF94 - 0x004DEFAC (24 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DEF94(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DEF94: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004DEFA6; /* je: equal / zero */

loc_004DEFA1: ;
    PUSH32(esp, 0x004DEFA6u); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_004DEFA6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DEFB8
 * Original: 0x004DEFB8 - 0x004DEFE2 (42 bytes, 13 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DEFB8(void)
{

loc_004DEFB8: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004DEFC0u); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_004DEFC0: ;
    PUSH32(esp, MEM32(esp + 0xC));
    MEM32(esi) = 0x86CCA4;
    PUSH32(esp, 0x004DEFCFu); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004DEFCF: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = esi + 8;
    PUSH32(esp, 0x004DEFDCu); RECOMP_ABI_CALL(0x004DB87Du, sub_004DB87D); /* call 0x004DB87D */

loc_004DEFDC: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004DEFE2
 * Original: 0x004DEFE2 - 0x004DF00A (40 bytes, 12 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DEFE2(void)
{

loc_004DEFE2: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004DEFEAu); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_004DEFEA: ;
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = esi + 8;
    PUSH32(esp, MEM32(esp + 0x10));
    MEM32(esi) = 0x86CCA4;
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x004DF004u); RECOMP_ABI_CALL(0x004DB87Du, sub_004DB87D); /* call 0x004DB87D */

loc_004DF004: ;
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004DF05E
 * Original: 0x004DF05E - 0x004DF088 (42 bytes, 13 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DF05E(void)
{

loc_004DF05E: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004DF066u); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_004DF066: ;
    PUSH32(esp, MEM32(esp + 0xC));
    MEM32(esi) = 0x86CCA8;
    PUSH32(esp, 0x004DF075u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004DF075: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = esi + 8;
    PUSH32(esp, 0x004DF082u); RECOMP_ABI_CALL(0x004DB87Du, sub_004DB87D); /* call 0x004DB87D */

loc_004DF082: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004DF088
 * Original: 0x004DF088 - 0x004DF0B0 (40 bytes, 12 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DF088(void)
{

loc_004DF088: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004DF090u); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_004DF090: ;
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = esi + 8;
    PUSH32(esp, MEM32(esp + 0x10));
    MEM32(esi) = 0x86CCA8;
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x004DF0AAu); RECOMP_ABI_CALL(0x004DB87Du, sub_004DB87D); /* call 0x004DB87D */

loc_004DF0AA: ;
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004DF173
 * Original: 0x004DF173 - 0x004DF18B (24 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DF173(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DF173: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004DF185; /* je: equal / zero */

loc_004DF180: ;
    PUSH32(esp, 0x004DF185u); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_004DF185: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DF19A
 * Original: 0x004DF19A - 0x004DF1B2 (24 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DF19A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DF19A: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004DF1AC; /* je: equal / zero */

loc_004DF1A7: ;
    PUSH32(esp, 0x004DF1ACu); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_004DF1AC: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DF1C7
 * Original: 0x004DF1C7 - 0x004DF1DF (24 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DF1C7(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DF1C7: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004DF1D9; /* je: equal / zero */

loc_004DF1D4: ;
    PUSH32(esp, 0x004DF1D9u); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_004DF1D9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DF1F1
 * Original: 0x004DF1F1 - 0x004DF20C (27 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DF1F1(void)
{

loc_004DF1F1: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x004DF201u); RECOMP_ABI_CALL(0x004DD62Cu, sub_004DD62C); /* call 0x004DD62C */

loc_004DF201: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DF218
 * Original: 0x004DF218 - 0x004DF242 (42 bytes, 13 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DF218(void)
{

loc_004DF218: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004DF220u); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_004DF220: ;
    PUSH32(esp, MEM32(esp + 0xC));
    MEM32(esi) = 0x86CCAC;
    PUSH32(esp, 0x004DF22Fu); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004DF22F: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = esi + 8;
    PUSH32(esp, 0x004DF23Cu); RECOMP_ABI_CALL(0x004DB87Du, sub_004DB87D); /* call 0x004DB87D */

loc_004DF23C: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004DF242
 * Original: 0x004DF242 - 0x004DF26A (40 bytes, 12 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DF242(void)
{

loc_004DF242: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004DF24Au); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_004DF24A: ;
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = esi + 8;
    PUSH32(esp, MEM32(esp + 0x10));
    MEM32(esi) = 0x86CCAC;
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x004DF264u); RECOMP_ABI_CALL(0x004DB87Du, sub_004DB87D); /* call 0x004DB87D */

loc_004DF264: ;
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004DF2B8
 * Original: 0x004DF2B8 - 0x004DF2D0 (24 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DF2B8(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DF2B8: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004DF2CA; /* je: equal / zero */

loc_004DF2C5: ;
    PUSH32(esp, 0x004DF2CAu); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_004DF2CA: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DF2E2
 * Original: 0x004DF2E2 - 0x004DF2FD (27 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DF2E2(void)
{

loc_004DF2E2: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x004DF2F2u); RECOMP_ABI_CALL(0x004DD62Cu, sub_004DD62C); /* call 0x004DD62C */

loc_004DF2F2: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DF309
 * Original: 0x004DF309 - 0x004DF333 (42 bytes, 13 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DF309(void)
{

loc_004DF309: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004DF311u); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_004DF311: ;
    PUSH32(esp, MEM32(esp + 0xC));
    MEM32(esi) = 0x86CCB0;
    PUSH32(esp, 0x004DF320u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004DF320: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = esi + 8;
    PUSH32(esp, 0x004DF32Du); RECOMP_ABI_CALL(0x004DB87Du, sub_004DB87D); /* call 0x004DB87D */

loc_004DF32D: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004DF333
 * Original: 0x004DF333 - 0x004DF35B (40 bytes, 12 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DF333(void)
{

loc_004DF333: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004DF33Bu); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_004DF33B: ;
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = esi + 8;
    PUSH32(esp, MEM32(esp + 0x10));
    MEM32(esi) = 0x86CCB0;
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x004DF355u); RECOMP_ABI_CALL(0x004DB87Du, sub_004DB87D); /* call 0x004DB87D */

loc_004DF355: ;
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004DF3AF
 * Original: 0x004DF3AF - 0x004DF3D9 (42 bytes, 13 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DF3AF(void)
{

loc_004DF3AF: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004DF3B7u); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_004DF3B7: ;
    PUSH32(esp, MEM32(esp + 0xC));
    MEM32(esi) = 0x86CCB4;
    PUSH32(esp, 0x004DF3C6u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004DF3C6: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = esi + 8;
    PUSH32(esp, 0x004DF3D3u); RECOMP_ABI_CALL(0x004DB87Du, sub_004DB87D); /* call 0x004DB87D */

loc_004DF3D3: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004DF3D9
 * Original: 0x004DF3D9 - 0x004DF401 (40 bytes, 12 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DF3D9(void)
{

loc_004DF3D9: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004DF3E1u); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_004DF3E1: ;
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = esi + 8;
    PUSH32(esp, MEM32(esp + 0x10));
    MEM32(esi) = 0x86CCB4;
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x004DF3FBu); RECOMP_ABI_CALL(0x004DB87Du, sub_004DB87D); /* call 0x004DB87D */

loc_004DF3FB: ;
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004DF45B
 * Original: 0x004DF45B - 0x004DF473 (24 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DF45B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DF45B: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004DF46D; /* je: equal / zero */

loc_004DF468: ;
    PUSH32(esp, 0x004DF46Du); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_004DF46D: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DF485
 * Original: 0x004DF485 - 0x004DF4A0 (27 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DF485(void)
{

loc_004DF485: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x004DF495u); RECOMP_ABI_CALL(0x004DD62Cu, sub_004DD62C); /* call 0x004DD62C */

loc_004DF495: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DF4B2
 * Original: 0x004DF4B2 - 0x004DF4CA (24 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DF4B2(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DF4B2: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004DF4C4; /* je: equal / zero */

loc_004DF4BF: ;
    PUSH32(esp, 0x004DF4C4u); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_004DF4C4: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DF4DC
 * Original: 0x004DF4DC - 0x004DF4F7 (27 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DF4DC(void)
{

loc_004DF4DC: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x004DF4ECu); RECOMP_ABI_CALL(0x004DD62Cu, sub_004DD62C); /* call 0x004DD62C */

loc_004DF4EC: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DF503
 * Original: 0x004DF503 - 0x004DF52D (42 bytes, 13 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DF503(void)
{

loc_004DF503: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004DF50Bu); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_004DF50B: ;
    PUSH32(esp, MEM32(esp + 0xC));
    MEM32(esi) = 0x86CCB8;
    PUSH32(esp, 0x004DF51Au); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004DF51A: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = esi + 8;
    PUSH32(esp, 0x004DF527u); RECOMP_ABI_CALL(0x004DB87Du, sub_004DB87D); /* call 0x004DB87D */

loc_004DF527: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004DF52D
 * Original: 0x004DF52D - 0x004DF555 (40 bytes, 12 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DF52D(void)
{

loc_004DF52D: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004DF535u); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_004DF535: ;
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = esi + 8;
    PUSH32(esp, MEM32(esp + 0x10));
    MEM32(esi) = 0x86CCB8;
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x004DF54Fu); RECOMP_ABI_CALL(0x004DB87Du, sub_004DB87D); /* call 0x004DB87D */

loc_004DF54F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004DF5B0
 * Original: 0x004DF5B0 - 0x004DF5CC (28 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DF5B0(void)
{

loc_004DF5B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004DF5B8u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004DF5B8: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = esi;
    PUSH32(esp, 4);
    PUSH32(esp, 0x004DF5C6u); RECOMP_ABI_CALL(0x004DD66Du, sub_004DD66D); /* call 0x004DD66D */

loc_004DF5C6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DF5CC
 * Original: 0x004DF5CC - 0x004DF5E4 (24 bytes, 9 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DF5CC(void)
{

loc_004DF5CC: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0xC));
    esi = ecx;
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 4);
    PUSH32(esp, 0x004DF5DEu); RECOMP_ABI_CALL(0x004DD66Du, sub_004DD66D); /* call 0x004DD66D */

loc_004DF5DE: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004DF5E9
 * Original: 0x004DF5E9 - 0x004DF613 (42 bytes, 13 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DF5E9(void)
{

loc_004DF5E9: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004DF5F1u); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_004DF5F1: ;
    PUSH32(esp, MEM32(esp + 0xC));
    MEM32(esi) = 0x86CCBC;
    PUSH32(esp, 0x004DF600u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004DF600: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = esi + 8;
    PUSH32(esp, 0x004DF60Du); RECOMP_ABI_CALL(0x004DB87Du, sub_004DB87D); /* call 0x004DB87D */

loc_004DF60D: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004DF613
 * Original: 0x004DF613 - 0x004DF63B (40 bytes, 12 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DF613(void)
{

loc_004DF613: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004DF61Bu); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_004DF61B: ;
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = esi + 8;
    PUSH32(esp, MEM32(esp + 0x10));
    MEM32(esi) = 0x86CCBC;
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x004DF635u); RECOMP_ABI_CALL(0x004DB87Du, sub_004DB87D); /* call 0x004DB87D */

loc_004DF635: ;
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004DF687
 * Original: 0x004DF687 - 0x004DF69F (24 bytes, 9 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DF687(void)
{

loc_004DF687: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0xC));
    esi = ecx;
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 4);
    PUSH32(esp, 0x004DF699u); RECOMP_ABI_CALL(0x004DD66Du, sub_004DD66D); /* call 0x004DD66D */

loc_004DF699: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004DF69F
 * Original: 0x004DF69F - 0x004DF6B7 (24 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DF69F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DF69F: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004DF6B1; /* je: equal / zero */

loc_004DF6AC: ;
    PUSH32(esp, 0x004DF6B1u); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_004DF6B1: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DF6C3
 * Original: 0x004DF6C3 - 0x004DF6EB (40 bytes, 12 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DF6C3(void)
{

loc_004DF6C3: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004DF6CBu); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_004DF6CB: ;
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = esi + 8;
    PUSH32(esp, MEM32(esp + 0x10));
    MEM32(esi) = 0x865244;
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x004DF6E5u); RECOMP_ABI_CALL(0x004DB87Du, sub_004DB87D); /* call 0x004DB87D */

loc_004DF6E5: ;
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004DF72B
 * Original: 0x004DF72B - 0x004DF755 (42 bytes, 13 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DF72B(void)
{

loc_004DF72B: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004DF733u); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_004DF733: ;
    PUSH32(esp, MEM32(esp + 0xC));
    MEM32(esi) = 0x86CCC0;
    PUSH32(esp, 0x004DF742u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004DF742: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = esi + 8;
    PUSH32(esp, 0x004DF74Fu); RECOMP_ABI_CALL(0x004DB87Du, sub_004DB87D); /* call 0x004DB87D */

loc_004DF74F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004DF755
 * Original: 0x004DF755 - 0x004DF77D (40 bytes, 12 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DF755(void)
{

loc_004DF755: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004DF75Du); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_004DF75D: ;
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = esi + 8;
    PUSH32(esp, MEM32(esp + 0x10));
    MEM32(esi) = 0x86CCC0;
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x004DF777u); RECOMP_ABI_CALL(0x004DB87Du, sub_004DB87D); /* call 0x004DB87D */

loc_004DF777: ;
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004DF7D1
 * Original: 0x004DF7D1 - 0x004DF7FB (42 bytes, 13 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DF7D1(void)
{

loc_004DF7D1: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004DF7D9u); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_004DF7D9: ;
    PUSH32(esp, MEM32(esp + 0xC));
    MEM32(esi) = 0x86CCC4;
    PUSH32(esp, 0x004DF7E8u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004DF7E8: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = esi + 8;
    PUSH32(esp, 0x004DF7F5u); RECOMP_ABI_CALL(0x004DB87Du, sub_004DB87D); /* call 0x004DB87D */

loc_004DF7F5: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004DF7FB
 * Original: 0x004DF7FB - 0x004DF823 (40 bytes, 12 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DF7FB(void)
{

loc_004DF7FB: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004DF803u); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_004DF803: ;
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = esi + 8;
    PUSH32(esp, MEM32(esp + 0x10));
    MEM32(esi) = 0x86CCC4;
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x004DF81Du); RECOMP_ABI_CALL(0x004DB87Du, sub_004DB87D); /* call 0x004DB87D */

loc_004DF81D: ;
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004DF9EF
 * Original: 0x004DF9EF - 0x004DFA19 (42 bytes, 13 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DF9EF(void)
{

loc_004DF9EF: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004DF9F7u); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_004DF9F7: ;
    PUSH32(esp, MEM32(esp + 0xC));
    MEM32(esi) = 0x86CCC8;
    PUSH32(esp, 0x004DFA06u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004DFA06: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = esi + 8;
    PUSH32(esp, 0x004DFA13u); RECOMP_ABI_CALL(0x004DB87Du, sub_004DB87D); /* call 0x004DB87D */

loc_004DFA13: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004DFA19
 * Original: 0x004DFA19 - 0x004DFA41 (40 bytes, 12 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DFA19(void)
{

loc_004DFA19: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004DFA21u); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_004DFA21: ;
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = esi + 8;
    PUSH32(esp, MEM32(esp + 0x10));
    MEM32(esi) = 0x86CCC8;
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x004DFA3Bu); RECOMP_ABI_CALL(0x004DB87Du, sub_004DB87D); /* call 0x004DB87D */

loc_004DFA3B: ;
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004DFA89
 * Original: 0x004DFA89 - 0x004DFAB3 (42 bytes, 13 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DFA89(void)
{

loc_004DFA89: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004DFA91u); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_004DFA91: ;
    PUSH32(esp, MEM32(esp + 0xC));
    MEM32(esi) = 0x86CCCC;
    PUSH32(esp, 0x004DFAA0u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004DFAA0: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = esi + 8;
    PUSH32(esp, 0x004DFAADu); RECOMP_ABI_CALL(0x004DB87Du, sub_004DB87D); /* call 0x004DB87D */

loc_004DFAAD: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004DFAB3
 * Original: 0x004DFAB3 - 0x004DFADB (40 bytes, 12 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DFAB3(void)
{

loc_004DFAB3: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004DFABBu); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_004DFABB: ;
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = esi + 8;
    PUSH32(esp, MEM32(esp + 0x10));
    MEM32(esi) = 0x86CCCC;
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x004DFAD5u); RECOMP_ABI_CALL(0x004DB87Du, sub_004DB87D); /* call 0x004DB87D */

loc_004DFAD5: ;
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004DFB4D
 * Original: 0x004DFB4D - 0x004DFB75 (40 bytes, 12 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DFB4D(void)
{

loc_004DFB4D: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004DFB55u); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_004DFB55: ;
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = esi + 8;
    PUSH32(esp, MEM32(esp + 0x10));
    MEM32(esi) = 0x86CCD0;
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x004DFB6Fu); RECOMP_ABI_CALL(0x004DB87Du, sub_004DB87D); /* call 0x004DB87D */

loc_004DFB6F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004DFC5B
 * Original: 0x004DFC5B - 0x004DFC83 (40 bytes, 12 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DFC5B(void)
{

loc_004DFC5B: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004DFC63u); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_004DFC63: ;
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = esi + 8;
    PUSH32(esp, MEM32(esp + 0x10));
    MEM32(esi) = 0x86CCD4;
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x004DFC7Du); RECOMP_ABI_CALL(0x004DB87Du, sub_004DB87D); /* call 0x004DB87D */

loc_004DFC7D: ;
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004DFD3F
 * Original: 0x004DFD3F - 0x004DFD69 (42 bytes, 13 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DFD3F(void)
{

loc_004DFD3F: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004DFD47u); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_004DFD47: ;
    PUSH32(esp, MEM32(esp + 0xC));
    MEM32(esi) = 0x86CCD8;
    PUSH32(esp, 0x004DFD56u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004DFD56: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = esi + 8;
    PUSH32(esp, 0x004DFD63u); RECOMP_ABI_CALL(0x004DB87Du, sub_004DB87D); /* call 0x004DB87D */

loc_004DFD63: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004DFD69
 * Original: 0x004DFD69 - 0x004DFD91 (40 bytes, 12 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DFD69(void)
{

loc_004DFD69: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004DFD71u); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_004DFD71: ;
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = esi + 8;
    PUSH32(esp, MEM32(esp + 0x10));
    MEM32(esi) = 0x86CCD8;
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x004DFD8Bu); RECOMP_ABI_CALL(0x004DB87Du, sub_004DB87D); /* call 0x004DB87D */

loc_004DFD8B: ;
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004DFE6B
 * Original: 0x004DFE6B - 0x004DFE93 (40 bytes, 12 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DFE6B(void)
{

loc_004DFE6B: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004DFE73u); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_004DFE73: ;
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = esi + 8;
    PUSH32(esp, MEM32(esp + 0x10));
    MEM32(esi) = 0x86CCDC;
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x004DFE8Du); RECOMP_ABI_CALL(0x004DB87Du, sub_004DB87D); /* call 0x004DB87D */

loc_004DFE8D: ;
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004DFF85
 * Original: 0x004DFF85 - 0x004DFFAD (40 bytes, 12 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DFF85(void)
{

loc_004DFF85: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004DFF8Du); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_004DFF8D: ;
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = esi + 8;
    PUSH32(esp, MEM32(esp + 0x10));
    MEM32(esi) = 0x86CCE0;
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x004DFFA7u); RECOMP_ABI_CALL(0x004DB87Du, sub_004DB87D); /* call 0x004DB87D */

loc_004DFFA7: ;
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004E0001
 * Original: 0x004E0001 - 0x004E002B (42 bytes, 13 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E0001(void)
{

loc_004E0001: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004E0009u); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_004E0009: ;
    PUSH32(esp, MEM32(esp + 0xC));
    MEM32(esi) = 0x86CCE4;
    PUSH32(esp, 0x004E0018u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004E0018: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = esi + 8;
    PUSH32(esp, 0x004E0025u); RECOMP_ABI_CALL(0x004DB87Du, sub_004DB87D); /* call 0x004DB87D */

loc_004E0025: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004E002B
 * Original: 0x004E002B - 0x004E0053 (40 bytes, 12 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E002B(void)
{

loc_004E002B: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004E0033u); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_004E0033: ;
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = esi + 8;
    PUSH32(esp, MEM32(esp + 0x10));
    MEM32(esi) = 0x86CCE4;
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x004E004Du); RECOMP_ABI_CALL(0x004DB87Du, sub_004DB87D); /* call 0x004DB87D */

loc_004E004D: ;
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004E004D
 * Original: 0x004E004D - 0x004E0053 (6 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E004D(void)
{

loc_004E004D: ;
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004E0173
 * Original: 0x004E0173 - 0x004E018B (24 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E0173(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E0173: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004E0185; /* je: equal / zero */

loc_004E0180: ;
    PUSH32(esp, 0x004E0185u); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_004E0185: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E019D
 * Original: 0x004E019D - 0x004E01B8 (27 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E019D(void)
{

loc_004E019D: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x004E01ADu); RECOMP_ABI_CALL(0x004DD62Cu, sub_004DD62C); /* call 0x004DD62C */

loc_004E01AD: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E01C4
 * Original: 0x004E01C4 - 0x004E01DC (24 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E01C4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E01C4: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004E01D6; /* je: equal / zero */

loc_004E01D1: ;
    PUSH32(esp, 0x004E01D6u); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_004E01D6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E01EB
 * Original: 0x004E01EB - 0x004E0203 (24 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E01EB(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E01EB: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004E01FD; /* je: equal / zero */

loc_004E01F8: ;
    PUSH32(esp, 0x004E01FDu); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_004E01FD: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E0212
 * Original: 0x004E0212 - 0x004E022A (24 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E0212(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E0212: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004E0224; /* je: equal / zero */

loc_004E021F: ;
    PUSH32(esp, 0x004E0224u); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_004E0224: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E0239
 * Original: 0x004E0239 - 0x004E0251 (24 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E0239(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E0239: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004E024B; /* je: equal / zero */

loc_004E0246: ;
    PUSH32(esp, 0x004E024Bu); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_004E024B: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E0260
 * Original: 0x004E0260 - 0x004E0278 (24 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E0260(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E0260: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004E0272; /* je: equal / zero */

loc_004E026D: ;
    PUSH32(esp, 0x004E0272u); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_004E0272: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E0284
 * Original: 0x004E0284 - 0x004E029C (24 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E0284(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E0284: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004E0296; /* je: equal / zero */

loc_004E0291: ;
    PUSH32(esp, 0x004E0296u); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_004E0296: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E02AE
 * Original: 0x004E02AE - 0x004E02C6 (24 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E02AE(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E02AE: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004E02C0; /* je: equal / zero */

loc_004E02BB: ;
    PUSH32(esp, 0x004E02C0u); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_004E02C0: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E02D8
 * Original: 0x004E02D8 - 0x004E02F3 (27 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E02D8(void)
{

loc_004E02D8: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x004E02E8u); RECOMP_ABI_CALL(0x004DD62Cu, sub_004DD62C); /* call 0x004DD62C */

loc_004E02E8: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E0305
 * Original: 0x004E0305 - 0x004E031D (24 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E0305(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E0305: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004E0317; /* je: equal / zero */

loc_004E0312: ;
    PUSH32(esp, 0x004E0317u); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_004E0317: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E032F
 * Original: 0x004E032F - 0x004E034A (27 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E032F(void)
{

loc_004E032F: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x004E033Fu); RECOMP_ABI_CALL(0x004DD62Cu, sub_004DD62C); /* call 0x004DD62C */

loc_004E033F: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E0356
 * Original: 0x004E0356 - 0x004E036E (24 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E0356(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E0356: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004E0368; /* je: equal / zero */

loc_004E0363: ;
    PUSH32(esp, 0x004E0368u); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_004E0368: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E0386
 * Original: 0x004E0386 - 0x004E03A1 (27 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E0386(void)
{

loc_004E0386: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x004E0396u); RECOMP_ABI_CALL(0x004DD62Cu, sub_004DD62C); /* call 0x004DD62C */

loc_004E0396: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E03AD
 * Original: 0x004E03AD - 0x004E03C5 (24 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E03AD(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E03AD: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004E03BF; /* je: equal / zero */

loc_004E03BA: ;
    PUSH32(esp, 0x004E03BFu); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_004E03BF: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E03DD
 * Original: 0x004E03DD - 0x004E03F5 (24 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E03DD(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E03DD: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004E03EF; /* je: equal / zero */

loc_004E03EA: ;
    PUSH32(esp, 0x004E03EFu); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_004E03EF: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E0407
 * Original: 0x004E0407 - 0x004E0422 (27 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E0407(void)
{

loc_004E0407: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x004E0417u); RECOMP_ABI_CALL(0x004DD62Cu, sub_004DD62C); /* call 0x004DD62C */

loc_004E0417: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E042E
 * Original: 0x004E042E - 0x004E0446 (24 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E042E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E042E: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004E0440; /* je: equal / zero */

loc_004E043B: ;
    PUSH32(esp, 0x004E0440u); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_004E0440: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E0455
 * Original: 0x004E0455 - 0x004E046D (24 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E0455(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E0455: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004E0467; /* je: equal / zero */

loc_004E0462: ;
    PUSH32(esp, 0x004E0467u); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_004E0467: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E0479
 * Original: 0x004E0479 - 0x004E0491 (24 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E0479(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E0479: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004E048B; /* je: equal / zero */

loc_004E0486: ;
    PUSH32(esp, 0x004E048Bu); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_004E048B: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E04A3
 * Original: 0x004E04A3 - 0x004E04BB (24 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E04A3(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E04A3: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004E04B5; /* je: equal / zero */

loc_004E04B0: ;
    PUSH32(esp, 0x004E04B5u); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_004E04B5: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E04CD
 * Original: 0x004E04CD - 0x004E04E8 (27 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E04CD(void)
{

loc_004E04CD: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x004E04DDu); RECOMP_ABI_CALL(0x004DD62Cu, sub_004DD62C); /* call 0x004DD62C */

loc_004E04DD: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E04F4
 * Original: 0x004E04F4 - 0x004E050C (24 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E04F4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E04F4: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004E0506; /* je: equal / zero */

loc_004E0501: ;
    PUSH32(esp, 0x004E0506u); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_004E0506: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E0521
 * Original: 0x004E0521 - 0x004E0539 (24 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E0521(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E0521: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004E0533; /* je: equal / zero */

loc_004E052E: ;
    PUSH32(esp, 0x004E0533u); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_004E0533: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E054B
 * Original: 0x004E054B - 0x004E0566 (27 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E054B(void)
{

loc_004E054B: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x004E055Bu); RECOMP_ABI_CALL(0x004DD62Cu, sub_004DD62C); /* call 0x004DD62C */

loc_004E055B: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E0578
 * Original: 0x004E0578 - 0x004E0590 (24 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E0578(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E0578: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004E058A; /* je: equal / zero */

loc_004E0585: ;
    PUSH32(esp, 0x004E058Au); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_004E058A: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E05A2
 * Original: 0x004E05A2 - 0x004E05BD (27 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E05A2(void)
{

loc_004E05A2: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x004E05B2u); RECOMP_ABI_CALL(0x004DD62Cu, sub_004DD62C); /* call 0x004DD62C */

loc_004E05B2: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E05DB
 * Original: 0x004E05DB - 0x004E05F3 (24 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E05DB(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E05DB: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004E05ED; /* je: equal / zero */

loc_004E05E8: ;
    PUSH32(esp, 0x004E05EDu); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_004E05ED: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E0605
 * Original: 0x004E0605 - 0x004E061D (24 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E0605(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E0605: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004E0617; /* je: equal / zero */

loc_004E0612: ;
    PUSH32(esp, 0x004E0617u); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_004E0617: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E062F
 * Original: 0x004E062F - 0x004E064A (27 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E062F(void)
{

loc_004E062F: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x004E063Fu); RECOMP_ABI_CALL(0x004DD62Cu, sub_004DD62C); /* call 0x004DD62C */

loc_004E063F: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E065C
 * Original: 0x004E065C - 0x004E0674 (24 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E065C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E065C: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004E066E; /* je: equal / zero */

loc_004E0669: ;
    PUSH32(esp, 0x004E066Eu); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_004E066E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E0686
 * Original: 0x004E0686 - 0x004E06A1 (27 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E0686(void)
{

loc_004E0686: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x004E0696u); RECOMP_ABI_CALL(0x004DD62Cu, sub_004DD62C); /* call 0x004DD62C */

loc_004E0696: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E06C8
 * Original: 0x004E06C8 - 0x004E06E0 (24 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E06C8(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E06C8: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004E06DA; /* je: equal / zero */

loc_004E06D5: ;
    PUSH32(esp, 0x004E06DAu); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_004E06DA: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E06F2
 * Original: 0x004E06F2 - 0x004E070D (27 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E06F2(void)
{

loc_004E06F2: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x004E0702u); RECOMP_ABI_CALL(0x004DD62Cu, sub_004DD62C); /* call 0x004DD62C */

loc_004E0702: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E0719
 * Original: 0x004E0719 - 0x004E0731 (24 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E0719(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E0719: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004E072B; /* je: equal / zero */

loc_004E0726: ;
    PUSH32(esp, 0x004E072Bu); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_004E072B: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E0743
 * Original: 0x004E0743 - 0x004E075B (24 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E0743(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E0743: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004E0755; /* je: equal / zero */

loc_004E0750: ;
    PUSH32(esp, 0x004E0755u); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_004E0755: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E076D
 * Original: 0x004E076D - 0x004E0788 (27 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E076D(void)
{

loc_004E076D: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x004E077Du); RECOMP_ABI_CALL(0x004DD62Cu, sub_004DD62C); /* call 0x004DD62C */

loc_004E077D: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E079A
 * Original: 0x004E079A - 0x004E07B2 (24 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E079A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E079A: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004E07AC; /* je: equal / zero */

loc_004E07A7: ;
    PUSH32(esp, 0x004E07ACu); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_004E07AC: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E07C4
 * Original: 0x004E07C4 - 0x004E07DF (27 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E07C4(void)
{

loc_004E07C4: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x004E07D4u); RECOMP_ABI_CALL(0x004DD62Cu, sub_004DD62C); /* call 0x004DD62C */

loc_004E07D4: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E07EB
 * Original: 0x004E07EB - 0x004E0803 (24 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E07EB(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E07EB: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004E07FD; /* je: equal / zero */

loc_004E07F8: ;
    PUSH32(esp, 0x004E07FDu); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_004E07FD: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E0812
 * Original: 0x004E0812 - 0x004E082A (24 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E0812(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E0812: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004E0824; /* je: equal / zero */

loc_004E081F: ;
    PUSH32(esp, 0x004E0824u); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_004E0824: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E083F
 * Original: 0x004E083F - 0x004E0857 (24 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E083F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E083F: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004E0851; /* je: equal / zero */

loc_004E084C: ;
    PUSH32(esp, 0x004E0851u); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_004E0851: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E0869
 * Original: 0x004E0869 - 0x004E0884 (27 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E0869(void)
{

loc_004E0869: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x004E0879u); RECOMP_ABI_CALL(0x004DD62Cu, sub_004DD62C); /* call 0x004DD62C */

loc_004E0879: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E0890
 * Original: 0x004E0890 - 0x004E08A8 (24 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E0890(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E0890: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004E08A2; /* je: equal / zero */

loc_004E089D: ;
    PUSH32(esp, 0x004E08A2u); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_004E08A2: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E08BA
 * Original: 0x004E08BA - 0x004E08D2 (24 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E08BA(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E08BA: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004E08CC; /* je: equal / zero */

loc_004E08C7: ;
    PUSH32(esp, 0x004E08CCu); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_004E08CC: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E08E4
 * Original: 0x004E08E4 - 0x004E08FF (27 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E08E4(void)
{

loc_004E08E4: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x004E08F4u); RECOMP_ABI_CALL(0x004DD62Cu, sub_004DD62C); /* call 0x004DD62C */

loc_004E08F4: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E0911
 * Original: 0x004E0911 - 0x004E0929 (24 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E0911(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E0911: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004E0923; /* je: equal / zero */

loc_004E091E: ;
    PUSH32(esp, 0x004E0923u); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_004E0923: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E093B
 * Original: 0x004E093B - 0x004E0956 (27 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E093B(void)
{

loc_004E093B: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x004E094Bu); RECOMP_ABI_CALL(0x004DD62Cu, sub_004DD62C); /* call 0x004DD62C */

loc_004E094B: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E0962
 * Original: 0x004E0962 - 0x004E097A (24 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E0962(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E0962: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004E0974; /* je: equal / zero */

loc_004E096F: ;
    PUSH32(esp, 0x004E0974u); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_004E0974: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E098F
 * Original: 0x004E098F - 0x004E09A7 (24 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E098F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E098F: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004E09A1; /* je: equal / zero */

loc_004E099C: ;
    PUSH32(esp, 0x004E09A1u); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_004E09A1: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E09B9
 * Original: 0x004E09B9 - 0x004E09D4 (27 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E09B9(void)
{

loc_004E09B9: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x004E09C9u); RECOMP_ABI_CALL(0x004DD62Cu, sub_004DD62C); /* call 0x004DD62C */

loc_004E09C9: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E09E6
 * Original: 0x004E09E6 - 0x004E09FE (24 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E09E6(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E09E6: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004E09F8; /* je: equal / zero */

loc_004E09F3: ;
    PUSH32(esp, 0x004E09F8u); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_004E09F8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E0A10
 * Original: 0x004E0A10 - 0x004E0A2B (27 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E0A10(void)
{

loc_004E0A10: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x004E0A20u); RECOMP_ABI_CALL(0x004DD62Cu, sub_004DD62C); /* call 0x004DD62C */

loc_004E0A20: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E0A3D
 * Original: 0x004E0A3D - 0x004E0A55 (24 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E0A3D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E0A3D: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004E0A4F; /* je: equal / zero */

loc_004E0A4A: ;
    PUSH32(esp, 0x004E0A4Fu); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_004E0A4F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E0A67
 * Original: 0x004E0A67 - 0x004E0A82 (27 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E0A67(void)
{

loc_004E0A67: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x004E0A77u); RECOMP_ABI_CALL(0x004DD62Cu, sub_004DD62C); /* call 0x004DD62C */

loc_004E0A77: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E0A94
 * Original: 0x004E0A94 - 0x004E0AAC (24 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E0A94(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E0A94: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004E0AA6; /* je: equal / zero */

loc_004E0AA1: ;
    PUSH32(esp, 0x004E0AA6u); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_004E0AA6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E0ABE
 * Original: 0x004E0ABE - 0x004E0AD9 (27 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E0ABE(void)
{

loc_004E0ABE: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x004E0ACEu); RECOMP_ABI_CALL(0x004DD62Cu, sub_004DD62C); /* call 0x004DD62C */

loc_004E0ACE: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E0B00
 * Original: 0x004E0B00 - 0x004E0B18 (24 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E0B00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E0B00: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004E0B12; /* je: equal / zero */

loc_004E0B0D: ;
    PUSH32(esp, 0x004E0B12u); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_004E0B12: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E0B2A
 * Original: 0x004E0B2A - 0x004E0B45 (27 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E0B2A(void)
{

loc_004E0B2A: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x004E0B3Au); RECOMP_ABI_CALL(0x004DD62Cu, sub_004DD62C); /* call 0x004DD62C */

loc_004E0B3A: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E0B57
 * Original: 0x004E0B57 - 0x004E0B6F (24 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E0B57(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E0B57: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004E0B69; /* je: equal / zero */

loc_004E0B64: ;
    PUSH32(esp, 0x004E0B69u); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_004E0B69: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E0B81
 * Original: 0x004E0B81 - 0x004E0B9C (27 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E0B81(void)
{

loc_004E0B81: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x004E0B91u); RECOMP_ABI_CALL(0x004DD62Cu, sub_004DD62C); /* call 0x004DD62C */

loc_004E0B91: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E0BA8
 * Original: 0x004E0BA8 - 0x004E0BC0 (24 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E0BA8(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E0BA8: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004E0BBA; /* je: equal / zero */

loc_004E0BB5: ;
    PUSH32(esp, 0x004E0BBAu); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_004E0BBA: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E0BD2
 * Original: 0x004E0BD2 - 0x004E0BEA (24 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E0BD2(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E0BD2: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004E0BE4; /* je: equal / zero */

loc_004E0BDF: ;
    PUSH32(esp, 0x004E0BE4u); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_004E0BE4: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E0BFC
 * Original: 0x004E0BFC - 0x004E0C17 (27 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E0BFC(void)
{

loc_004E0BFC: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x004E0C0Cu); RECOMP_ABI_CALL(0x004DD62Cu, sub_004DD62C); /* call 0x004DD62C */

loc_004E0C0C: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E0C29
 * Original: 0x004E0C29 - 0x004E0C41 (24 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E0C29(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E0C29: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004E0C3B; /* je: equal / zero */

loc_004E0C36: ;
    PUSH32(esp, 0x004E0C3Bu); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_004E0C3B: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E0C53
 * Original: 0x004E0C53 - 0x004E0C6E (27 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E0C53(void)
{

loc_004E0C53: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x004E0C63u); RECOMP_ABI_CALL(0x004DD62Cu, sub_004DD62C); /* call 0x004DD62C */

loc_004E0C63: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E0C80
 * Original: 0x004E0C80 - 0x004E0C98 (24 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E0C80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E0C80: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004E0C92; /* je: equal / zero */

loc_004E0C8D: ;
    PUSH32(esp, 0x004E0C92u); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_004E0C92: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E0CAA
 * Original: 0x004E0CAA - 0x004E0CC5 (27 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E0CAA(void)
{

loc_004E0CAA: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x004E0CBAu); RECOMP_ABI_CALL(0x004DD62Cu, sub_004DD62C); /* call 0x004DD62C */

loc_004E0CBA: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E0CD7
 * Original: 0x004E0CD7 - 0x004E0CEF (24 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E0CD7(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E0CD7: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004E0CE9; /* je: equal / zero */

loc_004E0CE4: ;
    PUSH32(esp, 0x004E0CE9u); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_004E0CE9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E0D01
 * Original: 0x004E0D01 - 0x004E0D1C (27 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E0D01(void)
{

loc_004E0D01: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x004E0D11u); RECOMP_ABI_CALL(0x004DD62Cu, sub_004DD62C); /* call 0x004DD62C */

loc_004E0D11: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E0D2E
 * Original: 0x004E0D2E - 0x004E0D46 (24 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E0D2E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E0D2E: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004E0D40; /* je: equal / zero */

loc_004E0D3B: ;
    PUSH32(esp, 0x004E0D40u); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_004E0D40: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E0D58
 * Original: 0x004E0D58 - 0x004E0D73 (27 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E0D58(void)
{

loc_004E0D58: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x004E0D68u); RECOMP_ABI_CALL(0x004DD62Cu, sub_004DD62C); /* call 0x004DD62C */

loc_004E0D68: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E0D85
 * Original: 0x004E0D85 - 0x004E0D9D (24 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E0D85(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E0D85: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004E0D97; /* je: equal / zero */

loc_004E0D92: ;
    PUSH32(esp, 0x004E0D97u); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_004E0D97: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E0DAF
 * Original: 0x004E0DAF - 0x004E0DCA (27 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E0DAF(void)
{

loc_004E0DAF: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x004E0DBFu); RECOMP_ABI_CALL(0x004DD62Cu, sub_004DD62C); /* call 0x004DD62C */

loc_004E0DBF: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E0DDC
 * Original: 0x004E0DDC - 0x004E0DF4 (24 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E0DDC(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E0DDC: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004E0DEE; /* je: equal / zero */

loc_004E0DE9: ;
    PUSH32(esp, 0x004E0DEEu); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_004E0DEE: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E0E06
 * Original: 0x004E0E06 - 0x004E0E21 (27 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E0E06(void)
{

loc_004E0E06: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x004E0E16u); RECOMP_ABI_CALL(0x004DD62Cu, sub_004DD62C); /* call 0x004DD62C */

loc_004E0E16: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E0E33
 * Original: 0x004E0E33 - 0x004E0E4B (24 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E0E33(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E0E33: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004E0E45; /* je: equal / zero */

loc_004E0E40: ;
    PUSH32(esp, 0x004E0E45u); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_004E0E45: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E0E5D
 * Original: 0x004E0E5D - 0x004E0E78 (27 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E0E5D(void)
{

loc_004E0E5D: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x004E0E6Du); RECOMP_ABI_CALL(0x004DD62Cu, sub_004DD62C); /* call 0x004DD62C */

loc_004E0E6D: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E0E8A
 * Original: 0x004E0E8A - 0x004E0EA2 (24 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E0E8A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E0E8A: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004E0E9C; /* je: equal / zero */

loc_004E0E97: ;
    PUSH32(esp, 0x004E0E9Cu); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_004E0E9C: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E0EB4
 * Original: 0x004E0EB4 - 0x004E0ECF (27 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E0EB4(void)
{

loc_004E0EB4: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x004E0EC4u); RECOMP_ABI_CALL(0x004DD62Cu, sub_004DD62C); /* call 0x004DD62C */

loc_004E0EC4: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E0EE1
 * Original: 0x004E0EE1 - 0x004E0EF9 (24 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E0EE1(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E0EE1: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004E0EF3; /* je: equal / zero */

loc_004E0EEE: ;
    PUSH32(esp, 0x004E0EF3u); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_004E0EF3: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E0F0B
 * Original: 0x004E0F0B - 0x004E0F26 (27 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E0F0B(void)
{

loc_004E0F0B: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x004E0F1Bu); RECOMP_ABI_CALL(0x004DD62Cu, sub_004DD62C); /* call 0x004DD62C */

loc_004E0F1B: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E0F38
 * Original: 0x004E0F38 - 0x004E0F50 (24 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E0F38(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E0F38: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004E0F4A; /* je: equal / zero */

loc_004E0F45: ;
    PUSH32(esp, 0x004E0F4Au); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_004E0F4A: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E0F62
 * Original: 0x004E0F62 - 0x004E0F7D (27 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E0F62(void)
{

loc_004E0F62: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x004E0F72u); RECOMP_ABI_CALL(0x004DD62Cu, sub_004DD62C); /* call 0x004DD62C */

loc_004E0F72: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E0F8F
 * Original: 0x004E0F8F - 0x004E0FA7 (24 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E0F8F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E0F8F: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004E0FA1; /* je: equal / zero */

loc_004E0F9C: ;
    PUSH32(esp, 0x004E0FA1u); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_004E0FA1: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E0FB9
 * Original: 0x004E0FB9 - 0x004E0FD4 (27 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E0FB9(void)
{

loc_004E0FB9: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x004E0FC9u); RECOMP_ABI_CALL(0x004DD62Cu, sub_004DD62C); /* call 0x004DD62C */

loc_004E0FC9: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E0FE6
 * Original: 0x004E0FE6 - 0x004E0FFE (24 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E0FE6(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E0FE6: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004E0FF8; /* je: equal / zero */

loc_004E0FF3: ;
    PUSH32(esp, 0x004E0FF8u); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_004E0FF8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E1010
 * Original: 0x004E1010 - 0x004E102B (27 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E1010(void)
{

loc_004E1010: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x004E1020u); RECOMP_ABI_CALL(0x004DD62Cu, sub_004DD62C); /* call 0x004DD62C */

loc_004E1020: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E103D
 * Original: 0x004E103D - 0x004E1055 (24 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E103D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E103D: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004E104F; /* je: equal / zero */

loc_004E104A: ;
    PUSH32(esp, 0x004E104Fu); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_004E104F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E1067
 * Original: 0x004E1067 - 0x004E1082 (27 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E1067(void)
{

loc_004E1067: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x004E1077u); RECOMP_ABI_CALL(0x004DD62Cu, sub_004DD62C); /* call 0x004DD62C */

loc_004E1077: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E1094
 * Original: 0x004E1094 - 0x004E10AC (24 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E1094(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E1094: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004E10A6; /* je: equal / zero */

loc_004E10A1: ;
    PUSH32(esp, 0x004E10A6u); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_004E10A6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E10BE
 * Original: 0x004E10BE - 0x004E10D9 (27 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E10BE(void)
{

loc_004E10BE: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x004E10CEu); RECOMP_ABI_CALL(0x004DD62Cu, sub_004DD62C); /* call 0x004DD62C */

loc_004E10CE: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E10EB
 * Original: 0x004E10EB - 0x004E1103 (24 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E10EB(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E10EB: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004E10FD; /* je: equal / zero */

loc_004E10F8: ;
    PUSH32(esp, 0x004E10FDu); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_004E10FD: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E1115
 * Original: 0x004E1115 - 0x004E1130 (27 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E1115(void)
{

loc_004E1115: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x004E1125u); RECOMP_ABI_CALL(0x004DD62Cu, sub_004DD62C); /* call 0x004DD62C */

loc_004E1125: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E1142
 * Original: 0x004E1142 - 0x004E115A (24 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E1142(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E1142: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004E1154; /* je: equal / zero */

loc_004E114F: ;
    PUSH32(esp, 0x004E1154u); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_004E1154: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E116C
 * Original: 0x004E116C - 0x004E1187 (27 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E116C(void)
{

loc_004E116C: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x004E117Cu); RECOMP_ABI_CALL(0x004DD62Cu, sub_004DD62C); /* call 0x004DD62C */

loc_004E117C: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E1199
 * Original: 0x004E1199 - 0x004E11B1 (24 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E1199(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E1199: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004E11AB; /* je: equal / zero */

loc_004E11A6: ;
    PUSH32(esp, 0x004E11ABu); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_004E11AB: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E11C3
 * Original: 0x004E11C3 - 0x004E11DE (27 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E11C3(void)
{

loc_004E11C3: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x004E11D3u); RECOMP_ABI_CALL(0x004DD62Cu, sub_004DD62C); /* call 0x004DD62C */

loc_004E11D3: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E11FC
 * Original: 0x004E11FC - 0x004E1214 (24 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E11FC(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E11FC: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004E120E; /* je: equal / zero */

loc_004E1209: ;
    PUSH32(esp, 0x004E120Eu); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_004E120E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E1226
 * Original: 0x004E1226 - 0x004E1241 (27 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E1226(void)
{

loc_004E1226: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x004E1236u); RECOMP_ABI_CALL(0x004DD62Cu, sub_004DD62C); /* call 0x004DD62C */

loc_004E1236: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E124D
 * Original: 0x004E124D - 0x004E1265 (24 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E124D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E124D: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004E125F; /* je: equal / zero */

loc_004E125A: ;
    PUSH32(esp, 0x004E125Fu); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_004E125F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E127A
 * Original: 0x004E127A - 0x004E1292 (24 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E127A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E127A: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004E128C; /* je: equal / zero */

loc_004E1287: ;
    PUSH32(esp, 0x004E128Cu); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_004E128C: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E12A4
 * Original: 0x004E12A4 - 0x004E12BF (27 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E12A4(void)
{

loc_004E12A4: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x004E12B4u); RECOMP_ABI_CALL(0x004DD62Cu, sub_004DD62C); /* call 0x004DD62C */

loc_004E12B4: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E12CB
 * Original: 0x004E12CB - 0x004E12E3 (24 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E12CB(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E12CB: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004E12DD; /* je: equal / zero */

loc_004E12D8: ;
    PUSH32(esp, 0x004E12DDu); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_004E12DD: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E131B
 * Original: 0x004E131B - 0x004E132D (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E131B(void)
{

loc_004E131B: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004E1323u); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_004E1323: ;
    MEM32(esi) = 0x86CCE8;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004E132D
 * Original: 0x004E132D - 0x004E1338 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E132D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E132D: ;
    MEM32(ecx) = 0x86CCE8;
    g_seh_ebp = ebp; sub_004DD576(); return; /* tail jmp 0x004DD576 */

}

/**
 * sub_004E1338
 * Original: 0x004E1338 - 0x004E135C (36 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E1338(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E1338: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 8;
    ecx = edi;
    MEM32(esi) = 0x8638A8;
    PUSH32(esp, 0x004E134Cu); RECOMP_ABI_CALL(0x004DB960u, sub_004DB960); /* call 0x004DB960 */

loc_004E134C: ;
    ecx = edi;
    PUSH32(esp, 0x004E1353u); RECOMP_ABI_CALL(0x004DB8C3u, sub_004DB8C3); /* call 0x004DB8C3 */

loc_004E1353: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004DD576(); return; /* tail jmp 0x004DD576 */

}

/**
 * sub_004E1388
 * Original: 0x004E1388 - 0x004E13AC (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E1388(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E1388: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 8;
    ecx = edi;
    MEM32(esi) = 0x864E1C;
    PUSH32(esp, 0x004E139Cu); RECOMP_ABI_CALL(0x004DB960u, sub_004DB960); /* call 0x004DB960 */

loc_004E139C: ;
    ecx = edi;
    PUSH32(esp, 0x004E13A3u); RECOMP_ABI_CALL(0x004DB8C3u, sub_004DB8C3); /* call 0x004DB8C3 */

loc_004E13A3: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004DD576(); return; /* tail jmp 0x004DD576 */

}

/**
 * sub_004E13AC
 * Original: 0x004E13AC - 0x004E13D0 (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E13AC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E13AC: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 8;
    ecx = edi;
    MEM32(esi) = 0x864BF0;
    PUSH32(esp, 0x004E13C0u); RECOMP_ABI_CALL(0x004DB960u, sub_004DB960); /* call 0x004DB960 */

loc_004E13C0: ;
    ecx = edi;
    PUSH32(esp, 0x004E13C7u); RECOMP_ABI_CALL(0x004DB8C3u, sub_004DB8C3); /* call 0x004DB8C3 */

loc_004E13C7: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004DD576(); return; /* tail jmp 0x004DD576 */

}

/**
 * sub_004E1588
 * Original: 0x004E1588 - 0x004E15AC (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E1588(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E1588: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 8;
    ecx = edi;
    MEM32(esi) = 0x86484C;
    PUSH32(esp, 0x004E159Cu); RECOMP_ABI_CALL(0x004DB960u, sub_004DB960); /* call 0x004DB960 */

loc_004E159C: ;
    ecx = edi;
    PUSH32(esp, 0x004E15A3u); RECOMP_ABI_CALL(0x004DB8C3u, sub_004DB8C3); /* call 0x004DB8C3 */

loc_004E15A3: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004DD576(); return; /* tail jmp 0x004DD576 */

}

/**
 * sub_004E15D8
 * Original: 0x004E15D8 - 0x004E15FC (36 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E15D8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E15D8: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 8;
    ecx = edi;
    MEM32(esi) = 0x8644DC;
    PUSH32(esp, 0x004E15ECu); RECOMP_ABI_CALL(0x004DB960u, sub_004DB960); /* call 0x004DB960 */

loc_004E15EC: ;
    ecx = edi;
    PUSH32(esp, 0x004E15F3u); RECOMP_ABI_CALL(0x004DB8C3u, sub_004DB8C3); /* call 0x004DB8C3 */

loc_004E15F3: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004DD576(); return; /* tail jmp 0x004DD576 */

}

/**
 * sub_004E1628
 * Original: 0x004E1628 - 0x004E164C (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E1628(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E1628: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 8;
    ecx = edi;
    MEM32(esi) = 0x8644E0;
    PUSH32(esp, 0x004E163Cu); RECOMP_ABI_CALL(0x004DB960u, sub_004DB960); /* call 0x004DB960 */

loc_004E163C: ;
    ecx = edi;
    PUSH32(esp, 0x004E1643u); RECOMP_ABI_CALL(0x004DB8C3u, sub_004DB8C3); /* call 0x004DB8C3 */

loc_004E1643: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004DD576(); return; /* tail jmp 0x004DD576 */

}

/**
 * sub_004E164C
 * Original: 0x004E164C - 0x004E1670 (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E164C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E164C: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 8;
    ecx = edi;
    MEM32(esi) = 0x864EE8;
    PUSH32(esp, 0x004E1660u); RECOMP_ABI_CALL(0x004DB960u, sub_004DB960); /* call 0x004DB960 */

loc_004E1660: ;
    ecx = edi;
    PUSH32(esp, 0x004E1667u); RECOMP_ABI_CALL(0x004DB8C3u, sub_004DB8C3); /* call 0x004DB8C3 */

loc_004E1667: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004DD576(); return; /* tail jmp 0x004DD576 */

}

/**
 * sub_004E1670
 * Original: 0x004E1670 - 0x004E1694 (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E1670(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E1670: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 8;
    ecx = edi;
    MEM32(esi) = 0x864150;
    PUSH32(esp, 0x004E1684u); RECOMP_ABI_CALL(0x004DB960u, sub_004DB960); /* call 0x004DB960 */

loc_004E1684: ;
    ecx = edi;
    PUSH32(esp, 0x004E168Bu); RECOMP_ABI_CALL(0x004DB8C3u, sub_004DB8C3); /* call 0x004DB8C3 */

loc_004E168B: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004DD576(); return; /* tail jmp 0x004DD576 */

}

/**
 * sub_004E1694
 * Original: 0x004E1694 - 0x004E16B8 (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E1694(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E1694: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 8;
    ecx = edi;
    MEM32(esi) = 0x863F38;
    PUSH32(esp, 0x004E16A8u); RECOMP_ABI_CALL(0x004DB960u, sub_004DB960); /* call 0x004DB960 */

loc_004E16A8: ;
    ecx = edi;
    PUSH32(esp, 0x004E16AFu); RECOMP_ABI_CALL(0x004DB8C3u, sub_004DB8C3); /* call 0x004DB8C3 */

loc_004E16AF: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004DD576(); return; /* tail jmp 0x004DD576 */

}

/**
 * sub_004E16E4
 * Original: 0x004E16E4 - 0x004E1708 (36 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E16E4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E16E4: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 8;
    ecx = edi;
    MEM32(esi) = 0x86CC98;
    PUSH32(esp, 0x004E16F8u); RECOMP_ABI_CALL(0x004DB960u, sub_004DB960); /* call 0x004DB960 */

loc_004E16F8: ;
    ecx = edi;
    PUSH32(esp, 0x004E16FFu); RECOMP_ABI_CALL(0x004DB8C3u, sub_004DB8C3); /* call 0x004DB8C3 */

loc_004E16FF: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004DD576(); return; /* tail jmp 0x004DD576 */

}

/**
 * sub_004E1B54
 * Original: 0x004E1B54 - 0x004E1B78 (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E1B54(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E1B54: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 8;
    ecx = edi;
    MEM32(esi) = 0x86CC9C;
    PUSH32(esp, 0x004E1B68u); RECOMP_ABI_CALL(0x004DB960u, sub_004DB960); /* call 0x004DB960 */

loc_004E1B68: ;
    ecx = edi;
    PUSH32(esp, 0x004E1B6Fu); RECOMP_ABI_CALL(0x004DB8C3u, sub_004DB8C3); /* call 0x004DB8C3 */

loc_004E1B6F: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004DD576(); return; /* tail jmp 0x004DD576 */

}

/**
 * sub_004E1B78
 * Original: 0x004E1B78 - 0x004E1B9C (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E1B78(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E1B78: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 8;
    ecx = edi;
    MEM32(esi) = 0x86CCA0;
    PUSH32(esp, 0x004E1B8Cu); RECOMP_ABI_CALL(0x004DB960u, sub_004DB960); /* call 0x004DB960 */

loc_004E1B8C: ;
    ecx = edi;
    PUSH32(esp, 0x004E1B93u); RECOMP_ABI_CALL(0x004DB8C3u, sub_004DB8C3); /* call 0x004DB8C3 */

loc_004E1B93: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004DD576(); return; /* tail jmp 0x004DD576 */

}

/**
 * sub_004E1C78
 * Original: 0x004E1C78 - 0x004E1C9C (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E1C78(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E1C78: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 8;
    ecx = edi;
    MEM32(esi) = 0x86CCA4;
    PUSH32(esp, 0x004E1C8Cu); RECOMP_ABI_CALL(0x004DB960u, sub_004DB960); /* call 0x004DB960 */

loc_004E1C8C: ;
    ecx = edi;
    PUSH32(esp, 0x004E1C93u); RECOMP_ABI_CALL(0x004DB8C3u, sub_004DB8C3); /* call 0x004DB8C3 */

loc_004E1C93: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004DD576(); return; /* tail jmp 0x004DD576 */

}

/**
 * sub_004E1C9C
 * Original: 0x004E1C9C - 0x004E1CC0 (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E1C9C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E1C9C: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 8;
    ecx = edi;
    MEM32(esi) = 0x86CCA8;
    PUSH32(esp, 0x004E1CB0u); RECOMP_ABI_CALL(0x004DB960u, sub_004DB960); /* call 0x004DB960 */

loc_004E1CB0: ;
    ecx = edi;
    PUSH32(esp, 0x004E1CB7u); RECOMP_ABI_CALL(0x004DB8C3u, sub_004DB8C3); /* call 0x004DB8C3 */

loc_004E1CB7: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004DD576(); return; /* tail jmp 0x004DD576 */

}

/**
 * sub_004E1CC0
 * Original: 0x004E1CC0 - 0x004E1CE4 (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E1CC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E1CC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 8;
    ecx = edi;
    MEM32(esi) = 0x864880;
    PUSH32(esp, 0x004E1CD4u); RECOMP_ABI_CALL(0x004DB960u, sub_004DB960); /* call 0x004DB960 */

loc_004E1CD4: ;
    ecx = edi;
    PUSH32(esp, 0x004E1CDBu); RECOMP_ABI_CALL(0x004DB8C3u, sub_004DB8C3); /* call 0x004DB8C3 */

loc_004E1CDB: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004DD576(); return; /* tail jmp 0x004DD576 */

}

/**
 * sub_004E1D94
 * Original: 0x004E1D94 - 0x004E1DB8 (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E1D94(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E1D94: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 8;
    ecx = edi;
    MEM32(esi) = 0x86CCAC;
    PUSH32(esp, 0x004E1DA8u); RECOMP_ABI_CALL(0x004DB960u, sub_004DB960); /* call 0x004DB960 */

loc_004E1DA8: ;
    ecx = edi;
    PUSH32(esp, 0x004E1DAFu); RECOMP_ABI_CALL(0x004DB8C3u, sub_004DB8C3); /* call 0x004DB8C3 */

loc_004E1DAF: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004DD576(); return; /* tail jmp 0x004DD576 */

}

/**
 * sub_004E1DE4
 * Original: 0x004E1DE4 - 0x004E1E08 (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E1DE4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E1DE4: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 8;
    ecx = edi;
    MEM32(esi) = 0x86CCB0;
    PUSH32(esp, 0x004E1DF8u); RECOMP_ABI_CALL(0x004DB960u, sub_004DB960); /* call 0x004DB960 */

loc_004E1DF8: ;
    ecx = edi;
    PUSH32(esp, 0x004E1DFFu); RECOMP_ABI_CALL(0x004DB8C3u, sub_004DB8C3); /* call 0x004DB8C3 */

loc_004E1DFF: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004DD576(); return; /* tail jmp 0x004DD576 */

}

/**
 * sub_004E1E08
 * Original: 0x004E1E08 - 0x004E1E2C (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E1E08(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E1E08: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 8;
    ecx = edi;
    MEM32(esi) = 0x86CCB4;
    PUSH32(esp, 0x004E1E1Cu); RECOMP_ABI_CALL(0x004DB960u, sub_004DB960); /* call 0x004DB960 */

loc_004E1E1C: ;
    ecx = edi;
    PUSH32(esp, 0x004E1E23u); RECOMP_ABI_CALL(0x004DB8C3u, sub_004DB8C3); /* call 0x004DB8C3 */

loc_004E1E23: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004DD576(); return; /* tail jmp 0x004DD576 */

}

/**
 * sub_004E1E84
 * Original: 0x004E1E84 - 0x004E1EA8 (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E1E84(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E1E84: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 8;
    ecx = edi;
    MEM32(esi) = 0x86CCB8;
    PUSH32(esp, 0x004E1E98u); RECOMP_ABI_CALL(0x004DB960u, sub_004DB960); /* call 0x004DB960 */

loc_004E1E98: ;
    ecx = edi;
    PUSH32(esp, 0x004E1E9Fu); RECOMP_ABI_CALL(0x004DB8C3u, sub_004DB8C3); /* call 0x004DB8C3 */

loc_004E1E9F: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004DD576(); return; /* tail jmp 0x004DD576 */

}

/**
 * sub_004E1EA8
 * Original: 0x004E1EA8 - 0x004E1ECC (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E1EA8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E1EA8: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 8;
    ecx = edi;
    MEM32(esi) = 0x86CCBC;
    PUSH32(esp, 0x004E1EBCu); RECOMP_ABI_CALL(0x004DB960u, sub_004DB960); /* call 0x004DB960 */

loc_004E1EBC: ;
    ecx = edi;
    PUSH32(esp, 0x004E1EC3u); RECOMP_ABI_CALL(0x004DB8C3u, sub_004DB8C3); /* call 0x004DB8C3 */

loc_004E1EC3: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004DD576(); return; /* tail jmp 0x004DD576 */

}

/**
 * sub_004E1EF8
 * Original: 0x004E1EF8 - 0x004E1F1C (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E1EF8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E1EF8: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 8;
    ecx = edi;
    MEM32(esi) = 0x865244;
    PUSH32(esp, 0x004E1F0Cu); RECOMP_ABI_CALL(0x004DB960u, sub_004DB960); /* call 0x004DB960 */

loc_004E1F0C: ;
    ecx = edi;
    PUSH32(esp, 0x004E1F13u); RECOMP_ABI_CALL(0x004DB8C3u, sub_004DB8C3); /* call 0x004DB8C3 */

loc_004E1F13: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004DD576(); return; /* tail jmp 0x004DD576 */

}

/**
 * sub_004E1F1C
 * Original: 0x004E1F1C - 0x004E1F40 (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E1F1C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E1F1C: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 8;
    ecx = edi;
    MEM32(esi) = 0x86CCC0;
    PUSH32(esp, 0x004E1F30u); RECOMP_ABI_CALL(0x004DB960u, sub_004DB960); /* call 0x004DB960 */

loc_004E1F30: ;
    ecx = edi;
    PUSH32(esp, 0x004E1F37u); RECOMP_ABI_CALL(0x004DB8C3u, sub_004DB8C3); /* call 0x004DB8C3 */

loc_004E1F37: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004DD576(); return; /* tail jmp 0x004DD576 */

}

/**
 * sub_004E1F40
 * Original: 0x004E1F40 - 0x004E1F64 (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E1F40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E1F40: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 8;
    ecx = edi;
    MEM32(esi) = 0x86CCC4;
    PUSH32(esp, 0x004E1F54u); RECOMP_ABI_CALL(0x004DB960u, sub_004DB960); /* call 0x004DB960 */

loc_004E1F54: ;
    ecx = edi;
    PUSH32(esp, 0x004E1F5Bu); RECOMP_ABI_CALL(0x004DB8C3u, sub_004DB8C3); /* call 0x004DB8C3 */

loc_004E1F5B: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004DD576(); return; /* tail jmp 0x004DD576 */

}

/**
 * sub_004E1F64
 * Original: 0x004E1F64 - 0x004E1F88 (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E1F64(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E1F64: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 8;
    ecx = edi;
    MEM32(esi) = 0x8644E4;
    PUSH32(esp, 0x004E1F78u); RECOMP_ABI_CALL(0x004DB960u, sub_004DB960); /* call 0x004DB960 */

loc_004E1F78: ;
    ecx = edi;
    PUSH32(esp, 0x004E1F7Fu); RECOMP_ABI_CALL(0x004DB8C3u, sub_004DB8C3); /* call 0x004DB8C3 */

loc_004E1F7F: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004DD576(); return; /* tail jmp 0x004DD576 */

}

/**
 * sub_004E1F88
 * Original: 0x004E1F88 - 0x004E1FAC (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E1F88(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E1F88: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 8;
    ecx = edi;
    MEM32(esi) = 0x865248;
    PUSH32(esp, 0x004E1F9Cu); RECOMP_ABI_CALL(0x004DB960u, sub_004DB960); /* call 0x004DB960 */

loc_004E1F9C: ;
    ecx = edi;
    PUSH32(esp, 0x004E1FA3u); RECOMP_ABI_CALL(0x004DB8C3u, sub_004DB8C3); /* call 0x004DB8C3 */

loc_004E1FA3: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004DD576(); return; /* tail jmp 0x004DD576 */

}

/**
 * sub_004E1FAC
 * Original: 0x004E1FAC - 0x004E1FD0 (36 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E1FAC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E1FAC: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 8;
    ecx = edi;
    MEM32(esi) = 0x864210;
    PUSH32(esp, 0x004E1FC0u); RECOMP_ABI_CALL(0x004DB960u, sub_004DB960); /* call 0x004DB960 */

loc_004E1FC0: ;
    ecx = edi;
    PUSH32(esp, 0x004E1FC7u); RECOMP_ABI_CALL(0x004DB8C3u, sub_004DB8C3); /* call 0x004DB8C3 */

loc_004E1FC7: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004DD576(); return; /* tail jmp 0x004DD576 */

}

/**
 * sub_004E1FD0
 * Original: 0x004E1FD0 - 0x004E1FF4 (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E1FD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E1FD0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 8;
    ecx = edi;
    MEM32(esi) = 0x864214;
    PUSH32(esp, 0x004E1FE4u); RECOMP_ABI_CALL(0x004DB960u, sub_004DB960); /* call 0x004DB960 */

loc_004E1FE4: ;
    ecx = edi;
    PUSH32(esp, 0x004E1FEBu); RECOMP_ABI_CALL(0x004DB8C3u, sub_004DB8C3); /* call 0x004DB8C3 */

loc_004E1FEB: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004DD576(); return; /* tail jmp 0x004DD576 */

}

/**
 * sub_004E1FF4
 * Original: 0x004E1FF4 - 0x004E2018 (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E1FF4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E1FF4: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 8;
    ecx = edi;
    MEM32(esi) = 0x86CCC8;
    PUSH32(esp, 0x004E2008u); RECOMP_ABI_CALL(0x004DB960u, sub_004DB960); /* call 0x004DB960 */

loc_004E2008: ;
    ecx = edi;
    PUSH32(esp, 0x004E200Fu); RECOMP_ABI_CALL(0x004DB8C3u, sub_004DB8C3); /* call 0x004DB8C3 */

loc_004E200F: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004DD576(); return; /* tail jmp 0x004DD576 */

}

/**
 * sub_004E2018
 * Original: 0x004E2018 - 0x004E203C (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E2018(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E2018: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 8;
    ecx = edi;
    MEM32(esi) = 0x86CCCC;
    PUSH32(esp, 0x004E202Cu); RECOMP_ABI_CALL(0x004DB960u, sub_004DB960); /* call 0x004DB960 */

loc_004E202C: ;
    ecx = edi;
    PUSH32(esp, 0x004E2033u); RECOMP_ABI_CALL(0x004DB8C3u, sub_004DB8C3); /* call 0x004DB8C3 */

loc_004E2033: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004DD576(); return; /* tail jmp 0x004DD576 */

}

/**
 * sub_004E203C
 * Original: 0x004E203C - 0x004E2060 (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E203C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E203C: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 8;
    ecx = edi;
    MEM32(esi) = 0x86CCD0;
    PUSH32(esp, 0x004E2050u); RECOMP_ABI_CALL(0x004DB960u, sub_004DB960); /* call 0x004DB960 */

loc_004E2050: ;
    ecx = edi;
    PUSH32(esp, 0x004E2057u); RECOMP_ABI_CALL(0x004DB8C3u, sub_004DB8C3); /* call 0x004DB8C3 */

loc_004E2057: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004DD576(); return; /* tail jmp 0x004DD576 */

}

/**
 * sub_004E2060
 * Original: 0x004E2060 - 0x004E2084 (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E2060(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E2060: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 8;
    ecx = edi;
    MEM32(esi) = 0x8644E8;
    PUSH32(esp, 0x004E2074u); RECOMP_ABI_CALL(0x004DB960u, sub_004DB960); /* call 0x004DB960 */

loc_004E2074: ;
    ecx = edi;
    PUSH32(esp, 0x004E207Bu); RECOMP_ABI_CALL(0x004DB8C3u, sub_004DB8C3); /* call 0x004DB8C3 */

loc_004E207B: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004DD576(); return; /* tail jmp 0x004DD576 */

}

/**
 * sub_004E2084
 * Original: 0x004E2084 - 0x004E20A8 (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E2084(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E2084: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 8;
    ecx = edi;
    MEM32(esi) = 0x86CCD4;
    PUSH32(esp, 0x004E2098u); RECOMP_ABI_CALL(0x004DB960u, sub_004DB960); /* call 0x004DB960 */

loc_004E2098: ;
    ecx = edi;
    PUSH32(esp, 0x004E209Fu); RECOMP_ABI_CALL(0x004DB8C3u, sub_004DB8C3); /* call 0x004DB8C3 */

loc_004E209F: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004DD576(); return; /* tail jmp 0x004DD576 */

}

/**
 * sub_004E20A8
 * Original: 0x004E20A8 - 0x004E20CC (36 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E20A8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E20A8: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 8;
    ecx = edi;
    MEM32(esi) = 0x864E60;
    PUSH32(esp, 0x004E20BCu); RECOMP_ABI_CALL(0x004DB960u, sub_004DB960); /* call 0x004DB960 */

loc_004E20BC: ;
    ecx = edi;
    PUSH32(esp, 0x004E20C3u); RECOMP_ABI_CALL(0x004DB8C3u, sub_004DB8C3); /* call 0x004DB8C3 */

loc_004E20C3: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004DD576(); return; /* tail jmp 0x004DD576 */

}

/**
 * sub_004E20CC
 * Original: 0x004E20CC - 0x004E20F0 (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E20CC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E20CC: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 8;
    ecx = edi;
    MEM32(esi) = 0x86CCD8;
    PUSH32(esp, 0x004E20E0u); RECOMP_ABI_CALL(0x004DB960u, sub_004DB960); /* call 0x004DB960 */

loc_004E20E0: ;
    ecx = edi;
    PUSH32(esp, 0x004E20E7u); RECOMP_ABI_CALL(0x004DB8C3u, sub_004DB8C3); /* call 0x004DB8C3 */

loc_004E20E7: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004DD576(); return; /* tail jmp 0x004DD576 */

}

/**
 * sub_004E20F0
 * Original: 0x004E20F0 - 0x004E2114 (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E20F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E20F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 8;
    ecx = edi;
    MEM32(esi) = 0x8638AC;
    PUSH32(esp, 0x004E2104u); RECOMP_ABI_CALL(0x004DB960u, sub_004DB960); /* call 0x004DB960 */

loc_004E2104: ;
    ecx = edi;
    PUSH32(esp, 0x004E210Bu); RECOMP_ABI_CALL(0x004DB8C3u, sub_004DB8C3); /* call 0x004DB8C3 */

loc_004E210B: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004DD576(); return; /* tail jmp 0x004DD576 */

}

/**
 * sub_004E2114
 * Original: 0x004E2114 - 0x004E2138 (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E2114(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E2114: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 8;
    ecx = edi;
    MEM32(esi) = 0x86CCDC;
    PUSH32(esp, 0x004E2128u); RECOMP_ABI_CALL(0x004DB960u, sub_004DB960); /* call 0x004DB960 */

loc_004E2128: ;
    ecx = edi;
    PUSH32(esp, 0x004E212Fu); RECOMP_ABI_CALL(0x004DB8C3u, sub_004DB8C3); /* call 0x004DB8C3 */

loc_004E212F: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004DD576(); return; /* tail jmp 0x004DD576 */

}

/**
 * sub_004E2138
 * Original: 0x004E2138 - 0x004E215C (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E2138(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E2138: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 8;
    ecx = edi;
    MEM32(esi) = 0x864884;
    PUSH32(esp, 0x004E214Cu); RECOMP_ABI_CALL(0x004DB960u, sub_004DB960); /* call 0x004DB960 */

loc_004E214C: ;
    ecx = edi;
    PUSH32(esp, 0x004E2153u); RECOMP_ABI_CALL(0x004DB8C3u, sub_004DB8C3); /* call 0x004DB8C3 */

loc_004E2153: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004DD576(); return; /* tail jmp 0x004DD576 */

}

/**
 * sub_004E215C
 * Original: 0x004E215C - 0x004E2180 (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E215C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E215C: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 8;
    ecx = edi;
    MEM32(esi) = 0x86CCE0;
    PUSH32(esp, 0x004E2170u); RECOMP_ABI_CALL(0x004DB960u, sub_004DB960); /* call 0x004DB960 */

loc_004E2170: ;
    ecx = edi;
    PUSH32(esp, 0x004E2177u); RECOMP_ABI_CALL(0x004DB8C3u, sub_004DB8C3); /* call 0x004DB8C3 */

loc_004E2177: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004DD576(); return; /* tail jmp 0x004DD576 */

}

/**
 * sub_004E2180
 * Original: 0x004E2180 - 0x004E21A4 (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E2180(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E2180: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 8;
    ecx = edi;
    MEM32(esi) = 0x86CCE4;
    PUSH32(esp, 0x004E2194u); RECOMP_ABI_CALL(0x004DB960u, sub_004DB960); /* call 0x004DB960 */

loc_004E2194: ;
    ecx = edi;
    PUSH32(esp, 0x004E219Bu); RECOMP_ABI_CALL(0x004DB8C3u, sub_004DB8C3); /* call 0x004DB8C3 */

loc_004E219B: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004DD576(); return; /* tail jmp 0x004DD576 */

}

/**
 * sub_004E21A4
 * Original: 0x004E21A4 - 0x004E21C8 (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E21A4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E21A4: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 8;
    ecx = edi;
    MEM32(esi) = 0x864154;
    PUSH32(esp, 0x004E21B8u); RECOMP_ABI_CALL(0x004DB960u, sub_004DB960); /* call 0x004DB960 */

loc_004E21B8: ;
    ecx = edi;
    PUSH32(esp, 0x004E21BFu); RECOMP_ABI_CALL(0x004DB8C3u, sub_004DB8C3); /* call 0x004DB8C3 */

loc_004E21BF: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004DD576(); return; /* tail jmp 0x004DD576 */

}

/**
 * sub_004E21C8
 * Original: 0x004E21C8 - 0x004E21EC (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E21C8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E21C8: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 8;
    ecx = edi;
    MEM32(esi) = 0x863F3C;
    PUSH32(esp, 0x004E21DCu); RECOMP_ABI_CALL(0x004DB960u, sub_004DB960); /* call 0x004DB960 */

loc_004E21DC: ;
    ecx = edi;
    PUSH32(esp, 0x004E21E3u); RECOMP_ABI_CALL(0x004DB8C3u, sub_004DB8C3); /* call 0x004DB8C3 */

loc_004E21E3: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004DD576(); return; /* tail jmp 0x004DD576 */

}

/**
 * sub_004E2D7A
 * Original: 0x004E2D7A - 0x004E2D9C (34 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E2D7A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E2D7A: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x86CCE8;
    PUSH32(esp, 0x004E2D88u); RECOMP_ABI_CALL(0x004DD576u, sub_004DD576); /* call 0x004DD576 */

loc_004E2D88: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004E2D96; /* je: equal / zero */

loc_004E2D8F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004E2D95u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004E2D95: ;
    POP32(esp, ecx);

loc_004E2D96: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E2EBC
 * Original: 0x004E2EBC - 0x004E2ED8 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E2EBC(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E2EBC: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004E2EC4u); RECOMP_ABI_CALL(0x004E16E4u, sub_004E16E4); /* call 0x004E16E4 */

loc_004E2EC4: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004E2ED2; /* je: equal / zero */

loc_004E2ECB: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004E2ED1u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004E2ED1: ;
    POP32(esp, ecx);

loc_004E2ED2: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E2ED8
 * Original: 0x004E2ED8 - 0x004E2EF4 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E2ED8(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E2ED8: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004E2EE0u); RECOMP_ABI_CALL(0x004E1B54u, sub_004E1B54); /* call 0x004E1B54 */

loc_004E2EE0: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004E2EEE; /* je: equal / zero */

loc_004E2EE7: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004E2EEDu); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004E2EED: ;
    POP32(esp, ecx);

loc_004E2EEE: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E2EF4
 * Original: 0x004E2EF4 - 0x004E2F10 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E2EF4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E2EF4: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004E2EFCu); RECOMP_ABI_CALL(0x004E1B78u, sub_004E1B78); /* call 0x004E1B78 */

loc_004E2EFC: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004E2F0A; /* je: equal / zero */

loc_004E2F03: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004E2F09u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004E2F09: ;
    POP32(esp, ecx);

loc_004E2F0A: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E2F10
 * Original: 0x004E2F10 - 0x004E2F2C (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E2F10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E2F10: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004E2F18u); RECOMP_ABI_CALL(0x004E1C78u, sub_004E1C78); /* call 0x004E1C78 */

loc_004E2F18: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004E2F26; /* je: equal / zero */

loc_004E2F1F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004E2F25u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004E2F25: ;
    POP32(esp, ecx);

loc_004E2F26: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E2F2C
 * Original: 0x004E2F2C - 0x004E2F48 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E2F2C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E2F2C: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004E2F34u); RECOMP_ABI_CALL(0x004E1C9Cu, sub_004E1C9C); /* call 0x004E1C9C */

loc_004E2F34: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004E2F42; /* je: equal / zero */

loc_004E2F3B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004E2F41u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004E2F41: ;
    POP32(esp, ecx);

loc_004E2F42: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E2F48
 * Original: 0x004E2F48 - 0x004E2F64 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E2F48(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E2F48: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004E2F50u); RECOMP_ABI_CALL(0x004E1D94u, sub_004E1D94); /* call 0x004E1D94 */

loc_004E2F50: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004E2F5E; /* je: equal / zero */

loc_004E2F57: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004E2F5Du); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004E2F5D: ;
    POP32(esp, ecx);

loc_004E2F5E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E2F64
 * Original: 0x004E2F64 - 0x004E2F80 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E2F64(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E2F64: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004E2F6Cu); RECOMP_ABI_CALL(0x004E1DE4u, sub_004E1DE4); /* call 0x004E1DE4 */

loc_004E2F6C: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004E2F7A; /* je: equal / zero */

loc_004E2F73: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004E2F79u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004E2F79: ;
    POP32(esp, ecx);

loc_004E2F7A: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E2F80
 * Original: 0x004E2F80 - 0x004E2F9C (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E2F80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E2F80: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004E2F88u); RECOMP_ABI_CALL(0x004E1E08u, sub_004E1E08); /* call 0x004E1E08 */

loc_004E2F88: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004E2F96; /* je: equal / zero */

loc_004E2F8F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004E2F95u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004E2F95: ;
    POP32(esp, ecx);

loc_004E2F96: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E2F9C
 * Original: 0x004E2F9C - 0x004E2FB8 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E2F9C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E2F9C: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004E2FA4u); RECOMP_ABI_CALL(0x004E1E84u, sub_004E1E84); /* call 0x004E1E84 */

loc_004E2FA4: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004E2FB2; /* je: equal / zero */

loc_004E2FAB: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004E2FB1u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004E2FB1: ;
    POP32(esp, ecx);

loc_004E2FB2: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E2FB8
 * Original: 0x004E2FB8 - 0x004E2FD4 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E2FB8(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E2FB8: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004E2FC0u); RECOMP_ABI_CALL(0x004E1EA8u, sub_004E1EA8); /* call 0x004E1EA8 */

loc_004E2FC0: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004E2FCE; /* je: equal / zero */

loc_004E2FC7: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004E2FCDu); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004E2FCD: ;
    POP32(esp, ecx);

loc_004E2FCE: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E2FD4
 * Original: 0x004E2FD4 - 0x004E2FF0 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E2FD4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E2FD4: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004E2FDCu); RECOMP_ABI_CALL(0x004E1F1Cu, sub_004E1F1C); /* call 0x004E1F1C */

loc_004E2FDC: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004E2FEA; /* je: equal / zero */

loc_004E2FE3: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004E2FE9u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004E2FE9: ;
    POP32(esp, ecx);

loc_004E2FEA: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E2FF0
 * Original: 0x004E2FF0 - 0x004E300C (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E2FF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E2FF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004E2FF8u); RECOMP_ABI_CALL(0x004E1F40u, sub_004E1F40); /* call 0x004E1F40 */

loc_004E2FF8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004E3006; /* je: equal / zero */

loc_004E2FFF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004E3005u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004E3005: ;
    POP32(esp, ecx);

loc_004E3006: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E300C
 * Original: 0x004E300C - 0x004E3028 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E300C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E300C: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004E3014u); RECOMP_ABI_CALL(0x004E1FF4u, sub_004E1FF4); /* call 0x004E1FF4 */

loc_004E3014: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004E3022; /* je: equal / zero */

loc_004E301B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004E3021u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004E3021: ;
    POP32(esp, ecx);

loc_004E3022: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E3028
 * Original: 0x004E3028 - 0x004E3044 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E3028(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E3028: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004E3030u); RECOMP_ABI_CALL(0x004E2018u, sub_004E2018); /* call 0x004E2018 */

loc_004E3030: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004E303E; /* je: equal / zero */

loc_004E3037: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004E303Du); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004E303D: ;
    POP32(esp, ecx);

loc_004E303E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E3044
 * Original: 0x004E3044 - 0x004E3060 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E3044(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E3044: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004E304Cu); RECOMP_ABI_CALL(0x004E203Cu, sub_004E203C); /* call 0x004E203C */

loc_004E304C: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004E305A; /* je: equal / zero */

loc_004E3053: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004E3059u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004E3059: ;
    POP32(esp, ecx);

loc_004E305A: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E3060
 * Original: 0x004E3060 - 0x004E307C (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E3060(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E3060: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004E3068u); RECOMP_ABI_CALL(0x004E2084u, sub_004E2084); /* call 0x004E2084 */

loc_004E3068: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004E3076; /* je: equal / zero */

loc_004E306F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004E3075u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004E3075: ;
    POP32(esp, ecx);

loc_004E3076: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E307C
 * Original: 0x004E307C - 0x004E3098 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E307C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E307C: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004E3084u); RECOMP_ABI_CALL(0x004E20CCu, sub_004E20CC); /* call 0x004E20CC */

loc_004E3084: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004E3092; /* je: equal / zero */

loc_004E308B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004E3091u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004E3091: ;
    POP32(esp, ecx);

loc_004E3092: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E3098
 * Original: 0x004E3098 - 0x004E30B4 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E3098(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E3098: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004E30A0u); RECOMP_ABI_CALL(0x004E2114u, sub_004E2114); /* call 0x004E2114 */

loc_004E30A0: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004E30AE; /* je: equal / zero */

loc_004E30A7: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004E30ADu); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004E30AD: ;
    POP32(esp, ecx);

loc_004E30AE: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}
