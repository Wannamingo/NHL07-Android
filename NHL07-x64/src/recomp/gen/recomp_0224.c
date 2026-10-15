/**
 * nhl_07_recomp - Recompiled code chunk 224
 * Functions: 250 (0x004DBEFC - 0x004DE86C)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_004DBEFC
 * Original: 0x004DBEFC - 0x004DBF29 (45 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004DBEFC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004DBEFC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_004DBF1F; /* je: equal / zero */

loc_004DBF06: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_004DBF27; /* je: equal / zero */

loc_004DBF0B: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DBF16u); RECOMP_ABI_CALL(0x005E85C0u, sub_005E85C0); /* call 0x005E85C0 */

loc_004DBF16: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    POP32(esp, ecx);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    POP32(esp, ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_004DBF1F: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_004DBF27; /* jne: not equal / not zero */

loc_004DBF24: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_004DBF27: ;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_004DBF29
 * Original: 0x004DBF29 - 0x004DBF5A (49 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DBF29(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DBF29: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004DBF2Fu); RECOMP_ABI_CALL(0x004DC9FAu, sub_004DC9FA); /* call 0x004DC9FA */

loc_004DBF2F: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004DBF36u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004DBF33u); } /* indirect call */
    }

loc_004DBF36: ;
    esi = eax;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004DBF3Eu); RECOMP_ABI_CALL(0x005D0020u, sub_005D0020); /* call 0x005D0020 */

loc_004DBF3E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x82F1B8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004DBF4Au); RECOMP_ABI_CALL(0x005CC550u, sub_005CC550); /* call 0x005CC550 */

loc_004DBF4A: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = 0x82F274;
    if (CMP_EQ(_fa, _fb)) goto loc_004DBF58; /* je: equal / zero */

loc_004DBF56: ;
    eax = esi;

loc_004DBF58: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004DBF5A
 * Original: 0x004DBF5A - 0x004DBF93 (57 bytes, 30 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DBF5A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004DBF5A: ;
    PUSH32(esp, 0x004DBF5Fu); RECOMP_ABI_CALL(0x004DC997u, sub_004DC997); /* call 0x004DC997 */

loc_004DBF5F: ;
    edx = MEM32(eax);
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x14)); return; /* indirect tail jmp */

    eax = MEM32(ecx);
    esp += 4; return; /* ret */

    g_seh_ebp = ebp; sub_004DD5FD(); return; /* tail jmp 0x004DD5FD */

loc_004DBF92: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004DBF93
 * Original: 0x004DBF93 - 0x004DBFAE (27 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DBF93(void)
{

loc_004DBF93: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x004DBFA3u); RECOMP_ABI_CALL(0x004DD62Cu, sub_004DD62C); /* call 0x004DD62C */

loc_004DBFA3: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DBFC0
 * Original: 0x004DBFC0 - 0x004DBFDB (27 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DBFC0(void)
{

loc_004DBFC0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x004DBFD0u); RECOMP_ABI_CALL(0x004DD62Cu, sub_004DD62C); /* call 0x004DD62C */

loc_004DBFD0: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DBFDB
 * Original: 0x004DBFDB - 0x004DC064 (137 bytes, 51 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DBFDB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004DBFDB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_004DC048;

    eax = MEM32(ecx + 0x18);
    eax = MEM32(eax + 0x34);
    eax = MEM32(eax + 0x18);
    esp += 4; return; /* ret */

loc_004DC048: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004DC050u); RECOMP_ABI_CALL(0x004DBB44u, sub_004DBB44); /* call 0x004DBB44 */

loc_004DC050: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004DC05E; /* je: equal / zero */

loc_004DC057: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004DC05Du); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004DC05D: ;
    POP32(esp, ecx);

loc_004DC05E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DC048
 * Original: 0x004DC048 - 0x004DC064 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DC048(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DC048: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004DC050u); RECOMP_ABI_CALL(0x004DBB44u, sub_004DBB44); /* call 0x004DBB44 */

loc_004DC050: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004DC05E; /* je: equal / zero */

loc_004DC057: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004DC05Du); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004DC05D: ;
    POP32(esp, ecx);

loc_004DC05E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DC064
 * Original: 0x004DC064 - 0x004DC06E (10 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DC064(void)
{

loc_004DC064: ;
    eax = MEM32(ecx + 0x18);
    eax = MEM32(eax + 0x28);
    eax = MEM32(eax + 0xC);
    esp += 4; return; /* ret */

}

/**
 * sub_004DC06E
 * Original: 0x004DC06E - 0x004DC078 (10 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DC06E(void)
{

loc_004DC06E: ;
    eax = MEM32(ecx + 0x18);
    eax = MEM32(eax + 0x34);
    eax = MEM32(eax + 0x18);
    esp += 4; return; /* ret */

}

/**
 * sub_004DC078
 * Original: 0x004DC078 - 0x004DC082 (10 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DC078(void)
{

loc_004DC078: ;
    eax = MEM32(ecx + 0x18);
    eax = MEM32(eax + 0x34);
    eax = MEM32(eax + 0x28);
    esp += 4; return; /* ret */

}

/**
 * sub_004DC082
 * Original: 0x004DC082 - 0x004DC08C (10 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DC082(void)
{

loc_004DC082: ;
    eax = MEM32(ecx + 0x18);
    eax = MEM32(eax + 0x34);
    eax = MEM32(eax + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_004DC08C
 * Original: 0x004DC08C - 0x004DC096 (10 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DC08C(void)
{

loc_004DC08C: ;
    eax = MEM32(ecx + 0x18);
    eax = MEM32(eax + 0x34);
    eax = MEM32(eax + 0x1C);
    esp += 4; return; /* ret */

}

/**
 * sub_004DC096
 * Original: 0x004DC096 - 0x004DC0A0 (10 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DC096(void)
{

loc_004DC096: ;
    eax = MEM32(ecx + 0x18);
    eax = MEM32(eax + 0x34);
    eax = MEM32(eax + 0x2C);
    esp += 4; return; /* ret */

}

/**
 * sub_004DC0A0
 * Original: 0x004DC0A0 - 0x004DC0AD (13 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DC0A0(void)
{

loc_004DC0A0: ;
    eax = MEM32(ecx + 0x18);
    eax = MEM32(eax + 0x30);
    eax = MEM32(eax + 0xB4);
    esp += 4; return; /* ret */

}

/**
 * sub_004DC0AD
 * Original: 0x004DC0AD - 0x004DC0B7 (10 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DC0AD(void)
{

loc_004DC0AD: ;
    eax = MEM32(ecx + 0x18);
    eax = MEM32(eax + 0x38);
    eax = MEM32(eax + 0x10);
    esp += 4; return; /* ret */

}

/**
 * sub_004DC0B7
 * Original: 0x004DC0B7 - 0x004DC0C1 (10 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DC0B7(void)
{

loc_004DC0B7: ;
    eax = MEM32(ecx + 0x18);
    eax = MEM32(eax + 0x34);
    eax = MEM32(eax + 0x30);
    esp += 4; return; /* ret */

}

/**
 * sub_004DC0C1
 * Original: 0x004DC0C1 - 0x004DC0CB (10 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DC0C1(void)
{

loc_004DC0C1: ;
    eax = MEM32(ecx + 0x18);
    eax = MEM32(eax + 0x34);
    eax = MEM32(eax + 0x10);
    esp += 4; return; /* ret */

}

/**
 * sub_004DC0CB
 * Original: 0x004DC0CB - 0x004DC0D5 (10 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DC0CB(void)
{

loc_004DC0CB: ;
    eax = MEM32(ecx + 0x18);
    eax = MEM32(eax + 0x38);
    eax = MEM32(eax + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_004DC0D5
 * Original: 0x004DC0D5 - 0x004DC0DF (10 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DC0D5(void)
{

loc_004DC0D5: ;
    eax = MEM32(ecx + 0x18);
    eax = MEM32(eax + 0x34);
    eax = MEM32(eax + 0x14);
    esp += 4; return; /* ret */

}

/**
 * sub_004DC0DF
 * Original: 0x004DC0DF - 0x004DC0E9 (10 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DC0DF(void)
{

loc_004DC0DF: ;
    eax = MEM32(ecx + 0x18);
    eax = MEM32(eax + 0x34);
    eax = MEM32(eax + 0x20);
    esp += 4; return; /* ret */

}

/**
 * sub_004DC0E9
 * Original: 0x004DC0E9 - 0x004DC0F3 (10 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DC0E9(void)
{

loc_004DC0E9: ;
    eax = MEM32(ecx + 0x18);
    eax = MEM32(eax + 0x38);
    eax = MEM32(eax + 0xC);
    esp += 4; return; /* ret */

}

/**
 * sub_004DC0F3
 * Original: 0x004DC0F3 - 0x004DC0FD (10 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DC0F3(void)
{

loc_004DC0F3: ;
    eax = MEM32(ecx + 0x18);
    eax = MEM32(eax + 0x38);
    eax = MEM32(eax + 0x1C);
    esp += 4; return; /* ret */

}

/**
 * sub_004DC0FD
 * Original: 0x004DC0FD - 0x004DC10A (13 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DC0FD(void)
{

loc_004DC0FD: ;
    eax = MEM32(ecx + 0x18);
    eax = MEM32(eax + 0x30);
    eax = MEM32(eax + 0xB0);
    esp += 4; return; /* ret */

}

/**
 * sub_004DC10A
 * Original: 0x004DC10A - 0x004DC114 (10 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DC10A(void)
{

loc_004DC10A: ;
    eax = MEM32(ecx + 0x18);
    eax = MEM32(eax + 0x24);
    eax = MEM32(eax + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_004DC114
 * Original: 0x004DC114 - 0x004DC11E (10 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DC114(void)
{

loc_004DC114: ;
    eax = MEM32(ecx + 0x18);
    eax = MEM32(eax + 0x24);
    eax = MEM32(eax + 0x10);
    esp += 4; return; /* ret */

}

/**
 * sub_004DC11E
 * Original: 0x004DC11E - 0x004DC128 (10 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DC11E(void)
{

loc_004DC11E: ;
    eax = MEM32(ecx + 0x18);
    eax = MEM32(eax + 0x28);
    eax = MEM32(eax + 0x28);
    esp += 4; return; /* ret */

}

/**
 * sub_004DC128
 * Original: 0x004DC128 - 0x004DC1B0 (136 bytes, 58 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004DC128(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DC128: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x6C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8E19F0);
    PUSH32(esp, ebx);
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + 0xC);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_004DC168; /* je: equal / zero */

loc_004DC142: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004DC162; /* jne: not equal / not zero */

loc_004DC148: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004DC15E; /* je: equal / zero */

loc_004DC14F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004DC15E; /* je: equal / zero */

loc_004DC154: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004DC15E; /* je: equal / zero */

loc_004DC159: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 9 (32-bit) */

loc_004DC15C: ;
    if (CMP_NE(_fa, _fb)) goto loc_004DC168; /* jne: not equal / not zero */

loc_004DC15E: ;
    SET_LO8(ebx, 1);
    goto loc_004DC1A1;

loc_004DC162: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 4 (32-bit) */
    goto loc_004DC15C;

loc_004DC168: ;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DC16Eu); RECOMP_ABI_CALL(0x0070A6C6u, sub_0070A6C6); /* call 0x0070A6C6 */

loc_004DC16E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004DC1A1; /* jl: less (signed <) */

loc_004DC172: ;
    eax = ebp + -108;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DC17Bu); RECOMP_ABI_CALL(0x007380EFu, sub_007380EF); /* call 0x007380EF */

loc_004DC17B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004DC19C; /* jne: not equal / not zero */

loc_004DC17F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = esp;
    esi = ebp + -108;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    eax = ebp + -84;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    PUSH32(esp, eax);
    eax = ebp + -68;
    PUSH32(esp, eax);
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DC197u); RECOMP_ABI_CALL(0x004DBE55u, sub_004DBE55); /* call 0x004DBE55 */

loc_004DC197: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ebx, 1);

loc_004DC19C: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DC1A1u); RECOMP_ABI_CALL(0x0070A7C3u, sub_0070A7C3); /* call 0x0070A7C3 */

loc_004DC1A1: ;
    ecx = MEM32(ebp + -4);
    SET_LO8(eax, LO8(ebx));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DC1ABu); RECOMP_ABI_CALL(0x005CFF80u, sub_005CFF80); /* call 0x005CFF80 */

loc_004DC1AB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004DC1B0
 * Original: 0x004DC1B0 - 0x004DC1D4 (36 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DC1B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DC1B0: ;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 4), 3 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_GE(_fas, _fbs)) goto loc_004DC1C4; /* jge: greater or equal (signed >=) */

loc_004DC1BA: ;
    PUSH32(esp, 0);
    ecx = esi + 0x10;
    PUSH32(esp, 0x004DC1C4u); RECOMP_ABI_CALL(0x004DBF93u, sub_004DBF93); /* call 0x004DBF93 */

loc_004DC1C4: ;
    PUSH32(esp, MEM32(esp + 8));
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, 0x004DC1D0u); RECOMP_ABI_CALL(0x004E6BABu, sub_004E6BAB); /* call 0x004E6BAB */

loc_004DC1D0: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DC1D4
 * Original: 0x004DC1D4 - 0x004DC1EB (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DC1D4(void)
{

loc_004DC1D4: ;
    eax = MEM32(ecx + 0x18);
    eax = MEM32(eax + 0x28);
    eax = MEM32(eax + 8);
    PUSH32(esp, 0x70657273);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004DC1E8u); RECOMP_ABI_CALL(0x005E2630u, sub_005E2630); /* call 0x005E2630 */

loc_004DC1E8: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004DC1EB
 * Original: 0x004DC1EB - 0x004DC207 (28 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DC1EB(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DC1EB: ;
    eax = MEM32(ecx + 0x18);
    eax = MEM32(eax + 0x28);
    eax = MEM32(eax + 8);
    PUSH32(esp, 0x73656C66);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004DC1FFu); RECOMP_ABI_CALL(0x005E2630u, sub_005E2630); /* call 0x005E2630 */

loc_004DC1FF: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    _fb = (uint32_t)(0x170) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x170;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_004DC268
 * Original: 0x004DC268 - 0x004DC279 (17 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DC268(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004DC268: ;
    eax = MEM32(ecx + 0x18);
    eax = MEM32(eax + 0x30);
    ecx = MEM32(eax + 0xB0);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0xC)); return; /* indirect tail jmp */

}

/**
 * sub_004DC279
 * Original: 0x004DC279 - 0x004DC2A7 (46 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_004DC279(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DC279: ;
    eax = MEM32(ecx + 0x18);
    eax = MEM32(eax + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004DC28D; /* je: equal / zero */

loc_004DC283: ;
    _fa = (uint32_t)(MEM32(eax + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x20), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004DC28D; /* je: equal / zero */

loc_004DC289: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

loc_004DC28D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

    _fa = (uint32_t)(MEM32(eax + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x28), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004DC2A4; /* je: equal / zero */

loc_004DC2A0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

loc_004DC2A4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_004DC2A7
 * Original: 0x004DC2A7 - 0x004DC39F (248 bytes, 76 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DC2A7(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DC2A7: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x004DC2B1u); RECOMP_ABI_CALL(0x006086ACu, sub_006086AC); /* call 0x006086AC */

loc_004DC2B1: ;
    edi = esi + 4;
    ecx = edi;
    PUSH32(esp, 0x004DC2BBu); RECOMP_ABI_CALL(0x004AD92Bu, sub_004AD92B); /* call 0x004AD92B */

loc_004DC2BB: ;
    ebx = esi + 8;
    ecx = ebx;
    PUSH32(esp, 0x004DC2C5u); RECOMP_ABI_CALL(0x00608505u, sub_00608505); /* call 0x00608505 */

loc_004DC2C5: ;
    MEM32(esi + 0xC) = 0x86CA8C;
    MEM32(ebx) = 0x86CB88;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi) = 0x86CB68;
    MEM32(esi) = 0x86CAD0;
    MEM32(esi + 0xC) = 0x86CAC4;
    MEM32(esi + 0x10) = ebx;
    MEM8(esi + 0x14) = LO8(ebx);
    MEM8(esi + 0x15) = LO8(ebx);
    PUSH32(esp, ebx);
    edi = esi + 0x18;
    MEM32(edi) = ebx;
    MEM32(esi + 0x1C) = MEM32(esi + 0x1C) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM8(esi + 0x52) = 1;
    MEM8(esi + 0x53) = LO8(ebx);
    MEM32(0x90E7AC) = esi;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x6F70656E);
    MEM8(esi + 0x41) = LO8(ebx);
    MEM8(esi + 0x20) = LO8(ebx);
    PUSH32(esp, 0x004DC318u); RECOMP_ABI_CALL(0x00453B10u, sub_00453B10); /* call 0x00453B10 */

loc_004DC318: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004DC350; /* jne: not equal / not zero */

loc_004DC31F: ;
    PUSH32(esp, 0x696E676D);
    PUSH32(esp, 0x004DC329u); RECOMP_ABI_CALL(0x004580C0u, sub_004580C0); /* call 0x004580C0 */

loc_004DC329: ;
    MEM32(esp) = 0x7B891F;
    PUSH32(esp, 0x004DC335u); RECOMP_ABI_CALL(0x004535C0u, sub_004535C0); /* call 0x004535C0 */

loc_004DC335: ;
    PUSH32(esp, 0x004DC33Au); RECOMP_ABI_CALL(0x004580E0u, sub_004580E0); /* call 0x004580E0 */

loc_004DC33A: ;
    MEM32(esp) = 0x82FA88;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x7469746C);
    PUSH32(esp, 0x004DC34Du); RECOMP_ABI_CALL(0x00453A80u, sub_00453A80); /* call 0x00453A80 */

loc_004DC34D: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004DC350: ;
    PUSH32(esp, 0x3E8);
    PUSH32(esp, 0x004DC35Au); RECOMP_ABI_CALL(0x004E3454u, sub_004E3454); /* call 0x004E3454 */

loc_004DC35A: ;
    PUSH32(esp, 0x004DC35Fu); RECOMP_ABI_CALL(0x004DC960u, sub_004DC960); /* call 0x004DC960 */

loc_004DC35F: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x004DC369u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004DC369: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004DC379; /* je: equal / zero */

loc_004DC370: ;
    ecx = eax;
    PUSH32(esp, 0x004DC377u); RECOMP_ABI_CALL(0x004E5A37u, sub_004E5A37); /* call 0x004E5A37 */

loc_004DC377: ;
    goto loc_004DC37B;

loc_004DC379: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004DC37B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004DC381u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004DC381: ;
    ecx = eax;
    PUSH32(esp, 0x004DC388u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004DC388: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x004DC390u); RECOMP_ABI_CALL(0x004DBFC0u, sub_004DBFC0); /* call 0x004DBFC0 */

loc_004DC390: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x004DC399u); RECOMP_ABI_CALL(0x004DC1B0u, sub_004DC1B0); /* call 0x004DC1B0 */

loc_004DC399: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_004DC39F
 * Original: 0x004DC39F - 0x004DC3A4 (5 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DC39F(void)
{

loc_004DC39F: ;
    MEM8(ecx + 0x52) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_004DC3A4
 * Original: 0x004DC3A4 - 0x004DC3A9 (5 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DC3A4(void)
{

loc_004DC3A4: ;
    MEM8(ecx + 0x52) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_004DC3A9
 * Original: 0x004DC3A9 - 0x004DC3B7 (14 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DC3A9(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004DC3A9: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x004DC3AEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004DC3ABu); } /* indirect call */
    }

loc_004DC3AE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(4));
    eax = eax - 4;
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
 * sub_004DC3B7
 * Original: 0x004DC3B7 - 0x004DC3C7 (16 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DC3B7(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DC3B7: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x004DC3BCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004DC3B9u); } /* indirect call */
    }

loc_004DC3BC: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    SET_LO8(ecx, (CMP_GE(_fas, _fbs)) ? 1 : 0); /* setge */
    SET_LO8(eax, LO8(ecx));
    esp += 4; return; /* ret */

}

/**
 * sub_004DC3C7
 * Original: 0x004DC3C7 - 0x004DC3D7 (16 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DC3C7(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DC3C7: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x004DC3CCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004DC3C9u); } /* indirect call */
    }

loc_004DC3CC: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    SET_LO8(ecx, (CMP_GE(_fas, _fbs)) ? 1 : 0); /* setge */
    SET_LO8(eax, LO8(ecx));
    esp += 4; return; /* ret */

}

/**
 * sub_004DC3D7
 * Original: 0x004DC3D7 - 0x004DC3E0 (9 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DC3D7(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DC3D7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(ecx + 0x20)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x20), LO8(eax) (8-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 4; return; /* ret */

}

/**
 * sub_004DC3E0
 * Original: 0x004DC3E0 - 0x004DC3E3 (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DC3E0(void)
{

loc_004DC3E0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DC3E3
 * Original: 0x004DC3E3 - 0x004DC3E6 (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DC3E3(void)
{

loc_004DC3E3: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DC3E6
 * Original: 0x004DC3E6 - 0x004DC3E9 (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DC3E6(void)
{

loc_004DC3E6: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DC3E9
 * Original: 0x004DC3E9 - 0x004DC3EC (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DC3E9(void)
{

loc_004DC3E9: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DC3EC
 * Original: 0x004DC3EC - 0x004DC3EF (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DC3EC(void)
{

loc_004DC3EC: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DC3EF
 * Original: 0x004DC3EF - 0x004DC3F2 (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DC3EF(void)
{

loc_004DC3EF: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DC3F2
 * Original: 0x004DC3F2 - 0x004DC3F5 (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DC3F2(void)
{

loc_004DC3F2: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DC3F5
 * Original: 0x004DC3F5 - 0x004DC3F8 (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DC3F5(void)
{

loc_004DC3F5: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DC3F8
 * Original: 0x004DC3F8 - 0x004DC3FB (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DC3F8(void)
{

loc_004DC3F8: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DC3FB
 * Original: 0x004DC3FB - 0x004DC3FE (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DC3FB(void)
{

loc_004DC3FB: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DC3FE
 * Original: 0x004DC3FE - 0x004DC401 (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DC3FE(void)
{

loc_004DC3FE: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DC401
 * Original: 0x004DC401 - 0x004DC409 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DC401(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004DC401: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004DC8C1(); return; /* tail jmp 0x004DC8C1 */

}

/**
 * sub_004DC409
 * Original: 0x004DC409 - 0x004DC411 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DC409(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004DC409: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004DC3FE(); return; /* tail jmp 0x004DC3FE */

}

/**
 * sub_004DC411
 * Original: 0x004DC411 - 0x004DC419 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DC411(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004DC411: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004DC3E6(); return; /* tail jmp 0x004DC3E6 */

}

/**
 * sub_004DC419
 * Original: 0x004DC419 - 0x004DC421 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DC419(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004DC419: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004DC8C1(); return; /* tail jmp 0x004DC8C1 */

}

/**
 * sub_004DC421
 * Original: 0x004DC421 - 0x004DC429 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DC421(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004DC421: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004DC8C1(); return; /* tail jmp 0x004DC8C1 */

}

/**
 * sub_004DC429
 * Original: 0x004DC429 - 0x004DC430 (7 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DC429(void)
{

loc_004DC429: ;
    eax = MEM32(ecx + 0x18);
    eax = MEM32(eax + 0x3C);
    esp += 4; return; /* ret */

}

/**
 * sub_004DC430
 * Original: 0x004DC430 - 0x004DC446 (22 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DC430(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DC430: ;
    ecx = MEM32(0x90E7AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x004DC43Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004DC438u); } /* indirect call */
    }

loc_004DC43B: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    SET_LO8(ecx, (CMP_GE(_fas, _fbs)) ? 1 : 0); /* setge */
    SET_LO8(eax, LO8(ecx));
    esp += 4; return; /* ret */

}

/**
 * sub_004DC446
 * Original: 0x004DC446 - 0x004DC45C (22 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DC446(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DC446: ;
    ecx = MEM32(0x90E7AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x004DC451u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004DC44Eu); } /* indirect call */
    }

loc_004DC451: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    SET_LO8(ecx, (CMP_GE(_fas, _fbs)) ? 1 : 0); /* setge */
    SET_LO8(eax, LO8(ecx));
    esp += 4; return; /* ret */

}

/**
 * sub_004DC45C
 * Original: 0x004DC45C - 0x004DC478 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004DC45C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DC45C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ecx + 0x18);
    MEM32(ebp + 8) = eax;
    eax = ebp + 8;
    PUSH32(esp, eax);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DC474u); RECOMP_ABI_CALL(0x004DD750u, sub_004DD750); /* call 0x004DD750 */

loc_004DC474: ;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DC478
 * Original: 0x004DC478 - 0x004DC494 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004DC478(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DC478: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ecx + 0x18);
    MEM32(ebp + 8) = eax;
    eax = ebp + 8;
    PUSH32(esp, eax);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DC490u); RECOMP_ABI_CALL(0x004DD8B2u, sub_004DD8B2); /* call 0x004DD8B2 */

loc_004DC490: ;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DC494
 * Original: 0x004DC494 - 0x004DC533 (159 bytes, 52 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DC494(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004DC494: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ebp = esi + 4;
    ebx = esi + 8;
    PUSH32(esp, 0);
    MEM32(esi) = 0x86CAD0;
    MEM32(ebp) = 0x86CB68;
    MEM32(ebx) = 0x86CB88;
    MEM32(esi + 0xC) = 0x86CAC4;
    PUSH32(esp, 0x004DC4C1u); RECOMP_ABI_CALL(0x004DC1B0u, sub_004DC1B0); /* call 0x004DC1B0 */

loc_004DC4C1: ;
    edi = esi + 0x18;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x004DC4CDu); RECOMP_ABI_CALL(0x004DBFC0u, sub_004DBFC0); /* call 0x004DBFC0 */

loc_004DC4CD: ;
    PUSH32(esp, 0x004DC4D2u); RECOMP_ABI_CALL(0x004E34BFu, sub_004E34BF); /* call 0x004E34BF */

loc_004DC4D2: ;
    _fa = (uint32_t)(MEM8(esi + 0x15)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x15), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004DC4DC; /* je: equal / zero */

loc_004DC4D8: ;
    PUSH32(esp, 2);
    goto loc_004DC4ED;

loc_004DC4DC: ;
    PUSH32(esp, 0x004DC4E1u); RECOMP_ABI_CALL(0x004DC997u, sub_004DC997); /* call 0x004DC997 */

loc_004DC4E1: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x004DC4E8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004DC4E5u); } /* indirect call */
    }

loc_004DC4E8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004DC4F3; /* jne: not equal / not zero */

loc_004DC4EC: ;
    PUSH32(esp, eax);

loc_004DC4ED: ;
    PUSH32(esp, 0x004DC4F2u); RECOMP_ABI_CALL(0x00453DC0u, sub_00453DC0); /* call 0x00453DC0 */

loc_004DC4F2: ;
    POP32(esp, ecx);

loc_004DC4F3: ;
    MEM32(0x90E7AC) = MEM32(0x90E7AC) & 0;
    _fa = (uint32_t)(MEM32(0x90E7AC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = MEM32(edi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004DC507; /* je: equal / zero */

loc_004DC500: ;
    ecx = edi;
    PUSH32(esp, 0x004DC507u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004DC507: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004DC513; /* je: equal / zero */

loc_004DC50E: ;
    PUSH32(esp, 0x004DC513u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004DC513: ;
    ecx = ebx;
    MEM32(esi + 0xC) = 0x86CA8C;
    PUSH32(esp, 0x004DC521u); RECOMP_ABI_CALL(0x00608517u, sub_00608517); /* call 0x00608517 */

loc_004DC521: ;
    ecx = ebp;
    PUSH32(esp, 0x004DC528u); RECOMP_ABI_CALL(0x004AD93Du, sub_004AD93D); /* call 0x004AD93D */

loc_004DC528: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_006086B5(); return; /* tail jmp 0x006086B5 */

}

/**
 * sub_004DC533
 * Original: 0x004DC533 - 0x004DC53D (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DC533(void)
{

loc_004DC533: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x004DC53Au); RECOMP_ABI_CALL(0x004DC1B0u, sub_004DC1B0); /* call 0x004DC1B0 */

loc_004DC53A: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DC53D
 * Original: 0x004DC53D - 0x004DC5A4 (103 bytes, 41 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DC53D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DC53D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x004DC547u); RECOMP_ABI_CALL(0x004DC960u, sub_004DC960); /* call 0x004DC960 */

loc_004DC547: ;
    ecx = MEM32(esp + 0x10);
    edi = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x004DC552u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004DC54Fu); } /* indirect call */
    }

loc_004DC552: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x20);
    ebx = eax;
    PUSH32(esp, 0x004DC560u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004DC560: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004DC572; /* je: equal / zero */

loc_004DC567: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = eax;
    PUSH32(esp, 0x004DC570u); RECOMP_ABI_CALL(0x004DD485u, sub_004DD485); /* call 0x004DD485 */

loc_004DC570: ;
    goto loc_004DC574;

loc_004DC572: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004DC574: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004DC57Au); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004DC57A: ;
    ecx = eax;
    PUSH32(esp, 0x004DC581u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004DC581: ;
    PUSH32(esp, eax);
    ecx = esi + 0x10;
    PUSH32(esp, 0x004DC58Au); RECOMP_ABI_CALL(0x004DBF93u, sub_004DBF93); /* call 0x004DBF93 */

loc_004DC58A: ;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, 3);
    PUSH32(esp, 0x004DC594u); RECOMP_ABI_CALL(0x004E6BABu, sub_004E6BAB); /* call 0x004E6BAB */

loc_004DC594: ;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, 4);
    PUSH32(esp, 0x004DC59Eu); RECOMP_ABI_CALL(0x004E6BABu, sub_004E6BAB); /* call 0x004E6BAB */

loc_004DC59E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DC5A4
 * Original: 0x004DC5A4 - 0x004DC5D8 (52 bytes, 17 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DC5A4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DC5A4: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 8), 0 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004DC5D4; /* je: equal / zero */

loc_004DC5AE: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 6);
    PUSH32(esp, 0x004DC5B8u); RECOMP_ABI_CALL(0x004E6BABu, sub_004E6BAB); /* call 0x004E6BAB */

loc_004DC5B8: ;
    eax = MEM32(esi + 0xC);
    eax = MEM32(eax + 0x34);
    ecx = MEM32(eax + 0x10);
    PUSH32(esp, 0x004DC5C6u); RECOMP_ABI_CALL(0x004AFA64u, sub_004AFA64); /* call 0x004AFA64 */

loc_004DC5C6: ;
    eax = MEM32(esi + 0xC);
    eax = MEM32(eax + 0x34);
    ecx = MEM32(eax + 0x2C);
    PUSH32(esp, 0x004DC5D4u); RECOMP_ABI_CALL(0x004B12C9u, sub_004B12C9); /* call 0x004B12C9 */

loc_004DC5D4: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004DC5D8
 * Original: 0x004DC5D8 - 0x004DC759 (385 bytes, 151 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DC5D8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004DC5D8: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    MEM8(esp + 0xB) = 0;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x004DC5E7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004DC5E4u); } /* indirect call */
    }

loc_004DC5E7: ;
    _fa = (uint32_t)(MEM8(esi + 0x52)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x52), 0 (8-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_004DC74C; /* je: equal / zero */

loc_004DC5F3: ;
    eax = MEM32(esi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 4);
    POP32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x004DC5FFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004DC5FCu); } /* indirect call */
    }

loc_004DC5FF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004DC627; /* je: equal / zero */

loc_004DC603: ;
    eax = MEM32(esi + 0x18);
    eax = MEM32(eax + 0x28);
    eax = MEM32(eax + 8);
    PUSH32(esp, 0x6C6F676E);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004DC617u); RECOMP_ABI_CALL(0x005E2450u, sub_005E2450); /* call 0x005E2450 */

loc_004DC617: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_004DC627; /* jne: not equal / not zero */

loc_004DC61D: ;
    PUSH32(esp, 2);
    POP32(esp, edi);
    ebp = edi;
    MEM8(esp + 0x13) = 1;

loc_004DC627: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x74); PUSH32(esp, 0x004DC62Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004DC62Bu); } /* indirect call */
    }

loc_004DC62E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ebx = 0x636F6E6E;
    if (CMP_EQ(_fa, _fb)) goto loc_004DC68D; /* je: equal / zero */

loc_004DC637: ;
    eax = ZX8(MEM8(esi + 0x14));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_004DC670; /* je: equal / zero */

loc_004DC641: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_004DC65B; /* je: equal / zero */

loc_004DC644: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_004DC68D; /* jne: not equal / not zero */

loc_004DC647: ;
    eax = MEM32(esi + 0x18);
    eax = MEM32(eax + 0x28);
    _fa = (uint32_t)(MEM8(eax + 0x24)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x24), LO8(ecx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004DC68D; /* je: equal / zero */

loc_004DC652: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x706C7567);
    goto loc_004DC662;

loc_004DC65B: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x6F6E6C6E);

loc_004DC662: ;
    PUSH32(esp, 0x004DC667u); RECOMP_ABI_CALL(0x00453B10u, sub_00453B10); /* call 0x00453B10 */

loc_004DC667: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_004DC68D; /* jg: greater (signed >) */

loc_004DC66E: ;
    goto loc_004DC682;

loc_004DC670: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x004DC678u); RECOMP_ABI_CALL(0x00453B10u, sub_00453B10); /* call 0x00453B10 */

loc_004DC678: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2B6F6E6C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2B6F6E6C (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004DC68D; /* je: equal / zero */

loc_004DC682: ;
    PUSH32(esp, 3);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    MEM8(esp + 0x13) = 1;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_004DC68D: ;
    _fa = (uint32_t)(MEM8(esp + 0x13)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0x13), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004DC739; /* je: equal / zero */

loc_004DC698: ;
    eax = MEM32(esi + 0x18);
    eax = MEM32(eax + 0x24);
    ecx = MEM32(eax + 8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x004DC6A8u); RECOMP_ABI_CALL(0x004E4ABEu, sub_004E4ABE); /* call 0x004E4ABE */

loc_004DC6A8: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x004DC6B0u); RECOMP_ABI_CALL(0x004DC1B0u, sub_004DC1B0); /* call 0x004DC1B0 */

loc_004DC6B0: ;
    PUSH32(esp, 0x004DC6B5u); RECOMP_ABI_CALL(0x00454800u, sub_00454800); /* call 0x00454800 */

loc_004DC6B5: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x004DC6BFu); RECOMP_ABI_CALL(0x00453B10u, sub_00453B10); /* call 0x00453B10 */

loc_004DC6BF: ;
    edi = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2D647570) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x2D647570 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004DC6D3; /* jne: not equal / not zero */

loc_004DC6CF: ;
    ebp = eax;
    goto loc_004DC720;

loc_004DC6D3: ;
    ebx = 0x2B6F6E6C;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004DC707; /* jne: not equal / not zero */

loc_004DC6DC: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x6F6E6C6E);
    PUSH32(esp, 0x004DC6EAu); RECOMP_ABI_CALL(0x00453B10u, sub_00453B10); /* call 0x00453B10 */

loc_004DC6EA: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004DC705; /* jne: not equal / not zero */

loc_004DC6F2: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x706C7567);
    PUSH32(esp, 0x004DC700u); RECOMP_ABI_CALL(0x00453B10u, sub_00453B10); /* call 0x00453B10 */

loc_004DC700: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_004DC707;

loc_004DC705: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004DC707: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004DC720; /* jne: not equal / not zero */

loc_004DC70C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004DC714; /* jne: not equal / not zero */

loc_004DC710: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004DC720; /* jne: not equal / not zero */

loc_004DC714: ;
    PUSH32(esp, 3);
    POP32(esp, ebp);
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x004DC720u); RECOMP_ABI_CALL(0x004DC1B0u, sub_004DC1B0); /* call 0x004DC1B0 */

loc_004DC720: ;
    eax = MEM32(esi + 0x18);
    eax = MEM32(eax + 0x24);
    ecx = MEM32(eax + 8);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x004DC72Fu); RECOMP_ABI_CALL(0x004E4ABEu, sub_004E4ABE); /* call 0x004E4ABE */

loc_004DC72F: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004DC739; /* jne: not equal / not zero */

loc_004DC734: ;
    PUSH32(esp, 0x004DC739u); RECOMP_ABI_CALL(0x00453A10u, sub_00453A10); /* call 0x00453A10 */

loc_004DC739: ;
    SET_LO8(eax, MEM8(esi + 0x14));
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    eax = ZX8(LO8(eax));
    PUSH32(esp, 3);
    POP32(esp, ecx);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM8(esi + 0x14) = LO8(edx);

loc_004DC74C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(esp + 0xB)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0xB), LO8(eax) (8-bit) */
    POP32(esp, edi);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004DC759
 * Original: 0x004DC759 - 0x004DC778 (31 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DC759(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004DC759: ;
    PUSH32(esp, 0x004DC75Eu); RECOMP_ABI_CALL(0x004DC960u, sub_004DC960); /* call 0x004DC960 */

loc_004DC75E: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x54);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x004DC76Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004DC76Au); } /* indirect call */
    }

loc_004DC76C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004DC777; /* je: equal / zero */

loc_004DC770: ;
    ecx = eax;
    g_seh_ebp = ebp; sub_004DC2A7(); return; /* tail jmp 0x004DC2A7 */

loc_004DC777: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004DC778
 * Original: 0x004DC778 - 0x004DC7D2 (90 bytes, 29 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DC778(void)
{

loc_004DC778: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, 4);
    PUSH32(esp, 0x004DC785u); RECOMP_ABI_CALL(0x004E6BABu, sub_004E6BAB); /* call 0x004E6BAB */

loc_004DC785: ;
    PUSH32(esp, 0x004DC78Au); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004DC78A: ;
    ecx = eax;
    PUSH32(esp, 0x004DC791u); RECOMP_ABI_CALL(0x004E3427u, sub_004E3427); /* call 0x004E3427 */

loc_004DC791: ;
    eax = MEM32(esi + 0x18);
    eax = MEM32(eax + 0x24);
    ecx = MEM32(eax + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004DC79Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004DC79Cu); } /* indirect call */
    }

loc_004DC79F: ;
    PUSH32(esp, 0x004DC7A4u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004DC7A4: ;
    ecx = eax;
    PUSH32(esp, 0x004DC7ABu); RECOMP_ABI_CALL(0x004E3427u, sub_004E3427); /* call 0x004E3427 */

loc_004DC7AB: ;
    eax = MEM32(esi + 0x18);
    eax = MEM32(eax + 0x30);
    PUSH32(esp, MEM32(eax + 0xAC));
    PUSH32(esp, 0x004DC7BCu); RECOMP_ABI_CALL(0x005E07C0u, sub_005E07C0); /* call 0x005E07C0 */

loc_004DC7BC: ;
    eax = MEM32(esi + 0x18);
    eax = MEM32(eax + 0x28);
    PUSH32(esp, MEM32(eax + 8));
    PUSH32(esp, 0x004DC7CAu); RECOMP_ABI_CALL(0x005E2CD0u, sub_005E2CD0); /* call 0x005E2CD0 */

loc_004DC7CA: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM8(esi + 0x53) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004DC7D2
 * Original: 0x004DC7D2 - 0x004DC8C1 (239 bytes, 77 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004DC7D2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DC7D2: ;
    PUSH32(esp, ebp);
    ebp = esp + -132;
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8E19F0);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    MEM32(ebp + 0x80) = eax;
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x18);
    eax = MEM32(eax + 0x28);
    ebx = MEM32(eax + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x004DC7FFu); RECOMP_ABI_CALL(0x005E2DF0u, sub_005E2DF0); /* call 0x005E2DF0 */

loc_004DC7FF: ;
    eax = MEM32(edi + 0x18);
    eax = MEM32(eax + 0x30);
    PUSH32(esp, MEM32(eax + 0xAC));
    PUSH32(esp, 0x004DC810u); RECOMP_ABI_CALL(0x005E1740u, sub_005E1740); /* call 0x005E1740 */

loc_004DC810: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x86CBC8);
    esi = 0x100;
    eax = ebp + -128;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    MEM8(ebp + -128) = 0;
    PUSH32(esp, 0x004DC82Au); RECOMP_ABI_CALL(0x005E4200u, sub_005E4200); /* call 0x005E4200 */

loc_004DC82A: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x86CBC0);
    eax = ebp + -128;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004DC83Bu); RECOMP_ABI_CALL(0x005E4200u, sub_005E4200); /* call 0x005E4200 */

loc_004DC83B: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x86CBB8);
    eax = ebp + -128;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004DC84Cu); RECOMP_ABI_CALL(0x005E4200u, sub_005E4200); /* call 0x005E4200 */

loc_004DC84C: ;
    PUSH32(esp, 0x6010084);
    PUSH32(esp, 0x86CBAC);
    eax = ebp + -128;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004DC860u); RECOMP_ABI_CALL(0x005E4510u, sub_005E4510); /* call 0x005E4510 */

loc_004DC860: ;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    eax = ebp + -128;
    PUSH32(esp, eax);
    PUSH32(esp, 0x73656C65);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x004DC876u); RECOMP_ABI_CALL(0x005E20B0u, sub_005E20B0); /* call 0x005E20B0 */

loc_004DC876: ;
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x86CBA4);
    PUSH32(esp, 0x70726976);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x004DC888u); RECOMP_ABI_CALL(0x005E20B0u, sub_005E20B0); /* call 0x005E20B0 */

loc_004DC888: ;
    ecx = MEM32(edi + 0x18);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 5);
    PUSH32(esp, 0x004DC895u); RECOMP_ABI_CALL(0x004E6BABu, sub_004E6BAB); /* call 0x004E6BAB */

loc_004DC895: ;
    eax = MEM32(edi + 0x18);
    eax = MEM32(eax + 0x34);
    ecx = MEM32(eax + 0x24);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x8C));
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004DC8A9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004DC8A6u); } /* indirect call */
    }

loc_004DC8A9: ;
    ecx = MEM32(ebp + 0x80);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    PUSH32(esp, 0x004DC8B7u); RECOMP_ABI_CALL(0x005CFF80u, sub_005CFF80); /* call 0x005CFF80 */

loc_004DC8B7: ;
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x84;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DC8C1
 * Original: 0x004DC8C1 - 0x004DC8E3 (34 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DC8C1(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DC8C1: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004DC8C9u); RECOMP_ABI_CALL(0x004DC494u, sub_004DC494); /* call 0x004DC494 */

loc_004DC8C9: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004DC8DD; /* je: equal / zero */

loc_004DC8D0: ;
    PUSH32(esp, 0x004DC8D5u); RECOMP_ABI_CALL(0x004DC960u, sub_004DC960); /* call 0x004DC960 */

loc_004DC8D5: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004DC8DDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004DC8DAu); } /* indirect call */
    }

loc_004DC8DD: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DC8E3
 * Original: 0x004DC8E3 - 0x004DC940 (93 bytes, 33 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DC8E3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004DC8E3: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004DC8EBu); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004DC8EB: ;
    ecx = eax;
    PUSH32(esp, 0x004DC8F2u); RECOMP_ABI_CALL(0x004E3427u, sub_004E3427); /* call 0x004E3427 */

loc_004DC8F2: ;
    eax = MEM32(esi + 0x18);
    eax = MEM32(eax + 0x24);
    ecx = MEM32(eax + 8);
    PUSH32(esp, 0x004DC900u); RECOMP_ABI_CALL(0x004E4AFCu, sub_004E4AFC); /* call 0x004E4AFC */

loc_004DC900: ;
    ecx = esi;
    PUSH32(esp, 0x004DC907u); RECOMP_ABI_CALL(0x004DC5D8u, sub_004DC5D8); /* call 0x004DC5D8 */

loc_004DC907: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004DC93E; /* je: equal / zero */

loc_004DC90B: ;
    PUSH32(esp, 0x004DC910u); RECOMP_ABI_CALL(0x00454800u, sub_00454800); /* call 0x00454800 */

loc_004DC910: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x74); PUSH32(esp, 0x004DC917u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004DC914u); } /* indirect call */
    }

loc_004DC917: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004DC92A; /* je: equal / zero */

loc_004DC91B: ;
    eax = MEM32(esi + 0x18);
    eax = MEM32(eax + 0x28);
    PUSH32(esp, MEM32(eax + 8));
    PUSH32(esp, 0x004DC929u); RECOMP_ABI_CALL(0x005E33E0u, sub_005E33E0); /* call 0x005E33E0 */

loc_004DC929: ;
    POP32(esp, ecx);

loc_004DC92A: ;
    eax = MEM32(esi + 0x18);
    eax = MEM32(eax + 0x24);
    ecx = MEM32(eax + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004DC938u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004DC935u); } /* indirect call */
    }

loc_004DC938: ;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00454800(); return; /* tail jmp 0x00454800 */

loc_004DC93E: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004DC940
 * Original: 0x004DC940 - 0x004DC94A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DC940(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004DC940: ;
    ecx = MEM32(0x90E7B4);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax)); return; /* indirect tail jmp */

}

/**
 * sub_004DC94A
 * Original: 0x004DC94A - 0x004DC955 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DC94A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004DC94A: ;
    ecx = MEM32(0x90E7B4);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 4)); return; /* indirect tail jmp */

}

/**
 * sub_004DC955
 * Original: 0x004DC955 - 0x004DC960 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DC955(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004DC955: ;
    ecx = MEM32(0x90E7B4);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 8)); return; /* indirect tail jmp */

}

/**
 * sub_004DC960
 * Original: 0x004DC960 - 0x004DC96B (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DC960(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004DC960: ;
    ecx = MEM32(0x90E7B4);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0xC)); return; /* indirect tail jmp */

}

/**
 * sub_004DC96B
 * Original: 0x004DC96B - 0x004DC976 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DC96B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004DC96B: ;
    ecx = MEM32(0x90E7B4);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x10)); return; /* indirect tail jmp */

}

/**
 * sub_004DC976
 * Original: 0x004DC976 - 0x004DC981 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DC976(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004DC976: ;
    ecx = MEM32(0x90E7B4);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x14)); return; /* indirect tail jmp */

}

/**
 * sub_004DC981
 * Original: 0x004DC981 - 0x004DC98C (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DC981(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004DC981: ;
    ecx = MEM32(0x90E7B4);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x18)); return; /* indirect tail jmp */

}

/**
 * sub_004DC98C
 * Original: 0x004DC98C - 0x004DC997 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DC98C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004DC98C: ;
    ecx = MEM32(0x90E7B4);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x1C)); return; /* indirect tail jmp */

}

/**
 * sub_004DC997
 * Original: 0x004DC997 - 0x004DC9A2 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DC997(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004DC997: ;
    ecx = MEM32(0x90E7B4);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x20)); return; /* indirect tail jmp */

}

/**
 * sub_004DC9A2
 * Original: 0x004DC9A2 - 0x004DC9AD (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DC9A2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004DC9A2: ;
    ecx = MEM32(0x90E7B4);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x24)); return; /* indirect tail jmp */

}

/**
 * sub_004DC9AD
 * Original: 0x004DC9AD - 0x004DC9B8 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DC9AD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004DC9AD: ;
    ecx = MEM32(0x90E7B4);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x28)); return; /* indirect tail jmp */

}

/**
 * sub_004DC9B8
 * Original: 0x004DC9B8 - 0x004DC9C3 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DC9B8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004DC9B8: ;
    ecx = MEM32(0x90E7B4);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x2C)); return; /* indirect tail jmp */

}

/**
 * sub_004DC9C3
 * Original: 0x004DC9C3 - 0x004DC9CE (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DC9C3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004DC9C3: ;
    ecx = MEM32(0x90E7B4);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x30)); return; /* indirect tail jmp */

}

/**
 * sub_004DC9CE
 * Original: 0x004DC9CE - 0x004DC9D9 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DC9CE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004DC9CE: ;
    ecx = MEM32(0x90E7B4);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x34)); return; /* indirect tail jmp */

}

/**
 * sub_004DC9D9
 * Original: 0x004DC9D9 - 0x004DC9E4 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DC9D9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004DC9D9: ;
    ecx = MEM32(0x90E7B4);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x38)); return; /* indirect tail jmp */

}

/**
 * sub_004DC9E4
 * Original: 0x004DC9E4 - 0x004DC9EF (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DC9E4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004DC9E4: ;
    ecx = MEM32(0x90E7B4);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x3C)); return; /* indirect tail jmp */

}

/**
 * sub_004DC9EF
 * Original: 0x004DC9EF - 0x004DC9FA (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DC9EF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004DC9EF: ;
    ecx = MEM32(0x90E7B4);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x40)); return; /* indirect tail jmp */

}

/**
 * sub_004DC9FA
 * Original: 0x004DC9FA - 0x004DCA05 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DC9FA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004DC9FA: ;
    ecx = MEM32(0x90E7B4);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x44)); return; /* indirect tail jmp */

}

/**
 * sub_004DCA05
 * Original: 0x004DCA05 - 0x004DCA10 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DCA05(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004DCA05: ;
    ecx = MEM32(0x90E7B4);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x48)); return; /* indirect tail jmp */

}

/**
 * sub_004DCA10
 * Original: 0x004DCA10 - 0x004DCA1B (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DCA10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004DCA10: ;
    ecx = MEM32(0x90E7B4);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x4C)); return; /* indirect tail jmp */

}

/**
 * sub_004DCA1B
 * Original: 0x004DCA1B - 0x004DCA26 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DCA1B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004DCA1B: ;
    ecx = MEM32(0x90E7B4);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x50)); return; /* indirect tail jmp */

}

/**
 * sub_004DCA26
 * Original: 0x004DCA26 - 0x004DCA2F (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DCA26(void)
{

loc_004DCA26: ;
    eax = ecx;
    MEM32(eax) = 0x86CBD0;
    esp += 4; return; /* ret */

}

/**
 * sub_004DCA2F
 * Original: 0x004DCA2F - 0x004DCA36 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DCA2F(void)
{

loc_004DCA2F: ;
    MEM32(ecx) = 0x86CBD0;
    esp += 4; return; /* ret */

}

/**
 * sub_004DCA36
 * Original: 0x004DCA36 - 0x004DCA53 (29 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DCA36(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DCA36: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x86CBD0;
    if (TEST_Z(_fa, _fb)) goto loc_004DCA4D; /* je: equal / zero */

loc_004DCA46: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004DCA4Cu); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_004DCA4C: ;
    POP32(esp, ecx);

loc_004DCA4D: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DCA53
 * Original: 0x004DCA53 - 0x004DCAAD (90 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004DCA53(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DCA53: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    edx = MEM32(ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x10);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x004DCA69u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004DCA67u); } /* indirect call */
    }

loc_004DCA69: ;
    edi = MEM32(ebp + 8);
    PUSH32(esp, MEM32(edi));
    esi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DCA75u); RECOMP_ABI_CALL(0x005D0020u, sub_005D0020); /* call 0x005D0020 */

loc_004DCA75: ;
    edx = MEM32(ebx);
    POP32(esp, ecx);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = ebx;
    MEM32(ebp + 0xC) = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x004DCA86u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004DCA84u); } /* indirect call */
    }

loc_004DCA86: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    MEM32(esi) = eax;
    PUSH32(esp, MEM32(edi));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DCA93u); RECOMP_ABI_CALL(0x005CFAF0u, sub_005CFAF0); /* call 0x005CFAF0 */

loc_004DCA93: ;
    eax = MEM32(edi + 4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = eax;
    eax = MEM32(edi + 8);
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 8) = eax;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_004DCAAD
 * Original: 0x004DCAAD - 0x004DCAD8 (43 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DCAAD(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DCAAD: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi));
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004DCAC0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004DCABDu); } /* indirect call */
    }

loc_004DCAC0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = eax;
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = eax;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004DCAD5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004DCAD2u); } /* indirect call */
    }

loc_004DCAD5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004DCAD8
 * Original: 0x004DCAD8 - 0x004DCB2E (86 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004DCAD8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DCAD8: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x14);
    eax = MEM32(edi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x10);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004DCAEEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004DCAECu); } /* indirect call */
    }

loc_004DCAEE: ;
    PUSH32(esp, MEM32(ebp + 8));
    esi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DCAF8u); RECOMP_ABI_CALL(0x005D0020u, sub_005D0020); /* call 0x005D0020 */

loc_004DCAF8: ;
    edx = MEM32(edi);
    POP32(esp, ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = edi;
    MEM32(ebp + 0x14) = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x004DCB07u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004DCB05u); } /* indirect call */
    }

loc_004DCB07: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    MEM32(esi) = eax;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DCB15u); RECOMP_ABI_CALL(0x005CFAF0u, sub_005CFAF0); /* call 0x005CFAF0 */

loc_004DCB15: ;
    eax = MEM32(ebp + 0x10);
    MEM32(esi + 4) = eax;
    eax = MEM32(ebp + 0xC);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 8) = eax;
    POP32(esp, edi);
    MEM32(esi + 0xC) = ebx;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_004DCB2E
 * Original: 0x004DCB2E - 0x004DCB7C (78 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DCB2E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DCB2E: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004DCB38; /* jne: not equal / not zero */

loc_004DCB35: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_004DCB38: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x004DCB47u); RECOMP_ABI_CALL(0x005D0020u, sub_005D0020); /* call 0x005D0020 */

loc_004DCB47: ;
    POP32(esp, ecx);
    edi = eax;
    goto loc_004DCB6F;

loc_004DCB4C: ;
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x004DCB53u); RECOMP_ABI_CALL(0x005D0020u, sub_005D0020); /* call 0x005D0020 */

loc_004DCB53: ;
    POP32(esp, ecx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_G(_fas, _fbs)) eax = edi; /* cmovg */
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x004DCB65u); RECOMP_ABI_CALL(0x005CC550u, sub_005CC550); /* call 0x005CC550 */

loc_004DCB65: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004DCB78; /* je: equal / zero */

loc_004DCB6C: ;
    esi = MEM32(esi + 0xC);

loc_004DCB6F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004DCB4C; /* jne: not equal / not zero */

loc_004DCB73: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004DCB75: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_004DCB78: ;
    eax = esi;
    goto loc_004DCB75;

}

/**
 * sub_004DCB7C
 * Original: 0x004DCB7C - 0x004DCBBB (63 bytes, 31 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DCB7C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DCB7C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x18);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_004DCB97; /* je: equal / zero */

loc_004DCB8A: ;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004DCB97; /* je: equal / zero */

loc_004DCB91: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004DCB97u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004DCB94u); } /* indirect call */
    }

loc_004DCB97: ;
    edi = MEM32(esp + 0x14);
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x1C);
    PUSH32(esp, ebx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004DCBA9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004DCBA7u); } /* indirect call */
    }

loc_004DCBA9: ;
    MEM32(esi + 0x14) = ebx;
    MEM32(esi + 0x18) = eax;
    MEM8(eax) = 0;
    MEM32(esi + 0x1C) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004DCBBB
 * Original: 0x004DCBBB - 0x004DCBF6 (59 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DCBBB(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DCBBB: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004DCBC3u); RECOMP_ABI_CALL(0x004E6E10u, sub_004E6E10); /* call 0x004E6E10 */

loc_004DCBC3: ;
    SET_LO8(eax, MEM8(esp + 0x10));
    PUSH32(esp, MEM32(esp + 0xC));
    MEM8(esi + 8) = LO8(eax);
    PUSH32(esp, MEM32(esp + 0xC));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    MEM32(esi) = 0x86CBE0;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x18) = eax;
    MEM32(esi + 0x1C) = eax;
    PUSH32(esp, 0x004DCBF0u); RECOMP_ABI_CALL(0x004DCB7Cu, sub_004DCB7C); /* call 0x004DCB7C */

loc_004DCBF0: ;
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004DCBF6
 * Original: 0x004DCBF6 - 0x004DCBFA (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DCBF6(void)
{

loc_004DCBF6: ;
    eax = MEM32(ecx + 0x18);
    esp += 4; return; /* ret */

}

/**
 * sub_004DCBFA
 * Original: 0x004DCBFA - 0x004DCC43 (73 bytes, 23 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DCBFA(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DCBFA: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004DCC02u); RECOMP_ABI_CALL(0x004E6E10u, sub_004E6E10); /* call 0x004E6E10 */

loc_004DCC02: ;
    PUSH32(esp, MEM32(esp + 0x10));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = esi;
    MEM32(esi) = 0x86CBE0;
    MEM8(esi + 8) = LO8(eax);
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x18) = eax;
    MEM32(esi + 0x1C) = eax;
    PUSH32(esp, 0x004DCC2Bu); RECOMP_ABI_CALL(0x004DCB7Cu, sub_004DCB7C); /* call 0x004DCB7C */

loc_004DCC2B: ;
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, MEM32(esi + 0x14));
    PUSH32(esp, MEM32(esi + 0x18));
    PUSH32(esp, 0x004DCC3Au); RECOMP_ABI_CALL(0x005E3F00u, sub_005E3F00); /* call 0x005E3F00 */

loc_004DCC3A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004DCC43
 * Original: 0x004DCC43 - 0x004DCC7F (60 bytes, 23 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DCC43(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DCC43: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x004DCC4Cu); RECOMP_ABI_CALL(0x004E6E10u, sub_004E6E10); /* call 0x004E6E10 */

loc_004DCC4C: ;
    edi = MEM32(esp + 0xC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    MEM32(esi) = 0x86CBE0;
    MEM8(esi + 8) = LO8(eax);
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x18) = eax;
    MEM32(esi + 0x1C) = eax;
    PUSH32(esp, 0x004DCC70u); RECOMP_ABI_CALL(0x005D0020u, sub_005D0020); /* call 0x005D0020 */

loc_004DCC70: ;
    POP32(esp, ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x18) = edi;
    MEM32(esi + 0x14) = eax;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DCC7F
 * Original: 0x004DCC7F - 0x004DCCC6 (71 bytes, 27 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DCC7F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004DCC7F: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = 0x86CBE0;
    if (CMP_EQ(_fa, _fb)) goto loc_004DCC97; /* je: equal / zero */

loc_004DCC8F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi + 0x18));
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004DCC97u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004DCC94u); } /* indirect call */
    }

loc_004DCC97: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004DCCBE; /* je: equal / zero */

loc_004DCC9E: ;
    MEM32(esi + 0x10) = eax;

loc_004DCCA1: ;
    PUSH32(esp, MEM32(esi + 0x1C));
    eax = MEM32(eax + 0xC);
    PUSH32(esp, MEM32(esi + 0x10));
    MEM32(esi + 0xC) = eax;
    PUSH32(esp, 0x004DCCB2u); RECOMP_ABI_CALL(0x004DCAADu, sub_004DCAAD); /* call 0x004DCAAD */

loc_004DCCB2: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi + 0x10) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_004DCCA1; /* jne: not equal / not zero */

loc_004DCCBE: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004E6E22(); return; /* tail jmp 0x004E6E22 */

}

/**
 * sub_004DCCC6
 * Original: 0x004DCCC6 - 0x004DCCEA (36 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DCCC6(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DCCC6: ;
    PUSH32(esp, MEM32(esp + 4));
    PUSH32(esp, MEM32(ecx + 0x18));
    PUSH32(esp, 0x004DCCD2u); RECOMP_ABI_CALL(0x005E3F40u, sub_005E3F40); /* call 0x005E3F40 */

loc_004DCCD2: ;
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(esp + 0x1C));
    PUSH32(esp, MEM32(esp + 0x1C));
    PUSH32(esp, eax);
    PUSH32(esp, 0x004DCCE4u); RECOMP_ABI_CALL(0x005E4A10u, sub_005E4A10); /* call 0x005E4A10 */

loc_004DCCE4: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_004DCCEA
 * Original: 0x004DCCEA - 0x004DCCFB (17 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DCCEA(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DCCEA: ;
    edx = MEM32(ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0x10));
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x004DCCF8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004DCCF5u); } /* indirect call */
    }

loc_004DCCF8: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DCCFB
 * Original: 0x004DCCFB - 0x004DCD17 (28 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DCCFB(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DCCFB: ;
    PUSH32(esp, MEM32(esp + 4));
    PUSH32(esp, MEM32(ecx + 0x18));
    PUSH32(esp, 0x004DCD07u); RECOMP_ABI_CALL(0x005E3F40u, sub_005E3F40); /* call 0x005E3F40 */

loc_004DCD07: ;
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, eax);
    PUSH32(esp, 0x004DCD11u); RECOMP_ABI_CALL(0x005E4400u, sub_005E4400); /* call 0x005E4400 */

loc_004DCD11: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004DCD17
 * Original: 0x004DCD17 - 0x004DCD3E (39 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DCD17(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DCD17: ;
    PUSH32(esp, MEM32(esp + 4));
    PUSH32(esp, MEM32(ecx + 0x18));
    PUSH32(esp, 0x004DCD23u); RECOMP_ABI_CALL(0x005E3F40u, sub_005E3F40); /* call 0x005E3F40 */

loc_004DCD23: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_004DCD2F; /* jne: not equal / not zero */

loc_004DCD29: ;
    eax = MEM32(esp + 8);
    goto loc_004DCD3B;

loc_004DCD2F: ;
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, eax);
    PUSH32(esp, 0x004DCD39u); RECOMP_ABI_CALL(0x005E53B0u, sub_005E53B0); /* call 0x005E53B0 */

loc_004DCD39: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_004DCD3B: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004DCD3E
 * Original: 0x004DCD3E - 0x004DCDDC (158 bytes, 63 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004DCD3E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DCD3E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(esi + 0x18));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DCD51u); RECOMP_ABI_CALL(0x005E5CA0u, sub_005E5CA0); /* call 0x005E5CA0 */

loc_004DCD51: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(esi + 0x14));
    PUSH32(esp, MEM32(esi + 0x18));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DCD60u); RECOMP_ABI_CALL(0x005E6040u, sub_005E6040); /* call 0x005E6040 */

loc_004DCD60: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM8(esi + 8)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 8), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004DCDD6; /* je: equal / zero */

loc_004DCD69: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004DCDD6; /* jl: less (signed <) */

loc_004DCD6D: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(esi + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DCD77u); RECOMP_ABI_CALL(0x004DCB2Eu, sub_004DCB2E); /* call 0x004DCB2E */

loc_004DCD77: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004DCD94; /* je: equal / zero */

loc_004DCD7F: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DCD87u); RECOMP_ABI_CALL(0x005D0020u, sub_005D0020); /* call 0x005D0020 */

loc_004DCD87: ;
    POP32(esp, ecx);
    MEM32(edi + 4) = eax;
    MEM32(edi + 8) = 2;
    goto loc_004DCDD5;

loc_004DCD94: ;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), 0 (32-bit) */
    PUSH32(esp, MEM32(esi + 0x1C));
    PUSH32(esp, MEM32(ebp + 0xC));
    if (CMP_EQ(_fa, _fb)) goto loc_004DCDBD; /* je: equal / zero */

loc_004DCDA0: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DCDA5u); RECOMP_ABI_CALL(0x005D0020u, sub_005D0020); /* call 0x005D0020 */

loc_004DCDA5: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DCDAFu); RECOMP_ABI_CALL(0x004DCAD8u, sub_004DCAD8); /* call 0x004DCAD8 */

loc_004DCDAF: ;
    ecx = MEM32(esi + 0x10);
    MEM32(ecx + 0xC) = eax;
    eax = MEM32(esi + 0x10);
    eax = MEM32(eax + 0xC);
    goto loc_004DCDCF;

loc_004DCDBD: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DCDC2u); RECOMP_ABI_CALL(0x005D0020u, sub_005D0020); /* call 0x005D0020 */

loc_004DCDC2: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DCDCCu); RECOMP_ABI_CALL(0x004DCAD8u, sub_004DCAD8); /* call 0x004DCAD8 */

loc_004DCDCC: ;
    MEM32(esi + 0xC) = eax;

loc_004DCDCF: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x10) = eax;

loc_004DCDD5: ;
    POP32(esp, edi);

loc_004DCDD6: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004DCDDC
 * Original: 0x004DCDDC - 0x004DCE5F (131 bytes, 50 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004DCDDC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DCDDC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0x18));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DCDEFu); RECOMP_ABI_CALL(0x005E5CA0u, sub_005E5CA0); /* call 0x005E5CA0 */

loc_004DCDEF: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0x14));
    PUSH32(esp, MEM32(esi + 0x18));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DCDFEu); RECOMP_ABI_CALL(0x005E4200u, sub_005E4200); /* call 0x005E4200 */

loc_004DCDFE: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM8(esi + 8)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 8), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004DCE59; /* je: equal / zero */

loc_004DCE07: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004DCE59; /* jl: less (signed <) */

loc_004DCE0B: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DCE14u); RECOMP_ABI_CALL(0x004DCB2Eu, sub_004DCB2E); /* call 0x004DCB2E */

loc_004DCE14: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004DCE29; /* je: equal / zero */

loc_004DCE1A: ;
    ecx = MEM32(ebp + 0x10);
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = 1;
    goto loc_004DCE59;

loc_004DCE29: ;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), 0 (32-bit) */
    PUSH32(esp, MEM32(esi + 0x1C));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_004DCE4B; /* je: equal / zero */

loc_004DCE38: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DCE3Du); RECOMP_ABI_CALL(0x004DCAD8u, sub_004DCAD8); /* call 0x004DCAD8 */

loc_004DCE3D: ;
    ecx = MEM32(esi + 0x10);
    MEM32(ecx + 0xC) = eax;
    eax = MEM32(esi + 0x10);
    eax = MEM32(eax + 0xC);
    goto loc_004DCE53;

loc_004DCE4B: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DCE50u); RECOMP_ABI_CALL(0x004DCAD8u, sub_004DCAD8); /* call 0x004DCAD8 */

loc_004DCE50: ;
    MEM32(esi + 0xC) = eax;

loc_004DCE53: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x10) = eax;

loc_004DCE59: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004DCE5F
 * Original: 0x004DCE5F - 0x004DCEC8 (105 bytes, 48 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004DCE5F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DCE5F: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, ebp);
    PUSH32(esp, MEM32(edi + 0x18));
    PUSH32(esp, 0x004DCE70u); RECOMP_ABI_CALL(0x005E5CA0u, sub_005E5CA0); /* call 0x005E5CA0 */

loc_004DCE70: ;
    _fa = (uint32_t)(MEM8(edi + 8)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 8), 0 (8-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004DCEC3; /* je: equal / zero */

loc_004DCE78: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004DCEC3; /* jl: less (signed <) */

loc_004DCE7C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(edi + 0xC);
    ebx = esi;
    goto loc_004DCEA0;

loc_004DCE85: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x004DCE8Bu); RECOMP_ABI_CALL(0x005D0020u, sub_005D0020); /* call 0x005D0020 */

loc_004DCE8B: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, ebp);
    PUSH32(esp, 0x004DCE94u); RECOMP_ABI_CALL(0x005CC550u, sub_005CC550); /* call 0x005CC550 */

loc_004DCE94: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004DCEA6; /* je: equal / zero */

loc_004DCE9B: ;
    ebx = esi;
    esi = MEM32(esi + 0xC);

loc_004DCEA0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004DCE85; /* jne: not equal / not zero */

loc_004DCEA4: ;
    goto loc_004DCEC1;

loc_004DCEA6: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edi + 0xC) (32-bit) */
    eax = MEM32(esi + 0xC);
    if (CMP_NE(_fa, _fb)) goto loc_004DCEB3; /* jne: not equal / not zero */

loc_004DCEAE: ;
    MEM32(edi + 0xC) = eax;
    goto loc_004DCEB6;

loc_004DCEB3: ;
    MEM32(ebx + 0xC) = eax;

loc_004DCEB6: ;
    PUSH32(esp, MEM32(edi + 0x1C));
    PUSH32(esp, esi);
    PUSH32(esp, 0x004DCEBFu); RECOMP_ABI_CALL(0x004DCAADu, sub_004DCAAD); /* call 0x004DCAAD */

loc_004DCEBF: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_004DCEC1: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_004DCEC3: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DCEC8
 * Original: 0x004DCEC8 - 0x004DCF00 (56 bytes, 23 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DCEC8(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DCEC8: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x18);
    MEM8(eax) = 0;
    _fa = (uint32_t)(MEM8(esi + 8)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 8), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004DCEFE; /* je: equal / zero */

loc_004DCED7: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004DCEFE; /* je: equal / zero */

loc_004DCEDE: ;
    MEM32(esi + 0x10) = eax;

loc_004DCEE1: ;
    PUSH32(esp, MEM32(esi + 0x1C));
    eax = MEM32(eax + 0xC);
    PUSH32(esp, MEM32(esi + 0x10));
    MEM32(esi + 0xC) = eax;
    PUSH32(esp, 0x004DCEF2u); RECOMP_ABI_CALL(0x004DCAADu, sub_004DCAAD); /* call 0x004DCAAD */

loc_004DCEF2: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi + 0x10) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_004DCEE1; /* jne: not equal / not zero */

loc_004DCEFE: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004DCF00
 * Original: 0x004DCF00 - 0x004DCF72 (114 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DCF00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DCF00: ;
    ecx = MEM32(0x90E7AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x004DCF0Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004DCF09u); } /* indirect call */
    }

loc_004DCF0C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_004DCF3B; /* jg: greater (signed >) */

loc_004DCF11: ;
    PUSH32(esp, 0x004DCF16u); RECOMP_ABI_CALL(0x004DC960u, sub_004DC960); /* call 0x004DC960 */

loc_004DCF16: ;
    edi = eax;
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x004DCF24u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004DCF24: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004DCF61; /* je: equal / zero */

loc_004DCF2B: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    ecx = eax;

loc_004DCF30: ;
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x004DCF39u); RECOMP_ABI_CALL(0x004DCBBBu, sub_004DCBBB); /* call 0x004DCBBB */

loc_004DCF39: ;
    goto loc_004DCF63;

loc_004DCF3B: ;
    PUSH32(esp, 0x004DCF40u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004DCF40: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x004DCF4Cu); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004DCF4C: ;
    edi = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004DCF61; /* je: equal / zero */

loc_004DCF55: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004DCF5Cu); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004DCF5C: ;
    PUSH32(esp, eax);
    ecx = edi;
    goto loc_004DCF30;

loc_004DCF61: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004DCF63: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004DCF69u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004DCF69: ;
    ecx = eax;
    PUSH32(esp, 0x004DCF70u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004DCF70: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_004DCF72
 * Original: 0x004DCF72 - 0x004DCFE4 (114 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DCF72(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DCF72: ;
    ecx = MEM32(0x90E7AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x004DCF7Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004DCF7Bu); } /* indirect call */
    }

loc_004DCF7E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_004DCFAD; /* jg: greater (signed >) */

loc_004DCF83: ;
    PUSH32(esp, 0x004DCF88u); RECOMP_ABI_CALL(0x004DC960u, sub_004DC960); /* call 0x004DC960 */

loc_004DCF88: ;
    esi = eax;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x004DCF96u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004DCF96: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004DCFD3; /* je: equal / zero */

loc_004DCF9D: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    ecx = eax;

loc_004DCFA2: ;
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x004DCFABu); RECOMP_ABI_CALL(0x004DCBBBu, sub_004DCBBB); /* call 0x004DCBBB */

loc_004DCFAB: ;
    goto loc_004DCFD5;

loc_004DCFAD: ;
    PUSH32(esp, 0x004DCFB2u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004DCFB2: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x004DCFBEu); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004DCFBE: ;
    esi = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004DCFD3; /* je: equal / zero */

loc_004DCFC7: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x004DCFCEu); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004DCFCE: ;
    PUSH32(esp, eax);
    ecx = esi;
    goto loc_004DCFA2;

loc_004DCFD3: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004DCFD5: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004DCFDBu); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004DCFDB: ;
    ecx = eax;
    PUSH32(esp, 0x004DCFE2u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004DCFE2: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004DCFE4
 * Original: 0x004DCFE4 - 0x004DCFFB (23 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DCFE4(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004DCFE4: ;
    PUSH32(esp, MEM32(esp + 4));
    PUSH32(esp, MEM32(ecx + 0x18));
    PUSH32(esp, 0x004DCFF0u); RECOMP_ABI_CALL(0x005E3F40u, sub_005E3F40); /* call 0x005E3F40 */

loc_004DCFF0: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    POP32(esp, ecx);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    POP32(esp, ecx);
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DCFFB
 * Original: 0x004DCFFB - 0x004DD06F (116 bytes, 49 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DCFFB(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DCFFB: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004DD06A; /* je: equal / zero */

loc_004DD007: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004DD06A; /* je: equal / zero */

loc_004DD00B: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x004DD012u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004DD00Fu); } /* indirect call */
    }

loc_004DD012: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x14));
    PUSH32(esp, MEM32(esi + 0x18));
    PUSH32(esp, 0x004DD01Eu); RECOMP_ABI_CALL(0x005E5E10u, sub_005E5E10); /* call 0x005E5E10 */

loc_004DD01E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM8(esi + 8)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 8), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004DD06A; /* je: equal / zero */

loc_004DD027: ;
    _fa = (uint32_t)(MEM8(edi + 8)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 8), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004DD06A; /* je: equal / zero */

loc_004DD02D: ;
    PUSH32(esp, ebx);
    ebx = MEM32(edi + 0xC);
    goto loc_004DD065;

loc_004DD033: ;
    PUSH32(esp, MEM32(ebx));
    PUSH32(esp, MEM32(esi + 0xC));
    PUSH32(esp, 0x004DD03Du); RECOMP_ABI_CALL(0x004DCB2Eu, sub_004DCB2E); /* call 0x004DCB2E */

loc_004DD03D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_004DD062; /* jne: not equal / not zero */

loc_004DD043: ;
    PUSH32(esp, MEM32(edi + 0x1C));
    PUSH32(esp, ebx);
    PUSH32(esp, 0x004DD04Cu); RECOMP_ABI_CALL(0x004DCA53u, sub_004DCA53); /* call 0x004DCA53 */

loc_004DD04C: ;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_004DD059; /* jne: not equal / not zero */

loc_004DD054: ;
    MEM32(esi + 0xC) = eax;
    goto loc_004DD05F;

loc_004DD059: ;
    ecx = MEM32(esi + 0x10);
    MEM32(ecx + 0xC) = eax;

loc_004DD05F: ;
    MEM32(esi + 0x10) = eax;

loc_004DD062: ;
    ebx = MEM32(ebx + 0xC);

loc_004DD065: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004DD033; /* jne: not equal / not zero */

loc_004DD069: ;
    POP32(esp, ebx);

loc_004DD06A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DD06F
 * Original: 0x004DD06F - 0x004DD098 (41 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DD06F(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DD06F: ;
    PUSH32(esp, MEM32(esp + 4));
    PUSH32(esp, MEM32(ecx + 0x18));
    PUSH32(esp, 0x004DD07Bu); RECOMP_ABI_CALL(0x005E3F40u, sub_005E3F40); /* call 0x005E3F40 */

loc_004DD07B: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, 0x82F99C);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, eax);
    PUSH32(esp, 0x004DD092u); RECOMP_ABI_CALL(0x005E50A0u, sub_005E50A0); /* call 0x005E50A0 */

loc_004DD092: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004DD098
 * Original: 0x004DD098 - 0x004DD0BE (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DD098(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DD098: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, 0x82F99C);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(ecx + 0x14));
    PUSH32(esp, MEM32(ecx + 0x18));
    PUSH32(esp, 0x004DD0B8u); RECOMP_ABI_CALL(0x005E4DF0u, sub_005E4DF0); /* call 0x005E4DF0 */

loc_004DD0B8: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004DD0BE
 * Original: 0x004DD0BE - 0x004DD12D (111 bytes, 35 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004DD0BE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DD0BE: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x824) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x824;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8E19F0);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x800);
    edx = ebp + -2052;
    PUSH32(esp, edx);
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, MEM32(ebp + 8));
    MEM32(ebp + -4) = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x004DD0E9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004DD0E6u); } /* indirect call */
    }

loc_004DD0E9: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DD0F0u); RECOMP_ABI_CALL(0x004DCF00u, sub_004DCF00); /* call 0x004DCF00 */

loc_004DD0F0: ;
    POP32(esp, ecx);
    esi = eax;
    eax = ebp + -2052;
    PUSH32(esp, eax);
    ecx = ebp + -2084;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DD105u); RECOMP_ABI_CALL(0x004DCC43u, sub_004DCC43); /* call 0x004DCC43 */

loc_004DD105: ;
    eax = MEM32(esi);
    ecx = ebp + -2084;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x30); PUSH32(esp, 0x004DD113u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004DD110u); } /* indirect call */
    }

loc_004DD113: ;
    ecx = ebp + -2084;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DD11Eu); RECOMP_ABI_CALL(0x004DCC7Fu, sub_004DCC7F); /* call 0x004DCC7F */

loc_004DD11E: ;
    ecx = MEM32(ebp + -4);
    eax = esi;
    POP32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DD129u); RECOMP_ABI_CALL(0x005CFF80u, sub_005CFF80); /* call 0x005CFF80 */

loc_004DD129: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DD12D
 * Original: 0x004DD12D - 0x004DD15E (49 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DD12D(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DD12D: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 8));
    esi = ecx;
    PUSH32(esp, MEM32(esi + 0x18));
    PUSH32(esp, 0x004DD13Cu); RECOMP_ABI_CALL(0x005E5CA0u, sub_005E5CA0); /* call 0x005E5CA0 */

loc_004DD13C: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x004DD147u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004DD144u); } /* indirect call */
    }

loc_004DD147: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, MEM32(esi + 0x14));
    PUSH32(esp, MEM32(esi + 0x18));
    PUSH32(esp, 0x004DD157u); RECOMP_ABI_CALL(0x005E6040u, sub_005E6040); /* call 0x005E6040 */

loc_004DD157: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004DD15E
 * Original: 0x004DD15E - 0x004DD187 (41 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DD15E(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DD15E: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 8));
    esi = ecx;
    PUSH32(esp, MEM32(esi + 0x18));
    PUSH32(esp, 0x004DD16Du); RECOMP_ABI_CALL(0x005E5CA0u, sub_005E5CA0); /* call 0x005E5CA0 */

loc_004DD16D: ;
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, MEM32(esi + 0x14));
    PUSH32(esp, MEM32(esi + 0x18));
    PUSH32(esp, 0x004DD180u); RECOMP_ABI_CALL(0x005E52F0u, sub_005E52F0); /* call 0x005E52F0 */

loc_004DD180: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004DD187
 * Original: 0x004DD187 - 0x004DD1A3 (28 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DD187(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DD187: ;
    PUSH32(esp, MEM32(esp + 4));
    PUSH32(esp, MEM32(ecx + 0x18));
    PUSH32(esp, 0x004DD193u); RECOMP_ABI_CALL(0x005E3F40u, sub_005E3F40); /* call 0x005E3F40 */

loc_004DD193: ;
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, eax);
    PUSH32(esp, 0x004DD19Du); RECOMP_ABI_CALL(0x005E45C0u, sub_005E45C0); /* call 0x005E45C0 */

loc_004DD19D: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004DD1A3
 * Original: 0x004DD1A3 - 0x004DD1CC (41 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DD1A3(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DD1A3: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 8));
    esi = ecx;
    PUSH32(esp, MEM32(esi + 0x18));
    PUSH32(esp, 0x004DD1B2u); RECOMP_ABI_CALL(0x005E5CA0u, sub_005E5CA0); /* call 0x005E5CA0 */

loc_004DD1B2: ;
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, MEM32(esi + 0x14));
    PUSH32(esp, MEM32(esi + 0x18));
    PUSH32(esp, 0x004DD1C5u); RECOMP_ABI_CALL(0x005E4510u, sub_005E4510); /* call 0x005E4510 */

loc_004DD1C5: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004DD1CC
 * Original: 0x004DD1CC - 0x004DD1F9 (45 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DD1CC(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DD1CC: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 8));
    esi = ecx;
    PUSH32(esp, MEM32(esi + 0x18));
    PUSH32(esp, 0x004DD1DBu); RECOMP_ABI_CALL(0x005E5CA0u, sub_005E5CA0); /* call 0x005E5CA0 */

loc_004DD1DB: ;
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, MEM32(esi + 0x14));
    PUSH32(esp, MEM32(esi + 0x18));
    PUSH32(esp, 0x004DD1F2u); RECOMP_ABI_CALL(0x005E4B50u, sub_005E4B50); /* call 0x005E4B50 */

loc_004DD1F2: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004DD1F9
 * Original: 0x004DD1F9 - 0x004DD219 (32 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DD1F9(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DD1F9: ;
    PUSH32(esp, MEM32(esp + 4));
    PUSH32(esp, MEM32(ecx + 0x18));
    PUSH32(esp, 0x004DD205u); RECOMP_ABI_CALL(0x005E3F40u, sub_005E3F40); /* call 0x005E3F40 */

loc_004DD205: ;
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, eax);
    PUSH32(esp, 0x004DD213u); RECOMP_ABI_CALL(0x005E4CD0u, sub_005E4CD0); /* call 0x005E4CD0 */

loc_004DD213: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004DD219
 * Original: 0x004DD219 - 0x004DD273 (90 bytes, 40 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004DD219(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DD219: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x10);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    esi = ecx;
    ecx = MEM32(esi + 0x1C);
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    eax = edi + 1;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x004DD234u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004DD232u); } /* indirect call */
    }

loc_004DD234: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0xC));
    ebx = eax;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DD240u); RECOMP_ABI_CALL(0x005CFAF0u, sub_005CFAF0); /* call 0x005CFAF0 */

loc_004DD240: ;
    PUSH32(esp, MEM32(ebp + 8));
    MEM8(ebx + edi) = 0x20;
    PUSH32(esp, MEM32(esi + 0x18));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DD24Fu); RECOMP_ABI_CALL(0x005E5CA0u, sub_005E5CA0); /* call 0x005E5CA0 */

loc_004DD24F: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, MEM32(esi + 0x14));
    PUSH32(esp, MEM32(esi + 0x18));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DD260u); RECOMP_ABI_CALL(0x005E5FA0u, sub_005E5FA0); /* call 0x005E5FA0 */

loc_004DD260: ;
    ecx = MEM32(esi + 0x1C);
    eax = MEM32(ecx);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004DD26Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004DD269u); } /* indirect call */
    }

loc_004DD26C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004DD273
 * Original: 0x004DD273 - 0x004DD2ED (122 bytes, 58 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004DD273(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DD273: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x10);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004DD2E7; /* je: equal / zero */

loc_004DD282: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x20 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_004DD2E7; /* ja: above (unsigned >) */

loc_004DD287: ;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    esi = eax + ecx + -1;
    MEM32(ebp + 0x10) = ecx;
    if (CMP_BE(_fa, _fb)) goto loc_004DD2E0; /* jbe: below or equal (unsigned <=) */

loc_004DD29A: ;
    PUSH32(esp, ebx);

loc_004DD29B: ;
    eax = esi;
    PUSH32(esp, 7);
    eax = eax & 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, ecx);
    edx = esi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(3) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO8(ebx, 1);
    if (CMP_LE(_fas, _fbs)) goto loc_004DD2B5; /* jle: less or equal (signed <=) */

loc_004DD2B0: ;
    { uint32_t _sv=(uint32_t)(LO8(ebx)), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        SET_LO8(ebx, _sv << _sc);
        _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
      } }
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_004DD2B0; /* jne: not equal / not zero */

loc_004DD2B5: ;
    eax = MEM32(ebp + 8);
    SET_LO8(edx, MEM8(edx + eax));

loc_004DD2BB: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(edx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004DD2C4; /* je: equal / zero */

loc_004DD2BF: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | edi;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_004DD2CB;

loc_004DD2C4: ;
    eax = edi;
    eax = ~eax;
    MEM32(ebp + -4) = MEM32(ebp + -4) & eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_004DD2CB: ;
    { uint32_t _sv=(uint32_t)(edi), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        edi = _sv << _sc;
        _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    { uint32_t _sv=(uint32_t)(LO8(ebx)), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        SET_LO8(ebx, _sv << _sc);
        _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
      } }
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004DD2DF; /* jbe: below or equal (unsigned <=) */

loc_004DD2D9: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004DD2BB; /* jne: not equal / not zero */

loc_004DD2DD: ;
    goto loc_004DD29B;

loc_004DD2DF: ;
    POP32(esp, ebx);

loc_004DD2E0: ;
    eax = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, esi);
    goto loc_004DD2E9;

loc_004DD2E7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004DD2E9: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004DD2ED
 * Original: 0x004DD2ED - 0x004DD340 (83 bytes, 37 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004DD2ED(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DD2ED: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004DD33B; /* jb: below (unsigned <) */

loc_004DD2FB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_004DD33B; /* ja: above (unsigned >) */

loc_004DD300: ;
    ecx = eax + -1;
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(LO8(ecx)) & 31u;
      if (_sc) {
        esi = _sv << _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004DD33B; /* je: equal / zero */

loc_004DD309: ;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);

loc_004DD30D: ;
    eax = MEM32(ebp + 0xC);
    ecx = eax;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(3) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = ecx & 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebp + 0x14), esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004DD32A; /* je: equal / zero */

loc_004DD31F: ;
    edx = 0x80;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((LO8(ecx)) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM8(eax) = MEM8(eax) | LO8(edx);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    goto loc_004DD333;

loc_004DD32A: ;
    edx = 0xFF7F;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((LO8(ecx)) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM8(eax) = MEM8(eax) & LO8(edx);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */

loc_004DD333: ;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        esi = _sv >> _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    if ((_fa != 0)) goto loc_004DD30D; /* jne: not equal / not zero */

loc_004DD33A: ;
    POP32(esp, edi);

loc_004DD33B: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_004DD340
 * Original: 0x004DD340 - 0x004DD3A0 (96 bytes, 44 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004DD340(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DD340: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi + 0xC);
    PUSH32(esp, eax);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = eax;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(3) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM32(ebp + 0xC) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DD362u); RECOMP_ABI_CALL(0x005CFEF0u, sub_005CFEF0); /* call 0x005CFEF0 */

loc_004DD362: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_004DD392;

loc_004DD367: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ebp + 0xC) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_004DD396; /* jae: above or equal (unsigned >=) */

loc_004DD36C: ;
    eax = MEM32(esi + 8);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_004DD38F; /* jne: not equal / not zero */

loc_004DD372: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esi));
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004DD37Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004DD37Au); } /* indirect call */
    }

loc_004DD37D: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 4));
    ecx = edi;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DD38Cu); RECOMP_ABI_CALL(0x004DD2EDu, sub_004DD2ED); /* call 0x004DD2ED */

loc_004DD38C: ;
    _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + MEM32(esi + 4);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004DD38F: ;
    esi = MEM32(esi + 0xC);

loc_004DD392: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004DD367; /* jne: not equal / not zero */

loc_004DD396: ;
    eax = MEM32(ebp + 8);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004DD3A0
 * Original: 0x004DD3A0 - 0x004DD3C0 (32 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DD3A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DD3A0: ;
    PUSH32(esp, MEM32(esp + 4));
    PUSH32(esp, MEM32(ecx + 0x18));
    PUSH32(esp, 0x004DD3ACu); RECOMP_ABI_CALL(0x005E3F40u, sub_005E3F40); /* call 0x005E3F40 */

loc_004DD3AC: ;
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, eax);
    PUSH32(esp, 0x004DD3BAu); RECOMP_ABI_CALL(0x005E4CD0u, sub_005E4CD0); /* call 0x005E4CD0 */

loc_004DD3BA: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004DD3C0
 * Original: 0x004DD3C0 - 0x004DD3ED (45 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DD3C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DD3C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 8));
    esi = ecx;
    PUSH32(esp, MEM32(esi + 0x18));
    PUSH32(esp, 0x004DD3CFu); RECOMP_ABI_CALL(0x005E5CA0u, sub_005E5CA0); /* call 0x005E5CA0 */

loc_004DD3CF: ;
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, MEM32(esi + 0x14));
    PUSH32(esp, MEM32(esi + 0x18));
    PUSH32(esp, 0x004DD3E6u); RECOMP_ABI_CALL(0x005E4BF0u, sub_005E4BF0); /* call 0x005E4BF0 */

loc_004DD3E6: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004DD3ED
 * Original: 0x004DD3ED - 0x004DD3F8 (11 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DD3ED(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DD3ED: ;
    PUSH32(esp, MEM32(ecx + 0x18));
    PUSH32(esp, 0x004DD3F5u); RECOMP_ABI_CALL(0x005D0020u, sub_005D0020); /* call 0x005D0020 */

loc_004DD3F5: ;
    POP32(esp, ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_004DD3F8
 * Original: 0x004DD3F8 - 0x004DD469 (113 bytes, 43 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DD3F8(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DD3F8: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004DD464; /* je: equal / zero */

loc_004DD404: ;
    eax = MEM32(edi + 0x14);
    PUSH32(esp, MEM32(esp + 0x10));
    MEM32(esi + 0x14) = eax;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004DD414u); RECOMP_ABI_CALL(0x004DCB7Cu, sub_004DCB7C); /* call 0x004DCB7C */

loc_004DD414: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x004DD41Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004DD418u); } /* indirect call */
    }

loc_004DD41B: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x14));
    PUSH32(esp, MEM32(esi + 0x18));
    PUSH32(esp, 0x004DD427u); RECOMP_ABI_CALL(0x005E3F00u, sub_005E3F00); /* call 0x005E3F00 */

loc_004DD427: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM8(edi + 8)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 8), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004DD464; /* je: equal / zero */

loc_004DD430: ;
    _fa = (uint32_t)(MEM32(edi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0xC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004DD464; /* je: equal / zero */

loc_004DD436: ;
    MEM8(esi + 8) = 1;
    edi = MEM32(edi + 0xC);

loc_004DD43D: ;
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, edi);
    PUSH32(esp, 0x004DD447u); RECOMP_ABI_CALL(0x004DCA53u, sub_004DCA53); /* call 0x004DCA53 */

loc_004DD447: ;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_004DD454; /* jne: not equal / not zero */

loc_004DD44F: ;
    MEM32(esi + 0xC) = eax;
    goto loc_004DD45A;

loc_004DD454: ;
    ecx = MEM32(esi + 0x10);
    MEM32(ecx + 0xC) = eax;

loc_004DD45A: ;
    MEM32(esi + 0x10) = eax;
    edi = MEM32(edi + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004DD43D; /* jne: not equal / not zero */

loc_004DD464: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004DD469
 * Original: 0x004DD469 - 0x004DD485 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DD469(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DD469: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004DD471u); RECOMP_ABI_CALL(0x004DCC7Fu, sub_004DCC7F); /* call 0x004DCC7F */

loc_004DD471: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004DD47F; /* je: equal / zero */

loc_004DD478: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004DD47Eu); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004DD47E: ;
    POP32(esp, ecx);

loc_004DD47F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DD485
 * Original: 0x004DD485 - 0x004DD4C3 (62 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DD485(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DD485: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004DD48Du); RECOMP_ABI_CALL(0x004E6E10u, sub_004E6E10); /* call 0x004E6E10 */

loc_004DD48D: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, MEM32(esp + 0xC));
    MEM32(esi) = 0x86CBE0;
    SET_LO8(ecx, MEM8(eax + 8));
    MEM8(esi + 8) = LO8(ecx);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0xC) = ecx;
    MEM32(esi + 0x10) = ecx;
    edx = MEM32(eax + 0x14);
    MEM32(esi + 0x18) = ecx;
    MEM32(esi + 0x1C) = ecx;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esi + 0x14) = edx;
    PUSH32(esp, 0x004DD4BDu); RECOMP_ABI_CALL(0x004DD3F8u, sub_004DD3F8); /* call 0x004DD3F8 */

loc_004DD4BD: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004DD4C3
 * Original: 0x004DD4C3 - 0x004DD4E3 (32 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DD4C3(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DD4C3: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(esp + 8) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004DD4DD; /* je: equal / zero */

loc_004DD4CC: ;
    PUSH32(esp, 0x004DD4D1u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004DD4D1: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = esi;
    PUSH32(esp, 0x004DD4DDu); RECOMP_ABI_CALL(0x004DD3F8u, sub_004DD3F8); /* call 0x004DD3F8 */

loc_004DD4DD: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DD4E3
 * Original: 0x004DD4E3 - 0x004DD565 (130 bytes, 51 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DD4E3(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DD4E3: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x004DD4EDu); RECOMP_ABI_CALL(0x004E6E10u, sub_004E6E10); /* call 0x004E6E10 */

loc_004DD4ED: ;
    ecx = MEM32(esp + 0x18);
    edi = MEM32(esp + 0x14);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x14) = ecx;
    MEM32(esi) = 0x86CBE0;
    MEM8(esi + 8) = 1;
    MEM32(esi + 0xC) = ebx;
    MEM32(esi + 0x10) = ebx;
    MEM32(esi + 0x18) = ebx;
    eax = MEM32(edi + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esi + 0x1C) = eax;
    PUSH32(esp, 0x004DD51Cu); RECOMP_ABI_CALL(0x004DCB7Cu, sub_004DCB7C); /* call 0x004DCB7C */

loc_004DD51C: ;
    goto loc_004DD556;

loc_004DD51E: ;
    eax = MEM32(edi + 8);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_004DD537; /* je: equal / zero */

loc_004DD524: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_004DD556; /* jne: not equal / not zero */

loc_004DD527: ;
    PUSH32(esp, 0x7E0960);
    PUSH32(esp, MEM32(edi));
    ecx = esi;
    PUSH32(esp, 0x004DD535u); RECOMP_ABI_CALL(0x004DCD3Eu, sub_004DCD3E); /* call 0x004DCD3E */

loc_004DD535: ;
    goto loc_004DD556;

loc_004DD537: ;
    PUSH32(esp, MEM32(edi + 4));
    ecx = esi;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, 0x004DD546u); RECOMP_ABI_CALL(0x004DD273u, sub_004DD273); /* call 0x004DD273 */

loc_004DD546: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(edi));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    PUSH32(esp, 0x004DD556u); RECOMP_ABI_CALL(0x004DCDDCu, sub_004DCDDC); /* call 0x004DCDDC */

loc_004DD556: ;
    edi = MEM32(edi + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004DD51E; /* jne: not equal / not zero */

loc_004DD55D: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004DD565
 * Original: 0x004DD565 - 0x004DD576 (17 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DD565(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DD565: ;
    eax = ecx;
    MEM8(eax + 5) = MEM8(eax + 5) & 0xFE;
    _fa = (uint32_t)(MEM8(eax + 5)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM32(eax) = 0x86CC4C;
    MEM8(eax + 4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_004DD576
 * Original: 0x004DD576 - 0x004DD57D (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DD576(void)
{

loc_004DD576: ;
    MEM32(ecx) = 0x86CC4C;
    esp += 4; return; /* ret */

}

/**
 * sub_004DD57D
 * Original: 0x004DD57D - 0x004DD5A1 (36 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DD57D(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DD57D: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esp + 0x14));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004DD59Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004DD598u); } /* indirect call */
    }

loc_004DD59A: ;
    MEM32(eax) = esi;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004DD5A1
 * Original: 0x004DD5A1 - 0x004DD5B1 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DD5A1(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DD5A1: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(eax);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004DD5B0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004DD5ADu); } /* indirect call */
    }

loc_004DD5B0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004DD5B1
 * Original: 0x004DD5B1 - 0x004DD5D5 (36 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DD5B1(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DD5B1: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esp + 0x14));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004DD5CEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004DD5CCu); } /* indirect call */
    }

loc_004DD5CE: ;
    MEM32(eax) = esi;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004DD5D5
 * Original: 0x004DD5D5 - 0x004DD5E5 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DD5D5(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DD5D5: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(eax);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004DD5E4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004DD5E1u); } /* indirect call */
    }

loc_004DD5E4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004DD5E6
 * Original: 0x004DD5E6 - 0x004DD5FD (23 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DD5E6(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DD5E6: ;
    MEM8(ecx + 4) = MEM8(ecx + 4) + 1;
    _fa = (uint32_t)(MEM8(ecx + 4)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(ecx + 5)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 5), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004DD5FC; /* je: equal / zero */

loc_004DD5EF: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x004DD5F5u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004DD5F5: ;
    ecx = eax;
    PUSH32(esp, 0x004DD5FCu); RECOMP_ABI_CALL(0x004E33D9u, sub_004E33D9); /* call 0x004E33D9 */

loc_004DD5FC: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004DD5FD
 * Original: 0x004DD5FD - 0x004DD62C (47 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DD5FD(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DD5FD: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM8(esi + 4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004DD62A; /* je: equal / zero */

loc_004DD606: ;
    MEM8(esi + 4) = MEM8(esi + 4) - 1;
    _fa = (uint32_t)(MEM8(esi + 4)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004DD62A; /* jne: not equal / not zero */

loc_004DD610: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004DD622; /* je: equal / zero */

loc_004DD615: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004DD61Bu); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004DD61B: ;
    ecx = eax;
    PUSH32(esp, 0x004DD622u); RECOMP_ABI_CALL(0x004E33D9u, sub_004E33D9); /* call 0x004E33D9 */

loc_004DD622: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004DD62Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004DD628u); } /* indirect call */
    }

loc_004DD62A: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004DD62C
 * Original: 0x004DD62C - 0x004DD650 (36 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DD62C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004DD62C: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esp + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004DD64F; /* je: equal / zero */

loc_004DD636: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004DD63F; /* je: equal / zero */

loc_004DD63A: ;
    PUSH32(esp, 0x004DD63Fu); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_004DD63F: ;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004DD64F; /* je: equal / zero */

loc_004DD646: ;
    ecx = MEM32(esp + 4);
    g_seh_ebp = ebp; sub_004DD5FD(); return; /* tail jmp 0x004DD5FD */

loc_004DD64F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004DD650
 * Original: 0x004DD650 - 0x004DD66D (29 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DD650(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DD650: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x86CC4C;
    if (TEST_Z(_fa, _fb)) goto loc_004DD667; /* je: equal / zero */

loc_004DD660: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004DD666u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004DD666: ;
    POP32(esp, ecx);

loc_004DD667: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DD66D
 * Original: 0x004DD66D - 0x004DD6AD (64 bytes, 24 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DD66D(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DD66D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004DD676u); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_004DD676: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x14);
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x10) = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEM32(esi) = 0x86CC50;
    MEM32(esi + 0x14) = edx;
    MEM32(esi + 0x18) = ecx;
    ebx = MEM32(ecx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ebx); PUSH32(esp, 0x004DD6A3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004DD6A1u); } /* indirect call */
    }

loc_004DD6A3: ;
    MEM32(esi + 8) = eax;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004DD6AD
 * Original: 0x004DD6AD - 0x004DD70A (93 bytes, 36 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DD6AD(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DD6AD: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x004DD6B6u); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_004DD6B6: ;
    edi = MEM32(esp + 0xC);
    MEM32(esi) = 0x86CC50;
    eax = MEM32(edi + 0xC);
    MEM32(esi + 0xC) = eax;
    eax = MEM32(edi + 0x10);
    MEM32(esi + 0x10) = eax;
    eax = MEM32(edi + 0x14);
    MEM32(esi + 0x14) = eax;
    eax = MEM32(edi + 0x18);
    MEM32(esi + 0x18) = eax;
    ecx = MEM32(edi + 0x18);
    edx = MEM32(ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x10);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esi + 0x14));
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x004DD6ECu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004DD6EAu); } /* indirect call */
    }

loc_004DD6EC: ;
    ecx = MEM32(esi + 0x10);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(esi + 0xC));
    PUSH32(esp, ecx);
    MEM32(esi + 8) = eax;
    PUSH32(esp, MEM32(edi + 8));
    PUSH32(esp, eax);
    PUSH32(esp, 0x004DD700u); RECOMP_ABI_CALL(0x005CFAF0u, sub_005CFAF0); /* call 0x005CFAF0 */

loc_004DD700: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DD70A
 * Original: 0x004DD70A - 0x004DD726 (28 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DD70A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004DD70A: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x18);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi + 8));
    MEM32(esi) = 0x86CC50;
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004DD71Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004DD71Bu); } /* indirect call */
    }

loc_004DD71E: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004DD576(); return; /* tail jmp 0x004DD576 */

}

/**
 * sub_004DD726
 * Original: 0x004DD726 - 0x004DD734 (14 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DD726(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DD726: ;
    eax = MEM32(ecx + 0x10);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 4));
    _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DD734
 * Original: 0x004DD734 - 0x004DD750 (28 bytes, 9 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DD734(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DD734: ;
    eax = MEM32(ecx + 0x10);
    PUSH32(esp, eax);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 8));
    _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, eax);
    PUSH32(esp, 0x004DD74Au); RECOMP_ABI_CALL(0x005CFAF0u, sub_005CFAF0); /* call 0x005CFAF0 */

loc_004DD74A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004DD750
 * Original: 0x004DD750 - 0x004DD774 (36 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DD750(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DD750: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x10);
    ecx = MEM32(esi + 0xC);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    _fb = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, ecx);
    PUSH32(esp, 0x004DD76Au); RECOMP_ABI_CALL(0x005CFAF0u, sub_005CFAF0); /* call 0x005CFAF0 */

loc_004DD76A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xC) = MEM32(esi + 0xC) + 1;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DD774
 * Original: 0x004DD774 - 0x004DD7BF (75 bytes, 31 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DD774(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DD774: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0xC);
    goto loc_004DD798;

loc_004DD77D: ;
    ecx = MEM32(esi + 0x10);
    eax = ecx;
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    _fb = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    edx = eax;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004DD794u); RECOMP_ABI_CALL(0x005CFAF0u, sub_005CFAF0); /* call 0x005CFAF0 */

loc_004DD794: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_004DD798: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esp + 0xC) (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_004DD77D; /* ja: above (unsigned >) */

loc_004DD79E: ;
    eax = MEM32(esi + 0x10);
    MEM32(esi + 0xC) = MEM32(esi + 0xC) + 1;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 0x10));
    _fb = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, eax);
    PUSH32(esp, 0x004DD7B7u); RECOMP_ABI_CALL(0x005CFAF0u, sub_005CFAF0); /* call 0x005CFAF0 */

loc_004DD7B7: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004DD7BF
 * Original: 0x004DD7BF - 0x004DD7F7 (56 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DD7BF(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DD7BF: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    ecx = eax + -1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_004DD7EF; /* jae: above or equal (unsigned >=) */

loc_004DD7D1: ;
    edx = MEM32(esi + 0x10);
    ecx = edx;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edi);
    _fb = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    PUSH32(esp, eax);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x004DD7ECu); RECOMP_ABI_CALL(0x005CFAF0u, sub_005CFAF0); /* call 0x005CFAF0 */

loc_004DD7EC: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004DD7EF: ;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) - 1;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DD7F7
 * Original: 0x004DD7F7 - 0x004DD85A (99 bytes, 40 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DD7F7(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DD7F7: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004DD853; /* je: equal / zero */

loc_004DD803: ;
    PUSH32(esp, 0x004DD808u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004DD808: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi + 8));
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004DD812u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004DD80Fu); } /* indirect call */
    }

loc_004DD812: ;
    eax = MEM32(edi + 0xC);
    MEM32(esi + 0xC) = eax;
    eax = MEM32(edi + 0x10);
    MEM32(esi + 0x10) = eax;
    eax = MEM32(edi + 0x14);
    MEM32(esi + 0x14) = eax;
    PUSH32(esp, 0x004DD829u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004DD829: ;
    edx = MEM32(eax);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x10);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(esi + 0x14));
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x004DD83Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004DD83Au); } /* indirect call */
    }

loc_004DD83C: ;
    ecx = MEM32(esi + 0x10);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(esi + 0xC));
    PUSH32(esp, ecx);
    MEM32(esi + 8) = eax;
    PUSH32(esp, MEM32(edi + 8));
    PUSH32(esp, eax);
    PUSH32(esp, 0x004DD850u); RECOMP_ABI_CALL(0x005CFAF0u, sub_005CFAF0); /* call 0x005CFAF0 */

loc_004DD850: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004DD853: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DD85A
 * Original: 0x004DD85A - 0x004DD896 (60 bytes, 26 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DD85A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DD85A: ;
    MEM32(ecx + 0xC) = MEM32(ecx + 0xC) - 1;
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0xC);
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), edi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_004DD892; /* jae: above or equal (unsigned >=) */

loc_004DD867: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004DD892; /* je: equal / zero */

loc_004DD86B: ;
    edx = MEM32(ecx + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 8);
    eax = edx;
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 0xC));
    ecx = edx;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edi);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_004DD892; /* je: equal / zero */

loc_004DD887: ;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004DD88Fu); RECOMP_ABI_CALL(0x005CFAF0u, sub_005CFAF0); /* call 0x005CFAF0 */

loc_004DD88F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004DD892: ;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DD896
 * Original: 0x004DD896 - 0x004DD8B2 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DD896(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DD896: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004DD89Eu); RECOMP_ABI_CALL(0x004DD70Au, sub_004DD70A); /* call 0x004DD70A */

loc_004DD89E: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004DD8AC; /* je: equal / zero */

loc_004DD8A5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004DD8ABu); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004DD8AB: ;
    POP32(esp, ecx);

loc_004DD8AC: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DD8B2
 * Original: 0x004DD8B2 - 0x004DD8F2 (64 bytes, 30 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DD8B2(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DD8B2: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ebx = MEM32(esi + 0xC);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004DD8EC; /* jbe: below or equal (unsigned <=) */

loc_004DD8C0: ;
    ecx = MEM32(esi + 0x10);
    eax = ecx;
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    _fb = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, 0x004DD8D6u); RECOMP_ABI_CALL(0x005CFE30u, sub_005CFE30); /* call 0x005CFE30 */

loc_004DD8D6: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004DD8E4; /* je: equal / zero */

loc_004DD8DD: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004DD8C0; /* jb: below (unsigned <) */

loc_004DD8E2: ;
    goto loc_004DD8EC;

loc_004DD8E4: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x004DD8ECu); RECOMP_ABI_CALL(0x004DD7BFu, sub_004DD7BF); /* call 0x004DD7BF */

loc_004DD8EC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DD8F2
 * Original: 0x004DD8F2 - 0x004DD8FB (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DD8F2(void)
{

loc_004DD8F2: ;
    eax = ecx;
    MEM32(eax) = 0x86CC54;
    esp += 4; return; /* ret */

}

/**
 * sub_004DD8FB
 * Original: 0x004DD8FB - 0x004DD902 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DD8FB(void)
{

loc_004DD8FB: ;
    MEM32(ecx) = 0x86CC54;
    esp += 4; return; /* ret */

}

/**
 * sub_004DD902
 * Original: 0x004DD902 - 0x004DD91F (29 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DD902(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DD902: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x86CC54;
    if (TEST_Z(_fa, _fb)) goto loc_004DD919; /* je: equal / zero */

loc_004DD912: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004DD918u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_004DD918: ;
    POP32(esp, ecx);

loc_004DD919: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DD91F
 * Original: 0x004DD91F - 0x004DD928 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DD91F(void)
{

loc_004DD91F: ;
    eax = ecx;
    MEM32(eax) = 0x86CC60;
    esp += 4; return; /* ret */

}

/**
 * sub_004DD928
 * Original: 0x004DD928 - 0x004DD92F (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DD928(void)
{

loc_004DD928: ;
    MEM32(ecx) = 0x86CC60;
    esp += 4; return; /* ret */

}

/**
 * sub_004DD92F
 * Original: 0x004DD92F - 0x004DD94C (29 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DD92F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DD92F: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x86CC60;
    if (TEST_Z(_fa, _fb)) goto loc_004DD946; /* je: equal / zero */

loc_004DD93F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004DD945u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_004DD945: ;
    POP32(esp, ecx);

loc_004DD946: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DD94C
 * Original: 0x004DD94C - 0x004DD955 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DD94C(void)
{

loc_004DD94C: ;
    eax = ecx;
    MEM32(eax) = 0x86CC68;
    esp += 4; return; /* ret */

}

/**
 * sub_004DD955
 * Original: 0x004DD955 - 0x004DD95C (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DD955(void)
{

loc_004DD955: ;
    MEM32(ecx) = 0x86CC68;
    esp += 4; return; /* ret */

}

/**
 * sub_004DD95C
 * Original: 0x004DD95C - 0x004DD979 (29 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DD95C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DD95C: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x86CC68;
    if (TEST_Z(_fa, _fb)) goto loc_004DD973; /* je: equal / zero */

loc_004DD96C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004DD972u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_004DD972: ;
    POP32(esp, ecx);

loc_004DD973: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DD979
 * Original: 0x004DD979 - 0x004DD9B0 (55 bytes, 24 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DD979(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DD979: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004DD982u); RECOMP_ABI_CALL(0x004E6E4Fu, sub_004E6E4F); /* call 0x004E6E4F */

loc_004DD982: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0x10);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ebx);
    MEM32(esi) = 0x86CC74;
    MEM32(esi + 8) = ebx;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x10) = ecx;
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x004DD9A4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004DD9A2u); } /* indirect call */
    }

loc_004DD9A4: ;
    MEM32(esi + 8) = eax;
    MEM8(eax) = LO8(ebx);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004DD9B0
 * Original: 0x004DD9B0 - 0x004DD9B4 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DD9B0(void)
{

loc_004DD9B0: ;
    eax = MEM32(ecx + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_004DD9B4
 * Original: 0x004DD9B4 - 0x004DD9B8 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DD9B4(void)
{

loc_004DD9B4: ;
    eax = MEM32(ecx + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_004DD9B8
 * Original: 0x004DD9B8 - 0x004DDA0A (82 bytes, 34 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DD9B8(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DD9B8: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x004DD9C2u); RECOMP_ABI_CALL(0x004E6E4Fu, sub_004E6E4F); /* call 0x004E6E4F */

loc_004DD9C2: ;
    edi = MEM32(esp + 0x14);
    PUSH32(esp, MEM32(esp + 0x10));
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = 0x86CC74;
    MEM32(esi + 8) = ebx;
    MEM32(esi + 0xC) = ebx;
    MEM32(esi + 0x10) = edi;
    PUSH32(esp, 0x004DD9E0u); RECOMP_ABI_CALL(0x005D0020u, sub_005D0020); /* call 0x005D0020 */

loc_004DD9E0: ;
    POP32(esp, ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ebx);
    MEM32(esi + 0xC) = eax;
    edx = MEM32(edi);
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x004DD9EFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004DD9EDu); } /* indirect call */
    }

loc_004DD9EF: ;
    PUSH32(esp, MEM32(esi + 0xC));
    MEM32(esi + 8) = eax;
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, eax);
    PUSH32(esp, 0x004DD9FFu); RECOMP_ABI_CALL(0x004E367Fu, sub_004E367F); /* call 0x004E367F */

loc_004DD9FF: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004DDA0A
 * Original: 0x004DDA0A - 0x004DDA4F (69 bytes, 28 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DDA0A(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DDA0A: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x004DDA13u); RECOMP_ABI_CALL(0x004E6E4Fu, sub_004E6E4F); /* call 0x004E6E4F */

loc_004DDA13: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x14);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edx);
    MEM32(esi) = 0x86CC74;
    MEM32(esi + 8) = edx;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x10) = ecx;
    edi = MEM32(ecx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edi); PUSH32(esp, 0x004DDA35u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004DDA33u); } /* indirect call */
    }

loc_004DDA35: ;
    PUSH32(esp, MEM32(esi + 0xC));
    MEM32(esi + 8) = eax;
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, eax);
    PUSH32(esp, 0x004DDA45u); RECOMP_ABI_CALL(0x004E367Fu, sub_004E367F); /* call 0x004E367F */

loc_004DDA45: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004DDA4F
 * Original: 0x004DDA4F - 0x004DDA6B (28 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DDA4F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004DDA4F: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi + 8));
    MEM32(esi) = 0x86CC74;
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004DDA63u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004DDA60u); } /* indirect call */
    }

loc_004DDA63: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004E6E61(); return; /* tail jmp 0x004E6E61 */

}

/**
 * sub_004DDA6B
 * Original: 0x004DDA6B - 0x004DDA7C (17 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DDA6B(void)
{

loc_004DDA6B: ;
    PUSH32(esp, MEM32(esp + 4));
    PUSH32(esp, MEM32(ecx + 8));
    PUSH32(esp, 0x004DDA77u); RECOMP_ABI_CALL(0x005CFF90u, sub_005CFF90); /* call 0x005CFF90 */

loc_004DDA77: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DDA7C
 * Original: 0x004DDA7C - 0x004DDA89 (13 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DDA7C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DDA7C: ;
    eax = MEM32(ecx + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), LO8(ecx) (8-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(eax, LO8(ecx));
    esp += 4; return; /* ret */

}

/**
 * sub_004DDA89
 * Original: 0x004DDA89 - 0x004DDA93 (10 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DDA89(void)
{

loc_004DDA89: ;
    PUSH32(esp, MEM32(ecx + 8));
    PUSH32(esp, 0x004DDA91u); RECOMP_ABI_CALL(0x005D0020u, sub_005D0020); /* call 0x005D0020 */

loc_004DDA91: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004DDA93
 * Original: 0x004DDA93 - 0x004DDAA8 (21 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DDA93(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DDA93: ;
    PUSH32(esp, MEM32(ecx + 0xC));
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, MEM32(ecx + 8));
    PUSH32(esp, 0x004DDAA2u); RECOMP_ABI_CALL(0x004E367Fu, sub_004E367F); /* call 0x004E367F */

loc_004DDAA2: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DDAA8
 * Original: 0x004DDAA8 - 0x004DDACE (38 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DDAA8(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DDAA8: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, MEM32(esi + 8));
    PUSH32(esp, 0x004DDABCu); RECOMP_ABI_CALL(0x005CCCE0u, sub_005CCCE0); /* call 0x005CCCE0 */

loc_004DDABC: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(esi + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(eax + ecx + -1) = 0;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DDACE
 * Original: 0x004DDACE - 0x004DDAF9 (43 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DDACE(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DDACE: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0x10));
    eax = MEM32(esi + 0xC);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 8));
    PUSH32(esp, 0x004DDAE9u); RECOMP_ABI_CALL(0x004E3665u, sub_004E3665); /* call 0x004E3665 */

loc_004DDAE9: ;
    ecx = MEM32(esi + 0xC);
    edx = MEM32(esi + 8);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(ecx + edx + -1) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004DDAF9
 * Original: 0x004DDAF9 - 0x004DDB1E (37 bytes, 12 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DDAF9(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DDAF9: ;
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, MEM32(ecx + 0xC));
    PUSH32(esp, MEM32(ecx + 8));
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, 0x004DDB10u); RECOMP_ABI_CALL(0x005E3F40u, sub_005E3F40); /* call 0x005E3F40 */

loc_004DDB10: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004DDB18u); RECOMP_ABI_CALL(0x005E4A10u, sub_005E4A10); /* call 0x005E4A10 */

loc_004DDB18: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004DDB1E
 * Original: 0x004DDB1E - 0x004DDB52 (52 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DDB1E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DDB1E: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, MEM32(esi + 8));
    PUSH32(esp, 0x004DDB29u); RECOMP_ABI_CALL(0x005D0020u, sub_005D0020); /* call 0x005D0020 */

loc_004DDB29: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_BE(_fa, _fb)) goto loc_004DDB50; /* jbe: below or equal (unsigned <=) */

loc_004DDB2E: ;
    ecx = MEM32(esi + 8);
    SET_LO8(edx, MEM8(ecx + eax + -1));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0x20 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004DDB49; /* je: equal / zero */

loc_004DDB3A: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(9) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 9 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004DDB49; /* je: equal / zero */

loc_004DDB3F: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004DDB49; /* je: equal / zero */

loc_004DDB44: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xD) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0xD (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004DDB50; /* jne: not equal / not zero */

loc_004DDB49: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM8(ecx + eax) = 0;
    if ((_fa != 0)) goto loc_004DDB2E; /* jne: not equal / not zero */

loc_004DDB50: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004DDB52
 * Original: 0x004DDB52 - 0x004DDB6E (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DDB52(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DDB52: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004DDB5Au); RECOMP_ABI_CALL(0x004DDA4Fu, sub_004DDA4F); /* call 0x004DDA4F */

loc_004DDB5A: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004DDB68; /* je: equal / zero */

loc_004DDB61: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004DDB67u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004DDB67: ;
    POP32(esp, ecx);

loc_004DDB68: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DDB6E
 * Original: 0x004DDB6E - 0x004DDB86 (24 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DDB6E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DDB6E: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004DDB80; /* je: equal / zero */

loc_004DDB7B: ;
    PUSH32(esp, 0x004DDB80u); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_004DDB80: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DDB9C
 * Original: 0x004DDB9C - 0x004DDBB8 (28 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DDB9C(void)
{

loc_004DDB9C: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004DDBA4u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004DDBA4: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = esi;
    PUSH32(esp, 4);
    PUSH32(esp, 0x004DDBB2u); RECOMP_ABI_CALL(0x004DD66Du, sub_004DD66D); /* call 0x004DD66D */

loc_004DDBB2: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DDBB8
 * Original: 0x004DDBB8 - 0x004DDBD0 (24 bytes, 9 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DDBB8(void)
{

loc_004DDBB8: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0xC));
    esi = ecx;
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 4);
    PUSH32(esp, 0x004DDBCAu); RECOMP_ABI_CALL(0x004DD66Du, sub_004DD66D); /* call 0x004DD66D */

loc_004DDBCA: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004DDBD9
 * Original: 0x004DDBD9 - 0x004DDBF1 (24 bytes, 9 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DDBD9(void)
{

loc_004DDBD9: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0xC));
    esi = ecx;
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 4);
    PUSH32(esp, 0x004DDBEBu); RECOMP_ABI_CALL(0x004DD66Du, sub_004DD66D); /* call 0x004DD66D */

loc_004DDBEB: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004DDBF5
 * Original: 0x004DDBF5 - 0x004DDC0D (24 bytes, 9 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DDBF5(void)
{

loc_004DDBF5: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0xC));
    esi = ecx;
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 4);
    PUSH32(esp, 0x004DDC07u); RECOMP_ABI_CALL(0x004DD66Du, sub_004DD66D); /* call 0x004DD66D */

loc_004DDC07: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004DDC14
 * Original: 0x004DDC14 - 0x004DDC30 (28 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DDC14(void)
{

loc_004DDC14: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004DDC1Cu); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004DDC1C: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = esi;
    PUSH32(esp, 4);
    PUSH32(esp, 0x004DDC2Au); RECOMP_ABI_CALL(0x004DD66Du, sub_004DD66D); /* call 0x004DD66D */

loc_004DDC2A: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DDC30
 * Original: 0x004DDC30 - 0x004DDC48 (24 bytes, 9 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DDC30(void)
{

loc_004DDC30: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0xC));
    esi = ecx;
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 4);
    PUSH32(esp, 0x004DDC42u); RECOMP_ABI_CALL(0x004DD66Du, sub_004DD66D); /* call 0x004DD66D */

loc_004DDC42: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004DDCBC
 * Original: 0x004DDCBC - 0x004DDCD8 (28 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DDCBC(void)
{

loc_004DDCBC: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004DDCC4u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004DDCC4: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = esi;
    PUSH32(esp, 4);
    PUSH32(esp, 0x004DDCD2u); RECOMP_ABI_CALL(0x004DD66Du, sub_004DD66D); /* call 0x004DD66D */

loc_004DDCD2: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DDCD8
 * Original: 0x004DDCD8 - 0x004DDCF0 (24 bytes, 9 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DDCD8(void)
{

loc_004DDCD8: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0xC));
    esi = ecx;
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 4);
    PUSH32(esp, 0x004DDCEAu); RECOMP_ABI_CALL(0x004DD66Du, sub_004DD66D); /* call 0x004DD66D */

loc_004DDCEA: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004DDCFC
 * Original: 0x004DDCFC - 0x004DDD18 (28 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DDCFC(void)
{

loc_004DDCFC: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004DDD04u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004DDD04: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = esi;
    PUSH32(esp, 4);
    PUSH32(esp, 0x004DDD12u); RECOMP_ABI_CALL(0x004DD66Du, sub_004DD66D); /* call 0x004DD66D */

loc_004DDD12: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DDD18
 * Original: 0x004DDD18 - 0x004DDD30 (24 bytes, 9 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DDD18(void)
{

loc_004DDD18: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0xC));
    esi = ecx;
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 4);
    PUSH32(esp, 0x004DDD2Au); RECOMP_ABI_CALL(0x004DD66Du, sub_004DD66D); /* call 0x004DD66D */

loc_004DDD2A: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004DDD3C
 * Original: 0x004DDD3C - 0x004DDD58 (28 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DDD3C(void)
{

loc_004DDD3C: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004DDD44u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004DDD44: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = esi;
    PUSH32(esp, 4);
    PUSH32(esp, 0x004DDD52u); RECOMP_ABI_CALL(0x004DD66Du, sub_004DD66D); /* call 0x004DD66D */

loc_004DDD52: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DDD58
 * Original: 0x004DDD58 - 0x004DDD70 (24 bytes, 9 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DDD58(void)
{

loc_004DDD58: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0xC));
    esi = ecx;
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 4);
    PUSH32(esp, 0x004DDD6Au); RECOMP_ABI_CALL(0x004DD66Du, sub_004DD66D); /* call 0x004DD66D */

loc_004DDD6A: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004DDD7B
 * Original: 0x004DDD7B - 0x004DDD93 (24 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DDD7B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DDD7B: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004DDD8D; /* je: equal / zero */

loc_004DDD88: ;
    PUSH32(esp, 0x004DDD8Du); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_004DDD8D: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DDDA5
 * Original: 0x004DDDA5 - 0x004DDDC0 (27 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DDDA5(void)
{

loc_004DDDA5: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x004DDDB5u); RECOMP_ABI_CALL(0x004DD62Cu, sub_004DD62C); /* call 0x004DD62C */

loc_004DDDB5: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DDDCC
 * Original: 0x004DDDCC - 0x004DDDF4 (40 bytes, 12 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DDDCC(void)
{

loc_004DDDCC: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004DDDD4u); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_004DDDD4: ;
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = esi + 8;
    PUSH32(esp, MEM32(esp + 0x10));
    MEM32(esi) = 0x864E1C;
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x004DDDEEu); RECOMP_ABI_CALL(0x004DB87Du, sub_004DB87D); /* call 0x004DB87D */

loc_004DDDEE: ;
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004DDE30
 * Original: 0x004DDE30 - 0x004DDE48 (24 bytes, 9 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DDE30(void)
{

loc_004DDE30: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0xC));
    esi = ecx;
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 4);
    PUSH32(esp, 0x004DDE42u); RECOMP_ABI_CALL(0x004DD66Du, sub_004DD66D); /* call 0x004DD66D */

loc_004DDE42: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004DDE48
 * Original: 0x004DDE48 - 0x004DDE70 (40 bytes, 12 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DDE48(void)
{

loc_004DDE48: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004DDE50u); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_004DDE50: ;
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = esi + 8;
    PUSH32(esp, MEM32(esp + 0x10));
    MEM32(esi) = 0x864BF0;
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x004DDE6Au); RECOMP_ABI_CALL(0x004DB87Du, sub_004DB87D); /* call 0x004DB87D */

loc_004DDE6A: ;
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004DDEB9
 * Original: 0x004DDEB9 - 0x004DDED1 (24 bytes, 9 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DDEB9(void)
{

loc_004DDEB9: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0xC));
    esi = ecx;
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 4);
    PUSH32(esp, 0x004DDECBu); RECOMP_ABI_CALL(0x004DD66Du, sub_004DD66D); /* call 0x004DD66D */

loc_004DDECB: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004DDED1
 * Original: 0x004DDED1 - 0x004DDEE9 (24 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DDED1(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DDED1: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004DDEE3; /* je: equal / zero */

loc_004DDEDE: ;
    PUSH32(esp, 0x004DDEE3u); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_004DDEE3: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DDF19
 * Original: 0x004DDF19 - 0x004DDF34 (27 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DDF19(void)
{

loc_004DDF19: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x004DDF29u); RECOMP_ABI_CALL(0x004DD62Cu, sub_004DD62C); /* call 0x004DD62C */

loc_004DDF29: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DDF4C
 * Original: 0x004DDF4C - 0x004DDF64 (24 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DDF4C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DDF4C: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004DDF5E; /* je: equal / zero */

loc_004DDF59: ;
    PUSH32(esp, 0x004DDF5Eu); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_004DDF5E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DDF70
 * Original: 0x004DDF70 - 0x004DDF88 (24 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DDF70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DDF70: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004DDF82; /* je: equal / zero */

loc_004DDF7D: ;
    PUSH32(esp, 0x004DDF82u); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_004DDF82: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DDFB3
 * Original: 0x004DDFB3 - 0x004DDFCB (24 bytes, 9 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DDFB3(void)
{

loc_004DDFB3: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0xC));
    esi = ecx;
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 4);
    PUSH32(esp, 0x004DDFC5u); RECOMP_ABI_CALL(0x004DD66Du, sub_004DD66D); /* call 0x004DD66D */

loc_004DDFC5: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004DDFCF
 * Original: 0x004DDFCF - 0x004DDFE7 (24 bytes, 9 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DDFCF(void)
{

loc_004DDFCF: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0xC));
    esi = ecx;
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 4);
    PUSH32(esp, 0x004DDFE1u); RECOMP_ABI_CALL(0x004DD66Du, sub_004DD66D); /* call 0x004DD66D */

loc_004DDFE1: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004DDFEB
 * Original: 0x004DDFEB - 0x004DE003 (24 bytes, 9 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DDFEB(void)
{

loc_004DDFEB: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0xC));
    esi = ecx;
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 4);
    PUSH32(esp, 0x004DDFFDu); RECOMP_ABI_CALL(0x004DD66Du, sub_004DD66D); /* call 0x004DD66D */

loc_004DDFFD: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004DE024
 * Original: 0x004DE024 - 0x004DE03C (24 bytes, 9 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DE024(void)
{

loc_004DE024: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0xC));
    esi = ecx;
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 4);
    PUSH32(esp, 0x004DE036u); RECOMP_ABI_CALL(0x004DD66Du, sub_004DD66D); /* call 0x004DD66D */

loc_004DE036: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004DE03C
 * Original: 0x004DE03C - 0x004DE064 (40 bytes, 12 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DE03C(void)
{

loc_004DE03C: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004DE044u); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_004DE044: ;
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = esi + 8;
    PUSH32(esp, MEM32(esp + 0x10));
    MEM32(esi) = 0x86484C;
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x004DE05Eu); RECOMP_ABI_CALL(0x004DB87Du, sub_004DB87D); /* call 0x004DB87D */

loc_004DE05E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004DE0A5
 * Original: 0x004DE0A5 - 0x004DE0C0 (27 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DE0A5(void)
{

loc_004DE0A5: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x004DE0B5u); RECOMP_ABI_CALL(0x004DD62Cu, sub_004DD62C); /* call 0x004DD62C */

loc_004DE0B5: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DE0EA
 * Original: 0x004DE0EA - 0x004DE102 (24 bytes, 9 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DE0EA(void)
{

loc_004DE0EA: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0xC));
    esi = ecx;
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 4);
    PUSH32(esp, 0x004DE0FCu); RECOMP_ABI_CALL(0x004DD66Du, sub_004DD66D); /* call 0x004DD66D */

loc_004DE0FC: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004DE102
 * Original: 0x004DE102 - 0x004DE12A (40 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DE102(void)
{

loc_004DE102: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004DE10Au); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_004DE10A: ;
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = esi + 8;
    PUSH32(esp, MEM32(esp + 0x10));
    MEM32(esi) = 0x8644DC;
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x004DE124u); RECOMP_ABI_CALL(0x004DB87Du, sub_004DB87D); /* call 0x004DB87D */

loc_004DE124: ;
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004DE181
 * Original: 0x004DE181 - 0x004DE1A9 (40 bytes, 12 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DE181(void)
{

loc_004DE181: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004DE189u); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_004DE189: ;
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = esi + 8;
    PUSH32(esp, MEM32(esp + 0x10));
    MEM32(esi) = 0x8644E0;
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x004DE1A3u); RECOMP_ABI_CALL(0x004DB87Du, sub_004DB87D); /* call 0x004DB87D */

loc_004DE1A3: ;
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004DE207
 * Original: 0x004DE207 - 0x004DE21F (24 bytes, 9 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DE207(void)
{

loc_004DE207: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0xC));
    esi = ecx;
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 4);
    PUSH32(esp, 0x004DE219u); RECOMP_ABI_CALL(0x004DD66Du, sub_004DD66D); /* call 0x004DD66D */

loc_004DE219: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004DE21F
 * Original: 0x004DE21F - 0x004DE247 (40 bytes, 12 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DE21F(void)
{

loc_004DE21F: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004DE227u); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_004DE227: ;
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = esi + 8;
    PUSH32(esp, MEM32(esp + 0x10));
    MEM32(esi) = 0x864EE8;
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x004DE241u); RECOMP_ABI_CALL(0x004DB87Du, sub_004DB87D); /* call 0x004DB87D */

loc_004DE241: ;
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004DE27E
 * Original: 0x004DE27E - 0x004DE29A (28 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DE27E(void)
{

loc_004DE27E: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004DE286u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004DE286: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = esi;
    PUSH32(esp, 4);
    PUSH32(esp, 0x004DE294u); RECOMP_ABI_CALL(0x004DD66Du, sub_004DD66D); /* call 0x004DD66D */

loc_004DE294: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DE29A
 * Original: 0x004DE29A - 0x004DE2B2 (24 bytes, 9 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DE29A(void)
{

loc_004DE29A: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0xC));
    esi = ecx;
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 4);
    PUSH32(esp, 0x004DE2ACu); RECOMP_ABI_CALL(0x004DD66Du, sub_004DD66D); /* call 0x004DD66D */

loc_004DE2AC: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004DE2BE
 * Original: 0x004DE2BE - 0x004DE2DA (28 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DE2BE(void)
{

loc_004DE2BE: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004DE2C6u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004DE2C6: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = esi;
    PUSH32(esp, 4);
    PUSH32(esp, 0x004DE2D4u); RECOMP_ABI_CALL(0x004DD66Du, sub_004DD66D); /* call 0x004DD66D */

loc_004DE2D4: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DE2DA
 * Original: 0x004DE2DA - 0x004DE2F2 (24 bytes, 9 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DE2DA(void)
{

loc_004DE2DA: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0xC));
    esi = ecx;
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 4);
    PUSH32(esp, 0x004DE2ECu); RECOMP_ABI_CALL(0x004DD66Du, sub_004DD66D); /* call 0x004DD66D */

loc_004DE2EC: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004DE2FB
 * Original: 0x004DE2FB - 0x004DE313 (24 bytes, 9 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DE2FB(void)
{

loc_004DE2FB: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0xC));
    esi = ecx;
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 4);
    PUSH32(esp, 0x004DE30Du); RECOMP_ABI_CALL(0x004DD66Du, sub_004DD66D); /* call 0x004DD66D */

loc_004DE30D: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004DE313
 * Original: 0x004DE313 - 0x004DE33B (40 bytes, 12 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DE313(void)
{

loc_004DE313: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004DE31Bu); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_004DE31B: ;
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = esi + 8;
    PUSH32(esp, MEM32(esp + 0x10));
    MEM32(esi) = 0x864150;
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x004DE335u); RECOMP_ABI_CALL(0x004DB87Du, sub_004DB87D); /* call 0x004DB87D */

loc_004DE335: ;
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004DE3CA
 * Original: 0x004DE3CA - 0x004DE3F4 (42 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DE3CA(void)
{

loc_004DE3CA: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004DE3D2u); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_004DE3D2: ;
    PUSH32(esp, MEM32(esp + 0xC));
    MEM32(esi) = 0x86CC98;
    PUSH32(esp, 0x004DE3E1u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004DE3E1: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = esi + 8;
    PUSH32(esp, 0x004DE3EEu); RECOMP_ABI_CALL(0x004DB87Du, sub_004DB87D); /* call 0x004DB87D */

loc_004DE3EE: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004DE3F4
 * Original: 0x004DE3F4 - 0x004DE41C (40 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DE3F4(void)
{

loc_004DE3F4: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004DE3FCu); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_004DE3FC: ;
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = esi + 8;
    PUSH32(esp, MEM32(esp + 0x10));
    MEM32(esi) = 0x86CC98;
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x004DE416u); RECOMP_ABI_CALL(0x004DB87Du, sub_004DB87D); /* call 0x004DB87D */

loc_004DE416: ;
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004DE491
 * Original: 0x004DE491 - 0x004DE4AD (28 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DE491(void)
{

loc_004DE491: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004DE499u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004DE499: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = esi;
    PUSH32(esp, 4);
    PUSH32(esp, 0x004DE4A7u); RECOMP_ABI_CALL(0x004DD66Du, sub_004DD66D); /* call 0x004DD66D */

loc_004DE4A7: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DE4AD
 * Original: 0x004DE4AD - 0x004DE4C5 (24 bytes, 9 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DE4AD(void)
{

loc_004DE4AD: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0xC));
    esi = ecx;
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 4);
    PUSH32(esp, 0x004DE4BFu); RECOMP_ABI_CALL(0x004DD66Du, sub_004DD66D); /* call 0x004DD66D */

loc_004DE4BF: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004DE4D0
 * Original: 0x004DE4D0 - 0x004DE4E8 (24 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DE4D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DE4D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004DE4E2; /* je: equal / zero */

loc_004DE4DD: ;
    PUSH32(esp, 0x004DE4E2u); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_004DE4E2: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DE4F7
 * Original: 0x004DE4F7 - 0x004DE512 (27 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DE4F7(void)
{

loc_004DE4F7: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x004DE507u); RECOMP_ABI_CALL(0x004DD62Cu, sub_004DD62C); /* call 0x004DD62C */

loc_004DE507: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DE524
 * Original: 0x004DE524 - 0x004DE53C (24 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DE524(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DE524: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004DE536; /* je: equal / zero */

loc_004DE531: ;
    PUSH32(esp, 0x004DE536u); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_004DE536: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DE54B
 * Original: 0x004DE54B - 0x004DE566 (27 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DE54B(void)
{

loc_004DE54B: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x004DE55Bu); RECOMP_ABI_CALL(0x004DD62Cu, sub_004DD62C); /* call 0x004DD62C */

loc_004DE55B: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DE578
 * Original: 0x004DE578 - 0x004DE590 (24 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DE578(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DE578: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004DE58A; /* je: equal / zero */

loc_004DE585: ;
    PUSH32(esp, 0x004DE58Au); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_004DE58A: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DE59F
 * Original: 0x004DE59F - 0x004DE5BA (27 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DE59F(void)
{

loc_004DE59F: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x004DE5AFu); RECOMP_ABI_CALL(0x004DD62Cu, sub_004DD62C); /* call 0x004DD62C */

loc_004DE5AF: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DE5CC
 * Original: 0x004DE5CC - 0x004DE5E4 (24 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DE5CC(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DE5CC: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004DE5DE; /* je: equal / zero */

loc_004DE5D9: ;
    PUSH32(esp, 0x004DE5DEu); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_004DE5DE: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DE5F3
 * Original: 0x004DE5F3 - 0x004DE60E (27 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DE5F3(void)
{

loc_004DE5F3: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x004DE603u); RECOMP_ABI_CALL(0x004DD62Cu, sub_004DD62C); /* call 0x004DD62C */

loc_004DE603: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DE620
 * Original: 0x004DE620 - 0x004DE638 (24 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DE620(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DE620: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004DE632; /* je: equal / zero */

loc_004DE62D: ;
    PUSH32(esp, 0x004DE632u); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_004DE632: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DE647
 * Original: 0x004DE647 - 0x004DE662 (27 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DE647(void)
{

loc_004DE647: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x004DE657u); RECOMP_ABI_CALL(0x004DD62Cu, sub_004DD62C); /* call 0x004DD62C */

loc_004DE657: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DE674
 * Original: 0x004DE674 - 0x004DE68C (24 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DE674(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DE674: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004DE686; /* je: equal / zero */

loc_004DE681: ;
    PUSH32(esp, 0x004DE686u); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_004DE686: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DE69B
 * Original: 0x004DE69B - 0x004DE6B6 (27 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DE69B(void)
{

loc_004DE69B: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x004DE6ABu); RECOMP_ABI_CALL(0x004DD62Cu, sub_004DD62C); /* call 0x004DD62C */

loc_004DE6AB: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DE6C8
 * Original: 0x004DE6C8 - 0x004DE6E0 (24 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DE6C8(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DE6C8: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004DE6DA; /* je: equal / zero */

loc_004DE6D5: ;
    PUSH32(esp, 0x004DE6DAu); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_004DE6DA: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DE6EF
 * Original: 0x004DE6EF - 0x004DE70A (27 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DE6EF(void)
{

loc_004DE6EF: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x004DE6FFu); RECOMP_ABI_CALL(0x004DD62Cu, sub_004DD62C); /* call 0x004DD62C */

loc_004DE6FF: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DE71C
 * Original: 0x004DE71C - 0x004DE734 (24 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DE71C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DE71C: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004DE72E; /* je: equal / zero */

loc_004DE729: ;
    PUSH32(esp, 0x004DE72Eu); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_004DE72E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DE743
 * Original: 0x004DE743 - 0x004DE75E (27 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DE743(void)
{

loc_004DE743: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x004DE753u); RECOMP_ABI_CALL(0x004DD62Cu, sub_004DD62C); /* call 0x004DD62C */

loc_004DE753: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DE770
 * Original: 0x004DE770 - 0x004DE788 (24 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DE770(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DE770: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004DE782; /* je: equal / zero */

loc_004DE77D: ;
    PUSH32(esp, 0x004DE782u); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_004DE782: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DE797
 * Original: 0x004DE797 - 0x004DE7B2 (27 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DE797(void)
{

loc_004DE797: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x004DE7A7u); RECOMP_ABI_CALL(0x004DD62Cu, sub_004DD62C); /* call 0x004DD62C */

loc_004DE7A7: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DE7C4
 * Original: 0x004DE7C4 - 0x004DE7DC (24 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DE7C4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DE7C4: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004DE7D6; /* je: equal / zero */

loc_004DE7D1: ;
    PUSH32(esp, 0x004DE7D6u); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_004DE7D6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DE7EB
 * Original: 0x004DE7EB - 0x004DE806 (27 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DE7EB(void)
{

loc_004DE7EB: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x004DE7FBu); RECOMP_ABI_CALL(0x004DD62Cu, sub_004DD62C); /* call 0x004DD62C */

loc_004DE7FB: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DE818
 * Original: 0x004DE818 - 0x004DE830 (24 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DE818(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DE818: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004DE82A; /* je: equal / zero */

loc_004DE825: ;
    PUSH32(esp, 0x004DE82Au); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_004DE82A: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DE83F
 * Original: 0x004DE83F - 0x004DE85A (27 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DE83F(void)
{

loc_004DE83F: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x004DE84Fu); RECOMP_ABI_CALL(0x004DD62Cu, sub_004DD62C); /* call 0x004DD62C */

loc_004DE84F: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DE86C
 * Original: 0x004DE86C - 0x004DE884 (24 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DE86C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DE86C: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004DE87E; /* je: equal / zero */

loc_004DE879: ;
    PUSH32(esp, 0x004DE87Eu); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_004DE87E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}
