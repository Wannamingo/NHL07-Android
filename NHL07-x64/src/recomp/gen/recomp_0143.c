/**
 * nhl_07_recomp - Recompiled code chunk 143
 * Functions: 250 (0x0025BFD0 - 0x00262AA0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_0025BFD0
 * Original: 0x0025BFD0 - 0x0025BFF8 (40 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025BFD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025BFD0: ;
    eax = MEM32(esp + 4);
    edx = esp + -256;
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0025BFE3: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025BFE3; /* jne: not equal / not zero */

loc_0025BFED: ;
    SET_LO8(eax, 1);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0025C010
 * Original: 0x0025C010 - 0x0025C038 (40 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025C010(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025C010: ;
    eax = MEM32(esp + 4);
    edx = esp + -256;
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0025C023: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025C023; /* jne: not equal / not zero */

loc_0025C02D: ;
    SET_LO8(eax, 1);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0025C050
 * Original: 0x0025C050 - 0x0025C05E (14 bytes, 4 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025C050(void)
{

loc_0025C050: ;
    PUSH32(esp, 0x807640);
    PUSH32(esp, 0x0025C05Au); RECOMP_ABI_CALL(0x00032890u, sub_00032890); /* call 0x00032890 */

loc_0025C05A: ;
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0025C070
 * Original: 0x0025C070 - 0x0025C08F (31 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025C070(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025C070: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esp;
    PUSH32(esp, 0x0025C07Bu); RECOMP_ABI_CALL(0x00020875u, sub_00020875); /* call 0x00020875 */

loc_0025C07B: ;
    ecx = esp;
    PUSH32(esp, 0x0025C083u); RECOMP_ABI_CALL(0x0002259Eu, sub_0002259E); /* call 0x0002259E */

loc_0025C083: ;
    ecx = esp;
    PUSH32(esp, 0x0025C08Bu); RECOMP_ABI_CALL(0x0001AEEDu, sub_0001AEED); /* call 0x0001AEED */

loc_0025C08B: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0025C0A0
 * Original: 0x0025C0A0 - 0x0025C0B1 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025C0A0(void)
{

loc_0025C0A0: ;
    PUSH32(esp, 0x0025C0A5u); RECOMP_ABI_CALL(0x0001EACAu, sub_0001EACA); /* call 0x0001EACA */

loc_0025C0A5: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0x48);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0025C0B0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0025C0ADu); } /* indirect call */
    }

loc_0025C0B0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0025C0C0
 * Original: 0x0025C0C0 - 0x0025C0CC (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025C0C0(void)
{

loc_0025C0C0: ;
    PUSH32(esp, 0x807674);
    PUSH32(esp, 0x0025C0CAu); RECOMP_ABI_CALL(0x00032890u, sub_00032890); /* call 0x00032890 */

loc_0025C0CA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0025C0D0
 * Original: 0x0025C0D0 - 0x0025C0E2 (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025C0D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025C0D0: ;
    _fa = (uint32_t)(MEM32(ecx + 0x58)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x58), 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025C0E1; /* jne: not equal / not zero */

loc_0025C0D6: ;
    PUSH32(esp, 0x807694);
    PUSH32(esp, 0x0025C0E0u); RECOMP_ABI_CALL(0x00032890u, sub_00032890); /* call 0x00032890 */

loc_0025C0E0: ;
    POP32(esp, ecx);

loc_0025C0E1: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0025C0F0
 * Original: 0x0025C0F0 - 0x0025C125 (53 bytes, 15 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025C0F0(void)
{

loc_0025C0F0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, 0x7F6ED4);
    ecx = esi;
    PUSH32(esp, 0x0025C103u); RECOMP_ABI_CALL(0x00018530u, sub_00018530); /* call 0x00018530 */

loc_0025C103: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 0x14C);
    edx = MEM32(ecx * 4 + 0x8C2254);
    PUSH32(esp, edx);
    PUSH32(esp, 0x7F6EC0);
    ecx = esi;
    PUSH32(esp, 0x0025C121u); RECOMP_ABI_CALL(0x00018530u, sub_00018530); /* call 0x00018530 */

loc_0025C121: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0025C140
 * Original: 0x0025C140 - 0x0025C143 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025C140(void)
{

loc_0025C140: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_0025C150
 * Original: 0x0025C150 - 0x0025C170 (32 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025C150(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025C150: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(ecx) = 0x8076CC;
    if (CMP_EQ(_fa, _fb)) goto loc_0025C16E; /* je: equal / zero */

loc_0025C15E: ;
    ecx = esi;
    PUSH32(esp, 0x0025C165u); RECOMP_ABI_CALL(0x000333E4u, sub_000333E4); /* call 0x000333E4 */

loc_0025C165: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0025C16Bu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0025C16B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0025C16E: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0025C180
 * Original: 0x0025C180 - 0x0025C181 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025C180(void)
{

loc_0025C180: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0025C190
 * Original: 0x0025C190 - 0x0025C191 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025C190(void)
{

loc_0025C190: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0025C1A0
 * Original: 0x0025C1A0 - 0x0025C1A1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025C1A0(void)
{

loc_0025C1A0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0025C1B0
 * Original: 0x0025C1B0 - 0x0025C1B1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025C1B0(void)
{

loc_0025C1B0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0025C1C0
 * Original: 0x0025C1C0 - 0x0025C1C1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025C1C0(void)
{

loc_0025C1C0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0025C1D0
 * Original: 0x0025C1D0 - 0x0025C1D1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025C1D0(void)
{

loc_0025C1D0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0025C1E0
 * Original: 0x0025C1E0 - 0x0025C1FC (28 bytes, 12 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025C1E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025C1E0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 0x17);
    PUSH32(esp, 0);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0025C1F6u); RECOMP_ABI_CALL(0x00017E6Eu, sub_00017E6E); /* call 0x00017E6E */

loc_0025C1F6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0025C210
 * Original: 0x0025C210 - 0x0025C22C (28 bytes, 12 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025C210(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025C210: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 0xF);
    PUSH32(esp, 0);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0025C226u); RECOMP_ABI_CALL(0x00017E6Eu, sub_00017E6E); /* call 0x00017E6E */

loc_0025C226: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0025C240
 * Original: 0x0025C240 - 0x0025C280 (64 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025C240(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025C240: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 4) = 2;
    MEM32(eax + 8) = 3;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x10) = edx;
    ecx = 1;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = edx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x20) = edx;
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x28) = edx;
    MEM32(eax + 0x2C) = 0x1E;
    MEM32(eax + 0x30) = 4;
    MEM32(eax + 0xC) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0025C290
 * Original: 0x0025C290 - 0x0025C33B (171 bytes, 63 insns)
 * Category: game_ui
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025C290(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0025C290: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = ecx;
    ecx = MEM32(esp + 0x20);
    eax = 0x40;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_0025C2AA; /* jle: less or equal (signed <=) */

loc_0025C2A6: ;
    MEM32(esp + 0x28) = eax;

loc_0025C2AA: ;
    eax = MEM32(ebx + 4);
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x807700);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0025C2C2u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_0025C2C2: ;
    edi = ZX16(MEM16(esp + 0x24));
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0025C30D; /* jle: less or equal (signed <=) */

loc_0025C2CE: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0025C325; /* jle: less or equal (signed <=) */

loc_0025C2D4: ;
    ebp = MEM32(esp + 0x24);

loc_0025C2D8: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(esp + 0x28) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0025C325; /* jge: greater or equal (signed >=) */

loc_0025C2DE: ;
    eax = MEM32(ebx + 4);
    PUSH32(esp, 0xDEADDEADu);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    PUSH32(esp, 0x8076D0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0025C2FBu); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_0025C2FB: ;
    edx = MEM32(esp + 0x24);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + esi * 4) = edx;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0025C2D8; /* jl: less (signed <) */

loc_0025C30B: ;
    goto loc_0025C325;

loc_0025C30D: ;
    ecx = MEM32(esp + 0x28);
    edi = MEM32(esp + 0x24);
    edx = ecx;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
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

loc_0025C325: ;
    eax = MEM32(ebx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0025C32Eu); RECOMP_ABI_CALL(0x00025794u, sub_00025794); /* call 0x00025794 */

loc_0025C32E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0025C370
 * Original: 0x0025C370 - 0x0025C3E7 (119 bytes, 46 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025C370(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0025C370: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x40 (32-bit) */
    SET_LO8(ebx, 1);
    if (CMP_LE(_fas, _fbs)) goto loc_0025C385; /* jle: less or equal (signed <=) */

loc_0025C380: ;
    edi = 0x40;

loc_0025C385: ;
    PUSH32(esp, 0xDEADDEADu);
    eax = esp + 0xC;
    PUSH32(esp, 0x807768);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0025C399u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_0025C399: ;
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025C3DD; /* jne: not equal / not zero */

loc_0025C3A4: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0025C3D2; /* jle: less or equal (signed <=) */

loc_0025C3AB: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x20);

loc_0025C3B0: ;
    ecx = MEM32(ebp + esi * 4);
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    PUSH32(esp, 0x807734);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0025C3C9u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_0025C3C9: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0025C3B0; /* jl: less (signed <) */

loc_0025C3D1: ;
    POP32(esp, ebp);

loc_0025C3D2: ;
    POP32(esp, esi);
    POP32(esp, edi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0025C3DD: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0025C410
 * Original: 0x0025C410 - 0x0025C459 (73 bytes, 26 insns)
 * Category: game_ui
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025C410(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025C410: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, edi);
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = esp + 0x18;
    PUSH32(esp, 0x807780);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0025C437u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_0025C437: ;
    edx = MEM32(esi);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x61A8);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(esp + 8)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esp + 8), LO16(eax) (16-bit) */
    MEM32(esi + 8) = edi;
    POP32(esp, edi);
    MEM32(esi) = edx;
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0025C470
 * Original: 0x0025C470 - 0x0025C4B1 (65 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025C470(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025C470: ;
    eax = MEM32(0x8FA528);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM8(0x8FA530) = LO8(ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0025C491; /* je: equal / zero */

loc_0025C482: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0025C488u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0025C488: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x8FA528) = ebx;

loc_0025C491: ;
    eax = MEM32(0x8FA52C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025C4A9; /* je: equal / zero */

loc_0025C49A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0025C4A0u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0025C4A0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x8FA52C) = ebx;

loc_0025C4A9: ;
    MEM32(0x8FA524) = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0025C4D0
 * Original: 0x0025C4D0 - 0x0025C504 (52 bytes, 19 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025C4D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025C4D0: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025C4FF; /* je: equal / zero */

loc_0025C4D8: ;
    edx = MEM32(esp + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 8) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0025C4FF; /* jge: greater or equal (signed >=) */

loc_0025C4E1: ;
    ecx = MEM32(ecx + 0xC);
    edx = edx + edx * 2;
    edx = ecx + edx * 4;
    ecx = MEM32(edx);
    MEM32(eax) = ecx;
    ecx = MEM32(edx + 4);
    MEM32(eax + 4) = ecx;
    edx = MEM32(edx + 8);
    MEM32(eax + 8) = edx;
    SET_LO8(eax, 1);
    esp += 12; return; /* ret 8 */

loc_0025C4FF: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0025C520
 * Original: 0x0025C520 - 0x0025C59C (124 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025C520(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025C520: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025C597; /* je: equal / zero */

loc_0025C52D: ;
    PUSH32(esp, ebx);
    eax = eax + eax * 2;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0025C53Cu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0025C53C: ;
    MEM32(esi + 0xC) = eax;
    eax = MEM32(esi + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0025C596; /* jle: less or equal (signed <=) */

loc_0025C54B: ;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edi;

loc_0025C550: ;
    eax = MEM32(esi + 0xC);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0xDEADDEADu);
    ecx = eax + 8;
    PUSH32(esp, ecx);
    edx = eax + 4;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    PUSH32(esp, 0x8077F8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0025C576u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_0025C576: ;
    edx = MEM32(esi + 0xC);
    ecx = MEM32(edx + edi);
    eax = edx + edi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x61A8);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    eax = MEM32(esi + 8);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0025C550; /* jl: less (signed <) */

loc_0025C595: ;
    POP32(esp, edi);

loc_0025C596: ;
    POP32(esp, ebx);

loc_0025C597: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0025C5C0
 * Original: 0x0025C5C0 - 0x0025C5E3 (35 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025C5C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025C5C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025C5DA; /* je: equal / zero */

loc_0025C5CA: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0025C5D0u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0025C5D0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xC) = 0;

loc_0025C5DA: ;
    MEM32(esi + 8) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0025C5F0
 * Original: 0x0025C5F0 - 0x0025C610 (32 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025C5F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025C5F0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x10) = eax;
    MEM32(ecx + 0x14) = eax;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x1C) = eax;
    MEM32(ecx + 0x20) = eax;
    MEM32(ecx + 0x24) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0025C620
 * Original: 0x0025C620 - 0x0025C65B (59 bytes, 21 insns)
 * Category: game_ui
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025C620(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025C620: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    edx = eax + 0x10;
    PUSH32(esp, edx);
    ecx = eax + 0x14;
    PUSH32(esp, ecx);
    edx = eax + 0xC;
    PUSH32(esp, edx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    eax = esp + 0x1C;
    PUSH32(esp, 0x807868);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0025C655u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_0025C655: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0025C670
 * Original: 0x0025C670 - 0x0025C6AB (59 bytes, 21 insns)
 * Category: game_ui
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025C670(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025C670: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    edx = eax + 0x24;
    PUSH32(esp, edx);
    ecx = eax + 0x20;
    PUSH32(esp, ecx);
    edx = eax + 0x1C;
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    eax = esp + 0x1C;
    PUSH32(esp, 0x807868);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0025C6A5u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_0025C6A5: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0025C6C0
 * Original: 0x0025C6C0 - 0x0025C6C9 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025C6C0(void)
{

loc_0025C6C0: ;
    eax = ecx;
    MEM32(eax) = 0x807938;
    esp += 4; return; /* ret */

}

/**
 * sub_0025C6D0
 * Original: 0x0025C6D0 - 0x0025C6D7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025C6D0(void)
{

loc_0025C6D0: ;
    MEM32(ecx) = 0x807938;
    esp += 4; return; /* ret */

}

/**
 * sub_0025C6E0
 * Original: 0x0025C6E0 - 0x0025C718 (56 bytes, 21 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025C6E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025C6E0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 4);
    edx = MEM32(eax);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x10);
    PUSH32(esp, edx);
    edx = MEM32(eax + 0x14);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0xC);
    PUSH32(esp, edx);
    edx = MEM32(eax + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esp + 0x1C;
    PUSH32(esp, 0x807940);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0025C712u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_0025C712: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0025C730
 * Original: 0x0025C730 - 0x0025C768 (56 bytes, 21 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025C730(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025C730: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 4);
    edx = MEM32(eax);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x24);
    PUSH32(esp, edx);
    edx = MEM32(eax + 0x20);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x1C);
    PUSH32(esp, edx);
    edx = MEM32(eax + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esp + 0x1C;
    PUSH32(esp, 0x807940);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0025C762u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_0025C762: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0025C780
 * Original: 0x0025C780 - 0x0025C798 (24 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025C780(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025C780: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0xC) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0025C792; /* jge: greater or equal (signed >=) */

loc_0025C789: ;
    ecx = MEM32(ecx + 8);
    eax = MEM32(ecx + eax * 4);
    esp += 8; return; /* ret 4 */

loc_0025C792: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0025C7A0
 * Original: 0x0025C7A0 - 0x0025C7E0 (64 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025C7A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025C7A0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0025C7DA; /* jle: less or equal (signed <=) */

loc_0025C7B0: ;
    eax = MEM32(esi + 8);
    edx = MEM32(esi + 4);
    PUSH32(esp, 0xDEADDEADu);
    ecx = eax + edi * 4;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, 0x807A04);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0025C7CFu); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_0025C7CF: ;
    eax = MEM32(esi + 0xC);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0025C7B0; /* jl: less (signed <) */

loc_0025C7DA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0025C7F0
 * Original: 0x0025C7F0 - 0x0025C830 (64 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025C7F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025C7F0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0025C82A; /* jle: less or equal (signed <=) */

loc_0025C800: ;
    eax = MEM32(esi + 8);
    edx = MEM32(esi + 4);
    PUSH32(esp, 0xDEADDEADu);
    ecx = eax + edi * 4;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, 0x807A34);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0025C81Fu); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_0025C81F: ;
    eax = MEM32(esi + 0xC);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0025C800; /* jl: less (signed <) */

loc_0025C82A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0025C840
 * Original: 0x0025C840 - 0x0025C8F8 (184 bytes, 80 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025C840(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025C840: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, eax);
    ecx = esi + 0x28;
    PUSH32(esp, ecx);
    edx = esi + 0x27;
    PUSH32(esp, edx);
    eax = esi + 0x2A;
    PUSH32(esp, eax);
    ecx = esi + 0x29;
    PUSH32(esp, ecx);
    edx = esi + 0x26;
    PUSH32(esp, edx);
    eax = esi + 0x25;
    PUSH32(esp, eax);
    ecx = esi + 0x24;
    PUSH32(esp, ecx);
    edx = esi + 0x23;
    PUSH32(esp, edx);
    eax = esi + 0x22;
    PUSH32(esp, eax);
    ecx = esi + 0x21;
    PUSH32(esp, ecx);
    edx = esi + 0x20;
    PUSH32(esp, edx);
    eax = esi + 0x1F;
    PUSH32(esp, eax);
    ecx = esi + 0x1E;
    PUSH32(esp, ecx);
    edx = esi + 0x1D;
    PUSH32(esp, edx);
    eax = esi + 0x1C;
    PUSH32(esp, eax);
    ecx = esi + 0x1B;
    PUSH32(esp, ecx);
    edx = esi + 0x19;
    PUSH32(esp, edx);
    eax = esi + 0x18;
    PUSH32(esp, eax);
    ecx = esi + 0x17;
    PUSH32(esp, ecx);
    edx = esi + 0x16;
    PUSH32(esp, edx);
    eax = esi + 0x15;
    PUSH32(esp, eax);
    ecx = esi + 0x14;
    PUSH32(esp, ecx);
    edx = esi + 0x13;
    PUSH32(esp, edx);
    edi = esi + 0x12;
    PUSH32(esp, edi);
    eax = esp + 0x70;
    PUSH32(esp, 0x807A68);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0025C8C2u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_0025C8C2: ;
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x70;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edi;
    POP32(esp, edi);
    MEM8(esi + 0x1A) = 0;
    edx = 0xD;
    POP32(esp, esi);

loc_0025C8D2: ;
    SET_LO8(ecx, MEM8(eax + -1));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x32) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x32 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0025C8E0; /* jb: below (unsigned <) */

loc_0025C8DA: ;
    _fb = (uint32_t)(0x32) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(ecx, LO8(ecx) - 0x32);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    MEM8(eax + -1) = LO8(ecx);

loc_0025C8E0: ;
    SET_LO8(ecx, MEM8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x32) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x32 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0025C8EC; /* jb: below (unsigned <) */

loc_0025C8E7: ;
    _fb = (uint32_t)(0x32) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(ecx, LO8(ecx) - 0x32);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    MEM8(eax) = LO8(ecx);

loc_0025C8EC: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0025C8D2; /* jne: not equal / not zero */

loc_0025C8F2: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0025C930
 * Original: 0x0025C930 - 0x0025C9E4 (180 bytes, 75 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025C930(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025C930: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, ecx);
    edx = eax + 0x14;
    PUSH32(esp, edx);
    ecx = eax + 0x25;
    PUSH32(esp, ecx);
    edx = eax + 0x24;
    PUSH32(esp, edx);
    ecx = eax + 0x23;
    PUSH32(esp, ecx);
    edx = eax + 0x22;
    PUSH32(esp, edx);
    ecx = eax + 0x21;
    PUSH32(esp, ecx);
    edx = eax + 0x20;
    PUSH32(esp, edx);
    ecx = eax + 0x1F;
    PUSH32(esp, ecx);
    edx = eax + 0x1E;
    PUSH32(esp, edx);
    ecx = eax + 0x1D;
    PUSH32(esp, ecx);
    edx = eax + 0x1C;
    PUSH32(esp, edx);
    ecx = eax + 0x1B;
    PUSH32(esp, ecx);
    edx = eax + 0x1A;
    PUSH32(esp, edx);
    ecx = eax + 0x19;
    PUSH32(esp, ecx);
    edx = eax + 0x18;
    PUSH32(esp, edx);
    ecx = eax + 0x17;
    PUSH32(esp, ecx);
    edx = eax + 0x16;
    PUSH32(esp, edx);
    ecx = eax + 0x15;
    PUSH32(esp, ecx);
    esi = eax + 0x12;
    _fb = (uint32_t)(0x13) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x13;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    edx = esp + 0x5C;
    PUSH32(esp, 0x807DA8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0025C9A1u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_0025C9A1: ;
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x60;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    edx = 7;
    POP32(esp, esi);
    /* nop */

loc_0025C9B0: ;
    SET_LO8(ecx, MEM8(eax + -1));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x32) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x32 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0025C9BE; /* jb: below (unsigned <) */

loc_0025C9B8: ;
    _fb = (uint32_t)(0x32) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(ecx, LO8(ecx) - 0x32);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    MEM8(eax + -1) = LO8(ecx);

loc_0025C9BE: ;
    SET_LO8(ecx, MEM8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x32) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x32 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0025C9CA; /* jb: below (unsigned <) */

loc_0025C9C5: ;
    _fb = (uint32_t)(0x32) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(ecx, LO8(ecx) - 0x32);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    MEM8(eax) = LO8(ecx);

loc_0025C9CA: ;
    SET_LO8(ecx, MEM8(eax + 1));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x32) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x32 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0025C9D8; /* jb: below (unsigned <) */

loc_0025C9D2: ;
    _fb = (uint32_t)(0x32) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(ecx, LO8(ecx) - 0x32);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    MEM8(eax + 1) = LO8(ecx);

loc_0025C9D8: ;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0025C9B0; /* jne: not equal / not zero */

loc_0025C9DE: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0025CA20
 * Original: 0x0025CA20 - 0x0025CB17 (247 bytes, 75 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025CA20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025CA20: ;
    ecx = MEM32(esp + 4);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(0x8F5AD0);
    PUSH32(esp, 0x0025CA37u); RECOMP_ABI_CALL(0x000298BCu, sub_000298BC); /* call 0x000298BC */

loc_0025CA37: ;
    eax = MEM32(esp + 0x28);
    SET_LO8(edx, MEM8(esp + 5));
    MEM8(eax + 0x12) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 6));
    MEM8(eax + 0x13) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 7));
    MEM8(eax + 0x14) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 8));
    MEM8(eax + 0x15) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 9));
    MEM8(eax + 0x16) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0xA));
    MEM8(eax + 0x17) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0xB));
    ecx = eax + 0x12;
    MEM8(eax + 0x18) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0xC));
    MEM8(eax + 0x19) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0xE));
    MEM8(eax + 0x1B) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0xF));
    MEM8(eax + 0x1C) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x10));
    MEM8(eax + 0x1D) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x11));
    MEM8(eax + 0x1E) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x12));
    MEM8(eax + 0x1F) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x13));
    MEM8(eax + 0x20) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x14));
    MEM8(eax + 0x21) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x15));
    MEM8(eax + 0x22) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x16));
    MEM8(eax + 0x23) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x17));
    MEM8(eax + 0x24) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x18));
    MEM8(eax + 0x25) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x19));
    MEM8(eax + 0x26) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x1C));
    MEM8(eax + 0x29) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x1D));
    MEM8(eax + 0x2A) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x1A));
    MEM8(eax + 0x27) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x1B));
    MEM8(eax + 0x28) = LO8(edx);
    MEM8(eax + 0x1A) = 0;
    eax = ecx;
    edx = 0xD;

loc_0025CAF1: ;
    SET_LO8(ecx, MEM8(eax + -1));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x32) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x32 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0025CAFF; /* jb: below (unsigned <) */

loc_0025CAF9: ;
    _fb = (uint32_t)(0x32) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(ecx, LO8(ecx) - 0x32);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    MEM8(eax + -1) = LO8(ecx);

loc_0025CAFF: ;
    SET_LO8(ecx, MEM8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x32) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x32 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0025CB0B; /* jb: below (unsigned <) */

loc_0025CB06: ;
    _fb = (uint32_t)(0x32) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(ecx, LO8(ecx) - 0x32);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    MEM8(eax) = LO8(ecx);

loc_0025CB0B: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0025CAF1; /* jne: not equal / not zero */

loc_0025CB11: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0025CB60
 * Original: 0x0025CB60 - 0x0025CC45 (229 bytes, 71 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025CB60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025CB60: ;
    ecx = MEM32(esp + 4);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(0x8F5AD0);
    PUSH32(esp, 0x0025CB77u); RECOMP_ABI_CALL(0x000332A9u, sub_000332A9); /* call 0x000332A9 */

loc_0025CB77: ;
    eax = MEM32(esp + 0x24);
    SET_LO8(edx, MEM8(esp + 5));
    MEM8(eax + 0x12) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 6));
    MEM8(eax + 0x13) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 8));
    MEM8(eax + 0x15) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 9));
    MEM8(eax + 0x16) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0xA));
    MEM8(eax + 0x17) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0xB));
    ecx = eax + 0x12;
    MEM8(eax + 0x18) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0xC));
    MEM8(eax + 0x19) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0xD));
    MEM8(eax + 0x1A) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0xE));
    MEM8(eax + 0x1B) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0xF));
    MEM8(eax + 0x1C) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x10));
    MEM8(eax + 0x1D) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x11));
    MEM8(eax + 0x1E) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x12));
    MEM8(eax + 0x1F) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x13));
    MEM8(eax + 0x20) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x14));
    MEM8(eax + 0x21) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x15));
    MEM8(eax + 0x22) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x16));
    MEM8(eax + 0x23) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x17));
    MEM8(eax + 0x24) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x18));
    MEM8(eax + 0x25) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 7));
    MEM8(eax + 0x14) = LO8(edx);
    eax = ecx;
    edx = 7;

loc_0025CC11: ;
    SET_LO8(ecx, MEM8(eax + -1));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x32) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x32 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0025CC1F; /* jb: below (unsigned <) */

loc_0025CC19: ;
    _fb = (uint32_t)(0x32) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(ecx, LO8(ecx) - 0x32);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    MEM8(eax + -1) = LO8(ecx);

loc_0025CC1F: ;
    SET_LO8(ecx, MEM8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x32) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x32 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0025CC2B; /* jb: below (unsigned <) */

loc_0025CC26: ;
    _fb = (uint32_t)(0x32) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(ecx, LO8(ecx) - 0x32);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    MEM8(eax) = LO8(ecx);

loc_0025CC2B: ;
    SET_LO8(ecx, MEM8(eax + 1));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x32) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x32 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0025CC39; /* jb: below (unsigned <) */

loc_0025CC33: ;
    _fb = (uint32_t)(0x32) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(ecx, LO8(ecx) - 0x32);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    MEM8(eax + 1) = LO8(ecx);

loc_0025CC39: ;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0025CC11; /* jne: not equal / not zero */

loc_0025CC3F: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0025CC80
 * Original: 0x0025CC80 - 0x0025CD38 (184 bytes, 80 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025CC80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025CC80: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, eax);
    ecx = esi + 0x28;
    PUSH32(esp, ecx);
    edx = esi + 0x27;
    PUSH32(esp, edx);
    eax = esi + 0x2A;
    PUSH32(esp, eax);
    ecx = esi + 0x29;
    PUSH32(esp, ecx);
    edx = esi + 0x26;
    PUSH32(esp, edx);
    eax = esi + 0x25;
    PUSH32(esp, eax);
    ecx = esi + 0x24;
    PUSH32(esp, ecx);
    edx = esi + 0x23;
    PUSH32(esp, edx);
    eax = esi + 0x22;
    PUSH32(esp, eax);
    ecx = esi + 0x21;
    PUSH32(esp, ecx);
    edx = esi + 0x20;
    PUSH32(esp, edx);
    eax = esi + 0x1F;
    PUSH32(esp, eax);
    ecx = esi + 0x1E;
    PUSH32(esp, ecx);
    edx = esi + 0x1D;
    PUSH32(esp, edx);
    eax = esi + 0x1C;
    PUSH32(esp, eax);
    ecx = esi + 0x1B;
    PUSH32(esp, ecx);
    edx = esi + 0x19;
    PUSH32(esp, edx);
    eax = esi + 0x18;
    PUSH32(esp, eax);
    ecx = esi + 0x17;
    PUSH32(esp, ecx);
    edx = esi + 0x16;
    PUSH32(esp, edx);
    eax = esi + 0x15;
    PUSH32(esp, eax);
    ecx = esi + 0x14;
    PUSH32(esp, ecx);
    edx = esi + 0x13;
    PUSH32(esp, edx);
    edi = esi + 0x12;
    PUSH32(esp, edi);
    eax = esp + 0x70;
    PUSH32(esp, 0x808068);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0025CD02u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_0025CD02: ;
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x70;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edi;
    POP32(esp, edi);
    MEM8(esi + 0x1A) = 0;
    edx = 0xD;
    POP32(esp, esi);

loc_0025CD12: ;
    SET_LO8(ecx, MEM8(eax + -1));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x32) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x32 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0025CD20; /* jb: below (unsigned <) */

loc_0025CD1A: ;
    _fb = (uint32_t)(0x32) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(ecx, LO8(ecx) - 0x32);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    MEM8(eax + -1) = LO8(ecx);

loc_0025CD20: ;
    SET_LO8(ecx, MEM8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x32) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x32 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0025CD2C; /* jb: below (unsigned <) */

loc_0025CD27: ;
    _fb = (uint32_t)(0x32) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(ecx, LO8(ecx) - 0x32);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    MEM8(eax) = LO8(ecx);

loc_0025CD2C: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0025CD12; /* jne: not equal / not zero */

loc_0025CD32: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0025CD70
 * Original: 0x0025CD70 - 0x0025CE24 (180 bytes, 75 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025CD70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025CD70: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, ecx);
    edx = eax + 0x14;
    PUSH32(esp, edx);
    ecx = eax + 0x25;
    PUSH32(esp, ecx);
    edx = eax + 0x24;
    PUSH32(esp, edx);
    ecx = eax + 0x23;
    PUSH32(esp, ecx);
    edx = eax + 0x22;
    PUSH32(esp, edx);
    ecx = eax + 0x21;
    PUSH32(esp, ecx);
    edx = eax + 0x20;
    PUSH32(esp, edx);
    ecx = eax + 0x1F;
    PUSH32(esp, ecx);
    edx = eax + 0x1E;
    PUSH32(esp, edx);
    ecx = eax + 0x1D;
    PUSH32(esp, ecx);
    edx = eax + 0x1C;
    PUSH32(esp, edx);
    ecx = eax + 0x1B;
    PUSH32(esp, ecx);
    edx = eax + 0x1A;
    PUSH32(esp, edx);
    ecx = eax + 0x19;
    PUSH32(esp, ecx);
    edx = eax + 0x18;
    PUSH32(esp, edx);
    ecx = eax + 0x17;
    PUSH32(esp, ecx);
    edx = eax + 0x16;
    PUSH32(esp, edx);
    ecx = eax + 0x15;
    PUSH32(esp, ecx);
    esi = eax + 0x12;
    _fb = (uint32_t)(0x13) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x13;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    edx = esp + 0x5C;
    PUSH32(esp, 0x8083A8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0025CDE1u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_0025CDE1: ;
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x60;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    edx = 7;
    POP32(esp, esi);
    /* nop */

loc_0025CDF0: ;
    SET_LO8(ecx, MEM8(eax + -1));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x32) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x32 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0025CDFE; /* jb: below (unsigned <) */

loc_0025CDF8: ;
    _fb = (uint32_t)(0x32) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(ecx, LO8(ecx) - 0x32);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    MEM8(eax + -1) = LO8(ecx);

loc_0025CDFE: ;
    SET_LO8(ecx, MEM8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x32) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x32 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0025CE0A; /* jb: below (unsigned <) */

loc_0025CE05: ;
    _fb = (uint32_t)(0x32) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(ecx, LO8(ecx) - 0x32);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    MEM8(eax) = LO8(ecx);

loc_0025CE0A: ;
    SET_LO8(ecx, MEM8(eax + 1));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x32) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x32 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0025CE18; /* jb: below (unsigned <) */

loc_0025CE12: ;
    _fb = (uint32_t)(0x32) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(ecx, LO8(ecx) - 0x32);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    MEM8(eax + 1) = LO8(ecx);

loc_0025CE18: ;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0025CDF0; /* jne: not equal / not zero */

loc_0025CE1E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0025CE60
 * Original: 0x0025CE60 - 0x0025CF02 (162 bytes, 59 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025CE60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025CE60: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0xDEADDEADu);
    esi = ecx;
    ecx = MEM32(esi + 4);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    PUSH32(esp, 0x808668);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edx);
    MEM32(esp + 0x1C) = edi;
    PUSH32(esp, 0x0025CE8Au); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_0025CE8A: ;
    eax = ZX16(MEM16(esp + 0x20));
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esi + 0x24) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0025CEF0; /* je: equal / zero */

loc_0025CE99: ;
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025CEA9; /* je: equal / zero */

loc_0025CEA0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0025CEA6u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0025CEA6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0025CEA9: ;
    eax = MEM32(esi + 0x24);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0025CEB6u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0025CEB6: ;
    MEM32(esi + 0x20) = eax;
    eax = MEM32(esi + 0x24);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0025CEF0; /* jle: less or equal (signed <=) */

loc_0025CEC3: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, 0x7F1E1C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0025CEDBu); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_0025CEDB: ;
    eax = MEM32(esp + 0x18);
    edx = MEM32(esi + 0x20);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + edi * 4) = eax;
    eax = MEM32(esi + 0x24);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0025CEC3; /* jl: less (signed <) */

loc_0025CEF0: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0025CEF9u); RECOMP_ABI_CALL(0x00025794u, sub_00025794); /* call 0x00025794 */

loc_0025CEF9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0025CF30
 * Original: 0x0025CF30 - 0x0025CF43 (19 bytes, 6 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025CF30(void)
{

loc_0025CF30: ;
    eax = MEM32(ecx + 0x20);
    ecx = MEM32(esp + 4);
    edx = MEM32(eax + ecx * 4);
    eax = MEM32(esp + 8);
    MEM32(eax) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0025CF50
 * Original: 0x0025CF50 - 0x0025CF86 (54 bytes, 17 insns)
 * Category: game_ui
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025CF50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025CF50: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esp + 0x10;
    PUSH32(esp, 0x8086C0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0025CF76u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_0025CF76: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(esp + 0x18)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esp + 0x18), LO16(eax) (16-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0025CFA0
 * Original: 0x0025CFA0 - 0x0025CFC8 (40 bytes, 13 insns)
 * Category: game_ui
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025CFA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025CFA0: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esp + 0x10;
    PUSH32(esp, 0x808738);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0025CFC0u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_0025CFC0: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0025CFE0
 * Original: 0x0025CFE0 - 0x0025D00D (45 bytes, 16 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025CFE0(void)
{

loc_0025CFE0: ;
    edx = MEM32(ecx + 0x10);
    eax = MEM32(esp + 4);
    edx = MEM32(edx + eax * 4);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    MEM32(esi) = edx;
    edx = MEM32(ecx + 0x14);
    edx = MEM32(edx + eax * 4);
    esi = MEM32(esp + 0x10);
    MEM32(esi) = edx;
    ecx = MEM32(ecx + 0x18);
    edx = MEM32(ecx + eax * 4);
    eax = MEM32(esp + 0x14);
    MEM32(eax) = edx;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0025D020
 * Original: 0x0025D020 - 0x0025D040 (32 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025D020(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025D020: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    eax = MEM32(eax + 4);
    ecx = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0025D036; /* jle: less or equal (signed <=) */

loc_0025D032: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

loc_0025D036: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    SET_LO8(edx, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    eax = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_0025D050
 * Original: 0x0025D050 - 0x0025D09A (74 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025D050(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025D050: ;
    ecx = ZX16(MEM16(ecx + 0x240));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_0025D060: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax * 8 + 0x7FEF18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax * 8 + 0x7FEF18) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025D08B; /* je: equal / zero */

loc_0025D069: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax * 8 + 0x7FEF20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax * 8 + 0x7FEF20) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025D085; /* je: equal / zero */

loc_0025D072: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax * 8 + 0x7FEF28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax * 8 + 0x7FEF28) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025D088; /* je: equal / zero */

loc_0025D07B: ;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x57) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x57 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0025D060; /* jl: less (signed <) */

loc_0025D083: ;
    goto loc_0025D08B;

loc_0025D085: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0025D08B;

loc_0025D088: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0025D08B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x57) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x57 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025D092; /* jne: not equal / not zero */

loc_0025D090: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0025D092: ;
    eax = MEM32(eax * 8 + 0x7FEF1C);
    esp += 4; return; /* ret */

}

/**
 * sub_0025D0B0
 * Original: 0x0025D0B0 - 0x0025D0D9 (41 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025D0B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0025D0B0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5B (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0025D0D3; /* ja: above (unsigned >) */

loc_0025D0B9: ;
    ecx = ZX8(MEM8(eax + 0x25D0EC));
    { uint32_t _jt = MEM32(ecx * 4 + 0x25D0DC); /* switch: 4 entries, 4 targets */
    if (_jt == 0x0025D0C7u) goto loc_0025D0C7;
    if (_jt == 0x0025D0CDu) goto loc_0025D0CD;
    if (_jt == 0x0025D0D3u) goto loc_0025D0D3;
    if (_jt == 0x0025D0D8u) goto loc_0025D0D8;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0025D0C7: ;
    eax = 0x56;
    esp += 4; return; /* ret */

loc_0025D0CD: ;
    eax = 0x55;
    esp += 4; return; /* ret */

loc_0025D0D3: ;
    eax = 0x7F;

loc_0025D0D8: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0025D170
 * Original: 0x0025D170 - 0x0025D1A0 (48 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025D170(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025D170: ;
    ecx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0025D176: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax * 8 + 0x7FEF18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax * 8 + 0x7FEF18) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025D19F; /* je: equal / zero */

loc_0025D17F: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax * 8 + 0x7FEF20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax * 8 + 0x7FEF20) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025D19A; /* je: equal / zero */

loc_0025D188: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax * 8 + 0x7FEF28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax * 8 + 0x7FEF28) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025D19C; /* je: equal / zero */

loc_0025D191: ;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x57) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x57 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0025D176; /* jl: less (signed <) */

loc_0025D199: ;
    esp += 4; return; /* ret */

loc_0025D19A: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

loc_0025D19C: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0025D19F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0025D1B0
 * Original: 0x0025D1B0 - 0x0025D325 (373 bytes, 80 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025D1B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0025D1B0: ;
    _fa = (uint32_t)(MEM8(ecx + 0x260)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x260), 4 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025D24A; /* jne: not equal / not zero */

loc_0025D1BD: ;
    edx = ZX8(MEM8(ecx + 0x2DD));
    eax = ZX8(MEM8(ecx + 0x2E1));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ZX8(MEM8(ecx + 0x2DC));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ZX8(MEM8(ecx + 0x2DB));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ZX8(MEM8(ecx + 0x2D8));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ZX8(MEM8(ecx + 0x2D7));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ZX8(MEM8(ecx + 0x2D6));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ZX8(MEM8(ecx + 0x2D5));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ZX8(MEM8(ecx + 0x2D3));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ZX8(MEM8(ecx + 0x2D2));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ZX8(MEM8(ecx + 0x2D1));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ZX8(MEM8(ecx + 0x2D0));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ZX8(MEM8(ecx + 0x2CF));
    ecx = ZX8(MEM8(ecx + 0x2CE));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x8087AC); /* mulss */
    goto loc_0025D308;

loc_0025D24A: ;
    eax = ZX8(MEM8(ecx + 0x2E3));
    edx = ZX8(MEM8(ecx + 0x2E4));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ZX8(MEM8(ecx + 0x2E2));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ZX8(MEM8(ecx + 0x2E1));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ZX8(MEM8(ecx + 0x2E0));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ZX8(MEM8(ecx + 0x2DF));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ZX8(MEM8(ecx + 0x2DE));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ZX8(MEM8(ecx + 0x2DD));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ZX8(MEM8(ecx + 0x2DA));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ZX8(MEM8(ecx + 0x2D9));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ZX8(MEM8(ecx + 0x2D8));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ZX8(MEM8(ecx + 0x2D7));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ZX8(MEM8(ecx + 0x2D5));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ZX8(MEM8(ecx + 0x2D4));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ZX8(MEM8(ecx + 0x2D3));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ZX8(MEM8(ecx + 0x2D2));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ZX8(MEM8(ecx + 0x2D1));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ZX8(MEM8(ecx + 0x2D0));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ZX8(MEM8(ecx + 0x2CF));
    ecx = ZX8(MEM8(ecx + 0x2CE));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7B1D9C); /* mulss */

loc_0025D308: ;
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7AA820); /* addss */
    xmm1 = XMM_SCALAR(MEMF(0x7AB2D8)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0025D320; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0025D31D: ;
    xmm0 = xmm1; /* movaps */

loc_0025D320: ;
    eax = (int32_t)xmm0.f[0]; /* cvttss2si */
    esp += 4; return; /* ret */

}

/**
 * sub_0025D390
 * Original: 0x0025D390 - 0x0025D39F (15 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025D390(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025D390: ;
    _fa = (uint32_t)(MEM8(ecx + 0x260)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x260), 4 (8-bit) */
    eax = ZX8(MEM8(ecx + 0x2CD));
    esp += 4; return; /* ret */

}

/**
 * sub_0025D3B0
 * Original: 0x0025D3B0 - 0x0025D406 (86 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025D3B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025D3B0: ;
    edx = (uint32_t)(int32_t)SMEM8(ecx + 0x2EB);
    SET_LO8(eax, MEM8(ecx + 0x260));
    PUSH32(esp, esi);
    esi = ZX8(MEM8(ecx + 0x2CD));
    PUSH32(esp, edx);
    edx = (uint32_t)(int32_t)SMEM8(ecx + 0x2EA);
    PUSH32(esp, edx);
    edx = (uint32_t)(int32_t)SMEM8(ecx + 0x2E9);
    ecx = (uint32_t)(int32_t)SMEM8(ecx + 0x2E8);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    edx = ZX8(LO8(eax));
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0025D3E9u); RECOMP_ABI_CALL(0x00025352u, sub_00025352); /* call 0x00025352 */

loc_0025D3E9: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x31) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x31 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0025D3FA; /* jle: less or equal (signed <=) */

loc_0025D3F3: ;
    eax = 0x31;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0025D3FA: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0025D402; /* jge: greater or equal (signed >=) */

loc_0025D3FE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0025D402: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0025D420
 * Original: 0x0025D420 - 0x0025D43E (30 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0025D420(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025D420: ;
    eax = MEM32(ecx + 0x258);
    _fa = (uint32_t)(MEM32(ecx + 0x254)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x254), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025D43B; /* jne: not equal / not zero */

loc_0025D42E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2710) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2710 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0025D43B; /* jb: below (unsigned <) */

loc_0025D435: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_0025D43B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0025D450
 * Original: 0x0025D450 - 0x0025D48E (62 bytes, 20 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025D450(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025D450: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x1C);
    ecx = ZX8(MEM8(eax + 0xC));
    edx = ZX16(MEM16(eax + 8));
    eax = MEM32(eax + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, 0x8087B0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0025D47Eu); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_0025D47E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(esp + 0x1C)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esp + 0x1C), LO16(eax) (16-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0025D4A0
 * Original: 0x0025D4A0 - 0x0025D5EA (330 bytes, 87 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025D4A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025D4A0: ;
    eax = MEM32(esp + 4);
    SET_LO8(ecx, MEM8(eax + 0x260));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 4 (8-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0025D4D2; /* jne: not equal / not zero */

loc_0025D4B4: ;
    SET_LO8(ebx, MEM8(eax + 0x2CB));
    SET_LO8(ecx, MEM8(eax + 0x2CC));
    SET_LO8(edx, MEM8(eax + 0x2C0));
    MEM8(esp + 0x18) = LO8(ebx);
    SET_LO8(ebx, MEM8(eax + 0x2CA));
    goto loc_0025D4EE;

loc_0025D4D2: ;
    SET_LO8(ebx, MEM8(eax + 0x2BD));
    SET_LO8(ecx, MEM8(eax + 0x2C7));
    SET_LO8(edx, MEM8(eax + 0x2BC));
    MEM8(esp + 0x18) = LO8(ebx);
    SET_LO8(ebx, MEM8(eax + 0x2C8));

loc_0025D4EE: ;
    esi = ZX8(MEM8(eax + 0x2C2));
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, esi);
    edx = SX8(LO8(edx));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(eax + 0x264));
    PUSH32(esp, edx);
    edx = (uint32_t)(int32_t)SMEM8(esp + 0x28);
    PUSH32(esp, edx);
    edx = ZX8(MEM8(eax + 0x2BF));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(eax + 0x2C9));
    PUSH32(esp, edx);
    ecx = SX8(LO8(ecx));
    edx = SX8(LO8(ebx));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(eax + 0x2BE));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(eax + 0x2C4));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(eax + 0x262));
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x254);
    PUSH32(esp, edx);
    edx = MEM32(eax + 0x250);
    PUSH32(esp, ecx);
    ecx = ZX16(MEM16(eax + 0x240));
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(eax + 0x260));
    edx = eax + 0x200;
    PUSH32(esp, edx);
    edx = ZX8(MEM8(eax + 0x25C));
    PUSH32(esp, ecx);
    ecx = ZX16(MEM16(eax + 0x25E));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(eax + 0x25D));
    _fb = (uint32_t)(0x96) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x96;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(eax + 0x249));
    _fb = (uint32_t)(0x36) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x36;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edx);
    edx = ZX8(MEM8(eax + 0x248));
    PUSH32(esp, ecx);
    ecx = ZX16(MEM16(eax + 0x246));
    PUSH32(esp, edx);
    edx = ZX16(MEM16(eax + 0x244));
    _fb = (uint32_t)(0x7A7) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x7A7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ecx);
    ecx = ZX16(MEM16(eax + 0x242));
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x7A7) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x7A7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ecx);
    edx = eax + 0x100;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x88);
    PUSH32(esp, eax);
    ecx = esp + 0x78;
    PUSH32(esp, 0x808838);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0025D5D6u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_0025D5D6: ;
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x78;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM16(esp + 8)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esp + 8), 0 (16-bit) */
    POP32(esp, esi);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0025D640
 * Original: 0x0025D640 - 0x0025D72F (239 bytes, 61 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025D640(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025D640: ;
    eax = MEM32(esp + 4);
    ecx = ZX8(MEM8(eax + 0x2E4));
    edx = ZX8(MEM8(eax + 0x2E3));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = ZX8(MEM8(eax + 0x2E6));
    edx = ZX8(MEM8(eax + 0x2E5));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(eax + 0x2E2));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(eax + 0x2E1));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(eax + 0x2E0));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(eax + 0x2DF));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(eax + 0x2DE));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(eax + 0x2DD));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(eax + 0x2DC));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(eax + 0x2DB));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(eax + 0x2DA));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(eax + 0x2D9));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(eax + 0x2D8));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(eax + 0x2D7));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(eax + 0x2D5));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(eax + 0x2D4));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(eax + 0x2D3));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(eax + 0x2D2));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(eax + 0x2D1));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(eax + 0x2D0));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(eax + 0x2CF));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(eax + 0x2CE));
    eax = MEM32(esp + 0x70);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x68;
    PUSH32(esp, 0x808B58);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0025D720u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_0025D720: ;
    _fa = (uint32_t)(MEM16(esp + 0x70)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esp + 0x70), 0 (16-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fb = (uint32_t)(0x7C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x7C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0025D770
 * Original: 0x0025D770 - 0x0025D83F (207 bytes, 53 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025D770(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025D770: ;
    eax = MEM32(esp + 4);
    ecx = ZX8(MEM8(eax + 0x2D0));
    edx = ZX8(MEM8(eax + 0x2E1));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(eax + 0x2E0));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(eax + 0x2DF));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(eax + 0x2DE));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(eax + 0x2DD));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(eax + 0x2DC));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(eax + 0x2DB));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(eax + 0x2DA));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(eax + 0x2D9));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(eax + 0x2D8));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(eax + 0x2D7));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(eax + 0x2D6));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(eax + 0x2D5));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(eax + 0x2D4));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(eax + 0x2D3));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(eax + 0x2D2));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(eax + 0x2D1));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(eax + 0x2CF));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(eax + 0x2CE));
    eax = MEM32(esp + 0x60);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x58;
    PUSH32(esp, 0x808E40);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0025D830u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_0025D830: ;
    _fa = (uint32_t)(MEM16(esp + 0x60)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esp + 0x60), 0 (16-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x6C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0025D880
 * Original: 0x0025D880 - 0x0025D895 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025D880(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025D880: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x59414C50);
    esi = ecx;
    PUSH32(esp, 0x0025D88Du); RECOMP_ABI_CALL(0x0001CF7Cu, sub_0001CF7C); /* call 0x0001CF7C */

loc_0025D88D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 8) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0025D8A0
 * Original: 0x0025D8A0 - 0x0025D8B5 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025D8A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025D8A0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x414C504C);
    esi = ecx;
    PUSH32(esp, 0x0025D8ADu); RECOMP_ABI_CALL(0x0001CF7Cu, sub_0001CF7C); /* call 0x0001CF7C */

loc_0025D8AD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xC) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0025D8C0
 * Original: 0x0025D8C0 - 0x0025D8C5 (5 bytes, 2 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025D8C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025D8C0: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0025D8D0
 * Original: 0x0025D8D0 - 0x0025D8D1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025D8D0(void)
{

loc_0025D8D0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0025D8E0
 * Original: 0x0025D8E0 - 0x0025D8E4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025D8E0(void)
{

loc_0025D8E0: ;
    eax = MEM32(ecx + 0xC);
    esp += 4; return; /* ret */

}

/**
 * sub_0025D8F0
 * Original: 0x0025D8F0 - 0x0025D917 (39 bytes, 16 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025D8F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025D8F0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ecx + 0xC) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0025D912; /* jge: greater or equal (signed >=) */

loc_0025D8FB: ;
    edi = MEM32(esp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025D912; /* je: equal / zero */

loc_0025D903: ;
    eax = MEM32(ecx + 8);
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

loc_0025D912: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0025D920
 * Original: 0x0025D920 - 0x0025D943 (35 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025D920(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025D920: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025D941; /* je: equal / zero */

loc_0025D92A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0025D930u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0025D930: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 8) = 0;
    MEM32(esi + 0xC) = 0;

loc_0025D941: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0025D950
 * Original: 0x0025D950 - 0x0025D955 (5 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025D950(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025D950: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0025D960
 * Original: 0x0025D960 - 0x0025D965 (5 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025D960(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025D960: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0025D970
 * Original: 0x0025D970 - 0x0025D975 (5 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025D970(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025D970: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0025D980
 * Original: 0x0025D980 - 0x0025D983 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025D980(void)
{

loc_0025D980: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_0025D990
 * Original: 0x0025D990 - 0x0025D9A1 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025D990(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025D990: ;
    eax = MEM32(ecx + 0x40);
    ecx = MEM32(ecx + 0x44);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0025D99Du); RECOMP_ABI_CALL(0x00020D52u, sub_00020D52); /* call 0x00020D52 */

loc_0025D99D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0025D9B0
 * Original: 0x0025D9B0 - 0x0025D9C1 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025D9B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025D9B0: ;
    eax = MEM32(ecx + 0x2C);
    ecx = MEM32(ecx + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0025D9BDu); RECOMP_ABI_CALL(0x0002E65Fu, sub_0002E65F); /* call 0x0002E65F */

loc_0025D9BD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0025D9D0
 * Original: 0x0025D9D0 - 0x0025D9F1 (33 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025D9D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025D9D0: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x58); /* cvtsi2ss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x54); /* cvtsi2ss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0025D9EDu); RECOMP_ABI_CALL(0x0001C793u, sub_0001C793); /* call 0x0001C793 */

loc_0025D9ED: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0025DA00
 * Original: 0x0025DA00 - 0x0025DA2A (42 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025DA00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025DA00: ;
    eax = MEM32(ecx + 0x54);
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x5C); /* cvtsi2ss */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    PUSH32(esp, eax);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x58); /* cvtsi2ss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0025DA26u); RECOMP_ABI_CALL(0x00030F1Du, sub_00030F1D); /* call 0x00030F1D */

loc_0025DA26: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0025DA40
 * Original: 0x0025DA40 - 0x0025DAEB (171 bytes, 59 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025DA40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025DA40: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx + 0xC);
    PUSH32(esp, esi);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax + 0xC) = MEM32(eax + 0xC) + edx;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ecx + 0x10);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax + 0x10) = MEM32(eax + 0x10) + edx;
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ecx + 0x14);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax + 0x14) = MEM32(eax + 0x14) + edx;
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ecx + 0x18);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax + 0x18) = MEM32(eax + 0x18) + edx;
    _fa = (uint32_t)(MEM32(eax + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ecx + 0x1C);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax + 0x1C) = MEM32(eax + 0x1C) + edx;
    _fa = (uint32_t)(MEM32(eax + 0x1C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ecx + 0x20);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax + 0x20) = MEM32(eax + 0x20) + edx;
    _fa = (uint32_t)(MEM32(eax + 0x20)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ecx + 0x24);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax + 0x24) = MEM32(eax + 0x24) + edx;
    _fa = (uint32_t)(MEM32(eax + 0x24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ecx + 0x28);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax + 0x28) = MEM32(eax + 0x28) + edx;
    _fa = (uint32_t)(MEM32(eax + 0x28)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ecx + 0x2C);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax + 0x2C) = MEM32(eax + 0x2C) + edx;
    _fa = (uint32_t)(MEM32(eax + 0x2C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ecx + 0x30);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax + 0x30) = MEM32(eax + 0x30) + edx;
    _fa = (uint32_t)(MEM32(eax + 0x30)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ecx + 0x34);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax + 0x34) = MEM32(eax + 0x34) + edx;
    _fa = (uint32_t)(MEM32(eax + 0x34)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ecx + 0x38);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax + 0x38) = MEM32(eax + 0x38) + edx;
    _fa = (uint32_t)(MEM32(eax + 0x38)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ecx + 0x3C);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax + 0x3C) = MEM32(eax + 0x3C) + edx;
    _fa = (uint32_t)(MEM32(eax + 0x3C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ecx + 0x40);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax + 0x40) = MEM32(eax + 0x40) + edx;
    _fa = (uint32_t)(MEM32(eax + 0x40)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ecx + 0x44);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax + 0x44) = MEM32(eax + 0x44) + edx;
    _fa = (uint32_t)(MEM32(eax + 0x44)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ecx + 0x48);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax + 0x48) = MEM32(eax + 0x48) + edx;
    _fa = (uint32_t)(MEM32(eax + 0x48)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ecx + 0x4C);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax + 0x4C) = MEM32(eax + 0x4C) + edx;
    _fa = (uint32_t)(MEM32(eax + 0x4C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ecx + 0x50);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax + 0x50) = MEM32(eax + 0x50) + edx;
    _fa = (uint32_t)(MEM32(eax + 0x50)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ecx + 0x54);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax + 0x54) = MEM32(eax + 0x54) + edx;
    _fa = (uint32_t)(MEM32(eax + 0x54)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ecx + 0x58);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax + 0x58) = MEM32(eax + 0x58) + edx;
    _fa = (uint32_t)(MEM32(eax + 0x58)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ecx + 0x5C);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax + 0x5C) = MEM32(eax + 0x5C) + edx;
    _fa = (uint32_t)(MEM32(eax + 0x5C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ecx + 0x60);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax + 0x60) = MEM32(eax + 0x60) + edx;
    _fa = (uint32_t)(MEM32(eax + 0x60)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ecx + 0x64);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax + 0x64) = MEM32(eax + 0x64) + edx;
    _fa = (uint32_t)(MEM32(eax + 0x64)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ecx + 0x68);
    esi = MEM32(eax + 0x68);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(eax + 0x6C);
    MEM32(eax + 0x68) = esi;
    ecx = MEM32(ecx + 0x6C);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0x6C) = edx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0025DB20
 * Original: 0x0025DB20 - 0x0025DB7A (90 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025DB20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025DB20: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx) = 2;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x10) = eax;
    MEM32(ecx + 0x14) = eax;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x1C) = eax;
    MEM32(ecx + 0x20) = eax;
    MEM32(ecx + 0x24) = eax;
    MEM32(ecx + 0x28) = eax;
    MEM32(ecx + 0x2C) = eax;
    MEM32(ecx + 0x30) = eax;
    MEM32(ecx + 0x34) = eax;
    MEM32(ecx + 0x38) = eax;
    MEM32(ecx + 0x3C) = eax;
    MEM32(ecx + 0x40) = eax;
    MEM32(ecx + 0x44) = eax;
    MEM32(ecx + 0x48) = eax;
    MEM32(ecx + 0x4C) = eax;
    MEM32(ecx + 0x50) = eax;
    MEM32(ecx + 0x54) = eax;
    MEM32(ecx + 0x58) = eax;
    MEM32(ecx + 0x5C) = eax;
    MEM32(ecx + 0x60) = eax;
    MEM32(ecx + 0x64) = eax;
    MEM32(ecx + 0x68) = eax;
    MEM32(ecx + 0x6C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0025DB90
 * Original: 0x0025DB90 - 0x0025DB94 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025DB90(void)
{

loc_0025DB90: ;
    eax = MEM32(ecx + 0x50);
    esp += 4; return; /* ret */

}

/**
 * sub_0025DBA0
 * Original: 0x0025DBA0 - 0x0025DBAA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025DBA0(void)
{

loc_0025DBA0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x50) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0025DBB0
 * Original: 0x0025DBB0 - 0x0025DBC9 (25 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025DBB0(void)
{

loc_0025DBB0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0025DBB8u); RECOMP_ABI_CALL(0x0001EACAu, sub_0001EACA); /* call 0x0001EACA */

loc_0025DBB8: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0xB);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0025DBC3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0025DBC0u); } /* indirect call */
    }

loc_0025DBC3: ;
    MEM8(esi + 8) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0025DBD0
 * Original: 0x0025DBD0 - 0x0025DBE9 (25 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025DBD0(void)
{

loc_0025DBD0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0025DBD8u); RECOMP_ABI_CALL(0x0001EACAu, sub_0001EACA); /* call 0x0001EACA */

loc_0025DBD8: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0xC);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0025DBE3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0025DBE0u); } /* indirect call */
    }

loc_0025DBE3: ;
    MEM8(esi + 8) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0025DBF0
 * Original: 0x0025DBF0 - 0x0025DCA5 (181 bytes, 65 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025DBF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025DBF0: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x28);
    PUSH32(esp, 0xDEADDEADu);
    _fb = (uint32_t)(0xFFFFF82Au) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFF82Au;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esi + 0x1C;
    PUSH32(esp, edx);
    eax = esi + 0x28;
    PUSH32(esp, eax);
    ecx = esi + 0x3C;
    PUSH32(esp, ecx);
    edx = esi + 0x38;
    PUSH32(esp, edx);
    eax = esi + 0x34;
    PUSH32(esp, eax);
    ecx = esi + 0x30;
    PUSH32(esp, ecx);
    edx = esi + 0x4C;
    PUSH32(esp, edx);
    eax = esi + 0x48;
    PUSH32(esp, eax);
    ecx = esi + 0x2C;
    PUSH32(esp, ecx);
    edx = esi + 0x24;
    PUSH32(esp, edx);
    eax = esi + 0x14;
    PUSH32(esp, eax);
    ecx = esi + 0x10;
    PUSH32(esp, ecx);
    edx = esi + 0xC;
    PUSH32(esp, edx);
    eax = esi + 0x18;
    PUSH32(esp, eax);
    ecx = esp + 0x50;
    PUSH32(esp, ecx);
    edx = esp + 0x50;
    PUSH32(esp, edx);
    eax = esp + 0x50;
    PUSH32(esp, eax);
    ecx = esp + 0x60;
    PUSH32(esp, 0x8090B8);
    PUSH32(esp, ecx);
    MEM32(esp + 0x5C) = 0;
    MEM32(esp + 0x60) = 0;
    MEM32(esp + 0x64) = 0;
    PUSH32(esp, 0x0025DC7Au); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_0025DC7A: ;
    edx = MEM32(esp + 0x5C);
    ecx = MEM32(esp + 0x60);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x3C);
    MEM32(esi + 0x40) = ecx;
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x58;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x20) = edx;
    edx = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM32(esi + 0x44) = edx;
    SET_LO8(eax, LO8(ecx));
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0025DCE0
 * Original: 0x0025DCE0 - 0x0025DD65 (133 bytes, 51 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025DCE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025DCE0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x20);
    PUSH32(esp, 0xDEADDEADu);
    _fb = (uint32_t)(0xFFFFF82Au) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFF82Au;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esi + 0x6C;
    PUSH32(esp, edx);
    eax = esi + 0x1C;
    PUSH32(esp, eax);
    ecx = esi + 0x68;
    PUSH32(esp, ecx);
    edx = esi + 0x64;
    PUSH32(esp, edx);
    eax = esi + 0x60;
    PUSH32(esp, eax);
    ecx = esi + 0x14;
    PUSH32(esp, ecx);
    edx = esi + 0x10;
    PUSH32(esp, edx);
    eax = esi + 0x50;
    PUSH32(esp, eax);
    ecx = esi + 0xC;
    PUSH32(esp, ecx);
    edx = esi + 0x18;
    PUSH32(esp, edx);
    eax = esi + 0x5C;
    PUSH32(esp, eax);
    ecx = esi + 0x58;
    PUSH32(esp, ecx);
    edx = esp + 0x40;
    PUSH32(esp, edx);
    eax = esp + 0x48;
    PUSH32(esp, 0x809330);
    PUSH32(esp, eax);
    MEM32(esp + 0x4C) = 0;
    PUSH32(esp, 0x0025DD48u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_0025DD48: ;
    ecx = MEM32(esp + 0x4C);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x3C);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM32(esi + 0x54) = ecx;
    SET_LO8(eax, LO8(edx));
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0025DD90
 * Original: 0x0025DD90 - 0x0025DE45 (181 bytes, 65 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025DD90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025DD90: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x28);
    PUSH32(esp, 0xDEADDEADu);
    _fb = (uint32_t)(0xFFFFF82Au) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFF82Au;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esi + 0x1C;
    PUSH32(esp, edx);
    eax = esi + 0x28;
    PUSH32(esp, eax);
    ecx = esi + 0x3C;
    PUSH32(esp, ecx);
    edx = esi + 0x38;
    PUSH32(esp, edx);
    eax = esi + 0x34;
    PUSH32(esp, eax);
    ecx = esi + 0x30;
    PUSH32(esp, ecx);
    edx = esi + 0x4C;
    PUSH32(esp, edx);
    eax = esi + 0x48;
    PUSH32(esp, eax);
    ecx = esi + 0x2C;
    PUSH32(esp, ecx);
    edx = esi + 0x24;
    PUSH32(esp, edx);
    eax = esi + 0x14;
    PUSH32(esp, eax);
    ecx = esi + 0x10;
    PUSH32(esp, ecx);
    edx = esi + 0xC;
    PUSH32(esp, edx);
    eax = esi + 0x18;
    PUSH32(esp, eax);
    ecx = esp + 0x50;
    PUSH32(esp, ecx);
    edx = esp + 0x50;
    PUSH32(esp, edx);
    eax = esp + 0x50;
    PUSH32(esp, eax);
    ecx = esp + 0x60;
    PUSH32(esp, 0x809528);
    PUSH32(esp, ecx);
    MEM32(esp + 0x5C) = 0;
    MEM32(esp + 0x60) = 0;
    MEM32(esp + 0x64) = 0;
    PUSH32(esp, 0x0025DE1Au); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_0025DE1A: ;
    edx = MEM32(esp + 0x5C);
    ecx = MEM32(esp + 0x60);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x3C);
    MEM32(esi + 0x40) = ecx;
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x58;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x20) = edx;
    edx = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM32(esi + 0x44) = edx;
    SET_LO8(eax, LO8(ecx));
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0025DE80
 * Original: 0x0025DE80 - 0x0025DF05 (133 bytes, 51 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025DE80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025DE80: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x20);
    PUSH32(esp, 0xDEADDEADu);
    _fb = (uint32_t)(0xFFFFF82Au) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFF82Au;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esi + 0x6C;
    PUSH32(esp, edx);
    eax = esi + 0x1C;
    PUSH32(esp, eax);
    ecx = esi + 0x68;
    PUSH32(esp, ecx);
    edx = esi + 0x64;
    PUSH32(esp, edx);
    eax = esi + 0x60;
    PUSH32(esp, eax);
    ecx = esi + 0x14;
    PUSH32(esp, ecx);
    edx = esi + 0x10;
    PUSH32(esp, edx);
    eax = esi + 0x50;
    PUSH32(esp, eax);
    ecx = esi + 0xC;
    PUSH32(esp, ecx);
    edx = esi + 0x18;
    PUSH32(esp, edx);
    eax = esi + 0x5C;
    PUSH32(esp, eax);
    ecx = esi + 0x58;
    PUSH32(esp, ecx);
    edx = esp + 0x40;
    PUSH32(esp, edx);
    eax = esp + 0x48;
    PUSH32(esp, 0x8097A0);
    PUSH32(esp, eax);
    MEM32(esp + 0x4C) = 0;
    PUSH32(esp, 0x0025DEE8u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_0025DEE8: ;
    ecx = MEM32(esp + 0x4C);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x3C);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM32(esi + 0x54) = ecx;
    SET_LO8(eax, LO8(edx));
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0025DF30
 * Original: 0x0025DF30 - 0x0025DFD2 (162 bytes, 62 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025DF30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025DF30: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x28);
    PUSH32(esp, 0xDEADDEADu);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = eax;
    eax = MEM32(esp + 0x28);
    _fb = (uint32_t)(0xFFFFF82Au) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFF82Au;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esi + 0x1C;
    PUSH32(esp, edx);
    eax = esi + 0x28;
    PUSH32(esp, eax);
    ecx = esi + 0x3C;
    PUSH32(esp, ecx);
    edx = esi + 0x38;
    PUSH32(esp, edx);
    eax = esi + 0x34;
    PUSH32(esp, eax);
    ecx = esi + 0x30;
    PUSH32(esp, ecx);
    edx = esi + 0x4C;
    PUSH32(esp, edx);
    eax = esi + 0x48;
    PUSH32(esp, eax);
    ecx = esi + 0x2C;
    PUSH32(esp, ecx);
    edx = esi + 0x24;
    PUSH32(esp, edx);
    eax = esi + 0x14;
    PUSH32(esp, eax);
    ecx = esi + 0x10;
    PUSH32(esp, ecx);
    edx = esi + 0xC;
    PUSH32(esp, edx);
    eax = esi + 0x18;
    PUSH32(esp, eax);
    ecx = esp + 0x50;
    PUSH32(esp, ecx);
    edx = esp + 0x50;
    PUSH32(esp, edx);
    eax = esp + 0x50;
    PUSH32(esp, eax);
    ecx = esp + 0x60;
    PUSH32(esp, 0x809998);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0025DFB0u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_0025DFB0: ;
    edx = MEM32(esp + 0x5C);
    eax = MEM32(esp + 0x60);
    ecx = MEM32(esp + 0x64);
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x58;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)((int32_t)edx * (int32_t)0x3C);
    MEM32(esi + 0x20) = edx;
    MEM32(esi + 0x40) = eax;
    MEM32(esi + 0x44) = ecx;
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0025E000
 * Original: 0x0025E000 - 0x0025E07C (124 bytes, 47 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025E000(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025E000: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x20);
    PUSH32(esp, 0xDEADDEADu);
    _fb = (uint32_t)(0xFFFFF82Au) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFF82Au;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esi + 0x6C;
    PUSH32(esp, edx);
    eax = esi + 0x1C;
    PUSH32(esp, eax);
    ecx = esi + 0x68;
    PUSH32(esp, ecx);
    edx = esi + 0x64;
    PUSH32(esp, edx);
    eax = esi + 0x60;
    PUSH32(esp, eax);
    ecx = esi + 0x14;
    PUSH32(esp, ecx);
    edx = esi + 0x10;
    PUSH32(esp, edx);
    eax = esi + 0x50;
    PUSH32(esp, eax);
    ecx = esi + 0xC;
    PUSH32(esp, ecx);
    edx = esi + 0x18;
    PUSH32(esp, edx);
    eax = esi + 0x5C;
    PUSH32(esp, eax);
    ecx = esi + 0x58;
    PUSH32(esp, ecx);
    edx = esp + 0x40;
    PUSH32(esp, edx);
    eax = esp + 0x48;
    PUSH32(esp, 0x809C78);
    PUSH32(esp, eax);
    MEM32(esp + 0x4C) = 0;
    PUSH32(esp, 0x0025E068u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_0025E068: ;
    ecx = MEM32(esp + 0x4C);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x3C);
    MEM32(esi + 0x54) = ecx;
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0025E0A0
 * Original: 0x0025E0A0 - 0x0025E142 (162 bytes, 62 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025E0A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025E0A0: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x28);
    PUSH32(esp, 0xDEADDEADu);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = eax;
    eax = MEM32(esp + 0x28);
    _fb = (uint32_t)(0xFFFFF82Au) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFF82Au;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esi + 0x1C;
    PUSH32(esp, edx);
    eax = esi + 0x28;
    PUSH32(esp, eax);
    ecx = esi + 0x3C;
    PUSH32(esp, ecx);
    edx = esi + 0x38;
    PUSH32(esp, edx);
    eax = esi + 0x34;
    PUSH32(esp, eax);
    ecx = esi + 0x30;
    PUSH32(esp, ecx);
    edx = esi + 0x4C;
    PUSH32(esp, edx);
    eax = esi + 0x48;
    PUSH32(esp, eax);
    ecx = esi + 0x2C;
    PUSH32(esp, ecx);
    edx = esi + 0x24;
    PUSH32(esp, edx);
    eax = esi + 0x14;
    PUSH32(esp, eax);
    ecx = esi + 0x10;
    PUSH32(esp, ecx);
    edx = esi + 0xC;
    PUSH32(esp, edx);
    eax = esi + 0x18;
    PUSH32(esp, eax);
    ecx = esp + 0x50;
    PUSH32(esp, ecx);
    edx = esp + 0x50;
    PUSH32(esp, edx);
    eax = esp + 0x50;
    PUSH32(esp, eax);
    ecx = esp + 0x60;
    PUSH32(esp, 0x809EC0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0025E120u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_0025E120: ;
    edx = MEM32(esp + 0x5C);
    eax = MEM32(esp + 0x60);
    ecx = MEM32(esp + 0x64);
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x58;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)((int32_t)edx * (int32_t)0x3C);
    MEM32(esi + 0x20) = edx;
    MEM32(esi + 0x40) = eax;
    MEM32(esi + 0x44) = ecx;
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0025E170
 * Original: 0x0025E170 - 0x0025E1EC (124 bytes, 47 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025E170(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025E170: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x20);
    PUSH32(esp, 0xDEADDEADu);
    _fb = (uint32_t)(0xFFFFF82Au) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFF82Au;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esi + 0x6C;
    PUSH32(esp, edx);
    eax = esi + 0x1C;
    PUSH32(esp, eax);
    ecx = esi + 0x68;
    PUSH32(esp, ecx);
    edx = esi + 0x64;
    PUSH32(esp, edx);
    eax = esi + 0x60;
    PUSH32(esp, eax);
    ecx = esi + 0x14;
    PUSH32(esp, ecx);
    edx = esi + 0x10;
    PUSH32(esp, edx);
    eax = esi + 0x50;
    PUSH32(esp, eax);
    ecx = esi + 0xC;
    PUSH32(esp, ecx);
    edx = esi + 0x18;
    PUSH32(esp, edx);
    eax = esi + 0x5C;
    PUSH32(esp, eax);
    ecx = esi + 0x58;
    PUSH32(esp, ecx);
    edx = esp + 0x40;
    PUSH32(esp, edx);
    eax = esp + 0x48;
    PUSH32(esp, 0x80A1A0);
    PUSH32(esp, eax);
    MEM32(esp + 0x4C) = 0;
    PUSH32(esp, 0x0025E1D8u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_0025E1D8: ;
    ecx = MEM32(esp + 0x4C);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x3C);
    MEM32(esi + 0x54) = ecx;
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0025E210
 * Original: 0x0025E210 - 0x0025E28A (122 bytes, 48 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025E210(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025E210: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1C);
    PUSH32(esp, 0xDEADDEADu);
    _fb = (uint32_t)(0xFFFFF85Au) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFF85Au;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esi + 0x28;
    PUSH32(esp, edx);
    eax = esi + 0x3C;
    PUSH32(esp, eax);
    ecx = esi + 0x38;
    PUSH32(esp, ecx);
    edx = esi + 0x34;
    PUSH32(esp, edx);
    eax = esi + 0x30;
    PUSH32(esp, eax);
    ecx = esi + 0x2C;
    PUSH32(esp, ecx);
    edx = esi + 0x14;
    PUSH32(esp, edx);
    eax = esi + 0x10;
    PUSH32(esp, eax);
    ecx = esi + 0xC;
    PUSH32(esp, ecx);
    edx = esi + 0x18;
    PUSH32(esp, edx);
    eax = esp + 0x38;
    PUSH32(esp, 0x80A3E8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0025E263u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_0025E263: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM32(esi + 0x20) = ecx;
    MEM32(esi + 0x40) = ecx;
    MEM32(esi + 0x44) = ecx;
    MEM32(esi + 0x24) = ecx;
    MEM32(esi + 0x48) = ecx;
    MEM32(esi + 0x4C) = ecx;
    SET_LO8(eax, LO8(edx));
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0025E2B0
 * Original: 0x0025E2B0 - 0x0025E32D (125 bytes, 47 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025E2B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025E2B0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x20);
    PUSH32(esp, 0xDEADDEADu);
    _fb = (uint32_t)(0xFFFFF85Au) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFF85Au;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esi + 0x6C;
    PUSH32(esp, edx);
    eax = esi + 0x68;
    PUSH32(esp, eax);
    ecx = esi + 0x64;
    PUSH32(esp, ecx);
    edx = esi + 0x60;
    PUSH32(esp, edx);
    eax = esi + 0x14;
    PUSH32(esp, eax);
    ecx = esi + 0x10;
    PUSH32(esp, ecx);
    edx = esi + 0xC;
    PUSH32(esp, edx);
    eax = esi + 0x18;
    PUSH32(esp, eax);
    ecx = esi + 0x5C;
    PUSH32(esp, ecx);
    edx = esi + 0x58;
    PUSH32(esp, edx);
    eax = esp + 0x38;
    PUSH32(esp, eax);
    ecx = esp + 0x40;
    PUSH32(esp, 0x80A580);
    PUSH32(esp, ecx);
    MEM32(esp + 0x44) = 0;
    PUSH32(esp, 0x0025E310u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_0025E310: ;
    edx = MEM32(esp + 0x44);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x3C);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM32(esi + 0x54) = edx;
    SET_LO8(eax, LO8(ecx));
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0025E350
 * Original: 0x0025E350 - 0x0025E3C9 (121 bytes, 47 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025E350(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025E350: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1C);
    PUSH32(esp, 0xDEADDEADu);
    _fb = (uint32_t)(0xFFFFF85Au) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFF85Au;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esi + 0x28;
    PUSH32(esp, edx);
    eax = esi + 0x38;
    PUSH32(esp, eax);
    ecx = esi + 0x34;
    PUSH32(esp, ecx);
    edx = esi + 0x30;
    PUSH32(esp, edx);
    eax = esi + 0x2C;
    PUSH32(esp, eax);
    ecx = esi + 0x14;
    PUSH32(esp, ecx);
    edx = esi + 0x10;
    PUSH32(esp, edx);
    eax = esi + 0xC;
    PUSH32(esp, eax);
    ecx = esi + 0x18;
    PUSH32(esp, ecx);
    edx = esp + 0x34;
    PUSH32(esp, 0x80A738);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0025E39Fu); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_0025E39F: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM32(esi + 0x3C) = ecx;
    MEM32(esi + 0x20) = ecx;
    MEM32(esi + 0x40) = ecx;
    MEM32(esi + 0x44) = ecx;
    MEM32(esi + 0x24) = ecx;
    MEM32(esi + 0x48) = ecx;
    MEM32(esi + 0x4C) = ecx;
    SET_LO8(eax, LO8(edx));
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0025E3F0
 * Original: 0x0025E3F0 - 0x0025E470 (128 bytes, 46 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025E3F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025E3F0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x20);
    PUSH32(esp, 0xDEADDEADu);
    _fb = (uint32_t)(0xFFFFF85Au) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFF85Au;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esi + 0x6C;
    PUSH32(esp, edx);
    eax = esi + 0x64;
    PUSH32(esp, eax);
    ecx = esi + 0x60;
    PUSH32(esp, ecx);
    edx = esi + 0x14;
    PUSH32(esp, edx);
    eax = esi + 0x10;
    PUSH32(esp, eax);
    ecx = esi + 0xC;
    PUSH32(esp, ecx);
    edx = esi + 0x18;
    PUSH32(esp, edx);
    eax = esi + 0x5C;
    PUSH32(esp, eax);
    ecx = esi + 0x58;
    PUSH32(esp, ecx);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    eax = esp + 0x3C;
    PUSH32(esp, 0x80A8B0);
    PUSH32(esp, eax);
    MEM32(esp + 0x40) = 0;
    PUSH32(esp, 0x0025E44Cu); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_0025E44C: ;
    ecx = MEM32(esp + 0x40);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x3C);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM32(esi + 0x54) = ecx;
    MEM32(esi + 0x68) = 0;
    SET_LO8(eax, LO8(edx));
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0025E490
 * Original: 0x0025E490 - 0x0025E4F7 (103 bytes, 41 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025E490(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025E490: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, eax);
    ecx = esi + 0x28;
    PUSH32(esp, ecx);
    edx = esi + 0x3C;
    PUSH32(esp, edx);
    eax = esi + 0x38;
    PUSH32(esp, eax);
    ecx = esi + 0x34;
    PUSH32(esp, ecx);
    edx = esi + 0x30;
    PUSH32(esp, edx);
    eax = esi + 0x2C;
    PUSH32(esp, eax);
    ecx = esi + 0x14;
    PUSH32(esp, ecx);
    edx = esi + 0x10;
    PUSH32(esp, edx);
    eax = esi + 0xC;
    PUSH32(esp, eax);
    ecx = esi + 0x18;
    PUSH32(esp, ecx);
    edx = esp + 0x34;
    PUSH32(esp, 0x80AA48);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0025E4D9u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_0025E4D9: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x20) = eax;
    MEM32(esi + 0x40) = eax;
    MEM32(esi + 0x44) = eax;
    MEM32(esi + 0x24) = eax;
    MEM32(esi + 0x48) = eax;
    MEM32(esi + 0x4C) = eax;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0025E510
 * Original: 0x0025E510 - 0x0025E57A (106 bytes, 40 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025E510(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025E510: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1C);
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, eax);
    ecx = esi + 0x6C;
    PUSH32(esp, ecx);
    edx = esi + 0x68;
    PUSH32(esp, edx);
    eax = esi + 0x64;
    PUSH32(esp, eax);
    ecx = esi + 0x60;
    PUSH32(esp, ecx);
    edx = esi + 0x14;
    PUSH32(esp, edx);
    eax = esi + 0x10;
    PUSH32(esp, eax);
    ecx = esi + 0xC;
    PUSH32(esp, ecx);
    edx = esi + 0x18;
    PUSH32(esp, edx);
    eax = esi + 0x5C;
    PUSH32(esp, eax);
    ecx = esi + 0x58;
    PUSH32(esp, ecx);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    eax = esp + 0x3C;
    PUSH32(esp, 0x80AC00);
    PUSH32(esp, eax);
    MEM32(esp + 0x40) = 0;
    PUSH32(esp, 0x0025E566u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_0025E566: ;
    ecx = MEM32(esp + 0x40);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x3C);
    MEM32(esi + 0x54) = ecx;
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0025E5A0
 * Original: 0x0025E5A0 - 0x0025E606 (102 bytes, 40 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025E5A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025E5A0: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, eax);
    ecx = esi + 0x28;
    PUSH32(esp, ecx);
    edx = esi + 0x38;
    PUSH32(esp, edx);
    eax = esi + 0x34;
    PUSH32(esp, eax);
    ecx = esi + 0x30;
    PUSH32(esp, ecx);
    edx = esi + 0x2C;
    PUSH32(esp, edx);
    eax = esi + 0x14;
    PUSH32(esp, eax);
    ecx = esi + 0x10;
    PUSH32(esp, ecx);
    edx = esi + 0xC;
    PUSH32(esp, edx);
    eax = esi + 0x18;
    PUSH32(esp, eax);
    ecx = esp + 0x30;
    PUSH32(esp, 0x80ADD8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0025E5E5u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_0025E5E5: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x3C) = eax;
    MEM32(esi + 0x20) = eax;
    MEM32(esi + 0x40) = eax;
    MEM32(esi + 0x44) = eax;
    MEM32(esi + 0x24) = eax;
    MEM32(esi + 0x48) = eax;
    MEM32(esi + 0x4C) = eax;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0025E620
 * Original: 0x0025E620 - 0x0025E68D (109 bytes, 39 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025E620(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025E620: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1C);
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, eax);
    ecx = esi + 0x6C;
    PUSH32(esp, ecx);
    edx = esi + 0x64;
    PUSH32(esp, edx);
    eax = esi + 0x60;
    PUSH32(esp, eax);
    ecx = esi + 0x14;
    PUSH32(esp, ecx);
    edx = esi + 0x10;
    PUSH32(esp, edx);
    eax = esi + 0xC;
    PUSH32(esp, eax);
    ecx = esi + 0x18;
    PUSH32(esp, ecx);
    edx = esi + 0x5C;
    PUSH32(esp, edx);
    eax = esi + 0x58;
    PUSH32(esp, eax);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    edx = esp + 0x38;
    PUSH32(esp, 0x80AF68);
    PUSH32(esp, edx);
    MEM32(esp + 0x3C) = 0;
    PUSH32(esp, 0x0025E672u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_0025E672: ;
    eax = MEM32(esp + 0x3C);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3C);
    MEM32(esi + 0x54) = eax;
    MEM32(esi + 0x68) = 0;
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0025E6B0
 * Original: 0x0025E6B0 - 0x0025E7AD (253 bytes, 109 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025E6B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0025E6B0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x20);
    ecx = MEM32(esi + 0x20);
    ebx = MEM32(esi + 8);
    ebp = MEM32(esi + 4);
    PUSH32(esp, edi);
    PUSH32(esp, 0xDEADDEADu);
    eax = 0x88888889u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edi = edx;
    _fb = (uint32_t)(0x7D6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 0x7D6;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    { uint32_t _sv=(uint32_t)(edi), _sc=(uint32_t)(0x1F) & 31u;
      if (_sc) {
        edi = _sv >> _sc;
        _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(esi + 0x1C);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x28);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x3C);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x38);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x34);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x30);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x4C);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x48);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x2C);
    ecx = MEM32(esi + 0x44);
    eax = MEM32(esi + 0x40);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x24);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x10);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0xC);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    MEM32(esp + 0x60) = eax;
    eax = esp + 0x64;
    PUSH32(esp, 0x80B360);
    PUSH32(esp, eax);
    MEM32(esp + 0x7C) = ecx;
    PUSH32(esp, 0x0025E73Cu); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_0025E73C: ;
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x58;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM16(esp + 0x14)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esp + 0x14), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025E7A3; /* jne: not equal / not zero */

loc_0025E747: ;
    ecx = MEM32(esi + 0x1C);
    edx = MEM32(esi + 0x28);
    eax = MEM32(esi + 0x3C);
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x38);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x34);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x30);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x4C);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x48);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x2C);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x14);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x18);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x60);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x50);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edx = esp + 0x64;
    PUSH32(esp, 0x80B120);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0025E7A0u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_0025E7A0: ;
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x58;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0025E7A3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0025E7F0
 * Original: 0x0025E7F0 - 0x0025E8C3 (211 bytes, 91 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025E7F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0025E7F0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1C);
    ecx = MEM32(esi + 0x54);
    ebx = MEM32(esi + 8);
    ebp = MEM32(esi + 4);
    PUSH32(esp, edi);
    PUSH32(esp, 0xDEADDEADu);
    eax = 0x88888889u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    eax = MEM32(esi + 0x6C);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esi + 0x1C);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edi = edx;
    _fb = (uint32_t)(0x7D6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 0x7D6;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x64);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x60);
    { uint32_t _sv=(uint32_t)(edi), _sc=(uint32_t)(0x1F) & 31u;
      if (_sc) {
        edi = _sv >> _sc;
        _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(esi + 0x68);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x14);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x50);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x18);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x5C);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x58);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    eax = esp + 0x50;
    PUSH32(esp, 0x80B760);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0025E864u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_0025E864: ;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM16(esp + 0x10)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esp + 0x10), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025E8B9; /* jne: not equal / not zero */

loc_0025E86F: ;
    ecx = MEM32(esi + 0x6C);
    edx = MEM32(esi + 0x1C);
    eax = MEM32(esi + 0x68);
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x64);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x60);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x14);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x50);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x5C);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x58);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esp + 0x50;
    PUSH32(esp, 0x80B598);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0025E8B6u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_0025E8B6: ;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0025E8B9: ;
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
 * sub_0025E900
 * Original: 0x0025E900 - 0x0025E9FD (253 bytes, 109 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025E900(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0025E900: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x20);
    ecx = MEM32(esi + 0x20);
    ebx = MEM32(esi + 8);
    ebp = MEM32(esi + 4);
    PUSH32(esp, edi);
    PUSH32(esp, 0xDEADDEADu);
    eax = 0x88888889u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edi = edx;
    _fb = (uint32_t)(0x7D6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 0x7D6;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    { uint32_t _sv=(uint32_t)(edi), _sc=(uint32_t)(0x1F) & 31u;
      if (_sc) {
        edi = _sv >> _sc;
        _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(esi + 0x1C);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x28);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x3C);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x38);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x34);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x30);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x4C);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x48);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x2C);
    ecx = MEM32(esi + 0x44);
    eax = MEM32(esi + 0x40);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x24);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x10);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0xC);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    MEM32(esp + 0x60) = eax;
    eax = esp + 0x64;
    PUSH32(esp, 0x80BB68);
    PUSH32(esp, eax);
    MEM32(esp + 0x7C) = ecx;
    PUSH32(esp, 0x0025E98Cu); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_0025E98C: ;
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x58;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM16(esp + 0x14)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esp + 0x14), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025E9F3; /* jne: not equal / not zero */

loc_0025E997: ;
    ecx = MEM32(esi + 0x1C);
    edx = MEM32(esi + 0x28);
    eax = MEM32(esi + 0x3C);
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x38);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x34);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x30);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x4C);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x48);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x2C);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x14);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x18);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x60);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x50);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edx = esp + 0x64;
    PUSH32(esp, 0x80B928);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0025E9F0u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_0025E9F0: ;
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x58;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0025E9F3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0025EA40
 * Original: 0x0025EA40 - 0x0025EB13 (211 bytes, 91 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025EA40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0025EA40: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1C);
    ecx = MEM32(esi + 0x54);
    ebx = MEM32(esi + 8);
    ebp = MEM32(esi + 4);
    PUSH32(esp, edi);
    PUSH32(esp, 0xDEADDEADu);
    eax = 0x88888889u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    eax = MEM32(esi + 0x6C);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esi + 0x1C);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edi = edx;
    _fb = (uint32_t)(0x7D6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 0x7D6;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x64);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x60);
    { uint32_t _sv=(uint32_t)(edi), _sc=(uint32_t)(0x1F) & 31u;
      if (_sc) {
        edi = _sv >> _sc;
        _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(esi + 0x68);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x14);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x50);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x18);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x5C);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x58);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    eax = esp + 0x50;
    PUSH32(esp, 0x80BF68);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0025EAB4u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_0025EAB4: ;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM16(esp + 0x10)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esp + 0x10), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025EB09; /* jne: not equal / not zero */

loc_0025EABF: ;
    ecx = MEM32(esi + 0x6C);
    edx = MEM32(esi + 0x1C);
    eax = MEM32(esi + 0x68);
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x64);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x60);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x14);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x50);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x5C);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x58);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esp + 0x50;
    PUSH32(esp, 0x80BDA0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0025EB06u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_0025EB06: ;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0025EB09: ;
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
 * sub_0025EB50
 * Original: 0x0025EB50 - 0x0025EB8C (60 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025EB50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025EB50: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, esi);
    eax = esp + 0xC;
    PUSH32(esp, 0x80C164);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0025EB6Du); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_0025EB6D: ;
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, esi);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x80C12C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0025EB82u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_0025EB82: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0025EBA0
 * Original: 0x0025EBA0 - 0x0025EBCD (45 bytes, 13 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025EBA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025EBA0: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 8);
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = MEM32(esp + 4);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = edx & 0xFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0025EBE0
 * Original: 0x0025EBE0 - 0x0025EC17 (55 bytes, 19 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025EBE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025EBE0: ;
    edx = MEM32(esp + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0025EC14; /* jle: less or equal (signed <=) */

loc_0025EBE8: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(esp + 0x10);
    eax = ecx + eax * 4;
    ecx = MEM32(esp + 4);
    PUSH32(esp, esi);
    goto loc_0025EC00;

    /* nop */

loc_0025EC00: ;
    esi = ecx;
    esi = esi & 0xFF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax) = esi;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0025EC00; /* jne: not equal / not zero */

loc_0025EC13: ;
    POP32(esp, esi);

loc_0025EC14: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0025EC30
 * Original: 0x0025EC30 - 0x0025EC78 (72 bytes, 22 insns)
 * Category: game_ui
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025EC30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025EC30: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0xDEADDEADu);
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = eax;
    eax = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    eax = esp + 0x18;
    PUSH32(esp, 0x80C1A0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0025EC61u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_0025EC61: ;
    eax = MEM32(esp + 0x30);
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x1C);
    MEM32(eax) = ecx;
    MEM32(eax + 4) = edx;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0025EC90
 * Original: 0x0025EC90 - 0x0025ECD8 (72 bytes, 22 insns)
 * Category: game_ui
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025EC90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025EC90: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0xDEADDEADu);
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = eax;
    eax = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    eax = esp + 0x18;
    PUSH32(esp, 0x80C218);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0025ECC1u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_0025ECC1: ;
    eax = MEM32(esp + 0x30);
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x1C);
    MEM32(eax) = ecx;
    MEM32(eax + 4) = edx;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0025ECF0
 * Original: 0x0025ECF0 - 0x0025ED23 (51 bytes, 14 insns)
 * Category: game_ui
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025ECF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025ECF0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x14);
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, 0x80C290);
    PUSH32(esp, edx);
    MEM32(esp + 0x14) = 0xFFFFFFFFu;
    PUSH32(esp, 0x0025ED19u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_0025ED19: ;
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0025ED30
 * Original: 0x0025ED30 - 0x0025EDCE (158 bytes, 55 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025ED30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025ED30: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0xDEADDEADu);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(esp + 0x54);
    PUSH32(esp, eax);
    ecx = esp + 0x4C;
    PUSH32(esp, ecx);
    edx = esp + 0x48;
    PUSH32(esp, edx);
    eax = esp + 0x50;
    PUSH32(esp, eax);
    ecx = esp + 0x4C;
    PUSH32(esp, ecx);
    edx = esp + 0x4C;
    PUSH32(esp, edx);
    eax = esp + 0x4C;
    PUSH32(esp, eax);
    ecx = esp + 0x4C;
    PUSH32(esp, ecx);
    edx = esp + 0x4C;
    PUSH32(esp, edx);
    eax = esp + 0x4C;
    PUSH32(esp, eax);
    ecx = esp + 0x4C;
    PUSH32(esp, ecx);
    edx = esp + 0x4C;
    PUSH32(esp, edx);
    eax = esp + 0x48;
    PUSH32(esp, eax);
    ecx = esp + 0x50;
    PUSH32(esp, ecx);
    edx = esp + 0x44;
    PUSH32(esp, 0x80C2E8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0025ED9Au); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_0025ED9A: ;
    eax = MEM32(esp + 0x7C);
    ecx = MEM32(esp + 0x70);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x61A8);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x38) = eax;
    eax = MEM32(esp + 0x4C);
    MEM32(esp + 0x2C) = ecx;
    ecx = 0xD;
    esi = esp + 0x14;
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
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0025EE00
 * Original: 0x0025EE00 - 0x0025EE51 (81 bytes, 25 insns)
 * Category: game_ui
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025EE00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025EE00: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0xDEADDEADu);
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = eax;
    eax = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    eax = esp + 0x1C;
    PUSH32(esp, 0x80C4C0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0025EE31u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_0025EE31: ;
    eax = MEM32(esp + 0x34);
    edx = MEM32(esp + 0x18);
    ecx = eax;
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x1C);
    MEM32(ecx + 4) = edx;
    edx = MEM32(esp + 0x20);
    MEM32(ecx + 8) = edx;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0025EE70
 * Original: 0x0025EE70 - 0x0025EEC6 (86 bytes, 27 insns)
 * Category: game_ui
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025EE70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025EE70: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0xDEADDEADu);
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = eax;
    eax = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    PUSH32(esp, 0x80C538);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0025EEA6u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_0025EEA6: ;
    eax = MEM32(esp + 0x38);
    ecx = MEM32(esp + 0x1C);
    edx = eax;
    MEM32(edx) = ecx;
    ecx = MEM32(esp + 0x20);
    MEM32(edx + 4) = ecx;
    ecx = MEM32(esp + 0x24);
    MEM32(edx + 8) = ecx;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0025EEE0
 * Original: 0x0025EEE0 - 0x0025EF13 (51 bytes, 14 insns)
 * Category: game_ui
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025EEE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025EEE0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x14);
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, 0x80C5D0);
    PUSH32(esp, edx);
    MEM32(esp + 0x14) = 0xFFFFFFFFu;
    PUSH32(esp, 0x0025EF09u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_0025EF09: ;
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0025EF20
 * Original: 0x0025EF20 - 0x0025EF53 (51 bytes, 14 insns)
 * Category: game_ui
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025EF20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025EF20: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x14);
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, 0x80C628);
    PUSH32(esp, edx);
    MEM32(esp + 0x14) = 0xFFFFFFFFu;
    PUSH32(esp, 0x0025EF49u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_0025EF49: ;
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0025EF60
 * Original: 0x0025EF60 - 0x0025EF87 (39 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025EF60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025EF60: ;
    eax = MEM32(0x8FA534);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025EF86; /* je: equal / zero */

loc_0025EF69: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0025EF6Fu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0025EF6F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x8FA534) = 0;
    MEM32(0x8FA538) = 0;

loc_0025EF86: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0025EF90
 * Original: 0x0025EF90 - 0x0025EFAA (26 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025EF90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025EF90: ;
    eax = MEM32(0x8FA520);
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025EFA7; /* je: equal / zero */

loc_0025EF9B: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0025EFA0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0025EF9Du); } /* indirect call */
    }

loc_0025EFA0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025EFA7; /* je: equal / zero */

loc_0025EFA4: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_0025EFA7: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0025EFB0
 * Original: 0x0025EFB0 - 0x0025F00A (90 bytes, 24 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025EFB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025EFB0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0025EFCD; /* jne: not equal / not zero */

loc_0025EFBA: ;
    ecx = 0x7A7;
    edx = ecx;
    ebx = 0x36;
    esi = 0x96;
    goto loc_0025EFDE;

loc_0025EFCD: ;
    ecx = 0xFFFFF859u;
    edx = ecx;
    ebx = 0xFFFFFFCAu;
    esi = 0xFFFFFF6Au;

loc_0025EFDE: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(LO16(edx)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    MEM16(eax + 0x246) = MEM16(eax + 0x246) + LO16(edx);
    _fa = (uint32_t)(MEM16(eax + 0x246)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    SET_LO8(edx, MEM8(eax + 0x25D));
    _fb = (uint32_t)(LO16(esi)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    MEM16(eax + 0x25E) = MEM16(eax + 0x25E) + LO16(esi);
    _fa = (uint32_t)(MEM16(eax + 0x25E)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    MEM16(eax + 0x242) = MEM16(eax + 0x242) + LO16(ecx);
    _fa = (uint32_t)(MEM16(eax + 0x242)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + LO8(ebx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    POP32(esp, esi);
    MEM8(eax + 0x25D) = LO8(edx);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0025F020
 * Original: 0x0025F020 - 0x0025F066 (70 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025F020(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025F020: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp) = eax;
    MEM32(esp + 4) = eax;
    eax = MEM32(0x8FA538);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025F04D; /* je: equal / zero */

loc_0025F036: ;
    eax = MEM32(0x8FA534);
    ecx = MEM32(esp + 0x3C);
    edx = MEM32(eax + ecx * 8);
    eax = MEM32(eax + ecx * 8 + 4);
    MEM32(esp + 4) = edx;
    MEM32(esp) = eax;

loc_0025F04D: ;
    eax = MEM32(esp + 0x38);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = 0xD;
    esi = esp + 8;
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
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0025F080
 * Original: 0x0025F080 - 0x0025F0FE (126 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025F080(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025F080: ;
    ecx = MEM32(0x8FA534);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025F0FD; /* je: equal / zero */

loc_0025F08D: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    edx = 2;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    goto loc_0025F0A0;

    /* nop */

loc_0025F0A0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0025F0FB; /* jge: greater or equal (signed >=) */

loc_0025F0A4: ;
    _fa = (uint32_t)(MEM32(ecx + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + -8), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025F0B3; /* jne: not equal / not zero */

loc_0025F0A9: ;
    edi = MEM32(ecx + -4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025F0B3; /* jne: not equal / not zero */

loc_0025F0B0: ;
    eax = edx + -2;

loc_0025F0B3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0025F0FB; /* jge: greater or equal (signed >=) */

loc_0025F0B7: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025F0C5; /* jne: not equal / not zero */

loc_0025F0BB: ;
    edi = MEM32(ecx + 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025F0C5; /* jne: not equal / not zero */

loc_0025F0C2: ;
    eax = edx + -1;

loc_0025F0C5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0025F0FB; /* jge: greater or equal (signed >=) */

loc_0025F0C9: ;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 8), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025F0D7; /* jne: not equal / not zero */

loc_0025F0CE: ;
    edi = MEM32(ecx + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025F0D7; /* jne: not equal / not zero */

loc_0025F0D5: ;
    eax = edx;

loc_0025F0D7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0025F0FB; /* jge: greater or equal (signed >=) */

loc_0025F0DB: ;
    _fa = (uint32_t)(MEM32(ecx + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x10), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025F0EA; /* jne: not equal / not zero */

loc_0025F0E0: ;
    edi = MEM32(ecx + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025F0EA; /* jne: not equal / not zero */

loc_0025F0E7: ;
    eax = edx + 1;

loc_0025F0EA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = edx + -2;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x2000 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0025F0A0; /* jl: less (signed <) */

loc_0025F0FB: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_0025F0FD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0025F120
 * Original: 0x0025F120 - 0x0025F14F (47 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025F120(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025F120: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x80C67C;
    MEM32(esi + 4) = 0;
    PUSH32(esp, 0x0025F135u); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_0025F135: ;
    ecx = eax;
    PUSH32(esp, 0x0025F13Cu); RECOMP_ABI_CALL(0x00026B4Eu, sub_00026B4E); /* call 0x00026B4E */

loc_0025F13C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x0025F145u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0025F145: ;
    MEM32(esi + 4) = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0025F160
 * Original: 0x0025F160 - 0x0025F18D (45 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025F160(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0025F160: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x80C67C;
    if (CMP_EQ(_fa, _fb)) goto loc_0025F180; /* je: equal / zero */

loc_0025F170: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0025F176u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0025F176: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = 0;

loc_0025F180: ;
    PUSH32(esp, 0x0025F185u); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_0025F185: ;
    ecx = eax;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0002A61D(); return; /* tail jmp 0x0002A61D */

}

/**
 * sub_0025F1A0
 * Original: 0x0025F1A0 - 0x0025F1C6 (38 bytes, 14 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025F1A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025F1A0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ecx + 8) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0025F1C1; /* jge: greater or equal (signed >=) */

loc_0025F1AB: ;
    edi = MEM32(ecx + 0xC);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x2F8);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = MEM32(esp + 0x10);
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

loc_0025F1C1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0025F1D0
 * Original: 0x0025F1D0 - 0x0025F2B2 (226 bytes, 68 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025F1D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0025F1D0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x24);
    PUSH32(esp, edi);
    PUSH32(esp, 0xDEADDEADu);
    MEM32(esp + 0x14) = ecx;
    ecx = esi + 0x262;
    PUSH32(esp, ecx);
    eax = esi + 0x240;
    PUSH32(esp, eax);
    eax = esi + 0x250;
    PUSH32(esp, eax);
    ecx = esi + 0x254;
    PUSH32(esp, ecx);
    eax = esi + 0x260;
    PUSH32(esp, eax);
    ecx = esi + 0x25C;
    PUSH32(esp, ecx);
    edi = esi + 0x25E;
    PUSH32(esp, edi);
    ebx = esi + 0x25D;
    PUSH32(esp, ebx);
    eax = esi + 0x249;
    PUSH32(esp, eax);
    ecx = esi + 0x248;
    PUSH32(esp, ecx);
    ebp = esi + 0x246;
    PUSH32(esp, ebp);
    eax = esi + 0x244;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x44);
    edx = esi + 0x242;
    PUSH32(esp, edx);
    ecx = esi + 0x100;
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 4);
    MEM32(esp + 0x64) = edx;
    PUSH32(esp, esi);
    edx = esi + 0x24C;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    edx = esp + 0x5C;
    PUSH32(esp, 0x80C680);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0025F269u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_0025F269: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(esi + 0x261) = LO8(eax);
    MEM8(esi + 0x200) = LO8(eax);
    eax = ZX16(MEM16(esi + 0x240));
    PUSH32(esp, eax);
    PUSH32(esp, 0x0025F284u); RECOMP_ABI_CALL(0x00034118u, sub_00034118); /* call 0x00034118 */

loc_0025F284: ;
    SET_LO8(ecx, MEM8(ebx));
    _fb = (uint32_t)(0x7A7) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    MEM16(ebp) = MEM16(ebp) + 0x7A7;
    _fa = (uint32_t)(MEM16(ebp)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esi + 0x264) = LO8(eax);
    eax = MEM32(esp + 0x28);
    _fb = (uint32_t)(0x7A7) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    MEM16(eax) = MEM16(eax) + 0x7A7;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    _fb = (uint32_t)(0x36) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(ecx, LO8(ecx) + 0x36);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(0x96) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    MEM16(edi) = MEM16(edi) + 0x96;
    _fa = (uint32_t)(MEM16(edi)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM8(ebx) = LO8(ecx);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0025F2F0
 * Original: 0x0025F2F0 - 0x0025F3BD (205 bytes, 60 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025F2F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025F2F0: ;
    edx = MEM32(esp + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    PUSH32(esp, 0xDEADDEADu);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edx + 0x2BC;
    ecx = 0xF;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    ecx = edx + 0x2E7;
    PUSH32(esp, ecx);
    eax = edx + 0x2D0;
    PUSH32(esp, eax);
    ecx = edx + 0x2E1;
    PUSH32(esp, ecx);
    eax = edx + 0x2E0;
    PUSH32(esp, eax);
    ecx = edx + 0x2DF;
    PUSH32(esp, ecx);
    eax = edx + 0x2DE;
    PUSH32(esp, eax);
    ecx = edx + 0x2DD;
    PUSH32(esp, ecx);
    eax = edx + 0x2DC;
    PUSH32(esp, eax);
    ecx = edx + 0x2DB;
    PUSH32(esp, ecx);
    eax = edx + 0x2DA;
    PUSH32(esp, eax);
    ecx = edx + 0x2D9;
    PUSH32(esp, ecx);
    eax = edx + 0x2D8;
    PUSH32(esp, eax);
    ecx = edx + 0x2D7;
    PUSH32(esp, ecx);
    eax = edx + 0x2D6;
    PUSH32(esp, eax);
    ecx = edx + 0x2D5;
    PUSH32(esp, ecx);
    eax = edx + 0x2D4;
    PUSH32(esp, eax);
    ecx = edx + 0x2D3;
    PUSH32(esp, ecx);
    eax = edx + 0x2D2;
    PUSH32(esp, eax);
    ecx = edx + 0x2D1;
    PUSH32(esp, ecx);
    eax = edx + 0x2CF;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x2CE) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x2CE;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    ecx = esp + 0x60;
    PUSH32(esp, 0x80C898);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0025F3B3u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_0025F3B3: ;
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0025F3F0
 * Original: 0x0025F3F0 - 0x0025F4D9 (233 bytes, 68 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025F3F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025F3F0: ;
    edx = MEM32(esp + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    PUSH32(esp, 0xDEADDEADu);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edx + 0x2BC;
    ecx = 0xF;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    ecx = edx + 0x2E7;
    PUSH32(esp, ecx);
    eax = edx + 0x2E4;
    PUSH32(esp, eax);
    ecx = edx + 0x2E3;
    PUSH32(esp, ecx);
    eax = edx + 0x2E6;
    PUSH32(esp, eax);
    ecx = edx + 0x2E5;
    PUSH32(esp, ecx);
    eax = edx + 0x2E2;
    PUSH32(esp, eax);
    ecx = edx + 0x2E1;
    PUSH32(esp, ecx);
    eax = edx + 0x2E0;
    PUSH32(esp, eax);
    ecx = edx + 0x2DF;
    PUSH32(esp, ecx);
    eax = edx + 0x2DE;
    PUSH32(esp, eax);
    ecx = edx + 0x2DD;
    PUSH32(esp, ecx);
    eax = edx + 0x2DC;
    PUSH32(esp, eax);
    ecx = edx + 0x2DB;
    PUSH32(esp, ecx);
    eax = edx + 0x2DA;
    PUSH32(esp, eax);
    ecx = edx + 0x2D9;
    PUSH32(esp, ecx);
    eax = edx + 0x2D8;
    PUSH32(esp, eax);
    ecx = edx + 0x2D7;
    PUSH32(esp, ecx);
    eax = edx + 0x2D5;
    PUSH32(esp, eax);
    ecx = edx + 0x2D4;
    PUSH32(esp, ecx);
    eax = edx + 0x2D3;
    PUSH32(esp, eax);
    ecx = edx + 0x2D2;
    PUSH32(esp, ecx);
    eax = edx + 0x2D1;
    PUSH32(esp, eax);
    ecx = edx + 0x2D0;
    PUSH32(esp, ecx);
    eax = edx + 0x2CF;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x2CE) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x2CE;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    ecx = esp + 0x70;
    PUSH32(esp, 0x80CB78);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0025F4CFu); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_0025F4CF: ;
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x74;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0025F520
 * Original: 0x0025F520 - 0x0025F563 (67 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025F520(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025F520: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x80C67C;
    MEM32(esi + 4) = 0;
    PUSH32(esp, 0x0025F535u); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_0025F535: ;
    ecx = eax;
    PUSH32(esp, 0x0025F53Cu); RECOMP_ABI_CALL(0x00026B4Eu, sub_00026B4E); /* call 0x00026B4E */

loc_0025F53C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x0025F545u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0025F545: ;
    MEM32(esi + 4) = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = 0x80CED4;
    MEM32(esi + 8) = 0;
    MEM32(esi + 0xC) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0025F580
 * Original: 0x0025F580 - 0x0025F5CD (77 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025F580(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0025F580: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x80CED4;
    if (CMP_EQ(_fa, _fb)) goto loc_0025F5A3; /* je: equal / zero */

loc_0025F590: ;
    ecx = MEM32(0x8FA540);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0025F59Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0025F599u); } /* indirect call */
    }

loc_0025F59C: ;
    MEM32(esi + 0xC) = 0;

loc_0025F5A3: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x80C67C;
    if (CMP_EQ(_fa, _fb)) goto loc_0025F5C0; /* je: equal / zero */

loc_0025F5B0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0025F5B6u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0025F5B6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = 0;

loc_0025F5C0: ;
    PUSH32(esp, 0x0025F5C5u); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_0025F5C5: ;
    ecx = eax;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0002A61D(); return; /* tail jmp 0x0002A61D */

}

/**
 * sub_0025F5E0
 * Original: 0x0025F5E0 - 0x0025F64C (108 bytes, 38 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025F5E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025F5E0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, esi);
    eax = esp + 0x10;
    PUSH32(esp, 0x80CF48);
    PUSH32(esp, eax);
    SET_LO8(ebx, 1);
    PUSH32(esp, 0x0025F600u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_0025F600: ;
    eax = MEM32(esp + 0x1C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025F615; /* je: equal / zero */

loc_0025F60B: ;
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0025F615: ;
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, esi);
    ecx = esp + 0x10;
    PUSH32(esp, 0x80CF10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0025F62Au); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_0025F62A: ;
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, esi);
    edx = esp + 0x20;
    PUSH32(esp, 0x80CED8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0025F63Fu); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_0025F63F: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0025F670
 * Original: 0x0025F670 - 0x0025F6BE (78 bytes, 22 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025F670(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025F670: ;
    eax = MEM32(esp + 4);
    SET_LO8(ecx, MEM8(eax + 0x260));
    edx = ZX8(MEM8(eax + 0x2E7));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0xDEADDEADu);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 4 (8-bit) */
    ecx = MEM32(eax + 0x24C);
    PUSH32(esp, ecx);
    eax = esp + 8;
    PUSH32(esp, edx);
    if (CMP_NE(_fa, _fb)) goto loc_0025F6A1; /* jne: not equal / not zero */

loc_0025F69A: ;
    PUSH32(esp, 0x80CFD0);
    goto loc_0025F6A6;

loc_0025F6A1: ;
    PUSH32(esp, 0x80CF80);

loc_0025F6A6: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0025F6ACu); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_0025F6AC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM16(esp)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esp), LO16(eax) (16-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0025F6E0
 * Original: 0x0025F6E0 - 0x0025F711 (49 bytes, 15 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025F6E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025F6E0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, 0x80D020);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0025F701u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_0025F701: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(esp + 0x14)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esp + 0x14), LO16(eax) (16-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0025F720
 * Original: 0x0025F720 - 0x0025F80F (239 bytes, 61 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025F720(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025F720: ;
    eax = MEM32(esp + 4);
    ecx = ZX8(MEM8(eax + 0x2E3));
    edx = ZX8(MEM8(eax + 0x2E4));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = ZX8(MEM8(eax + 0x2E6));
    edx = ZX8(MEM8(eax + 0x2E5));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(eax + 0x2E2));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(eax + 0x2E1));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(eax + 0x2E0));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(eax + 0x2DF));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(eax + 0x2DE));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(eax + 0x2DD));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(eax + 0x2DC));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(eax + 0x2DB));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(eax + 0x2DA));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(eax + 0x2D9));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(eax + 0x2D8));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(eax + 0x2D7));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(eax + 0x2D5));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(eax + 0x2D4));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(eax + 0x2D3));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(eax + 0x2D2));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(eax + 0x2D1));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(eax + 0x2D0));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(eax + 0x2CF));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(eax + 0x2CE));
    eax = MEM32(esp + 0x70);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x68;
    PUSH32(esp, 0x80D070);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0025F800u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_0025F800: ;
    _fa = (uint32_t)(MEM16(esp + 0x70)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esp + 0x70), 0 (16-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fb = (uint32_t)(0x7C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x7C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0025F850
 * Original: 0x0025F850 - 0x0025F91F (207 bytes, 53 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025F850(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025F850: ;
    eax = MEM32(esp + 4);
    ecx = ZX8(MEM8(eax + 0x2D0));
    edx = ZX8(MEM8(eax + 0x2E1));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(eax + 0x2E0));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(eax + 0x2DF));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(eax + 0x2DE));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(eax + 0x2DD));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(eax + 0x2DC));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(eax + 0x2DB));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(eax + 0x2DA));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(eax + 0x2D9));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(eax + 0x2D8));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(eax + 0x2D7));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(eax + 0x2D6));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(eax + 0x2D5));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(eax + 0x2D4));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(eax + 0x2D3));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(eax + 0x2D2));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(eax + 0x2D1));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(eax + 0x2CF));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(eax + 0x2CE));
    eax = MEM32(esp + 0x60);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x58;
    PUSH32(esp, 0x80D358);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0025F910u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_0025F910: ;
    _fa = (uint32_t)(MEM16(esp + 0x60)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esp + 0x60), 0 (16-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x6C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0025F960
 * Original: 0x0025F960 - 0x0025F995 (53 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025F960(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025F960: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x80C67C;
    MEM32(esi + 4) = 0;
    PUSH32(esp, 0x0025F975u); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_0025F975: ;
    ecx = eax;
    PUSH32(esp, 0x0025F97Cu); RECOMP_ABI_CALL(0x00026B4Eu, sub_00026B4E); /* call 0x00026B4E */

loc_0025F97C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x0025F985u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0025F985: ;
    MEM32(esi + 4) = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = 0x80D5CC;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0025F9B0
 * Original: 0x0025F9B0 - 0x0025F9DD (45 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025F9B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0025F9B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x80C67C;
    if (CMP_EQ(_fa, _fb)) goto loc_0025F9D0; /* je: equal / zero */

loc_0025F9C0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0025F9C6u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0025F9C6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = 0;

loc_0025F9D0: ;
    PUSH32(esp, 0x0025F9D5u); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_0025F9D5: ;
    ecx = eax;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0002A61D(); return; /* tail jmp 0x0002A61D */

}

/**
 * sub_0025F9F0
 * Original: 0x0025F9F0 - 0x0025FAFB (267 bytes, 74 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025F9F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0025F9F0: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = ecx;
    eax = MEM32(ebp + 8);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0025FAF3; /* jle: less or equal (signed <=) */

loc_0025FA04: ;
    PUSH32(esp, esi);
    MEM32(esp + 0x10) = ebx;
    MEM32(esp + 0xC) = 0xA;
    PUSH32(esp, edi);

loc_0025FA12: ;
    eax = MEM32(ebp + 4);
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    PUSH32(esp, 0x7F1E1C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0025FA2Au); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_0025FA2A: ;
    SET_LO16(eax, MEM16(ebp + 0x1E));
    edx = MEM32(ebp + 0x10);
    ecx = MEM32(esp + 0x20);
    MEM16(ecx + edx) = LO16(eax);
    edx = MEM32(ebp + 0x10);
    SET_LO8(eax, MEM8(ebp + 0x96));
    MEM8(edx + ebx + 0x82) = LO8(eax);
    ecx = MEM32(ebp + 0x10);
    SET_LO8(edx, MEM8(ebp + 0x6E));
    MEM8(ecx + ebx + 0x5A) = LO8(edx);
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(esp + 0x24);
    edi = eax + ecx + 0x1EC;
    ecx = 0x10;
    esi = ebp + 0x200;
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
    eax = MEM32(ebp + 0xC00);
    ecx = 1;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025FA9A; /* jne: not equal / not zero */

loc_0025FA80: ;
    edx = MEM32(ebp + 0x10);
    MEM32(edx + ebx * 8 + 0xAC) = ecx;
    eax = MEM32(ebp + 0x10);
    MEM32(eax + ebx * 8 + 0xB0) = 0;
    goto loc_0025FACF;

loc_0025FA9A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025FAB9; /* jne: not equal / not zero */

loc_0025FA9F: ;
    edx = MEM32(ebp + 0x10);
    MEM32(edx + ebx * 8 + 0xAC) = 0;
    eax = MEM32(ebp + 0x10);
    MEM32(eax + ebx * 8 + 0xB0) = ecx;
    goto loc_0025FACF;

loc_0025FAB9: ;
    ecx = MEM32(ebp + 0x10);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + ebx * 8 + 0xAC) = eax;
    edx = MEM32(ebp + 0x10);
    MEM32(edx + ebx * 8 + 0xB0) = eax;

loc_0025FACF: ;
    edx = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x14);
    eax = MEM32(ebp + 8);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x40;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x14) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_0025FA12; /* jl: less (signed <) */

loc_0025FAF1: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_0025FAF3: ;
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0025FB40
 * Original: 0x0025FB40 - 0x0025FBB6 (118 bytes, 37 insns)
 * Category: game_ui
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025FB40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025FB40: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8FA520);
    MEM32(esp) = 0xFFFFFFFFu;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025FB8B; /* je: equal / zero */

loc_0025FB55: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0025FB5Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0025FB57u); } /* indirect call */
    }

loc_0025FB5A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025FB8B; /* je: equal / zero */

loc_0025FB5E: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, 0x1E);
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, 0x80D5D0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0025FB7Eu); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_0025FB7E: ;
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0025FB8B: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, 0x7F5FC8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0025FBA9u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_0025FBA9: ;
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0025FBE0
 * Original: 0x0025FBE0 - 0x0025FC56 (118 bytes, 41 insns)
 * Category: game_ui
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025FBE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025FBE0: ;
    eax = MEM32(0x8FA520);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025FC1E; /* je: equal / zero */

loc_0025FBF1: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0025FBF6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0025FBF3u); } /* indirect call */
    }

loc_0025FBF6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025FC1E; /* je: equal / zero */

loc_0025FBFA: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esi + 4);
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, 0x1E);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, 0x80D698);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0025FC19u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_0025FC19: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0025FC3E;

loc_0025FC1E: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esi + 4);
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, 0x80D640);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0025FC3Bu); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_0025FC3B: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0025FC3E: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0025FC47u); RECOMP_ABI_CALL(0x00025794u, sub_00025794); /* call 0x00025794 */

loc_0025FC47: ;
    eax = ZX16(MEM16(esp + 8));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0025FC80
 * Original: 0x0025FC80 - 0x0025FCB2 (50 bytes, 17 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025FC80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025FC80: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0xC) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0025FCA4; /* jge: greater or equal (signed >=) */

loc_0025FC89: ;
    edx = MEM32(ecx + 0xC04);
    ecx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(edx + eax * 8);
    MEM32(ecx) = esi;
    eax = MEM32(edx + eax * 8 + 4);
    MEM32(ecx + 4) = eax;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0025FCA4: ;
    edx = MEM32(esp + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0025FCC0
 * Original: 0x0025FCC0 - 0x0025FCFC (60 bytes, 22 insns)
 * Category: game_ui
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025FCC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025FCC0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    edx = eax + 4;
    PUSH32(esp, edx);
    ecx = eax + 2;
    PUSH32(esp, ecx);
    edx = eax + 3;
    PUSH32(esp, edx);
    ecx = eax + 1;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    edx = esp + 0x20;
    PUSH32(esp, 0x80D708);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0025FCF6u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_0025FCF6: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0025FD10
 * Original: 0x0025FD10 - 0x0025FD43 (51 bytes, 18 insns)
 * Category: game_ui
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025FD10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025FD10: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x1C);
    ecx = eax + 2;
    PUSH32(esp, ecx);
    edx = eax + 3;
    PUSH32(esp, edx);
    ecx = eax + 1;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    edx = esp + 0x18;
    PUSH32(esp, 0x80D800);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0025FD3Du); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_0025FD3D: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0025FD50
 * Original: 0x0025FD50 - 0x0025FDA3 (83 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025FD50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025FD50: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0025FD9D; /* jle: less or equal (signed <=) */

loc_0025FD60: ;
    eax = MEM32(esi + 0xC04);
    eax = eax + edi * 8;
    PUSH32(esp, 0xDEADDEADu);
    ecx = eax + 4;
    PUSH32(esp, ecx);
    edx = eax + 2;
    PUSH32(esp, edx);
    ecx = eax + 3;
    PUSH32(esp, ecx);
    edx = eax + 1;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, 0x80D8B8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0025FD92u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_0025FD92: ;
    eax = MEM32(esi + 0xC);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0025FD60; /* jl: less (signed <) */

loc_0025FD9D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0025FDC0
 * Original: 0x0025FDC0 - 0x0025FEC7 (263 bytes, 83 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025FDC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025FDC0: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0025FDCBu); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_0025FDCB: ;
    ecx = eax;
    PUSH32(esp, 0x0025FDD2u); RECOMP_ABI_CALL(0x00026B4Eu, sub_00026B4E); /* call 0x00026B4E */

loc_0025FDD2: ;
    eax = MEM32(0x8FA520);
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025FE06; /* je: equal / zero */

loc_0025FDDD: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0025FDE2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0025FDDFu); } /* indirect call */
    }

loc_0025FDE2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025FE06; /* je: equal / zero */

loc_0025FDE6: ;
    PUSH32(esp, 0xDEADDEADu);
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    PUSH32(esp, 0x80DA00);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    goto loc_0025FE24;

loc_0025FE06: ;
    PUSH32(esp, 0xDEADDEADu);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80D968);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);

loc_0025FE24: ;
    PUSH32(esp, 0x0025FE29u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_0025FE29: ;
    eax = ZX16(MEM16(esp + 0x24));
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0xC0C) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0025FEA9; /* je: equal / zero */

loc_0025FE3B: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x8000);
    PUSH32(esp, 0x0025FE48u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0025FE48: ;
    PUSH32(esp, 0x8000);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    MEM32(esi + 0xC08) = eax;
    PUSH32(esp, 0x0025FE5Bu); RECOMP_ABI_CALL(0x0059E9C2u, sub_0059E9C2); /* call 0x0059E9C2 */

loc_0025FE5B: ;
    eax = MEM32(esi + 0xC0C);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0025FEA8; /* jle: less or equal (signed <=) */

loc_0025FE6A: ;
    /* nop */

loc_0025FE70: ;
    PUSH32(esp, 0xDEADDEADu);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    eax = esp + 0x18;
    PUSH32(esp, 0x7F1E1C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0025FE89u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_0025FE89: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esi + 0xC08);
    edx = MEM32(esp + 0x18);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + edx * 4) = eax;
    eax = MEM32(esi + 0xC0C);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0025FE70; /* jl: less (signed <) */

loc_0025FEA8: ;
    POP32(esp, edi);

loc_0025FEA9: ;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0025FEB3u); RECOMP_ABI_CALL(0x00025794u, sub_00025794); /* call 0x00025794 */

loc_0025FEB3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0025FEBBu); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_0025FEBB: ;
    ecx = eax;
    PUSH32(esp, 0x0025FEC2u); RECOMP_ABI_CALL(0x0002A61Du, sub_0002A61D); /* call 0x0002A61D */

loc_0025FEC2: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0025FF10
 * Original: 0x0025FF10 - 0x0025FF27 (23 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025FF10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025FF10: ;
    ecx = MEM32(ecx + 0xC08);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025FF24; /* je: equal / zero */

loc_0025FF1D: ;
    eax = MEM32(esp + 4);
    eax = MEM32(ecx + eax * 4);

loc_0025FF24: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0025FF30
 * Original: 0x0025FF30 - 0x0025FF89 (89 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025FF30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025FF30: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = 0x80C67C;
    MEM32(esi + 4) = ebx;
    PUSH32(esp, 0x0025FF44u); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_0025FF44: ;
    ecx = eax;
    PUSH32(esp, 0x0025FF4Bu); RECOMP_ABI_CALL(0x00026B4Eu, sub_00026B4E); /* call 0x00026B4E */

loc_0025FF4B: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x0025FF53u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0025FF53: ;
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = ebx;
    MEM32(esi + 0xC) = ebx;
    MEM32(esi) = 0x80DA94;
    MEM32(esi + 0x18) = ebx;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEM32(esi + 0x14) = 1;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xC04) = ebx;
    MEM32(esi + 0xC08) = ebx;
    MEM32(esi + 0xC0C) = ebx;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0025FFA0
 * Original: 0x0025FFA0 - 0x0025FFF9 (89 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025FFA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0025FFA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC04);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x80DA94;
    if (CMP_EQ(_fa, _fb)) goto loc_0025FFBC; /* je: equal / zero */

loc_0025FFB3: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0025FFB9u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0025FFB9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0025FFBC: ;
    eax = MEM32(esi + 0xC08);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025FFCF; /* je: equal / zero */

loc_0025FFC6: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0025FFCCu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0025FFCC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0025FFCF: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x80C67C;
    if (CMP_EQ(_fa, _fb)) goto loc_0025FFEC; /* je: equal / zero */

loc_0025FFDC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0025FFE2u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0025FFE2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = 0;

loc_0025FFEC: ;
    PUSH32(esp, 0x0025FFF1u); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_0025FFF1: ;
    ecx = eax;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0002A61D(); return; /* tail jmp 0x0002A61D */

}

/**
 * sub_00260010
 * Original: 0x00260010 - 0x00260086 (118 bytes, 38 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00260010(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00260010: ;
    eax = MEM32(0x8FA520);
    ecx = MEM32(eax);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026004B; /* je: equal / zero */

loc_0026001E: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00260023u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00260020u); } /* indirect call */
    }

loc_00260023: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026004B; /* je: equal / zero */

loc_00260027: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x14);
    edx = ZX16(MEM16(eax + ecx * 2 + 0xA));
    eax = MEM32(esp + 0x10);
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x80DAF0);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    goto loc_0026006D;

loc_0026004B: ;
    edx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x14);
    ecx = ZX16(MEM16(edx + eax * 2 + 0xA));
    edx = MEM32(esp + 0x10);
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x80DA98);
    eax = esp + 0x10;
    PUSH32(esp, eax);

loc_0026006D: ;
    PUSH32(esp, 0x00260072u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_00260072: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM16(esp)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esp), 0 (16-bit) */
    SET_LO8(eax, 1);
    if (CMP_NE(_fa, _fb)) goto loc_00260080; /* jne: not equal / not zero */

loc_0026007E: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_00260080: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00260020
 * Original: 0x00260020 - 0x00260086 (102 bytes, 32 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00260020(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00260020: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00260023u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00260020u); } /* indirect call */
    }

loc_00260023: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026004B; /* je: equal / zero */

loc_00260027: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x14);
    edx = ZX16(MEM16(eax + ecx * 2 + 0xA));
    eax = MEM32(esp + 0x10);
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x80DAF0);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    goto loc_0026006D;

loc_0026004B: ;
    edx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x14);
    ecx = ZX16(MEM16(edx + eax * 2 + 0xA));
    edx = MEM32(esp + 0x10);
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x80DA98);
    eax = esp + 0x10;
    PUSH32(esp, eax);

loc_0026006D: ;
    PUSH32(esp, 0x00260072u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_00260072: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM16(esp)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esp), 0 (16-bit) */
    SET_LO8(eax, 1);
    if (CMP_NE(_fa, _fb)) goto loc_00260080; /* jne: not equal / not zero */

loc_0026007E: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_00260080: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00260025
 * Original: 0x00260025 - 0x00260086 (97 bytes, 30 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00260025(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00260025: ;
    if (_flags /* je: equal / zero */) goto loc_0026004B;

loc_00260027: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x14);
    edx = ZX16(MEM16(eax + ecx * 2 + 0xA));
    eax = MEM32(esp + 0x10);
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x80DAF0);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    goto loc_0026006D;

loc_0026004B: ;
    edx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x14);
    ecx = ZX16(MEM16(edx + eax * 2 + 0xA));
    edx = MEM32(esp + 0x10);
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x80DA98);
    eax = esp + 0x10;
    PUSH32(esp, eax);

loc_0026006D: ;
    PUSH32(esp, 0x00260072u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_00260072: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM16(esp)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esp), 0 (16-bit) */
    SET_LO8(eax, 1);
    if (CMP_NE(_fa, _fb)) goto loc_00260080; /* jne: not equal / not zero */

loc_0026007E: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_00260080: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00260027
 * Original: 0x00260027 - 0x00260086 (95 bytes, 29 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00260027(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00260027: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x14);
    edx = ZX16(MEM16(eax + ecx * 2 + 0xA));
    eax = MEM32(esp + 0x10);
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x80DAF0);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    goto loc_0026006D;

    edx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x14);
    ecx = ZX16(MEM16(edx + eax * 2 + 0xA));
    edx = MEM32(esp + 0x10);
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x80DA98);
    eax = esp + 0x10;
    PUSH32(esp, eax);

loc_0026006D: ;
    PUSH32(esp, 0x00260072u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_00260072: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM16(esp)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esp), 0 (16-bit) */
    SET_LO8(eax, 1);
    if (CMP_NE(_fa, _fb)) goto loc_00260080; /* jne: not equal / not zero */

loc_0026007E: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_00260080: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_002600B0
 * Original: 0x002600B0 - 0x0026010F (95 bytes, 32 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002600B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002600B0: ;
    eax = MEM32(0x8FA520);
    ecx = MEM32(eax);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002600DD; /* je: equal / zero */

loc_002600BE: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x002600C3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002600C0u); } /* indirect call */
    }

loc_002600C3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002600DD; /* je: equal / zero */

loc_002600C7: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x80DAF0);
    goto loc_002600F1;

loc_002600DD: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x80DA98);

loc_002600F1: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 0x002600FBu); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_002600FB: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM16(esp)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esp), 0 (16-bit) */
    SET_LO8(eax, 1);
    if (CMP_NE(_fa, _fb)) goto loc_00260109; /* jne: not equal / not zero */

loc_00260107: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_00260109: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00260130
 * Original: 0x00260130 - 0x00260135 (5 bytes, 2 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00260130(void)
{

loc_00260130: ;
    SET_LO8(eax, 1);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00260140
 * Original: 0x00260140 - 0x00260171 (49 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00260140(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00260140: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, 0x80DB44);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0026015Cu); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_0026015C: ;
    ecx = MEM32(esp + 0x14);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO8(eax, 1);
    if (CMP_EQ(_fa, _fb)) goto loc_0026016B; /* je: equal / zero */

loc_00260169: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_0026016B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00260180
 * Original: 0x00260180 - 0x002601AE (46 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00260180(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00260180: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, 0x80DB7C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0026019Cu); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_0026019C: ;
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
 * sub_002601C0
 * Original: 0x002601C0 - 0x002603DE (542 bytes, 205 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002601C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002601C0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    SET_LO8(ecx, MEM8(ebp + 8));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    SET_LO8(eax, 1);
    if (CMP_LE(_fas, _fbs)) goto loc_002603D7; /* jle: less or equal (signed <=) */

loc_002601D5: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = 0xFFFFFF7Eu;
    eax = ebp + 0xB0;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = ebp + 0x82;
    ebx = ebp + 0xA;
    esi = ebp + 0x221;
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x10) = ecx;
    goto loc_00260202;

loc_002601FE: ;
    eax = MEM32(esp + 0x28);

loc_00260202: ;
    ecx = MEM32(eax + -4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00260213; /* jne: not equal / not zero */

loc_0026020A: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00260213; /* jne: not equal / not zero */

loc_0026020F: ;
    eax = ecx;
    goto loc_00260225;

loc_00260213: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00260223; /* jne: not equal / not zero */

loc_00260217: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00260223; /* jne: not equal / not zero */

loc_0026021C: ;
    eax = 2;
    goto loc_00260225;

loc_00260223: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00260225: ;
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + 1));
    PUSH32(esp, eax);
    ecx = ZX8(MEM8(esi));
    PUSH32(esp, ecx);
    edx = ZX8(MEM8(esi + -1));
    PUSH32(esp, edx);
    eax = ZX8(MEM8(esi + -2));
    PUSH32(esp, eax);
    ecx = ZX8(MEM8(esi + -3));
    PUSH32(esp, ecx);
    edx = ZX8(MEM8(esi + 6));
    PUSH32(esp, edx);
    eax = ZX8(MEM8(esi + 5));
    PUSH32(esp, eax);
    ecx = ZX8(MEM8(esi + 4));
    PUSH32(esp, ecx);
    edx = ZX8(MEM8(esi + 3));
    PUSH32(esp, edx);
    eax = ZX8(MEM8(esi + 2));
    PUSH32(esp, eax);
    ecx = ZX8(MEM8(esi + 8));
    PUSH32(esp, ecx);
    edx = ZX8(MEM8(esi + 7));
    PUSH32(esp, edx);
    eax = ZX8(MEM8(esi + 0xA));
    ecx = ZX8(MEM8(esi + 9));
    PUSH32(esp, eax);
    edx = ZX8(MEM8(esi + -4));
    eax = ZX8(MEM8(esi + -5));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(esi + -6));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(esi + -7));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + -8));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(esi + -9));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(esi + -10));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + -11));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(esi + -12));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(esi + -13));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + -14));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(esi + -15));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(esi + -16));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + -17));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(esi + -18));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(esi + -19));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + -20));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(esi + -21));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(esi + -22));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + -23));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(esi + -24));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(esi + -25));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + -26));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(esi + -27));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(esi + -28));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + -29));
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = ZX8(MEM8(esi + -30));
    PUSH32(esp, ecx);
    edx = ZX8(MEM8(esi + -31));
    PUSH32(esp, edx);
    eax = ZX8(MEM8(esi + -32));
    ecx = ZX8(MEM8(esi + -33));
    PUSH32(esp, eax);
    edx = ZX8(MEM8(esi + -34));
    PUSH32(esp, ecx);
    eax = ZX8(MEM8(esi + -35));
    ecx = ZX8(MEM8(esi + -36));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(esi + -37));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + -38));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(esi + -39));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(esi + -40));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + -41));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(esi + -42));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(esi + -43));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + -44));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(esi + -45));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(esi + -46));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + -47));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(esi + -48));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(esi + -49));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + -50));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(esi + -51));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(esi + -52));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + -53));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(edi + -40));
    PUSH32(esp, edx);
    edx = (uint32_t)(int32_t)SMEM8(edi);
    PUSH32(esp, eax);
    eax = ZX16(MEM16(ebx));
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x130);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x12C;
    PUSH32(esp, 0x80DBB8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00260391u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_00260391: ;
    eax = MEM32(esp + 0x138);
    _fb = (uint32_t)(0x120) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x120;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002603D2; /* jne: not equal / not zero */

loc_002603A2: ;
    edx = MEM32(esp + 0x28);
    eax = MEM32(esp + 0x10);
    ecx = (uint32_t)(int32_t)SMEM8(ebp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x40;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x28) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_002601FE; /* jl: less (signed <) */

loc_002603C6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_002603D2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);

loc_002603D7: ;
    POP32(esp, ebp);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00260470
 * Original: 0x00260470 - 0x0026068E (542 bytes, 205 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00260470(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00260470: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    SET_LO8(ecx, MEM8(ebp + 8));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    SET_LO8(eax, 1);
    if (CMP_LE(_fas, _fbs)) goto loc_00260687; /* jle: less or equal (signed <=) */

loc_00260485: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = 0xFFFFFF7Eu;
    eax = ebp + 0xB0;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = ebp + 0x82;
    ebx = ebp + 0xA;
    esi = ebp + 0x221;
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x10) = ecx;
    goto loc_002604B2;

loc_002604AE: ;
    eax = MEM32(esp + 0x28);

loc_002604B2: ;
    ecx = MEM32(eax + -4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002604C3; /* jne: not equal / not zero */

loc_002604BA: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002604C3; /* jne: not equal / not zero */

loc_002604BF: ;
    eax = ecx;
    goto loc_002604D5;

loc_002604C3: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002604D3; /* jne: not equal / not zero */

loc_002604C7: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002604D3; /* jne: not equal / not zero */

loc_002604CC: ;
    eax = 2;
    goto loc_002604D5;

loc_002604D3: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002604D5: ;
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + 1));
    PUSH32(esp, eax);
    ecx = ZX8(MEM8(esi));
    PUSH32(esp, ecx);
    edx = ZX8(MEM8(esi + -1));
    PUSH32(esp, edx);
    eax = ZX8(MEM8(esi + -2));
    PUSH32(esp, eax);
    ecx = ZX8(MEM8(esi + -3));
    PUSH32(esp, ecx);
    edx = ZX8(MEM8(esi + 6));
    PUSH32(esp, edx);
    eax = ZX8(MEM8(esi + 5));
    PUSH32(esp, eax);
    ecx = ZX8(MEM8(esi + 4));
    PUSH32(esp, ecx);
    edx = ZX8(MEM8(esi + 3));
    PUSH32(esp, edx);
    eax = ZX8(MEM8(esi + 2));
    PUSH32(esp, eax);
    ecx = ZX8(MEM8(esi + 8));
    PUSH32(esp, ecx);
    edx = ZX8(MEM8(esi + 7));
    PUSH32(esp, edx);
    eax = ZX8(MEM8(esi + 0xA));
    ecx = ZX8(MEM8(esi + 9));
    PUSH32(esp, eax);
    edx = ZX8(MEM8(esi + -4));
    eax = ZX8(MEM8(esi + -5));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(esi + -6));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(esi + -7));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + -8));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(esi + -9));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(esi + -10));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + -11));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(esi + -12));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(esi + -13));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + -14));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(esi + -15));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(esi + -16));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + -17));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(esi + -18));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(esi + -19));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + -20));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(esi + -21));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(esi + -22));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + -23));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(esi + -24));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(esi + -25));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + -26));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(esi + -27));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(esi + -28));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + -29));
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = ZX8(MEM8(esi + -30));
    PUSH32(esp, ecx);
    edx = ZX8(MEM8(esi + -31));
    PUSH32(esp, edx);
    eax = ZX8(MEM8(esi + -32));
    ecx = ZX8(MEM8(esi + -33));
    PUSH32(esp, eax);
    edx = ZX8(MEM8(esi + -34));
    PUSH32(esp, ecx);
    eax = ZX8(MEM8(esi + -35));
    ecx = ZX8(MEM8(esi + -36));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(esi + -37));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + -38));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(esi + -39));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(esi + -40));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + -41));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(esi + -42));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(esi + -43));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + -44));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(esi + -45));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(esi + -46));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + -47));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(esi + -48));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(esi + -49));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + -50));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(esi + -51));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(esi + -52));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + -53));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(edi + -40));
    PUSH32(esp, edx);
    edx = (uint32_t)(int32_t)SMEM8(edi);
    PUSH32(esp, eax);
    eax = ZX16(MEM16(ebx));
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x130);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x12C;
    PUSH32(esp, 0x80E398);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00260641u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_00260641: ;
    eax = MEM32(esp + 0x138);
    _fb = (uint32_t)(0x120) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x120;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00260682; /* jne: not equal / not zero */

loc_00260652: ;
    edx = MEM32(esp + 0x28);
    eax = MEM32(esp + 0x10);
    ecx = (uint32_t)(int32_t)SMEM8(ebp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x40;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x28) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_002604AE; /* jl: less (signed <) */

loc_00260676: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00260682: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);

loc_00260687: ;
    POP32(esp, ebp);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00260720
 * Original: 0x00260720 - 0x0026076A (74 bytes, 29 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00260720(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00260720: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, edi);
    eax = esp + 0x10;
    PUSH32(esp, 0x80DB44);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x00260740u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_00260740: ;
    eax = MEM32(esp + 0x1C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00260755; /* je: equal / zero */

loc_0026074B: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00260755: ;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00260762u); RECOMP_ABI_CALL(0x0001D4D1u, sub_0001D4D1); /* call 0x0001D4D1 */

loc_00260762: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00260780
 * Original: 0x00260780 - 0x002607CA (74 bytes, 29 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00260780(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00260780: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, edi);
    eax = esp + 0x10;
    PUSH32(esp, 0x80DB7C);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x002607A0u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_002607A0: ;
    eax = MEM32(esp + 0x1C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002607B5; /* je: equal / zero */

loc_002607AB: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_002607B5: ;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x002607C2u); RECOMP_ABI_CALL(0x0002B199u, sub_0002B199); /* call 0x0002B199 */

loc_002607C2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002607E0
 * Original: 0x002607E0 - 0x00260827 (71 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002607E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002607E0: ;
    eax = MEM32(esp + 4);
    ecx = ZX8(MEM8(eax));
    edx = MEM32(eax + 4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, ecx);
    ecx = (uint32_t)(int32_t)SMEM8(eax + 3);
    PUSH32(esp, edx);
    edx = (uint32_t)(int32_t)SMEM8(eax + 2);
    eax = (uint32_t)(int32_t)SMEM8(eax + 1);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, 0x80EB78);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00260812u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_00260812: ;
    ecx = MEM32(esp + 0x24);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO8(eax, 1);
    if (CMP_EQ(_fa, _fb)) goto loc_00260821; /* je: equal / zero */

loc_0026081F: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_00260821: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00260840
 * Original: 0x00260840 - 0x00260870 (48 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00260840(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00260840: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, 0x80EC1C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0026085Cu); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_0026085C: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM16(esp)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esp), 0 (16-bit) */
    SET_LO8(eax, 1);
    if (CMP_NE(_fa, _fb)) goto loc_0026086A; /* jne: not equal / not zero */

loc_00260868: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_0026086A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00260880
 * Original: 0x00260880 - 0x002608C1 (65 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00260880(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00260880: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x80C67C;
    MEM32(esi + 4) = 0;
    PUSH32(esp, 0x00260895u); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_00260895: ;
    ecx = eax;
    PUSH32(esp, 0x0026089Cu); RECOMP_ABI_CALL(0x00026B4Eu, sub_00026B4E); /* call 0x00026B4E */

loc_0026089C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x002608A5u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_002608A5: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = eax;
    MEM32(esi) = 0x80EC54;
    PUSH32(esp, 0x002608B6u); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_002608B6: ;
    ecx = eax;
    PUSH32(esp, 0x002608BDu); RECOMP_ABI_CALL(0x00026B4Eu, sub_00026B4E); /* call 0x00026B4E */

loc_002608BD: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002608E0
 * Original: 0x002608E0 - 0x0026091F (63 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002608E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002608E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x80EC54;
    PUSH32(esp, 0x002608EEu); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_002608EE: ;
    ecx = eax;
    PUSH32(esp, 0x002608F5u); RECOMP_ABI_CALL(0x0002A61Du, sub_0002A61D); /* call 0x0002A61D */

loc_002608F5: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x80C67C;
    if (CMP_EQ(_fa, _fb)) goto loc_00260912; /* je: equal / zero */

loc_00260902: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00260908u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00260908: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = 0;

loc_00260912: ;
    PUSH32(esp, 0x00260917u); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_00260917: ;
    ecx = eax;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0002A61D(); return; /* tail jmp 0x0002A61D */

}

/**
 * sub_00260930
 * Original: 0x00260930 - 0x002609F8 (200 bytes, 58 insns)
 * Category: game_ui
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00260930(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00260930: ;
    eax = MEM32(0x8FA520);
    ecx = MEM32(eax);
    _fb = (uint32_t)(0x14C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00260962; /* je: equal / zero */

loc_00260941: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00260946u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00260943u); } /* indirect call */
    }

loc_00260946: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00260962; /* je: equal / zero */

loc_0026094A: ;
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, 0);
    eax = esp + 0x50;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80ECB0);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    goto loc_00260978;

loc_00260962: ;
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, 0);
    edx = esp + 0x50;
    PUSH32(esp, edx);
    PUSH32(esp, 0x80EC58);
    eax = esp + 0x10;
    PUSH32(esp, eax);

loc_00260978: ;
    PUSH32(esp, 0x0026097Du); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_0026097D: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = esp + 0x4C;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00260991u); RECOMP_ABI_CALL(0x0002F352u, sub_0002F352); /* call 0x0002F352 */

loc_00260991: ;
    ecx = MEM32(esp + 0x15C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    edi = edi;

loc_002609A0: ;
    edx = MEM32(eax + 0x7FEB14);
    esi = MEM32(esp + eax + 0x10);
    MEM32(ecx + edx * 4 + 4) = esi;
    edx = MEM32(eax + 0x7FEB18);
    esi = MEM32(esp + eax + 0x14);
    MEM32(ecx + edx * 4 + 4) = esi;
    edx = MEM32(eax + 0x7FEB1C);
    esi = MEM32(esp + eax + 0x18);
    MEM32(ecx + edx * 4 + 4) = esi;
    edx = MEM32(eax + 0x7FEB20);
    esi = MEM32(esp + eax + 0x1C);
    MEM32(ecx + edx * 4 + 4) = esi;
    edx = MEM32(eax + 0x7FEB24);
    esi = MEM32(esp + eax + 0x20);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3C (32-bit) */
    MEM32(ecx + edx * 4 + 4) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_002609A0; /* jl: less (signed <) */

loc_002609EE: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x14C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00260A30
 * Original: 0x00260A30 - 0x00260AA5 (117 bytes, 31 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00260A30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00260A30: ;
    eax = esp + -60;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00260A3Du); RECOMP_ABI_CALL(0x0001FE93u, sub_0001FE93); /* call 0x0001FE93 */

loc_00260A3D: ;
    ecx = MEM32(esp + 0x44);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    goto loc_00260A50;

    /* nop */

loc_00260A50: ;
    edx = MEM32(eax + 0x7FEB14);
    esi = MEM32(esp + eax + 4);
    MEM32(ecx + edx * 4 + 4) = esi;
    edx = MEM32(eax + 0x7FEB18);
    esi = MEM32(esp + eax + 8);
    MEM32(ecx + edx * 4 + 4) = esi;
    edx = MEM32(eax + 0x7FEB1C);
    esi = MEM32(esp + eax + 0xC);
    MEM32(ecx + edx * 4 + 4) = esi;
    edx = MEM32(eax + 0x7FEB20);
    esi = MEM32(esp + eax + 0x10);
    MEM32(ecx + edx * 4 + 4) = esi;
    edx = MEM32(eax + 0x7FEB24);
    esi = MEM32(esp + eax + 0x14);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3C (32-bit) */
    MEM32(ecx + edx * 4 + 4) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_00260A50; /* jl: less (signed <) */

loc_00260A9E: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00260AD0
 * Original: 0x00260AD0 - 0x00260B11 (65 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00260AD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00260AD0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x80C67C;
    MEM32(esi + 4) = 0;
    PUSH32(esp, 0x00260AE5u); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_00260AE5: ;
    ecx = eax;
    PUSH32(esp, 0x00260AECu); RECOMP_ABI_CALL(0x00026B4Eu, sub_00026B4E); /* call 0x00026B4E */

loc_00260AEC: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x00260AF5u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00260AF5: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = eax;
    MEM32(esi) = 0x80ED04;
    PUSH32(esp, 0x00260B06u); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_00260B06: ;
    ecx = eax;
    PUSH32(esp, 0x00260B0Du); RECOMP_ABI_CALL(0x00026B4Eu, sub_00026B4E); /* call 0x00026B4E */

loc_00260B0D: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00260B30
 * Original: 0x00260B30 - 0x00260B6F (63 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00260B30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00260B30: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x80ED04;
    PUSH32(esp, 0x00260B3Eu); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_00260B3E: ;
    ecx = eax;
    PUSH32(esp, 0x00260B45u); RECOMP_ABI_CALL(0x0002A61Du, sub_0002A61D); /* call 0x0002A61D */

loc_00260B45: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x80C67C;
    if (CMP_EQ(_fa, _fb)) goto loc_00260B62; /* je: equal / zero */

loc_00260B52: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00260B58u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00260B58: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = 0;

loc_00260B62: ;
    PUSH32(esp, 0x00260B67u); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_00260B67: ;
    ecx = eax;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0002A61D(); return; /* tail jmp 0x0002A61D */

}

/**
 * sub_00260B80
 * Original: 0x00260B80 - 0x00260C7E (254 bytes, 72 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00260B80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00260B80: ;
    ecx = MEM32(esp + 4);
    _fb = (uint32_t)(0x14C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00260B90: ;
    edx = MEM32(eax + 0x7FEB14);
    edx = MEM32(ecx + edx * 4 + 4);
    MEM32(esp + eax + 0xC) = edx;
    edx = MEM32(eax + 0x7FEB18);
    edx = MEM32(ecx + edx * 4 + 4);
    MEM32(esp + eax + 0x10) = edx;
    edx = MEM32(eax + 0x7FEB1C);
    edx = MEM32(ecx + edx * 4 + 4);
    MEM32(esp + eax + 0x14) = edx;
    edx = MEM32(eax + 0x7FEB20);
    edx = MEM32(ecx + edx * 4 + 4);
    MEM32(esp + eax + 0x18) = edx;
    edx = MEM32(eax + 0x7FEB24);
    edx = MEM32(ecx + edx * 4 + 4);
    MEM32(esp + eax + 0x1C) = edx;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3C (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00260B90; /* jl: less (signed <) */

loc_00260BDE: ;
    eax = esp + 0x48;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00260BEFu); RECOMP_ABI_CALL(0x0001A051u, sub_0001A051); /* call 0x0001A051 */

loc_00260BEF: ;
    edx = MEM32(0x8FA520);
    ecx = MEM32(edx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00260C55; /* je: equal / zero */

loc_00260BFE: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x00260C03u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00260C00u); } /* indirect call */
    }

loc_00260C03: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00260C55; /* je: equal / zero */

loc_00260C07: ;
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, 0);
    ecx = esp + 0x50;
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, 0x80EDA8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00260C22u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_00260C22: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM16(esp)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esp), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00260C73; /* jne: not equal / not zero */

loc_00260C2C: ;
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, 0);
    eax = esp + 0x50;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, 0x80ED58);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00260C47u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_00260C47: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, 1);
    _fb = (uint32_t)(0x14C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00260C55: ;
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, 0);
    edx = esp + 0x50;
    PUSH32(esp, edx);
    eax = esp + 0xC;
    PUSH32(esp, 0x80ED08);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00260C70u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_00260C70: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00260C73: ;
    SET_LO8(eax, 1);
    _fb = (uint32_t)(0x14C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00260CC0
 * Original: 0x00260CC0 - 0x00260D01 (65 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00260CC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00260CC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x80C67C;
    MEM32(esi + 4) = 0;
    PUSH32(esp, 0x00260CD5u); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_00260CD5: ;
    ecx = eax;
    PUSH32(esp, 0x00260CDCu); RECOMP_ABI_CALL(0x00026B4Eu, sub_00026B4E); /* call 0x00026B4E */

loc_00260CDC: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x00260CE5u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00260CE5: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = eax;
    MEM32(esi) = 0x80EDF4;
    PUSH32(esp, 0x00260CF6u); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_00260CF6: ;
    ecx = eax;
    PUSH32(esp, 0x00260CFDu); RECOMP_ABI_CALL(0x00026B4Eu, sub_00026B4E); /* call 0x00026B4E */

loc_00260CFD: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00260D20
 * Original: 0x00260D20 - 0x00260D5F (63 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00260D20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00260D20: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x80EDF4;
    PUSH32(esp, 0x00260D2Eu); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_00260D2E: ;
    ecx = eax;
    PUSH32(esp, 0x00260D35u); RECOMP_ABI_CALL(0x0002A61Du, sub_0002A61D); /* call 0x0002A61D */

loc_00260D35: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x80C67C;
    if (CMP_EQ(_fa, _fb)) goto loc_00260D52; /* je: equal / zero */

loc_00260D42: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00260D48u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00260D48: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = 0;

loc_00260D52: ;
    PUSH32(esp, 0x00260D57u); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_00260D57: ;
    ecx = eax;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0002A61D(); return; /* tail jmp 0x0002A61D */

}

/**
 * sub_00260D70
 * Original: 0x00260D70 - 0x00260DBA (74 bytes, 26 insns)
 * Category: game_ui
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00260D70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00260D70: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00260D80;

    /* nop */

loc_00260D80: ;
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, esi);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, 0x80EDF8);
    PUSH32(esp, ecx);
    MEM32(esp + 0x2C) = 0;
    PUSH32(esp, 0x00260DA2u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_00260DA2: ;
    edx = MEM32(esp + 0x2C);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + esi * 4) = edx;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00260D80; /* jl: less (signed <) */

loc_00260DB2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00260DD0
 * Original: 0x00260DD0 - 0x00260E05 (53 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00260DD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00260DD0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x80C67C;
    MEM32(esi + 4) = 0;
    PUSH32(esp, 0x00260DE5u); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_00260DE5: ;
    ecx = eax;
    PUSH32(esp, 0x00260DECu); RECOMP_ABI_CALL(0x00026B4Eu, sub_00026B4E); /* call 0x00026B4E */

loc_00260DEC: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x00260DF5u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00260DF5: ;
    MEM32(esi + 4) = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = 0x80EE4C;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00260E20
 * Original: 0x00260E20 - 0x00260E4D (45 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00260E20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00260E20: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x80C67C;
    if (CMP_EQ(_fa, _fb)) goto loc_00260E40; /* je: equal / zero */

loc_00260E30: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00260E36u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00260E36: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = 0;

loc_00260E40: ;
    PUSH32(esp, 0x00260E45u); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_00260E45: ;
    ecx = eax;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0002A61D(); return; /* tail jmp 0x0002A61D */

}

/**
 * sub_00260E60
 * Original: 0x00260E60 - 0x00260E84 (36 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00260E60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00260E60: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, 0x80EE50);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00260E7Cu); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_00260E7C: ;
    SET_LO8(eax, 1);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00260E90
 * Original: 0x00260E90 - 0x00260ECD (61 bytes, 23 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00260E90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00260E90: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, 0x80EE88);
    PUSH32(esp, edx);
    SET_LO8(ebx, 1);
    PUSH32(esp, 0x00260EB4u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_00260EB4: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00260EC4; /* je: equal / zero */

loc_00260EBB: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00260EC4: ;
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00260EE0
 * Original: 0x00260EE0 - 0x00260F07 (39 bytes, 12 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00260EE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00260EE0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, 0x80EEE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00260F01u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_00260F01: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00260F10
 * Original: 0x00260F10 - 0x00260F45 (53 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00260F10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00260F10: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x80C67C;
    MEM32(esi + 4) = 0;
    PUSH32(esp, 0x00260F25u); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_00260F25: ;
    ecx = eax;
    PUSH32(esp, 0x00260F2Cu); RECOMP_ABI_CALL(0x00026B4Eu, sub_00026B4E); /* call 0x00026B4E */

loc_00260F2C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x00260F35u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00260F35: ;
    MEM32(esi + 4) = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = 0x80EF34;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00260F60
 * Original: 0x00260F60 - 0x00260F8D (45 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00260F60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00260F60: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x80C67C;
    if (CMP_EQ(_fa, _fb)) goto loc_00260F80; /* je: equal / zero */

loc_00260F70: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00260F76u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00260F76: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = 0;

loc_00260F80: ;
    PUSH32(esp, 0x00260F85u); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_00260F85: ;
    ecx = eax;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0002A61D(); return; /* tail jmp 0x0002A61D */

}

/**
 * sub_00260FA0
 * Original: 0x00260FA0 - 0x00260FA9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00260FA0(void)
{

loc_00260FA0: ;
    eax = ecx;
    MEM32(eax) = 0x8059E4;
    esp += 4; return; /* ret */

}

/**
 * sub_00260FB0
 * Original: 0x00260FB0 - 0x00260FCB (27 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00260FB0(void)
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

loc_00260FB0: ;
    PUSH32(esp, ecx);
    eax = MEM32(ecx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00260FC3; /* jne: not equal / not zero */

loc_00260FBB: ;
    fp_push(MEMF(0x7A9980)); /* fld float */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00260FC3: ;
    fp_push((double)SMEM32(ecx + 0x18)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() / (double)SMEM32(esp)); /* fidiv dword ptr [esp] */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00260FE0
 * Original: 0x00260FE0 - 0x00260FF5 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00260FE0(void)
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

loc_00260FE0: ;
    SET_LO8(eax, MEM8(ecx + 0x18));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00260FEE; /* je: equal / zero */

loc_00260FE7: ;
    fp_push(MEMF(0x7A9980)); /* fld float */
    esp += 4; return; /* ret */

loc_00260FEE: ;
    fp_push(MEMF(0x7AA840)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00261000
 * Original: 0x00261000 - 0x00261019 (25 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00261000(void)
{

loc_00261000: ;
    eax = ecx;
    SET_LO8(ecx, MEM8(esp + 4));
    MEM32(eax) = 0x80EF38;
    MEM32(eax + 4) = 0;
    MEM8(eax + 0x38) = LO8(ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00261020
 * Original: 0x00261020 - 0x0026104C (44 bytes, 13 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00261020(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00261020: ;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00261049; /* jge: greater or equal (signed >=) */

loc_00261028: ;
    edx = MEM32(esp + 4);
    MEM32(ecx + eax * 4 + 8) = edx;
    eax = MEM32(ecx + 4);
    edx = MEM32(esp + 8);
    MEM32(ecx + eax * 8 + 0x18) = edx;
    eax = MEM32(ecx + 4);
    edx = MEM32(esp + 0xC);
    MEM32(ecx + eax * 8 + 0x1C) = edx;
    MEM32(ecx + 4) = MEM32(ecx + 4) + 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00261049: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00261060
 * Original: 0x00261060 - 0x002610B8 (88 bytes, 40 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00261060(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00261060: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002610B0; /* jle: less or equal (signed <=) */

loc_0026106D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ebx = esi + 0x18;
    edi = esi + 8;

loc_00261075: ;
    PUSH32(esp, 0x0026107Au); RECOMP_ABI_CALL(0x0001EACAu, sub_0001EACA); /* call 0x0001EACA */

loc_0026107A: ;
    edx = MEM32(eax);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(esi + 0x38));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(edi);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0026108Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00261087u); } /* indirect call */
    }

loc_0026108A: ;
    PUSH32(esp, 8);
    PUSH32(esp, ebx);
    ecx = eax;
    PUSH32(esp, 0x00261094u); RECOMP_ABI_CALL(0x0002307Fu, sub_0002307F); /* call 0x0002307F */

loc_00261094: ;
    eax = MEM32(esi + 4);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00261075; /* jl: less (signed <) */

loc_002610A2: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    MEM32(esi + 4) = 0;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_002610B0: ;
    MEM32(esi + 4) = ebp;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002610D0
 * Original: 0x002610D0 - 0x002610E5 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002610D0(void)
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

loc_002610D0: ;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002610DE; /* je: equal / zero */

loc_002610D7: ;
    fp_push(MEMF(0x7AA840)); /* fld float */
    esp += 4; return; /* ret */

loc_002610DE: ;
    fp_push(MEMF(0x7A9980)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002610F0
 * Original: 0x002610F0 - 0x00261102 (18 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002610F0(void)
{

loc_002610F0: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax) = 0x80EF48;
    MEM32(eax + 4) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00261110
 * Original: 0x00261110 - 0x0026112D (29 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00261110(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00261110: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00261129; /* je: equal / zero */

loc_0026111A: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xF0); PUSH32(esp, 0x00261122u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0026111Cu); } /* indirect call */
    }

loc_00261122: ;
    MEM32(esi + 4) = 0;

loc_00261129: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00261140
 * Original: 0x00261140 - 0x00261155 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00261140(void)
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

loc_00261140: ;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026114E; /* je: equal / zero */

loc_00261147: ;
    fp_push(MEMF(0x7AA840)); /* fld float */
    esp += 4; return; /* ret */

loc_0026114E: ;
    fp_push(MEMF(0x7A9980)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00261160
 * Original: 0x00261160 - 0x00261176 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00261160(void)
{

loc_00261160: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax) = 0x80EF58;
    MEM8(eax + 4) = 0;
    MEM32(eax + 8) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00261180
 * Original: 0x00261180 - 0x002611B1 (49 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00261180(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00261180: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002611AD; /* jne: not equal / not zero */

loc_0026118A: ;
    PUSH32(esp, 0x0026118Fu); RECOMP_ABI_CALL(0x00025E60u, sub_00025E60); /* call 0x00025E60 */

loc_0026118F: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00261198u); RECOMP_ABI_CALL(0x000181A7u, sub_000181A7); /* call 0x000181A7 */

loc_00261198: ;
    ecx = eax;
    PUSH32(esp, 0x0026119Fu); RECOMP_ABI_CALL(0x0001FCA4u, sub_0001FCA4); /* call 0x0001FCA4 */

loc_0026119F: ;
    PUSH32(esp, 0x002611A4u); RECOMP_ABI_CALL(0x00021437u, sub_00021437); /* call 0x00021437 */

loc_002611A4: ;
    PUSH32(esp, 0x002611A9u); RECOMP_ABI_CALL(0x0002F820u, sub_0002F820); /* call 0x0002F820 */

loc_002611A9: ;
    MEM8(esi + 4) = 1;

loc_002611AD: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002611C0
 * Original: 0x002611C0 - 0x002611D5 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002611C0(void)
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

loc_002611C0: ;
    SET_LO8(eax, MEM8(ecx + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002611CE; /* jne: not equal / not zero */

loc_002611C7: ;
    fp_push(MEMF(0x7AA840)); /* fld float */
    esp += 4; return; /* ret */

loc_002611CE: ;
    fp_push(MEMF(0x7A9980)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002611E0
 * Original: 0x002611E0 - 0x002611FB (27 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002611E0(void)
{

loc_002611E0: ;
    edx = MEM32(esp + 8);
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax) = 0x80EF68;
    MEM32(eax + 4) = ecx;
    ecx = MEM32(edx);
    MEM32(eax + 8) = ecx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00261210
 * Original: 0x00261210 - 0x0026121B (11 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00261210(void)
{

loc_00261210: ;
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(eax) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00261220
 * Original: 0x00261220 - 0x00261227 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00261220(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00261220: ;
    fp_push(MEMF(0x7A9980)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00261230
 * Original: 0x00261230 - 0x00261249 (25 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00261230(void)
{

loc_00261230: ;
    edx = MEM32(esp + 8);
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax) = 0x80EF78;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00261250
 * Original: 0x00261250 - 0x00261257 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00261250(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00261250: ;
    fp_push(MEMF(0x7A9980)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00261260
 * Original: 0x00261260 - 0x00261272 (18 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00261260(void)
{

loc_00261260: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax) = 0x80EF88;
    MEM32(eax + 4) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00261280
 * Original: 0x00261280 - 0x00261295 (21 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00261280(void)
{

loc_00261280: ;
    ecx = MEM32(ecx + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xE0); PUSH32(esp, 0x0026128Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00261285u); } /* indirect call */
    }

loc_0026128B: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00261292u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0026128Fu); } /* indirect call */
    }

loc_00261292: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002612A0
 * Original: 0x002612A0 - 0x002612A7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002612A0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_002612A0: ;
    fp_push(MEMF(0x7A9980)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002612B0
 * Original: 0x002612B0 - 0x002612C9 (25 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002612B0(void)
{

loc_002612B0: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax) = 0x80EF98;
    MEM32(eax + 4) = 0;
    MEM32(eax + 8) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002612D0
 * Original: 0x002612D0 - 0x002612EF (31 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002612D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002612D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 8) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002612EB; /* jge: greater or equal (signed >=) */

loc_002612DB: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002612E1u); RECOMP_ABI_CALL(0x00016CD0u, sub_00016CD0); /* call 0x00016CD0 */

loc_002612E1: ;
    eax = MEM32(esi + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 4) = eax;

loc_002612EB: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00261300
 * Original: 0x00261300 - 0x00261316 (22 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00261300(void)
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

loc_00261300: ;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 8) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0026130F; /* jge: greater or equal (signed >=) */

loc_00261308: ;
    fp_push(MEMF(0x7AA840)); /* fld float */
    esp += 4; return; /* ret */

loc_0026130F: ;
    fp_push(MEMF(0x7A9980)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00261320
 * Original: 0x00261320 - 0x00261324 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00261320(void)
{

loc_00261320: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_00261330
 * Original: 0x00261330 - 0x0026134D (29 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00261330(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00261330: ;
    SET_LO8(ecx, MEM8(eax + 0x261));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00261341; /* jne: not equal / not zero */

loc_0026133A: ;
    eax = MEM32(eax + 0x250);
    esp += 4; return; /* ret */

loc_00261341: ;
    eax = MEM32(eax + 0x24C);
    _fb = (uint32_t)(0x1770) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1770;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00261360
 * Original: 0x00261360 - 0x002613AC (76 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00261360(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00261360: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = 0x80EFA8;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x2C) = 0x864700;
    MEM32(eax + 0x3C) = 0xCF850;
    MEM32(eax + 0x34) = 0x29F6300;
    MEM32(eax + 0x30) = 0x6DDD0;
    MEM32(eax + 0x38) = 0x1AB3F00;
    esp += 4; return; /* ret */

}

/**
 * sub_002613C0
 * Original: 0x002613C0 - 0x002613C1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002613C0(void)
{

loc_002613C0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002613D0
 * Original: 0x002613D0 - 0x002613D5 (5 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002613D0(void)
{

loc_002613D0: ;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002613E0
 * Original: 0x002613E0 - 0x002613E3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002613E0(void)
{

loc_002613E0: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_002613F0
 * Original: 0x002613F0 - 0x002613F3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002613F0(void)
{

loc_002613F0: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_00261400
 * Original: 0x00261400 - 0x00261403 (3 bytes, 1 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00261400(void)
{

loc_00261400: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00261410
 * Original: 0x00261410 - 0x00261417 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00261410(void)
{

loc_00261410: ;
    MEM32(ecx) = 0x80EFA8;
    esp += 4; return; /* ret */

}

/**
 * sub_00261420
 * Original: 0x00261420 - 0x00261565 (325 bytes, 86 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00261420(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00261420: ;
    edx = MEM32(esp + 4);
    eax = MEM32(esp + 8);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x7AB7D4)); /* movss */
    MEM32(ecx + edx * 4 + 4) = eax;
    PUSH32(esp, edi);
    eax = edx + 1;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    MEM32(ecx + 0x34) = 0x29F6300;
    MEM32(ecx + 0x38) = 0x1AB3F00;
    MEM32(ecx + 0x30) = 0x6DDD0;
    MEM32(ecx + 0x3C) = 0xCF850;
    xmm2 = xmm0; /* movaps */
    if (CMP_L(_fas, _fbs)) goto loc_002614CD; /* jl: less (signed <) */

loc_00261466: ;
    PUSH32(esp, esi);
    esi = edx + 1;
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        esi = _sv >> _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = ecx + 8;
    edi = esi * 4;
    goto loc_00261480;

    /* nop */

loc_00261480: ;
    xmm3.f[0] = (float)(int32_t)MEM32(eax + -4); /* cvtsi2ss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm2.f[0] = (float)(int32_t)MEM32(eax); /* cvtsi2ss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm2.f[0] = (float)(int32_t)MEM32(eax + 4); /* cvtsi2ss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm2.f[0] = (float)(int32_t)MEM32(eax + 8); /* cvtsi2ss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = xmm3; /* movaps */
    if ((_fa != 0)) goto loc_00261480; /* jne: not equal / not zero */

loc_002614CC: ;
    POP32(esp, esi);

loc_002614CD: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_002614F9; /* jg: greater (signed >) */

loc_002614D1: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ecx + edi * 4 + 4;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_002614E0;

    /* nop */

loc_002614E0: ;
    xmm3.f[0] = (float)(int32_t)MEM32(eax); /* cvtsi2ss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = xmm3; /* movaps */
    if ((_fa != 0)) goto loc_002614E0; /* jne: not equal / not zero */

loc_002614F9: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x34); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    edx = (int32_t)xmm0.f[0]; /* cvttss2si */
    eax = 0x14F8B589;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((0xC) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = edx;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x1F) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)((int32_t)eax * (int32_t)0xC350);
    edx = eax + -43550000;
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7FE950); /* mulss */
    MEM32(ecx + 0x34) = eax;
    MEM32(ecx + 0x38) = edx;
    eax = 0x14F8B589;
    edx = (int32_t)xmm0.f[0]; /* cvttss2si */
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((0xC) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = edx;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x1F) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)((int32_t)eax * (int32_t)0xC350);
    MEM32(ecx + 0x2C) = eax;
    MEM32(ecx + 0x30) = 0x73F78;
    MEM32(ecx + 0x3C) = 0xD59F8;
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002615C0
 * Original: 0x002615C0 - 0x002615C5 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002615C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002615C0: ;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x2C)); return; /* indirect tail jmp */

}

/**
 * sub_002615D0
 * Original: 0x002615D0 - 0x002615D5 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002615D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002615D0: ;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x30)); return; /* indirect tail jmp */

}

/**
 * sub_002615E0
 * Original: 0x002615E0 - 0x002615E5 (5 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002615E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002615E0: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002615F0
 * Original: 0x002615F0 - 0x00261630 (64 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002615F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002615F0: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00261609; /* ja: above (unsigned >) */

loc_002615F6: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x26160C); /* switch: 4 entries, 3 targets */
    if (_jt == 0x002615FDu) goto loc_002615FD;
    if (_jt == 0x00261603u) goto loc_00261603;
    if (_jt == 0x00261609u) goto loc_00261609;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_002615FD: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_00261603: ;
    eax = 2;
    esp += 4; return; /* ret */

loc_00261609: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00261630
 * Original: 0x00261630 - 0x002616F0 (192 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00261630(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00261630: ;
    eax = MEM32(esp + 8);
    edx = ZX8(MEM8(eax + 0x2AB));
    ecx = MEM32(esp + 4);
    eax = ZX8(MEM8(ecx + 0x2AB));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00261661; /* ja: above (unsigned >) */

loc_0026164C: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x261694); /* switch: 8 entries, 6 targets */
    if (_jt == 0x00261653u) goto loc_00261653;
    if (_jt == 0x0026165Au) goto loc_0026165A;
    if (_jt == 0x00261661u) goto loc_00261661;
    if (_jt == 0x00261672u) goto loc_00261672;
    if (_jt == 0x00261679u) goto loc_00261679;
    if (_jt == 0x00261680u) goto loc_00261680;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00261653: ;
    ecx = 1;
    goto loc_00261663;

loc_0026165A: ;
    ecx = 2;
    goto loc_00261663;

loc_00261661: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00261663: ;
    eax = edx + -1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00261680; /* ja: above (unsigned >) */

loc_0026166B: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x2616A4); /* switch: 8 entries, 6 targets */
    if (_jt == 0x00261653u) goto loc_00261653;
    if (_jt == 0x0026165Au) goto loc_0026165A;
    if (_jt == 0x00261661u) goto loc_00261661;
    if (_jt == 0x00261672u) goto loc_00261672;
    if (_jt == 0x00261679u) goto loc_00261679;
    if (_jt == 0x00261680u) goto loc_00261680;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00261672: ;
    eax = 1;
    goto loc_00261682;

loc_00261679: ;
    eax = 2;
    goto loc_00261682;

loc_00261680: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00261682: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0026168A; /* jge: greater or equal (signed >=) */

loc_00261686: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

loc_0026168A: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    SET_LO8(edx, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    eax = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_002616F0
 * Original: 0x002616F0 - 0x0026174E (94 bytes, 45 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002616F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002616F0: ;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xC), 2 (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    ecx = esi;
    if (CMP_GE(_fas, _fbs)) goto loc_0026170F; /* jge: greater or equal (signed >=) */

loc_00261703: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0xB);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0026170Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0026170Au); } /* indirect call */
    }

loc_0026170D: ;
    goto loc_00261719;

loc_0026170F: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0xB);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00261719u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00261716u); } /* indirect call */
    }

loc_00261719: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    PUSH32(esp, 3);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00261725u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00261722u); } /* indirect call */
    }

loc_00261725: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 8);
    PUSH32(esp, 0xC);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00261731u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0026172Eu); } /* indirect call */
    }

loc_00261731: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 8);
    PUSH32(esp, 0xD);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0026173Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0026173Au); } /* indirect call */
    }

loc_0026173D: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0xE);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00261749u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00261746u); } /* indirect call */
    }

loc_00261749: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00261770
 * Original: 0x00261770 - 0x002617AB (59 bytes, 29 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00261770(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00261770: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00261782: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0x10);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x0026178Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00261789u); } /* indirect call */
    }

loc_0026178C: ;
    eax = MEM32(ebp + eax * 4);
    ecx = MEM32(esp + 0x18);
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x70); PUSH32(esp, 0x0026179Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0026179Bu); } /* indirect call */
    }

loc_0026179E: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00261782; /* jl: less (signed <) */

loc_002617A4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_002617C0
 * Original: 0x002617C0 - 0x00261ABD (765 bytes, 272 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002617C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002617C0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x18);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1C);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    MEM32(esp + 0x10) = 0;
    /* nop */

loc_002617E0: ;
    MEM32(esp + 0x24) = 0;
    goto loc_002617F0;

    /* nop */

loc_002617F0: ;
    ecx = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x10);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x00261801u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002617FEu); } /* indirect call */
    }

loc_00261801: ;
    eax = MEM32(ebx + eax * 4);
    ecx = MEM32(esp + 0x24);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x00261817u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00261814u); } /* indirect call */
    }

loc_00261817: ;
    eax = MEM32(esp + 0x24);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    MEM32(esp + 0x24) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_002617F0; /* jl: less (signed <) */

loc_00261825: ;
    eax = MEM32(esp + 0x10);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_002617E0; /* jl: less (signed <) */

loc_00261833: ;
    MEM32(esp + 0x10) = 0;
    goto loc_00261840;

    /* nop */

loc_00261840: ;
    MEM32(esp + 0x24) = 0;

loc_00261848: ;
    eax = MEM32(esp + 0x24);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x0026185Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00261859u); } /* indirect call */
    }

loc_0026185C: ;
    eax = MEM32(ebx + eax * 4);
    ecx = MEM32(esp + 0x24);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x00261872u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0026186Fu); } /* indirect call */
    }

loc_00261872: ;
    eax = MEM32(esp + 0x24);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    MEM32(esp + 0x24) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00261848; /* jl: less (signed <) */

loc_00261880: ;
    eax = MEM32(esp + 0x10);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00261840; /* jl: less (signed <) */

loc_0026188E: ;
    MEM32(esp + 0x10) = 0;
    goto loc_002618A0;

    /* nop */
    /* nop */

loc_002618A0: ;
    MEM32(esp + 0x24) = 0;

loc_002618A8: ;
    eax = MEM32(esp + 0x24);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(7) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x002618BCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002618B9u); } /* indirect call */
    }

loc_002618BC: ;
    eax = MEM32(ebx + eax * 4);
    ecx = MEM32(esp + 0x24);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x002618D2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002618CFu); } /* indirect call */
    }

loc_002618D2: ;
    eax = MEM32(esp + 0x24);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    MEM32(esp + 0x24) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_002618A8; /* jl: less (signed <) */

loc_002618E0: ;
    eax = MEM32(esp + 0x10);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_002618A0; /* jl: less (signed <) */

loc_002618EE: ;
    MEM32(esp + 0x10) = 0;
    goto loc_00261900;

    /* nop */
    /* nop */

loc_00261900: ;
    MEM32(esp + 0x24) = 0;

loc_00261908: ;
    eax = MEM32(esp + 0x24);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(9) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 9;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x0026191Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00261919u); } /* indirect call */
    }

loc_0026191C: ;
    eax = MEM32(ebx + eax * 4);
    ecx = MEM32(esp + 0x24);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x00261932u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0026192Fu); } /* indirect call */
    }

loc_00261932: ;
    eax = MEM32(esp + 0x24);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    MEM32(esp + 0x24) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00261908; /* jl: less (signed <) */

loc_00261940: ;
    eax = MEM32(esp + 0x10);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00261900; /* jl: less (signed <) */

loc_0026194E: ;
    MEM32(esp + 0x10) = 0;
    goto loc_00261960;

    /* nop */
    /* nop */

loc_00261960: ;
    MEM32(esp + 0x24) = 0;

loc_00261968: ;
    eax = MEM32(esp + 0x24);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(0xB) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xB;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x0026197Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00261979u); } /* indirect call */
    }

loc_0026197C: ;
    eax = MEM32(ebx + eax * 4);
    ecx = MEM32(esp + 0x24);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x00261992u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0026198Fu); } /* indirect call */
    }

loc_00261992: ;
    eax = MEM32(esp + 0x24);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    MEM32(esp + 0x24) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00261968; /* jl: less (signed <) */

loc_002619A0: ;
    eax = MEM32(esp + 0x10);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00261960; /* jl: less (signed <) */

loc_002619AE: ;
    MEM32(esp + 0x10) = 0;
    goto loc_002619C0;

    /* nop */
    /* nop */

loc_002619C0: ;
    MEM32(esp + 0x24) = 0;

loc_002619C8: ;
    eax = MEM32(esp + 0x24);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(0xD) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xD;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x002619DCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002619D9u); } /* indirect call */
    }

loc_002619DC: ;
    eax = MEM32(ebx + eax * 4);
    ecx = MEM32(esp + 0x24);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x68); PUSH32(esp, 0x002619F2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002619EFu); } /* indirect call */
    }

loc_002619F2: ;
    eax = MEM32(esp + 0x24);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    MEM32(esp + 0x24) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_002619C8; /* jl: less (signed <) */

loc_00261A00: ;
    eax = MEM32(esp + 0x10);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_002619C0; /* jl: less (signed <) */

loc_00261A0E: ;
    MEM32(esp + 0x24) = 0;

loc_00261A16: ;
    eax = MEM32(esp + 0x24);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x12);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x00261A24u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00261A21u); } /* indirect call */
    }

loc_00261A24: ;
    eax = MEM32(ebx + eax * 4);
    ecx = MEM32(esp + 0x24);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x80); PUSH32(esp, 0x00261A38u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00261A32u); } /* indirect call */
    }

loc_00261A38: ;
    eax = MEM32(esp + 0x24);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    MEM32(esp + 0x24) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00261A16; /* jl: less (signed <) */

loc_00261A46: ;
    MEM32(esp + 0x24) = 0;
    edi = edi;

loc_00261A50: ;
    eax = MEM32(esp + 0x24);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0xF);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x00261A5Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00261A5Bu); } /* indirect call */
    }

loc_00261A5E: ;
    eax = MEM32(ebx + eax * 4);
    ecx = MEM32(esp + 0x24);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x00261A6Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00261A6Cu); } /* indirect call */
    }

loc_00261A6F: ;
    eax = MEM32(esp + 0x24);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    MEM32(esp + 0x24) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00261A50; /* jl: less (signed <) */

loc_00261A7D: ;
    MEM32(esp + 0x24) = 0;

loc_00261A85: ;
    eax = MEM32(esp + 0x24);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x11);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x00261A93u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00261A90u); } /* indirect call */
    }

loc_00261A93: ;
    eax = MEM32(ebx + eax * 4);
    ecx = MEM32(esp + 0x24);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x00261AA7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00261AA1u); } /* indirect call */
    }

loc_00261AA7: ;
    eax = MEM32(esp + 0x24);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    MEM32(esp + 0x24) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00261A85; /* jl: less (signed <) */

loc_00261AB5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00261B80
 * Original: 0x00261B80 - 0x00261BC7 (71 bytes, 30 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00261B80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00261B80: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    _fb = (uint32_t)(0x2CD) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x2CD;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 0x7FEDF8;
    goto loc_00261BA0;

    /* nop */

loc_00261BA0: ;
    ecx = ZX8(MEM8(edi));
    edx = MEM32(esi);
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x00261BB4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00261BB1u); } /* indirect call */
    }

loc_00261BB4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FEE4C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x7FEE4C (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00261BA0; /* jl: less (signed <) */

loc_00261BC0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00261BE0
 * Original: 0x00261BE0 - 0x00261C27 (71 bytes, 30 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00261BE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00261BE0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    _fb = (uint32_t)(0x2CD) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x2CD;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 0x7FED90;
    goto loc_00261C00;

    /* nop */

loc_00261C00: ;
    ecx = ZX8(MEM8(edi));
    edx = MEM32(esi);
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x30); PUSH32(esp, 0x00261C14u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00261C11u); } /* indirect call */
    }

loc_00261C14: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FEDF8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x7FEDF8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00261C00; /* jl: less (signed <) */

loc_00261C20: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00261C40
 * Original: 0x00261C40 - 0x00261D31 (241 bytes, 58 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00261C40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00261C40: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx + 0x90);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00261CB5; /* je: equal / zero */

loc_00261C51: ;
    ecx = ZX16(MEM16(ecx + 0x2C));
    _fb = (uint32_t)(0xFFFFFF00u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFF00u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x9D (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00261D2E; /* ja: above (unsigned >) */

loc_00261C67: ;
    ecx = ZX8(MEM8(ecx + 0x261D60));
    { uint32_t _jt = MEM32(ecx * 4 + 0x261D34); /* switch: 11 entries, 11 targets */
    if (_jt == 0x00261C75u) goto loc_00261C75;
    if (_jt == 0x00261C7Du) goto loc_00261C7D;
    if (_jt == 0x00261C85u) goto loc_00261C85;
    if (_jt == 0x00261C8Du) goto loc_00261C8D;
    if (_jt == 0x00261C95u) goto loc_00261C95;
    if (_jt == 0x00261C9Du) goto loc_00261C9D;
    if (_jt == 0x00261CA5u) goto loc_00261CA5;
    if (_jt == 0x00261CADu) goto loc_00261CAD;
    if (_jt == 0x00261CCCu) goto loc_00261CCC;
    if (_jt == 0x00261D29u) goto loc_00261D29;
    if (_jt == 0x00261D2Eu) goto loc_00261D2E;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00261C75: ;
    eax = 0x14;
    esp += 8; return; /* ret 4 */

loc_00261C7D: ;
    eax = 5;
    esp += 8; return; /* ret 4 */

loc_00261C85: ;
    eax = 0xE;
    esp += 8; return; /* ret 4 */

loc_00261C8D: ;
    eax = 7;
    esp += 8; return; /* ret 4 */

loc_00261C95: ;
    eax = 6;
    esp += 8; return; /* ret 4 */

loc_00261C9D: ;
    eax = 0x10;
    esp += 8; return; /* ret 4 */

loc_00261CA5: ;
    eax = 0x11;
    esp += 8; return; /* ret 4 */

loc_00261CAD: ;
    eax = 0x12;
    esp += 8; return; /* ret 4 */

loc_00261CB5: ;
    ecx = ZX16(MEM16(ecx + 0x2A));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x7E (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00261D2E; /* ja: above (unsigned >) */

loc_00261CBE: ;
    edx = ZX8(MEM8(ecx + 0x261E58));
    { uint32_t _jt = MEM32(edx * 4 + 0x261E00); /* switch: 22 entries, 22 targets */
    if (_jt == 0x00261C75u) goto loc_00261C75;
    if (_jt == 0x00261C7Du) goto loc_00261C7D;
    if (_jt == 0x00261C85u) goto loc_00261C85;
    if (_jt == 0x00261C8Du) goto loc_00261C8D;
    if (_jt == 0x00261C95u) goto loc_00261C95;
    if (_jt == 0x00261C9Du) goto loc_00261C9D;
    if (_jt == 0x00261CA5u) goto loc_00261CA5;
    if (_jt == 0x00261CADu) goto loc_00261CAD;
    if (_jt == 0x00261CCCu) goto loc_00261CCC;
    if (_jt == 0x00261CD4u) goto loc_00261CD4;
    if (_jt == 0x00261CD9u) goto loc_00261CD9;
    if (_jt == 0x00261CE1u) goto loc_00261CE1;
    if (_jt == 0x00261CE9u) goto loc_00261CE9;
    if (_jt == 0x00261CF1u) goto loc_00261CF1;
    if (_jt == 0x00261CF9u) goto loc_00261CF9;
    if (_jt == 0x00261D01u) goto loc_00261D01;
    if (_jt == 0x00261D09u) goto loc_00261D09;
    if (_jt == 0x00261D11u) goto loc_00261D11;
    if (_jt == 0x00261D19u) goto loc_00261D19;
    if (_jt == 0x00261D21u) goto loc_00261D21;
    if (_jt == 0x00261D29u) goto loc_00261D29;
    if (_jt == 0x00261D2Eu) goto loc_00261D2E;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00261CCC: ;
    eax = 2;
    esp += 8; return; /* ret 4 */

loc_00261CD4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

loc_00261CD9: ;
    eax = 1;
    esp += 8; return; /* ret 4 */

loc_00261CE1: ;
    eax = 8;
    esp += 8; return; /* ret 4 */

loc_00261CE9: ;
    eax = 9;
    esp += 8; return; /* ret 4 */

loc_00261CF1: ;
    eax = 0xA;
    esp += 8; return; /* ret 4 */

loc_00261CF9: ;
    eax = 0xB;
    esp += 8; return; /* ret 4 */

loc_00261D01: ;
    eax = 0xC;
    esp += 8; return; /* ret 4 */

loc_00261D09: ;
    eax = 0xD;
    esp += 8; return; /* ret 4 */

loc_00261D11: ;
    eax = 0xF;
    esp += 8; return; /* ret 4 */

loc_00261D19: ;
    eax = 0x13;
    esp += 8; return; /* ret 4 */

loc_00261D21: ;
    eax = 4;
    esp += 8; return; /* ret 4 */

loc_00261D29: ;
    eax = 3;

loc_00261D2E: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00261F90
 * Original: 0x00261F90 - 0x00261FCB (59 bytes, 18 insns)
 * Category: game_ui
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00261F90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00261F90: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, eax);
    ecx = esp + 0xB;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, 0x80F010);
    PUSH32(esp, eax);
    MEM8(esp + 0x1B) = 0;
    PUSH32(esp, 0x00261FBBu); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_00261FBB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(esp + 0x1C)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esp + 0x1C), LO16(eax) (16-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00261FE0
 * Original: 0x00261FE0 - 0x00261FE9 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00261FE0(void)
{

loc_00261FE0: ;
    eax = ecx;
    MEM32(eax) = 0x80F084;
    esp += 4; return; /* ret */

}

/**
 * sub_00261FF0
 * Original: 0x00261FF0 - 0x00261FF7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00261FF0(void)
{

loc_00261FF0: ;
    MEM32(ecx) = 0x80F084;
    esp += 4; return; /* ret */

}

/**
 * sub_00262000
 * Original: 0x00262000 - 0x00262035 (53 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00262000(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00262000: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x80C67C;
    MEM32(esi + 4) = 0;
    PUSH32(esp, 0x00262015u); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_00262015: ;
    ecx = eax;
    PUSH32(esp, 0x0026201Cu); RECOMP_ABI_CALL(0x00026B4Eu, sub_00026B4E); /* call 0x00026B4E */

loc_0026201C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x00262025u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00262025: ;
    MEM32(esi + 4) = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = 0x80F088;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00262050
 * Original: 0x00262050 - 0x0026207D (45 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00262050(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00262050: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x80C67C;
    if (CMP_EQ(_fa, _fb)) goto loc_00262070; /* je: equal / zero */

loc_00262060: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00262066u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00262066: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = 0;

loc_00262070: ;
    PUSH32(esp, 0x00262075u); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_00262075: ;
    ecx = eax;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0002A61D(); return; /* tail jmp 0x0002A61D */

}

/**
 * sub_00262078
 * Original: 0x00262078 - 0x0026207D (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00262078(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00262078: ;
    g_seh_ebp = ebp; sub_0002A61D(); return; /* tail jmp 0x0002A61D */

}

/**
 * sub_00262090
 * Original: 0x00262090 - 0x00262093 (3 bytes, 1 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00262090(void)
{

loc_00262090: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002620A0
 * Original: 0x002620A0 - 0x002620C2 (34 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002620A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002620A0: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, 0x80F08C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002620BCu); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_002620BC: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002620D0
 * Original: 0x002620D0 - 0x0026234D (637 bytes, 207 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002620D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_002620D0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, 0x10);
    eax = edi + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002620E6u); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_002620E6: ;
    PUSH32(esp, 0x10);
    ecx = edi + 4;
    PUSH32(esp, ecx);
    edx = esi + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 0x002620F5u); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_002620F5: ;
    PUSH32(esp, 0x14);
    eax = edi + 0x2C;
    PUSH32(esp, eax);
    ecx = esi + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00262104u); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_00262104: ;
    edx = MEM32(edi + 0x4C);
    eax = MEM32(esi + 0x34);
    _fb = (uint32_t)(0x19) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0x19)) >> 32) & 1);
    edx = edx + 0x19;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(9) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _cf = 0; /* logical op clears CF */
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* logical op clears CF */
    edx = edx & 0x7E00;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    eax = eax ^ edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x34) = eax;
    ecx = ZX8(MEM8(edi + 0x50));
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(0x1C) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _cf = 0; /* logical op clears CF */
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x70000000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x34) = ecx;
    edx = MEM32(edi + 0x48);
    ecx = MEM32(esi + 0x38);
    eax = edx * 8 + 0xC8;
    _cf = 0; /* logical op clears CF */
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x1F8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x38) = ecx;
    eax = ZX8(MEM8(edi + 0x44));
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x24)) >> 32) & 1);
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(9) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _cf = 0; /* logical op clears CF */
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x1E00;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x38) = eax;
    edx = ZX8(MEM8(edi + 0x43));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(0xD) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _cf = 0; /* logical op clears CF */
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* logical op clears CF */
    edx = edx & 0x3E000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x38) = edx;
    ecx = ZX16(MEM16(edi + 0x40));
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(0x12) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _cf = 0; /* logical op clears CF */
    ecx = ecx ^ edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x1FC0000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx ^ edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x38) = ecx;
    eax = ZX8(MEM8(edi + 0x51));
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x19) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _cf = 0; /* logical op clears CF */
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x2000000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x38) = eax;
    _fa = (uint32_t)(MEM8(edi + 0x50)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x50), 4 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00262227; /* jne: not equal / not zero */

loc_002621A7: ;
    ecx = ZX8(MEM8(edi + 0x85));
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(0x1A) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _cf = 0; /* logical op clears CF */
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x4000000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = MEM32(esi + 0x44);
    MEM32(esi + 0x38) = ecx;
    edx = ZX8(MEM8(edi + 0x8A));
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(0xA) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _cf = 0; /* logical op clears CF */
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* logical op clears CF */
    edx = edx & 0x3C00;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    eax = eax ^ edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x44) = eax;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(edi + 0x88));
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFFE3C1Fu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x1F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(5) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _cf = 0; /* logical op clears CF */
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0x44) = ecx;
    SET_LO8(eax, MEM8(edi + 0x87));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    eax = MEM32(esi + 0x40);
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(0x1C) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _cf = 0; /* logical op clears CF */
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* logical op clears CF */
    edx = edx & 0x10000000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    eax = eax ^ edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x40) = eax;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(edi + 0x89));
    _cf = 0; /* logical op clears CF */
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x44) = ecx;
    goto loc_002622AB;

loc_00262227: ;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFBFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x38) = eax;
    ecx = ZX8(MEM8(edi + 0x64));
    eax = MEM32(esi + 0x44);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(0xA) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _cf = 0; /* logical op clears CF */
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x3C00;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x44) = eax;
    ecx = eax;
    eax = ZX8(MEM8(edi + 0x62));
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(5) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _cf = 0; /* logical op clears CF */
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x3E0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x44) = eax;
    edx = ZX8(MEM8(edi + 0x66));
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(0xE) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _cf = 0; /* logical op clears CF */
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* logical op clears CF */
    edx = edx & 0x1C000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x44) = edx;
    edx = MEM32(esi + 0x40);
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(edi + 0x63));
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ecx) (8-bit) */
    _cf = (int)(_fa < _fb);
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(0x1C) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _cf = 0; /* logical op clears CF */
    ecx = ecx ^ edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x10000000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    edx = edx ^ ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = edx;
    MEM32(esi + 0x40) = edx;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, MEM8(edi + 0x63));
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x1C) & 31u;
      if (_sc) {
        _cf = (int)((_sv >> (_sc - 1u)) & 1u);
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _cf = 0; /* logical op clears CF */
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(eax));
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esi + 0x44);
    _cf = 0; /* logical op clears CF */
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* logical op clears CF */
    edx = edx & 0x1F;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    eax = eax ^ edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x44) = eax;

loc_002622AB: ;
    ecx = MEM32(esi + 0x3C);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(edi + 0x52));
    _cf = 0; /* logical op clears CF */
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x7F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x3C) = ecx;
    eax = ecx;
    ecx = ZX16(MEM16(edi + 0x56));
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(7) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _cf = 0; /* logical op clears CF */
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x1FFF80;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = MEM32(esi + 0x40);
    MEM32(esi + 0x3C) = ecx;
    edx = ZX8(MEM8(edi + 0x5E));
    _fb = (uint32_t)(0xA) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0xA)) >> 32) & 1);
    edx = edx + 0xA;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(0xE) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _cf = 0; /* logical op clears CF */
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* logical op clears CF */
    edx = edx & 0x7C000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    eax = eax ^ edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x40) = eax;
    ecx = ZX16(MEM16(edi + 0x60));
    _fb = (uint32_t)(0x6A) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x6A)) >> 32) & 1);
    ecx = ecx + 0x6A;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(0x13) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _cf = 0; /* logical op clears CF */
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x7F80000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = MEM32(esi + 0x44);
    MEM32(esi + 0x40) = ecx;
    ecx = MEM32(edi + 0x4C);
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7D6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x7D6 (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(0x1F) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _cf = 0; /* logical op clears CF */
    edx = edx | eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(esi + 0x48);
    MEM32(esi + 0x44) = edx;
    SET_LO8(ecx, MEM8(edi + 0x53));
    _cf = 0; /* logical op clears CF */
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x48) = eax;
    edx = ZX8(MEM8(edi + 0x42));
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(0xA) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _cf = 0; /* logical op clears CF */
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* logical op clears CF */
    edx = edx & 0x1FC00;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    MEM32(esi + 0x48) = edx;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00262200
 * Original: 0x00262200 - 0x0026234D (333 bytes, 111 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00262200(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00262200: ;
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(0x1C) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _cf = 0; /* logical op clears CF */
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* logical op clears CF */
    edx = edx & 0x10000000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    eax = eax ^ edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x40) = eax;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(edi + 0x89));
    _cf = 0; /* logical op clears CF */
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x44) = ecx;
    goto loc_002622AB;

    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFBFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x38) = eax;
    ecx = ZX8(MEM8(edi + 0x64));
    eax = MEM32(esi + 0x44);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(0xA) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _cf = 0; /* logical op clears CF */
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x3C00;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x44) = eax;
    ecx = eax;
    eax = ZX8(MEM8(edi + 0x62));
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(5) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _cf = 0; /* logical op clears CF */
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x3E0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x44) = eax;
    edx = ZX8(MEM8(edi + 0x66));
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(0xE) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _cf = 0; /* logical op clears CF */
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* logical op clears CF */
    edx = edx & 0x1C000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x44) = edx;
    edx = MEM32(esi + 0x40);
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(edi + 0x63));
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ecx) (8-bit) */
    _cf = (int)(_fa < _fb);
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(0x1C) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _cf = 0; /* logical op clears CF */
    ecx = ecx ^ edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x10000000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    edx = edx ^ ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = edx;
    MEM32(esi + 0x40) = edx;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, MEM8(edi + 0x63));
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x1C) & 31u;
      if (_sc) {
        _cf = (int)((_sv >> (_sc - 1u)) & 1u);
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _cf = 0; /* logical op clears CF */
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(eax));
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esi + 0x44);
    _cf = 0; /* logical op clears CF */
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* logical op clears CF */
    edx = edx & 0x1F;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    eax = eax ^ edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x44) = eax;

loc_002622AB: ;
    ecx = MEM32(esi + 0x3C);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(edi + 0x52));
    _cf = 0; /* logical op clears CF */
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x7F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x3C) = ecx;
    eax = ecx;
    ecx = ZX16(MEM16(edi + 0x56));
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(7) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _cf = 0; /* logical op clears CF */
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x1FFF80;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = MEM32(esi + 0x40);
    MEM32(esi + 0x3C) = ecx;
    edx = ZX8(MEM8(edi + 0x5E));
    _fb = (uint32_t)(0xA) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0xA)) >> 32) & 1);
    edx = edx + 0xA;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(0xE) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _cf = 0; /* logical op clears CF */
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* logical op clears CF */
    edx = edx & 0x7C000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    eax = eax ^ edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x40) = eax;
    ecx = ZX16(MEM16(edi + 0x60));
    _fb = (uint32_t)(0x6A) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x6A)) >> 32) & 1);
    ecx = ecx + 0x6A;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(0x13) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _cf = 0; /* logical op clears CF */
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x7F80000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = MEM32(esi + 0x44);
    MEM32(esi + 0x40) = ecx;
    ecx = MEM32(edi + 0x4C);
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7D6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x7D6 (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(0x1F) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _cf = 0; /* logical op clears CF */
    edx = edx | eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(esi + 0x48);
    MEM32(esi + 0x44) = edx;
    SET_LO8(ecx, MEM8(edi + 0x53));
    _cf = 0; /* logical op clears CF */
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x48) = eax;
    edx = ZX8(MEM8(edi + 0x42));
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(0xA) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _cf = 0; /* logical op clears CF */
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* logical op clears CF */
    edx = edx & 0x1FC00;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    MEM32(esi + 0x48) = edx;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002623F0
 * Original: 0x002623F0 - 0x0026249B (171 bytes, 52 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002623F0(void)
{

loc_002623F0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    MEM8(eax + 4) = 0;
    SET_LO8(edx, MEM8(ecx + 0x6D));
    MEM8(eax + 5) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 0x78));
    MEM8(eax + 6) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 0x75));
    MEM8(eax + 7) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 0x79));
    MEM8(eax + 8) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 0x6F));
    MEM8(eax + 9) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 0x70));
    MEM8(eax + 0xA) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 0x71));
    MEM8(eax + 0xB) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 0x72));
    MEM8(eax + 0xC) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 0x6E));
    MEM8(eax + 0xE) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 0x73));
    MEM8(eax + 0xF) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 0x74));
    MEM8(eax + 0x10) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 0x83));
    MEM8(eax + 0x11) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 0x80));
    MEM8(eax + 0x12) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 0x81));
    MEM8(eax + 0x13) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 0x7B));
    MEM8(eax + 0x14) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 0x7F));
    MEM8(eax + 0x15) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 0x77));
    MEM8(eax + 0x16) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 0x76));
    MEM8(eax + 0x17) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 0x6C));
    MEM8(eax + 0x18) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 0x82));
    MEM8(eax + 0x19) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 0x7E));
    MEM8(eax + 0x1A) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 0x7A));
    MEM8(eax + 0x1B) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 0x7D));
    MEM8(eax + 0x1C) = LO8(edx);
    SET_LO8(ecx, MEM8(ecx + 0x7C));
    MEM8(eax + 0x1D) = LO8(ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002624D0
 * Original: 0x002624D0 - 0x00262578 (168 bytes, 38 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002624D0(void)
{

loc_002624D0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    MEM8(eax + 4) = 0;
    SET_LO8(edx, MEM8(ecx + 0x92));
    MEM8(eax + 5) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 0x94));
    MEM8(eax + 6) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 0x93));
    MEM8(eax + 7) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 0x8E));
    MEM8(eax + 9) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 0x8D));
    MEM8(eax + 0xA) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 0x90));
    MEM8(eax + 0xC) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 0x8F));
    MEM8(eax + 0xD) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 0x91));
    MEM8(eax + 0xE) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 0x98));
    MEM8(eax + 0xF) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 0x95));
    MEM8(eax + 0x11) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 0x96));
    MEM8(eax + 0x13) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 0x99));
    MEM8(eax + 0x15) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 0x8B));
    MEM8(eax + 0x17) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 0x97));
    MEM8(eax + 0x18) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 0x9A));
    MEM8(eax + 0x14) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 0x9B));
    MEM8(eax + 0x12) = LO8(edx);
    SET_LO8(ecx, MEM8(ecx + 0x9C));
    MEM8(eax + 8) = LO8(ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002625B0
 * Original: 0x002625B0 - 0x002625E5 (53 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002625B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002625B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x80C67C;
    MEM32(esi + 4) = 0;
    PUSH32(esp, 0x002625C5u); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_002625C5: ;
    ecx = eax;
    PUSH32(esp, 0x002625CCu); RECOMP_ABI_CALL(0x00026B4Eu, sub_00026B4E); /* call 0x00026B4E */

loc_002625CC: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x002625D5u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_002625D5: ;
    MEM32(esi + 4) = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = 0x80F0C4;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00262600
 * Original: 0x00262600 - 0x0026262D (45 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00262600(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00262600: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x80C67C;
    if (CMP_EQ(_fa, _fb)) goto loc_00262620; /* je: equal / zero */

loc_00262610: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00262616u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00262616: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = 0;

loc_00262620: ;
    PUSH32(esp, 0x00262625u); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_00262625: ;
    ecx = eax;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0002A61D(); return; /* tail jmp 0x0002A61D */

}

/**
 * sub_00262640
 * Original: 0x00262640 - 0x0026267C (60 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00262640(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00262640: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00262651; /* jne: not equal / not zero */

loc_00262648: ;
    eax = MEM32(ecx + 0x1AC);
    esp += 8; return; /* ret 4 */

loc_00262651: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00262673; /* je: equal / zero */

loc_00262656: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0026266A; /* je: equal / zero */

loc_00262659: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00262661; /* je: equal / zero */

loc_0026265C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

loc_00262661: ;
    eax = ecx + 0x184;
    esp += 8; return; /* ret 4 */

loc_0026266A: ;
    eax = ecx + 0x170;
    esp += 8; return; /* ret 4 */

loc_00262673: ;
    eax = ecx + 0x15C;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00262690
 * Original: 0x00262690 - 0x00262696 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00262690(void)
{

loc_00262690: ;
    eax = 8;
    esp += 4; return; /* ret */

}

/**
 * sub_002626A0
 * Original: 0x002626A0 - 0x002626A3 (3 bytes, 1 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002626A0(void)
{

loc_002626A0: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002626B0
 * Original: 0x002626B0 - 0x002626C3 (19 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002626B0(void)
{

loc_002626B0: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 4);
    PUSH32(esp, 0x7F6ED4);
    PUSH32(esp, 0x002626C0u); RECOMP_ABI_CALL(0x00018530u, sub_00018530); /* call 0x00018530 */

loc_002626C0: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002626D0
 * Original: 0x002626D0 - 0x0026271A (74 bytes, 36 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002626D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002626D0: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    PUSH32(esp, ebp);
    ebp = MEM32(ebx + 0x5C);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00262715; /* je: equal / zero */

loc_002626DB: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x002626E8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002626E5u); } /* indirect call */
    }

loc_002626E8: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x002626F2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002626F0u); } /* indirect call */
    }

loc_002626F2: ;
    edi = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x002626FBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002626F8u); } /* indirect call */
    }

loc_002626FB: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00262705u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00262703u); } /* indirect call */
    }

loc_00262705: ;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    ecx = ebx + 0x158;
    PUSH32(esp, 0x00262713u); RECOMP_ABI_CALL(0x000156A5u, sub_000156A5); /* call 0x000156A5 */

loc_00262713: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_00262715: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00262730
 * Original: 0x00262730 - 0x0026279D (109 bytes, 54 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00262730(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00262730: ;
    eax = MEM32(ecx + 0x5C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026279A; /* jne: not equal / not zero */

loc_00262737: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x00262743u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00262740u); } /* indirect call */
    }

loc_00262743: ;
    esi = eax;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00262747: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00262753u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00262750u); } /* indirect call */
    }

loc_00262753: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    ebx = eax;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00262761u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0026275Eu); } /* indirect call */
    }

loc_00262761: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    ecx = esi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0026276Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0026276Cu); } /* indirect call */
    }

loc_0026276F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    PUSH32(esp, 0);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0026277Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0026277Au); } /* indirect call */
    }

loc_0026277D: ;
    edx = MEM32(esi);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0x32;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x10);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00262791u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0026278Eu); } /* indirect call */
    }

loc_00262791: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00262747; /* jl: less (signed <) */

loc_00262797: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0026279A: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002627C0
 * Original: 0x002627C0 - 0x002627E8 (40 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002627C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002627C0: ;
    eax = MEM32(esp + 4);
    edx = esp + -256;
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_002627D3: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002627D3; /* jne: not equal / not zero */

loc_002627DD: ;
    SET_LO8(eax, 1);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00262800
 * Original: 0x00262800 - 0x00262828 (40 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00262800(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00262800: ;
    eax = MEM32(esp + 4);
    edx = esp + -256;
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00262813: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00262813; /* jne: not equal / not zero */

loc_0026281D: ;
    SET_LO8(eax, 1);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00262840
 * Original: 0x00262840 - 0x002628E3 (163 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00262840(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00262840: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0026284Bu); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_0026284B: ;
    ecx = eax;
    PUSH32(esp, 0x00262852u); RECOMP_ABI_CALL(0x00026B4Eu, sub_00026B4E); /* call 0x00026B4E */

loc_00262852: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x0026285Cu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0026285C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = eax;
    PUSH32(esp, 0x00262866u); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_00262866: ;
    ecx = eax;
    PUSH32(esp, 0x0026286Du); RECOMP_ABI_CALL(0x00026B4Eu, sub_00026B4E); /* call 0x00026B4E */

loc_0026286D: ;
    esi = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    ecx = esp + 0x10;
    PUSH32(esp, 0x0026287Bu); RECOMP_ABI_CALL(0x0002ED76u, sub_0002ED76); /* call 0x0002ED76 */

loc_0026287B: ;
    eax = 1;
    MEM32(esi + 4) = eax;
    MEM32(esi + 0xC) = 3;
    MEM32(esi + 0x30) = edi;
    MEM32(esi + 0x34) = eax;
    MEM32(esi + 0x10) = edi;
    ecx = 2;
    MEM32(esi + 0x14) = ecx;
    MEM32(esi + 0x18) = ecx;
    MEM32(esi + 0x1C) = edi;
    MEM32(esi + 0x20) = eax;
    MEM32(esi + 0x24) = eax;
    MEM32(esi + 0x28) = ecx;
    MEM32(esi + 0x2C) = 4;
    MEM32(esi + 0x38) = edi;
    MEM32(esi + 0x3C) = edi;
    PUSH32(esp, 0x002628BCu); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_002628BC: ;
    ecx = eax;
    PUSH32(esp, 0x002628C3u); RECOMP_ABI_CALL(0x0002A61Du, sub_0002A61D); /* call 0x0002A61D */

loc_002628C3: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002628D0; /* je: equal / zero */

loc_002628C7: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x002628CDu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_002628CD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002628D0: ;
    PUSH32(esp, 0x002628D5u); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_002628D5: ;
    ecx = eax;
    PUSH32(esp, 0x002628DCu); RECOMP_ABI_CALL(0x0002A61Du, sub_0002A61D); /* call 0x0002A61D */

loc_002628DC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00262910
 * Original: 0x00262910 - 0x00262949 (57 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00262910(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00262910: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 4) = 2;
    MEM32(eax + 8) = 3;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x10) = edx;
    ecx = 1;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = edx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x20) = edx;
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x28) = edx;
    MEM32(eax + 0x2C) = 0xC;
    MEM32(eax + 0x30) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00262960
 * Original: 0x00262960 - 0x0026299C (60 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00262960(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00262960: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00262971; /* jne: not equal / not zero */

loc_00262968: ;
    eax = MEM32(ecx + 0x1AC);
    esp += 8; return; /* ret 4 */

loc_00262971: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00262993; /* je: equal / zero */

loc_00262976: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0026298A; /* je: equal / zero */

loc_00262979: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00262981; /* je: equal / zero */

loc_0026297C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

loc_00262981: ;
    eax = ecx + 0x184;
    esp += 8; return; /* ret 4 */

loc_0026298A: ;
    eax = ecx + 0x170;
    esp += 8; return; /* ret 4 */

loc_00262993: ;
    eax = ecx + 0x15C;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002629B0
 * Original: 0x002629B0 - 0x002629B6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002629B0(void)
{

loc_002629B0: ;
    eax = 8;
    esp += 4; return; /* ret */

}

/**
 * sub_002629C0
 * Original: 0x002629C0 - 0x002629E8 (40 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002629C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002629C0: ;
    eax = MEM32(esp + 4);
    edx = esp + -256;
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_002629D3: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002629D3; /* jne: not equal / not zero */

loc_002629DD: ;
    SET_LO8(eax, 1);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00262A00
 * Original: 0x00262A00 - 0x00262A28 (40 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00262A00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00262A00: ;
    eax = MEM32(esp + 4);
    edx = esp + -256;
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00262A13: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00262A13; /* jne: not equal / not zero */

loc_00262A1D: ;
    SET_LO8(eax, 1);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00262A40
 * Original: 0x00262A40 - 0x00262A52 (18 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00262A40(void)
{

loc_00262A40: ;
    PUSH32(esp, 0x00262A45u); RECOMP_ABI_CALL(0x00036238u, sub_00036238); /* call 0x00036238 */

loc_00262A45: ;
    PUSH32(esp, 0x00262A4Au); RECOMP_ABI_CALL(0x0003708Eu, sub_0003708E); /* call 0x0003708E */

loc_00262A4A: ;
    PUSH32(esp, 0x00262A4Fu); RECOMP_ABI_CALL(0x0001781Au, sub_0001781A); /* call 0x0001781A */

loc_00262A4F: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_00262A60
 * Original: 0x00262A60 - 0x00262A7E (30 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00262A60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00262A60: ;
    edx = MEM32(ecx + 0x1B8);
    eax = MEM32(ecx + 0x50);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    edx = esp;
    MEM32(edx) = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00262A74u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00262A71u); } /* indirect call */
    }

loc_00262A74: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00262A7Au); RECOMP_ABI_CALL(0x0001B75Du, sub_0001B75D); /* call 0x0001B75D */

loc_00262A7A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00262A90
 * Original: 0x00262A90 - 0x00262A91 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00262A90(void)
{

loc_00262A90: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00262AA0
 * Original: 0x00262AA0 - 0x00262AB1 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00262AA0(void)
{

loc_00262AA0: ;
    PUSH32(esp, 0x00262AA5u); RECOMP_ABI_CALL(0x0001EACAu, sub_0001EACA); /* call 0x0001EACA */

loc_00262AA5: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x4D);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00262AB0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00262AADu); } /* indirect call */
    }

loc_00262AB0: ;
    esp += 4; return; /* ret */

}
