/**
 * nhl_07_recomp - Recompiled code chunk 185
 * Functions: 250 (0x003DB890 - 0x003DFC20)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_003DB890
 * Original: 0x003DB890 - 0x003DB894 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DB890(void)
{

loc_003DB890: ;
    eax = MEM32(ecx + 0x10);
    esp += 4; return; /* ret */

}

/**
 * sub_003DB8A0
 * Original: 0x003DB8A0 - 0x003DB8B6 (22 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DB8A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DB8A0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x18) (32-bit) */
    MEM32(ecx + 0x10) = eax;
    if (CMP_B(_fa, _fb)) goto loc_003DB8B3; /* jb: below (unsigned <) */

loc_003DB8AC: ;
    MEM32(ecx + 0xC) = 1;

loc_003DB8B3: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003DB8C0
 * Original: 0x003DB8C0 - 0x003DB8CB (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DB8C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DB8C0: ;
    edx = MEM32(ecx + 0xC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

}

/**
 * sub_003DB8D0
 * Original: 0x003DB8D0 - 0x003DB8E4 (20 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DB8D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DB8D0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = 0x835870;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_003DB8F0
 * Original: 0x003DB8F0 - 0x003DB912 (34 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DB8F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DB8F0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x8357CC;
    if (TEST_Z(_fa, _fb)) goto loc_003DB90C; /* je: equal / zero */

loc_003DB900: ;
    ecx = MEM32(0x907224);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x003DB90Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003DB909u); } /* indirect call */
    }

loc_003DB90C: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003DB920
 * Original: 0x003DB920 - 0x003DB967 (71 bytes, 33 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DB920(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DB920: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_003DB933; /* jne: not equal / not zero */

loc_003DB92C: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_003DB933: ;
    ecx = MEM32(esi + 0xC);
    eax = MEM32(esi + 8);
    edx = ecx + edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003DB944; /* jbe: below or equal (unsigned <=) */

loc_003DB940: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = eax;

loc_003DB944: ;
    eax = MEM32(esi + 4);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003DB955u); RECOMP_ABI_CALL(0x0059EADCu, sub_0059EADC); /* call 0x0059EADC */

loc_003DB955: ;
    edx = MEM32(esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x003DB960u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003DB95Du); } /* indirect call */
    }

loc_003DB960: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003DB980
 * Original: 0x003DB980 - 0x003DB9AE (46 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DB980(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DB980: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), 2 (32-bit) */
    MEM32(esi) = 0x8357C8;
    if (CMP_EQ(_fa, _fb)) goto loc_003DB998; /* je: equal / zero */

loc_003DB98F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003DB995u); RECOMP_ABI_CALL(0x00028E80u, sub_00028E80); /* call 0x00028E80 */

loc_003DB995: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003DB998: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003DB9A8; /* je: equal / zero */

loc_003DB99F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003DB9A5u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_003DB9A5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003DB9A8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003DB9C0
 * Original: 0x003DB9C0 - 0x003DBA00 (64 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DB9C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DB9C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = esi + 4;
    MEM32(esi) = 0x835830;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), 2 (32-bit) */
    MEM32(eax) = 0x8357C8;
    if (CMP_EQ(_fa, _fb)) goto loc_003DB9E1; /* je: equal / zero */

loc_003DB9D8: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003DB9DEu); RECOMP_ABI_CALL(0x00028E80u, sub_00028E80); /* call 0x00028E80 */

loc_003DB9DE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003DB9E1: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    MEM32(esi) = 0x8357CC;
    if (TEST_Z(_fa, _fb)) goto loc_003DB9FA; /* je: equal / zero */

loc_003DB9EE: ;
    ecx = MEM32(0x907224);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x003DB9FAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003DB9F7u); } /* indirect call */
    }

loc_003DB9FA: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003DBA10
 * Original: 0x003DBA10 - 0x003DBA13 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DBA10(void)
{

loc_003DBA10: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003DBA20
 * Original: 0x003DBA20 - 0x003DBA24 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DBA20(void)
{

loc_003DBA20: ;
    eax = MEM32(ecx + 0x14);
    esp += 4; return; /* ret */

}

/**
 * sub_003DBA30
 * Original: 0x003DBA30 - 0x003DBA36 (6 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DBA30(void)
{

loc_003DBA30: ;
    eax = MEM32(ecx + 0x14);
    eax = MEM32(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_003DBA40
 * Original: 0x003DBA40 - 0x003DBA44 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DBA40(void)
{

loc_003DBA40: ;
    SET_LO8(eax, MEM8(ecx + 0x1C));
    esp += 4; return; /* ret */

}

/**
 * sub_003DBA50
 * Original: 0x003DBA50 - 0x003DBA66 (22 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DBA50(void)
{

loc_003DBA50: ;
    eax = ecx;
    ecx = MEM32(eax + 0x14);
    ecx = MEM32(ecx);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x003DBA62u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003DBA60u); } /* indirect call */
    }

loc_003DBA62: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003DBA70
 * Original: 0x003DBA70 - 0x003DBA79 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DBA70(void)
{

loc_003DBA70: ;
    eax = ecx;
    MEM32(eax) = 0x8358B0;
    esp += 4; return; /* ret */

}

/**
 * sub_003DBA80
 * Original: 0x003DBA80 - 0x003DBA83 (3 bytes, 1 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DBA80(void)
{

loc_003DBA80: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003DBA90
 * Original: 0x003DBA90 - 0x003DBA95 (5 bytes, 2 insns)
 * CC: cdecl, 2 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_003DBA90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DBA90: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003DBAA0
 * Original: 0x003DBAA0 - 0x003DBAA7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DBAA0(void)
{

loc_003DBAA0: ;
    MEM32(ecx) = 0x8358B0;
    esp += 4; return; /* ret */

}

/**
 * sub_003DBAB0
 * Original: 0x003DBAB0 - 0x003DBB0C (92 bytes, 41 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DBAB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DBAB0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_003DBAE3; /* jne: not equal / not zero */

loc_003DBABD: ;
    PUSH32(esp, 0x2C);
    PUSH32(esp, 0x003DBAC4u); RECOMP_ABI_CALL(0x00029A2Eu, sub_00029A2E); /* call 0x00029A2E */

loc_003DBAC4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DBAE3; /* je: equal / zero */

loc_003DBACB: ;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x003DBAE3u); RECOMP_ABI_CALL(0x000118BBu, sub_000118BB); /* call 0x000118BB */

loc_003DBAE3: ;
    eax = MEM32(esi);
    edx = MEM32(eax + 0x14);
    edi = MEM32(esp + 0x14);
    ecx = MEM32(edx);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x003DBAF4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003DBAF2u); } /* indirect call */
    }

loc_003DBAF4: ;
    ecx = MEM32(esi);
    SET_LO8(eax, MEM8(ecx + 0x1C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_003DBB09; /* jne: not equal / not zero */

loc_003DBAFF: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DBB09; /* je: equal / zero */

loc_003DBB03: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003DBB09u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003DBB07u); } /* indirect call */
    }

loc_003DBB09: ;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_003DBB30
 * Original: 0x003DBB30 - 0x003DBB47 (23 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DBB30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003DBB30: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DBB44; /* je: equal / zero */

loc_003DBB38: ;
    eax = MEM32(ecx);
    MEM32(esp + 4) = 1;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax)); return; /* indirect tail jmp */

loc_003DBB44: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003DBB50
 * Original: 0x003DBB50 - 0x003DBB6F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DBB50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DBB50: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x8358B0;
    if (TEST_Z(_fa, _fb)) goto loc_003DBB69; /* je: equal / zero */

loc_003DBB60: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003DBB66u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_003DBB66: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003DBB69: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003DBB80
 * Original: 0x003DBB80 - 0x003DBBC0 (64 bytes, 26 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DBB80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DBB80: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_003DBBA0; /* jne: not equal / not zero */

loc_003DBB8E: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(0x907BA0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003DBB9Eu); RECOMP_ABI_CALL(0x0001AF51u, sub_0001AF51); /* call 0x0001AF51 */

loc_003DBB9E: ;
    goto loc_003DBBA3;

loc_003DBBA0: ;
    eax = MEM32(eax + 0x14);

loc_003DBBA3: ;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x003DBBBBu); RECOMP_ABI_CALL(0x0001CB8Au, sub_0001CB8A); /* call 0x0001CB8A */

loc_003DBBBB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_003DBBD0
 * Original: 0x003DBBD0 - 0x003DBBE4 (20 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DBBD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DBBD0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = 0x8358D8;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_003DBBF0
 * Original: 0x003DBBF0 - 0x003DBBF7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DBBF0(void)
{

loc_003DBBF0: ;
    MEM32(ecx) = 0x8358D8;
    esp += 4; return; /* ret */

}

/**
 * sub_003DBC00
 * Original: 0x003DBC00 - 0x003DBC04 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DBC00(void)
{

loc_003DBC00: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_003DBC10
 * Original: 0x003DBC10 - 0x003DBC2F (31 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DBC10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DBC10: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x8358D8;
    if (TEST_Z(_fa, _fb)) goto loc_003DBC29; /* je: equal / zero */

loc_003DBC20: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003DBC26u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_003DBC26: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003DBC29: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003DBC40
 * Original: 0x003DBC40 - 0x003DBC8B (75 bytes, 25 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DBC40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DBC40: ;
    edx = MEM32(esp + 0x10);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0x10);
    MEM32(esi + 0x10) = ecx;
    ecx = MEM32(esp + 0x18);
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = eax;
    MEM8(esi + 0x1C) = LO8(eax);
    MEM32(esi + 0x20) = eax;
    MEM32(esi + 0x24) = eax;
    eax = MEM32(esp + 8);
    MEM32(esi + 0x18) = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(esi) = 0x8358E4;
    MEM32(esi + 0x14) = edx;
    MEM32(esi + 0x28) = eax;
    PUSH32(esp, esi);
    MEM32(eax) = esi;
    PUSH32(esp, 0x003DBC85u); RECOMP_ABI_CALL(0x00015EE3u, sub_00015EE3); /* call 0x00015EE3 */

loc_003DBC85: ;
    eax = esi;
    POP32(esp, esi);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_003DBCA0
 * Original: 0x003DBCA0 - 0x003DBD0A (106 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DBCA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DBCA0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x14);
    MEM32(esi) = 0x8358E4;
    ecx = MEM32(eax);
    edx = MEM32(ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x003DBCB4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003DBCB1u); } /* indirect call */
    }

loc_003DBCB4: ;
    eax = MEM32(esi + 0x28);
    MEM32(eax) = 0;
    ecx = MEM32(esi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003DBCC6u); RECOMP_ABI_CALL(0x00034082u, sub_00034082); /* call 0x00034082 */

loc_003DBCC6: ;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DBD02; /* je: equal / zero */

loc_003DBCCD: ;
    ecx = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x20 (32-bit) */
    PUSH32(esp, eax);
    if (CMP_G(_fas, _fbs)) goto loc_003DBCE9; /* jg: greater (signed >) */

loc_003DBCD6: ;
    ecx = MEM32(0x907BB0);
    PUSH32(esp, 0x003DBCE1u); RECOMP_ABI_CALL(0x00035306u, sub_00035306); /* call 0x00035306 */

loc_003DBCE1: ;
    MEM32(esi) = 0x8358D8;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003DBCE9: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xEC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xEC (32-bit) */
    ecx = MEM32(0x907BB4);
    if (CMP_LE(_fas, _fbs)) goto loc_003DBCFD; /* jle: less or equal (signed <=) */

loc_003DBCF7: ;
    ecx = MEM32(0x907BB8);

loc_003DBCFD: ;
    PUSH32(esp, 0x003DBD02u); RECOMP_ABI_CALL(0x00035306u, sub_00035306); /* call 0x00035306 */

loc_003DBD02: ;
    MEM32(esi) = 0x8358D8;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003DBD30
 * Original: 0x003DBD30 - 0x003DBD91 (97 bytes, 31 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DBD30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DBD30: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DBD8A; /* jne: not equal / not zero */

loc_003DBD3A: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5DC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5DC (32-bit) */
    MEM32(esi + 0x20) = eax;
    if (CMP_G(_fas, _fbs)) goto loc_003DBD8A; /* jg: greater (signed >) */

loc_003DBD48: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xEC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xEC (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003DBD61; /* jle: less or equal (signed <=) */

loc_003DBD4F: ;
    ecx = MEM32(0x907BB8);
    PUSH32(esp, 0x003DBD5Au); RECOMP_ABI_CALL(0x0002208Fu, sub_0002208F); /* call 0x0002208F */

loc_003DBD5A: ;
    MEM32(esi + 0x24) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_003DBD61: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003DBD78; /* jle: less or equal (signed <=) */

loc_003DBD66: ;
    ecx = MEM32(0x907BB4);
    PUSH32(esp, 0x003DBD71u); RECOMP_ABI_CALL(0x0002208Fu, sub_0002208F); /* call 0x0002208F */

loc_003DBD71: ;
    MEM32(esi + 0x24) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_003DBD78: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003DBD8A; /* jle: less or equal (signed <=) */

loc_003DBD7C: ;
    ecx = MEM32(0x907BB0);
    PUSH32(esp, 0x003DBD87u); RECOMP_ABI_CALL(0x0002208Fu, sub_0002208F); /* call 0x0002208F */

loc_003DBD87: ;
    MEM32(esi + 0x24) = eax;

loc_003DBD8A: ;
    eax = MEM32(esi + 0x24);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003DBDB0
 * Original: 0x003DBDB0 - 0x003DBDBB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DBDB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003DBDB0: ;
    ecx = MEM32(0x907BAC);
    g_seh_ebp = ebp; sub_0002208F(); return; /* tail jmp 0x0002208F */

}

/**
 * sub_003DBDC0
 * Original: 0x003DBDC0 - 0x003DBDD1 (17 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DBDC0(void)
{

loc_003DBDC0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x907BAC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003DBDD0u); RECOMP_ABI_CALL(0x00035306u, sub_00035306); /* call 0x00035306 */

loc_003DBDD0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003DBDE0
 * Original: 0x003DBDE0 - 0x003DBE06 (38 bytes, 18 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DBDE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DBDE0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x14);
    ecx = MEM32(eax);
    eax = MEM32(esp + 8);
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x003DBDF3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003DBDF0u); } /* indirect call */
    }

loc_003DBDF3: ;
    SET_LO8(eax, MEM8(esi + 0x1C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DBE02; /* jne: not equal / not zero */

loc_003DBDFA: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x003DBE02u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003DBE00u); } /* indirect call */
    }

loc_003DBE02: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003DBE10
 * Original: 0x003DBE10 - 0x003DBE31 (33 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DBE10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DBE10: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x003DBE18u); RECOMP_ABI_CALL(0x0001B3B1u, sub_0001B3B1); /* call 0x0001B3B1 */

loc_003DBE18: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003DBE2B; /* je: equal / zero */

loc_003DBE1F: ;
    ecx = MEM32(0x907BAC);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003DBE2Bu); RECOMP_ABI_CALL(0x00035306u, sub_00035306); /* call 0x00035306 */

loc_003DBE2B: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003DBE40
 * Original: 0x003DBE40 - 0x003DBE44 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DBE40(void)
{

loc_003DBE40: ;
    eax = MEM32(ecx + 0x14);
    esp += 4; return; /* ret */

}

/**
 * sub_003DBE50
 * Original: 0x003DBE50 - 0x003DBE5F (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DBE50(void)
{

loc_003DBE50: ;
    eax = MEM32(ecx);
    ecx = MEM32(0x907BA0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003DBE5Eu); RECOMP_ABI_CALL(0x00024B73u, sub_00024B73); /* call 0x00024B73 */

loc_003DBE5E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003DBE70
 * Original: 0x003DBE70 - 0x003DBE7E (14 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DBE70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DBE70: ;
    eax = ZX8(MEM8(ecx + 3));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 3 (8-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_003DBE7D; /* jbe: below or equal (unsigned <=) */

loc_003DBE78: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 3 (8-bit) */
    if (CMP_A(_fa & _fb, 0)) goto loc_003DBE78; /* ja: above (unsigned >) */

loc_003DBE7D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003DBE90
 * Original: 0x003DBE90 - 0x003DBEBA (42 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DBE90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DBE90: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    ecx = MEM32(0x907BA0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003DBEA1u); RECOMP_ABI_CALL(0x00024B73u, sub_00024B73); /* call 0x00024B73 */

loc_003DBEA1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DBEA9; /* jne: not equal / not zero */

loc_003DBEA5: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_003DBEAC;

loc_003DBEA9: ;
    ecx = MEM32(eax + 0x14);

loc_003DBEAC: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO8(eax, 1);
    if (CMP_EQ(_fa, _fb)) goto loc_003DBEB8; /* je: equal / zero */

loc_003DBEB2: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x003DBEB8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003DBEB5u); } /* indirect call */
    }

loc_003DBEB8: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003DBED0
 * Original: 0x003DBED0 - 0x003DBEF5 (37 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DBED0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DBED0: ;
    edx = MEM32(esp + 4);
    eax = ecx;
    ecx = ZX8(MEM8(eax + 3));
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
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003DBF00
 * Original: 0x003DBF00 - 0x003DBF25 (37 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DBF00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DBF00: ;
    edx = MEM32(esp + 4);
    eax = ecx;
    ecx = ZX8(MEM8(eax + 3));
    PUSH32(esp, esi);
    esi = MEM32(edx + 4);
    edx = ecx;
    PUSH32(esp, edi);
    edi = MEM32(eax + 4);
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
    ecx = edx;
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
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003DBF30
 * Original: 0x003DBF30 - 0x003DBF4E (30 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DBF30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DBF30: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    eax = ecx;
    ecx = ZX8(MEM8(eax + 3));
    esi = MEM32(eax + 4);
    PUSH32(esp, edi);
    edi = MEM32(edx + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    POP32(esp, edi);
    SET_LO8(eax, ((_flags != 0)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003DBF60
 * Original: 0x003DBF60 - 0x003DBF6B (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DBF60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DBF60: ;
    edx = MEM32(ecx + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 4; return; /* ret */

}

/**
 * sub_003DBF70
 * Original: 0x003DBF70 - 0x003DBF87 (23 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DBF70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DBF70: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = 0x8358F0;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_003DBF90
 * Original: 0x003DBF90 - 0x003DBF91 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DBF90(void)
{

loc_003DBF90: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003DBFA0
 * Original: 0x003DBFA0 - 0x003DBFA1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DBFA0(void)
{

loc_003DBFA0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003DBFB0
 * Original: 0x003DBFB0 - 0x003DBFB3 (3 bytes, 1 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DBFB0(void)
{

loc_003DBFB0: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003DBFC0
 * Original: 0x003DBFC0 - 0x003DBFDF (31 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DBFC0(void)
{

loc_003DBFC0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x003DBFD0u); RECOMP_ABI_CALL(0x000161EAu, sub_000161EA); /* call 0x000161EA */

loc_003DBFD0: ;
    eax = MEM32(esi);
    ecx = esi;
    MEM32(esi + 4) = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x003DBFDAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003DBFD7u); } /* indirect call */
    }

loc_003DBFDA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003DBFF0
 * Original: 0x003DBFF0 - 0x003DC00B (27 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DBFF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003DBFF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003DBFFCu); RECOMP_ABI_CALL(0x0001CF86u, sub_0001CF86); /* call 0x0001CF86 */

loc_003DBFFC: ;
    eax = MEM32(esi);
    MEM32(esi + 4) = 0;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 8)); return; /* indirect tail jmp */

}

/**
 * sub_003DC020
 * Original: 0x003DC020 - 0x003DC05F (63 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DC020(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DC020: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esi + 8) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_003DC05A; /* je: equal / zero */

loc_003DC032: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x003DC03Au); RECOMP_ABI_CALL(0x0001CF86u, sub_0001CF86); /* call 0x0001CF86 */

loc_003DC03A: ;
    edx = MEM32(esi);
    ecx = esi;
    MEM32(esi + 4) = 0;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x003DC048u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003DC045u); } /* indirect call */
    }

loc_003DC048: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x003DC050u); RECOMP_ABI_CALL(0x000161EAu, sub_000161EA); /* call 0x000161EA */

loc_003DC050: ;
    eax = MEM32(esi);
    ecx = esi;
    MEM32(esi + 4) = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x003DC05Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003DC057u); } /* indirect call */
    }

loc_003DC05A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003DC070
 * Original: 0x003DC070 - 0x003DC097 (39 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DC070(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003DC070: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = 0x8358F0;
    if (CMP_EQ(_fa, _fb)) goto loc_003DC095; /* je: equal / zero */

loc_003DC080: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003DC086u); RECOMP_ABI_CALL(0x0001CF86u, sub_0001CF86); /* call 0x0001CF86 */

loc_003DC086: ;
    eax = MEM32(esi);
    MEM32(esi + 4) = 0;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 8)); return; /* indirect tail jmp */

loc_003DC095: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003DC0A0
 * Original: 0x003DC0A0 - 0x003DC0DD (61 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DC0A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DC0A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = 0x8358F0;
    if (CMP_EQ(_fa, _fb)) goto loc_003DC0C4; /* je: equal / zero */

loc_003DC0B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003DC0B6u); RECOMP_ABI_CALL(0x0001CF86u, sub_0001CF86); /* call 0x0001CF86 */

loc_003DC0B6: ;
    eax = MEM32(esi);
    ecx = esi;
    MEM32(esi + 4) = 0;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x003DC0C4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003DC0C1u); } /* indirect call */
    }

loc_003DC0C4: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003DC0D7; /* je: equal / zero */

loc_003DC0CB: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x003DC0D7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003DC0D4u); } /* indirect call */
    }

loc_003DC0D7: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003DC0F0
 * Original: 0x003DC0F0 - 0x003DC0F4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DC0F0(void)
{

loc_003DC0F0: ;
    eax = MEM32(ecx + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_003DC100
 * Original: 0x003DC100 - 0x003DC104 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DC100(void)
{

loc_003DC100: ;
    eax = MEM32(ecx + 0x10);
    esp += 4; return; /* ret */

}

/**
 * sub_003DC110
 * Original: 0x003DC110 - 0x003DC114 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DC110(void)
{

loc_003DC110: ;
    eax = MEM32(ecx + 0xC);
    esp += 4; return; /* ret */

}

/**
 * sub_003DC120
 * Original: 0x003DC120 - 0x003DC12A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DC120(void)
{

loc_003DC120: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x10) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003DC130
 * Original: 0x003DC130 - 0x003DC13A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DC130(void)
{

loc_003DC130: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0xC) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003DC140
 * Original: 0x003DC140 - 0x003DC144 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DC140(void)
{

loc_003DC140: ;
    eax = ecx + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_003DC150
 * Original: 0x003DC150 - 0x003DC155 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DC150(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DC150: ;
    MEM16(ecx + 0x1A) = MEM16(ecx + 0x1A) + 1;
    _fa = (uint32_t)(MEM16(ecx + 0x1A)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_003DC160
 * Original: 0x003DC160 - 0x003DC18E (46 bytes, 16 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DC160(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DC160: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x10) = ecx;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = eax;
    MEM32(esi) = 0x835904;
    MEM32(esi + 0x14) = eax;
    PUSH32(esp, 0x003DC188u); RECOMP_ABI_CALL(0x00015EE3u, sub_00015EE3); /* call 0x00015EE3 */

loc_003DC188: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003DC1A0
 * Original: 0x003DC1A0 - 0x003DC1D0 (48 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DC1A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DC1A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x835904;
    if (CMP_EQ(_fa, _fb)) goto loc_003DC1BF; /* je: equal / zero */

loc_003DC1B0: ;
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, 0x003DC1B8u); RECOMP_ABI_CALL(0x0002C6C5u, sub_0002C6C5); /* call 0x0002C6C5 */

loc_003DC1B8: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DC1B0; /* jne: not equal / not zero */

loc_003DC1BF: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003DC1C8u); RECOMP_ABI_CALL(0x00034082u, sub_00034082); /* call 0x00034082 */

loc_003DC1C8: ;
    MEM32(esi) = 0x8358D8;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003DC1E0
 * Original: 0x003DC1E0 - 0x003DC209 (41 bytes, 17 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DC1E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DC1E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DC205; /* je: equal / zero */

loc_003DC1EA: ;
    edx = MEM32(esp + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x10);
    ecx = eax;
    eax = MEM32(ecx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x003DC1FDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003DC1FAu); } /* indirect call */
    }

loc_003DC1FD: ;
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, 0x003DC205u); RECOMP_ABI_CALL(0x0002A802u, sub_0002A802); /* call 0x0002A802 */

loc_003DC205: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003DC220
 * Original: 0x003DC220 - 0x003DC28A (106 bytes, 43 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DC220(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DC220: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x14);
    eax = edi;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DC248; /* je: equal / zero */

loc_003DC231: ;
    PUSH32(esp, ebx);
    ebx = MEM32(edx + 8);

loc_003DC235: ;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003DC243; /* jle: less or equal (signed <=) */

loc_003DC23A: ;
    esi = eax;
    eax = MEM32(eax + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DC235; /* jne: not equal / not zero */

loc_003DC243: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_003DC26B; /* jne: not equal / not zero */

loc_003DC248: ;
    MEM32(edx + 0x10) = edi;
    MEM32(edx + 0xC) = 0;
    eax = MEM32(ecx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DC25C; /* je: equal / zero */

loc_003DC259: ;
    MEM32(eax + 0xC) = edx;

loc_003DC25C: ;
    MEM32(ecx + 0x14) = edx;
    ecx = MEM32(ecx + 0x10);
    MEM16(ecx + 0x1A) = MEM16(ecx + 0x1A) + 1;
    _fa = (uint32_t)(MEM16(ecx + 0x1A)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_003DC26B: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(edx + 0x10) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_003DC278; /* je: equal / zero */

loc_003DC275: ;
    MEM32(eax + 0xC) = edx;

loc_003DC278: ;
    MEM32(edx + 0xC) = esi;
    MEM32(esi + 0x10) = edx;
    ecx = MEM32(ecx + 0x10);
    MEM16(ecx + 0x1A) = MEM16(ecx + 0x1A) + 1;
    _fa = (uint32_t)(MEM16(ecx + 0x1A)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003DC2B0
 * Original: 0x003DC2B0 - 0x003DC2F1 (65 bytes, 21 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DC2B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DC2B0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_003DC2C4; /* jne: not equal / not zero */

loc_003DC2BC: ;
    edx = MEM32(eax + 0x10);
    MEM32(ecx + 0x14) = edx;
    goto loc_003DC2CA;

loc_003DC2C4: ;
    edi = MEM32(eax + 0x10);
    MEM32(edx + 0x10) = edi;

loc_003DC2CA: ;
    edx = MEM32(eax + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DC2D7; /* je: equal / zero */

loc_003DC2D1: ;
    edi = MEM32(eax + 0xC);
    MEM32(edx + 0xC) = edi;

loc_003DC2D7: ;
    MEM32(eax + 0xC) = 0;
    MEM32(eax + 0x10) = 0;
    ecx = MEM32(ecx + 0x10);
    PUSH32(esp, 0x003DC2EDu); RECOMP_ABI_CALL(0x00028AA2u, sub_00028AA2); /* call 0x00028AA2 */

loc_003DC2ED: ;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003DC310
 * Original: 0x003DC310 - 0x003DC357 (71 bytes, 24 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DC310(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DC310: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x835904;
    if (CMP_EQ(_fa, _fb)) goto loc_003DC32F; /* je: equal / zero */

loc_003DC320: ;
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, 0x003DC328u); RECOMP_ABI_CALL(0x0002C6C5u, sub_0002C6C5); /* call 0x0002C6C5 */

loc_003DC328: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DC320; /* jne: not equal / not zero */

loc_003DC32F: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003DC338u); RECOMP_ABI_CALL(0x00034082u, sub_00034082); /* call 0x00034082 */

loc_003DC338: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    MEM32(esi) = 0x8358D8;
    if (TEST_Z(_fa, _fb)) goto loc_003DC351; /* je: equal / zero */

loc_003DC345: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x003DC351u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003DC34Eu); } /* indirect call */
    }

loc_003DC351: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003DC370
 * Original: 0x003DC370 - 0x003DC385 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DC370(void)
{

loc_003DC370: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x835910);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003DC384u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003DC382u); } /* indirect call */
    }

loc_003DC384: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003DC390
 * Original: 0x003DC390 - 0x003DC397 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DC390(void)
{

loc_003DC390: ;
    MEM32(ecx) = 0x835928;
    esp += 4; return; /* ret */

}

/**
 * sub_003DC3A0
 * Original: 0x003DC3A0 - 0x003DC3A6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DC3A0(void)
{

loc_003DC3A0: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_003DC3B0
 * Original: 0x003DC3B0 - 0x003DC3B5 (5 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DC3B0(void)
{

loc_003DC3B0: ;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003DC3C0
 * Original: 0x003DC3C0 - 0x003DC3E2 (34 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DC3C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DC3C0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x835928;
    if (TEST_Z(_fa, _fb)) goto loc_003DC3DC; /* je: equal / zero */

loc_003DC3D0: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x003DC3DCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003DC3D9u); } /* indirect call */
    }

loc_003DC3DC: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003DC3F0
 * Original: 0x003DC3F0 - 0x003DC3F4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DC3F0(void)
{

loc_003DC3F0: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_003DC400
 * Original: 0x003DC400 - 0x003DC404 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DC400(void)
{

loc_003DC400: ;
    eax = MEM32(ecx + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_003DC410
 * Original: 0x003DC410 - 0x003DC414 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DC410(void)
{

loc_003DC410: ;
    eax = MEM32(ecx + 0xC);
    esp += 4; return; /* ret */

}

/**
 * sub_003DC420
 * Original: 0x003DC420 - 0x003DC426 (6 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DC420(void)
{

loc_003DC420: ;
    eax = MEM32(ecx + 0x18);
    eax = MEM32(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_003DC430
 * Original: 0x003DC430 - 0x003DC439 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DC430(void)
{

loc_003DC430: ;
    eax = ecx;
    MEM32(eax) = 0x835928;
    esp += 4; return; /* ret */

}

/**
 * sub_003DC440
 * Original: 0x003DC440 - 0x003DC4BF (127 bytes, 49 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DC440(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003DC440: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = ecx;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    MEM32(ebx) = 0x83595C;
    eax = MEM32(esi + 4);
    MEM32(ebx + 4) = eax;
    ebp = ZX8(MEM8(ebx + 7));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    MEM32(ebx + 8) = eax;
    MEM32(ebx + 0xC) = eax;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83594C);
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x003DC472u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003DC470u); } /* indirect call */
    }

loc_003DC472: ;
    MEM32(ebx + 8) = eax;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83593C);
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003DC485u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003DC483u); } /* indirect call */
    }

loc_003DC485: ;
    edi = MEM32(ebx + 8);
    MEM32(ebx + 0xC) = eax;
    esi = MEM32(esi + 8);
    eax = MEM32(esp + 0x14);
    ecx = ebp;
    edx = ecx;
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
    ecx = edx;
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
    esi = MEM32(eax + 0xC);
    edi = MEM32(ebx + 0xC);
    ecx = ebp;
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
    ecx = edx;
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
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003DC4E0
 * Original: 0x003DC4E0 - 0x003DC4E3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_003DC4E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DC4E0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_003DC4F0
 * Original: 0x003DC4F0 - 0x003DC51F (47 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DC4F0(void)
{

loc_003DC4F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    edx = MEM32(esi + 8);
    MEM32(esi) = 0x83595C;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x003DC508u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003DC505u); } /* indirect call */
    }

loc_003DC508: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esi + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x003DC517u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003DC514u); } /* indirect call */
    }

loc_003DC517: ;
    MEM32(esi) = 0x835928;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003DC530
 * Original: 0x003DC530 - 0x003DC556 (38 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DC530(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DC530: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x835910);
    PUSH32(esp, 0x10);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003DC544u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003DC542u); } /* indirect call */
    }

loc_003DC544: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DC552; /* je: equal / zero */

loc_003DC548: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x003DC550u); RECOMP_ABI_CALL(0x000246BEu, sub_000246BE); /* call 0x000246BE */

loc_003DC550: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003DC552: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003DC560
 * Original: 0x003DC560 - 0x003DC580 (32 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_003DC560(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DC560: ;
    ecx = MEM32(eax + 4);
    eax = MEM32(ecx);
    ecx = MEM32(edx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003DC57D; /* jb: below (unsigned <) */

loc_003DC56C: ;
    edx = MEM32(esp + 4);
    ecx = MEM32(edx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx) (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_003DC57D; /* ja: above (unsigned >) */

loc_003DC577: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_003DC57D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_003DC590
 * Original: 0x003DC590 - 0x003DC5B3 (35 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_003DC590(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DC590: ;
    ecx = MEM32(eax + 4);
    SET_LO16(eax, MEM16(ecx));
    ecx = MEM32(edx + 4);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), MEM16(ecx) (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003DC5B0; /* jb: below (unsigned <) */

loc_003DC59E: ;
    edx = MEM32(esp + 4);
    ecx = MEM32(edx + 4);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), MEM16(ecx) (16-bit) */
    if (CMP_A(_fa, _fb)) goto loc_003DC5B0; /* ja: above (unsigned >) */

loc_003DC5AA: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_003DC5B0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_003DC5C0
 * Original: 0x003DC5C0 - 0x003DC5E0 (32 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_003DC5C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DC5C0: ;
    ecx = MEM32(eax + 4);
    SET_LO8(eax, MEM8(ecx));
    ecx = MEM32(edx + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(ecx) (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003DC5DD; /* jb: below (unsigned <) */

loc_003DC5CC: ;
    edx = MEM32(esp + 4);
    ecx = MEM32(edx + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(ecx) (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_003DC5DD; /* ja: above (unsigned >) */

loc_003DC5D7: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_003DC5DD: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_003DC5F0
 * Original: 0x003DC5F0 - 0x003DC610 (32 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_003DC5F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DC5F0: ;
    ecx = MEM32(eax + 4);
    eax = MEM32(ecx);
    ecx = MEM32(edx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003DC60D; /* jl: less (signed <) */

loc_003DC5FC: ;
    edx = MEM32(esp + 4);
    ecx = MEM32(edx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_003DC60D; /* jg: greater (signed >) */

loc_003DC607: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_003DC60D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_003DC620
 * Original: 0x003DC620 - 0x003DC643 (35 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_003DC620(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DC620: ;
    ecx = MEM32(eax + 4);
    SET_LO16(eax, MEM16(ecx));
    ecx = MEM32(edx + 4);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), MEM16(ecx) (16-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003DC640; /* jl: less (signed <) */

loc_003DC62E: ;
    edx = MEM32(esp + 4);
    ecx = MEM32(edx + 4);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), MEM16(ecx) (16-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_003DC640; /* jg: greater (signed >) */

loc_003DC63A: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_003DC640: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_003DC650
 * Original: 0x003DC650 - 0x003DC670 (32 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_003DC650(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DC650: ;
    ecx = MEM32(eax + 4);
    SET_LO8(eax, MEM8(ecx));
    ecx = MEM32(edx + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(ecx) (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003DC66D; /* jl: less (signed <) */

loc_003DC65C: ;
    edx = MEM32(esp + 4);
    ecx = MEM32(edx + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(ecx) (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_003DC66D; /* jg: greater (signed >) */

loc_003DC667: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_003DC66D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_003DC680
 * Original: 0x003DC680 - 0x003DC6A8 (40 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_003DC680(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_003DC680: ;
    ecx = MEM32(eax + 4);
    eax = MEM32(edx + 4);
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003DC6A5; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(eax)) */

loc_003DC68F: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx + 4);
    xmm1 = XMM_SCALAR(MEMF(edx)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003DC6A5; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_003DC69F: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_003DC6A5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_003DC6C0
 * Original: 0x003DC6C0 - 0x003DC73B (123 bytes, 48 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DC6C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003DC6C0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    ebx = ecx;
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    MEM32(ebx + 4) = ebp;
    MEM32(ebx) = 0x83595C;
    MEM32(ebx + 8) = eax;
    MEM32(ebx + 0xC) = eax;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    PUSH32(esp, 0x83594C);
    { uint32_t _sv=(uint32_t)(ebp), _sc=(uint32_t)(0x18) & 31u;
      if (_sc) {
        ebp = _sv >> _sc;
        _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003DC6EEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003DC6ECu); } /* indirect call */
    }

loc_003DC6EE: ;
    MEM32(ebx + 8) = eax;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83593C);
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x003DC701u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003DC6FFu); } /* indirect call */
    }

loc_003DC701: ;
    edi = MEM32(ebx + 8);
    esi = MEM32(esp + 0x18);
    MEM32(ebx + 0xC) = eax;
    ecx = ebp;
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
    edi = MEM32(ebx + 0xC);
    esi = MEM32(esp + 0x1C);
    ecx = ebp;
    edx = ecx;
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
    ecx = edx;
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
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003DC760
 * Original: 0x003DC760 - 0x003DC7A6 (70 bytes, 23 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DC760(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DC760: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ecx;
    edx = MEM32(esi + 8);
    MEM32(esi) = 0x83595C;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x003DC778u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003DC775u); } /* indirect call */
    }

loc_003DC778: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esi + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x003DC787u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003DC784u); } /* indirect call */
    }

loc_003DC787: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    MEM32(esi) = 0x835928;
    if (TEST_Z(_fa, _fb)) goto loc_003DC7A0; /* je: equal / zero */

loc_003DC794: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x003DC7A0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003DC79Du); } /* indirect call */
    }

loc_003DC7A0: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003DC7C0
 * Original: 0x003DC7C0 - 0x003DCA5F (671 bytes, 238 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DC7C0(void)
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

loc_003DC7C0: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 4);
    ecx = MEM32(0x907BA0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003DC7D6u); RECOMP_ABI_CALL(0x00024B73u, sub_00024B73); /* call 0x00024B73 */

loc_003DC7D6: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DC7E6; /* jne: not equal / not zero */

loc_003DC7DC: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_003DC7E6: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(MEM16(ecx + 0xC)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 0xC), 1 (16-bit) */
    PUSH32(esp, ebx);
    ebx = MEM32(edi + 8);
    PUSH32(esp, ebp);
    ebp = MEM32(edi + 0xC);
    MEM32(esp + 0x2C) = ebx;
    MEM32(esp + 0x24) = ebp;
    if (CMP_NE(_fa, _fb)) goto loc_003DC813; /* jne: not equal / not zero */

loc_003DC800: ;
    ecx = esi;
    PUSH32(esp, 0x003DC807u); RECOMP_ABI_CALL(0x0003342Fu, sub_0003342F); /* call 0x0003342F */

loc_003DC807: ;
    esi = eax;
    edx = MEM32(esi + 4);
    _fa = (uint32_t)(MEM16(edx + 0xC)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edx + 0xC), 1 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DC800; /* je: equal / zero */

loc_003DC813: ;
    eax = MEM32(esi + 4);
    SET_LO16(eax, MEM16(eax + 0xC));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DC946; /* jne: not equal / not zero */

loc_003DC823: ;
    ecx = MEM32(esi + 0x18);
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_003DCA53; /* ja: above (unsigned >) */

loc_003DC831: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x3DCA60); /* switch: 8 entries, 8 targets */
    if (_jt == 0x003DC838u) goto loc_003DC838;
    if (_jt == 0x003DC85Au) goto loc_003DC85A;
    if (_jt == 0x003DC87Eu) goto loc_003DC87E;
    if (_jt == 0x003DC89Fu) goto loc_003DC89F;
    if (_jt == 0x003DC8C0u) goto loc_003DC8C0;
    if (_jt == 0x003DC8ECu) goto loc_003DC8EC;
    if (_jt == 0x003DC915u) goto loc_003DC915;
    if (_jt == 0x003DCA53u) goto loc_003DCA53;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_003DC838: ;
    edx = MEM32(esp + 0x44);
    eax = MEM32(edx + 4);
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003DC84E; /* jb: below (unsigned <) */

loc_003DC845: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003DC937; /* jbe: below or equal (unsigned <=) */

loc_003DC84E: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_003DC85A: ;
    ecx = MEM32(esp + 0x44);
    edx = MEM32(ecx + 4);
    SET_LO16(eax, MEM16(edx));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), MEM16(ebx) (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003DC84E; /* jb: below (unsigned <) */

loc_003DC869: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ebp)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), MEM16(ebp) (16-bit) */
    if (CMP_A(_fa, _fb)) goto loc_003DC84E; /* ja: above (unsigned >) */

loc_003DC86F: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_003DC87E: ;
    eax = MEM32(esp + 0x44);
    ecx = MEM32(eax + 4);
    SET_LO8(eax, MEM8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(ebx) (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003DC84E; /* jb: below (unsigned <) */

loc_003DC88B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(ebp)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(ebp) (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_003DC84E; /* ja: above (unsigned >) */

loc_003DC890: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_003DC89F: ;
    edx = MEM32(esp + 0x44);
    eax = MEM32(edx + 4);
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003DC84E; /* jl: less (signed <) */

loc_003DC8AC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_003DC84E; /* jg: greater (signed >) */

loc_003DC8B1: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_003DC8C0: ;
    ecx = MEM32(esp + 0x44);
    edx = MEM32(ecx + 4);
    SET_LO16(eax, MEM16(edx));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), MEM16(ebx) (16-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003DC84E; /* jl: less (signed <) */

loc_003DC8D3: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ebp)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), MEM16(ebp) (16-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_003DC84E; /* jg: greater (signed >) */

loc_003DC8DD: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_003DC8EC: ;
    eax = MEM32(esp + 0x44);
    ecx = MEM32(eax + 4);
    SET_LO8(eax, MEM8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(ebx) (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003DC84E; /* jl: less (signed <) */

loc_003DC8FD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(ebp)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(ebp) (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_003DC84E; /* jg: greater (signed >) */

loc_003DC906: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_003DC915: ;
    edx = MEM32(esp + 0x44);
    eax = MEM32(edx + 4);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ebx); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003DC84E; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(ebx)) */

loc_003DC929: ;
    xmm1 = XMM_SCALAR(MEMF(ebp)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003DC84E; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_003DC937: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_003DC946: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(4) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 4 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DCA53; /* jne: not equal / not zero */

loc_003DC950: ;
    ecx = esi;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x003DC959u); RECOMP_ABI_CALL(0x00028412u, sub_00028412); /* call 0x00028412 */

loc_003DC959: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DC99E; /* je: equal / zero */

loc_003DC95D: ;
    ecx = esi;
    PUSH32(esp, 0x003DC964u); RECOMP_ABI_CALL(0x00021B08u, sub_00021B08); /* call 0x00021B08 */

loc_003DC964: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DCA42; /* je: equal / zero */

loc_003DC96E: ;
    ecx = MEM32(ebx + 4);
    edx = MEM32(ecx + 4);
    eax = MEM32(esp + 0x44);
    ecx = MEM32(eax + 4);
    eax = esp + 0x10;
    MEM32(esp + 0x10) = edx;
    edx = MEM32(edi);
    MEM32(esp + 0x14) = ecx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x003DC98Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003DC98Cu); } /* indirect call */
    }

loc_003DC98F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DCA53; /* je: equal / zero */

loc_003DC997: ;
    ecx = MEM32(ebx + 4);
    ebx = ZX16(MEM16(ecx + 2));

loc_003DC99E: ;
    ecx = esi;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x003DC9A7u); RECOMP_ABI_CALL(0x0002D23Cu, sub_0002D23C); /* call 0x0002D23C */

loc_003DC9A7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003DCA42; /* jle: less or equal (signed <=) */

loc_003DC9AF: ;
    /* nop */

loc_003DC9B0: ;
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x003DC9B8u); RECOMP_ABI_CALL(0x000134F9u, sub_000134F9); /* call 0x000134F9 */

loc_003DC9B8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DCA42; /* je: equal / zero */

loc_003DC9C0: ;
    eax = MEM32(eax + 4);
    edi = ZX16(MEM16(eax + 2));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003DC9D9; /* jbe: below or equal (unsigned <=) */

loc_003DC9CC: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 3 (8-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_003DC9E9; /* jbe: below or equal (unsigned <=) */

loc_003DC9D1: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 3 (8-bit) */
    if (CMP_A(_fa & _fb, 0)) goto loc_003DC9D1; /* ja: above (unsigned >) */

loc_003DC9D7: ;
    goto loc_003DC9E9;

loc_003DC9D9: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003DC9E9; /* jbe: below or equal (unsigned <=) */

loc_003DC9DE: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_003DC9E9; /* jbe: below or equal (unsigned <=) */

loc_003DC9E3: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (CMP_A(_fa & _fb, 0)) goto loc_003DC9E3; /* ja: above (unsigned >) */

loc_003DC9E9: ;
    edx = MEM32(esp + 0x44);
    ecx = MEM32(edx + 4);
    eax = MEM32(eax + 4);
    edx = MEM32(esp + 0x24);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x1C) = ecx;
    ecx = MEM32(esp + 0x2C);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = esp + 0x3C;
    MEM32(esp + 0x24) = eax;
    PUSH32(esp, 0x003DCA15u); RECOMP_ABI_CALL(0x00012987u, sub_00012987); /* call 0x00012987 */

loc_003DCA15: ;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    ecx = esp + 0x34;
    PUSH32(esp, 0x003DCA23u); RECOMP_ABI_CALL(0x0002942Fu, sub_0002942F); /* call 0x0002942F */

loc_003DCA23: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ecx = esp + 0x30;
    if (CMP_EQ(_fa, _fb)) goto loc_003DCA4E; /* je: equal / zero */

loc_003DCA2B: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x003DCA32u); RECOMP_ABI_CALL(0x00023AFCu, sub_00023AFC); /* call 0x00023AFC */

loc_003DCA32: ;
    ecx = esi;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x003DCA3Au); RECOMP_ABI_CALL(0x0002D23Cu, sub_0002D23C); /* call 0x0002D23C */

loc_003DCA3A: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003DC9B0; /* jl: less (signed <) */

loc_003DCA42: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_003DCA4E: ;
    PUSH32(esp, 0x003DCA53u); RECOMP_ABI_CALL(0x00023AFCu, sub_00023AFC); /* call 0x00023AFC */

loc_003DCA53: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003DCB40
 * Original: 0x003DCB40 - 0x003DCB6C (44 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DCB40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DCB40: ;
    edx = MEM32(esp + 4);
    eax = ecx;
    ecx = MEM32(esp + 8);
    MEM32(eax + 4) = ecx;
    MEM32(eax) = 0x835970;
    MEM32(eax + 8) = edx;
    edx = MEM32(ecx + 4);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x40;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = 0;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003DCB80
 * Original: 0x003DCB80 - 0x003DCB87 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DCB80(void)
{

loc_003DCB80: ;
    MEM32(ecx) = 0x835970;
    esp += 4; return; /* ret */

}

/**
 * sub_003DCB90
 * Original: 0x003DCB90 - 0x003DCBA6 (22 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DCB90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DCB90: ;
    eax = MEM32(ecx + 4);
    eax = ZX16(MEM16(eax + 2));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 3 (8-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_003DCBA5; /* jbe: below or equal (unsigned <=) */

loc_003DCB9B: ;
    goto loc_003DCBA0;

    /* nop */

loc_003DCBA0: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 3 (8-bit) */
    if (CMP_A(_fa & _fb, 0)) goto loc_003DCBA0; /* ja: above (unsigned >) */

loc_003DCBA5: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003DCBB0
 * Original: 0x003DCBB0 - 0x003DCBE9 (57 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DCBB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DCBB0: ;
    edx = MEM32(esp + 4);
    eax = ecx;
    ecx = MEM32(esp + 8);
    MEM32(eax + 4) = ecx;
    MEM32(eax) = 0x835970;
    MEM32(eax + 8) = edx;
    edx = MEM32(ecx + 4);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x40;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0x10) = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 0x14) = 0;
    MEM32(eax) = 0x835984;
    MEM32(eax + 0x18) = ecx;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003DCC00
 * Original: 0x003DCC00 - 0x003DCC07 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DCC00(void)
{

loc_003DCC00: ;
    MEM32(ecx) = 0x835970;
    esp += 4; return; /* ret */

}

/**
 * sub_003DCC10
 * Original: 0x003DCC10 - 0x003DCC25 (21 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DCC10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DCC10: ;
    eax = MEM32(ecx + 0x18);
    edx = MEM32(eax);
    eax = MEM32(esp + 4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(eax, LO8(ecx));
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003DCC30
 * Original: 0x003DCC30 - 0x003DCC33 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DCC30(void)
{

loc_003DCC30: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003DCC40
 * Original: 0x003DCC40 - 0x003DCC79 (57 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DCC40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DCC40: ;
    edx = MEM32(esp + 4);
    eax = ecx;
    ecx = MEM32(esp + 8);
    MEM32(eax + 4) = ecx;
    MEM32(eax) = 0x835970;
    MEM32(eax + 8) = edx;
    edx = MEM32(ecx + 4);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x40;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0x10) = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 0x14) = 0;
    MEM32(eax) = 0x835998;
    MEM32(eax + 0x18) = ecx;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003DCC90
 * Original: 0x003DCC90 - 0x003DCC97 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DCC90(void)
{

loc_003DCC90: ;
    MEM32(ecx) = 0x835970;
    esp += 4; return; /* ret */

}

/**
 * sub_003DCCA0
 * Original: 0x003DCCA0 - 0x003DCCB2 (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DCCA0(void)
{

loc_003DCCA0: ;
    eax = MEM32(ecx + 0x18);
    ecx = MEM32(eax);
    PUSH32(esp, ecx);
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x003DCCB1u); RECOMP_ABI_CALL(0x00024B73u, sub_00024B73); /* call 0x00024B73 */

loc_003DCCB1: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003DCCC0
 * Original: 0x003DCCC0 - 0x003DCCEB (43 bytes, 18 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DCCC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DCCC0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DCCCF; /* jne: not equal / not zero */

loc_003DCCC9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_003DCCCF: ;
    eax = MEM32(ecx + 0x18);
    ecx = MEM32(eax);
    PUSH32(esp, ecx);
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x003DCCE0u); RECOMP_ABI_CALL(0x00024B73u, sub_00024B73); /* call 0x00024B73 */

loc_003DCCE0: ;
    edx = MEM32(eax);
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x003DCCE7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003DCCE5u); } /* indirect call */
    }

loc_003DCCE7: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003DCD00
 * Original: 0x003DCD00 - 0x003DCD18 (24 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DCD00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003DCD00: ;
    eax = MEM32(ecx + 0x18);
    ecx = MEM32(eax);
    PUSH32(esp, ecx);
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x003DCD11u); RECOMP_ABI_CALL(0x00024B73u, sub_00024B73); /* call 0x00024B73 */

loc_003DCD11: ;
    edx = MEM32(eax);
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 4)); return; /* indirect tail jmp */

}

/**
 * sub_003DCD20
 * Original: 0x003DCD20 - 0x003DCD38 (24 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DCD20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003DCD20: ;
    eax = MEM32(ecx + 0x18);
    ecx = MEM32(eax);
    PUSH32(esp, ecx);
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x003DCD31u); RECOMP_ABI_CALL(0x00024B73u, sub_00024B73); /* call 0x00024B73 */

loc_003DCD31: ;
    edx = MEM32(eax);
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 8)); return; /* indirect tail jmp */

}

/**
 * sub_003DCD40
 * Original: 0x003DCD40 - 0x003DCD79 (57 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DCD40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DCD40: ;
    edx = MEM32(esp + 4);
    eax = ecx;
    ecx = MEM32(esp + 8);
    MEM32(eax + 4) = ecx;
    MEM32(eax) = 0x835970;
    MEM32(eax + 8) = edx;
    edx = MEM32(ecx + 4);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x40;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0x10) = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 0x14) = 0;
    MEM32(eax) = 0x8359AC;
    MEM32(eax + 0x18) = ecx;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003DCD90
 * Original: 0x003DCD90 - 0x003DCD97 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DCD90(void)
{

loc_003DCD90: ;
    MEM32(ecx) = 0x835970;
    esp += 4; return; /* ret */

}

/**
 * sub_003DCDA0
 * Original: 0x003DCDA0 - 0x003DCDA6 (6 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DCDA0(void)
{

loc_003DCDA0: ;
    eax = MEM32(ecx + 0x18);
    eax = MEM32(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_003DCDB0
 * Original: 0x003DCDB0 - 0x003DCDC1 (17 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DCDB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DCDB0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(ecx + 0x18);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax + ecx + 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003DCDD0
 * Original: 0x003DCDD0 - 0x003DCDFC (44 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DCDD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DCDD0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DCDDD; /* jne: not equal / not zero */

loc_003DCDD8: ;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

loc_003DCDDD: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(MEM16(ecx + 0xC)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 0xC), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DCDF7; /* jne: not equal / not zero */

loc_003DCDE7: ;
    edx = MEM32(eax + 0x18);
    ecx = MEM32(edx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 8; return; /* ret 4 */

loc_003DCDF7: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003DCE10
 * Original: 0x003DCE10 - 0x003DCE1F (15 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DCE10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DCE10: ;
    ecx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003DCE30
 * Original: 0x003DCE30 - 0x003DCE33 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DCE30(void)
{

loc_003DCE30: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003DCE40
 * Original: 0x003DCE40 - 0x003DCE79 (57 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DCE40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DCE40: ;
    edx = MEM32(esp + 4);
    eax = ecx;
    ecx = MEM32(esp + 8);
    MEM32(eax + 4) = ecx;
    MEM32(eax) = 0x835970;
    MEM32(eax + 8) = edx;
    edx = MEM32(ecx + 4);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x40;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0x10) = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 0x14) = 0;
    MEM32(eax) = 0x8359C0;
    MEM32(eax + 0x18) = ecx;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003DCE90
 * Original: 0x003DCE90 - 0x003DCE97 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DCE90(void)
{

loc_003DCE90: ;
    MEM32(ecx) = 0x835970;
    esp += 4; return; /* ret */

}

/**
 * sub_003DCEA0
 * Original: 0x003DCEA0 - 0x003DCEA7 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DCEA0(void)
{

loc_003DCEA0: ;
    eax = MEM32(ecx + 0x18);
    eax = MEM32(eax + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_003DCEB0
 * Original: 0x003DCEB0 - 0x003DCEC2 (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DCEB0(void)
{

loc_003DCEB0: ;
    eax = MEM32(ecx + 0x18);
    ecx = MEM32(eax);
    PUSH32(esp, ecx);
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x003DCEC1u); RECOMP_ABI_CALL(0x00024B73u, sub_00024B73); /* call 0x00024B73 */

loc_003DCEC1: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003DCED0
 * Original: 0x003DCED0 - 0x003DCF34 (100 bytes, 42 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DCED0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DCED0: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DCEDF; /* jne: not equal / not zero */

loc_003DCED9: ;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_003DCEDF: ;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(MEM16(eax + 0xC)) & 0xFFFFu; _fb = (uint32_t)(3) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0xC), 3 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DCF2E; /* jne: not equal / not zero */

loc_003DCEE9: ;
    eax = MEM32(ecx + 0x18);
    ecx = MEM32(edi + 0x18);
    edx = MEM32(eax + 4);
    PUSH32(esp, esi);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DCEFF; /* je: equal / zero */

loc_003DCEF8: ;
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_003DCEFF: ;
    eax = MEM32(eax);
    ecx = MEM32(0x907BA0);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003DCF0Eu); RECOMP_ABI_CALL(0x00024B73u, sub_00024B73); /* call 0x00024B73 */

loc_003DCF0E: ;
    ecx = MEM32(edi + 0x18);
    edx = MEM32(ecx);
    ecx = MEM32(0x907BA0);
    esi = eax;
    ebx = MEM32(esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003DCF23u); RECOMP_ABI_CALL(0x00024B73u, sub_00024B73); /* call 0x00024B73 */

loc_003DCF23: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(ebx); PUSH32(esp, 0x003DCF28u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003DCF26u); } /* indirect call */
    }

loc_003DCF28: ;
    POP32(esp, ebx);
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_003DCF2E: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003DCF50
 * Original: 0x003DCF50 - 0x003DCF55 (5 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DCF50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DCF50: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003DCF60
 * Original: 0x003DCF60 - 0x003DCFEB (139 bytes, 52 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DCF60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003DCF60: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x18);
    ecx = MEM32(eax);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x003DCF7Au); RECOMP_ABI_CALL(0x00024B73u, sub_00024B73); /* call 0x00024B73 */

loc_003DCF7A: ;
    edx = MEM32(eax + 4);
    eax = MEM32(esi + 0x18);
    ecx = MEM32(eax);
    ebp = MEM32(edx + 4);
    PUSH32(esp, ecx);
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x003DCF91u); RECOMP_ABI_CALL(0x00024B73u, sub_00024B73); /* call 0x00024B73 */

loc_003DCF91: ;
    edx = MEM32(eax + 4);
    eax = ZX16(MEM16(edx + 2));
    ecx = MEM32(esp + 0x20);
    edi = MEM32(ecx + 4);
    MEM32(esp + 0x10) = eax;
    eax = MEM32(esi + 0x18);
    ecx = MEM32(eax + 4);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003DCFE1; /* jle: less or equal (signed <=) */

loc_003DCFAF: ;
    /* nop */

loc_003DCFB0: ;
    ecx = MEM32(0x907BA0);
    MEM32(esp + 0x14) = ebp;
    MEM32(esp + 0x18) = edi;
    edx = MEM32(eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003DCFC6u); RECOMP_ABI_CALL(0x00024B73u, sub_00024B73); /* call 0x00024B73 */

loc_003DCFC6: ;
    edx = MEM32(eax);
    ecx = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x003DCFD2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003DCFCFu); } /* indirect call */
    }

loc_003DCFD2: ;
    _fb = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + MEM32(esp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi + 0x18);
    ecx = MEM32(eax + 4);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003DCFB0; /* jl: less (signed <) */

loc_003DCFE1: ;
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
 * sub_003DD010
 * Original: 0x003DD010 - 0x003DD049 (57 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DD010(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DD010: ;
    edx = MEM32(esp + 4);
    eax = ecx;
    ecx = MEM32(esp + 8);
    MEM32(eax + 4) = ecx;
    MEM32(eax) = 0x835970;
    MEM32(eax + 8) = edx;
    edx = MEM32(ecx + 4);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x40;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0x10) = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 0x14) = 0;
    MEM32(eax) = 0x8359D4;
    MEM32(eax + 0x18) = ecx;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003DD060
 * Original: 0x003DD060 - 0x003DD067 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DD060(void)
{

loc_003DD060: ;
    MEM32(ecx) = 0x835970;
    esp += 4; return; /* ret */

}

/**
 * sub_003DD070
 * Original: 0x003DD070 - 0x003DD080 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DD070(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DD070: ;
    eax = MEM32(ecx + 0x18);
    edx = MEM32(eax + 4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(ecx));
    esp += 4; return; /* ret */

}

/**
 * sub_003DD090
 * Original: 0x003DD090 - 0x003DD097 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DD090(void)
{

loc_003DD090: ;
    eax = MEM32(ecx + 0x18);
    eax = MEM32(eax + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_003DD0A0
 * Original: 0x003DD0A0 - 0x003DD0B3 (19 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DD0A0(void)
{

loc_003DD0A0: ;
    eax = MEM32(ecx + 0x18);
    ecx = MEM32(eax + 4);
    PUSH32(esp, ecx);
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x003DD0B2u); RECOMP_ABI_CALL(0x00024B73u, sub_00024B73); /* call 0x00024B73 */

loc_003DD0B2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003DD0C0
 * Original: 0x003DD0C0 - 0x003DD0C6 (6 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DD0C0(void)
{

loc_003DD0C0: ;
    eax = MEM32(ecx + 0x18);
    eax = MEM32(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_003DD0D0
 * Original: 0x003DD0D0 - 0x003DD0E1 (17 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DD0D0(void)
{

loc_003DD0D0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(ecx + 0x18);
    eax = eax + eax * 4;
    eax = ecx + eax * 4 + 0xC;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003DD0F0
 * Original: 0x003DD0F0 - 0x003DD101 (17 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DD0F0(void)
{

loc_003DD0F0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(ecx + 0x18);
    eax = eax + eax * 4;
    eax = MEM32(ecx + eax * 4 + 8);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003DD110
 * Original: 0x003DD110 - 0x003DD12F (31 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DD110(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003DD110: ;
    eax = MEM32(ecx + 0x18);
    ecx = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx + ecx * 4;
    edx = MEM32(eax + ecx * 4);
    MEM32(esp + 4) = edx;
    ecx = MEM32(0x907BA0);
    g_seh_ebp = ebp; sub_00024B73(); return; /* tail jmp 0x00024B73 */

}

/**
 * sub_003DD140
 * Original: 0x003DD140 - 0x003DD169 (41 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DD140(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DD140: ;
    eax = MEM32(ecx + 0x18);
    edx = MEM32(eax + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_003DD165; /* je: equal / zero */

loc_003DD14D: ;
    ecx = MEM32(eax + 4);
    PUSH32(esp, ecx);
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x003DD15Cu); RECOMP_ABI_CALL(0x00024B73u, sub_00024B73); /* call 0x00024B73 */

loc_003DD15C: ;
    ecx = eax;
    PUSH32(esp, 0x003DD163u); RECOMP_ABI_CALL(0x000159A7u, sub_000159A7); /* call 0x000159A7 */

loc_003DD163: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003DD165: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003DD180
 * Original: 0x003DD180 - 0x003DD206 (134 bytes, 51 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DD180(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DD180: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x18);
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DD1F6; /* je: equal / zero */

loc_003DD193: ;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003DD19Fu); RECOMP_ABI_CALL(0x00024B73u, sub_00024B73); /* call 0x00024B73 */

loc_003DD19F: ;
    ecx = MEM32(eax + 0x18);
    edx = MEM32(ecx + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    esi = MEM32(ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_003DD1C3; /* je: equal / zero */

loc_003DD1AB: ;
    edx = MEM32(ecx + 4);
    ecx = MEM32(0x907BA0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003DD1BAu); RECOMP_ABI_CALL(0x00024B73u, sub_00024B73); /* call 0x00024B73 */

loc_003DD1BA: ;
    ecx = eax;
    PUSH32(esp, 0x003DD1C1u); RECOMP_ABI_CALL(0x000159A7u, sub_000159A7); /* call 0x000159A7 */

loc_003DD1C1: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003DD1C3: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003DD1F4; /* jge: greater or equal (signed >=) */

loc_003DD1C7: ;
    eax = MEM32(edi + 0x18);
    ecx = MEM32(eax + 4);
    PUSH32(esp, ecx);
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x003DD1D9u); RECOMP_ABI_CALL(0x00024B73u, sub_00024B73); /* call 0x00024B73 */

loc_003DD1D9: ;
    edi = eax;
    edx = MEM32(edi + 0x18);
    eax = MEM32(edx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DD193; /* jne: not equal / not zero */

loc_003DD1E5: ;
    POP32(esp, edi);
    eax = ebx + ebx * 4;
    ecx = edx;
    POP32(esp, esi);
    eax = ecx + eax * 4 + 0xC;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_003DD1F4: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - esi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_003DD1F6: ;
    ecx = MEM32(edi + 0x18);
    POP32(esp, edi);
    eax = ebx + ebx * 4;
    POP32(esp, esi);
    eax = ecx + eax * 4 + 0xC;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003DD230
 * Original: 0x003DD230 - 0x003DD2B7 (135 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DD230(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003DD230: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x18);
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DD299; /* je: equal / zero */

loc_003DD243: ;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003DD24Fu); RECOMP_ABI_CALL(0x00024B73u, sub_00024B73); /* call 0x00024B73 */

loc_003DD24F: ;
    ecx = MEM32(eax + 0x18);
    edx = MEM32(ecx + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    esi = MEM32(ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_003DD273; /* je: equal / zero */

loc_003DD25B: ;
    edx = MEM32(ecx + 4);
    ecx = MEM32(0x907BA0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003DD26Au); RECOMP_ABI_CALL(0x00024B73u, sub_00024B73); /* call 0x00024B73 */

loc_003DD26A: ;
    ecx = eax;
    PUSH32(esp, 0x003DD271u); RECOMP_ABI_CALL(0x000159A7u, sub_000159A7); /* call 0x000159A7 */

loc_003DD271: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003DD273: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003DD297; /* jge: greater or equal (signed >=) */

loc_003DD277: ;
    eax = MEM32(edi + 0x18);
    ecx = MEM32(eax + 4);
    PUSH32(esp, ecx);
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x003DD289u); RECOMP_ABI_CALL(0x00024B73u, sub_00024B73); /* call 0x00024B73 */

loc_003DD289: ;
    edi = eax;
    edx = MEM32(edi + 0x18);
    eax = MEM32(edx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DD243; /* jne: not equal / not zero */

loc_003DD295: ;
    goto loc_003DD299;

loc_003DD297: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - esi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_003DD299: ;
    edi = MEM32(edi + 0x18);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ebx + ebx * 4;
    ecx = MEM32(edi + eax * 4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(esp + 4) = ecx;
    ecx = MEM32(0x907BA0);
    g_seh_ebp = ebp; sub_00024B73(); return; /* tail jmp 0x00024B73 */

}

/**
 * sub_003DD2E0
 * Original: 0x003DD2E0 - 0x003DD3B9 (217 bytes, 82 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DD2E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003DD2E0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x18);
    eax = MEM32(eax + 4);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DD35D; /* je: equal / zero */

loc_003DD2F6: ;
    goto loc_003DD300;

    /* nop */
    /* nop */

loc_003DD300: ;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003DD30Cu); RECOMP_ABI_CALL(0x00024B73u, sub_00024B73); /* call 0x00024B73 */

loc_003DD30C: ;
    ecx = MEM32(eax + 0x18);
    edx = MEM32(ecx + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    esi = MEM32(ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_003DD330; /* je: equal / zero */

loc_003DD318: ;
    edx = MEM32(ecx + 4);
    ecx = MEM32(0x907BA0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003DD327u); RECOMP_ABI_CALL(0x00024B73u, sub_00024B73); /* call 0x00024B73 */

loc_003DD327: ;
    ecx = eax;
    PUSH32(esp, 0x003DD32Eu); RECOMP_ABI_CALL(0x000159A7u, sub_000159A7); /* call 0x000159A7 */

loc_003DD32E: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003DD330: ;
    eax = MEM32(edi + 0x18);
    ecx = MEM32(eax + 4);
    PUSH32(esp, ecx);
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x003DD342u); RECOMP_ABI_CALL(0x00024B73u, sub_00024B73); /* call 0x00024B73 */

loc_003DD342: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003DD354; /* jge: greater or equal (signed >=) */

loc_003DD346: ;
    edi = eax;
    edx = MEM32(edi + 0x18);
    eax = MEM32(edx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DD300; /* jne: not equal / not zero */

loc_003DD352: ;
    goto loc_003DD35D;

loc_003DD354: ;
    edx = MEM32(eax + 4);
    ebx = ZX16(MEM16(edx + 2));
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - esi;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_003DD35D: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003DD3B0; /* jle: less or equal (signed <=) */

loc_003DD361: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003DD363: ;
    eax = MEM32(edi + 0x18);
    ecx = MEM32(0x907BA0);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi + eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003DD378u); RECOMP_ABI_CALL(0x00024B73u, sub_00024B73); /* call 0x00024B73 */

loc_003DD378: ;
    ecx = MEM32(eax + 4);
    eax = ZX16(MEM16(ecx + 2));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003DD398; /* jbe: below or equal (unsigned <=) */

loc_003DD384: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 3 (8-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_003DD3A8; /* jbe: below or equal (unsigned <=) */

loc_003DD389: ;
    /* nop */

loc_003DD390: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 3 (8-bit) */
    if (CMP_A(_fa & _fb, 0)) goto loc_003DD390; /* ja: above (unsigned >) */

loc_003DD396: ;
    goto loc_003DD3A8;

loc_003DD398: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003DD3A8; /* jbe: below or equal (unsigned <=) */

loc_003DD39D: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_003DD3A8; /* jbe: below or equal (unsigned <=) */

loc_003DD3A2: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (CMP_A(_fa & _fb, 0)) goto loc_003DD3A2; /* ja: above (unsigned >) */

loc_003DD3A8: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003DD363; /* jne: not equal / not zero */

loc_003DD3B0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003DD3F0
 * Original: 0x003DD3F0 - 0x003DD430 (64 bytes, 26 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DD3F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DD3F0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DD3FF; /* jne: not equal / not zero */

loc_003DD3F9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_003DD3FF: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(MEM16(eax + 0xC)) & 0xFFFFu; _fb = (uint32_t)(4) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0xC), 4 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DD42A; /* jne: not equal / not zero */

loc_003DD409: ;
    ecx = MEM32(ecx + 0x18);
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DD42A; /* je: equal / zero */

loc_003DD413: ;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003DD41Fu); RECOMP_ABI_CALL(0x00024B73u, sub_00024B73); /* call 0x00024B73 */

loc_003DD41F: ;
    edx = MEM32(eax);
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x003DD426u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003DD424u); } /* indirect call */
    }

loc_003DD426: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_003DD42A: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003DD440
 * Original: 0x003DD440 - 0x003DD445 (5 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DD440(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DD440: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003DD450
 * Original: 0x003DD450 - 0x003DD564 (276 bytes, 95 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DD450(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003DD450: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x18);
    eax = MEM32(eax + 4);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DD497; /* je: equal / zero */

loc_003DD466: ;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003DD472u); RECOMP_ABI_CALL(0x00024B73u, sub_00024B73); /* call 0x00024B73 */

loc_003DD472: ;
    ecx = MEM32(esp + 0x20);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x003DD47Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003DD47Bu); } /* indirect call */
    }

loc_003DD47E: ;
    edx = MEM32(esi + 0x18);
    eax = MEM32(edx + 4);
    ecx = MEM32(0x907BA0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003DD490u); RECOMP_ABI_CALL(0x00024B73u, sub_00024B73); /* call 0x00024B73 */

loc_003DD490: ;
    ecx = MEM32(eax + 4);
    ebx = ZX16(MEM16(ecx + 2));

loc_003DD497: ;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), edi (32-bit) */
    MEM32(esp + 0xC) = edi;
    if (CMP_LE(_fas, _fbs)) goto loc_003DD55B; /* jle: less or equal (signed <=) */

loc_003DD4A6: ;
    PUSH32(esp, ebp);
    goto loc_003DD4B0;

    /* nop */

loc_003DD4B0: ;
    edx = MEM32(edi + eax + 8);
    ecx = MEM32(0x907BA0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003DD4C0u); RECOMP_ABI_CALL(0x00024B73u, sub_00024B73); /* call 0x00024B73 */

loc_003DD4C0: ;
    eax = MEM32(eax + 4);
    eax = ZX16(MEM16(eax + 2));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_003DD4DD; /* jbe: below or equal (unsigned <=) */

loc_003DD4D0: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 3 (8-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_003DD4ED; /* jbe: below or equal (unsigned <=) */

loc_003DD4D5: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 3 (8-bit) */
    if (CMP_A(_fa & _fb, 0)) goto loc_003DD4D5; /* ja: above (unsigned >) */

loc_003DD4DB: ;
    goto loc_003DD4ED;

loc_003DD4DD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003DD4ED; /* jbe: below or equal (unsigned <=) */

loc_003DD4E2: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_003DD4ED; /* jbe: below or equal (unsigned <=) */

loc_003DD4E7: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (CMP_A(_fa & _fb, 0)) goto loc_003DD4E7; /* ja: above (unsigned >) */

loc_003DD4ED: ;
    eax = MEM32(esi + 0x18);
    ecx = MEM32(esp + 0x24);
    edx = MEM32(edi + eax + 8);
    ebp = MEM32(ecx + 4);
    ecx = MEM32(0x907BA0);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, 0x003DD50Au); RECOMP_ABI_CALL(0x00024B73u, sub_00024B73); /* call 0x00024B73 */

loc_003DD50A: ;
    eax = MEM32(eax + 4);
    ecx = MEM32(eax + 4);
    eax = MEM32(esi + 0x18);
    MEM32(esp + 0x18) = ecx;
    ecx = MEM32(0x907BA0);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + ebx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x1C) = ebp;
    edx = MEM32(edi + eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003DD52Fu); RECOMP_ABI_CALL(0x00024B73u, sub_00024B73); /* call 0x00024B73 */

loc_003DD52F: ;
    edx = MEM32(eax);
    ecx = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x003DD53Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003DD538u); } /* indirect call */
    }

loc_003DD53B: ;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(esi + 0x18);
    edx = MEM32(eax);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esp + 0x10);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x14;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    MEM32(esp + 0x10) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_003DD4B0; /* jl: less (signed <) */

loc_003DD55A: ;
    POP32(esp, ebp);

loc_003DD55B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003DD5B0
 * Original: 0x003DD5B0 - 0x003DD5EC (60 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DD5B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DD5B0: ;
    ecx = MEM32(ecx + 4);
    eax = ZX16(MEM16(ecx + 2));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 3 (8-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_003DD5C5; /* jbe: below or equal (unsigned <=) */

loc_003DD5BB: ;
    goto loc_003DD5C0;

    /* nop */

loc_003DD5C0: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 3 (8-bit) */
    if (CMP_A(_fa & _fb, 0)) goto loc_003DD5C0; /* ja: above (unsigned >) */

loc_003DD5C5: ;
    ecx = ecx + eax + 0x40;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003DD5E6; /* jle: less or equal (signed <=) */

loc_003DD5D1: ;
    edx = eax;

loc_003DD5D3: ;
    eax = ecx;
    eax = MEM32(eax);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DD5E3; /* je: equal / zero */

loc_003DD5DE: ;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x18) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003DD5E3: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003DD5D3; /* jne: not equal / not zero */

loc_003DD5E6: ;
    eax = ecx + 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003DD600
 * Original: 0x003DD600 - 0x003DD659 (89 bytes, 36 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DD600(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DD600: ;
    ecx = MEM32(ecx + 4);
    eax = ZX16(MEM16(ecx + 2));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 3 (8-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_003DD615; /* jbe: below or equal (unsigned <=) */

loc_003DD60B: ;
    goto loc_003DD610;

    /* nop */

loc_003DD610: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 3 (8-bit) */
    if (CMP_A(_fa & _fb, 0)) goto loc_003DD610; /* ja: above (unsigned >) */

loc_003DD615: ;
    ecx = ecx + eax + 0x40;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003DD636; /* jle: less or equal (signed <=) */

loc_003DD621: ;
    edx = eax;

loc_003DD623: ;
    eax = ecx;
    eax = MEM32(eax);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DD633; /* je: equal / zero */

loc_003DD62E: ;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x18) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003DD633: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003DD623; /* jne: not equal / not zero */

loc_003DD636: ;
    edx = MEM32(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DD64A; /* jne: not equal / not zero */

loc_003DD63C: ;
    eax = MEM32(esp + 4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = edx;
    MEM32(eax + 4) = ecx;
    esp += 12; return; /* ret 8 */

loc_003DD64A: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = edx;
    MEM32(eax + 4) = ecx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003DD670
 * Original: 0x003DD670 - 0x003DD67B (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DD670(void)
{

loc_003DD670: ;
    eax = ecx;
    MEM32(eax) = 0x835970;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003DD680
 * Original: 0x003DD680 - 0x003DD68B (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DD680(void)
{

loc_003DD680: ;
    eax = ecx;
    MEM32(eax) = 0x835970;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003DD690
 * Original: 0x003DD690 - 0x003DD6FA (106 bytes, 45 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DD690(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003DD690: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003DD6EE; /* je: equal / zero */

loc_003DD69B: ;
    ecx = MEM32(eax + 4);
    SET_LO16(ecx, MEM16(ecx + 0xC));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 1 (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003DD6C6; /* jne: not equal / not zero */

loc_003DD6A8: ;
    edx = MEM32(eax + 0x18);
    eax = MEM32(edx);
    ecx = MEM32(0x907BA0);
    PUSH32(esp, edi);
    edi = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003DD6BCu); RECOMP_ABI_CALL(0x00024B73u, sub_00024B73); /* call 0x00024B73 */

loc_003DD6BC: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edi); PUSH32(esp, 0x003DD6C1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003DD6BFu); } /* indirect call */
    }

loc_003DD6C1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_003DD6C6: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0 (16-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_003DD6E0; /* jne: not equal / not zero */

loc_003DD6CB: ;
    ecx = MEM32(eax + 0x18);
    edx = MEM32(esi + 0x18);
    esi = MEM32(ecx);
    eax = MEM32(edx);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(esi));
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_003DD6E0: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 2 (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003DD6F4; /* jne: not equal / not zero */

loc_003DD6E6: ;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003DD6F4; /* jne: not equal / not zero */

loc_003DD6EE: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_003DD6F4: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003DD720
 * Original: 0x003DD720 - 0x003DD72B (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DD720(void)
{

loc_003DD720: ;
    eax = ecx;
    MEM32(eax) = 0x835970;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003DD730
 * Original: 0x003DD730 - 0x003DD73B (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DD730(void)
{

loc_003DD730: ;
    eax = ecx;
    MEM32(eax) = 0x835970;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003DD740
 * Original: 0x003DD740 - 0x003DD74B (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DD740(void)
{

loc_003DD740: ;
    eax = ecx;
    MEM32(eax) = 0x835970;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003DD750
 * Original: 0x003DD750 - 0x003DD75B (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DD750(void)
{

loc_003DD750: ;
    eax = ecx;
    MEM32(eax) = 0x835970;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003DD760
 * Original: 0x003DD760 - 0x003DD79B (59 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DD760(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DD760: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x003DD76Du); RECOMP_ABI_CALL(0x00031F76u, sub_00031F76); /* call 0x00031F76 */

loc_003DD76D: ;
    eax = MEM32(esp + 0xC);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = 0x8359FC;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0x14) = ecx;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x8359E8);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x003DD792u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003DD790u); } /* indirect call */
    }

loc_003DD792: ;
    MEM32(esi + 0x14) = eax;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003DD7B0
 * Original: 0x003DD7B0 - 0x003DD7D0 (32 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DD7B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003DD7B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    edx = MEM32(esi + 0x14);
    MEM32(esi) = 0x8359FC;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x003DD7C8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003DD7C5u); } /* indirect call */
    }

loc_003DD7C8: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00017301(); return; /* tail jmp 0x00017301 */

}

/**
 * sub_003DD7E0
 * Original: 0x003DD7E0 - 0x003DD845 (101 bytes, 41 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DD7E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003DD7E0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    ebx = ecx;
    ecx = ebp;
    PUSH32(esp, 0x003DD7EFu); RECOMP_ABI_CALL(0x00020032u, sub_00020032); /* call 0x00020032 */

loc_003DD7EF: ;
    ecx = MEM32(ebx + 0x10);
    edx = MEM32(ebx + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_003DD840; /* ja: above (unsigned >) */

loc_003DD7FE: ;
    eax = MEM32(ebp);
    edx = MEM32(ebx + 0x14);
    PUSH32(esp, esi);
    MEM32(ecx + edx) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebx + 0x10) = MEM32(ebx + 0x10) + 4;
    _fa = (uint32_t)(MEM32(ebx + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = MEM32(ebp + 4);
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0x003DD817u); RECOMP_ABI_CALL(0x00020032u, sub_00020032); /* call 0x00020032 */

loc_003DD817: ;
    edx = MEM32(ebx + 0x10);
    edi = MEM32(ebx + 0x14);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    edx = ecx;
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
    ecx = edx;
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
    ecx = ebp;
    PUSH32(esp, 0x003DD836u); RECOMP_ABI_CALL(0x00020032u, sub_00020032); /* call 0x00020032 */

loc_003DD836: ;
    ecx = MEM32(ebx + 0x10);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(ebx + 0x10) = ecx;
    POP32(esp, esi);

loc_003DD840: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003DD860
 * Original: 0x003DD860 - 0x003DD8B4 (84 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003DD860(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DD860: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x10);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003DD8A7; /* jbe: below or equal (unsigned <=) */

loc_003DD876: ;
    eax = MEM32(edi + 0x14);
    ecx = eax + esi;
    ecx = MEM32(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 8) = ecx;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 8;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DD894u); RECOMP_ABI_CALL(0x00020032u, sub_00020032); /* call 0x00020032 */

loc_003DD894: ;
    edx = esp + 8;
    PUSH32(esp, edx);
    ecx = edi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003DD8A2u); RECOMP_ABI_CALL(0x00026D4Cu, sub_00026D4C); /* call 0x00026D4C */

loc_003DD8A2: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edi + 0x10) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003DD876; /* jb: below (unsigned <) */

loc_003DD8A7: ;
    MEM32(edi + 0x10) = 0;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003DD8D0
 * Original: 0x003DD8D0 - 0x003DD908 (56 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DD8D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DD8D0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ecx;
    edx = MEM32(esi + 0x14);
    MEM32(esi) = 0x8359FC;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x003DD8E8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003DD8E5u); } /* indirect call */
    }

loc_003DD8E8: ;
    ecx = esi;
    PUSH32(esp, 0x003DD8EFu); RECOMP_ABI_CALL(0x00017301u, sub_00017301); /* call 0x00017301 */

loc_003DD8EF: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003DD902; /* je: equal / zero */

loc_003DD8F6: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x003DD902u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003DD8FFu); } /* indirect call */
    }

loc_003DD902: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003DD920
 * Original: 0x003DD920 - 0x003DD93D (29 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DD920(void)
{

loc_003DD920: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x90722C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x003DD932u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003DD92Fu); } /* indirect call */
    }

loc_003DD932: ;
    MEM32(0x90722C) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_003DD950
 * Original: 0x003DD950 - 0x003DD959 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DD950(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DD950: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 4) = eax;
    MEM8(ecx + 8) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_003DD960
 * Original: 0x003DD960 - 0x003DD980 (32 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DD960(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DD960: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    MEM32(eax + 8) = 0;
    edx = MEM32(ecx);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DD97D; /* je: equal / zero */

loc_003DD97A: ;
    MEM32(edx + 8) = eax;

loc_003DD97D: ;
    MEM32(ecx) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_003DD990
 * Original: 0x003DD990 - 0x003DD9C4 (52 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DD990(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DD990: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_003DD9A6; /* je: equal / zero */

loc_003DD99E: ;
    esi = MEM32(eax + 0xC);
    MEM32(ecx + 0xC) = esi;
    goto loc_003DD9AF;

loc_003DD9A6: ;
    ecx = MEM32(eax + 0xC);
    esi = MEM32(esp + 0xC);
    MEM32(esi) = ecx;

loc_003DD9AF: ;
    ecx = MEM32(eax + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DD9BC; /* je: equal / zero */

loc_003DD9B6: ;
    esi = MEM32(eax + 8);
    MEM32(ecx + 8) = esi;

loc_003DD9BC: ;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 8) = edx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003DD9E0
 * Original: 0x003DD9E0 - 0x003DDA3D (93 bytes, 30 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DD9E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DD9E0: ;
    eax = MEM32(0x907228);
    edx = MEM32(eax + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_003DD9F5; /* je: equal / zero */

loc_003DD9ED: ;
    edi = MEM32(eax + 0xC);
    MEM32(edx + 0xC) = edi;
    goto loc_003DD9FE;

loc_003DD9F5: ;
    edx = MEM32(eax + 0xC);
    MEM32(0x907228) = edx;

loc_003DD9FE: ;
    edx = MEM32(eax + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DDA0B; /* je: equal / zero */

loc_003DDA05: ;
    edi = MEM32(eax + 8);
    MEM32(edx + 8) = edi;

loc_003DDA0B: ;
    MEM32(eax + 0xC) = 0;
    MEM32(eax + 8) = 0;
    edx = MEM32(ecx + 4);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(ecx + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_003DDA2A; /* je: equal / zero */

loc_003DDA27: ;
    MEM32(edx + 8) = eax;

loc_003DDA2A: ;
    edx = MEM32(esp + 8);
    MEM32(ecx + 4) = eax;
    ecx = MEM32(esp + 4);
    MEM32(eax) = ecx;
    MEM32(eax + 4) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003DDA60
 * Original: 0x003DDA60 - 0x003DDAD2 (114 bytes, 36 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DDA60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DDA60: ;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DDACF; /* je: equal / zero */

loc_003DDA67: ;
    edx = MEM32(esp + 4);
    goto loc_003DDA70;

    /* nop */

loc_003DDA70: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DDA7E; /* je: equal / zero */

loc_003DDA74: ;
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DDA70; /* jne: not equal / not zero */

loc_003DDA7B: ;
    esp += 8; return; /* ret 4 */

loc_003DDA7E: ;
    edx = MEM32(eax + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DDA8D; /* je: equal / zero */

loc_003DDA85: ;
    ecx = MEM32(eax + 0xC);
    MEM32(edx + 0xC) = ecx;
    goto loc_003DDA93;

loc_003DDA8D: ;
    edx = MEM32(eax + 0xC);
    MEM32(ecx + 4) = edx;

loc_003DDA93: ;
    ecx = MEM32(eax + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DDAA0; /* je: equal / zero */

loc_003DDA9A: ;
    edx = MEM32(eax + 8);
    MEM32(ecx + 8) = edx;

loc_003DDAA0: ;
    MEM32(eax + 0xC) = 0;
    MEM32(eax + 8) = 0;
    ecx = MEM32(0x907228);
    MEM32(eax + 0xC) = ecx;
    ecx = MEM32(0x907228);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DDAC4; /* je: equal / zero */

loc_003DDAC1: ;
    MEM32(ecx + 8) = eax;

loc_003DDAC4: ;
    MEM32(0x907228) = eax;
    MEM32(eax) = 0;

loc_003DDACF: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003DDAF0
 * Original: 0x003DDAF0 - 0x003DDB6D (125 bytes, 39 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DDAF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DDAF0: ;
    edx = MEM32(ecx + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DDB0C; /* je: equal / zero */

loc_003DDAF7: ;
    eax = MEM32(esp + 4);
    goto loc_003DDB00;

    /* nop */

loc_003DDB00: ;
    _fa = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 4), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DDB11; /* je: equal / zero */

loc_003DDB05: ;
    edx = MEM32(edx + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DDB00; /* jne: not equal / not zero */

loc_003DDB0C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

loc_003DDB11: ;
    eax = MEM32(edx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DDB20; /* je: equal / zero */

loc_003DDB18: ;
    ecx = MEM32(edx + 0xC);
    MEM32(eax + 0xC) = ecx;
    goto loc_003DDB26;

loc_003DDB20: ;
    eax = MEM32(edx + 0xC);
    MEM32(ecx + 4) = eax;

loc_003DDB26: ;
    eax = MEM32(edx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DDB33; /* je: equal / zero */

loc_003DDB2D: ;
    ecx = MEM32(edx + 8);
    MEM32(eax + 8) = ecx;

loc_003DDB33: ;
    MEM32(edx + 0xC) = 0;
    MEM32(edx + 8) = 0;
    eax = MEM32(0x907228);
    MEM32(edx + 0xC) = eax;
    eax = MEM32(0x907228);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DDB55; /* je: equal / zero */

loc_003DDB52: ;
    MEM32(eax + 8) = edx;

loc_003DDB55: ;
    MEM32(0x907228) = edx;
    eax = MEM32(edx);
    MEM32(edx) = 0;
    MEM32(edx + 4) = 0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003DDB90
 * Original: 0x003DDB90 - 0x003DDBB3 (35 bytes, 17 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DDB90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DDB90: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DDBAF; /* je: equal / zero */

loc_003DDB98: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    /* nop */

loc_003DDBA0: ;
    ecx = MEM32(esi);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003DDBA7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003DDBA5u); } /* indirect call */
    }

loc_003DDBA7: ;
    esi = MEM32(esi + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DDBA0; /* jne: not equal / not zero */

loc_003DDBAE: ;
    POP32(esp, edi);

loc_003DDBAF: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003DDBC0
 * Original: 0x003DDBC0 - 0x003DDC47 (135 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DDBC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DDBC0: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    edx = esi;
    PUSH32(esp, 0x835A0C);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003DDBDAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003DDBD8u); } /* indirect call */
    }

loc_003DDBDA: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    MEM32(0x90722C) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_003DDC45; /* jle: less or equal (signed <=) */

loc_003DDBE5: ;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esi;
    /* nop */

loc_003DDBF0: ;
    ecx = MEM32(0x90722C);
    MEM32(eax + ecx) = edx;
    ecx = MEM32(0x90722C);
    MEM32(eax + ecx + 8) = edx;
    ecx = MEM32(0x90722C);
    MEM32(eax + ecx + 0xC) = edx;
    ecx = MEM32(0x90722C);
    MEM32(eax + ecx + 4) = edx;
    ecx = MEM32(0x90722C);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 8) = edx;
    esi = MEM32(0x907228);
    MEM32(ecx + 0xC) = esi;
    esi = MEM32(0x907228);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DDC38; /* je: equal / zero */

loc_003DDC35: ;
    MEM32(esi + 8) = ecx;

loc_003DDC38: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x907228) = ecx;
    if ((_fa != 0)) goto loc_003DDBF0; /* jne: not equal / not zero */

loc_003DDC44: ;
    POP32(esp, edi);

loc_003DDC45: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003DDC70
 * Original: 0x003DDC70 - 0x003DDC81 (17 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DDC70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DDC70: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = 0x835A20;
    MEM32(eax + 4) = ecx;
    MEM8(eax + 8) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003DDC90
 * Original: 0x003DDC90 - 0x003DDCA3 (19 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DDC90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DDC90: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = 0x835A20;
    MEM32(eax + 4) = ecx;
    MEM8(eax + 8) = LO8(ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003DDCB0
 * Original: 0x003DDCB0 - 0x003DDCD6 (38 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DDCB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DDCB0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x835A20;
    if (CMP_EQ(_fa, _fb)) goto loc_003DDCD4; /* je: equal / zero */

loc_003DDCC0: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x003DDCCDu); RECOMP_ABI_CALL(0x00033551u, sub_00033551); /* call 0x00033551 */

loc_003DDCCD: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DDCC0; /* jne: not equal / not zero */

loc_003DDCD4: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003DDCE0
 * Original: 0x003DDCE0 - 0x003DDD1D (61 bytes, 23 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DDCE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DDCE0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x835A20;
    if (CMP_EQ(_fa, _fb)) goto loc_003DDD04; /* je: equal / zero */

loc_003DDCF0: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x003DDCFDu); RECOMP_ABI_CALL(0x00033551u, sub_00033551); /* call 0x00033551 */

loc_003DDCFD: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DDCF0; /* jne: not equal / not zero */

loc_003DDD04: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003DDD17; /* je: equal / zero */

loc_003DDD0B: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x003DDD17u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003DDD14u); } /* indirect call */
    }

loc_003DDD17: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003DDD30
 * Original: 0x003DDD30 - 0x003DDD36 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DDD30(void)
{

loc_003DDD30: ;
    eax = MEM32(0x907BA8);
    esp += 4; return; /* ret */

}

/**
 * sub_003DDD40
 * Original: 0x003DDD40 - 0x003DDD9B (91 bytes, 29 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DDD40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DDD40: ;
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x108);
    ecx = esi;
    PUSH32(esp, 0x003DDD55u); RECOMP_ABI_CALL(0x0001B5EBu, sub_0001B5EB); /* call 0x0001B5EB */

loc_003DDD55: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DDD6C; /* je: equal / zero */

loc_003DDD59: ;
    eax = MEM32(eax + 4);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x835A48);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    goto loc_003DDD79;

loc_003DDD6C: ;
    edx = MEM32(esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x835A30);
    eax = esp + 0xC;
    PUSH32(esp, eax);

loc_003DDD79: ;
    PUSH32(esp, 0x003DDD7Eu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_003DDD7E: ;
    ecx = MEM32(0x907BA8);
    edx = MEM32(ecx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x003DDD91u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003DDD8Eu); } /* indirect call */
    }

loc_003DDD91: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003DDDC0
 * Original: 0x003DDDC0 - 0x003DDDDF (31 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DDDC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DDDC0: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
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
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003DDDF0
 * Original: 0x003DDDF0 - 0x003DDDF5 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DDDF0(void)
{

loc_003DDDF0: ;
    eax = MEM32(esp + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_003DDE00
 * Original: 0x003DDE00 - 0x003DDE06 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DDE00(void)
{

loc_003DDE00: ;
    eax = MEM32(0x907288);
    esp += 4; return; /* ret */

}

/**
 * sub_003DDE10
 * Original: 0x003DDE10 - 0x003DDF0A (250 bytes, 89 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DDE10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003DDE10: ;
    SET_LO8(eax, MEM8(0x90726C));
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DDF06; /* jne: not equal / not zero */

loc_003DDE20: ;
    eax = MEM32(0x907288);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DDE4D; /* jne: not equal / not zero */

loc_003DDE29: ;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x14), 1 (32-bit) */
    PUSH32(esp, 0);
    ecx = 0x907234;
    PUSH32(esp, 0x7B891F);
    if (CMP_NE(_fa, _fb)) goto loc_003DDE43; /* jne: not equal / not zero */

loc_003DDE3C: ;
    PUSH32(esp, 0x003DDE41u); RECOMP_ABI_CALL(0x000140D4u, sub_000140D4); /* call 0x000140D4 */

loc_003DDE41: ;
    goto loc_003DDE48;

loc_003DDE43: ;
    PUSH32(esp, 0x003DDE48u); RECOMP_ABI_CALL(0x00012FB3u, sub_00012FB3); /* call 0x00012FB3 */

loc_003DDE48: ;
    MEM32(0x907288) = eax;

loc_003DDE4D: ;
    eax = MEM32(0x907280);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003DDEF4; /* jle: less or equal (signed <=) */

loc_003DDE5D: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003DDE61: ;
    eax = MEM32(0x907284);
    esi = edi + eax;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DDEB2; /* je: equal / zero */

loc_003DDE70: ;
    ecx = MEM32(esi + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DDEB2; /* je: equal / zero */

loc_003DDE77: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esp + 0x18;
    PUSH32(esp, 0x003DDE86u); RECOMP_ABI_CALL(0x00012987u, sub_00012987); /* call 0x00012987 */

loc_003DDE86: ;
    ecx = MEM32(esi + 0x1C);
    edx = MEM32(ecx);
    eax = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x10);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x003DDEA3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003DDEA0u); } /* indirect call */
    }

loc_003DDEA3: ;
    ecx = MEM32(esi);
    MEM32(ecx) = eax;
    ecx = esp + 0xC;
    PUSH32(esp, 0x003DDEB0u); RECOMP_ABI_CALL(0x00023AFCu, sub_00023AFC); /* call 0x00023AFC */

loc_003DDEB0: ;
    goto loc_003DDED0;

loc_003DDEB2: ;
    eax = MEM32(esi + 0x10);
    ecx = MEM32(esi + 0x1C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x003DDECCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003DDEC9u); } /* indirect call */
    }

loc_003DDECC: ;
    ecx = MEM32(esi);
    MEM32(ecx) = eax;

loc_003DDED0: ;
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DDEE1; /* je: equal / zero */

loc_003DDED7: ;
    edx = MEM32(esi);
    ecx = MEM32(edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003DDEE1u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_003DDEE1: ;
    eax = MEM32(0x907280);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x24;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003DDE61; /* jl: less (signed <) */

loc_003DDEF2: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_003DDEF4: ;
    MEM32(0x907280) = 0;
    MEM8(0x90726C) = 1;
    POP32(esp, ebp);

loc_003DDF06: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003DDF50
 * Original: 0x003DDF50 - 0x003DDF6C (28 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DDF50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DDF50: ;
    SET_LO8(ecx, MEM8(0x90726C));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(eax) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DDF6B; /* je: equal / zero */

loc_003DDF5C: ;
    MEM32(0x907280) = eax;
    MEM8(0x90726C) = LO8(eax);
    MEM32(0x907288) = eax;

loc_003DDF6B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003DDF80
 * Original: 0x003DDF80 - 0x003DDFC6 (70 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DDF80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DDF80: ;
    eax = MEM32(0x907274);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DDFC5; /* jne: not equal / not zero */

loc_003DDF89: ;
    PUSH32(esp, 0x907270);
    PUSH32(esp, 0x907274);
    PUSH32(esp, 0x003DDF98u); RECOMP_ABI_CALL(0x00035BCBu, sub_00035BCB); /* call 0x00035BCB */

loc_003DDF98: ;
    eax = MEM32(0x907274);
    ecx = MEM32(0x907270);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x907284) = eax;
    MEM32(0x907280) = 0;
    MEM32(0x907278) = 0;
    MEM32(0x90727C) = ecx;

loc_003DDFC5: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003DDFE0
 * Original: 0x003DDFE0 - 0x003DE016 (54 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DDFE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DDFE0: ;
    eax = MEM32(0x907278);
    ecx = MEM32(0x90727C);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x24;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003DDFF7; /* jbe: below or equal (unsigned <=) */

loc_003DDFF2: ;
    PUSH32(esp, 0x003DDFF7u); RECOMP_ABI_CALL(0x0059F28Cu, sub_0059F28C); /* call 0x0059F28C */

loc_003DDFF7: ;
    ecx = MEM32(0x907278);
    edx = MEM32(0x907274);
    eax = edx + ecx;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x24;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x907278) = ecx;
    MEM32(0x907280) = MEM32(0x907280) + 1;
    _fa = (uint32_t)(MEM32(0x907280)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_003DE030
 * Original: 0x003DE030 - 0x003DE047 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DE030(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DE030: ;
    eax = MEM32(0x90727C);
    _fb = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(0x907274);
    MEM32(0x90727C) = eax;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003DE050
 * Original: 0x003DE050 - 0x003DE225 (469 bytes, 162 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DE050(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003DE050: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x34);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_003DE062; /* jne: not equal / not zero */

loc_003DE05D: ;
    ebx = 0x907234;

loc_003DE062: ;
    SET_LO8(eax, MEM8(0x90726C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DE19F; /* jne: not equal / not zero */

loc_003DE06F: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0x003DE076u); RECOMP_ABI_CALL(0x0002156Du, sub_0002156D); /* call 0x0002156D */

loc_003DE076: ;
    esi = MEM32(esp + 0x28);
    eax = MEM32(0x907278);
    ecx = MEM32(0x90727C);
    ebp = esi;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x24;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _sv=(uint32_t)(ebp), _sc=(uint32_t)(0x18) & 31u;
      if (_sc) {
        ebp = _sv >> _sc;
        _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003DE096; /* jbe: below or equal (unsigned <=) */

loc_003DE091: ;
    PUSH32(esp, 0x003DE096u); RECOMP_ABI_CALL(0x0059F28Cu, sub_0059F28C); /* call 0x0059F28C */

loc_003DE096: ;
    ecx = MEM32(0x907278);
    edx = MEM32(0x907274);
    eax = edx + ecx;
    edx = MEM32(0x907280);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x24;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x907278) = ecx;
    ecx = MEM32(esp + 0x24);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x907280) = edx;
    edx = MEM32(esp + 0x2C);
    MEM32(eax + 4) = esi;
    esi = MEM32(esp + 0x38);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x30);
    MEM32(eax + 8) = edx;
    edx = MEM32(esp + 0x34);
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_003DE0E6; /* jne: not equal / not zero */

loc_003DE0E1: ;
    MEM32(eax + 0x14) = esi;
    goto loc_003DE110;

loc_003DE0E6: ;
    ecx = MEM32(0x90727C);
    edx = MEM32(0x907274);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x90727C) = ecx;
    edi = edx + ecx;
    ecx = ebp;
    edx = ecx;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM32(eax + 0x14) = edi;
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
    ecx = edx;
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

loc_003DE110: ;
    esi = MEM32(esp + 0x3C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DE11D; /* jne: not equal / not zero */

loc_003DE118: ;
    MEM32(eax + 0x18) = esi;
    goto loc_003DE147;

loc_003DE11D: ;
    ecx = MEM32(0x90727C);
    edx = MEM32(0x907274);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x90727C) = ecx;
    edi = edx + ecx;
    ecx = ebp;
    edx = ecx;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM32(eax + 0x18) = edi;
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
    ecx = edx;
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

loc_003DE147: ;
    esi = MEM32(esp + 0x44);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(eax + 0x1C) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_003DE163; /* jne: not equal / not zero */

loc_003DE152: ;
    ecx = MEM32(esp + 0x24);
    POP32(esp, edi);
    MEM32(eax + 0x20) = esi;
    POP32(esp, ebp);
    MEM32(ecx) = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_003DE163: ;
    ecx = MEM32(0x90727C);
    edx = MEM32(0x907274);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x90727C) = ecx;
    edi = edx + ecx;
    MEM32(eax + 0x20) = edi;
    ecx = ebp;
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
    ecx = MEM32(esp + 0x24);
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, esi);
    MEM32(ecx) = 0;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_003DE19F: ;
    ecx = MEM32(esp + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DE1EC; /* je: equal / zero */

loc_003DE1A7: ;
    eax = MEM32(esp + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DE1EC; /* je: equal / zero */

loc_003DE1AF: ;
    esi = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = esp + 0x14;
    PUSH32(esp, 0x003DE1BFu); RECOMP_ABI_CALL(0x00012987u, sub_00012987); /* call 0x00012987 */

loc_003DE1BF: ;
    ecx = MEM32(esp + 0x2C);
    edx = MEM32(ebx);
    eax = esp + 8;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x2C);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x2C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x003DE1DBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003DE1D8u); } /* indirect call */
    }

loc_003DE1DB: ;
    esi = MEM32(esp + 0x1C);
    ecx = esp + 8;
    MEM32(esi) = eax;
    PUSH32(esp, 0x003DE1EAu); RECOMP_ABI_CALL(0x00023AFCu, sub_00023AFC); /* call 0x00023AFC */

loc_003DE1EA: ;
    goto loc_003DE20F;

loc_003DE1EC: ;
    eax = MEM32(esp + 0x2C);
    ecx = MEM32(esp + 0x28);
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x2C);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x2C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x003DE209u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003DE206u); } /* indirect call */
    }

loc_003DE209: ;
    esi = MEM32(esp + 0x1C);
    MEM32(esi) = eax;

loc_003DE20F: ;
    eax = MEM32(esp + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DE21F; /* je: equal / zero */

loc_003DE217: ;
    ecx = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003DE21Fu); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_003DE21F: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003DE2A0
 * Original: 0x003DE2A0 - 0x003DE2BA (26 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DE2A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DE2A0: ;
    SET_LO8(eax, MEM8(0x90726C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DE2B9; /* je: equal / zero */

loc_003DE2A9: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x907288);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003DE2B9u); RECOMP_ABI_CALL(0x000237CDu, sub_000237CD); /* call 0x000237CD */

loc_003DE2B9: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003DE2C0
 * Original: 0x003DE2C0 - 0x003DE2C6 (6 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DE2C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DE2C0: ;
    eax = MEM32(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003DE2D0
 * Original: 0x003DE2D0 - 0x003DE2D8 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DE2D0(void)
{

loc_003DE2D0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + -4);
    esp += 4; return; /* ret */

}

/**
 * sub_003DE2E0
 * Original: 0x003DE2E0 - 0x003DE2ED (13 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DE2E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DE2E0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_003DE2F0
 * Original: 0x003DE2F0 - 0x003DE2F1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DE2F0(void)
{

loc_003DE2F0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003DE300
 * Original: 0x003DE300 - 0x003DE30B (11 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DE300(void)
{

loc_003DE300: ;
    eax = MEM32(esp + 4);
    MEM32(ecx) = eax;
    MEM32(eax) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003DE310
 * Original: 0x003DE310 - 0x003DE32C (28 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DE310(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DE310: ;
    edx = MEM32(esp + 4);
    MEM32(ecx + 8) = 0;
    eax = MEM32(edx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ecx + 4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_003DE327; /* je: equal / zero */

loc_003DE324: ;
    MEM32(eax + 8) = ecx;

loc_003DE327: ;
    MEM32(edx) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003DE340
 * Original: 0x003DE340 - 0x003DE372 (50 bytes, 20 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DE340(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DE340: ;
    eax = MEM32(ecx + 8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_003DE352; /* je: equal / zero */

loc_003DE34A: ;
    esi = MEM32(ecx + 4);
    MEM32(eax + 4) = esi;
    goto loc_003DE35B;

loc_003DE352: ;
    eax = MEM32(ecx + 4);
    esi = MEM32(esp + 8);
    MEM32(esi) = eax;

loc_003DE35B: ;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DE368; /* je: equal / zero */

loc_003DE362: ;
    esi = MEM32(ecx + 8);
    MEM32(eax + 8) = esi;

loc_003DE368: ;
    MEM32(ecx + 4) = edx;
    MEM32(ecx + 8) = edx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003DE380
 * Original: 0x003DE380 - 0x003DE421 (161 bytes, 62 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DE380(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003DE380: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x14) = edi;
    MEM32(esi + 0x10) = edi;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    edx = ebx + ebx * 2;
    PUSH32(esp, 0x835A70);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003DE3AFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003DE3ADu); } /* indirect call */
    }

loc_003DE3AF: ;
    edx = ebp;
    edx = (uint32_t)((int32_t)edx * (int32_t)ebx);
    MEM32(esi + 0xC) = eax;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x835A5C);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003DE3C7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003DE3C5u); } /* indirect call */
    }

loc_003DE3C7: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    MEM32(esi + 0x18) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_003DE410; /* jle: less or equal (signed <=) */

loc_003DE3CE: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x14) = ebx;

loc_003DE3D4: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(esi + 0x18);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    MEM32(ecx) = eax;
    eax = MEM32(esi + 0xC);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 8) = 0;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(eax + 4) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_003DE3FB; /* je: equal / zero */

loc_003DE3F8: ;
    MEM32(ecx + 8) = eax;

loc_003DE3FB: ;
    MEM32(esi + 0x10) = eax;
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ebp;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = eax;
    if ((_fa != 0)) goto loc_003DE3D4; /* jne: not equal / not zero */

loc_003DE40E: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003DE410: ;
    MEM32(esi + 4) = edi;
    MEM32(esi + 8) = edi;
    POP32(esp, edi);
    MEM32(esi) = ebx;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003DE450
 * Original: 0x003DE450 - 0x003DE473 (35 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DE450(void)
{

loc_003DE450: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esi + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x003DE462u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003DE45Fu); } /* indirect call */
    }

loc_003DE462: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esi + 0x18);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x003DE471u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003DE46Eu); } /* indirect call */
    }

loc_003DE471: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003DE480
 * Original: 0x003DE480 - 0x003DE4CB (75 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DE480(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DE480: ;
    eax = MEM32(ecx + 0x10);
    edx = MEM32(eax + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_003DE493; /* je: equal / zero */

loc_003DE48B: ;
    edi = MEM32(eax + 4);
    MEM32(edx + 4) = edi;
    goto loc_003DE499;

loc_003DE493: ;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x10) = edx;

loc_003DE499: ;
    edx = MEM32(eax + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DE4A6; /* je: equal / zero */

loc_003DE4A0: ;
    edi = MEM32(eax + 8);
    MEM32(edx + 8) = edi;

loc_003DE4A6: ;
    MEM32(eax + 4) = 0;
    MEM32(eax + 8) = 0;
    edx = MEM32(ecx + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(eax + 4) = edx;
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_003DE4C2; /* je: equal / zero */

loc_003DE4BF: ;
    MEM32(edx + 8) = eax;

loc_003DE4C2: ;
    MEM32(ecx + 0x14) = eax;
    eax = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003DE4E0
 * Original: 0x003DE4E0 - 0x003DE52C (76 bytes, 26 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DE4E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DE4E0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + -4);
    edx = MEM32(eax + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_003DE4F7; /* je: equal / zero */

loc_003DE4EF: ;
    edi = MEM32(eax + 4);
    MEM32(edx + 4) = edi;
    goto loc_003DE4FD;

loc_003DE4F7: ;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x14) = edx;

loc_003DE4FD: ;
    edx = MEM32(eax + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DE50A; /* je: equal / zero */

loc_003DE504: ;
    edi = MEM32(eax + 8);
    MEM32(edx + 8) = edi;

loc_003DE50A: ;
    MEM32(eax + 4) = 0;
    MEM32(eax + 8) = 0;
    edx = MEM32(ecx + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(eax + 4) = edx;
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_003DE526; /* je: equal / zero */

loc_003DE523: ;
    MEM32(edx + 8) = eax;

loc_003DE526: ;
    MEM32(ecx + 0x10) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003DE540
 * Original: 0x003DE540 - 0x003DE569 (41 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DE540(void)
{

loc_003DE540: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 4) = eax;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x835A88);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x003DE55Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003DE558u); } /* indirect call */
    }

loc_003DE55A: ;
    MEM32(esi) = eax;
    MEM32(esi + 8) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003DE580
 * Original: 0x003DE580 - 0x003DE590 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DE580(void)
{

loc_003DE580: ;
    ecx = MEM32(ecx);
    eax = MEM32(0x907BA4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x003DE58Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003DE58Cu); } /* indirect call */
    }

loc_003DE58F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003DE5A0
 * Original: 0x003DE5A0 - 0x003DE5D7 (55 bytes, 21 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DE5A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DE5A0: ;
    eax = MEM32(ecx + 8);
    edx = MEM32(ecx + 4);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003DE5B8; /* jle: less or equal (signed <=) */

loc_003DE5B1: ;
    MEM32(ecx + 8) = 0;

loc_003DE5B8: ;
    edx = MEM32(ecx + 8);
    eax = MEM32(ecx);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = edx;
    esi = esi & 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx + 8) = edx;
    if ((_fa == 0)) goto loc_003DE5D3; /* je: equal / zero */

loc_003DE5CB: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 8) = edx;

loc_003DE5D3: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003DE5F0
 * Original: 0x003DE5F0 - 0x003DE605 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DE5F0(void)
{

loc_003DE5F0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x835AA4);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003DE604u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003DE602u); } /* indirect call */
    }

loc_003DE604: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003DE610
 * Original: 0x003DE610 - 0x003DE621 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DE610(void)
{

loc_003DE610: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x003DE620u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003DE61Du); } /* indirect call */
    }

loc_003DE620: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003DE630
 * Original: 0x003DE630 - 0x003DE645 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DE630(void)
{

loc_003DE630: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7BB384);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003DE644u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003DE642u); } /* indirect call */
    }

loc_003DE644: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003DE650
 * Original: 0x003DE650 - 0x003DE683 (51 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DE650(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DE650: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM8(esi + 0x19)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x19), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003DE67F; /* je: equal / zero */

loc_003DE659: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esi + 0x14);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x003DE668u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003DE665u); } /* indirect call */
    }

loc_003DE668: ;
    SET_LO8(eax, MEM8(esi + 0x19));
    ecx = MEM32(esi + 0x10);
    edx = MEM32(esp + 8);
    SET_LO8(eax, LO8(eax) & 0xFE);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(esi + 0x19) = LO8(eax);
    eax = esi + 0x10;
    MEM32(eax) = ecx;
    MEM32(eax + 4) = edx;

loc_003DE67F: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003DE690
 * Original: 0x003DE690 - 0x003DE6AE (30 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DE690(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DE690: ;
    eax = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DE69D; /* je: equal / zero */

loc_003DE697: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DE6AD; /* jne: not equal / not zero */

loc_003DE69D: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x003DE6A5u); RECOMP_ABI_CALL(0x0001B5EBu, sub_0001B5EB); /* call 0x0001B5EB */

loc_003DE6A5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DE6AA; /* jne: not equal / not zero */

loc_003DE6A9: ;
    esp += 4; return; /* ret */

loc_003DE6AA: ;
    eax = MEM32(eax + 0x14);

loc_003DE6AD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003DE6C0
 * Original: 0x003DE6C0 - 0x003DE6CB (11 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DE6C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DE6C0: ;
    eax = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DE6C8; /* jne: not equal / not zero */

loc_003DE6C7: ;
    esp += 4; return; /* ret */

loc_003DE6C8: ;
    eax = MEM32(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_003DE6D0
 * Original: 0x003DE6D0 - 0x003DE6DC (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DE6D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DE6D0: ;
    eax = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DE6D8; /* jne: not equal / not zero */

loc_003DE6D7: ;
    esp += 4; return; /* ret */

loc_003DE6D8: ;
    eax = MEM32(eax + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_003DE6E0
 * Original: 0x003DE6E0 - 0x003DE714 (52 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DE6E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DE6E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DE6F0; /* je: equal / zero */

loc_003DE6EA: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DE6FF; /* jne: not equal / not zero */

loc_003DE6F0: ;
    ecx = esi + 0x10;
    PUSH32(esp, 0x003DE6F8u); RECOMP_ABI_CALL(0x0001B5EBu, sub_0001B5EB); /* call 0x0001B5EB */

loc_003DE6F8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DE6FF; /* je: equal / zero */

loc_003DE6FC: ;
    eax = MEM32(eax + 0x14);

loc_003DE6FF: ;
    ecx = eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DE709; /* jne: not equal / not zero */

loc_003DE705: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003DE709: ;
    eax = MEM32(ecx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x003DE712u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003DE70Fu); } /* indirect call */
    }

loc_003DE712: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003DE730
 * Original: 0x003DE730 - 0x003DE73E (14 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_003DE730(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DE730: ;
    eax = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DE73B; /* je: equal / zero */

loc_003DE737: ;
    eax = MEM32(eax + 4);
    esp += 4; return; /* ret */

loc_003DE73B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_003DE750
 * Original: 0x003DE750 - 0x003DE78A (58 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DE750(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DE750: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DE788; /* jne: not equal / not zero */

loc_003DE75A: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x835AA4);
    PUSH32(esp, 0xC);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003DE76Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003DE769u); } /* indirect call */
    }

loc_003DE76B: ;
    MEM32(esi + 0x1C) = eax;
    MEM32(eax) = 0;
    ecx = MEM32(esi + 0x1C);
    MEM32(ecx + 4) = 0;
    edx = MEM32(esi + 0x1C);
    MEM32(edx + 8) = 0;

loc_003DE788: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003DE7A0
 * Original: 0x003DE7A0 - 0x003DE7CE (46 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DE7A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DE7A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DE7CC; /* jne: not equal / not zero */

loc_003DE7AB: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DE7CC; /* jne: not equal / not zero */

loc_003DE7B2: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DE7CC; /* jne: not equal / not zero */

loc_003DE7B9: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x003DE7C5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003DE7C2u); } /* indirect call */
    }

loc_003DE7C5: ;
    MEM32(esi + 0x1C) = 0;

loc_003DE7CC: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003DE7E0
 * Original: 0x003DE7E0 - 0x003DE802 (34 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DE7E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DE7E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM16(esi + 0x1A) = MEM16(esi + 0x1A) - 1;
    _fa = (uint32_t)(MEM16(esi + 0x1A)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(esi + 0x1A)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x1A), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DE800; /* jne: not equal / not zero */

loc_003DE7EE: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003DE7F7u); RECOMP_ABI_CALL(0x0003535Bu, sub_0003535B); /* call 0x0003535B */

loc_003DE7F7: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x003DE800u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003DE7FDu); } /* indirect call */
    }

loc_003DE800: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003DE810
 * Original: 0x003DE810 - 0x003DE82A (26 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DE810(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DE810: ;
    eax = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DE829; /* je: equal / zero */

loc_003DE817: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DE829; /* je: equal / zero */

loc_003DE81E: ;
    edx = MEM32(eax);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x003DE829u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003DE826u); } /* indirect call */
    }

loc_003DE829: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003DE830
 * Original: 0x003DE830 - 0x003DE87B (75 bytes, 34 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DE830(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DE830: ;
    eax = ecx;
    ecx = MEM32(eax + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DE840; /* je: equal / zero */

loc_003DE839: ;
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DE878; /* jne: not equal / not zero */

loc_003DE840: ;
    ecx = ZX8(MEM8(eax + 0x13));
    edx = eax + 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ebx = ecx;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x14);
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
    ecx = ebx;
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
    eax = MEM32(eax + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DE875; /* je: equal / zero */

loc_003DE866: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DE875; /* je: equal / zero */

loc_003DE86D: ;
    esi = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(esi + 8); PUSH32(esp, 0x003DE875u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003DE872u); } /* indirect call */
    }

loc_003DE875: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_003DE878: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003DE890
 * Original: 0x003DE890 - 0x003DE93B (171 bytes, 63 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DE890(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DE890: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_003DE8E6; /* jne: not equal / not zero */

loc_003DE89C: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DE936; /* je: equal / zero */

loc_003DE8A7: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DE8B8; /* je: equal / zero */

loc_003DE8AD: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003DE8B3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003DE8B1u); } /* indirect call */
    }

loc_003DE8B3: ;
    ecx = MEM32(esi + 0x1C);
    MEM32(ecx) = ebx;

loc_003DE8B8: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DE936; /* jne: not equal / not zero */

loc_003DE8C0: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DE936; /* jne: not equal / not zero */

loc_003DE8C7: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DE936; /* jne: not equal / not zero */

loc_003DE8CE: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x003DE8DAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003DE8D7u); } /* indirect call */
    }

loc_003DE8DA: ;
    MEM32(esi + 0x1C) = 0;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_003DE8E6: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DE91B; /* jne: not equal / not zero */

loc_003DE8ED: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x835AA4);
    PUSH32(esp, 0xC);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003DE8FEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003DE8FCu); } /* indirect call */
    }

loc_003DE8FE: ;
    MEM32(esi + 0x1C) = eax;
    MEM32(eax) = 0;
    ecx = MEM32(esi + 0x1C);
    MEM32(ecx + 4) = 0;
    edx = MEM32(esi + 0x1C);
    MEM32(edx + 8) = 0;

loc_003DE91B: ;
    eax = MEM32(esi + 0x1C);
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DE92A; /* je: equal / zero */

loc_003DE924: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x003DE92Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003DE928u); } /* indirect call */
    }

loc_003DE92A: ;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x003DE931u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003DE92Eu); } /* indirect call */
    }

loc_003DE931: ;
    ecx = MEM32(esi + 0x1C);
    MEM32(ecx) = eax;

loc_003DE936: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003DE970
 * Original: 0x003DE970 - 0x003DE9EA (122 bytes, 41 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DE970(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DE970: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DE9A8; /* jne: not equal / not zero */

loc_003DE97A: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x835AA4);
    PUSH32(esp, 0xC);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003DE98Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003DE989u); } /* indirect call */
    }

loc_003DE98B: ;
    MEM32(esi + 0x1C) = eax;
    MEM32(eax) = 0;
    ecx = MEM32(esi + 0x1C);
    MEM32(ecx + 4) = 0;
    edx = MEM32(esi + 0x1C);
    MEM32(edx + 8) = 0;

loc_003DE9A8: ;
    eax = MEM32(esi + 0x1C);
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DE9E6; /* jne: not equal / not zero */

loc_003DE9B2: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7BB384);
    PUSH32(esp, 0x18);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x003DE9C3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003DE9C1u); } /* indirect call */
    }

loc_003DE9C3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DE9DE; /* je: equal / zero */

loc_003DE9C7: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x003DE9D4u); RECOMP_ABI_CALL(0x0002245Eu, sub_0002245E); /* call 0x0002245E */

loc_003DE9D4: ;
    edx = MEM32(esi + 0x1C);
    MEM32(edx + 8) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_003DE9DE: ;
    edx = MEM32(esi + 0x1C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edx + 8) = eax;

loc_003DE9E6: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003DEA10
 * Original: 0x003DEA10 - 0x003DEA82 (114 bytes, 47 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DEA10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DEA10: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_003DEA4F; /* jne: not equal / not zero */

loc_003DEA1F: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DEA7C; /* je: equal / zero */

loc_003DEA26: ;
    MEM32(eax + 4) = edi;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DEA7C; /* jne: not equal / not zero */

loc_003DEA30: ;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DEA7C; /* jne: not equal / not zero */

loc_003DEA35: ;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DEA7C; /* jne: not equal / not zero */

loc_003DEA3A: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x003DEA46u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003DEA43u); } /* indirect call */
    }

loc_003DEA46: ;
    MEM32(esi + 0x1C) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_003DEA4F: ;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1C), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DEA76; /* jne: not equal / not zero */

loc_003DEA54: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x835AA4);
    PUSH32(esp, 0xC);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003DEA65u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003DEA63u); } /* indirect call */
    }

loc_003DEA65: ;
    MEM32(esi + 0x1C) = eax;
    MEM32(eax) = edi;
    ecx = MEM32(esi + 0x1C);
    MEM32(ecx + 4) = edi;
    edx = MEM32(esi + 0x1C);
    MEM32(edx + 8) = edi;

loc_003DEA76: ;
    eax = MEM32(esi + 0x1C);
    MEM32(eax + 4) = ebx;

loc_003DEA7C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003DEAA0
 * Original: 0x003DEAA0 - 0x003DEB1F (127 bytes, 45 insns)
 * Category: game_vtable
 * CC: thiscall, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DEAA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003DEAA0: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x003DEAB6u); RECOMP_ABI_CALL(0x00026009u, sub_00026009); /* call 0x00026009 */

loc_003DEAB6: ;
    edi = MEM32(esp + 0x20);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    ebp = MEM32(esp + 0x10);
    MEM32(esi) = 0x835AD0;
    if (CMP_EQ(_fa, _fb)) goto loc_003DEACC; /* je: equal / zero */

loc_003DEAC8: ;
    eax = edi;
    goto loc_003DEAE1;

loc_003DEACC: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    eax = ebp;
    PUSH32(esp, 0x835AB0);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x18) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x003DEAE1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003DEADFu); } /* indirect call */
    }

loc_003DEAE1: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    SET_LO8(ecx, MEM8(esp + 0x1C));
    MEM32(esi + 0x10) = ebp;
    MEM32(esi + 0x14) = eax;
    MEM8(esi + 0x18) = LO8(ecx);
    MEM8(esi + 0x19) = 0;
    MEM16(esi + 0x1A) = 0;
    MEM32(esi + 0x1C) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_003DEB07; /* jne: not equal / not zero */

loc_003DEB03: ;
    MEM8(esi + 0x19) = 1;

loc_003DEB07: ;
    eax = MEM32(esp + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DEB17; /* je: equal / zero */

loc_003DEB0F: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x003DEB17u); RECOMP_ABI_CALL(0x0002AD4Du, sub_0002AD4D); /* call 0x0002AD4D */

loc_003DEB17: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_003DEB40
 * Original: 0x003DEB40 - 0x003DEB43 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_003DEB40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DEB40: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_003DEB50
 * Original: 0x003DEB50 - 0x003DEBF6 (166 bytes, 66 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DEB50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003DEB50: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM8(esi + 0x19)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x19), 1 (8-bit) */
    PUSH32(esp, edi);
    MEM32(esi) = 0x835AD0;
    if (TEST_Z(_fa, _fb)) goto loc_003DEB6F; /* je: equal / zero */

loc_003DEB60: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esi + 0x14);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x003DEB6Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003DEB6Cu); } /* indirect call */
    }

loc_003DEB6F: ;
    eax = MEM32(esi + 0x1C);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DEB8B; /* je: equal / zero */

loc_003DEB78: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DEB8B; /* je: equal / zero */

loc_003DEB7F: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003DEB85u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003DEB83u); } /* indirect call */
    }

loc_003DEB85: ;
    ecx = MEM32(esi + 0x1C);
    MEM32(ecx + 8) = edi;

loc_003DEB8B: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DEBC3; /* je: equal / zero */

loc_003DEB92: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DEBA3; /* je: equal / zero */

loc_003DEB98: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x003DEB9Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003DEB9Cu); } /* indirect call */
    }

loc_003DEB9E: ;
    eax = MEM32(esi + 0x1C);
    MEM32(eax) = edi;

loc_003DEBA3: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DEBC3; /* jne: not equal / not zero */

loc_003DEBAA: ;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DEBC3; /* jne: not equal / not zero */

loc_003DEBAF: ;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DEBC3; /* jne: not equal / not zero */

loc_003DEBB4: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x003DEBC0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003DEBBDu); } /* indirect call */
    }

loc_003DEBC0: ;
    MEM32(esi + 0x1C) = edi;

loc_003DEBC3: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DEBED; /* je: equal / zero */

loc_003DEBCA: ;
    MEM32(eax + 4) = edi;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DEBED; /* jne: not equal / not zero */

loc_003DEBD4: ;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DEBED; /* jne: not equal / not zero */

loc_003DEBD9: ;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DEBED; /* jne: not equal / not zero */

loc_003DEBDE: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x003DEBEAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003DEBE7u); } /* indirect call */
    }

loc_003DEBEA: ;
    MEM32(esi + 0x1C) = edi;

loc_003DEBED: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0001DB1B(); return; /* tail jmp 0x0001DB1B */

}

/**
 * sub_003DEC20
 * Original: 0x003DEC20 - 0x003DEC41 (33 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DEC20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DEC20: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x003DEC28u); RECOMP_ABI_CALL(0x00026B71u, sub_00026B71); /* call 0x00026B71 */

loc_003DEC28: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003DEC3B; /* je: equal / zero */

loc_003DEC2F: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x003DEC3Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003DEC38u); } /* indirect call */
    }

loc_003DEC3B: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003DEC50
 * Original: 0x003DEC50 - 0x003DEC99 (73 bytes, 29 insns)
 * Category: game_vtable
 * CC: thiscall, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DEC50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DEC50: ;
    eax = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    esi = ecx;
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x003DEC79u); RECOMP_ABI_CALL(0x000140C5u, sub_000140C5); /* call 0x000140C5 */

loc_003DEC79: ;
    PUSH32(esp, 0x20);
    edx = esi + 0x20;
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    MEM32(esi) = 0x835AE0;
    PUSH32(esp, 0x003DEC8Bu); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_003DEC8B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM8(esi + 0x3F) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_003DECB0
 * Original: 0x003DECB0 - 0x003DECBB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DECB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003DECB0: ;
    MEM32(ecx) = 0x835AE0;
    g_seh_ebp = ebp; sub_00026B71(); return; /* tail jmp 0x00026B71 */

}

/**
 * sub_003DECC0
 * Original: 0x003DECC0 - 0x003DECC4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DECC0(void)
{

loc_003DECC0: ;
    eax = ecx + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_003DECD0
 * Original: 0x003DECD0 - 0x003DECF7 (39 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DECD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DECD0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x835AE0;
    PUSH32(esp, 0x003DECDEu); RECOMP_ABI_CALL(0x00026B71u, sub_00026B71); /* call 0x00026B71 */

loc_003DECDE: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003DECF1; /* je: equal / zero */

loc_003DECE5: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x003DECF1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003DECEEu); } /* indirect call */
    }

loc_003DECF1: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003DED00
 * Original: 0x003DED00 - 0x003DED34 (52 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DED00(void)
{

loc_003DED00: ;
    eax = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    esi = ecx;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x003DED28u); RECOMP_ABI_CALL(0x000140C5u, sub_000140C5); /* call 0x000140C5 */

loc_003DED28: ;
    MEM32(esi) = 0x835AF0;
    eax = esi;
    POP32(esp, esi);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_003DED50
 * Original: 0x003DED50 - 0x003DED5B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DED50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003DED50: ;
    MEM32(ecx) = 0x835AF0;
    g_seh_ebp = ebp; sub_00026B71(); return; /* tail jmp 0x00026B71 */

}

/**
 * sub_003DED60
 * Original: 0x003DED60 - 0x003DED87 (39 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DED60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DED60: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x835AF0;
    PUSH32(esp, 0x003DED6Eu); RECOMP_ABI_CALL(0x00026B71u, sub_00026B71); /* call 0x00026B71 */

loc_003DED6E: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003DED81; /* je: equal / zero */

loc_003DED75: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x003DED81u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003DED7Eu); } /* indirect call */
    }

loc_003DED81: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003DED90
 * Original: 0x003DED90 - 0x003DED94 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DED90(void)
{

loc_003DED90: ;
    eax = MEM32(ecx + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_003DEDA0
 * Original: 0x003DEDA0 - 0x003DEDA4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DEDA0(void)
{

loc_003DEDA0: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_003DEDB0
 * Original: 0x003DEDB0 - 0x003DEDBA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DEDB0(void)
{

loc_003DEDB0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 4) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003DEDC0
 * Original: 0x003DEDC0 - 0x003DEDE8 (40 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DEDC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DEDC0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x003DEDD4u); RECOMP_ABI_CALL(0x00026009u, sub_00026009); /* call 0x00026009 */

loc_003DEDD4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x14) = eax;
    MEM32(esi) = 0x835B00;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003DEE00
 * Original: 0x003DEE00 - 0x003DEE06 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DEE00(void)
{

loc_003DEE00: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_003DEE10
 * Original: 0x003DEE10 - 0x003DEE3D (45 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DEE10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003DEE10: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x835B00;
    if (CMP_EQ(_fa, _fb)) goto loc_003DEE35; /* je: equal / zero */

loc_003DEE20: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DEE2E; /* je: equal / zero */

loc_003DEE27: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x003DEE2Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003DEE2Bu); } /* indirect call */
    }

loc_003DEE2E: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DEE20; /* jne: not equal / not zero */

loc_003DEE35: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0001DB1B(); return; /* tail jmp 0x0001DB1B */

}

/**
 * sub_003DEE50
 * Original: 0x003DEE50 - 0x003DEE5C (12 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DEE50(void)
{

loc_003DEE50: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0x003DEE59u); RECOMP_ABI_CALL(0x00028AA2u, sub_00028AA2); /* call 0x00028AA2 */

loc_003DEE59: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003DEE60
 * Original: 0x003DEE60 - 0x003DEEC2 (98 bytes, 41 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DEE60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DEE60: ;
    edx = MEM32(esp + 4);
    SET_LO8(ecx, MEM8(edx));
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x2F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x2F (8-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_003DEE7C; /* jne: not equal / not zero */

loc_003DEE72: ;
    SET_LO8(ecx, MEM8(eax + edx + 1));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x2F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x2F (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DEE72; /* je: equal / zero */

loc_003DEE7C: ;
    SET_LO8(ecx, MEM8(eax + edx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    edi = MEM32(esp + 0x18);
    if (CMP_EQ(_fa, _fb)) goto loc_003DEE9D; /* je: equal / zero */

loc_003DEE87: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x2F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x2F (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DEE9D; /* je: equal / zero */

loc_003DEE8C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1F (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003DEE9D; /* jge: greater or equal (signed >=) */

loc_003DEE91: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(esi + edi) = LO8(ecx);
    SET_LO8(ecx, MEM8(eax + edx));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DEE87; /* jne: not equal / not zero */

loc_003DEE9D: ;
    ecx = MEM32(esp + 0x14);
    MEM8(esi + edi) = 0;
    POP32(esp, edi);
    MEM8(ecx) = 0;
    SET_LO8(ebx, MEM8(eax + edx));
    POP32(esp, esi);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x2F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x2F (8-bit) */
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_003DEEBA; /* jne: not equal / not zero */

loc_003DEEB3: ;
    eax = eax + edx + 1;
    esp += 16; return; /* ret 12 */

loc_003DEEBA: ;
    MEM8(ecx) = 1;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003DEEE0
 * Original: 0x003DEEE0 - 0x003DEF1B (59 bytes, 28 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DEEE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DEEE0: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DEF17; /* je: equal / zero */

loc_003DEEE8: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    /* nop */

loc_003DEEF0: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003DEEF6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003DEEF4u); } /* indirect call */
    }

loc_003DEEF6: ;
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_003DEF08; /* je: equal / zero */

loc_003DEEFB: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003DEF0F; /* jne: not equal / not zero */

loc_003DEEFE: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x003DEF06u); RECOMP_ABI_CALL(0x00012C93u, sub_00012C93); /* call 0x00012C93 */

loc_003DEF06: ;
    goto loc_003DEF0F;

loc_003DEF08: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x003DEF0Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003DEF0Du); } /* indirect call */
    }

loc_003DEF0F: ;
    esi = MEM32(esi + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DEEF0; /* jne: not equal / not zero */

loc_003DEF16: ;
    POP32(esp, edi);

loc_003DEF17: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003DEF30
 * Original: 0x003DEF30 - 0x003DEF6C (60 bytes, 28 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DEF30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DEF30: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DEF68; /* je: equal / zero */

loc_003DEF38: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    /* nop */

loc_003DEF40: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003DEF46u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003DEF44u); } /* indirect call */
    }

loc_003DEF46: ;
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_003DEF58; /* je: equal / zero */

loc_003DEF4B: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003DEF60; /* jne: not equal / not zero */

loc_003DEF4E: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x003DEF56u); RECOMP_ABI_CALL(0x0001B7FDu, sub_0001B7FD); /* call 0x0001B7FD */

loc_003DEF56: ;
    goto loc_003DEF60;

loc_003DEF58: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x003DEF60u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003DEF5Du); } /* indirect call */
    }

loc_003DEF60: ;
    esi = MEM32(esi + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DEF40; /* jne: not equal / not zero */

loc_003DEF67: ;
    POP32(esp, edi);

loc_003DEF68: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003DEF80
 * Original: 0x003DEF80 - 0x003DEFB6 (54 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DEF80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DEF80: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    /* nop */

loc_003DEF90: ;
    esi = MEM32(edi + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DEFA5; /* je: equal / zero */

loc_003DEF97: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003DEF9Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003DEF9Cu); } /* indirect call */
    }

loc_003DEF9E: ;
    esi = MEM32(esi + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DEF97; /* jne: not equal / not zero */

loc_003DEFA5: ;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DEFB0; /* je: equal / zero */

loc_003DEFAC: ;
    edi = eax;
    goto loc_003DEF90;

loc_003DEFB0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003DEFD0
 * Original: 0x003DEFD0 - 0x003DF004 (52 bytes, 23 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DEFD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DEFD0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    if (CMP_EQ(_fa, _fb)) goto loc_003DEFE5; /* je: equal / zero */

loc_003DEFDF: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x003DEFE5u); RECOMP_ABI_CALL(0x0003535Bu, sub_0003535B); /* call 0x0003535B */

loc_003DEFE5: ;
    esi = MEM32(esi + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DEFFF; /* je: equal / zero */

loc_003DEFEC: ;
    /* nop */

loc_003DEFF0: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x003DEFF8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003DEFF5u); } /* indirect call */
    }

loc_003DEFF8: ;
    esi = MEM32(esi + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DEFF0; /* jne: not equal / not zero */

loc_003DEFFF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003DF020
 * Original: 0x003DF020 - 0x003DF023 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DF020(void)
{

loc_003DF020: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003DF030
 * Original: 0x003DF030 - 0x003DF075 (69 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DF030(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DF030: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x835B00;
    if (CMP_EQ(_fa, _fb)) goto loc_003DF055; /* je: equal / zero */

loc_003DF040: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DF04E; /* je: equal / zero */

loc_003DF047: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x003DF04Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003DF04Bu); } /* indirect call */
    }

loc_003DF04E: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DF040; /* jne: not equal / not zero */

loc_003DF055: ;
    ecx = esi;
    PUSH32(esp, 0x003DF05Cu); RECOMP_ABI_CALL(0x0001DB1Bu, sub_0001DB1B); /* call 0x0001DB1B */

loc_003DF05C: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003DF06F; /* je: equal / zero */

loc_003DF063: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x003DF06Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003DF06Cu); } /* indirect call */
    }

loc_003DF06F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003DF090
 * Original: 0x003DF090 - 0x003DF0A6 (22 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DF090(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003DF090: ;
    eax = MEM32(esp + 4);
    edx = MEM32(ecx + 0x14);
    MEM32(eax + 4) = edx;
    MEM32(ecx + 0x14) = eax;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00012C93(); return; /* tail jmp 0x00012C93 */

}

/**
 * sub_003DF0B0
 * Original: 0x003DF0B0 - 0x003DF103 (83 bytes, 35 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DF0B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DF0B0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    edi = ecx;
    PUSH32(esp, 0x003DF0BEu); RECOMP_ABI_CALL(0x0001B7FDu, sub_0001B7FD); /* call 0x0001B7FD */

loc_003DF0BE: ;
    eax = MEM32(edi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DF0D7; /* jne: not equal / not zero */

loc_003DF0C5: ;
    eax = MEM32(eax + 4);
    MEM32(edi + 0x14) = eax;
    POP32(esp, edi);
    MEM32(esi + 4) = 0;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_003DF0D7: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DF0FB; /* je: equal / zero */

loc_003DF0DD: ;
    /* nop */

loc_003DF0E0: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DF0F5; /* je: equal / zero */

loc_003DF0E7: ;
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DF0E0; /* jne: not equal / not zero */

loc_003DF0ED: ;
    POP32(esp, edi);
    MEM32(esi + 4) = edx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_003DF0F5: ;
    ecx = MEM32(esi + 4);
    MEM32(eax + 4) = ecx;

loc_003DF0FB: ;
    POP32(esp, edi);
    MEM32(esi + 4) = edx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003DF120
 * Original: 0x003DF120 - 0x003DF135 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DF120(void)
{

loc_003DF120: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x835B1C);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003DF134u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003DF132u); } /* indirect call */
    }

loc_003DF134: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003DF140
 * Original: 0x003DF140 - 0x003DF173 (51 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DF140(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DF140: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x003DF153u); RECOMP_ABI_CALL(0x00021A04u, sub_00021A04); /* call 0x00021A04 */

loc_003DF153: ;
    PUSH32(esp, 0x20);
    ecx = esi + 0x18;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    MEM32(esi) = 0x835B2C;
    PUSH32(esp, 0x003DF165u); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_003DF165: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM8(esi + 0x37) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003DF180
 * Original: 0x003DF180 - 0x003DF18B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DF180(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003DF180: ;
    MEM32(ecx) = 0x835B2C;
    g_seh_ebp = ebp; sub_0001E5A7(); return; /* tail jmp 0x0001E5A7 */

}

/**
 * sub_003DF190
 * Original: 0x003DF190 - 0x003DF194 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DF190(void)
{

loc_003DF190: ;
    eax = ecx + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_003DF1A0
 * Original: 0x003DF1A0 - 0x003DF332 (402 bytes, 172 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DF1A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003DF1A0: ;
    edx = MEM32(esp + 8);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0x3C;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x003DF1BFu); RECOMP_ABI_CALL(0x0002AB2Cu, sub_0002AB2C); /* call 0x0002AB2C */

loc_003DF1BF: ;
    ebp = eax;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x003DF1CDu); RECOMP_ABI_CALL(0x000345D7u, sub_000345D7); /* call 0x000345D7 */

loc_003DF1CD: ;
    esi = MEM32(edi + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    ebx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_003DF20F; /* je: equal / zero */

loc_003DF1D6: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x003DF1DCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003DF1DAu); } /* indirect call */
    }

loc_003DF1DC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DF1E9; /* jne: not equal / not zero */

loc_003DF1E1: ;
    SET_LO8(eax, MEM8(esp + 0x38));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DF1FB; /* je: equal / zero */

loc_003DF1E9: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003DF1EFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003DF1EDu); } /* indirect call */
    }

loc_003DF1EF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DF208; /* jne: not equal / not zero */

loc_003DF1F3: ;
    SET_LO8(eax, MEM8(esp + 0x38));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DF208; /* je: equal / zero */

loc_003DF1FB: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esi + 0xC) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DF208; /* jne: not equal / not zero */

loc_003DF200: ;
    _fb = (uint32_t)(0) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(eax, LO8(eax) - 0);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_003DF256; /* je: equal / zero */

loc_003DF204: ;
    SET_LO8(eax, LO8(eax) - 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_003DF22B; /* je: equal / zero */

loc_003DF208: ;
    esi = MEM32(esi + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DF1D6; /* jne: not equal / not zero */

loc_003DF20F: ;
    SET_LO8(eax, MEM8(esp + 0x38));
    _fb = (uint32_t)(0) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(eax, LO8(eax) - 0);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_003DF2E6; /* je: equal / zero */

loc_003DF21B: ;
    SET_LO8(eax, LO8(eax) - 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_003DF27C; /* je: equal / zero */

loc_003DF21F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

loc_003DF22B: ;
    edi = MEM32(esp + 0x44);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DF246; /* je: equal / zero */

loc_003DF233: ;
    ecx = esi;
    PUSH32(esp, 0x003DF23Au); RECOMP_ABI_CALL(0x0002800Cu, sub_0002800C); /* call 0x0002800C */

loc_003DF23A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DF246; /* je: equal / zero */

loc_003DF23E: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x003DF246u); RECOMP_ABI_CALL(0x0002AD4Du, sub_0002AD4D); /* call 0x0002AD4D */

loc_003DF246: ;
    MEM16(esi + 0x1A) = MEM16(esi + 0x1A) + 1;
    _fa = (uint32_t)(MEM16(esi + 0x1A)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

loc_003DF256: ;
    eax = MEM32(esp + 0x44);
    ecx = MEM32(esp + 0x40);
    edx = MEM32(esi);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x40);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x3C);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x003DF272u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003DF26Fu); } /* indirect call */
    }

loc_003DF272: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

loc_003DF27C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x835B1C);
    PUSH32(esp, 0x40);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x003DF28Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003DF28Bu); } /* indirect call */
    }

loc_003DF28D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DF2CC; /* je: equal / zero */

loc_003DF291: ;
    ecx = MEM32(esp + 0x44);
    edx = MEM32(esp + 0x40);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x40);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x40);
    PUSH32(esp, edi);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x003DF2B2u); RECOMP_ABI_CALL(0x00011CDAu, sub_00011CDA); /* call 0x00011CDA */

loc_003DF2B2: ;
    esi = eax;
    MEM16(esi + 0x1A) = MEM16(esi + 0x1A) + 1;
    _fa = (uint32_t)(MEM16(esi + 0x1A)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x003DF2C0u); RECOMP_ABI_CALL(0x000126DFu, sub_000126DF); /* call 0x000126DF */

loc_003DF2C0: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

loc_003DF2CC: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM16(esi + 0x1A) = MEM16(esi + 0x1A) + 1;
    _fa = (uint32_t)(MEM16(esi + 0x1A)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x003DF2DAu); RECOMP_ABI_CALL(0x000126DFu, sub_000126DF); /* call 0x000126DF */

loc_003DF2DA: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

loc_003DF2E6: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x835B1C);
    PUSH32(esp, 0x38);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x003DF2F7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003DF2F5u); } /* indirect call */
    }

loc_003DF2F7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DF30A; /* je: equal / zero */

loc_003DF2FB: ;
    PUSH32(esp, edi);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x003DF308u); RECOMP_ABI_CALL(0x00012FB3u, sub_00012FB3); /* call 0x00012FB3 */

loc_003DF308: ;
    goto loc_003DF30C;

loc_003DF30A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003DF30C: ;
    ecx = MEM32(esp + 0x44);
    edx = MEM32(eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x44);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x44);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x40);
    PUSH32(esp, ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x003DF328u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003DF325u); } /* indirect call */
    }

loc_003DF328: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_003DF3A0
 * Original: 0x003DF3A0 - 0x003DF435 (149 bytes, 68 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DF3A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DF3A0: ;
    edx = MEM32(esp + 4);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x003DF3BEu); RECOMP_ABI_CALL(0x0002AB2Cu, sub_0002AB2C); /* call 0x0002AB2C */

loc_003DF3BE: ;
    ebx = eax;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x003DF3CCu); RECOMP_ABI_CALL(0x000345D7u, sub_000345D7); /* call 0x000345D7 */

loc_003DF3CC: ;
    esi = MEM32(esi + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_003DF40E; /* je: equal / zero */

loc_003DF3D5: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x003DF3DBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003DF3D9u); } /* indirect call */
    }

loc_003DF3DB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DF3E8; /* jne: not equal / not zero */

loc_003DF3E0: ;
    SET_LO8(eax, MEM8(esp + 0x30));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DF3FA; /* je: equal / zero */

loc_003DF3E8: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003DF3EEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003DF3ECu); } /* indirect call */
    }

loc_003DF3EE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DF407; /* jne: not equal / not zero */

loc_003DF3F2: ;
    SET_LO8(eax, MEM8(esp + 0x30));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DF407; /* je: equal / zero */

loc_003DF3FA: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0xC) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DF407; /* jne: not equal / not zero */

loc_003DF3FF: ;
    _fb = (uint32_t)(0) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(eax, LO8(eax) - 0);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_003DF424; /* je: equal / zero */

loc_003DF403: ;
    SET_LO8(eax, LO8(eax) - 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_003DF419; /* je: equal / zero */

loc_003DF407: ;
    esi = MEM32(esi + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DF3D5; /* jne: not equal / not zero */

loc_003DF40E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_003DF419: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_003DF424: ;
    edx = MEM32(esi);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x003DF42Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003DF429u); } /* indirect call */
    }

loc_003DF42C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003DF460
 * Original: 0x003DF460 - 0x003DF52E (206 bytes, 93 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DF460(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003DF460: ;
    edx = MEM32(esp + 4);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x003DF47Fu); RECOMP_ABI_CALL(0x0002AB2Cu, sub_0002AB2C); /* call 0x0002AB2C */

loc_003DF47F: ;
    ebp = eax;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x003DF48Du); RECOMP_ABI_CALL(0x000345D7u, sub_000345D7); /* call 0x000345D7 */

loc_003DF48D: ;
    esi = MEM32(edi + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    ebx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_003DF4AD; /* je: equal / zero */

loc_003DF496: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esi + 0xC) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DF4A6; /* jne: not equal / not zero */

loc_003DF49B: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x003DF4A1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003DF49Fu); } /* indirect call */
    }

loc_003DF4A1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DF4D9; /* je: equal / zero */

loc_003DF4A6: ;
    esi = MEM32(esi + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DF496; /* jne: not equal / not zero */

loc_003DF4AD: ;
    SET_LO8(eax, MEM8(esp + 0x38));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DF522; /* je: equal / zero */

loc_003DF4B5: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x835B1C);
    PUSH32(esp, 0x38);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x003DF4C6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003DF4C4u); } /* indirect call */
    }

loc_003DF4C6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DF504; /* je: equal / zero */

loc_003DF4CA: ;
    PUSH32(esp, edi);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x003DF4D7u); RECOMP_ABI_CALL(0x00012FB3u, sub_00012FB3); /* call 0x00012FB3 */

loc_003DF4D7: ;
    goto loc_003DF506;

loc_003DF4D9: ;
    SET_LO8(eax, MEM8(esp + 0x34));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DF4F8; /* jne: not equal / not zero */

loc_003DF4E1: ;
    ecx = MEM32(esp + 0x38);
    eax = MEM32(esi);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x003DF4EEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003DF4EBu); } /* indirect call */
    }

loc_003DF4EE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_003DF4F8: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_003DF504: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003DF506: ;
    SET_LO8(ecx, MEM8(esp + 0x34));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DF524; /* jne: not equal / not zero */

loc_003DF50E: ;
    edx = MEM32(eax);
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x003DF518u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003DF515u); } /* indirect call */
    }

loc_003DF518: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_003DF522: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003DF524: ;
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
 * sub_003DF570
 * Original: 0x003DF570 - 0x003DF597 (39 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DF570(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DF570: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x835B2C;
    PUSH32(esp, 0x003DF57Eu); RECOMP_ABI_CALL(0x0001E5A7u, sub_0001E5A7); /* call 0x0001E5A7 */

loc_003DF57E: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003DF591; /* je: equal / zero */

loc_003DF585: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x003DF591u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003DF58Eu); } /* indirect call */
    }

loc_003DF591: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003DF5A0
 * Original: 0x003DF5A0 - 0x003DF5AA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DF5A0(void)
{

loc_003DF5A0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 8) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003DF5B0
 * Original: 0x003DF5B0 - 0x003DF5B4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DF5B0(void)
{

loc_003DF5B0: ;
    eax = MEM32(ecx + 0x10);
    esp += 4; return; /* ret */

}

/**
 * sub_003DF5C0
 * Original: 0x003DF5C0 - 0x003DF5CA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DF5C0(void)
{

loc_003DF5C0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x10) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003DF5D0
 * Original: 0x003DF5D0 - 0x003DF623 (83 bytes, 33 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DF5D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DF5D0: ;
    edx = MEM32(ecx + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(ecx) = 0x835B48;
    if (CMP_EQ(_fa, _fb)) goto loc_003DF622; /* je: equal / zero */

loc_003DF5DD: ;
    eax = MEM32(edx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DF5EC; /* jne: not equal / not zero */

loc_003DF5E4: ;
    eax = MEM32(ecx + 8);
    MEM32(edx + 0x10) = eax;
    goto loc_003DF605;

loc_003DF5EC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DF605; /* je: equal / zero */

loc_003DF5F0: ;
    edx = MEM32(eax + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DF5FF; /* je: equal / zero */

loc_003DF5F7: ;
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DF5F0; /* jne: not equal / not zero */

loc_003DF5FD: ;
    goto loc_003DF605;

loc_003DF5FF: ;
    edx = MEM32(ecx + 8);
    MEM32(eax + 8) = edx;

loc_003DF605: ;
    ecx = MEM32(ecx + 4);
    eax = MEM32(ecx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DF622; /* jne: not equal / not zero */

loc_003DF60F: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x907288)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(0x907288) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DF622; /* je: equal / zero */

loc_003DF617: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DF622; /* je: equal / zero */

loc_003DF61B: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x003DF622u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003DF61Fu); } /* indirect call */
    }

loc_003DF622: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003DF640
 * Original: 0x003DF640 - 0x003DF660 (32 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DF640(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DF640: ;
    edx = MEM32(esp + 4);
    ecx = (uint32_t)(int32_t)SMEM8(edx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = 0x1505;
    if (CMP_EQ(_fa, _fb)) goto loc_003DF65D; /* je: equal / zero */

loc_003DF650: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x21);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = (uint32_t)(int32_t)SMEM8(edx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DF650; /* jne: not equal / not zero */

loc_003DF65D: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003DF670
 * Original: 0x003DF670 - 0x003DF6B2 (66 bytes, 26 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DF670(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DF670: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(edx));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x2F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x2F (8-bit) */
    eax = 0x9072A0;
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_003DF689; /* jne: not equal / not zero */

loc_003DF684: ;
    ecx = 1;

loc_003DF689: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DF6A7; /* je: equal / zero */

loc_003DF690: ;
    SET_LO8(ecx, MEM8(edx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x5C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x5C (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DF69C; /* jne: not equal / not zero */

loc_003DF697: ;
    MEM8(eax) = 0x2F;
    goto loc_003DF69E;

loc_003DF69C: ;
    MEM8(eax) = LO8(ecx);

loc_003DF69E: ;
    SET_LO8(ecx, MEM8(edx + 1));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DF690; /* jne: not equal / not zero */

loc_003DF6A7: ;
    MEM8(eax) = 0;
    eax = 0x9072A0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003DF6D0
 * Original: 0x003DF6D0 - 0x003DF6EC (28 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DF6D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DF6D0: ;
    eax = MEM32(ecx + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x7E0D78);
    PUSH32(esp, 0x9076A0);
    PUSH32(esp, 0x003DF6E3u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_003DF6E3: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0x9076A0;
    esp += 4; return; /* ret */

}

/**
 * sub_003DF700
 * Original: 0x003DF700 - 0x003DF76F (111 bytes, 51 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DF700(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003DF700: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    ebx = ecx;
    ecx = MEM32(ebx + 4);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    if (CMP_EQ(_fa, _fb)) goto loc_003DF745; /* je: equal / zero */

loc_003DF717: ;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DF745; /* je: equal / zero */

loc_003DF71E: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0x003DF725u); RECOMP_ABI_CALL(0x000197F5u, sub_000197F5); /* call 0x000197F5 */

loc_003DF725: ;
    esi = edi;
    ecx = esi + 1;
    /* nop */

loc_003DF730: ;
    SET_LO8(eax, MEM8(esi));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DF730; /* jne: not equal / not zero */

loc_003DF737: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ebp + -1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003DF745; /* jge: greater or equal (signed >=) */

loc_003DF740: ;
    MEM8(esi + edi) = 0x2F;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003DF745: ;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x003DF74Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003DF749u); } /* indirect call */
    }

loc_003DF74C: ;
    edx = ebp + -1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003DF764; /* jge: greater or equal (signed >=) */

loc_003DF753: ;
    ecx = eax;

loc_003DF755: ;
    SET_LO8(eax, MEM8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DF764; /* je: equal / zero */

loc_003DF75B: ;
    MEM8(esi + edi) = LO8(eax);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003DF755; /* jl: less (signed <) */

loc_003DF764: ;
    MEM8(esi + edi) = 0;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003DF790
 * Original: 0x003DF790 - 0x003DF7F0 (96 bytes, 38 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DF790(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DF790: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    MEM32(eax) = 0x835B48;
    MEM32(eax + 4) = edi;
    MEM32(eax + 8) = 0;
    edx = (uint32_t)(int32_t)SMEM8(esi);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    ecx = 0x1505;
    if (CMP_EQ(_fa, _fb)) goto loc_003DF7C5; /* je: equal / zero */

loc_003DF7B8: ;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x21);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)(int32_t)SMEM8(esi);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DF7B8; /* jne: not equal / not zero */

loc_003DF7C5: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(eax + 0xC) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_003DF7E3; /* je: equal / zero */

loc_003DF7CC: ;
    ecx = MEM32(edi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DF7E0; /* je: equal / zero */

loc_003DF7D3: ;
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DF7E8; /* je: equal / zero */

loc_003DF7DA: ;
    ecx = edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DF7D3; /* jne: not equal / not zero */

loc_003DF7E0: ;
    MEM32(edi + 0x10) = eax;

loc_003DF7E3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_003DF7E8: ;
    POP32(esp, edi);
    MEM32(ecx + 8) = eax;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003DF810
 * Original: 0x003DF810 - 0x003DF831 (33 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DF810(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DF810: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x003DF818u); RECOMP_ABI_CALL(0x0001DB1Bu, sub_0001DB1B); /* call 0x0001DB1B */

loc_003DF818: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003DF82B; /* je: equal / zero */

loc_003DF81F: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x003DF82Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003DF828u); } /* indirect call */
    }

loc_003DF82B: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003DF840
 * Original: 0x003DF840 - 0x003DF860 (32 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DF840(void)
{

loc_003DF840: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x003DF854u); RECOMP_ABI_CALL(0x00021A04u, sub_00021A04); /* call 0x00021A04 */

loc_003DF854: ;
    MEM32(esi) = 0x835B58;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003DF870
 * Original: 0x003DF870 - 0x003DF87B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DF870(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003DF870: ;
    MEM32(ecx) = 0x835B58;
    g_seh_ebp = ebp; sub_0001E5A7(); return; /* tail jmp 0x0001E5A7 */

}

/**
 * sub_003DF880
 * Original: 0x003DF880 - 0x003DF9EE (366 bytes, 159 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DF880(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003DF880: ;
    edx = MEM32(esp + 8);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0x3C;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x003DF89Fu); RECOMP_ABI_CALL(0x0002AB2Cu, sub_0002AB2C); /* call 0x0002AB2C */

loc_003DF89F: ;
    ebp = eax;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x003DF8ADu); RECOMP_ABI_CALL(0x000345D7u, sub_000345D7); /* call 0x000345D7 */

loc_003DF8AD: ;
    esi = MEM32(edi + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    ebx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_003DF8EF; /* je: equal / zero */

loc_003DF8B6: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x003DF8BCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003DF8BAu); } /* indirect call */
    }

loc_003DF8BC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DF8C9; /* jne: not equal / not zero */

loc_003DF8C1: ;
    SET_LO8(eax, MEM8(esp + 0x38));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DF8DB; /* je: equal / zero */

loc_003DF8C9: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003DF8CFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003DF8CDu); } /* indirect call */
    }

loc_003DF8CF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DF8E8; /* jne: not equal / not zero */

loc_003DF8D3: ;
    SET_LO8(eax, MEM8(esp + 0x38));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DF8E8; /* je: equal / zero */

loc_003DF8DB: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esi + 0xC) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DF8E8; /* jne: not equal / not zero */

loc_003DF8E0: ;
    _fb = (uint32_t)(0) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(eax, LO8(eax) - 0);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_003DF91B; /* je: equal / zero */

loc_003DF8E4: ;
    SET_LO8(eax, LO8(eax) - 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_003DF90B; /* je: equal / zero */

loc_003DF8E8: ;
    esi = MEM32(esi + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DF8B6; /* jne: not equal / not zero */

loc_003DF8EF: ;
    SET_LO8(eax, MEM8(esp + 0x38));
    _fb = (uint32_t)(0) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(eax, LO8(eax) - 0);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_003DF9A5; /* je: equal / zero */

loc_003DF8FB: ;
    SET_LO8(eax, LO8(eax) - 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_003DF93E; /* je: equal / zero */

loc_003DF8FF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

loc_003DF90B: ;
    MEM16(esi + 0x1A) = MEM16(esi + 0x1A) + 1;
    _fa = (uint32_t)(MEM16(esi + 0x1A)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

loc_003DF91B: ;
    eax = MEM32(esp + 0x40);
    ecx = MEM32(esp + 0x3C);
    edx = MEM32(esi);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x3C);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x003DF934u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003DF931u); } /* indirect call */
    }

loc_003DF934: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

loc_003DF93E: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x835B1C);
    PUSH32(esp, 0x20);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x003DF94Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003DF94Du); } /* indirect call */
    }

loc_003DF94F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DF98B; /* je: equal / zero */

loc_003DF953: ;
    ecx = MEM32(esp + 0x40);
    edx = MEM32(esp + 0x3C);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x40);
    PUSH32(esp, edi);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x003DF971u); RECOMP_ABI_CALL(0x0002D70Fu, sub_0002D70F); /* call 0x0002D70F */

loc_003DF971: ;
    esi = eax;
    MEM16(esi + 0x1A) = MEM16(esi + 0x1A) + 1;
    _fa = (uint32_t)(MEM16(esi + 0x1A)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x003DF97Fu); RECOMP_ABI_CALL(0x000126DFu, sub_000126DF); /* call 0x000126DF */

loc_003DF97F: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

loc_003DF98B: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM16(esi + 0x1A) = MEM16(esi + 0x1A) + 1;
    _fa = (uint32_t)(MEM16(esi + 0x1A)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x003DF999u); RECOMP_ABI_CALL(0x000126DFu, sub_000126DF); /* call 0x000126DF */

loc_003DF999: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

loc_003DF9A5: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x835B1C);
    PUSH32(esp, 0x18);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003DF9B6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003DF9B4u); } /* indirect call */
    }

loc_003DF9B6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DF9C9; /* je: equal / zero */

loc_003DF9BA: ;
    PUSH32(esp, edi);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x003DF9C7u); RECOMP_ABI_CALL(0x000140D4u, sub_000140D4); /* call 0x000140D4 */

loc_003DF9C7: ;
    goto loc_003DF9CB;

loc_003DF9C9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003DF9CB: ;
    ecx = MEM32(esp + 0x40);
    edx = MEM32(eax);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x44);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x40);
    PUSH32(esp, ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x003DF9E4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003DF9E1u); } /* indirect call */
    }

loc_003DF9E4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_003DFA50
 * Original: 0x003DFA50 - 0x003DFAE5 (149 bytes, 68 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DFA50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DFA50: ;
    edx = MEM32(esp + 4);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x003DFA6Eu); RECOMP_ABI_CALL(0x0002AB2Cu, sub_0002AB2C); /* call 0x0002AB2C */

loc_003DFA6E: ;
    ebx = eax;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x003DFA7Cu); RECOMP_ABI_CALL(0x000345D7u, sub_000345D7); /* call 0x000345D7 */

loc_003DFA7C: ;
    esi = MEM32(esi + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_003DFABE; /* je: equal / zero */

loc_003DFA85: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x003DFA8Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003DFA89u); } /* indirect call */
    }

loc_003DFA8B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DFA98; /* jne: not equal / not zero */

loc_003DFA90: ;
    SET_LO8(eax, MEM8(esp + 0x30));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DFAAA; /* je: equal / zero */

loc_003DFA98: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003DFA9Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003DFA9Cu); } /* indirect call */
    }

loc_003DFA9E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DFAB7; /* jne: not equal / not zero */

loc_003DFAA2: ;
    SET_LO8(eax, MEM8(esp + 0x30));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DFAB7; /* je: equal / zero */

loc_003DFAAA: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0xC) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DFAB7; /* jne: not equal / not zero */

loc_003DFAAF: ;
    _fb = (uint32_t)(0) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(eax, LO8(eax) - 0);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_003DFAD4; /* je: equal / zero */

loc_003DFAB3: ;
    SET_LO8(eax, LO8(eax) - 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_003DFAC9; /* je: equal / zero */

loc_003DFAB7: ;
    esi = MEM32(esi + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DFA85; /* jne: not equal / not zero */

loc_003DFABE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_003DFAC9: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_003DFAD4: ;
    edx = MEM32(esi);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x003DFADCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003DFAD9u); } /* indirect call */
    }

loc_003DFADC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003DFB10
 * Original: 0x003DFB10 - 0x003DFBE8 (216 bytes, 96 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DFB10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003DFB10: ;
    edx = MEM32(esp + 4);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x003DFB2Fu); RECOMP_ABI_CALL(0x0002AB2Cu, sub_0002AB2C); /* call 0x0002AB2C */

loc_003DFB2F: ;
    ebp = eax;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x003DFB3Du); RECOMP_ABI_CALL(0x000345D7u, sub_000345D7); /* call 0x000345D7 */

loc_003DFB3D: ;
    esi = MEM32(edi + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    ebx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_003DFB5D; /* je: equal / zero */

loc_003DFB46: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esi + 0xC) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DFB56; /* jne: not equal / not zero */

loc_003DFB4B: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x003DFB51u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003DFB4Fu); } /* indirect call */
    }

loc_003DFB51: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DFB93; /* je: equal / zero */

loc_003DFB56: ;
    esi = MEM32(esi + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DFB46; /* jne: not equal / not zero */

loc_003DFB5D: ;
    SET_LO8(eax, MEM8(esp + 0x38));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DFBDC; /* je: equal / zero */

loc_003DFB65: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x835B1C);
    PUSH32(esp, 0x18);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x003DFB76u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003DFB74u); } /* indirect call */
    }

loc_003DFB76: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003DFBBE; /* je: equal / zero */

loc_003DFB7C: ;
    PUSH32(esp, edi);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x003DFB89u); RECOMP_ABI_CALL(0x00021A04u, sub_00021A04); /* call 0x00021A04 */

loc_003DFB89: ;
    MEM32(esi) = 0x835B58;
    eax = esi;
    goto loc_003DFBC0;

loc_003DFB93: ;
    SET_LO8(eax, MEM8(esp + 0x34));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DFBB2; /* jne: not equal / not zero */

loc_003DFB9B: ;
    ecx = MEM32(esp + 0x38);
    eax = MEM32(esi);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x003DFBA8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003DFBA5u); } /* indirect call */
    }

loc_003DFBA8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_003DFBB2: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_003DFBBE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003DFBC0: ;
    SET_LO8(ecx, MEM8(esp + 0x34));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003DFBDE; /* jne: not equal / not zero */

loc_003DFBC8: ;
    edx = MEM32(eax);
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x003DFBD2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003DFBCFu); } /* indirect call */
    }

loc_003DFBD2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_003DFBDC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003DFBDE: ;
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
 * sub_003DFC20
 * Original: 0x003DFC20 - 0x003DFC47 (39 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DFC20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003DFC20: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x835B58;
    PUSH32(esp, 0x003DFC2Eu); RECOMP_ABI_CALL(0x0001E5A7u, sub_0001E5A7); /* call 0x0001E5A7 */

loc_003DFC2E: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003DFC41; /* je: equal / zero */

loc_003DFC35: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x003DFC41u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003DFC3Eu); } /* indirect call */
    }

loc_003DFC41: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}
