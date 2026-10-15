/**
 * nhl_07_recomp - Recompiled code chunk 190
 * Functions: 250 (0x003F2D70 - 0x003FC980)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_003F2D70
 * Original: 0x003F2D70 - 0x003F2D95 (37 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F2D70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F2D70: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi);
    PUSH32(esp, 0x003F2D7Au); RECOMP_ABI_CALL(0x000249C0u, sub_000249C0); /* call 0x000249C0 */

loc_003F2D7A: ;
    PUSH32(esp, 0x003F2D7Fu); RECOMP_ABI_CALL(0x0003103Fu, sub_0003103F); /* call 0x0003103F */

loc_003F2D7F: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003F2D8F; /* je: equal / zero */

loc_003F2D86: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003F2D8Cu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_003F2D8C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003F2D8F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003F2DA0
 * Original: 0x003F2DA0 - 0x003F2DCD (45 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F2DA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F2DA0: ;
    eax = MEM32(0x907E90);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_003F2DC1; /* je: equal / zero */

loc_003F2DAC: ;
    ecx = MEM32(eax);
    PUSH32(esp, 0x003F2DB3u); RECOMP_ABI_CALL(0x000249C0u, sub_000249C0); /* call 0x000249C0 */

loc_003F2DB3: ;
    PUSH32(esp, 0x003F2DB8u); RECOMP_ABI_CALL(0x0003103Fu, sub_0003103F); /* call 0x0003103F */

loc_003F2DB8: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003F2DBEu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_003F2DBE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003F2DC1: ;
    MEM32(0x907E90) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003F2DE0
 * Original: 0x003F2DE0 - 0x003F2DFE (30 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F2DE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F2DE0: ;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x7E0928);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003F2DEDu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_003F2DED: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x003F2DF5u); RECOMP_ABI_CALL(0x0002E40Cu, sub_0002E40C); /* call 0x0002E40C */

loc_003F2DF5: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x003F2DFDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003F2DFAu); } /* indirect call */
    }

loc_003F2DFD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003F2E10
 * Original: 0x003F2E10 - 0x003F2E6D (93 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F2E10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F2E10: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax) = 0x836F58;
    edx = MEM32(0x87DAF0);
    ecx = eax + 0x20;
    MEM32(ecx) = edx;
    edx = MEM32(0x87DAF4);
    MEM32(ecx + 4) = edx;
    edx = MEM32(0x87DAF8);
    MEM32(ecx + 8) = edx;
    edx = MEM32(0x87DAFC);
    MEM32(ecx + 0xC) = edx;
    edx = MEM32(0x87DBD0);
    ecx = eax + 0x30;
    MEM32(ecx) = edx;
    edx = MEM32(0x87DBD4);
    MEM32(ecx + 4) = edx;
    edx = MEM32(0x87DBD8);
    MEM32(ecx + 8) = edx;
    edx = MEM32(0x87DBDC);
    MEM32(ecx + 0xC) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_003F2E90
 * Original: 0x003F2E90 - 0x003F2E91 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F2E90(void)
{

loc_003F2E90: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003F2EA0
 * Original: 0x003F2EA0 - 0x003F2EA1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F2EA0(void)
{

loc_003F2EA0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003F2EB0
 * Original: 0x003F2EB0 - 0x003F2EC9 (25 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F2EB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F2EB0: ;
    eax = MEM32(ecx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003F2EC6; /* je: equal / zero */

loc_003F2EB7: ;
    eax = MEM32(eax);
    ecx = MEM32(eax + 0x14);
    edx = MEM32(ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 4; return; /* ret */

loc_003F2EC6: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_003F2ED0
 * Original: 0x003F2ED0 - 0x003F2F02 (50 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F2ED0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F2ED0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(edi) = 0x836F58;
    if (CMP_EQ(_fa, _fb)) goto loc_003F2EFF; /* je: equal / zero */

loc_003F2EE1: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003F2EE9u); RECOMP_ABI_CALL(0x000356D0u, sub_000356D0); /* call 0x000356D0 */

loc_003F2EE9: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x003F2EF8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003F2EF5u); } /* indirect call */
    }

loc_003F2EF8: ;
    MEM32(edi + 0x14) = 0;

loc_003F2EFF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003F2F10
 * Original: 0x003F2F10 - 0x003F2F54 (68 bytes, 24 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F2F10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F2F10: ;
    edx = MEM32(ecx + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003F2F51; /* je: equal / zero */

loc_003F2F17: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO8(eax, 1);
    if (CMP_NE(_fa, _fb)) goto loc_003F2F37; /* jne: not equal / not zero */

loc_003F2F21: ;
    eax = ZX8(LO8(eax));
    ecx = esp + 4;
    MEM32(esp + 4) = eax;
    PUSH32(esp, ecx);
    ecx = MEM32(edx);
    PUSH32(esp, 0x003F2F34u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_003F2F34: ;
    esp += 8; return; /* ret 4 */

loc_003F2F37: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003F2F3E; /* jne: not equal / not zero */

loc_003F2F3C: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_003F2F3E: ;
    eax = ZX8(LO8(eax));
    ecx = esp + 4;
    MEM32(esp + 4) = eax;
    PUSH32(esp, ecx);
    ecx = MEM32(edx);
    PUSH32(esp, 0x003F2F51u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_003F2F51: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003F2F70
 * Original: 0x003F2F70 - 0x003F2FB6 (70 bytes, 25 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F2F70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F2F70: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esi) = 0x836F58;
    if (CMP_EQ(_fa, _fb)) goto loc_003F2F9F; /* je: equal / zero */

loc_003F2F81: ;
    eax = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003F2F89u); RECOMP_ABI_CALL(0x000356D0u, sub_000356D0); /* call 0x000356D0 */

loc_003F2F89: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x003F2F98u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003F2F95u); } /* indirect call */
    }

loc_003F2F98: ;
    MEM32(esi + 0x14) = 0;

loc_003F2F9F: ;
    _fa = (uint32_t)(MEM8(esp + 0xC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0xC), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003F2FAF; /* je: equal / zero */

loc_003F2FA6: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003F2FACu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_003F2FAC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003F2FAF: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003F2FD0
 * Original: 0x003F2FD0 - 0x003F3068 (152 bytes, 55 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F2FD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F2FD0: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x836F70);
    PUSH32(esp, eax);
    edi = ecx;
    ecx = esp + 0xC;
    PUSH32(esp, 0x7E0928);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003F2FEFu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_003F2FEF: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x003F2FF7u); RECOMP_ABI_CALL(0x0002E40Cu, sub_0002E40C); /* call 0x0002E40C */

loc_003F2FF7: ;
    edx = MEM32(eax);
    ecx = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x003F3003u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003F3000u); } /* indirect call */
    }

loc_003F3003: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003F3046; /* je: equal / zero */

loc_003F3007: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0x7BB384);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x003F3019u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003F3017u); } /* indirect call */
    }

loc_003F3019: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003F3040; /* je: equal / zero */

loc_003F301F: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x4F4A771);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003F303Bu); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_003F303B: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_003F3042;

loc_003F3040: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003F3042: ;
    MEM32(edi + 0x14) = esi;
    POP32(esp, esi);

loc_003F3046: ;
    eax = MEM32(edi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_003F3062; /* je: equal / zero */

loc_003F304E: ;
    ecx = esp + 0x44;
    MEM32(esp + 0x44) = 0;
    PUSH32(esp, ecx);
    ecx = MEM32(eax);
    PUSH32(esp, 0x003F3062u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_003F3062: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003F3090
 * Original: 0x003F3090 - 0x003F30FC (108 bytes, 34 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F3090(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F3090: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x80;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0x88);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x003F30B0u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_003F30B0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x003F30BFu); RECOMP_ABI_CALL(0x0001FBCDu, sub_0001FBCD); /* call 0x0001FBCD */

loc_003F30BF: ;
    PUSH32(esp, 0x82C450);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    edx = esp + 0x4C;
    PUSH32(esp, 0x7E0928);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003F30D8u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_003F30D8: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x003F30E0u); RECOMP_ABI_CALL(0x0002E40Cu, sub_0002E40C); /* call 0x0002E40C */

loc_003F30E0: ;
    edx = MEM32(eax);
    ecx = esp + 0x44;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x003F30ECu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003F30E9u); } /* indirect call */
    }

loc_003F30EC: ;
    edx = MEM32(eax + 0x14);
    MEM32(esi + 0x10) = edx;
    POP32(esp, esi);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x80;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003F3120
 * Original: 0x003F3120 - 0x003F313C (28 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F3120(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F3120: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(eax) = LO8(ecx);
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_003F3150
 * Original: 0x003F3150 - 0x003F3151 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F3150(void)
{

loc_003F3150: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003F3160
 * Original: 0x003F3160 - 0x003F3161 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F3160(void)
{

loc_003F3160: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003F3170
 * Original: 0x003F3170 - 0x003F3171 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F3170(void)
{

loc_003F3170: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003F3180
 * Original: 0x003F3180 - 0x003F3181 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F3180(void)
{

loc_003F3180: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003F3190
 * Original: 0x003F3190 - 0x003F31C9 (57 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F3190(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F3190: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x003F319Bu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_003F319B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003F31C0; /* je: equal / zero */

loc_003F31A2: ;
    MEM8(eax) = LO8(ebx);
    MEM32(eax + 4) = ebx;
    MEM32(eax + 8) = ebx;
    MEM32(eax + 0xC) = ebx;
    MEM32(eax + 0x10) = ebx;
    MEM32(eax + 0x14) = ebx;
    MEM32(eax + 0x18) = ebx;
    MEM32(eax + 0x1C) = ebx;
    MEM32(0x907EF0) = eax;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_003F31C0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x907EF0) = eax;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003F31E0
 * Original: 0x003F31E0 - 0x003F31E6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F31E0(void)
{

loc_003F31E0: ;
    eax = MEM32(0x907EF0);
    esp += 4; return; /* ret */

}

/**
 * sub_003F31F0
 * Original: 0x003F31F0 - 0x003F3209 (25 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F31F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F31F0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_003F3203; /* je: equal / zero */

loc_003F31FA: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003F3200u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_003F3200: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003F3203: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003F3210
 * Original: 0x003F3210 - 0x003F3213 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F3210(void)
{

loc_003F3210: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003F3220
 * Original: 0x003F3220 - 0x003F3231 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F3220(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F3220: ;
    eax = MEM32(0x907EF0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003F3230; /* je: equal / zero */

loc_003F3229: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003F322Fu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_003F322F: ;
    POP32(esp, ecx);

loc_003F3230: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003F3240
 * Original: 0x003F3240 - 0x003F3243 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F3240(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F3240: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_003F3250
 * Original: 0x003F3250 - 0x003F3253 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F3250(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F3250: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_003F3260
 * Original: 0x003F3260 - 0x003F3263 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F3260(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F3260: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_003F3270
 * Original: 0x003F3270 - 0x003F3273 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F3270(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F3270: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_003F3280
 * Original: 0x003F3280 - 0x003F3283 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F3280(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F3280: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_003F3290
 * Original: 0x003F3290 - 0x003F32C6 (54 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F3290(void)
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

loc_003F3290: ;
    PUSH32(esp, ecx);
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003F32C1; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_003F32B0: ;
    xmm1 = XMM_SCALAR(MEMF(0x8CFCB0)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(esp) = xmm1.f[0]; /* movss */

loc_003F32C1: ;
    fp_push(MEMF(esp)); /* fld float */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003F32E0
 * Original: 0x003F32E0 - 0x003F336C (140 bytes, 49 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F32E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003F32E0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    MEM32(esi) = 0x836F90;
    MEM32(esi + 4) = 0;
    MEM32(esi + 8) = 0;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x14) = 0;
    if (CMP_AE(_fa, _fb)) goto loc_003F3317; /* jae: above or equal (unsigned >=) */

loc_003F3312: ;
    edi = 4;

loc_003F3317: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003F3323u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_003F3323: ;
    edx = MEM32(esi + 0xC);
    ecx = edx;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edi);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 8) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 4) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_003F3355; /* jbe: below or equal (unsigned <=) */

loc_003F333F: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebp);

loc_003F3342: ;
    ebp = MEM32(esi + 0x14);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + ebp) = eax;
    ebp = MEM32(esi + 0xC);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003F3342; /* jb: below (unsigned <) */

loc_003F3354: ;
    POP32(esp, ebp);

loc_003F3355: ;
    edx = MEM32(esi + 0xC);
    eax = MEM32(esi + 0x14);
    edx = (uint32_t)((int32_t)edx * (int32_t)edi);
    MEM32(edx + eax) = 0;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003F3390
 * Original: 0x003F3390 - 0x003F33A1 (17 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F3390(void)
{

loc_003F3390: ;
    eax = MEM32(ecx + 0x14);
    PUSH32(esp, eax);
    MEM32(ecx) = 0x836F90;
    PUSH32(esp, 0x003F339Fu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_003F339F: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003F33B0
 * Original: 0x003F33B0 - 0x003F33BC (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F33B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F33B0: ;
    eax = MEM32(ecx + 4);
    edx = MEM32(eax);
    MEM32(ecx + 4) = edx;
    MEM32(ecx + 0x10) = MEM32(ecx + 0x10) - 1;
    _fa = (uint32_t)(MEM32(ecx + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_003F33C0
 * Original: 0x003F33C0 - 0x003F33D2 (18 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F33C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F33C0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(ecx + 4);
    MEM32(eax) = edx;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 0x10) = MEM32(ecx + 0x10) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003F33E0
 * Original: 0x003F33E0 - 0x003F340C (44 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F33E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F33E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x14);
    PUSH32(esp, eax);
    MEM32(esi) = 0x836F90;
    PUSH32(esp, 0x003F33F2u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_003F33F2: ;
    SET_LO8(eax, MEM8(esp + 0xC));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003F3406; /* je: equal / zero */

loc_003F33FD: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003F3403u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_003F3403: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003F3406: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003F3420
 * Original: 0x003F3420 - 0x003F3427 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F3420(void)
{

loc_003F3420: ;
    MEM32(ecx) = 0x836140;
    esp += 4; return; /* ret */

}

/**
 * sub_003F3430
 * Original: 0x003F3430 - 0x003F3486 (86 bytes, 18 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F3430(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F3430: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 1;
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x1C) = eax;
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 4);
    MEM32(esp + 8) = 0x79975C;
    MEM32(esp + 0xC) = 4;
    MEM32(esp + 0x10) = 0x7996E0;
    MEM32(esp + 0x18) = 0x799894;
    MEM32(esp + 0x20) = 0x7998A0;
    PUSH32(esp, 0x003F3477u); RECOMP_ABI_CALL(0x0079CC9Cu, sub_0079CC9C); /* call 0x0079CC9C */

loc_003F3477: ;
    ecx = MEM32(esp + 0x24);
    MEM32(ecx + 0x10) = 4;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003F34A0
 * Original: 0x003F34A0 - 0x003F34B2 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F34A0(void)
{

loc_003F34A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x003F34A8u); RECOMP_ABI_CALL(0x000284F8u, sub_000284F8); /* call 0x000284F8 */

loc_003F34A8: ;
    MEM32(esi) = 0x836F94;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003F34C0
 * Original: 0x003F34C0 - 0x003F34FA (58 bytes, 23 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F34C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F34C0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x54);
    PUSH32(esp, 0x003F34CDu); RECOMP_ABI_CALL(0x00018BE8u, sub_00018BE8); /* call 0x00018BE8 */

loc_003F34CD: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003F34F4; /* je: equal / zero */

loc_003F34D6: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x003F34E8u); RECOMP_ABI_CALL(0x00033F97u, sub_00033F97); /* call 0x00033F97 */

loc_003F34E8: ;
    MEM32(esi) = 0x836FB0;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_003F34F4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003F3510
 * Original: 0x003F3510 - 0x003F3516 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F3510(void)
{

loc_003F3510: ;
    eax = 0x7FE818;
    esp += 4; return; /* ret */

}

/**
 * sub_003F3520
 * Original: 0x003F3520 - 0x003F3698 (376 bytes, 121 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F3520(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
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
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003F3520: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    _cf = (int)(_fa < _fb);
    esi = ecx;
    if (CMP_A(_fa, _fb)) goto loc_003F368D; /* ja: above (unsigned >) */

loc_003F3534: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x3F3698); /* switch: 6 entries, 4 targets */
    if (_jt == 0x003F353Bu) goto loc_003F353B;
    if (_jt == 0x003F356Du) goto loc_003F356D;
    if (_jt == 0x003F3594u) goto loc_003F3594;
    if (_jt == 0x003F3614u) goto loc_003F3614;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_003F353B: ;
    ecx = esi;
    PUSH32(esp, 0x003F3542u); RECOMP_ABI_CALL(0x00023B97u, sub_00023B97); /* call 0x00023B97 */

loc_003F3542: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x003F3549u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003F3546u); } /* indirect call */
    }

loc_003F3549: ;
    ecx = MEM32(edi);
    xmm0.f[0] = (float)(int32_t)MEM32(eax + ecx * 4 + 0x18); /* cvtsi2ss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AA840); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_003F368D; /* jnp: not parity */

loc_003F3562: ;
    fp_push(MEMF(0x7A9980)); /* fld float */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_003F356D: ;
    ecx = esi;
    PUSH32(esp, 0x003F3574u); RECOMP_ABI_CALL(0x00023B97u, sub_00023B97); /* call 0x00023B97 */

loc_003F3574: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFF);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x003F3580u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003F357Du); } /* indirect call */
    }

loc_003F3580: ;
    ecx = MEM32(edi);
    edx = MEM32(eax + ecx * 4 + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003F358Cu); RECOMP_ABI_CALL(0x0002EFA6u, sub_0002EFA6); /* call 0x0002EFA6 */

loc_003F358C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_003F3594: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    ecx = esi;
    if (CMP_NE(_fa, _fb)) goto loc_003F35B2; /* jne: not equal / not zero */

loc_003F359B: ;
    PUSH32(esp, 0x003F35A0u); RECOMP_ABI_CALL(0x00023B97u, sub_00023B97); /* call 0x00023B97 */

loc_003F35A0: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x003F35A7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003F35A4u); } /* indirect call */
    }

loc_003F35A7: ;
    edi = MEM32(edi);
    ecx = edi + edi * 2;
    edi = MEM32(eax + ecx * 4 + 4);
    goto loc_003F35C6;

loc_003F35B2: ;
    PUSH32(esp, 0x003F35B7u); RECOMP_ABI_CALL(0x00023B97u, sub_00023B97); /* call 0x00023B97 */

loc_003F35B7: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x003F35BEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003F35BBu); } /* indirect call */
    }

loc_003F35BE: ;
    edi = MEM32(edi);
    ecx = edi + edi * 2;
    edi = MEM32(eax + ecx * 4);

loc_003F35C6: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_003F368D; /* jle: less or equal (signed <=) */

loc_003F35CE: ;
    xmm0.f[0] = (float)(int32_t)edi; /* cvtsi2ss */
    ecx = esi;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x003F35DFu); RECOMP_ABI_CALL(0x00036A26u, sub_00036A26); /* call 0x00036A26 */

loc_003F35DF: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x83483C); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca >= _fcb)) goto loc_003F368D; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm1.f[0]) */

loc_003F35FB: ;
    eax = 0x7FFF;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _cf = 0; /* logical op clears CF */
    eax = eax ^ edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x003F360Cu); RECOMP_ABI_CALL(0x0002EFA6u, sub_0002EFA6); /* call 0x0002EFA6 */

loc_003F360C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_003F3614: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    _cf = (int)(_fa < _fb);
    ecx = esi;
    if (CMP_NE(_fa, _fb)) goto loc_003F3632; /* jne: not equal / not zero */

loc_003F361B: ;
    PUSH32(esp, 0x003F3620u); RECOMP_ABI_CALL(0x00023B97u, sub_00023B97); /* call 0x00023B97 */

loc_003F3620: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x003F3627u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003F3624u); } /* indirect call */
    }

loc_003F3627: ;
    edi = MEM32(edi);
    ecx = edi + edi * 2;
    eax = MEM32(eax + ecx * 4 + 4);
    goto loc_003F3646;

loc_003F3632: ;
    PUSH32(esp, 0x003F3637u); RECOMP_ABI_CALL(0x00023B97u, sub_00023B97); /* call 0x00023B97 */

loc_003F3637: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x003F363Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003F363Bu); } /* indirect call */
    }

loc_003F363E: ;
    edi = MEM32(edi);
    ecx = edi + edi * 2;
    eax = MEM32(eax + ecx * 4);

loc_003F3646: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_GE(_fas, _fbs)) goto loc_003F368D; /* jge: greater or equal (signed >=) */

loc_003F364A: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edi = eax;
    _cf = 0; /* logical op clears CF */
    edi = edi ^ edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edi) < (uint32_t)(edx));
    edi = edi - edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0.f[0] = (float)(int32_t)edi; /* cvtsi2ss */
    ecx = esi;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x003F3662u); RECOMP_ABI_CALL(0x00036A26u, sub_00036A26); /* call 0x00036A26 */

loc_003F3662: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x836FC8); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca >= _fcb)) goto loc_003F368D; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm1.f[0]) */

loc_003F367A: ;
    PUSH32(esp, 0x8000);
    PUSH32(esp, edi);
    PUSH32(esp, 0x003F3685u); RECOMP_ABI_CALL(0x0002EFA6u, sub_0002EFA6); /* call 0x0002EFA6 */

loc_003F3685: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_003F368D: ;
    fp_push(MEMF(0x7AA840)); /* fld float */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003F3750
 * Original: 0x003F3750 - 0x003F3756 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F3750(void)
{

loc_003F3750: ;
    eax = 0x54;
    esp += 4; return; /* ret */

}

/**
 * sub_003F3760
 * Original: 0x003F3760 - 0x003F376A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F3760(void)
{

loc_003F3760: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x10);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003F3770
 * Original: 0x003F3770 - 0x003F37A4 (52 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F3770(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F3770: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x003F377Au); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_003F377A: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003F3798; /* je: equal / zero */

loc_003F3783: ;
    ecx = esi;
    PUSH32(esp, 0x003F378Au); RECOMP_ABI_CALL(0x000284F8u, sub_000284F8); /* call 0x000284F8 */

loc_003F378A: ;
    MEM32(esi) = 0x836F94;
    MEM32(0x907CD0) = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003F3798: ;
    MEM32(0x907CD0) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003F37C0
 * Original: 0x003F37C0 - 0x003F37DF (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F37C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F37C0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x836140;
    if (TEST_Z(_fa, _fb)) goto loc_003F37D9; /* je: equal / zero */

loc_003F37D0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003F37D6u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_003F37D6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003F37D9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003F37F0
 * Original: 0x003F37F0 - 0x003F386A (122 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F37F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003F37F0: ;
    eax = MEM32(esp + 4);
    edx = eax + 1;

loc_003F37F7: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003F37F7; /* jne: not equal / not zero */

loc_003F37FE: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = eax + 1;
    eax = MEM32(esp + 0x14);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(eax) = 0;
    SET_LO8(ebx, 0x20);
    if (CMP_LE(_fas, _fbs)) goto loc_003F3866; /* jle: less or equal (signed <=) */

loc_003F381A: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    /* nop */

loc_003F3820: ;
    edx = MEM32(esp + 0x14);
    SET_LO8(edx, MEM8(esi + edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003F3859; /* je: equal / zero */

loc_003F382B: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0x20 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003F384D; /* je: equal / zero */

loc_003F3830: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x20 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003F3843; /* jne: not equal / not zero */

loc_003F3835: ;
    ebx = MEM32(eax);
    ebx = MEM32(ebp + ebx * 4);
    MEM8(ecx + ebx) = 0;
    MEM32(eax) = MEM32(eax) + 1;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003F3843: ;
    ebx = MEM32(eax);
    ebx = MEM32(ebp + ebx * 4);
    MEM8(ecx + ebx) = LO8(edx);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003F384D: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    SET_LO8(ebx, LO8(edx));
    if (CMP_L(_fas, _fbs)) goto loc_003F3820; /* jl: less (signed <) */

loc_003F3854: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_003F3859: ;
    edx = MEM32(eax);
    edx = MEM32(ebp + edx * 4);
    MEM8(ecx + edx) = 0;
    MEM32(eax) = MEM32(eax) + 1;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, ebp);

loc_003F3866: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003F3890
 * Original: 0x003F3890 - 0x003F392A (154 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F3890(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F3890: ;
    eax = 0x1150;
    PUSH32(esp, 0x003F389Au); RECOMP_ABI_CALL(0x005CC470u, sub_005CC470); /* call 0x005CC470 */

loc_003F389A: ;
    PUSH32(esp, esi);
    eax = esp + 0x554;
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003F38ADu); RECOMP_ABI_CALL(0x0044900Bu, sub_0044900B); /* call 0x0044900B */

loc_003F38AD: ;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 4), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003F38F3; /* jne: not equal / not zero */

loc_003F38B4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esp + 0x70;
    /* nop */

loc_003F38C0: ;
    MEM32(esp + eax * 4 + 0xC) = ecx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x32) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x32;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x19) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x19 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003F38C0; /* jl: less (signed <) */

loc_003F38CD: ;
    PUSH32(esp, 0x32);
    esi = esp + 0x10;
    PUSH32(esp, 0x19);
    edx = esi;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esp + 0x564;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003F38EAu); RECOMP_ABI_CALL(0x00012F90u, sub_00012F90); /* call 0x00012F90 */

loc_003F38EA: ;
    eax = MEM32(esp + 0x1C);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_003F38F7;

loc_003F38F3: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003F38F7: ;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 4), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003F3916; /* jne: not equal / not zero */

loc_003F38FE: ;
    ecx = MEM32(esp + 0x554);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 7 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003F390F; /* je: equal / zero */

loc_003F390A: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 6 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003F3916; /* jne: not equal / not zero */

loc_003F390F: ;
    MEM8(0x8FC1C8) = 1;

loc_003F3916: ;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003F391Du); RECOMP_ABI_CALL(0x0002BC93u, sub_0002BC93); /* call 0x0002BC93 */

loc_003F391D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x1150) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1150;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003F3950
 * Original: 0x003F3950 - 0x003F3951 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F3950(void)
{

loc_003F3950: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003F3960
 * Original: 0x003F3960 - 0x003F3961 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F3960(void)
{

loc_003F3960: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003F3970
 * Original: 0x003F3970 - 0x003F3971 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F3970(void)
{

loc_003F3970: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003F3980
 * Original: 0x003F3980 - 0x003F3981 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F3980(void)
{

loc_003F3980: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003F3990
 * Original: 0x003F3990 - 0x003F3991 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F3990(void)
{

loc_003F3990: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003F39A0
 * Original: 0x003F39A0 - 0x003F39CF (47 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F39A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F39A0: ;
    SET_LO8(eax, MEM8(0x907EFC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003F39CE; /* je: equal / zero */

loc_003F39A9: ;
    ecx = MEM32(0x9092A0);
    edx = MEM32(0x907F00);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x003F39BDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003F39BAu); } /* indirect call */
    }

loc_003F39BD: ;
    MEM32(0x907F00) = 0;
    MEM8(0x907EFC) = 0;

loc_003F39CE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003F39E0
 * Original: 0x003F39E0 - 0x003F39EA (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F39E0(void)
{

loc_003F39E0: ;
    eax = MEM32(esp + 4);
    MEM32(0x9092A0) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_003F39F0
 * Original: 0x003F39F0 - 0x003F39F5 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F39F0(void)
{

loc_003F39F0: ;
    eax = MEM32(esp + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_003F3A00
 * Original: 0x003F3A00 - 0x003F3A65 (101 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F3A00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F3A00: ;
    SET_LO8(ecx, MEM8(0x907EFC));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(eax) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003F3A61; /* jne: not equal / not zero */

loc_003F3A0F: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    edx = esp + 4;
    PUSH32(esp, edx);
    edx = esi + esi * 2;
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM32(0x9092A0) = ecx;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003F3A3Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003F3A38u); } /* indirect call */
    }

loc_003F3A3A: ;
    PUSH32(esp, 0xC);
    ecx = 0x907F04;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    MEM32(0x907F00) = eax;
    MEM32(0x907F04) = ecx;
    MEM32(0x907F08) = ecx;
    PUSH32(esp, 0x003F3A59u); RECOMP_ABI_CALL(0x0059C9B7u, sub_0059C9B7); /* call 0x0059C9B7 */

loc_003F3A59: ;
    MEM8(0x907EFC) = 1;
    POP32(esp, esi);

loc_003F3A61: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003F3A80
 * Original: 0x003F3A80 - 0x003F3A8A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F3A80(void)
{

loc_003F3A80: ;
    eax = MEM32(esp + 4);
    MEM32(0x908F2C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_003F3A90
 * Original: 0x003F3A90 - 0x003F3AC5 (53 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F3A90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F3A90: ;
    SET_LO8(eax, MEM8(0x908F28));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003F3AC4; /* jne: not equal / not zero */

loc_003F3A99: ;
    eax = MEM32(0x908F2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003F3AC4; /* je: equal / zero */

loc_003F3AA2: ;
    ecx = MEM32(esp + 4);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x907F28);
    PUSH32(esp, 0x003F3AB6u); RECOMP_ABI_CALL(0x005CC6CDu, sub_005CC6CD); /* call 0x005CC6CD */

loc_003F3AB6: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x907F28);
    { uint32_t _icall_target = MEM32(0x908F2C); PUSH32(esp, 0x003F3AC1u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x003F3ABBu); } /* indirect call */
    }

loc_003F3AC1: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003F3AC4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003F3AE0
 * Original: 0x003F3AE0 - 0x003F3AEC (12 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F3AE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F3AE0: ;
    eax = MEM32(esp + 4);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003F3AF0
 * Original: 0x003F3AF0 - 0x003F3AF5 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F3AF0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003F3AF0: ;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003F3B00
 * Original: 0x003F3B00 - 0x003F3B13 (19 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F3B00(void)
{

loc_003F3B00: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 4); /* cvttss2si */
    esp += 4; return; /* ret */

}

/**
 * sub_003F3B20
 * Original: 0x003F3B20 - 0x003F3B23 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F3B20(void)
{

loc_003F3B20: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_003F3B30
 * Original: 0x003F3B30 - 0x003F3B73 (67 bytes, 18 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003F3B30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F3B30: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x14)); /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(esp); /* movaps */
    eax = ecx;
    XMM_STORE(eax, xmm0); /* movaps */
    esp = ebp;
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003F3B90
 * Original: 0x003F3B90 - 0x003F3B93 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F3B90(void)
{

loc_003F3B90: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_003F3BA0
 * Original: 0x003F3BA0 - 0x003F3BE5 (69 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003F3BA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F3BA0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(edx)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 0xC)); /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(esp); /* movaps */
    eax = ecx;
    XMM_STORE(eax, xmm0); /* movaps */
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003F3C00
 * Original: 0x003F3C00 - 0x003F3C45 (69 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003F3C00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F3C00: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(edx)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 0xC)); /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(esp); /* movaps */
    eax = ecx;
    XMM_STORE(eax, xmm0); /* movaps */
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003F3C60
 * Original: 0x003F3C60 - 0x003F3C71 (17 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F3C60(void)
{

loc_003F3C60: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    eax = eax + edx * 4;
    eax = ecx + eax * 4;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003F3C80
 * Original: 0x003F3C80 - 0x003F3C83 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F3C80(void)
{

loc_003F3C80: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_003F3C90
 * Original: 0x003F3C90 - 0x003F3C94 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F3C90(void)
{

loc_003F3C90: ;
    eax = ecx + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_003F3CA0
 * Original: 0x003F3CA0 - 0x003F3CA4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F3CA0(void)
{

loc_003F3CA0: ;
    eax = ecx + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_003F3CB0
 * Original: 0x003F3CB0 - 0x003F3CCD (29 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F3CB0(void)
{

loc_003F3CB0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 8) = edx;
    eax = MEM32(eax + 0xC);
    MEM32(ecx + 0xC) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003F3CE0
 * Original: 0x003F3CE0 - 0x003F3CFE (30 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F3CE0(void)
{

loc_003F3CE0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    MEM32(ecx + 0x10) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x14) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 0x18) = edx;
    eax = MEM32(eax + 0xC);
    MEM32(ecx + 0x1C) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003F3D10
 * Original: 0x003F3D10 - 0x003F3D2E (30 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F3D10(void)
{

loc_003F3D10: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    MEM32(ecx + 0x20) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x24) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 0x28) = edx;
    eax = MEM32(eax + 0xC);
    MEM32(ecx + 0x2C) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003F3D40
 * Original: 0x003F3D40 - 0x003F3D45 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F3D40(void)
{

loc_003F3D40: ;
    eax = MEM32(esp + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_003F3D50
 * Original: 0x003F3D50 - 0x003F3D58 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F3D50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F3D50: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003F3D60
 * Original: 0x003F3D60 - 0x003F3D68 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F3D60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F3D60: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003F3D70
 * Original: 0x003F3D70 - 0x003F3D7D (13 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F3D70(void)
{

loc_003F3D70: ;
    eax = MEM32(ecx + 8);
    ecx = MEM32(esp + 4);
    eax = eax + ecx * 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003F3D80
 * Original: 0x003F3D80 - 0x003F3D84 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F3D80(void)
{

loc_003F3D80: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_003F3D90
 * Original: 0x003F3D90 - 0x003F3D94 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F3D90(void)
{

loc_003F3D90: ;
    eax = MEM32(ecx + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_003F3DA0
 * Original: 0x003F3DA0 - 0x003F3DB9 (25 bytes, 8 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F3DA0(void)
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

loc_003F3DA0: ;
    eax = MEM32(ecx + 0x10);
    edx = MEM32(esp + 4);
    eax = MEM32(eax + edx * 4);
    edx = MEM32(esp + 8);
    ecx = MEM32(ecx + 0xC);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(ecx + eax * 4)); /* fld float */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003F3DC0
 * Original: 0x003F3DC0 - 0x003F3DE1 (33 bytes, 9 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F3DC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F3DC0: ;
    eax = MEM32(ecx + 0x10);
    edx = MEM32(esp + 4);
    eax = MEM32(eax + edx * 4);
    edx = MEM32(esp + 8);
    ecx = MEM32(ecx + 0xC);
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(ecx + eax * 4) = xmm0.f[0]; /* movss */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003F3DF0
 * Original: 0x003F3DF0 - 0x003F3DFE (14 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F3DF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F3DF0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(ecx);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003F3E10
 * Original: 0x003F3E10 - 0x003F3E14 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F3E10(void)
{

loc_003F3E10: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_003F3E20
 * Original: 0x003F3E20 - 0x003F3E4E (46 bytes, 18 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F3E20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F3E20: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x38);
    if (CMP_G(_fas, _fbs)) goto loc_003F3E3F; /* jg: greater (signed >) */

loc_003F3E30: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)eax);
    eax = MEM32(ecx + 4);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(eax + esi * 4);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_003F3E3F: ;
    ecx = MEM32(ecx + 4);
    esi = (uint32_t)((int32_t)esi * (int32_t)edx);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ecx + esi * 4);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003F3E60
 * Original: 0x003F3E60 - 0x003F3EA4 (68 bytes, 20 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003F3E60(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003F3E60: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 8);
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 8) = xmm3.f[0]; /* movss */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp)); /* fld float */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003F3EC0
 * Original: 0x003F3EC0 - 0x003F3EDD (29 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F3EC0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003F3EC0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 8)); /* fmul dword ptr [ecx + 8] */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 4)); /* fmul dword ptr [ecx + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx)); /* fmul dword ptr [ecx] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003F3EF0
 * Original: 0x003F3EF0 - 0x003F3EF1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F3EF0(void)
{

loc_003F3EF0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003F3F00
 * Original: 0x003F3F00 - 0x003F3F46 (70 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F3F00(void)
{

loc_003F3F00: ;
    eax = MEM32(esp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    ecx = MEM32(esp + 0xC);
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx); /* addss */
    edx = MEM32(esp + 4);
    MEMF(edx) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 4); /* addss */
    MEMF(edx + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 8); /* addss */
    MEMF(edx + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 0xC); /* addss */
    MEMF(edx + 0xC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003F3F60
 * Original: 0x003F3F60 - 0x003F3F78 (24 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F3F60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F3F60: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003F3F74u); RECOMP_ABI_CALL(0x005A0935u, sub_005A0935); /* call 0x005A0935 */

loc_003F3F74: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003F3F80
 * Original: 0x003F3F80 - 0x003F3F98 (24 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F3F80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F3F80: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003F3F94u); RECOMP_ABI_CALL(0x005A0935u, sub_005A0935); /* call 0x005A0935 */

loc_003F3F94: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003F3FA0
 * Original: 0x003F3FA0 - 0x003F3FB4 (20 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F3FA0(void)
{

loc_003F3FA0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    ecx = 0xC;
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
    esp += 4; return; /* ret */

}

/**
 * sub_003F3FC0
 * Original: 0x003F3FC0 - 0x003F3FDF (31 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F3FC0(void)
{

loc_003F3FC0: ;
    eax = MEM32(esp + 8);
    edx = MEM32(eax);
    ecx = MEM32(esp + 4);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 8) = edx;
    eax = MEM32(eax + 0xC);
    MEM32(ecx + 0xC) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_003F3FF0
 * Original: 0x003F3FF0 - 0x003F403D (77 bytes, 24 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F3FF0(void)
{

loc_003F3FF0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 8) = edx;
    edx = MEM32(eax + 0xC);
    MEM32(ecx + 0x10) = edx;
    edx = MEM32(eax + 0x10);
    MEM32(ecx + 0x14) = edx;
    edx = MEM32(eax + 0x14);
    MEM32(ecx + 0x18) = edx;
    edx = MEM32(eax + 0x18);
    MEM32(ecx + 0x20) = edx;
    edx = MEM32(eax + 0x1C);
    MEM32(ecx + 0x24) = edx;
    eax = MEM32(eax + 0x20);
    MEM32(ecx + 0x28) = eax;
    MEMF(ecx + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0xC) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003F4050
 * Original: 0x003F4050 - 0x003F40D7 (135 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F4050(void)
{

loc_003F4050: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax + 8) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax + 0x10) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax + 0x14) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax + 0x18) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax + 0x20) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax + 0x24) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x28)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax + 0x28) = xmm1.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003F4100
 * Original: 0x003F4100 - 0x003F418D (141 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F4100(void)
{

loc_003F4100: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx); /* subss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 4); /* subss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 8); /* subss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 0x10); /* subss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 0x14); /* subss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 0x18); /* subss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 0x20); /* subss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 0x24); /* subss */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x28)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 0x28); /* subss */
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003F41B0
 * Original: 0x003F41B0 - 0x003F4311 (353 bytes, 103 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F41B0(void)
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

loc_003F41B0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    xmm2 = XMM_SCALAR(MEMF(esi)); /* movss */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    xmm2.f[0] = xmm2.f[0] - MEMF(edi); /* subss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003F41CF; /* jb: below (unsigned <) (xmm2.f[0] vs xmm0.f[0]) */

loc_003F41CA: ;
    xmm1 = xmm2; /* movaps */
    goto loc_003F41D6;

loc_003F41CF: ;
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */

loc_003F41D6: ;
    xmm3 = XMM_SCALAR(MEMF(0x7AB2D0)); /* movss */
    _fca = xmm3.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003F430C; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm1.f[0]) */

loc_003F41E7: ;
    xmm2 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(edi + 4); /* subss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003F41FB; /* jb: below (unsigned <) (xmm2.f[0] vs xmm0.f[0]) */

loc_003F41F6: ;
    xmm1 = xmm2; /* movaps */
    goto loc_003F4202;

loc_003F41FB: ;
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */

loc_003F4202: ;
    _fca = xmm3.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003F430C; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm1.f[0]) */

loc_003F420B: ;
    xmm2 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(edi + 8); /* subss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003F421F; /* jb: below (unsigned <) (xmm2.f[0] vs xmm0.f[0]) */

loc_003F421A: ;
    xmm1 = xmm2; /* movaps */
    goto loc_003F4226;

loc_003F421F: ;
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */

loc_003F4226: ;
    _fca = xmm3.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003F430C; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm1.f[0]) */

loc_003F422F: ;
    xmm2 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(edi + 0x10); /* subss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003F4243; /* jb: below (unsigned <) (xmm2.f[0] vs xmm0.f[0]) */

loc_003F423E: ;
    xmm1 = xmm2; /* movaps */
    goto loc_003F424A;

loc_003F4243: ;
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */

loc_003F424A: ;
    _fca = xmm3.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003F430C; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm1.f[0]) */

loc_003F4253: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 0x14)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(edi + 0x14); /* subss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003F4267; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_003F4262: ;
    xmm0 = xmm1; /* movaps */
    goto loc_003F426B;

loc_003F4267: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */

loc_003F426B: ;
    _fca = xmm3.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003F430C; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm0.f[0]) */

loc_003F4274: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x18)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edi + 0x18); /* subss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x003F4289u); RECOMP_ABI_CALL(0x0002A5B4u, sub_0002A5B4); /* call 0x0002A5B4 */

loc_003F4289: ;
    fp_push(MEMF(0x7AB2D0)); /* fld float */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_003F430C; /* jbe: below or equal (unsigned <=) */

loc_003F4298: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edi + 0x20); /* subss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x003F42ADu); RECOMP_ABI_CALL(0x0002A5B4u, sub_0002A5B4); /* call 0x0002A5B4 */

loc_003F42AD: ;
    fp_push(MEMF(0x7AB2D0)); /* fld float */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_003F430C; /* jbe: below or equal (unsigned <=) */

loc_003F42BC: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x24)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edi + 0x24); /* subss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x003F42D1u); RECOMP_ABI_CALL(0x0002A5B4u, sub_0002A5B4); /* call 0x0002A5B4 */

loc_003F42D1: ;
    fp_push(MEMF(0x7AB2D0)); /* fld float */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_003F430C; /* jbe: below or equal (unsigned <=) */

loc_003F42E0: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x28)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edi + 0x28); /* subss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x003F42F5u); RECOMP_ABI_CALL(0x0002A5B4u, sub_0002A5B4); /* call 0x0002A5B4 */

loc_003F42F5: ;
    fp_push(MEMF(0x7AB2D0)); /* fld float */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_003F430C; /* jbe: below or equal (unsigned <=) */

loc_003F4304: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003F430C: ;
    POP32(esp, edi);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003F4370
 * Original: 0x003F4370 - 0x003F4413 (163 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F4370(void)
{

loc_003F4370: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    edx = MEM32(esp + 0xC);
    xmm0.f[0] = xmm0.f[0] - MEMF(edx); /* subss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edx + 4); /* subss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edx + 8); /* subss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edx + 0x10); /* subss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edx + 0x14); /* subss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x18)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edx + 0x18); /* subss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edx + 0x20); /* subss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x24)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edx + 0x24); /* subss */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x28)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edx + 0x28); /* subss */
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003F4440
 * Original: 0x003F4440 - 0x003F44CD (141 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F4440(void)
{

loc_003F4440: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx); /* addss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 4); /* addss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 8); /* addss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0x10); /* addss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0x14); /* addss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x18)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0x18); /* addss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0x20); /* addss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x24)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0x24); /* addss */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x28)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0x28); /* addss */
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003F44F0
 * Original: 0x003F44F0 - 0x003F457B (139 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F44F0(void)
{

loc_003F44F0: ;
    eax = MEM32(esp + 8);
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    ecx = MEM32(esp + 4);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 8) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 0x10) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 0x14) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 0x18) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 0x20) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 0x24) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x28)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 0x28) = xmm1.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003F45A0
 * Original: 0x003F45A0 - 0x003F481B (635 bytes, 146 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003F45A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F45A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x58;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    ecx = eax;
    edx = MEM32(ecx);
    MEM32(esp + 0x28) = edx;
    edx = MEM32(ecx + 4);
    MEM32(esp + 0x2C) = edx;
    edx = MEM32(ecx + 8);
    ecx = MEM32(ecx + 0xC);
    PUSH32(esp, esi);
    MEM32(esp + 0x34) = edx;
    MEM32(esp + 0x38) = ecx;
    ecx = eax + 0x10;
    edx = ecx;
    esi = MEM32(edx);
    MEM32(esp + 0xC) = esi;
    esi = MEM32(edx + 4);
    MEM32(esp + 0x10) = esi;
    esi = MEM32(edx + 8);
    edx = MEM32(edx + 0xC);
    xmm2 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEM32(esp + 0x14) = esi;
    MEM32(esp + 0x18) = edx;
    edx = eax + 0x20;
    PUSH32(esp, edi);
    esi = edx;
    edi = MEM32(esi);
    MEM32(esp + 0x20) = edi;
    edi = MEM32(esi + 4);
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    MEM32(esp + 0x24) = edi;
    edi = MEM32(esi + 8);
    esi = MEM32(esi + 0xC);
    MEM32(esp + 0x2C) = esi;
    esi = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(esi)); /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm1 = XMM_MEM(esp + 0x30); /* movaps */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp + 0x30); /* divss */
    MEM32(esp + 0x28) = edi;
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */
    xmm1 = XMM_MUL(xmm1, xmm0); /* mulps */
    XMM_STORE(esp + 0x40, xmm1); /* movaps */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    xmm1 = XMM_MEM(esp + 0x50); /* movaps */
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x10); /* subss */
    xmm3.f[0] = xmm3.f[0] - MEMF(esp + 0x24); /* subss */
    XMM_STORE(esp + 0x30, xmm1); /* movaps */
    xmm3.f[0] = xmm3.f[0]; /* movss */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */
    xmm1 = XMM_MUL(xmm1, xmm0); /* mulps */
    xmm0 = XMM_MEM(esp + 0x10); /* movaps */
    xmm0 = XMM_ADD(xmm0, xmm1); /* addps */
    XMM_STORE(esp + 0x10, xmm0); /* movaps */
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] / MEMF(esp + 0x14); /* divss */
    xmm1 = XMM_SHUFFLE(xmm1, xmm1, 0); /* shufps */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    XMM_STORE(esp + 0x50, xmm0); /* movaps */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x5C)); /* movss */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(esp + 0x40); /* movaps */
    XMM_STORE(esp + 0x10, xmm0); /* movaps */
    esi = MEM32(ebp + 0xC);
    xmm5 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    xmm3 = XMM_SHUFFLE(xmm3, xmm3, 0); /* shufps */
    xmm0 = XMM_MUL(xmm0, xmm3); /* mulps */
    xmm1 = xmm0; /* movaps */
    xmm0 = XMM_MEM(esp + 0x20); /* movaps */
    xmm0 = XMM_ADD(xmm0, xmm1); /* addps */
    XMM_STORE(esp + 0x20, xmm0); /* movaps */
    xmm2.f[0] = xmm2.f[0] / MEMF(esp + 0x28); /* divss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm2.f[0] = xmm2.f[0]; /* movss */
    xmm2 = XMM_SHUFFLE(xmm2, xmm2, 0); /* shufps */
    xmm0 = XMM_MUL(xmm0, xmm2); /* mulps */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    XMM_STORE(esp + 0x50, xmm0); /* movaps */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x5C)); /* movss */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(esp + 0x40); /* movaps */
    XMM_STORE(esp + 0x20, xmm0); /* movaps */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    MEMF(esi + 8) = xmm1.f[0]; /* movss */
    xmm4 = xmm2; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm4.f[0]; /* subss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm6 = xmm5; /* movaps */
    xmm6.f[0] = xmm6.f[0] - xmm0.f[0]; /* subss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    MEMF(esi) = xmm6.f[0]; /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEMF(ecx) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    MEMF(edx) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    POP32(esp, edi);
    MEMF(eax + 4) = xmm4.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm5.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm2.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm3.f[0]; /* movss */
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x2C) = xmm1.f[0]; /* movss */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003F48C0
 * Original: 0x003F48C0 - 0x003F4A28 (360 bytes, 86 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F48C0(void)
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

loc_003F48C0: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 0x10);
    edx = MEM32(eax);
    xmm3 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm7 = XMM_SCALAR(MEMF(eax + 0x28)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    ecx = MEM32(esp + 8);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm3.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0xC);
    MEMF(esp) = xmm7.f[0]; /* movss */
    MEMF(edx + 8) = xmm0.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003F4901; /* jb: below (unsigned <) (xmm3.f[0] vs xmm0.f[0]) */

loc_003F48FC: ;
    xmm1 = xmm3; /* movaps */
    goto loc_003F4908;

loc_003F4901: ;
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm3.f[0]; /* subss */

loc_003F4908: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003F49DF; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_003F4911: ;
    xmm1 = xmm3; /* movaps */
    xmm2 = xmm4; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm1.f[0] = xmm1.f[0] / MEMF(esp + 0x10); /* divss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = xmm1; /* movaps */
    xmm1 = xmm7; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm6.f[0]; /* subss */
    xmm4 = xmm5; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * MEMF(0x7ABE28); /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm4.f[0]; /* addss */
    xmm4 = xmm1; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm7 = xmm4; /* movaps */
    xmm7.f[0] = xmm7.f[0] + xmm6.f[0]; /* addss */
    xmm6 = XMM_SCALAR(MEMF(esp)); /* movss */
    MEMF(ecx + 4) = xmm7.f[0]; /* movss */
    xmm6.f[0] = xmm6.f[0] - xmm4.f[0]; /* subss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEMF(ecx + 8) = xmm6.f[0]; /* movss */
    MEMF(edx) = xmm4.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(edx + 4) = xmm5.f[0]; /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    MEMF(eax + 0x14) = xmm2.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm3.f[0]; /* movss */
    MEMF(eax + 0x24) = xmm3.f[0]; /* movss */
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    MEMF(eax) = xmm1.f[0]; /* movss */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_003F49DF: ;
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(ecx + 4) = xmm6.f[0]; /* movss */
    MEMF(ecx + 8) = xmm7.f[0]; /* movss */
    MEMF(edx) = xmm4.f[0]; /* movss */
    MEMF(edx + 4) = xmm5.f[0]; /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x28) = xmm1.f[0]; /* movss */
    MEMF(eax) = xmm1.f[0]; /* movss */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003F4A90
 * Original: 0x003F4A90 - 0x003F4FA9 (1305 bytes, 377 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F4A90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
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
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003F4A90: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x2C));
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm4 = XMM_ZERO(); /* xorps self = zero */
    xmm7 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x34);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x3C);
    PUSH32(esp, esi);
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 2;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ebp) < (uint32_t)(ebx));
    ebp = ebp - ebx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = esi;
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x14) = ebp;
    /* nop */

loc_003F4AC0: ;
    MEM32(esp + 0x18) = 0;
    MEM32(esp + 0x38) = eax;
    goto loc_003F4AD2;

loc_003F4ACE: ;
    eax = MEM32(esp + 0x1C);

loc_003F4AD2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    ecx = esi;
    if (CMP_L(_fas, _fbs)) goto loc_003F4C4F; /* jl: less (signed <) */

loc_003F4ADD: ;
    esi = ebx + ebp + 0xC;
    edx = ebx + 4;

loc_003F4AE4: ;
    xmm0 = XMM_SCALAR(MEMF(edx + -4)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003F4AF3; /* jb: below (unsigned <) (xmm0.f[0] vs xmm4.f[0]) */

loc_003F4AEE: ;
    xmm1 = xmm0; /* movaps */
    goto loc_003F4AFA;

loc_003F4AF3: ;
    xmm1 = xmm4; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */

loc_003F4AFA: ;
    xmm2 = XMM_SCALAR(MEMF(edx)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003F4B08; /* jb: below (unsigned <) (xmm2.f[0] vs xmm4.f[0]) */

loc_003F4B03: ;
    xmm0 = xmm2; /* movaps */
    goto loc_003F4B0F;

loc_003F4B08: ;
    xmm0 = xmm4; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */

loc_003F4B0F: ;
    xmm2 = XMM_SCALAR(MEMF(esi + -12)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm4.f[0]; /* comiss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003F4B22; /* jb: below (unsigned <) (xmm2.f[0] vs xmm4.f[0]) */

loc_003F4B1D: ;
    xmm1 = xmm2; /* movaps */
    goto loc_003F4B29;

loc_003F4B22: ;
    xmm1 = xmm4; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */

loc_003F4B29: ;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_003F4CC8; /* jnp: not parity */

loc_003F4B3A: ;
    xmm0 = XMM_SCALAR(MEMF(edx)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003F4B48; /* jb: below (unsigned <) (xmm0.f[0] vs xmm4.f[0]) */

loc_003F4B43: ;
    xmm1 = xmm0; /* movaps */
    goto loc_003F4B4F;

loc_003F4B48: ;
    xmm1 = xmm4; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */

loc_003F4B4F: ;
    xmm2 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003F4B5E; /* jb: below (unsigned <) (xmm2.f[0] vs xmm4.f[0]) */

loc_003F4B59: ;
    xmm0 = xmm2; /* movaps */
    goto loc_003F4B65;

loc_003F4B5E: ;
    xmm0 = xmm4; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */

loc_003F4B65: ;
    xmm2 = XMM_SCALAR(MEMF(edx + ebp)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm4.f[0]; /* comiss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003F4B78; /* jb: below (unsigned <) (xmm2.f[0] vs xmm4.f[0]) */

loc_003F4B73: ;
    xmm1 = xmm2; /* movaps */
    goto loc_003F4B7F;

loc_003F4B78: ;
    xmm1 = xmm4; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */

loc_003F4B7F: ;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_003F4CBD; /* jnp: not parity */

loc_003F4B90: ;
    xmm0 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003F4B9F; /* jb: below (unsigned <) (xmm0.f[0] vs xmm4.f[0]) */

loc_003F4B9A: ;
    xmm1 = xmm0; /* movaps */
    goto loc_003F4BA6;

loc_003F4B9F: ;
    xmm1 = xmm4; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */

loc_003F4BA6: ;
    xmm2 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003F4BB5; /* jb: below (unsigned <) (xmm2.f[0] vs xmm4.f[0]) */

loc_003F4BB0: ;
    xmm0 = xmm2; /* movaps */
    goto loc_003F4BBC;

loc_003F4BB5: ;
    xmm0 = xmm4; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */

loc_003F4BBC: ;
    xmm2 = XMM_SCALAR(MEMF(esi + -4)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm4.f[0]; /* comiss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003F4BCF; /* jb: below (unsigned <) (xmm2.f[0] vs xmm4.f[0]) */

loc_003F4BCA: ;
    xmm1 = xmm2; /* movaps */
    goto loc_003F4BD6;

loc_003F4BCF: ;
    xmm1 = xmm4; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */

loc_003F4BD6: ;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_003F4CC0; /* jnp: not parity */

loc_003F4BE7: ;
    xmm0 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003F4BF6; /* jb: below (unsigned <) (xmm0.f[0] vs xmm4.f[0]) */

loc_003F4BF1: ;
    xmm1 = xmm0; /* movaps */
    goto loc_003F4BFD;

loc_003F4BF6: ;
    xmm1 = xmm4; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */

loc_003F4BFD: ;
    xmm2 = XMM_SCALAR(MEMF(edx + 0xC)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003F4C0C; /* jb: below (unsigned <) (xmm2.f[0] vs xmm4.f[0]) */

loc_003F4C07: ;
    xmm0 = xmm2; /* movaps */
    goto loc_003F4C13;

loc_003F4C0C: ;
    xmm0 = xmm4; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */

loc_003F4C13: ;
    xmm2 = XMM_SCALAR(MEMF(esi)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm4.f[0]; /* comiss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003F4C25; /* jb: below (unsigned <) (xmm2.f[0] vs xmm4.f[0]) */

loc_003F4C20: ;
    xmm1 = xmm2; /* movaps */
    goto loc_003F4C2C;

loc_003F4C25: ;
    xmm1 = xmm4; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */

loc_003F4C2C: ;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_003F4CC5; /* jnp: not parity */

loc_003F4C3D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(4)) >> 32) & 1);
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0x10)) >> 32) & 1);
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x10)) >> 32) & 1);
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFEu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_003F4AE4; /* jle: less or equal (signed <=) */

loc_003F4C4F: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_003F4CC8; /* jg: greater (signed >) */

loc_003F4C54: ;
    eax = MEM32(esp + 0x40);
    edx = eax + ecx * 4;
    goto loc_003F4C60;

    /* nop */

loc_003F4C60: ;
    xmm0 = XMM_SCALAR(MEMF(edx)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003F4C6E; /* jb: below (unsigned <) (xmm0.f[0] vs xmm4.f[0]) */

loc_003F4C69: ;
    xmm1 = xmm0; /* movaps */
    goto loc_003F4C75;

loc_003F4C6E: ;
    xmm1 = xmm4; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */

loc_003F4C75: ;
    xmm2 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003F4C84; /* jb: below (unsigned <) (xmm2.f[0] vs xmm4.f[0]) */

loc_003F4C7F: ;
    xmm0 = xmm2; /* movaps */
    goto loc_003F4C8B;

loc_003F4C84: ;
    xmm0 = xmm4; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */

loc_003F4C8B: ;
    xmm2 = XMM_SCALAR(MEMF(edx + ebp)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm4.f[0]; /* comiss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003F4C9E; /* jb: below (unsigned <) (xmm2.f[0] vs xmm4.f[0]) */

loc_003F4C99: ;
    xmm1 = xmm2; /* movaps */
    goto loc_003F4CA5;

loc_003F4C9E: ;
    xmm1 = xmm4; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */

loc_003F4CA5: ;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_003F4CC8; /* jnp: not parity */

loc_003F4CB2: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(4)) >> 32) & 1);
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_003F4C60; /* jle: less or equal (signed <=) */

loc_003F4CBB: ;
    goto loc_003F4CC8;

loc_003F4CBD: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_003F4CC8;

loc_003F4CC0: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(2)) >> 32) & 1);
    ecx = ecx + 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_003F4CC8;

loc_003F4CC5: ;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(3)) >> 32) & 1);
    ecx = ecx + 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003F4CC8: ;
    esi = MEM32(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003F4F74; /* je: equal / zero */

loc_003F4CD4: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 4)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebx + ebp)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x7ABE28); /* mulss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebx); /* subss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm7.f[0]; /* addss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    _fca = xmm4.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm2 = XMM_SCALAR(MEMF(ebx + ebp)); /* movss */
    edi = ecx * 4;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003F4D2F; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs xmm0.f[0]) */

loc_003F4D1A: ;
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x20); /* subss */
    edx = MEM32(esp + 0x40);
    xmm2.f[0] = xmm2.f[0] / xmm0.f[0]; /* divss */
    xmm0 = XMM_SCALAR(MEMF(edi + edx)); /* movss */
    goto loc_003F4D46;

loc_003F4D2F: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    eax = MEM32(esp + 0x40);
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(edi + eax)); /* movss */
    xmm2.f[0] = xmm2.f[0] / xmm1.f[0]; /* divss */

loc_003F4D46: ;
    xmm0.f[0] = xmm0.f[0] - MEMF(ebx); /* subss */
    edx = ecx + -1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm0 = xmm7; /* movaps */
    xmm1 = xmm7; /* movaps */
    xmm6 = xmm4; /* movaps */
    if (CMP_L(_fas, _fbs)) goto loc_003F4F44; /* jl: less (signed <) */

loc_003F4D62: ;
    esi = MEM32(esp + 0x48);
    ebp = MEM32(esp + 0x40);
    eax = esi + edx * 4 + 0x10;
    ecx = ebp + edx * 4 + 4;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esi) < (uint32_t)(ebp));
    esi = esi - ebp;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_003F4D80;

    /* nop */
    /* nop */

loc_003F4D80: ;
    ebp = MEM32(esp + 0x44);
    xmm3 = XMM_SCALAR(MEMF(ebp + edx * 4)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(ebp + edx * 4)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    _fca = xmm3.f[0]; _fcb = xmm4.f[0]; /* comiss */
    xmm5.f[0] = xmm5.f[0] * xmm1.f[0]; /* mulss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003F4DA2; /* jb: below (unsigned <) (xmm3.f[0] vs xmm4.f[0]) */

loc_003F4D9D: ;
    xmm1 = xmm3; /* movaps */
    goto loc_003F4DA9;

loc_003F4DA2: ;
    xmm1 = xmm4; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm3.f[0]; /* subss */

loc_003F4DA9: ;
    _fca = xmm2.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003F4DB3; /* jb: below (unsigned <) (xmm2.f[0] vs xmm4.f[0]) */

loc_003F4DAE: ;
    xmm0 = xmm2; /* movaps */
    goto loc_003F4DBA;

loc_003F4DB3: ;
    xmm0 = xmm4; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */

loc_003F4DBA: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003F4E04; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_003F4DBF: ;
    xmm2.f[0] = xmm2.f[0] / xmm3.f[0]; /* divss */
    xmm1 = xmm2; /* movaps */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm7.f[0]; /* addss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    ebp = MEM32(esp + 0x14);
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    MEMF(ecx + ebp) = xmm0.f[0]; /* movss */
    xmm0 = xmm7; /* movaps */
    xmm0.f[0] = xmm0.f[0] / xmm2.f[0]; /* divss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    goto loc_003F4E47;

loc_003F4E04: ;
    xmm3.f[0] = xmm3.f[0] / xmm2.f[0]; /* divss */
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm7.f[0]; /* addss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    ebp = MEM32(esp + 0x14);
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    MEMF(ecx + ebp) = xmm1.f[0]; /* movss */
    xmm1 = xmm7; /* movaps */
    xmm1.f[0] = xmm1.f[0] / xmm0.f[0]; /* divss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */

loc_003F4E47: ;
    xmm2 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(ecx + -4)); /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm6.f[0]; /* subss */
    xmm6 = xmm5; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm1.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * MEMF(0x7ABE28); /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm6.f[0]; /* addss */
    ebp = MEM32(esp + 0x10);
    xmm6 = xmm0; /* movaps */
    xmm6.f[0] = xmm6.f[0] * xmm3.f[0]; /* mulss */
    xmm7 = xmm6; /* movaps */
    xmm7.f[0] = xmm7.f[0] + xmm2.f[0]; /* addss */
    MEMF(ecx) = xmm7.f[0]; /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esi + ecx)); /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm5.f[0]; /* subss */
    xmm5 = XMM_SCALAR(MEMF(eax + -16)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    xmm7 = xmm3; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm1.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] + xmm7.f[0]; /* addss */
    MEMF(esi + ecx) = xmm5.f[0]; /* movss */
    xmm5 = XMM_SCALAR(MEMF(eax + -16)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] - xmm3.f[0]; /* subss */
    xmm3 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(eax + -16) = xmm5.f[0]; /* movss */
    xmm5 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    xmm7 = xmm3; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm1.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] + xmm7.f[0]; /* addss */
    MEMF(eax + 4) = xmm5.f[0]; /* movss */
    xmm5 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] - xmm3.f[0]; /* subss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    MEMF(eax) = xmm5.f[0]; /* movss */
    xmm5 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    xmm7 = xmm3; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm1.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] + xmm7.f[0]; /* addss */
    xmm7 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(eax + 0x14) = xmm5.f[0]; /* movss */
    xmm5 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] - xmm3.f[0]; /* subss */
    MEMF(eax + 0x10) = xmm5.f[0]; /* movss */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(4));
    ecx = ecx - 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(4));
    eax = eax - 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_003F4D80; /* jge: greater or equal (signed >=) */

loc_003F4F40: ;
    ebp = MEM32(esp + 0x14);

loc_003F4F44: ;
    xmm0 = XMM_SCALAR(MEMF(ebx)); /* movss */
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x44);
    esi = MEM32(esp + 0x10);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    _cf = (int)(_fa < _fb);
    xmm0.f[0] = xmm0.f[0] - xmm6.f[0]; /* subss */
    MEMF(ebx) = xmm0.f[0]; /* movss */
    MEMF(ebx + ebp) = xmm2.f[0]; /* movss */
    MEMF(edi + ecx) = xmm4.f[0]; /* movss */
    MEM32(esp + 0x18) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_003F4ACE; /* jl: less (signed <) */

loc_003F4F74: ;
    _fa = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x18), 0x20 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003F4F9F; /* je: equal / zero */

loc_003F4F7B: ;
    eax = MEM32(esp + 0x1C);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(4)) >> 32) & 1);
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x10) = esi;
    MEM32(esp + 0x1C) = eax;
    if (CMP_G(_fas, _fbs)) goto loc_003F4AC0; /* jg: greater (signed >) */

loc_003F4F95: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x2C)) >> 32) & 1);
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_003F4F9F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x2C)) >> 32) & 1);
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003F50F0
 * Original: 0x003F50F0 - 0x003F5150 (96 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F50F0(void)
{

loc_003F50F0: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = MEM32(esp + 8);
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(ecx + 8); /* subss */
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    edx = MEM32(ecx + 4);
    MEM32(eax + 8) = edx;
    edx = MEM32(ecx + 8);
    MEM32(eax + 0x10) = edx;
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(ecx); /* subss */
    MEMF(eax + 0x18) = xmm1.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(ecx + 4); /* subss */
    MEMF(eax + 0x20) = xmm1.f[0]; /* movss */
    ecx = MEM32(ecx);
    MEM32(eax + 0x24) = ecx;
    MEMF(eax + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003F5170
 * Original: 0x003F5170 - 0x003F51D0 (96 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F5170(void)
{

loc_003F5170: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = MEM32(esp + 8);
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(ecx + 8); /* subss */
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    edx = MEM32(ecx + 4);
    MEM32(eax + 8) = edx;
    edx = MEM32(ecx + 8);
    MEM32(eax + 0x10) = edx;
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(ecx); /* subss */
    MEMF(eax + 0x18) = xmm1.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(ecx + 4); /* subss */
    MEMF(eax + 0x20) = xmm1.f[0]; /* movss */
    ecx = MEM32(ecx);
    MEM32(eax + 0x24) = ecx;
    MEMF(eax + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003F51F0
 * Original: 0x003F51F0 - 0x003F5205 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003F51F0(void)
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

loc_003F51F0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003F51FFu); RECOMP_ABI_CALL(0x0059FF05u, sub_0059FF05); /* call 0x0059FF05 */

loc_003F51FF: ;
    fp_pop(); /* fstp st(0) */
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
 * sub_003F5210
 * Original: 0x003F5210 - 0x003F5223 (19 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F5210(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F5210: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003F521Fu); RECOMP_ABI_CALL(0x0059FDC7u, sub_0059FDC7); /* call 0x0059FDC7 */

loc_003F521F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003F5230
 * Original: 0x003F5230 - 0x003F53E0 (432 bytes, 96 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F5230(void)
{

loc_003F5230: ;
    eax = MEM32(esp + 8);
    xmm1 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x28); /* mulss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x18); /* mulss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(eax + 0x18); /* mulss */
    ecx = MEM32(esp + 4);
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x28); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 4); /* mulss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(eax + 0x14); /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(eax); /* mulss */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x10); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 8); /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm0.f[0] = xmm0.f[0] / xmm2.f[0]; /* divss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx) = xmm1.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(eax + 0x28); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 8); /* mulss */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    MEMF(ecx + 4) = xmm3.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(eax + 0x18); /* mulss */
    xmm3 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(eax + 0x14); /* mulss */
    xmm2.f[0] = xmm2.f[0] - xmm3.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 8) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(eax + 0x28); /* mulss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(eax + 0x18); /* mulss */
    xmm2.f[0] = xmm2.f[0] - xmm3.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    MEMF(ecx + 0x10) = xmm3.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(eax + 0x28); /* mulss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(eax + 8); /* mulss */
    xmm2.f[0] = xmm2.f[0] - xmm3.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 0x14) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(eax + 0x18); /* mulss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(eax + 8); /* mulss */
    xmm2.f[0] = xmm2.f[0] - xmm3.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    MEMF(ecx + 0x18) = xmm3.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(eax + 0x10); /* mulss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(eax + 0x14); /* mulss */
    xmm2.f[0] = xmm2.f[0] - xmm3.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 0x20) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(eax); /* mulss */
    xmm3.f[0] = xmm3.f[0] * MEMF(eax + 4); /* mulss */
    xmm2.f[0] = xmm2.f[0] - xmm3.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    MEMF(ecx + 0x24) = xmm3.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(eax); /* mulss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(eax + 4); /* mulss */
    xmm2.f[0] = xmm2.f[0] - xmm3.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 0x28) = xmm2.f[0]; /* movss */
    MEMF(ecx + 0x2C) = xmm1.f[0]; /* movss */
    MEMF(ecx + 0x1C) = xmm1.f[0]; /* movss */
    MEMF(ecx + 0xC) = xmm1.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003F5450
 * Original: 0x003F5450 - 0x003F55D9 (393 bytes, 95 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F5450(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003F5450: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 0x14);
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x14) = xmm3.f[0]; /* movss */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp)); /* movss */
    ecx = MEM32(esp + 0xC);
    MEMF(ecx) = xmm0.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x14) = xmm3.f[0]; /* movss */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEMF(ecx + 4) = xmm0.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x28)); /* movss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x14) = xmm3.f[0]; /* movss */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 8);
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(ecx); /* divss */
    MEMF(edx) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(ecx); /* divss */
    MEMF(edx + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(ecx); /* divss */
    MEMF(edx + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(ecx + 4); /* divss */
    MEMF(edx + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(ecx + 4); /* divss */
    MEMF(edx + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(ecx + 4); /* divss */
    MEMF(edx + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(ecx + 8); /* divss */
    MEMF(edx + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(ecx + 8); /* divss */
    MEMF(edx + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x28)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(ecx + 8); /* divss */
    ecx = MEM32(esp + 0x10);
    MEMF(edx + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(edx + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(edx + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(edx + 0xC) = xmm0.f[0]; /* movss */
    edx = MEM32(eax + 0x30);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 0x34);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 0x38);
    MEM32(ecx + 8) = eax;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003F5640
 * Original: 0x003F5640 - 0x003F57A8 (360 bytes, 86 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F5640(void)
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

loc_003F5640: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x14);
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    MEMF(esp + 0x14) = xmm3.f[0]; /* movss */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x14) = xmm3.f[0]; /* movss */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x28)); /* movss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x14) = xmm3.f[0]; /* movss */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x10);
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp); /* divss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(eax); /* mulss */
    MEMF(ecx) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 4) = xmm2.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 8); /* mulss */
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp + 4); /* divss */
    xmm1.f[0] = xmm1.f[0] / MEMF(esp + 8); /* divss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(eax + 0x10); /* mulss */
    MEMF(ecx + 0x10) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 0x14) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 0x18) = xmm2.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(ecx + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(ecx + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x28)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(ecx + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(ecx + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0xC) = xmm0.f[0]; /* movss */
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
 * sub_003F5810
 * Original: 0x003F5810 - 0x003F58D3 (195 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F5810(void)
{

loc_003F5810: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    edx = MEM32(esp + 0xC);
    xmm0.f[0] = xmm0.f[0] * MEMF(edx); /* mulss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(edx); /* mulss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(edx); /* mulss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x10)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edx + 4); /* mulss */
    MEMF(eax + 0x10) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x14)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edx + 4); /* mulss */
    MEMF(eax + 0x14) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x18)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edx + 4); /* mulss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x20)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edx + 8); /* mulss */
    MEMF(eax + 0x20) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x24)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edx + 8); /* mulss */
    MEMF(eax + 0x24) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x28)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edx + 8); /* mulss */
    ecx = MEM32(esp + 0x10);
    MEMF(eax + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(eax + 0x28) = xmm1.f[0]; /* movss */
    edx = MEM32(ecx);
    MEM32(eax + 0x30) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 0x34) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 0x38) = ecx;
    MEMF(eax + 0x3C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003F5910
 * Original: 0x003F5910 - 0x003F5981 (113 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F5910(void)
{

loc_003F5910: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    edx = MEM32(ecx);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx + 8);
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEM32(eax + 8) = edx;
    edx = MEM32(ecx + 0x10);
    MEM32(eax + 0x10) = edx;
    edx = MEM32(ecx + 0x14);
    MEM32(eax + 0x14) = edx;
    edx = MEM32(ecx + 0x18);
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    MEM32(eax + 0x18) = edx;
    edx = MEM32(ecx + 0x20);
    MEM32(eax + 0x20) = edx;
    edx = MEM32(ecx + 0x24);
    MEM32(eax + 0x24) = edx;
    ecx = MEM32(ecx + 0x28);
    MEM32(eax + 0x28) = ecx;
    ecx = MEM32(esp + 0xC);
    MEMF(eax + 0x2C) = xmm0.f[0]; /* movss */
    edx = MEM32(ecx);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEM32(eax + 0x30) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 0x34) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 0x38) = ecx;
    MEMF(eax + 0x3C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003F59A0
 * Original: 0x003F59A0 - 0x003F5A1B (123 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F59A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F59A0: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x2C);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x28)); /* movss */
    eax = MEM32(esp + 0x28);
    PUSH32(esp, eax);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x003F5A17u); RECOMP_ABI_CALL(0x005A0C1Bu, sub_005A0C1B); /* call 0x005A0C1B */

loc_003F5A17: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003F5A40
 * Original: 0x003F5A40 - 0x003F5A53 (19 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F5A40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F5A40: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003F5A4Fu); RECOMP_ABI_CALL(0x0059FAC6u, sub_0059FAC6); /* call 0x0059FAC6 */

loc_003F5A4F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003F5A60
 * Original: 0x003F5A60 - 0x003F5A9B (59 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F5A60(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003F5A60: ;
    eax = MEM32(esp + 4);
    fp_push(MEMF(eax + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x28)); /* fmul dword ptr [eax + 0x28] */
    fp_push(MEMF(eax + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x18)); /* fmul dword ptr [eax + 0x18] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    fp_push(MEMF(eax + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x28)); /* fmul dword ptr [eax + 0x28] */
    fp_push(MEMF(eax + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x18)); /* fmul dword ptr [eax + 0x18] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(eax + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x10)); /* fmul dword ptr [eax + 0x10] */
    fp_push(MEMF(eax + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x14)); /* fmul dword ptr [eax + 0x14] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003F5AB0
 * Original: 0x003F5AB0 - 0x003F5DCD (797 bytes, 186 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003F5AB0(void)
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

loc_003F5AB0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = esi;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    MEM32(esp + 0x1C) = ecx;
    ecx = MEM32(eax + 8);
    MEM32(esp + 0x20) = edx;
    edx = MEM32(eax + 0xC);
    PUSH32(esp, edi);
    MEM32(esp + 0x28) = ecx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    edi = esi + 0x10;
    MEM32(esp + 0x2C) = edx;
    eax = edi;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    MEM32(esp + 0x30) = ecx;
    ecx = MEM32(eax + 8);
    MEM32(esp + 0x34) = edx;
    edx = MEM32(eax + 0xC);
    ebx = esi + 0x20;
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    MEM32(esp + 0x38) = ecx;
    eax = ebx;
    ecx = MEM32(eax);
    MEM32(esp + 0x3C) = edx;
    edx = MEM32(eax + 4);
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    MEM32(esp + 0x40) = ecx;
    ecx = MEM32(eax + 8);
    MEM32(esp + 0x44) = edx;
    edx = MEM32(eax + 0xC);
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    MEM32(esp + 0x48) = ecx;
    MEM32(esp + 0x4C) = edx;
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    _fca = xmm1.f[0]; _fcb = MEMF(0x7AA840); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003F5D45; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs MEMF(0x7AA840)) */

loc_003F5B6E: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    xmm1 = XMM_MEM(esp + 0x20); /* movaps */
    eax = esp + 0x40;
    PUSH32(esp, eax);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */
    xmm1 = XMM_MUL(xmm1, xmm0); /* mulps */
    XMM_STORE(esp + 0x58, xmm1); /* movaps */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    MEMF(esp + 0x68) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x5C)); /* movss */
    MEMF(esp + 0x6C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x60)); /* movss */
    MEMF(esp + 0x70) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x64)); /* movss */
    edx = esp + 0x28;
    MEMF(esp + 0x74) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(esp + 0x68); /* movaps */
    PUSH32(esp, edx);
    XMM_STORE(esp + 0x2C, xmm0); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003F5BD9u); RECOMP_ABI_CALL(0x005A0935u, sub_005A0935); /* call 0x005A0935 */

loc_003F5BD9: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    _fca = xmm1.f[0]; _fcb = MEMF(0x7AA840); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003F5D45; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs MEMF(0x7AA840)) */

loc_003F5C2E: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    xmm1 = XMM_MEM(esp + 0x40); /* movaps */
    eax = esp + 0x30;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */
    xmm1 = XMM_MUL(xmm1, xmm0); /* mulps */
    XMM_STORE(esp + 0x68, xmm1); /* movaps */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x68)); /* movss */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x6C)); /* movss */
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x70)); /* movss */
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x74)); /* movss */
    edx = esp + 0x48;
    MEMF(esp + 0x64) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(esp + 0x58); /* movaps */
    PUSH32(esp, edx);
    XMM_STORE(esp + 0x4C, xmm0); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003F5C99u); RECOMP_ABI_CALL(0x005A0935u, sub_005A0935); /* call 0x005A0935 */

loc_003F5C99: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    _fca = xmm1.f[0]; _fcb = MEMF(0x7AA840); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003F5D45; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs MEMF(0x7AA840)) */

loc_003F5CEA: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    xmm1 = XMM_MEM(esp + 0x30); /* movaps */
    xmm0.f[0] = xmm0.f[0]; /* movss */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */
    xmm1 = XMM_MUL(xmm1, xmm0); /* mulps */
    XMM_STORE(esp + 0x60, xmm1); /* movaps */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x60)); /* movss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x64)); /* movss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x68)); /* movss */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x6C)); /* movss */
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(esp + 0x50); /* movaps */
    XMM_STORE(esp + 0x30, xmm0); /* movaps */

loc_003F5D45: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    MEMF(esi) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    MEMF(esi + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    MEMF(edi) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    MEMF(esi + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    MEMF(esi + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    MEMF(esi + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    MEMF(ebx) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    MEMF(esi + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    MEMF(esi + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */
    POP32(esp, edi);
    MEMF(esi + 0x2C) = xmm0.f[0]; /* movss */
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
 * sub_003F5EA0
 * Original: 0x003F5EA0 - 0x003F5ECB (43 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F5EA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F5EA0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 4) = eax;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, eax);
    MEM32(esi) = 0x836FD0;
    PUSH32(esp, 0x003F5EBFu); RECOMP_ABI_CALL(0x0001C626u, sub_0001C626); /* call 0x0001C626 */

loc_003F5EBF: ;
    MEM32(esi + 8) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003F5EE0
 * Original: 0x003F5EE0 - 0x003F5F2B (75 bytes, 29 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F5EE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F5EE0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    MEM32(esi) = 0x836FD0;
    eax = MEM32(edi + 4);
    MEM32(esi + 4) = eax;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, eax);
    PUSH32(esp, 0x003F5EFDu); RECOMP_ABI_CALL(0x0001C626u, sub_0001C626); /* call 0x0001C626 */

loc_003F5EFD: ;
    ecx = MEM32(esi + 4);
    MEM32(esi + 8) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003F5F24; /* jle: less or equal (signed <=) */

loc_003F5F0C: ;
    /* nop */

loc_003F5F10: ;
    ecx = MEM32(edi + 8);
    ecx = MEM32(ecx + eax * 4);
    edx = MEM32(esi + 8);
    MEM32(edx + eax * 4) = ecx;
    ecx = MEM32(esi + 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003F5F10; /* jl: less (signed <) */

loc_003F5F24: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003F5F40
 * Original: 0x003F5F40 - 0x003F5F51 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F5F40(void)
{

loc_003F5F40: ;
    eax = MEM32(ecx + 8);
    PUSH32(esp, eax);
    MEM32(ecx) = 0x836FD0;
    PUSH32(esp, 0x003F5F4Fu); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_003F5F4F: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003F5F60
 * Original: 0x003F5F60 - 0x003F5F7A (26 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F5F60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F5F60: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003F5F77; /* je: equal / zero */

loc_003F5F6A: ;
    ecx = MEM32(ecx + 4);
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = 0;

loc_003F5F77: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003F5F80
 * Original: 0x003F5F80 - 0x003F5FC4 (68 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F5F80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F5F80: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003F5FC3; /* jle: less or equal (signed <=) */

loc_003F5F8D: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    goto loc_003F5FA0;

    /* nop */

loc_003F5FA0: ;
    edi = MEM32(edx + 8);
    xmm0 = XMM_SCALAR(MEMF(edi + eax * 4)); /* movss */
    ebx = MEM32(esi + 8);
    edi = MEM32(ecx + 8);
    xmm0.f[0] = xmm0.f[0] - MEMF(ebx + eax * 4); /* subss */
    MEMF(edi + eax * 4) = xmm0.f[0]; /* movss */
    edi = MEM32(ecx + 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003F5FA0; /* jl: less (signed <) */

loc_003F5FC0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_003F5FC3: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003F5FE0
 * Original: 0x003F5FE0 - 0x003F6024 (68 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F5FE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F5FE0: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003F6023; /* jle: less or equal (signed <=) */

loc_003F5FED: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    goto loc_003F6000;

    /* nop */

loc_003F6000: ;
    edi = MEM32(edx + 8);
    xmm0 = XMM_SCALAR(MEMF(edi + eax * 4)); /* movss */
    ebx = MEM32(esi + 8);
    edi = MEM32(ecx + 8);
    xmm0.f[0] = xmm0.f[0] + MEMF(ebx + eax * 4); /* addss */
    MEMF(edi + eax * 4) = xmm0.f[0]; /* movss */
    edi = MEM32(ecx + 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003F6000; /* jl: less (signed <) */

loc_003F6020: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_003F6023: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003F6040
 * Original: 0x003F6040 - 0x003F612A (234 bytes, 86 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F6040(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F6040: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(esi + 8) = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, eax);
    MEM32(esi) = 0x836FD4;
    MEM32(esi + 4) = ecx;
    PUSH32(esp, 0x003F6063u); RECOMP_ABI_CALL(0x0001C626u, sub_0001C626); /* call 0x0001C626 */

loc_003F6063: ;
    MEM32(esi + 0xC) = eax;
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_003F60C7; /* je: equal / zero */

loc_003F6070: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003F60F4; /* jne: not equal / not zero */

loc_003F6077: ;
    eax = MEM32(esi + 4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003F60F4; /* jle: less or equal (signed <=) */

loc_003F6082: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    PUSH32(esp, edi);
    edi = edi;

loc_003F6090: ;
    edi = MEM32(esi + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003F60BC; /* jle: less or equal (signed <=) */

loc_003F6099: ;
    /* nop */

loc_003F60A0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    edi = MEM32(esi + 0xC);
    if (CMP_EQ(_fa, _fb)) goto loc_003F60AE; /* je: equal / zero */

loc_003F60A7: ;
    MEMF(edi + ecx * 4) = xmm0.f[0]; /* movss */
    goto loc_003F60B3;

loc_003F60AE: ;
    MEMF(edi + ecx * 4) = xmm1.f[0]; /* movss */

loc_003F60B3: ;
    edi = MEM32(esi + 8);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003F60A0; /* jl: less (signed <) */

loc_003F60BC: ;
    eax = MEM32(esi + 4);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003F6090; /* jl: less (signed <) */

loc_003F60C4: ;
    POP32(esp, edi);
    goto loc_003F60F4;

loc_003F60C7: ;
    ecx = MEM32(esi + 8);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(esi + 4));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003F60F4; /* jle: less or equal (signed <=) */

loc_003F60D4: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    goto loc_003F60E0;

    /* nop */

loc_003F60E0: ;
    edx = MEM32(esi + 0xC);
    MEMF(edx + eax * 4) = xmm0.f[0]; /* movss */
    ecx = MEM32(esi + 8);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(esi + 4));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003F60E0; /* jl: less (signed <) */

loc_003F60F4: ;
    edx = MEM32(esi + 4);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, edx);
    PUSH32(esp, 0x003F6100u); RECOMP_ABI_CALL(0x0001C626u, sub_0001C626); /* call 0x0001C626 */

loc_003F6100: ;
    ecx = MEM32(esi + 4);
    MEM32(esi + 0x10) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003F6124; /* jle: less or equal (signed <=) */

loc_003F610F: ;
    /* nop */

loc_003F6110: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(esi + 0x10);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    MEM32(edx + eax * 4) = ecx;
    ecx = MEM32(esi + 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003F6110; /* jl: less (signed <) */

loc_003F6124: ;
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003F6170
 * Original: 0x003F6170 - 0x003F61FE (142 bytes, 53 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F6170(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F6170: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    MEM32(esi) = 0x836FD4;
    eax = MEM32(edi + 4);
    MEM32(esi + 4) = eax;
    eax = MEM32(edi + 8);
    ecx = MEM32(esi + 4);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, ecx);
    MEM32(esi + 8) = eax;
    PUSH32(esp, 0x003F6199u); RECOMP_ABI_CALL(0x0001C626u, sub_0001C626); /* call 0x0001C626 */

loc_003F6199: ;
    edx = MEM32(esi + 8);
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(esi + 4));
    MEM32(esi + 0xC) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003F61C8; /* jle: less or equal (signed <=) */

loc_003F61AC: ;
    /* nop */

loc_003F61B0: ;
    ecx = MEM32(edi + 0xC);
    edx = MEM32(esi + 0xC);
    ecx = MEM32(ecx + eax * 4);
    MEM32(edx + eax * 4) = ecx;
    edx = MEM32(esi + 8);
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(esi + 4));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003F61B0; /* jl: less (signed <) */

loc_003F61C8: ;
    eax = MEM32(esi + 4);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, eax);
    PUSH32(esp, 0x003F61D4u); RECOMP_ABI_CALL(0x0001C626u, sub_0001C626); /* call 0x0001C626 */

loc_003F61D4: ;
    ecx = MEM32(esi + 4);
    MEM32(esi + 0x10) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003F61F7; /* jle: less or equal (signed <=) */

loc_003F61E3: ;
    ecx = MEM32(edi + 0x10);
    ecx = MEM32(ecx + eax * 4);
    edx = MEM32(esi + 0x10);
    MEM32(edx + eax * 4) = ecx;
    ecx = MEM32(esi + 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003F61E3; /* jl: less (signed <) */

loc_003F61F7: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003F6230
 * Original: 0x003F6230 - 0x003F6250 (32 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F6230(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F6230: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    MEM32(esi) = 0x836FD4;
    PUSH32(esp, 0x003F6242u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_003F6242: ;
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003F624Bu); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_003F624B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003F6260
 * Original: 0x003F6260 - 0x003F629D (61 bytes, 26 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F6260(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F6260: ;
    edx = MEM32(esp + 4);
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003F629A; /* je: equal / zero */

loc_003F626A: ;
    ecx = MEM32(edx + 4);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(edx + 8);
    PUSH32(esp, esi);
    esi = MEM32(eax + 4);
    MEM32(eax + 8) = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    MEM32(eax + 0xC) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_003F6299; /* jle: less or equal (signed <=) */

loc_003F6283: ;
    PUSH32(esp, edi);

loc_003F6284: ;
    esi = MEM32(edx + 0x10);
    esi = MEM32(esi + ecx * 4);
    edi = MEM32(eax + 0x10);
    MEM32(edi + ecx * 4) = esi;
    esi = MEM32(eax + 4);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003F6284; /* jl: less (signed <) */

loc_003F6298: ;
    POP32(esp, edi);

loc_003F6299: ;
    POP32(esp, esi);

loc_003F629A: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003F62B0
 * Original: 0x003F62B0 - 0x003F6306 (86 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F62B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003F62B0: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx + 4);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003F6305; /* jle: less or equal (signed <=) */

loc_003F62BD: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);

loc_003F62C8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003F62F9; /* jle: less or equal (signed <=) */

loc_003F62CE: ;
    edi = edi;

loc_003F62D0: ;
    esi = MEM32(ecx + 0x10);
    esi = MEM32(esi + edx * 4);
    ebp = MEM32(edi + 0x10);
    ebp = MEM32(ebp + eax * 4);
    ebx = MEM32(ecx + 0xC);
    edi = MEM32(edi + 0xC);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = MEM32(ebx + esi * 4);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + edx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + ebp * 4) = esi;
    esi = MEM32(ecx + 8);
    edi = MEM32(esp + 0x14);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003F62D0; /* jl: less (signed <) */

loc_003F62F9: ;
    eax = MEM32(ecx + 4);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003F62C8; /* jl: less (signed <) */

loc_003F6301: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_003F6305: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003F6320
 * Original: 0x003F6320 - 0x003F648D (365 bytes, 117 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F6320(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003F6320: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(esp + 0x10);
    eax = MEM32(edx + 4);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 4) = ebp;
    if (CMP_LE(_fas, _fbs)) goto loc_003F6488; /* jle: less or equal (signed <=) */

loc_003F6339: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x20);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);

loc_003F6347: ;
    eax = MEM32(esi + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003F6475; /* jle: less or equal (signed <=) */

loc_003F6354: ;
    eax = MEM32(edi + 0x10);
    eax = MEM32(eax + ebp * 4);
    ebx = MEM32(edi + 0xC);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(ebx + eax * 4) = xmm1.f[0]; /* movss */
    ebx = MEM32(edx + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    xmm0 = xmm1; /* movaps */
    if (CMP_L(_fas, _fbs)) goto loc_003F640A; /* jl: less (signed <) */

loc_003F6375: ;
    eax = MEM32(esi + 0x10);
    edi = MEM32(esi + 0xC);
    esi = MEM32(edx + 0x10);
    esi = MEM32(esi + ebp * 4);
    edx = MEM32(edx + 0xC);
    edx = edx + esi * 4 + 8;
    esi = ebx + -4;
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        esi = _sv >> _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp = esi * 4;
    MEM32(esp + 0x14) = ebp;
    /* nop */

loc_003F63A0: ;
    ebp = MEM32(eax + -8);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm2 = XMM_SCALAR(MEMF(edi + ebp * 4)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(edx + -8); /* mulss */
    ebp = MEM32(eax + -4);
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0 = XMM_SCALAR(MEMF(edi + ebp * 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(edx + -4); /* mulss */
    ebp = MEM32(eax);
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0 = XMM_SCALAR(MEMF(edi + ebp * 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(edx); /* mulss */
    ebp = MEM32(eax + 4);
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0 = XMM_SCALAR(MEMF(edi + ebp * 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(edx + 4); /* mulss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm0 = xmm2; /* movaps */
    if ((_fa != 0)) goto loc_003F63A0; /* jne: not equal / not zero */

loc_003F63F6: ;
    eax = MEM32(esp + 0x14);
    ebp = MEM32(esp + 0x10);
    edi = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x20);
    esi = MEM32(esp + 0x24);

loc_003F640A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003F6459; /* jge: greater or equal (signed >=) */

loc_003F640E: ;
    edi = MEM32(esi + 0xC);
    esi = MEM32(esi + 0x10);
    MEM32(esp + 0x14) = edi;
    edi = esi + eax * 4;
    esi = MEM32(edx + 0x10);
    esi = MEM32(esi + ebp * 4);
    ebp = MEM32(edx + 0xC);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x14);
    esi = ebp + esi * 4;

loc_003F6430: ;
    ebp = MEM32(edi);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm2 = XMM_SCALAR(MEMF(eax + ebp * 4)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(esi); /* mulss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm0 = xmm2; /* movaps */
    if ((_fa != 0)) goto loc_003F6430; /* jne: not equal / not zero */

loc_003F644D: ;
    esi = MEM32(esp + 0x24);
    edi = MEM32(esp + 0x1C);
    ebp = MEM32(esp + 0x10);

loc_003F6459: ;
    eax = MEM32(edi + 0x10);
    eax = MEM32(eax + ebp * 4);
    ebx = MEM32(edi + 0xC);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(ebx + eax * 4) = xmm0.f[0]; /* movss */
    eax = MEM32(esi + 8);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003F6354; /* jl: less (signed <) */

loc_003F6475: ;
    eax = MEM32(edx + 4);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    MEM32(esp + 0x10) = ebp;
    if (CMP_L(_fas, _fbs)) goto loc_003F6347; /* jl: less (signed <) */

loc_003F6485: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_003F6488: ;
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003F64F0
 * Original: 0x003F64F0 - 0x003F65D5 (229 bytes, 75 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F64F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003F64F0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    eax = MEM32(ebx + 4);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003F65D2; /* jle: less or equal (signed <=) */

loc_003F6503: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, esi);
    PUSH32(esp, edi);

loc_003F6508: ;
    esi = MEM32(ebx + 8);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    xmm0 = xmm1; /* movaps */
    if (CMP_L(_fas, _fbs)) goto loc_003F6582; /* jl: less (signed <) */

loc_003F6515: ;
    ecx = MEM32(ebx + 0x10);
    edx = MEM32(ecx + ebp * 4);
    ecx = MEM32(ebx + 0xC);
    eax = MEM32(esp + 0x1C);
    eax = MEM32(eax + 8);
    edx = ecx + edx * 4 + 8;
    ecx = esi + -4;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = ecx * 4;
    /* nop */

loc_003F6540: ;
    xmm2 = XMM_SCALAR(MEMF(edx + -8)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(eax + -8); /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(edx + -4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + -4); /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(edx)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax); /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 4); /* mulss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm0 = xmm2; /* movaps */
    if ((_fa != 0)) goto loc_003F6540; /* jne: not equal / not zero */

loc_003F6582: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003F65B8; /* jge: greater or equal (signed >=) */

loc_003F6586: ;
    edx = MEM32(esp + 0x1C);
    eax = MEM32(edx + 8);
    edx = MEM32(ebx + 0x10);
    ecx = eax + edi * 4;
    eax = MEM32(edx + ebp * 4);
    edx = MEM32(ebx + 0xC);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edx + eax * 4;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_003F65A0: ;
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(ecx); /* mulss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm0 = xmm2; /* movaps */
    if ((_fa != 0)) goto loc_003F65A0; /* jne: not equal / not zero */

loc_003F65B8: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(eax + 8);
    MEMF(ecx + ebp * 4) = xmm0.f[0]; /* movss */
    eax = MEM32(ebx + 4);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003F6508; /* jl: less (signed <) */

loc_003F65D0: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_003F65D2: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003F6610
 * Original: 0x003F6610 - 0x003F6726 (278 bytes, 91 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F6610(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003F6610: ;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(ecx + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003F6721; /* jle: less or equal (signed <=) */

loc_003F6625: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    goto loc_003F6630;

    /* nop */

loc_003F6630: ;
    ebx = MEM32(ecx + 4);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    xmm0 = xmm1; /* movaps */
    if (CMP_L(_fas, _fbs)) goto loc_003F66D2; /* jl: less (signed <) */

loc_003F6641: ;
    ebp = MEM32(ecx + 0x10);
    esi = MEM32(ecx + 0xC);
    eax = MEM32(esp + 0x20);
    ecx = MEM32(eax + 8);
    edx = ebp + 0xC;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ecx + 4;
    ecx = ebx + -4;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = ebp;
    ebp = ecx * 4;
    MEM32(esp + 0x14) = ebp;
    /* nop */

loc_003F6670: ;
    ebp = MEM32(edx + -12);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + edi;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm2 = XMM_SCALAR(MEMF(esi + ebp * 4)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(eax + -4); /* mulss */
    ebp = MEM32(esp + 0x10);
    ebp = MEM32(eax + ebp);
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + edi;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0 = XMM_SCALAR(MEMF(esi + ebp * 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax); /* mulss */
    ebp = MEM32(edx + -4);
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + edi;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0 = XMM_SCALAR(MEMF(esi + ebp * 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 4); /* mulss */
    ebp = MEM32(edx);
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + edi;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0 = XMM_SCALAR(MEMF(esi + ebp * 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 8); /* mulss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm0 = xmm2; /* movaps */
    if ((_fa != 0)) goto loc_003F6670; /* jne: not equal / not zero */

loc_003F66CA: ;
    ecx = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x14);

loc_003F66D2: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003F6706; /* jge: greater or equal (signed >=) */

loc_003F66D6: ;
    eax = MEM32(esp + 0x20);
    ebp = MEM32(eax + 8);
    esi = MEM32(ecx + 0x10);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - ebp;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ebp + edx * 4;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_003F66E8: ;
    ebp = MEM32(eax + esi);
    edx = MEM32(ecx + 0xC);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + edi;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm2 = XMM_SCALAR(MEMF(edx + ebp * 4)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(eax); /* mulss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm0 = xmm2; /* movaps */
    if ((_fa != 0)) goto loc_003F66E8; /* jne: not equal / not zero */

loc_003F6706: ;
    edx = MEM32(esp + 0x1C);
    eax = MEM32(edx + 8);
    MEMF(eax + edi * 4) = xmm0.f[0]; /* movss */
    eax = MEM32(ecx + 8);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003F6630; /* jl: less (signed <) */

loc_003F671E: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_003F6721: ;
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003F6770
 * Original: 0x003F6770 - 0x003F67AE (62 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F6770(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F6770: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003F67AD; /* jle: less or equal (signed <=) */

loc_003F677D: ;
    edx = MEM32(esp + 8);
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    PUSH32(esp, esi);
    goto loc_003F6790;

    /* nop */

loc_003F6790: ;
    esi = MEM32(edx + 8);
    xmm1 = XMM_SCALAR(MEMF(esi + eax * 4)); /* movss */
    esi = MEM32(ecx + 8);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esi + eax * 4) = xmm1.f[0]; /* movss */
    esi = MEM32(ecx + 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003F6790; /* jl: less (signed <) */

loc_003F67AC: ;
    POP32(esp, esi);

loc_003F67AD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003F67C0
 * Original: 0x003F67C0 - 0x003F67F2 (50 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F67C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F67C0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 4);
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(eax + 8));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003F67F1; /* jle: less or equal (signed <=) */

loc_003F67D1: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_003F67D4: ;
    edx = MEM32(eax + 0xC);
    edx = edx + ecx * 4;
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(edx); /* subss */
    MEMF(edx) = xmm1.f[0]; /* movss */
    edx = MEM32(eax + 4);
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(eax + 8));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003F67D4; /* jl: less (signed <) */

loc_003F67F1: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003F6800
 * Original: 0x003F6800 - 0x003F683B (59 bytes, 21 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F6800(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F6800: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x10);
    eax = MEM32(eax + edx * 4);
    edx = MEM32(ecx + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 8);
    eax = edx + eax * 4;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003F6837; /* jle: less or equal (signed <=) */

loc_003F681A: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */

loc_003F6820: ;
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax) = xmm1.f[0]; /* movss */
    esi = MEM32(ecx + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003F6820; /* jl: less (signed <) */

loc_003F6837: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003F6850
 * Original: 0x003F6850 - 0x003F68A3 (83 bytes, 30 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F6850(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F6850: ;
    edx = MEM32(ecx + 0x10);
    eax = MEM32(esp + 4);
    eax = MEM32(edx + eax * 4);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    edx = MEM32(edx + edi * 4);
    edi = MEM32(ecx + 8);
    eax = esi + eax * 4;
    edx = esi + edx * 4;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003F689E; /* jle: less or equal (signed <=) */

loc_003F6875: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    goto loc_003F6880;

    /* nop */

loc_003F6880: ;
    xmm1 = XMM_SCALAR(MEMF(edx)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax); /* addss */
    MEMF(eax) = xmm1.f[0]; /* movss */
    edi = MEM32(ecx + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003F6880; /* jl: less (signed <) */

loc_003F689E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003F68C0
 * Original: 0x003F68C0 - 0x003F68C1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F68C0(void)
{

loc_003F68C0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003F68D0
 * Original: 0x003F68D0 - 0x003F6B8B (699 bytes, 202 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F68D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003F68D0: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x2C));
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esp + 0x30);
    edx = MEM32(esp + 0x34);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(ecx + 8);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x38) = ebp;
    MEM32(esp + 0x40) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_003F6943; /* jl: less (signed <) */

loc_003F68F1: ;
    edi = ebp + -3;
    esi = 2;
    /* nop */

loc_003F6900: ;
    ebx = MEM32(edx + 8);
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(ebx + eax * 4) = xmm0.f[0]; /* movss */
    ebx = esi + -1;
    xmm0.f[0] = (float)(int32_t)ebx; /* cvtsi2ss */
    ebx = MEM32(edx + 8);
    MEMF(ebx + eax * 4 + 4) = xmm0.f[0]; /* movss */
    ebx = MEM32(edx + 8);
    xmm0.f[0] = (float)(int32_t)esi; /* cvtsi2ss */
    MEMF(ebx + eax * 4 + 8) = xmm0.f[0]; /* movss */
    ebx = esi + 1;
    xmm0.f[0] = (float)(int32_t)ebx; /* cvtsi2ss */
    ebx = MEM32(edx + 8);
    MEMF(ebx + eax * 4 + 0xC) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(4)) >> 32) & 1);
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(4)) >> 32) & 1);
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_003F6900; /* jl: less (signed <) */

loc_003F6943: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_003F6961; /* jge: greater or equal (signed >=) */

loc_003F6947: ;
    goto loc_003F6950;

    /* nop */

loc_003F6950: ;
    esi = MEM32(edx + 8);
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esi + eax * 4) = xmm0.f[0]; /* movss */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_003F6950; /* jl: less (signed <) */

loc_003F6961: ;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_003F6B74; /* jle: less or equal (signed <=) */

loc_003F696B: ;
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    edi = edi;

loc_003F6970: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    esi = edi;
    MEM32(esp + 0x10) = edi;
    xmm2 = xmm3; /* movaps */
    if (CMP_GE(_fas, _fbs)) goto loc_003F69EC; /* jge: greater or equal (signed >=) */

loc_003F697D: ;
    /* nop */

loc_003F6980: ;
    eax = MEM32(edx + 8);
    xmm0 = XMM_SCALAR(MEMF(eax + esi * 4)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0x14); /* cvttss2si */
    ebx = MEM32(ecx + 0x10);
    eax = MEM32(ebx + eax * 4);
    ebx = MEM32(ecx + 0xC);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(edi)) >> 32) & 1);
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm1 = XMM_SCALAR(MEMF(ebx + eax * 4)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003F69AE; /* jb: below (unsigned <) (xmm1.f[0] vs xmm3.f[0]) */

loc_003F69A9: ;
    xmm0 = xmm1; /* movaps */
    goto loc_003F69B5;

loc_003F69AE: ;
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */

loc_003F69B5: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003F69C5; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_003F69BA: ;
    ebx = esi;
    xmm2 = xmm0; /* movaps */
    MEM32(esp + 0x10) = ebx;
    goto loc_003F69C9;

loc_003F69C5: ;
    ebx = MEM32(esp + 0x10);

loc_003F69C9: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_003F6980; /* jl: less (signed <) */

loc_003F69CE: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003F69EC; /* je: equal / zero */

loc_003F69D2: ;
    MEM32(esp + 0x40) = MEM32(esp + 0x40) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(edx + 8);
    esi = MEM32(eax + ebx * 4);
    xmm0 = XMM_SCALAR(MEMF(eax + edi * 4)); /* movss */
    MEM32(eax + edi * 4) = esi;
    eax = MEM32(edx + 8);
    MEMF(eax + ebx * 4) = xmm0.f[0]; /* movss */

loc_003F69EC: ;
    eax = MEM32(edx + 8);
    xmm0 = XMM_SCALAR(MEMF(eax + edi * 4)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0x18); /* cvttss2si */
    esi = MEM32(ecx + 0x10);
    eax = MEM32(esi + eax * 4);
    esi = MEM32(ecx + 0xC);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(edi)) >> 32) & 1);
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0 = XMM_SCALAR(MEMF(esi + eax * 4)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_003F6B80; /* jnp: not parity */

loc_003F6A1D: ;
    esi = edi + 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x10) = esi;
    ebx = esi;
    if (CMP_GE(_fas, _fbs)) goto loc_003F6B6A; /* jge: greater or equal (signed >=) */

loc_003F6A2E: ;
    edi = edi;

loc_003F6A30: ;
    eax = MEM32(edx + 8);
    xmm0 = XMM_SCALAR(MEMF(eax + ebx * 4)); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0x1C); /* cvttss2si */
    ebp = MEM32(ecx + 0x10);
    eax = MEM32(ebp + eax * 4);
    ebp = MEM32(ecx + 0xC);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(edi)) >> 32) & 1);
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0 = XMM_SCALAR(MEMF(ebp + eax * 4)); /* movss */
    eax = MEM32(edx + 8);
    xmm1 = XMM_SCALAR(MEMF(eax + edi * 4)); /* movss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0x20); /* cvttss2si */
    ebp = MEM32(ecx + 0x10);
    eax = MEM32(ebp + eax * 4);
    ebp = MEM32(ecx + 0xC);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(edi)) >> 32) & 1);
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm1 = XMM_SCALAR(MEMF(ebp + eax * 4)); /* movss */
    eax = MEM32(edx + 8);
    xmm2 = XMM_SCALAR(MEMF(eax + ebx * 4)); /* movss */
    MEMF(esp + 0x24) = xmm2.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0x24); /* cvttss2si */
    ebp = MEM32(ecx + 0x10);
    eax = MEM32(ebp + eax * 4);
    ebp = MEM32(ecx + 0xC);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(edi)) >> 32) & 1);
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    MEMF(ebp + eax * 4) = xmm0.f[0]; /* movss */
    goto loc_003F6AB0;

    /* nop */
    /* nop */

loc_003F6AB0: ;
    eax = MEM32(edx + 8);
    xmm0 = XMM_SCALAR(MEMF(eax + ebx * 4)); /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0x28); /* cvttss2si */
    ebp = MEM32(ecx + 0x10);
    eax = MEM32(ebp + eax * 4);
    ebp = MEM32(ecx + 0xC);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(edi)) >> 32) & 1);
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm2 = XMM_SCALAR(MEMF(ebp + eax * 4)); /* movss */
    eax = MEM32(edx + 8);
    xmm0 = XMM_SCALAR(MEMF(eax + edi * 4)); /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0x2C); /* cvttss2si */
    ebp = MEM32(ecx + 0x10);
    eax = MEM32(ebp + eax * 4);
    ebp = MEM32(ecx + 0xC);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(esi)) >> 32) & 1);
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0 = XMM_SCALAR(MEMF(ebp + eax * 4)); /* movss */
    eax = MEM32(edx + 8);
    xmm1 = XMM_SCALAR(MEMF(eax + ebx * 4)); /* movss */
    MEMF(esp + 0x30) = xmm1.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0x30); /* cvttss2si */
    ebp = MEM32(ecx + 0x10);
    eax = MEM32(ebp + eax * 4);
    ebp = MEM32(ecx + 0xC);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(esi)) >> 32) & 1);
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm1 = XMM_SCALAR(MEMF(ebp + eax * 4)); /* movss */
    eax = MEM32(edx + 8);
    xmm4 = XMM_SCALAR(MEMF(eax + ebx * 4)); /* movss */
    MEMF(esp + 0x34) = xmm4.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0x34); /* cvttss2si */
    ebp = MEM32(ecx + 0x10);
    eax = MEM32(ebp + eax * 4);
    ebp = MEM32(ecx + 0xC);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(esi)) >> 32) & 1);
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(ebp + eax * 4) = xmm1.f[0]; /* movss */
    ebp = MEM32(esp + 0x38);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_003F6AB0; /* jl: less (signed <) */

loc_003F6B5D: ;
    esi = MEM32(esp + 0x10);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_003F6A30; /* jl: less (signed <) */

loc_003F6B6A: ;
    edi = esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_003F6970; /* jl: less (signed <) */

loc_003F6B74: ;
    eax = MEM32(esp + 0x40);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x2C)) >> 32) & 1);
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_003F6B80: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x2C)) >> 32) & 1);
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003F6C40
 * Original: 0x003F6C40 - 0x003F6E3B (507 bytes, 132 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F6C40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003F6C40: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x1C);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x20);
    PUSH32(esp, edi);
    edi = MEM32(esi + 8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esp + 0x24) = edx;
    if (CMP_LE(_fas, _fbs)) goto loc_003F6D15; /* jle: less or equal (signed <=) */

loc_003F6C64: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    MEM32(esp + 0x1C) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_003F6D09; /* jge: greater or equal (signed >=) */

loc_003F6C71: ;
    eax = MEM32(ecx + 8);
    xmm0 = XMM_SCALAR(MEMF(eax + edx * 4)); /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0x30); /* cvttss2si */
    ebp = MEM32(esi + 0x10);
    eax = MEM32(ebp + eax * 4);
    _fb = (uint32_t)(MEM32(esp + 0x24)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(esp + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = MEM32(esi + 0xC);
    xmm2 = XMM_SCALAR(MEMF(ebp + eax * 4)); /* movss */
    eax = MEM32(ecx + 8);
    ebp = MEM32(esp + 0x24);
    xmm0 = XMM_SCALAR(MEMF(eax + ebp * 4)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0x10); /* cvttss2si */
    ebp = MEM32(ebx + 8);
    xmm0 = XMM_SCALAR(MEMF(ebp + eax * 4)); /* movss */
    eax = MEM32(ecx + 8);
    xmm1 = XMM_SCALAR(MEMF(eax + edx * 4)); /* movss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0x14); /* cvttss2si */
    ebp = MEM32(ebx + 8);
    xmm1 = XMM_SCALAR(MEMF(ebp + eax * 4)); /* movss */
    eax = MEM32(ecx + 8);
    xmm3 = XMM_SCALAR(MEMF(eax + edx * 4)); /* movss */
    MEMF(esp + 0x18) = xmm3.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0x18); /* cvttss2si */
    ebp = MEM32(ebx + 8);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(ebp + eax * 4) = xmm1.f[0]; /* movss */
    if (CMP_L(_fas, _fbs)) goto loc_003F6C71; /* jl: less (signed <) */

loc_003F6D05: ;
    edx = MEM32(esp + 0x1C);

loc_003F6D09: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    MEM32(esp + 0x24) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_003F6C64; /* jl: less (signed <) */

loc_003F6D15: ;
    edx = MEM32(ecx + 8);
    xmm0 = XMM_SCALAR(MEMF(edx + edi * 4 + -4)); /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0x24); /* cvttss2si */
    edx = eax;
    eax = MEM32(ecx + 8);
    xmm0 = XMM_SCALAR(MEMF(eax + edi * 4 + -4)); /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0x24); /* cvttss2si */
    ebp = MEM32(esi + 0x10);
    eax = MEM32(ebp + eax * 4);
    ebx = MEM32(ebx + 8);
    xmm0 = XMM_SCALAR(MEMF(ebx + edx * 4)); /* movss */
    ebp = MEM32(esi + 0xC);
    edx = MEM32(esp + 0x2C);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0.f[0] = xmm0.f[0] / MEMF(ebp + eax * 4 + -4); /* divss */
    eax = MEM32(edx + 8);
    ebx = edi + -2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEMF(eax + edi * 4 + -4) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x24) = ebx;
    if (CMP_L(_fas, _fbs)) goto loc_003F6E33; /* jl: less (signed <) */

loc_003F6D77: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    /* nop */

loc_003F6D80: ;
    edx = ebx + 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    xmm0 = xmm1; /* movaps */
    if (CMP_GE(_fas, _fbs)) goto loc_003F6DD1; /* jge: greater or equal (signed >=) */

loc_003F6D8A: ;
    /* nop */

loc_003F6D90: ;
    eax = MEM32(ecx + 8);
    xmm2 = XMM_SCALAR(MEMF(eax + ebx * 4)); /* movss */
    MEMF(esp + 0x30) = xmm2.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0x30); /* cvttss2si */
    ebx = MEM32(esi + 0x10);
    eax = MEM32(ebx + eax * 4);
    ebx = MEM32(esi + 0xC);
    ebp = MEM32(esp + 0x2C);
    ebp = MEM32(ebp + 8);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm2 = XMM_SCALAR(MEMF(ebx + eax * 4)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(ebp + edx * 4); /* mulss */
    ebx = MEM32(esp + 0x24);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm0 = xmm2; /* movaps */
    if (CMP_L(_fas, _fbs)) goto loc_003F6D90; /* jl: less (signed <) */

loc_003F6DD1: ;
    edx = MEM32(ecx + 8);
    xmm2 = XMM_SCALAR(MEMF(edx + ebx * 4)); /* movss */
    MEMF(esp + 0x1C) = xmm2.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0x1C); /* cvttss2si */
    edx = eax;
    eax = MEM32(ecx + 8);
    xmm2 = XMM_SCALAR(MEMF(eax + ebx * 4)); /* movss */
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0x18); /* cvttss2si */
    ebp = MEM32(esp + 0x28);
    ebp = MEM32(ebp + 8);
    xmm2 = XMM_SCALAR(MEMF(ebp + edx * 4)); /* movss */
    edx = MEM32(esi + 0x10);
    eax = MEM32(edx + eax * 4);
    edx = MEM32(esi + 0xC);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] / MEMF(edx + eax * 4); /* divss */
    eax = MEM32(esp + 0x2C);
    edx = MEM32(eax + 8);
    MEMF(edx + ebx * 4) = xmm2.f[0]; /* movss */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x24) = ebx;
    if ((_fas >= 0)) goto loc_003F6D80; /* jns: not sign (positive) */

loc_003F6E33: ;
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
 * sub_003F6EC0
 * Original: 0x003F6EC0 - 0x003F6FEA (298 bytes, 101 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F6EC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F6EC0: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x34);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(eax + 8);
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, 0x003F6ED7u); RECOMP_ABI_CALL(0x0002A88Eu, sub_0002A88E); /* call 0x0002A88E */

loc_003F6ED7: ;
    eax = MEM32(esp + 0x44);
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x003F6EE5u); RECOMP_ABI_CALL(0x0002D746u, sub_0002D746); /* call 0x0002D746 */

loc_003F6EE5: ;
    ecx = edi + 3;
    ecx = ecx & 0xFFFFFFFCu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, ecx);
    MEM32(esp + 0x10) = 0x836FD0;
    MEM32(esp + 0x14) = edi;
    PUSH32(esp, 0x003F6F00u); RECOMP_ABI_CALL(0x0001C626u, sub_0001C626); /* call 0x0001C626 */

loc_003F6F00: ;
    esi = MEM32(esp + 0x40);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ebx = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    MEM32(esp + 0x14) = ebx;
    if (CMP_L(_fas, _fbs)) goto loc_003F6F4A; /* jl: less (signed <) */

loc_003F6F17: ;
    ecx = edi + -3;
    /* nop */

loc_003F6F20: ;
    edx = MEM32(esi + 8);
    MEMF(edx + eax * 4) = xmm0.f[0]; /* movss */
    edx = MEM32(esi + 8);
    MEMF(edx + eax * 4 + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(esi + 8);
    MEMF(edx + eax * 4 + 8) = xmm0.f[0]; /* movss */
    edx = MEM32(esi + 8);
    MEMF(edx + eax * 4 + 0xC) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003F6F20; /* jl: less (signed <) */

loc_003F6F4A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003F6F5D; /* jge: greater or equal (signed >=) */

loc_003F6F4E: ;
    edi = edi;

loc_003F6F50: ;
    ecx = MEM32(esi + 8);
    MEMF(ecx + eax * 4) = xmm0.f[0]; /* movss */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003F6F50; /* jl: less (signed <) */

loc_003F6F5D: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003F6F6Cu); RECOMP_ABI_CALL(0x00015E84u, sub_00015E84); /* call 0x00015E84 */

loc_003F6F6C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003F6FB9; /* je: equal / zero */

loc_003F6F74: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003F6F89u); RECOMP_ABI_CALL(0x00022CA6u, sub_00022CA6); /* call 0x00022CA6 */

loc_003F6F89: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x003F6F8Fu); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_003F6F8F: ;
    ecx = MEM32(esp + 0x34);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003F6F99u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_003F6F99: ;
    edx = MEM32(esp + 0x48);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003F6FA3u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_003F6FA3: ;
    eax = MEM32(esp + 0x50);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003F6FADu); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_003F6FAD: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_003F6FB9: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x003F6FBFu); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_003F6FBF: ;
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003F6FC9u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_003F6FC9: ;
    edx = MEM32(esp + 0x38);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003F6FD3u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_003F6FD3: ;
    eax = MEM32(esp + 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003F6FDDu); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_003F6FDD: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003F7040
 * Original: 0x003F7040 - 0x003F7067 (39 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F7040(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F7040: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003F7064; /* je: equal / zero */

loc_003F704A: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = edx;
    edx = MEM32(ecx + 0x30);
    MEM32(eax + 0x30) = edx;
    edx = MEM32(ecx + 0x34);
    MEM32(eax + 0x34) = edx;
    SET_LO8(ecx, MEM8(ecx + 0x3C));
    MEM8(eax + 0x3C) = LO8(ecx);

loc_003F7064: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003F7070
 * Original: 0x003F7070 - 0x003F70A0 (48 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F7070(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F7070: ;
    edx = MEM32(ecx + 0x38);
    PUSH32(esp, edi);
    edi = edx;
    edi = (uint32_t)((int32_t)edi * (int32_t)edx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003F7097; /* jbe: below or equal (unsigned <=) */

loc_003F707F: ;
    /* nop */

loc_003F7080: ;
    edx = MEM32(ecx + 4);
    MEM32(edx + eax * 4) = 0;
    edx = MEM32(ecx + 0x38);
    edi = edx;
    edi = (uint32_t)((int32_t)edi * (int32_t)edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003F7080; /* jb: below (unsigned <) */

loc_003F7097: ;
    MEM32(ecx + 0x30) = 0;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_003F70B0
 * Original: 0x003F70B0 - 0x003F70EC (60 bytes, 25 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F70B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F70B0: ;
    edx = MEM32(ecx + 0x38);
    eax = MEM32(ecx + 4);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    edx = (uint32_t)((int32_t)edx * (int32_t)edi);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(eax + edx * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + edx * 4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003F70E6; /* jne: not equal / not zero */

loc_003F70CC: ;
    esi = MEM32(ecx + 0x30);
    eax = esi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x38);
    _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 0x30) = esi;
    MEM32(eax) = edi;
    MEM32(eax + 4) = ebx;
    ecx = MEM32(ecx + 4);
    MEM32(ecx + edx * 4) = eax;

loc_003F70E6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003F7100
 * Original: 0x003F7100 - 0x003F7184 (132 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F7100(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F7100: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = ecx;
    ecx = MEM32(eax + 0x30);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    if (CMP_BE(_fa, _fb)) goto loc_003F7180; /* jbe: below or equal (unsigned <=) */

loc_003F7158: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_003F7160: ;
    ecx = MEM32(eax + 8);
    edi = ebx + ecx + 8;
    ecx = 0xC;
    esi = esp + 0xC;
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
    ecx = MEM32(eax + 0x30);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x38;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003F7160; /* jb: below (unsigned <) */

loc_003F717D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_003F7180: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003F71B0
 * Original: 0x003F71B0 - 0x003F72DE (302 bytes, 78 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F71B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F71B0: ;
    eax = MEM32(ecx + 0x30);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003F72DA; /* jbe: below or equal (unsigned <=) */

loc_003F71BE: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);

loc_003F71D2: ;
    eax = MEM32(ecx + 8);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa == 0)) goto loc_003F72CA; /* je: equal / zero */

loc_003F71DD: ;
    edi = MEM32(eax);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(eax + 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003F7255; /* jne: not equal / not zero */

loc_003F71E4: ;
    xmm1 = xmm3; /* movaps */
    xmm1.f[0] = xmm1.f[0] / xmm2.f[0]; /* divss */
    xmm4 = xmm1; /* movaps */
    xmm4.f[0] = xmm4.f[0] - MEMF(eax + 8); /* subss */
    MEMF(eax + 8) = xmm4.f[0]; /* movss */
    xmm4 = xmm0; /* movaps */
    xmm4.f[0] = xmm4.f[0] - MEMF(eax + 0xC); /* subss */
    MEMF(eax + 0xC) = xmm4.f[0]; /* movss */
    xmm4 = xmm0; /* movaps */
    xmm4.f[0] = xmm4.f[0] - MEMF(eax + 0x10); /* subss */
    MEMF(eax + 0x10) = xmm4.f[0]; /* movss */
    xmm4 = xmm0; /* movaps */
    xmm4.f[0] = xmm4.f[0] - MEMF(eax + 0x18); /* subss */
    MEMF(eax + 0x18) = xmm4.f[0]; /* movss */
    xmm4 = xmm1; /* movaps */
    xmm4.f[0] = xmm4.f[0] - MEMF(eax + 0x1C); /* subss */
    MEMF(eax + 0x1C) = xmm4.f[0]; /* movss */
    xmm4 = xmm0; /* movaps */
    xmm4.f[0] = xmm4.f[0] - MEMF(eax + 0x20); /* subss */
    MEMF(eax + 0x20) = xmm4.f[0]; /* movss */
    xmm4 = xmm0; /* movaps */
    xmm4.f[0] = xmm4.f[0] - MEMF(eax + 0x28); /* subss */
    MEMF(eax + 0x28) = xmm4.f[0]; /* movss */
    xmm4 = xmm0; /* movaps */
    xmm4.f[0] = xmm4.f[0] - MEMF(eax + 0x2C); /* subss */
    MEMF(eax + 0x2C) = xmm4.f[0]; /* movss */
    goto loc_003F72C0;

loc_003F7255: ;
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 8); /* subss */
    MEMF(eax + 8) = xmm1.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 0xC); /* subss */
    MEMF(eax + 0xC) = xmm1.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 0x10); /* subss */
    MEMF(eax + 0x10) = xmm1.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 0x18); /* subss */
    MEMF(eax + 0x18) = xmm1.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 0x1C); /* subss */
    MEMF(eax + 0x1C) = xmm1.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 0x20); /* subss */
    MEMF(eax + 0x20) = xmm1.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 0x28); /* subss */
    MEMF(eax + 0x28) = xmm1.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 0x2C); /* subss */
    MEMF(eax + 0x2C) = xmm1.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */

loc_003F72C0: ;
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 0x30); /* subss */
    MEMF(eax + 0x30) = xmm1.f[0]; /* movss */

loc_003F72CA: ;
    eax = MEM32(ecx + 0x30);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x38;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003F71D2; /* jb: below (unsigned <) */

loc_003F72D9: ;
    POP32(esp, edi);

loc_003F72DA: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003F7330
 * Original: 0x003F7330 - 0x003F73E8 (184 bytes, 46 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F7330(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F7330: ;
    eax = MEM32(ecx + 0x30);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003F73E5; /* jbe: below or equal (unsigned <=) */

loc_003F733D: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_003F7350;

    /* nop */
    /* nop */

loc_003F7350: ;
    eax = MEM32(ecx + 8);
    xmm1 = XMM_SCALAR(MEMF(esi + eax + 8)); /* movss */
    eax = esi + eax + 8;
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax + 8) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax + 0x10) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax + 0x14) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax + 0x18) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax + 0x20) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax + 0x24) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x28)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax + 0x28) = xmm1.f[0]; /* movss */
    eax = MEM32(ecx + 0x30);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x38;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003F7350; /* jb: below (unsigned <) */

loc_003F73E4: ;
    POP32(esp, esi);

loc_003F73E5: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003F7420
 * Original: 0x003F7420 - 0x003F74EC (204 bytes, 52 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F7420(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F7420: ;
    eax = MEM32(ecx + 0x30);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003F74E8; /* jbe: below or equal (unsigned <=) */

loc_003F742E: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_003F7440;

    /* nop */
    /* nop */

loc_003F7440: ;
    edx = MEM32(ebx + 8);
    eax = MEM32(ecx + 8);
    xmm0 = XMM_SCALAR(MEMF(edx + esi + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + eax + 8); /* addss */
    eax = esi + eax + 8;
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + esi + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 4); /* addss */
    edx = edx + esi + 8;
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 8); /* addss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0x10); /* addss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0x14); /* addss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 0x18)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0x18); /* addss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0x20); /* addss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 0x24)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0x24); /* addss */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 0x28)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0x28); /* addss */
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    eax = MEM32(ecx + 0x30);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x38;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003F7440; /* jb: below (unsigned <) */

loc_003F74E6: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_003F74E8: ;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003F7520
 * Original: 0x003F7520 - 0x003F75DD (189 bytes, 63 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F7520(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003F7520: ;
    eax = MEM32(ecx + 0x38);
    PUSH32(esp, edi);
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_BE(_fa, _fb)) goto loc_003F75D9; /* jbe: below or equal (unsigned <=) */

loc_003F752E: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edi;

loc_003F7540: ;
    edx = MEM32(ecx + 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    edx = MEM32(edx + eax * 4);
    xmm0 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(8)) >> 32) & 1);
    edx = edx + 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    eax = MEM32(ebx);
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_003F7568; /* jnp: not parity */

loc_003F755D: ;
    xmm0 = XMM_SCALAR(MEMF(eax + esi)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(edx); /* divss */
    goto loc_003F756D;

loc_003F7568: ;
    xmm0 = XMM_SCALAR(MEMF(esi + eax)); /* movss */

loc_003F756D: ;
    eax = MEM32(ebp);
    MEMF(esi + eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 0x14)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    eax = MEM32(ebx);
    xmm0 = XMM_SCALAR(MEMF(eax + esi + 4)); /* movss */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_003F7590; /* jnp: not parity */

loc_003F758B: ;
    xmm0.f[0] = xmm0.f[0] / MEMF(edx + 0x14); /* divss */

loc_003F7590: ;
    eax = MEM32(ebp);
    MEMF(esi + eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 0x28)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_003F75B6; /* jnp: not parity */

loc_003F75A7: ;
    eax = MEM32(ebx);
    xmm0 = XMM_SCALAR(MEMF(eax + esi + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(edx + 0x28); /* divss */
    goto loc_003F75BE;

loc_003F75B6: ;
    edx = MEM32(ebx);
    xmm0 = XMM_SCALAR(MEMF(edx + esi + 8)); /* movss */

loc_003F75BE: ;
    eax = MEM32(ebp);
    MEMF(esi + eax + 8) = xmm0.f[0]; /* movss */
    eax = MEM32(ecx + 0x38);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x10)) >> 32) & 1);
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_003F7540; /* jb: below (unsigned <) */

loc_003F75D6: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_003F75D9: ;
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003F7610
 * Original: 0x003F7610 - 0x003F76DF (207 bytes, 71 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F7610(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
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
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003F7610: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = ecx;
    eax = MEM32(ebp + 0x38);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003F76DC; /* jbe: below or equal (unsigned <=) */

loc_003F7621: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);

loc_003F7623: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003F76CE; /* jbe: below or equal (unsigned <=) */

loc_003F762D: ;
    /* nop */

loc_003F7630: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_003F7641; /* jg: greater (signed >) */

loc_003F7634: ;
    ecx = MEM32(ebp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)ebx);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = MEM32(ecx + eax * 4);
    goto loc_003F764C;

loc_003F7641: ;
    edx = MEM32(ebp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = MEM32(edx + eax * 4);

loc_003F764C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003F76C2; /* je: equal / zero */

loc_003F7650: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x836FF0);
    PUSH32(esp, 0x003F765Cu); RECOMP_ABI_CALL(0x00033BAFu, sub_00033BAF); /* call 0x00033BAF */

loc_003F765C: ;
    fp_push(MEMF(esi + 0x10)); /* fld float */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMD(esp + 0x10) = fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0xC)); /* fld float */
    MEMD(esp + 8) = fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 8)); /* fld float */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x836FD8);
    PUSH32(esp, 0x003F767Du); RECOMP_ABI_CALL(0x00033BAFu, sub_00033BAF); /* call 0x00033BAF */

loc_003F767D: ;
    fp_push(MEMF(esi + 0x20)); /* fld float */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMD(esp + 0x10) = fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x1C)); /* fld float */
    MEMD(esp + 8) = fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x18)); /* fld float */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x836FD8);
    PUSH32(esp, 0x003F769Eu); RECOMP_ABI_CALL(0x00033BAFu, sub_00033BAF); /* call 0x00033BAF */

loc_003F769E: ;
    fp_push(MEMF(esi + 0x30)); /* fld float */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMD(esp + 0x10) = fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x2C)); /* fld float */
    MEMD(esp + 8) = fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x28)); /* fld float */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x836FD8);
    PUSH32(esp, 0x003F76BFu); RECOMP_ABI_CALL(0x00033BAFu, sub_00033BAF); /* call 0x00033BAF */

loc_003F76BF: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003F76C2: ;
    eax = MEM32(ebp + 0x38);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003F7630; /* jb: below (unsigned <) */

loc_003F76CE: ;
    eax = MEM32(ebp + 0x38);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003F7623; /* jb: below (unsigned <) */

loc_003F76DA: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_003F76DC: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003F7720
 * Original: 0x003F7720 - 0x003F7868 (328 bytes, 93 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F7720(void)
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

loc_003F7720: ;
    PUSH32(esp, ecx);
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(ebx + 4);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    if (CMP_L(_fas, _fbs)) goto loc_003F780D; /* jl: less (signed <) */

loc_003F773F: ;
    ecx = MEM32(ebx);
    edx = esi + -4;
    eax = ecx + 4;
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edx * 4;
    goto loc_003F7760;

    /* nop */
    edi = edi;

loc_003F7760: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm0.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(eax + -4)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm1.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 0x10)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x14)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm0.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x1C)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x24)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x2C)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm2.f[0]; /* mulss */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x40;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    if ((_fa != 0)) goto loc_003F7760; /* jne: not equal / not zero */

loc_003F7807: ;
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */

loc_003F780D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003F7855; /* jae: above or equal (unsigned >=) */

loc_003F7811: ;
    edx = MEM32(ebx);
    eax = edi;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_003F7820: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = xmm0; /* movaps */
    if ((_fa != 0)) goto loc_003F7820; /* jne: not equal / not zero */

loc_003F784F: ;
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */

loc_003F7855: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003F78C0
 * Original: 0x003F78C0 - 0x003F7A23 (355 bytes, 100 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F78C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
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
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003F78C0: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 8);
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(eax + 4);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    if (CMP_L(_fas, _fbs)) goto loc_003F79C1; /* jl: less (signed <) */

loc_003F78DF: ;
    ecx = MEM32(esp + 0x18);
    esi = MEM32(ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(eax);
    ecx = esi + 8;
    edx = esi + 0x14;
    eax = ebx + 0x10;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - esi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = edi + -4;
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        esi = _sv >> _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp = esi * 4;

loc_003F7901: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + -8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + -16); /* mulss */
    xmm2 = XMM_SCALAR(MEMF(ecx + -4)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(eax + -12); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(ebx + ecx)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(ecx); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(eax); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 8); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(edx); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(edx + 0x10)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(eax + 0x14); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(edx + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x18); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 0x18)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(eax + 0x10); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(edx + 0x20)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(eax + 0x24); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(edx + 0x24)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x28); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 0x28)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(eax + 0x20); /* mulss */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x40;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x40;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    if ((_fa != 0)) goto loc_003F7901; /* jne: not equal / not zero */

loc_003F79B6: ;
    eax = MEM32(esp + 0x18);
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    POP32(esp, ebx);

loc_003F79C1: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003F7A1A; /* jae: above or equal (unsigned >=) */

loc_003F79C5: ;
    edx = MEM32(esp + 0x18);
    esi = MEM32(eax);
    edx = MEM32(edx);
    ecx = ebp;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = esi + ecx;
    ecx = edx + ecx + 4;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - ebp;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_003F79E0: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 8); /* mulss */
    xmm2 = XMM_SCALAR(MEMF(edx + eax)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(eax); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(ecx); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    xmm1 = xmm0; /* movaps */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    if ((_fa != 0)) goto loc_003F79E0; /* jne: not equal / not zero */

loc_003F7A1A: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003F7A80
 * Original: 0x003F7A80 - 0x003F7AC6 (70 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F7A80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003F7A80: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi + 4);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003F7AC3; /* jbe: below or equal (unsigned <=) */

loc_003F7A8F: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, ebp);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003F7A97: ;
    eax = MEM32(ebx);
    ecx = MEM32(edi);
    ebp = MEM32(eax + edx);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = ebp;
    ebp = MEM32(eax + 4);
    MEM32(ecx + 4) = ebp;
    ebp = MEM32(eax + 8);
    MEM32(ecx + 8) = ebp;
    eax = MEM32(eax + 0xC);
    MEM32(ecx + 0xC) = eax;
    eax = MEM32(edi + 4);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003F7A97; /* jb: below (unsigned <) */

loc_003F7AC1: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_003F7AC3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003F7AE0
 * Original: 0x003F7AE0 - 0x003F7AE7 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F7AE0(void)
{

loc_003F7AE0: ;
    eax = ecx;
    MEM8(eax + 8) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_003F7AF0
 * Original: 0x003F7AF0 - 0x003F7B0B (27 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F7AF0(void)
{

loc_003F7AF0: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax) = 0;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    SET_LO8(ecx, MEM8(ecx + 8));
    MEM8(eax + 8) = LO8(ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003F7B20
 * Original: 0x003F7B20 - 0x003F7B3F (31 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F7B20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F7B20: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003F7B3C; /* je: equal / zero */

loc_003F7B2A: ;
    SET_LO8(edx, MEM8(ecx + 8));
    MEM8(eax + 8) = LO8(edx);
    ecx = MEM32(ecx + 4);
    MEM32(eax + 4) = ecx;
    MEM32(eax) = 0;

loc_003F7B3C: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003F7B50
 * Original: 0x003F7B50 - 0x003F7B5A (10 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F7B50(void)
{

loc_003F7B50: ;
    eax = MEM32(ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003F7B58u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_003F7B58: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003F7B60
 * Original: 0x003F7B60 - 0x003F7BE1 (129 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003F7B60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F7B60: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(ebp + 0xC);
    eax = MEM32(edx + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_BE(_fa, _fb)) goto loc_003F7BDA; /* jbe: below or equal (unsigned <=) */

loc_003F7B78: ;
    esi = MEM32(ebp + 0x10);
    edi = MEM32(ebp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003F7B80: ;
    ebx = MEM32(esi);
    xmm0 = XMM_MEM(ebx + eax); /* movaps */
    ebx = MEM32(edx);
    xmm1 = XMM_MEM(ebx + eax); /* movaps */
    ebx = MEM32(edi);
    xmm1 = XMM_SUB(xmm1, xmm0); /* subps */
    XMM_STORE(esp + 0x10, xmm1); /* movaps */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(esp + 0x20); /* movaps */
    XMM_STORE(ebx + eax, xmm0); /* movaps */
    ebx = MEM32(edx + 4);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003F7B80; /* jb: below (unsigned <) */

loc_003F7BDA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003F7C10
 * Original: 0x003F7C10 - 0x003F7C83 (115 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F7C10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003F7C10: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    eax = MEM32(ebx + 4);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003F7C80; /* jbe: below or equal (unsigned <=) */

loc_003F7C1F: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003F7C27: ;
    ecx = MEM32(ebx);
    eax = MEM32(ebp);
    edx = MEM32(esp + 0x14);
    edx = MEM32(edx);
    xmm0 = XMM_SCALAR(MEMF(ecx + esi)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + esi); /* addss */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(edx) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 4); /* addss */
    MEMF(edx + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 8); /* addss */
    MEMF(edx + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0xC); /* addss */
    MEMF(edx + 0xC) = xmm0.f[0]; /* movss */
    eax = MEM32(ebx + 4);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003F7C27; /* jb: below (unsigned <) */

loc_003F7C7E: ;
    POP32(esp, esi);
    POP32(esp, ebp);

loc_003F7C80: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003F7CA0
 * Original: 0x003F7CA0 - 0x003F7D1F (127 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003F7CA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F7CA0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(ebp + 0xC);
    eax = MEM32(edx + 4);
    PUSH32(esp, esi);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_BE(_fa, _fb)) goto loc_003F7D19; /* jbe: below or equal (unsigned <=) */

loc_003F7CB7: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    esi = MEM32(ebp + 8);
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003F7CC5: ;
    edi = MEM32(edx);
    xmm1 = XMM_MEM(edi + eax); /* movaps */
    edi = MEM32(esi);
    xmm1 = XMM_MUL(xmm1, xmm0); /* mulps */
    XMM_STORE(esp + 0x10, xmm1); /* movaps */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    xmm1 = XMM_MEM(esp + 0x20); /* movaps */
    XMM_STORE(edi + eax, xmm1); /* movaps */
    edi = MEM32(edx + 4);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003F7CC5; /* jb: below (unsigned <) */

loc_003F7D19: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003F7D40
 * Original: 0x003F7D40 - 0x003F7DB9 (121 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003F7D40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F7D40: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = MEM32(ecx + 4);
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(esp + 0xC); /* movaps */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    XMM_STORE(esp + 0x10, xmm0); /* movaps */
    if (CMP_BE(_fa, _fb)) goto loc_003F7DB4; /* jbe: below or equal (unsigned <=) */

loc_003F7D78: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003F7D92: ;
    eax = MEM32(ecx);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(eax) = xmm3.f[0]; /* movss */
    MEMF(eax + 4) = xmm2.f[0]; /* movss */
    MEMF(eax + 8) = xmm1.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    eax = MEM32(ecx + 4);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003F7D92; /* jb: below (unsigned <) */

loc_003F7DB4: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003F7DE0
 * Original: 0x003F7DE0 - 0x003F7E27 (71 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F7DE0(void)
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

loc_003F7DE0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003F7E24; /* jbe: below or equal (unsigned <=) */

loc_003F7DED: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003F7DF0: ;
    eax = MEM32(esi);
    fp_push(MEMF(eax + ebx + 8)); /* fld float */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMD(esp + 0x10) = fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 4)); /* fld float */
    MEMD(esp + 8) = fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax)); /* fld float */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x836FD8);
    PUSH32(esp, 0x003F7E15u); RECOMP_ABI_CALL(0x00033BAFu, sub_00033BAF); /* call 0x00033BAF */

loc_003F7E15: ;
    eax = MEM32(esi + 4);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003F7DF0; /* jb: below (unsigned <) */

loc_003F7E23: ;
    POP32(esp, ebx);

loc_003F7E24: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003F7E40
 * Original: 0x003F7E40 - 0x003F7E86 (70 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F7E40(void)
{

loc_003F7E40: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    eax = MEM32(esp + 4);
    xmm1.f[0] = xmm1.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm0.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7C0B1C); /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x7ABD64); /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x7AA820); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    MEMF(eax + 8) = xmm1.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003F7EA0
 * Original: 0x003F7EA0 - 0x003F7EE6 (70 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F7EA0(void)
{

loc_003F7EA0: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    eax = MEM32(esp + 4);
    xmm1.f[0] = xmm1.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm0.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7C0B1C); /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x7ABD64); /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x7AA820); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003F7F00
 * Original: 0x003F7F00 - 0x003F7F25 (37 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F7F00(void)
{

loc_003F7F00: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm0.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AD310); /* mulss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003F7F30
 * Original: 0x003F7F30 - 0x003F7F55 (37 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F7F30(void)
{

loc_003F7F30: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm0.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7C3B48); /* mulss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003F7F60
 * Original: 0x003F7F60 - 0x003F7FDD (125 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F7F60(void)
{

loc_003F7F60: ;
    eax = MEM32(esp + 8);
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    ecx = MEM32(esp + 4);
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(0x7C0B1C)); /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 4) = xmm3.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 8) = xmm3.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003F8000
 * Original: 0x003F8000 - 0x003F8090 (144 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F8000(void)
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

loc_003F8000: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x7E1290);
    PUSH32(esp, 0x003F8010u); RECOMP_ABI_CALL(0x00033BAFu, sub_00033BAF); /* call 0x00033BAF */

loc_003F8010: ;
    esi = MEM32(esp + 0x14);
    fp_push(MEMF(esi + 0xC)); /* fld float */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMD(esp + 0x18) = fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 8)); /* fld float */
    MEMD(esp + 0x10) = fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 4)); /* fld float */
    MEMD(esp + 8) = fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi)); /* fld float */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x837008);
    PUSH32(esp, 0x003F803Bu); RECOMP_ABI_CALL(0x00033BAFu, sub_00033BAF); /* call 0x00033BAF */

loc_003F803B: ;
    fp_push(MEMF(esi + 0x1C)); /* fld float */
    MEMD(esp + 0x1C) = fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(esi + 0x18)); /* fld float */
    MEMD(esp + 0x10) = fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x14)); /* fld float */
    MEMD(esp + 8) = fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x10)); /* fld float */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x837008);
    PUSH32(esp, 0x003F8063u); RECOMP_ABI_CALL(0x00033BAFu, sub_00033BAF); /* call 0x00033BAF */

loc_003F8063: ;
    fp_push(MEMF(esi + 0x2C)); /* fld float */
    MEMD(esp + 0x1C) = fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(esi + 0x28)); /* fld float */
    MEMD(esp + 0x10) = fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x24)); /* fld float */
    MEMD(esp + 8) = fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x20)); /* fld float */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x837008);
    PUSH32(esp, 0x003F808Bu); RECOMP_ABI_CALL(0x00033BAFu, sub_00033BAF); /* call 0x00033BAF */

loc_003F808B: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003F80C0
 * Original: 0x003F80C0 - 0x003F8178 (184 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F80C0(void)
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

loc_003F80C0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x7E1290);
    PUSH32(esp, 0x003F80D0u); RECOMP_ABI_CALL(0x00033BAFu, sub_00033BAF); /* call 0x00033BAF */

loc_003F80D0: ;
    esi = MEM32(esp + 0x14);
    fp_push(MEMF(esi + 0xC)); /* fld float */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMD(esp + 0x18) = fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 8)); /* fld float */
    MEMD(esp + 0x10) = fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 4)); /* fld float */
    MEMD(esp + 8) = fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi)); /* fld float */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x837024);
    PUSH32(esp, 0x003F80FBu); RECOMP_ABI_CALL(0x00033BAFu, sub_00033BAF); /* call 0x00033BAF */

loc_003F80FB: ;
    fp_push(MEMF(esi + 0x1C)); /* fld float */
    MEMD(esp + 0x1C) = fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(esi + 0x18)); /* fld float */
    MEMD(esp + 0x10) = fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x14)); /* fld float */
    MEMD(esp + 8) = fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x10)); /* fld float */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x837024);
    PUSH32(esp, 0x003F8123u); RECOMP_ABI_CALL(0x00033BAFu, sub_00033BAF); /* call 0x00033BAF */

loc_003F8123: ;
    fp_push(MEMF(esi + 0x2C)); /* fld float */
    MEMD(esp + 0x1C) = fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(esi + 0x28)); /* fld float */
    MEMD(esp + 0x10) = fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x24)); /* fld float */
    MEMD(esp + 8) = fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x20)); /* fld float */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x837024);
    PUSH32(esp, 0x003F814Bu); RECOMP_ABI_CALL(0x00033BAFu, sub_00033BAF); /* call 0x00033BAF */

loc_003F814B: ;
    fp_push(MEMF(esi + 0x3C)); /* fld float */
    MEMD(esp + 0x1C) = fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(esi + 0x38)); /* fld float */
    MEMD(esp + 0x10) = fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x34)); /* fld float */
    MEMD(esp + 8) = fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x30)); /* fld float */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x837024);
    PUSH32(esp, 0x003F8173u); RECOMP_ABI_CALL(0x00033BAFu, sub_00033BAF); /* call 0x00033BAF */

loc_003F8173: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003F81B0
 * Original: 0x003F81B0 - 0x003F81EE (62 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F81B0(void)
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

loc_003F81B0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x7E1290);
    PUSH32(esp, 0x003F81BFu); RECOMP_ABI_CALL(0x00033BAFu, sub_00033BAF); /* call 0x00033BAF */

loc_003F81BF: ;
    eax = MEM32(esp + 0x10);
    fp_push(MEMF(eax + 0xC)); /* fld float */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMD(esp + 0x18) = fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 8)); /* fld float */
    MEMD(esp + 0x10) = fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 4)); /* fld float */
    MEMD(esp + 8) = fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax)); /* fld float */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x837024);
    PUSH32(esp, 0x003F81EAu); RECOMP_ABI_CALL(0x00033BAFu, sub_00033BAF); /* call 0x00033BAF */

loc_003F81EA: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003F8200
 * Original: 0x003F8200 - 0x003F8234 (52 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F8200(void)
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

loc_003F8200: ;
    eax = MEM32(esp + 8);
    fp_push(MEMF(eax + 0xC)); /* fld float */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMD(esp + 0x18) = fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 8)); /* fld float */
    MEMD(esp + 0x10) = fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 4)); /* fld float */
    MEMD(esp + 8) = fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax)); /* fld float */
    eax = MEM32(esp + 0x24);
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    PUSH32(esp, 0x837034);
    PUSH32(esp, 0x003F8230u); RECOMP_ABI_CALL(0x00033BAFu, sub_00033BAF); /* call 0x00033BAF */

loc_003F8230: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003F8250
 * Original: 0x003F8250 - 0x003F827D (45 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F8250(void)
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

loc_003F8250: ;
    eax = MEM32(esp + 8);
    fp_push(MEMF(eax + 8)); /* fld float */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMD(esp + 0x10) = fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 4)); /* fld float */
    MEMD(esp + 8) = fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax)); /* fld float */
    eax = MEM32(esp + 0x1C);
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    PUSH32(esp, 0x837050);
    PUSH32(esp, 0x003F8279u); RECOMP_ABI_CALL(0x00033BAFu, sub_00033BAF); /* call 0x00033BAF */

loc_003F8279: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003F8290
 * Original: 0x003F8290 - 0x003F82E2 (82 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F8290(void)
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

loc_003F8290: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x7E1290);
    PUSH32(esp, 0x003F82A1u); RECOMP_ABI_CALL(0x00033BAFu, sub_00033BAF); /* call 0x00033BAF */

loc_003F82A1: ;
    edi = MEM32(esp + 0x18);
    eax = MEM32(edi + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003F82D2; /* jle: less or equal (signed <=) */

loc_003F82B1: ;
    ecx = MEM32(edi + 8);
    fp_push(MEMF(ecx + esi * 4)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x83706C);
    PUSH32(esp, 0x003F82C7u); RECOMP_ABI_CALL(0x00033BAFu, sub_00033BAF); /* call 0x00033BAF */

loc_003F82C7: ;
    eax = MEM32(edi + 4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003F82B1; /* jl: less (signed <) */

loc_003F82D2: ;
    PUSH32(esp, 0x837068);
    PUSH32(esp, 0x003F82DCu); RECOMP_ABI_CALL(0x00033BAFu, sub_00033BAF); /* call 0x00033BAF */

loc_003F82DC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003F8300
 * Original: 0x003F8300 - 0x003F8381 (129 bytes, 46 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F8300(void)
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

loc_003F8300: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x7E1290);
    esi = ecx;
    PUSH32(esp, 0x003F8313u); RECOMP_ABI_CALL(0x00033BAFu, sub_00033BAF); /* call 0x00033BAF */

loc_003F8313: ;
    eax = MEM32(esi + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003F836F; /* jle: less or equal (signed <=) */

loc_003F831F: ;
    PUSH32(esp, edi);

loc_003F8320: ;
    eax = MEM32(esi + 8);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003F8359; /* jle: less or equal (signed <=) */

loc_003F8329: ;
    /* nop */

loc_003F8330: ;
    ecx = MEM32(esi + 0x10);
    edx = MEM32(ecx + ebx * 4);
    eax = MEM32(esi + 0xC);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(eax + edx * 4)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x83706C);
    PUSH32(esp, 0x003F834Eu); RECOMP_ABI_CALL(0x00033BAFu, sub_00033BAF); /* call 0x00033BAF */

loc_003F834E: ;
    eax = MEM32(esi + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003F8330; /* jl: less (signed <) */

loc_003F8359: ;
    PUSH32(esp, 0x837068);
    PUSH32(esp, 0x003F8363u); RECOMP_ABI_CALL(0x00033BAFu, sub_00033BAF); /* call 0x00033BAF */

loc_003F8363: ;
    eax = MEM32(esi + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003F8320; /* jl: less (signed <) */

loc_003F836E: ;
    POP32(esp, edi);

loc_003F836F: ;
    PUSH32(esp, 0x837068);
    PUSH32(esp, 0x003F8379u); RECOMP_ABI_CALL(0x00033BAFu, sub_00033BAF); /* call 0x00033BAF */

loc_003F8379: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003F83B0
 * Original: 0x003F83B0 - 0x003F8448 (152 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F83B0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003F83B0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 4); /* subss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] * MEMF(0x837088); /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x837084); /* mulss */
    xmm2.f[0] = xmm2.f[0] + MEMF(0x7A9980); /* addss */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x837080); /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] * MEMF(0x83707C); /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x837078); /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x837074); /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    fp_top() = RECOMP_FP_PC(MEMF(0x7A9980) / fp_top()); /* fdivr dword ptr [0x7a9980] */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003F8470
 * Original: 0x003F8470 - 0x003F85ED (381 bytes, 119 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F8470(void)
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

loc_003F8470: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x20);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = 1;
    if (CMP_LE(_fas, _fbs)) goto loc_003F8492; /* jle: less or equal (signed <=) */

loc_003F8487: ;
    edi = MEM32(esp + 0x28);
    ecx = ebx;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */

loc_003F8492: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AA7EC)); /* movss */
    ebp = ebp | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    MEM32(esp + 0x2C) = ebp;
    if (CMP_L(_fas, _fbs)) goto loc_003F84F5; /* jl: less (signed <) */

loc_003F84A8: ;
    ecx = MEM32(esp + 0x24);
    edx = ebx + -3;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003F84B2: ;
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + -16); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003F84BF; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx + -16)) */

loc_003F84B8: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + -16)); /* movss */
    ebp = eax;

loc_003F84BF: ;
    _fca = xmm0.f[0]; _fcb = MEMF(ecx); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003F84CB; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx)) */

loc_003F84C4: ;
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    ebp = eax + 1;

loc_003F84CB: ;
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 0x10); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003F84D9; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx + 0x10)) */

loc_003F84D1: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x10)); /* movss */
    ebp = eax + 2;

loc_003F84D9: ;
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 0x20); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003F84E7; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx + 0x20)) */

loc_003F84DF: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x20)); /* movss */
    ebp = eax + 3;

loc_003F84E7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x40;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003F84B2; /* jl: less (signed <) */

loc_003F84F1: ;
    MEM32(esp + 0x2C) = ebp;

loc_003F84F5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003F851D; /* jge: greater or equal (signed >=) */

loc_003F84F9: ;
    edx = MEM32(esp + 0x24);
    ecx = eax;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = ecx + edx + 4;

loc_003F8506: ;
    _fca = xmm0.f[0]; _fcb = MEMF(ecx); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003F8511; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx)) */

loc_003F850B: ;
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    ebp = eax;

loc_003F8511: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003F8506; /* jl: less (signed <) */

loc_003F8519: ;
    MEM32(esp + 0x2C) = ebp;

loc_003F851D: ;
    xmm2 = XMM_SCALAR(MEMF(0x7C64D8)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(0x83708C)); /* movss */
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    xmm4 = XMM_SCALAR(MEMF(0x7A9EBC)); /* movss */
    edi = ebp;
    /* nop */

loc_003F8540: ;
    esi = esi | 0xFFFFFFFFu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    xmm1 = xmm5; /* movaps */
    if (CMP_LE(_fas, _fbs)) goto loc_003F85BB; /* jle: less or equal (signed <=) */

loc_003F854C: ;
    edx = MEM32(esp + 0x24);

loc_003F8550: ;
    ecx = MEM32(esp + 0x28);
    _fa = (uint32_t)(MEM32(ecx + eax * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + eax * 4), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003F85B3; /* jne: not equal / not zero */

loc_003F855A: ;
    ebp = MEM32(esp + 0x24);
    xmm0 = XMM_SCALAR(MEMF(edx)); /* movss */
    ecx = edi;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + ebp); /* subss */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 4); /* subss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    _fca = xmm3.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003F85A5; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm0.f[0]) */

loc_003F85A1: ;
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */

loc_003F85A5: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    ebp = MEM32(esp + 0x2C);
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003F85B3; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_003F85AE: ;
    esi = eax;
    xmm1 = xmm0; /* movaps */

loc_003F85B3: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003F8550; /* jl: less (signed <) */

loc_003F85BB: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x28);
    MEM32(edx + esi * 4) = eax;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    edi = esi;
    MEM32(esp + 0x10) = eax;
    xmm2 = xmm1; /* movaps */
    if (CMP_NE(_fa, _fb)) goto loc_003F8540; /* jne: not equal / not zero */

loc_003F85DC: ;
    POP32(esp, edi);
    eax = edx;
    POP32(esp, esi);
    MEM32(eax + ebp * 4) = 0;
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003F8650
 * Original: 0x003F8650 - 0x003F8680 (48 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F8650(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F8650: ;
    ecx = MEM32(esp + 0xC);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003F8668u); RECOMP_ABI_CALL(0x005A0935u, sub_005A0935); /* call 0x005A0935 */

loc_003F8668: ;
    edx = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003F8678u); RECOMP_ABI_CALL(0x005A0935u, sub_005A0935); /* call 0x005A0935 */

loc_003F8678: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003F8690
 * Original: 0x003F8690 - 0x003F871F (143 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F8690(void)
{

loc_003F8690: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 8); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 4); /* mulss */
    edx = MEM32(esp + 4);
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(edx) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x18)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 8); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x10)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x14)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 4); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(edx + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x28)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 8); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x20)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x24)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 4); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(edx + 8) = xmm0.f[0]; /* movss */
    eax = MEM32(eax + 0xC);
    MEM32(edx + 0xC) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_003F8750
 * Original: 0x003F8750 - 0x003F879F (79 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F8750(void)
{

loc_003F8750: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    edx = MEM32(ecx);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(eax) = edx;
    edx = MEM32(ecx + 0x10);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx + 0x20);
    MEM32(eax + 8) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 0x10) = edx;
    edx = MEM32(ecx + 0x14);
    MEM32(eax + 0x14) = edx;
    edx = MEM32(ecx + 0x24);
    MEM32(eax + 0x18) = edx;
    edx = MEM32(ecx + 8);
    MEM32(eax + 0x20) = edx;
    edx = MEM32(ecx + 0x18);
    MEM32(eax + 0x24) = edx;
    ecx = MEM32(ecx + 0x28);
    MEM32(eax + 0x28) = ecx;
    MEMF(eax + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003F87C0
 * Original: 0x003F87C0 - 0x003F884D (141 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F87C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F87C0: ;
    ecx = MEM32(esp + 8);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003F87D1u); RECOMP_ABI_CALL(0x0059F99Au, sub_0059F99A); /* call 0x0059F99A */

loc_003F87D1: ;
    eax = MEM32(esp + 0x30);
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003F8870
 * Original: 0x003F8870 - 0x003F8883 (19 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F8870(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F8870: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003F887Fu); RECOMP_ABI_CALL(0x0059F7D7u, sub_0059F7D7); /* call 0x0059F7D7 */

loc_003F887F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003F8890
 * Original: 0x003F8890 - 0x003F8C5D (973 bytes, 198 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003F8890(void)
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

loc_003F8890: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, eax);
    ecx = esp + 0x54;
    PUSH32(esp, ecx);
    edx = esp + 0x68;
    PUSH32(esp, edx);
    eax = esp + 0xBC;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003F88B7u); RECOMP_ABI_CALL(0x00021EA5u, sub_00021EA5); /* call 0x00021EA5 */

loc_003F88B7: ;
    ecx = MEM32(ebp + 0x10);
    PUSH32(esp, ecx);
    edx = esp + 0x104;
    PUSH32(esp, edx);
    eax = esp + 0xF8;
    PUSH32(esp, eax);
    ecx = esp + 0x9C;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003F88D8u); RECOMP_ABI_CALL(0x00021EA5u, sub_00021EA5); /* call 0x00021EA5 */

loc_003F88D8: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xD0)); /* movss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xD4)); /* movss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xD8)); /* movss */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xE0)); /* movss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xE4)); /* movss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xE8)); /* movss */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xF0)); /* movss */
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xF4)); /* movss */
    edx = esp + 0x90;
    PUSH32(esp, edx);
    eax = esp + 0x48;
    MEMF(esp + 0x64) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xFC)); /* movss */
    PUSH32(esp, eax);
    MEMF(esp + 0x6C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003F8971u); RECOMP_ABI_CALL(0x005A0C1Bu, sub_005A0C1B); /* call 0x005A0C1B */

loc_003F8971: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xA8)); /* movss */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xAC)); /* movss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xB0)); /* movss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xB8)); /* movss */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xBC)); /* movss */
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC0)); /* movss */
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC8)); /* movss */
    MEMF(esp + 0x64) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xCC)); /* movss */
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    edx = esp + 0x50;
    MEMF(esp + 0x6C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xD4)); /* movss */
    PUSH32(esp, edx);
    MEMF(esp + 0x74) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003F8A07u); RECOMP_ABI_CALL(0x005A0C1Bu, sub_005A0C1B); /* call 0x005A0C1B */

loc_003F8A07: ;
    ecx = MEM32(ebp + 0x14);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x48;
    PUSH32(esp, edx);
    eax = esp + 0xAC;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003F8A22u); RECOMP_ABI_CALL(0x005A16D1u, sub_005A16D1); /* call 0x005A16D1 */

loc_003F8A22: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esp)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 0x4C) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp + 0x48); /* divss */
    xmm1 = XMM_SCALAR(MEMF(esp)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    ecx = esp + 0x24;
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    PUSH32(esp, ecx);
    edx = esp + 4;
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    PUSH32(esp, edx);
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003F8ACFu); RECOMP_ABI_CALL(0x0059F99Au, sub_0059F99A); /* call 0x0059F99A */

loc_003F8ACF: ;
    xmm1 = XMM_SCALAR(MEMF(ebp + 0x14)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm3 = XMM_MEM(esp + 0xE8); /* movaps */
    xmm2.f[0] = xmm1.f[0]; /* movss */
    xmm0 = xmm4; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_MEM(esp + 0x68); /* movaps */
    eax = MEM32(ebp + 8);
    xmm2 = XMM_SHUFFLE(xmm2, xmm2, 0); /* shufps */
    xmm3 = XMM_MUL(xmm3, xmm2); /* mulps */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */
    xmm1 = XMM_MUL(xmm1, xmm0); /* mulps */
    xmm1 = XMM_ADD(xmm1, xmm3); /* addps */
    xmm3 = XMM_MEM(esp + 0xF0); /* movaps */
    XMM_STORE(esp, xmm1); /* movaps */
    xmm1 = XMM_SCALAR(MEMF(esp)); /* movss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    xmm1 = XMM_MEM(esp + 0x10); /* movaps */
    XMM_STORE(esp + 0x60, xmm1); /* movaps */
    xmm1 = XMM_MEM(esp + 0x50); /* movaps */
    xmm1 = XMM_MUL(xmm1, xmm0); /* mulps */
    xmm3 = XMM_MUL(xmm3, xmm2); /* mulps */
    xmm1 = XMM_ADD(xmm1, xmm3); /* addps */
    XMM_STORE(esp + 0x10, xmm1); /* movaps */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(esp); /* movaps */
    XMM_STORE(esp + 0x50, xmm0); /* movaps */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x60)); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x24); /* mulss */
    MEMF(eax) = xmm1.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x28); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x2C); /* mulss */
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm1.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x64)); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 0x30); /* mulss */
    MEMF(eax + 0x10) = xmm2.f[0]; /* movss */
    xmm2 = xmm0; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x38); /* mulss */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 0x34); /* mulss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x68)); /* movss */
    MEMF(eax + 0x14) = xmm2.f[0]; /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 0x3C); /* mulss */
    MEMF(eax + 0x20) = xmm2.f[0]; /* movss */
    xmm2 = xmm0; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x44); /* mulss */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 0x40); /* mulss */
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    MEMF(eax + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    MEMF(eax + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    MEMF(eax + 0x1C) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x24) = xmm2.f[0]; /* movss */
    MEMF(eax + 0x2C) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x38) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x3C) = xmm4.f[0]; /* movss */
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
 * sub_003F8D50
 * Original: 0x003F8D50 - 0x003F8EAB (347 bytes, 93 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003F8D50(void)
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

loc_003F8D50: ;
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
    esi = MEM32(ebp + 0xC);
    PUSH32(esp, edi);
    eax = esp + 0x40;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003F8D6Au); RECOMP_ABI_CALL(0x0059FAC6u, sub_0059FAC6); /* call 0x0059FAC6 */

loc_003F8D6A: ;
    edi = MEM32(ebp + 0x10);
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003F8D78u); RECOMP_ABI_CALL(0x0059FAC6u, sub_0059FAC6); /* call 0x0059FAC6 */

loc_003F8D78: ;
    eax = MEM32(ebp + 0x14);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x48;
    PUSH32(esp, ecx);
    edx = esp + 0x5C;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003F8D90u); RECOMP_ABI_CALL(0x005A16D1u, sub_005A16D1); /* call 0x005A16D1 */

loc_003F8D90: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp + 0x1C); /* divss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    ebx = MEM32(ebp + 8);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    eax = esp + 0x20;
    PUSH32(esp, ebx);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    PUSH32(esp, eax);
    MEMF(esp + 0x34) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003F8E3Fu); RECOMP_ABI_CALL(0x0059F7D7u, sub_0059F7D7); /* call 0x0059F7D7 */

loc_003F8E3F: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x14)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x30)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(edi + 0x30)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    MEMF(ebx + 0x30) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x34)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(edi + 0x34)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    MEMF(ebx + 0x34) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x38)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x38)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(ebx + 0x38) = xmm2.f[0]; /* movss */
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
 * sub_003F8F10
 * Original: 0x003F8F10 - 0x003F8F3C (44 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F8F10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F8F10: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    MEM32(esi) = 0x836FD0;
    PUSH32(esp, 0x003F8F22u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_003F8F22: ;
    SET_LO8(eax, MEM8(esp + 0xC));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003F8F36; /* je: equal / zero */

loc_003F8F2D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003F8F33u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_003F8F33: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003F8F36: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003F8F50
 * Original: 0x003F8F50 - 0x003F8F85 (53 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F8F50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F8F50: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    MEM32(esi) = 0x836FD4;
    PUSH32(esp, 0x003F8F62u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_003F8F62: ;
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003F8F6Bu); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_003F8F6B: ;
    SET_LO8(eax, MEM8(esp + 0x10));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003F8F7F; /* je: equal / zero */

loc_003F8F76: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003F8F7Cu); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_003F8F7C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003F8F7F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003F8FA0
 * Original: 0x003F8FA0 - 0x003F90FE (350 bytes, 122 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F8FA0(void)
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

loc_003F8FA0: ;
    edx = MEM32(ecx + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003F90F9; /* jle: less or equal (signed <=) */

loc_003F8FB1: ;
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    xmm4 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003F8FC1: ;
    eax = ebp + 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_003F902F; /* jge: greater or equal (signed >=) */

loc_003F8FCC: ;
    /* nop */

loc_003F8FD0: ;
    edx = MEM32(ecx + 0x10);
    edi = MEM32(ebx + edx);
    edx = MEM32(edx + eax * 4);
    esi = MEM32(ecx + 0xC);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0 = XMM_SCALAR(MEMF(esi + edx * 4)); /* movss */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ebp;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    xmm2 = XMM_SCALAR(MEMF(esi + edi * 4)); /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003F8FF4; /* jb: below (unsigned <) (xmm0.f[0] vs xmm3.f[0]) */

loc_003F8FEF: ;
    xmm1 = xmm0; /* movaps */
    goto loc_003F8FFB;

loc_003F8FF4: ;
    xmm1 = xmm3; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */

loc_003F8FFB: ;
    _fca = xmm2.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003F9005; /* jb: below (unsigned <) (xmm2.f[0] vs xmm3.f[0]) */

loc_003F9000: ;
    xmm0 = xmm2; /* movaps */
    goto loc_003F900C;

loc_003F9005: ;
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */

loc_003F900C: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003F9023; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_003F9011: ;
    edx = MEM32(ecx + 0x10);
    edi = MEM32(edx + eax * 4);
    esi = MEM32(ebx + edx);
    MEM32(ebx + edx) = edi;
    edx = MEM32(ecx + 0x10);
    MEM32(edx + eax * 4) = esi;

loc_003F9023: ;
    edx = MEM32(ecx + 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003F8FD0; /* jl: less (signed <) */

loc_003F902B: ;
    eax = MEM32(esp + 0x14);

loc_003F902F: ;
    edx = MEM32(ecx + 0x10);
    edx = MEM32(ebx + edx);
    esi = MEM32(ecx + 0xC);
    edi = edx + ebp;
    xmm1 = XMM_SCALAR(MEMF(esi + edi * 4)); /* movss */
    edi = MEM32(ecx + 8);
    edx = esi + edx * 4;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003F906A; /* jle: less or equal (signed <=) */

loc_003F904C: ;
    xmm0 = xmm4; /* movaps */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */

loc_003F9053: ;
    xmm1 = XMM_SCALAR(MEMF(edx)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(edx) = xmm1.f[0]; /* movss */
    edi = MEM32(ecx + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003F9053; /* jl: less (signed <) */

loc_003F906A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 4) (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_003F90E6; /* jge: greater or equal (signed >=) */

loc_003F9073: ;
    edi = MEM32(ecx + 8);
    goto loc_003F9080;

loc_003F9078: ;
    eax = MEM32(esp + 0x10);
    /* nop */

loc_003F9080: ;
    edx = MEM32(ecx + 0x10);
    edx = MEM32(edx + eax * 4);
    esi = MEM32(ecx + 0xC);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0 = XMM_SCALAR(MEMF(esi + edx * 4)); /* movss */
    edx = MEM32(ecx + 0x10);
    eax = MEM32(edx + eax * 4);
    edx = MEM32(ebx + edx);
    eax = esi + eax * 4;
    edx = esi + edx * 4;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003F90D2; /* jle: less or equal (signed <=) */

loc_003F90A5: ;
    goto loc_003F90B0;

    /* nop */
    edi = edi;

loc_003F90B0: ;
    xmm1 = XMM_SCALAR(MEMF(edx)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    MEMF(eax) = xmm2.f[0]; /* movss */
    edi = MEM32(ecx + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003F90B0; /* jl: less (signed <) */

loc_003F90D2: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(ecx + 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_003F9078; /* jl: less (signed <) */

loc_003F90E2: ;
    eax = MEM32(esp + 0x14);

loc_003F90E6: ;
    edx = MEM32(ecx + 4);
    ebp = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003F8FC1; /* jl: less (signed <) */

loc_003F90F6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_003F90F9: ;
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003F9160
 * Original: 0x003F9160 - 0x003F92E2 (386 bytes, 118 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F9160(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003F9160: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(ecx + 4);
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0xC) = ebx;
    if ((_fas < 0)) goto loc_003F92C9; /* js: sign (negative) */

loc_003F9172: ;
    PUSH32(esp, ebp);
    edx = ebx + 1;
    PUSH32(esp, esi);
    MEM32(esp + 0xC) = edx;
    PUSH32(esp, edi);
    /* nop */

loc_003F9180: ;
    eax = MEM32(ecx + 0x10);
    eax = MEM32(eax + ebx * 4);
    edi = MEM32(ecx + 8);
    esi = MEM32(ecx + 0xC);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0 = XMM_SCALAR(MEMF(esi + eax * 4 + -4)); /* movss */
    eax = MEM32(ecx + 4);
    esi = eax;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    MEM32(esp + 0x1C) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_003F9252; /* jl: less (signed <) */

loc_003F91A8: ;
    ebp = MEM32(ecx + 0x10);
    edx = MEM32(ecx + 0xC);
    esi = ebp + ebx * 4 + 0xC;
    ebx = MEM32(ebp + ebx * 4);
    ebp = MEM32(esp + 0x10);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ebp;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = edx + ebx * 4;
    MEM32(esp + 0x14) = ebp;
    ebp = MEM32(esp + 0x10);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp = ebp + eax * 4;
    ebx = edx + ebx * 4 + 8;
    MEM32(esp + 0x20) = ebp;
    /* nop */

loc_003F91E0: ;
    ebp = MEM32(esi + -8);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + edi;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm1 = XMM_SCALAR(MEMF(edx + ebp * 4 + -4)); /* movss */
    ebp = MEM32(esp + 0x14);
    xmm1.f[0] = xmm1.f[0] * MEMF(ebp); /* mulss */
    ebp = MEM32(esi + -4);
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + edi;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm1 = XMM_SCALAR(MEMF(edx + ebp * 4 + -4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ebx + -4); /* mulss */
    ebp = MEM32(esi);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + edi;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_SCALAR(MEMF(edx + ebp * 4 + -4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ebx); /* mulss */
    ebp = MEM32(esi + 4);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + edi;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_SCALAR(MEMF(edx + ebp * 4 + -4)); /* movss */
    ebp = MEM32(esp + 0x14);
    xmm1.f[0] = xmm1.f[0] * MEMF(ebx + 4); /* mulss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x10;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEM32(esp + 0x14) = ebp;
    if ((_fa != 0)) goto loc_003F91E0; /* jne: not equal / not zero */

loc_003F9246: ;
    eax = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x20);
    ebx = MEM32(esp + 0x18);

loc_003F9252: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003F92A3; /* jge: greater or equal (signed >=) */

loc_003F9256: ;
    esi = MEM32(ecx + 0x10);
    ebp = MEM32(ecx + 0xC);
    esi = esi + edx * 4;
    MEM32(esp + 0x20) = esi;
    esi = MEM32(ecx + 0x10);
    esi = MEM32(esi + ebx * 4);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(esp + 0x20);
    esi = ebp + esi * 4;
    MEM32(esp + 0x14) = eax;
    /* nop */

loc_003F9280: ;
    eax = MEM32(edx);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm1 = XMM_SCALAR(MEMF(ebp + eax * 4 + -4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esi); /* mulss */
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEM32(esp + 0x14) = eax;
    if ((_fa != 0)) goto loc_003F9280; /* jne: not equal / not zero */

loc_003F92A3: ;
    edx = MEM32(esp + 0x28);
    eax = MEM32(edx + 8);
    edx = MEM32(esp + 0x10);
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEMF(eax + ebx * 4 + 4) = xmm0.f[0]; /* movss */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(esp + 0x18) = ebx;
    MEM32(esp + 0x10) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_003F9180; /* jge: greater or equal (signed >=) */

loc_003F92C6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);

loc_003F92C9: ;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x837090);
    PUSH32(esp, 0x003F92D8u); RECOMP_ABI_CALL(0x0003434Du, sub_0003434D); /* call 0x0003434D */

loc_003F92D8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003F9350
 * Original: 0x003F9350 - 0x003F9367 (23 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F9350(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F9350: ;
    eax = ecx;
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM32(eax) = 0x837094;
    MEM8(eax + 0x14) = LO8(ecx);
    MEM8(eax + 0x20) = LO8(ecx);
    MEM8(eax + 0x2C) = LO8(ecx);
    MEM8(eax + 0x3C) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003F9370
 * Original: 0x003F9370 - 0x003F93A2 (50 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F9370(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F9370: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax) = 0x837094;
    MEM8(eax + 0x14) = LO8(ecx);
    MEM8(eax + 0x20) = LO8(ecx);
    MEM8(eax + 0x2C) = LO8(ecx);
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx + 0x30);
    MEM32(eax + 0x30) = edx;
    edx = MEM32(ecx + 0x34);
    MEM32(eax + 0x34) = edx;
    SET_LO8(ecx, MEM8(ecx + 0x3C));
    MEM8(eax + 0x3C) = LO8(ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003F93B0
 * Original: 0x003F93B0 - 0x003F93EB (59 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F93B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F93B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    MEM32(esi) = 0x837094;
    PUSH32(esp, 0x003F93C2u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_003F93C2: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003F93CBu); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_003F93CB: ;
    edx = MEM32(esi + 0x24);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003F93D4u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_003F93D4: ;
    eax = MEM32(esi + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003F93DDu); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_003F93DD: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003F93E6u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_003F93E6: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003F9400
 * Original: 0x003F9400 - 0x003F94E2 (226 bytes, 81 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003F9400(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F9400: ;
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
    esi = ecx;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, edi);
    MEM32(esp + 0x18) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003F941Au); RECOMP_ABI_CALL(0x0002ACBCu, sub_0002ACBC); /* call 0x0002ACBC */

loc_003F941A: ;
    ecx = MEM32(esi + 0x30);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_003F94D9; /* jbe: below or equal (unsigned <=) */

loc_003F942B: ;
    MEM32(esp + 0x10) = eax;
    goto loc_003F9435;

loc_003F9431: ;
    esi = MEM32(esp + 0x18);

loc_003F9435: ;
    eax = MEM32(esi + 8);
    esi = MEM32(esp + 0x10);
    ebx = MEM32(eax + esi + 4);
    edi = MEM32(eax + esi);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    MEM32(esp + 0x20) = eax;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(eax);
    esi = ebx;
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        esi = _sv << _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003F9464u); RECOMP_ABI_CALL(0x00031977u, sub_00031977); /* call 0x00031977 */

loc_003F9464: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax);
    xmm0 = XMM_MEM(esp + 0x2C); /* movaps */
    ecx = edi;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    xmm1 = XMM_MEM(eax + ecx); /* movaps */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    xmm1 = XMM_ADD(xmm1, xmm0); /* addps */
    XMM_STORE(eax, xmm1); /* movaps */
    if (CMP_EQ(_fa, _fb)) goto loc_003F94B6; /* je: equal / zero */

loc_003F9486: ;
    edx = MEM32(esp + 0x1C);
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, edx);
    edx = MEM32(eax);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003F949Du); RECOMP_ABI_CALL(0x00031977u, sub_00031977); /* call 0x00031977 */

loc_003F949D: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ecx);
    xmm0 = XMM_MEM(esp + 0x2C); /* movaps */
    xmm1 = XMM_MEM(eax + esi); /* movaps */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm1 = XMM_ADD(xmm1, xmm0); /* addps */
    XMM_STORE(eax, xmm1); /* movaps */

loc_003F94B6: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x38;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = edx;
    edx = MEM32(esp + 0x18);
    ecx = MEM32(edx + 0x30);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_B(_fa, _fb)) goto loc_003F9431; /* jb: below (unsigned <) */

loc_003F94D9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003F9520
 * Original: 0x003F9520 - 0x003F9723 (515 bytes, 170 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003F9520(void)
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

loc_003F9520: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0x18);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ebx = esi + 0x18;
    PUSH32(esp, ebx);
    ecx = esi;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEM32(eax) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003F954Fu); RECOMP_ABI_CALL(0x000210CCu, sub_000210CC); /* call 0x000210CC */

loc_003F954F: ;
    edi = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003F955Au); RECOMP_ABI_CALL(0x0003506Du, sub_0003506D); /* call 0x0003506D */

loc_003F955A: ;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003F9560u); RECOMP_ABI_CALL(0x00030C57u, sub_00030C57); /* call 0x00030C57 */

loc_003F9560: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = esi + 0x24;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003F956Fu); RECOMP_ABI_CALL(0x0001E9E4u, sub_0001E9E4); /* call 0x0001E9E4 */

loc_003F956F: ;
    fp_push(MEMF(0x7A9980)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / fp_st1()); /* fdiv st(1) */
    PUSH32(esp, ebx);
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003F9583u); RECOMP_ABI_CALL(0x00030C57u, sub_00030C57); /* call 0x00030C57 */

loc_003F9583: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x20)); /* fmul dword ptr [esp + 0x20] */
    edx = MEM32(ebp + 0x1C);
    eax = MEM32(ebp + 0x18);
    ecx = MEM32(ebp + 0x14);
    MEMF(edx) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003F971A; /* jge: greater or equal (signed >=) */

loc_003F959F: ;
    goto loc_003F95A4;

loc_003F95A1: ;
    eax = MEM32(ebp + 0x18);

loc_003F95A4: ;
    edx = MEM32(ebp + 0x1C);
    xmm0 = XMM_SCALAR(MEMF(edx)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ebp + 0x10); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003F971A; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ebp + 0x10)) */

loc_003F95B5: ;
    edx = MEM32(eax);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    MEM32(eax) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003F95C1u); RECOMP_ABI_CALL(0x0002A4B5u, sub_0002A4B5); /* call 0x0002A4B5 */

loc_003F95C1: ;
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(ebp + 0x18);
    ecx = MEM32(eax);
    xmm2 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003F95EA; /* jne: not equal / not zero */

loc_003F95D8: ;
    ecx = esi + 0xC;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003F95E2u); RECOMP_ABI_CALL(0x00025C71u, sub_00025C71); /* call 0x00025C71 */

loc_003F95E2: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_003F9676;

loc_003F95EA: ;
    ecx = MEM32(esi + 0x38);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp + 0x14); /* divss */
    MEM32(esp + 0x10) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_003F9676; /* jbe: below or equal (unsigned <=) */

loc_003F9600: ;
    xmm1.f[0] = xmm0.f[0]; /* movss */
    xmm1 = XMM_SHUFFLE(xmm1, xmm1, 0); /* shufps */
    goto loc_003F9610;

    /* nop */

loc_003F9610: ;
    edx = MEM32(esi + 0xC);
    xmm0 = XMM_MEM(eax + edx); /* movaps */
    ecx = eax + edx;
    edx = MEM32(edi);
    xmm3 = XMM_MEM(edx + eax); /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm0 = XMM_ADD(xmm0, xmm3); /* addps */
    XMM_STORE(esp + 0x20, xmm0); /* movaps */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(esp + 0x30); /* movaps */
    XMM_STORE(ecx, xmm0); /* movaps */
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esi + 0x38);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    MEM32(esp + 0x10) = ecx;
    if (CMP_B(_fa, _fb)) goto loc_003F9610; /* jb: below (unsigned <) */

loc_003F9676: ;
    eax = esi + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi;
    MEMF(esp + 0x1C) = xmm2.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003F9688u); RECOMP_ABI_CALL(0x000210CCu, sub_000210CC); /* call 0x000210CC */

loc_003F9688: ;
    eax = esi + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003F9692u); RECOMP_ABI_CALL(0x0002A4B5u, sub_0002A4B5); /* call 0x0002A4B5 */

loc_003F9692: ;
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x20) / fp_top()); /* fdivr dword ptr [esp + 0x20] */
    eax = MEM32(esi + 0x38);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_BE(_fa, _fb)) goto loc_003F96EF; /* jbe: below or equal (unsigned <=) */

loc_003F96A6: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm1 = XMM_SHUFFLE(xmm1, xmm1, 0); /* shufps */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003F96B2: ;
    ecx = MEM32(esi + 0xC);
    xmm0 = XMM_MEM(ecx + eax); /* movaps */
    ecx = MEM32(ebp + 0xC);
    ecx = MEM32(ecx);
    xmm2 = XMM_MEM(ecx + eax); /* movaps */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm2 = XMM_ADD(xmm2, xmm0); /* addps */
    XMM_STORE(ecx, xmm2); /* movaps */
    ecx = MEM32(edi);
    xmm0 = XMM_MEM(ecx + eax); /* movaps */
    ecx = MEM32(ebx);
    xmm2 = XMM_MEM(ecx + eax); /* movaps */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm2 = XMM_SUB(xmm2, xmm0); /* subps */
    XMM_STORE(ecx, xmm2); /* movaps */
    ecx = MEM32(esi + 0x38);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003F96B2; /* jb: below (unsigned <) */

loc_003F96EF: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003F96F8u); RECOMP_ABI_CALL(0x0001E9E4u, sub_0001E9E4); /* call 0x0001E9E4 */

loc_003F96F8: ;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003F96FEu); RECOMP_ABI_CALL(0x00030C57u, sub_00030C57); /* call 0x00030C57 */

loc_003F96FE: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x20)); /* fmul dword ptr [esp + 0x20] */
    edx = MEM32(ebp + 0x1C);
    ecx = MEM32(ebp + 0x18);
    eax = MEM32(ebp + 0x14);
    MEMF(edx) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003F95A1; /* jl: less (signed <) */

loc_003F971A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 28; return; /* ret 24 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003F97B0
 * Original: 0x003F97B0 - 0x003F99F5 (581 bytes, 187 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003F97B0(void)
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

loc_003F97B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0x18);
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(eax) = 0;
    eax = MEM32(esi + 0x38);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    if (CMP_BE(_fa, _fb)) goto loc_003F9827; /* jbe: below or equal (unsigned <=) */

loc_003F97D6: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_003F97E0;

    /* nop */

loc_003F97E0: ;
    eax = MEM32(edi);
    xmm0 = XMM_SCALAR(MEMF(eax + ecx)); /* movss */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    eax = MEM32(esi + 0x18);
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(esp + 0x20); /* movaps */
    XMM_STORE(eax + ecx, xmm0); /* movaps */
    eax = MEM32(esi + 0x38);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003F97E0; /* jb: below (unsigned <) */

loc_003F9827: ;
    ebx = esi + 0x18;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003F9831u); RECOMP_ABI_CALL(0x00025C71u, sub_00025C71); /* call 0x00025C71 */

loc_003F9831: ;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003F9837u); RECOMP_ABI_CALL(0x00030C57u, sub_00030C57); /* call 0x00030C57 */

loc_003F9837: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = esi + 0x24;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003F9846u); RECOMP_ABI_CALL(0x0001E9E4u, sub_0001E9E4); /* call 0x0001E9E4 */

loc_003F9846: ;
    fp_push(MEMF(0x7A9980)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / fp_st1()); /* fdiv st(1) */
    PUSH32(esp, ebx);
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003F985Au); RECOMP_ABI_CALL(0x00030C57u, sub_00030C57); /* call 0x00030C57 */

loc_003F985A: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x1C)); /* fmul dword ptr [esp + 0x1c] */
    ecx = MEM32(ebp + 0x1C);
    eax = MEM32(ebp + 0x18);
    edx = MEM32(ebp + 0x14);
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003F99EC; /* jge: greater or equal (signed >=) */

loc_003F9876: ;
    goto loc_003F9881;

loc_003F9878: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    eax = MEM32(ebp + 0x18);

loc_003F9881: ;
    ecx = MEM32(ebp + 0x1C);
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ebp + 0x10); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003F99EC; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ebp + 0x10)) */

loc_003F9892: ;
    ecx = MEM32(eax);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003F989Eu); RECOMP_ABI_CALL(0x0002A4B5u, sub_0002A4B5); /* call 0x0002A4B5 */

loc_003F989E: ;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(ebp + 0x18);
    eax = MEM32(edx);
    xmm2 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003F98C7; /* jne: not equal / not zero */

loc_003F98B5: ;
    eax = esi + 0xC;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003F98BFu); RECOMP_ABI_CALL(0x00025C71u, sub_00025C71); /* call 0x00025C71 */

loc_003F98BF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_003F9948;

loc_003F98C7: ;
    ecx = MEM32(esi + 0x38);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] / xmm3.f[0]; /* divss */
    MEM32(esp + 0x10) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_003F9948; /* jbe: below or equal (unsigned <=) */

loc_003F98DB: ;
    xmm1.f[0] = xmm0.f[0]; /* movss */
    xmm1 = XMM_SHUFFLE(xmm1, xmm1, 0); /* shufps */

loc_003F98E3: ;
    ecx = MEM32(esi + 0xC);
    xmm0 = XMM_MEM(ecx + eax); /* movaps */
    edx = MEM32(edi);
    xmm3 = XMM_MEM(edx + eax); /* movaps */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm0 = XMM_ADD(xmm0, xmm3); /* addps */
    XMM_STORE(esp + 0x20, xmm0); /* movaps */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(esp + 0x30); /* movaps */
    XMM_STORE(ecx, xmm0); /* movaps */
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esi + 0x38);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    MEM32(esp + 0x10) = ecx;
    if (CMP_B(_fa, _fb)) goto loc_003F98E3; /* jb: below (unsigned <) */

loc_003F9948: ;
    eax = esi + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi;
    MEMF(esp + 0x24) = xmm2.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003F995Au); RECOMP_ABI_CALL(0x000210CCu, sub_000210CC); /* call 0x000210CC */

loc_003F995A: ;
    eax = esi + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003F9964u); RECOMP_ABI_CALL(0x0002A4B5u, sub_0002A4B5); /* call 0x0002A4B5 */

loc_003F9964: ;
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x1C) / fp_top()); /* fdivr dword ptr [esp + 0x1c] */
    eax = MEM32(esi + 0x38);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_BE(_fa, _fb)) goto loc_003F99C1; /* jbe: below or equal (unsigned <=) */

loc_003F9978: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm1 = XMM_SHUFFLE(xmm1, xmm1, 0); /* shufps */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003F9984: ;
    ecx = MEM32(esi + 0xC);
    xmm0 = XMM_MEM(ecx + eax); /* movaps */
    ecx = MEM32(ebp + 0xC);
    ecx = MEM32(ecx);
    xmm2 = XMM_MEM(ecx + eax); /* movaps */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm2 = XMM_ADD(xmm2, xmm0); /* addps */
    XMM_STORE(ecx, xmm2); /* movaps */
    ecx = MEM32(edi);
    xmm0 = XMM_MEM(ecx + eax); /* movaps */
    ecx = MEM32(ebx);
    xmm2 = XMM_MEM(ecx + eax); /* movaps */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm2 = XMM_SUB(xmm2, xmm0); /* subps */
    XMM_STORE(ecx, xmm2); /* movaps */
    ecx = MEM32(esi + 0x38);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003F9984; /* jb: below (unsigned <) */

loc_003F99C1: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003F99CAu); RECOMP_ABI_CALL(0x0001E9E4u, sub_0001E9E4); /* call 0x0001E9E4 */

loc_003F99CA: ;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003F99D0u); RECOMP_ABI_CALL(0x00030C57u, sub_00030C57); /* call 0x00030C57 */

loc_003F99D0: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x1C)); /* fmul dword ptr [esp + 0x1c] */
    edx = MEM32(ebp + 0x1C);
    ecx = MEM32(ebp + 0x18);
    eax = MEM32(ebp + 0x14);
    MEMF(edx) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003F9878; /* jl: less (signed <) */

loc_003F99EC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 28; return; /* ret 24 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003F9A90
 * Original: 0x003F9A90 - 0x003F9AE3 (83 bytes, 38 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F9A90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F9A90: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(edi + 4) = ebx;
    MEM8(edi + 8) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_003F9AAE; /* je: equal / zero */

loc_003F9AA7: ;
    MEM32(edi) = eax;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_003F9AAE: ;
    eax = ebx;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003F9ABAu); RECOMP_ABI_CALL(0x0001C626u, sub_0001C626); /* call 0x0001C626 */

loc_003F9ABA: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003F9AD9; /* je: equal / zero */

loc_003F9AC3: ;
    PUSH32(esp, 0x2F424);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003F9AD1u); RECOMP_ABI_CALL(0x000199EEu, sub_000199EE); /* call 0x000199EE */

loc_003F9AD1: ;
    MEM32(edi) = esi;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_003F9AD9: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi) = esi;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003F9B00
 * Original: 0x003F9B00 - 0x003F9B50 (80 bytes, 28 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F9B00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F9B00: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    MEM32(esi) = 0x837094;
    PUSH32(esp, 0x003F9B12u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_003F9B12: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003F9B1Bu); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_003F9B1B: ;
    edx = MEM32(esi + 0x24);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003F9B24u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_003F9B24: ;
    eax = MEM32(esi + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003F9B2Du); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_003F9B2D: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003F9B36u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_003F9B36: ;
    SET_LO8(eax, MEM8(esp + 0x1C));
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003F9B4A; /* je: equal / zero */

loc_003F9B41: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003F9B47u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_003F9B47: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003F9B4A: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003F9B70
 * Original: 0x003F9B70 - 0x003F9C71 (257 bytes, 84 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F9B70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F9B70: ;
    eax = MEM32(esp + 4);
    edx = eax;
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0x10);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    SET_LO8(ebx, 1);
    PUSH32(esp, edx);
    MEM32(esi + 0x38) = eax;
    MEM32(esi + 0x34) = ecx;
    MEM8(esi + 0x3C) = LO8(ebx);
    PUSH32(esp, 0x003F9B95u); RECOMP_ABI_CALL(0x0001C626u, sub_0001C626); /* call 0x0001C626 */

loc_003F9B95: ;
    ecx = MEM32(esi + 0x38);
    edx = ecx;
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx);
    MEM32(esi + 4) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003F9BC7; /* jbe: below or equal (unsigned <=) */

loc_003F9BA9: ;
    /* nop */

loc_003F9BB0: ;
    ecx = MEM32(esi + 4);
    MEM32(ecx + eax * 4) = 0;
    ecx = MEM32(esi + 0x38);
    edx = ecx;
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003F9BB0; /* jb: below (unsigned <) */

loc_003F9BC7: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003F9C11; /* je: equal / zero */

loc_003F9BCF: ;
    MEM32(esi + 8) = eax;
    eax = MEM32(esi + 0x38);
    MEM8(esi + 0x14) = LO8(ebx);
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0xC) = 0x70001000;
    eax = MEM32(esi + 0x38);
    MEM8(esi + 0x20) = LO8(ebx);
    MEM32(esi + 0x1C) = eax;
    MEM32(esi + 0x18) = 0x70001030;
    eax = MEM32(esi + 0x38);
    MEM8(esi + 0x2C) = LO8(ebx);
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x24) = 0x70001060;
    MEM8(esi + 0x3C) = LO8(ebx);
    MEM32(esi + 0x30) = 0;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_003F9C11: ;
    eax = MEM32(esi + 0x34);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x38);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003F9C1Du); RECOMP_ABI_CALL(0x0001C626u, sub_0001C626); /* call 0x0001C626 */

loc_003F9C1D: ;
    MEM32(esi + 8) = eax;
    eax = MEM32(esi + 0x38);
    MEM32(esi + 0x10) = eax;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, eax);
    MEM8(esi + 0x14) = LO8(ebx);
    PUSH32(esp, 0x003F9C32u); RECOMP_ABI_CALL(0x0001C626u, sub_0001C626); /* call 0x0001C626 */

loc_003F9C32: ;
    MEM32(esi + 0xC) = eax;
    eax = MEM32(esi + 0x38);
    MEM32(esi + 0x1C) = eax;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, eax);
    MEM8(esi + 0x20) = LO8(ebx);
    PUSH32(esp, 0x003F9C47u); RECOMP_ABI_CALL(0x0001C626u, sub_0001C626); /* call 0x0001C626 */

loc_003F9C47: ;
    MEM32(esi + 0x18) = eax;
    eax = MEM32(esi + 0x38);
    MEM32(esi + 0x28) = eax;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, eax);
    MEM8(esi + 0x2C) = LO8(ebx);
    PUSH32(esp, 0x003F9C5Cu); RECOMP_ABI_CALL(0x0001C626u, sub_0001C626); /* call 0x0001C626 */

loc_003F9C5C: ;
    MEM32(esi + 0x24) = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esi + 0x3C) = LO8(ebx);
    MEM32(esi + 0x30) = 0;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003F9CC0
 * Original: 0x003F9CC0 - 0x003F9CE1 (33 bytes, 13 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F9CC0(void)
{

loc_003F9CC0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esi + 4) = eax;
    MEM8(esi + 8) = 0;
    PUSH32(esp, 0x003F9CDBu); RECOMP_ABI_CALL(0x00013B4Du, sub_00013B4D); /* call 0x00013B4D */

loc_003F9CDB: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003F9CF0
 * Original: 0x003F9CF0 - 0x003F9D26 (54 bytes, 20 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F9CF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F9CF0: ;
    edx = MEM32(esp + 8);
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM32(esi) = 0x837094;
    MEM8(esi + 0x14) = LO8(ecx);
    MEM8(esi + 0x20) = LO8(ecx);
    MEM8(esi + 0x2C) = LO8(ecx);
    MEM8(esi + 0x3C) = LO8(ecx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esi + 0x38) = eax;
    PUSH32(esp, 0x003F9D20u); RECOMP_ABI_CALL(0x0001828Du, sub_0001828D); /* call 0x0001828D */

loc_003F9D20: ;
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003F9D40
 * Original: 0x003F9D40 - 0x003F9D83 (67 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F9D40(void)
{

loc_003F9D40: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = MEM32(esp + 0x10);
    edi = MEM32(esp + 0x14);
    xmm0 = XMM_MEM(esi); /* movups */
    xmm1 = xmm0; /* movups */
    xmm2 = xmm0; /* movups */
    xmm4 = XMM_MEM(edi); /* movups */
    xmm5 = XMM_MEM(edi + 0x10); /* movups */
    xmm6 = XMM_MEM(edi + 0x20); /* movups */
    xmm0 = XMM_SHUFFLE(xmm0, xmm2, 0); /* shufps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm2, 0x55); /* shufps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm2, 0xAA); /* shufps */
    xmm0 = XMM_MUL(xmm0, xmm4); /* mulps */
    xmm1 = XMM_MUL(xmm1, xmm5); /* mulps */
    xmm2 = XMM_MUL(xmm2, xmm6); /* mulps */
    xmm0 = XMM_ADD(xmm0, xmm1); /* addps */
    xmm0 = XMM_ADD(xmm0, xmm2); /* addps */
    edi = MEM32(esp + 0xC);
    XMM_STORE(edi, xmm0); /* movups */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003F9DA0
 * Original: 0x003F9DA0 - 0x003F9DF4 (84 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F9DA0(void)
{

loc_003F9DA0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = MEM32(esp + 0x10);
    edi = MEM32(esp + 0x14);
    xmm0 = XMM_MEM(esi); /* movups */
    xmm1 = xmm0; /* movups */
    xmm2 = xmm0; /* movups */
    xmm3 = xmm0; /* movups */
    xmm4 = XMM_MEM(edi); /* movups */
    xmm5 = XMM_MEM(edi + 0x10); /* movups */
    xmm6 = XMM_MEM(edi + 0x20); /* movups */
    xmm7 = XMM_MEM(edi + 0x30); /* movups */
    xmm0 = XMM_SHUFFLE(xmm0, xmm2, 0); /* shufps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm2, 0x55); /* shufps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm2, 0xAA); /* shufps */
    xmm3 = XMM_SHUFFLE(xmm3, xmm3, 0xFF); /* shufps */
    xmm0 = XMM_MUL(xmm0, xmm4); /* mulps */
    xmm1 = XMM_MUL(xmm1, xmm5); /* mulps */
    xmm2 = XMM_MUL(xmm2, xmm6); /* mulps */
    xmm3 = XMM_MUL(xmm3, xmm7); /* mulps */
    xmm0 = XMM_ADD(xmm0, xmm1); /* addps */
    xmm0 = XMM_ADD(xmm0, xmm2); /* addps */
    xmm0 = XMM_ADD(xmm0, xmm3); /* addps */
    edi = MEM32(esp + 0xC);
    XMM_STORE(edi, xmm0); /* movups */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003F9E10
 * Original: 0x003F9E10 - 0x003F9EFB (235 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F9E10(void)
{

loc_003F9E10: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(esp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0xC); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 8); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 4); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax); /* mulss */
    edx = MEM32(esp + 4);
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(edx) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x1C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0xC); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x10)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x18)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 8); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x14)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 4); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(edx + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x2C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0xC); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x20)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x28)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 8); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x24)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 4); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(edx + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x3C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0xC); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x30)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x38)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 8); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x34)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 4); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(edx + 0xC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003F9F40
 * Original: 0x003F9F40 - 0x003FA0DB (411 bytes, 89 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F9F40(void)
{

loc_003F9F40: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    xmm0 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x10); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x20); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    edx = MEM32(esp + 4);
    MEMF(edx) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x14); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx + 8); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(edx + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x18); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x28)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx + 8); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(edx + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x18)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x20); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x14)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x10); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x10)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(edx + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x18)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x24); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x14)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x14); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x10)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 4); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(edx + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x18)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x28); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x14)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x18); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x10)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 8); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(edx + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x28)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x20); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x24)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x10); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(edx + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 0x28); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx + 0x24); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx + 0x20); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(edx + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x28)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx + 0x24); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 0x28); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx + 0x20); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(edx + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(edx + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(edx + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(edx + 0xC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003FA150
 * Original: 0x003FA150 - 0x003FA19D (77 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003FA150(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003FA150: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003FA17D; /* je: equal / zero */

loc_003FA168: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003FA17D; /* je: equal / zero */

loc_003FA16C: ;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003FA174u); RECOMP_ABI_CALL(0x0001453Eu, sub_0001453E); /* call 0x0001453E */

loc_003FA174: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_003FA17D: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003FA189u); RECOMP_ABI_CALL(0x0001453Eu, sub_0001453E); /* call 0x0001453E */

loc_003FA189: ;
    ecx = 0x10;
    esi = esp + 0x1C;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003FA1B0
 * Original: 0x003FA1B0 - 0x003FA1D3 (35 bytes, 7 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FA1B0(void)
{

loc_003FA1B0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(ecx + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003FA1E0
 * Original: 0x003FA1E0 - 0x003FA23D (93 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FA1E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003FA1E0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x14);
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp + 0x18); /* divss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    edx = MEM32(esp);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    eax = MEM32(esp + 0x10);
    ecx = eax;
    MEM32(ecx) = edx;
    edx = MEM32(esp + 4);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEM32(ecx + 4) = edx;
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 8);
    MEM32(ecx + 8) = edx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003FA260
 * Original: 0x003FA260 - 0x003FA285 (37 bytes, 8 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FA260(void)
{

loc_003FA260: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    eax = ecx;
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003FA290
 * Original: 0x003FA290 - 0x003FA2B1 (33 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FA290(void)
{

loc_003FA290: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    ecx = MEM32(ecx);
    MEM32(eax) = ecx;
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003FA2C0
 * Original: 0x003FA2C0 - 0x003FA2E1 (33 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FA2C0(void)
{

loc_003FA2C0: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    ecx = MEM32(ecx);
    MEM32(eax) = ecx;
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003FA2F0
 * Original: 0x003FA2F0 - 0x003FA318 (40 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FA2F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003FA2F0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(0x9092A0);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = esp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = eax;
    eax = MEM32(ecx);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003FA314u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x003FA312u); } /* indirect call */
    }

loc_003FA314: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003FA330
 * Original: 0x003FA330 - 0x003FA343 (19 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FA330(void)
{

loc_003FA330: ;
    ecx = MEM32(0x9092A0);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x003FA342u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003FA33Fu); } /* indirect call */
    }

loc_003FA342: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003FA350
 * Original: 0x003FA350 - 0x003FA378 (40 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FA350(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003FA350: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(0x9092A0);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = esp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = eax;
    eax = MEM32(ecx);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003FA374u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x003FA372u); } /* indirect call */
    }

loc_003FA374: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003FA390
 * Original: 0x003FA390 - 0x003FA3A3 (19 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FA390(void)
{

loc_003FA390: ;
    ecx = MEM32(0x9092A0);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x003FA3A2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003FA39Fu); } /* indirect call */
    }

loc_003FA3A2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003FA3B0
 * Original: 0x003FA3B0 - 0x003FA3D8 (40 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FA3B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003FA3B0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(0x9092A0);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = esp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = eax;
    eax = MEM32(ecx);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003FA3D4u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x003FA3D2u); } /* indirect call */
    }

loc_003FA3D4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003FA3F0
 * Original: 0x003FA3F0 - 0x003FA403 (19 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FA3F0(void)
{

loc_003FA3F0: ;
    ecx = MEM32(0x9092A0);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x003FA402u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003FA3FFu); } /* indirect call */
    }

loc_003FA402: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003FA410
 * Original: 0x003FA410 - 0x003FA41F (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FA410(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003FA410: ;
    eax = MEM32(ecx + 0x18);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xC0000000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esp += 4; return; /* ret */

}

/**
 * sub_003FA430
 * Original: 0x003FA430 - 0x003FA443 (19 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FA430(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003FA430: ;
    eax = (uint32_t)(int32_t)SMEM16(esp + 4);
    edx = MEM32(ecx + 0x1C);
    eax = eax + eax * 2;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003FA450
 * Original: 0x003FA450 - 0x003FA48F (63 bytes, 25 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FA450(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003FA450: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO16(eax, MEM16(esi + 0x26));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(MEM16(esi + 0x24)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), MEM16(esi + 0x24) (16-bit) */
    PUSH32(esp, edi);
    edi = ZX16(LO16(eax));
    if (CMP_AE(_fa, _fb)) goto loc_003FA488; /* jae: above or equal (unsigned >=) */

loc_003FA461: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x1C);
    eax = edi + edi * 2;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, edx);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x003FA481u); RECOMP_ABI_CALL(0x000323A4u, sub_000323A4); /* call 0x000323A4 */

loc_003FA481: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(esi + 0x26) = MEM16(esi + 0x26) + 1;
    _fa = (uint32_t)(MEM16(esi + 0x26)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */

loc_003FA488: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003FA4A0
 * Original: 0x003FA4A0 - 0x003FA4E1 (65 bytes, 26 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FA4A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003FA4A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO16(eax, MEM16(esi + 0x26));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(MEM16(esi + 0x24)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), MEM16(esi + 0x24) (16-bit) */
    PUSH32(esp, edi);
    edi = ZX16(LO16(eax));
    if (CMP_AE(_fa, _fb)) goto loc_003FA4DA; /* jae: above or equal (unsigned >=) */

loc_003FA4B1: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = edi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x3C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    _fb = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003FA4D3u); RECOMP_ABI_CALL(0x000113E3u, sub_000113E3); /* call 0x000113E3 */

loc_003FA4D3: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(esi + 0x26) = MEM16(esi + 0x26) + 1;
    _fa = (uint32_t)(MEM16(esi + 0x26)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */

loc_003FA4DA: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003FA500
 * Original: 0x003FA500 - 0x003FA8E4 (996 bytes, 287 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FA500(void)
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

loc_003FA500: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(0x7FE2BC)); /* movss */
    PUSH32(esp, ebp);
    ebp = ZX16(MEM16(esp + 0x34));
    PUSH32(esp, edi);
    xmm1 = xmm0; /* movaps */
    xmm5 = xmm0; /* movaps */
    xmm7 = xmm0; /* movaps */
    xmm0 = XMM_SCALAR(MEMF(0x7AA7EC)); /* movss */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    xmm2 = xmm0; /* movaps */
    xmm6 = xmm0; /* movaps */
    MEMF(esp + 0x10) = xmm2.f[0]; /* movss */
    if (CMP_BE(_fa, _fb)) goto loc_003FA763; /* jbe: below or equal (unsigned <=) */

loc_003FA539: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x38);
    PUSH32(esp, esi);
    /* nop */

loc_003FA540: ;
    eax = MEM32(ecx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = (uint32_t)(int32_t)SMEM16(ebx + edi * 2);
    if (CMP_NE(_fa, _fb)) goto loc_003FA607; /* jne: not equal / not zero */

loc_003FA54F: ;
    esi = MEM32(ecx + 0x1C);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = eax + eax * 2 + 3;
    _fca = xmm0.f[0]; _fcb = MEMF(esi + edx * 4); /* comiss */
    edx = esi + edx * 4;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FA566; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esi + edx * 4)) */

loc_003FA562: ;
    xmm0 = XMM_SCALAR(MEMF(edx)); /* movss */

loc_003FA566: ;
    _fca = xmm6.f[0]; _fcb = MEMF(edx + 4); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FA571; /* jbe: below or equal (unsigned <=) (xmm6.f[0] vs MEMF(edx + 4)) */

loc_003FA56C: ;
    xmm6 = XMM_SCALAR(MEMF(edx + 4)); /* movss */

loc_003FA571: ;
    _fca = xmm2.f[0]; _fcb = MEMF(edx + 8); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FA582; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs MEMF(edx + 8)) */

loc_003FA577: ;
    xmm2 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */

loc_003FA582: ;
    xmm3 = XMM_SCALAR(MEMF(edx)); /* movss */
    _fca = xmm3.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FA58E; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm1.f[0]) */

loc_003FA58B: ;
    xmm1 = xmm3; /* movaps */

loc_003FA58E: ;
    xmm3 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    _fca = xmm3.f[0]; _fcb = xmm5.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FA59B; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm5.f[0]) */

loc_003FA598: ;
    xmm5 = xmm3; /* movaps */

loc_003FA59B: ;
    xmm3 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    _fca = xmm3.f[0]; _fcb = xmm7.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FA5A8; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm7.f[0]) */

loc_003FA5A5: ;
    xmm7 = xmm3; /* movaps */

loc_003FA5A8: ;
    edx = eax + eax * 2 + 6;
    _fca = xmm0.f[0]; _fcb = MEMF(esi + edx * 4); /* comiss */
    edx = esi + edx * 4;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FA5B9; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esi + edx * 4)) */

loc_003FA5B5: ;
    xmm0 = XMM_SCALAR(MEMF(edx)); /* movss */

loc_003FA5B9: ;
    _fca = xmm6.f[0]; _fcb = MEMF(edx + 4); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FA5C4; /* jbe: below or equal (unsigned <=) (xmm6.f[0] vs MEMF(edx + 4)) */

loc_003FA5BF: ;
    xmm6 = XMM_SCALAR(MEMF(edx + 4)); /* movss */

loc_003FA5C4: ;
    _fca = xmm2.f[0]; _fcb = MEMF(edx + 8); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FA5D5; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs MEMF(edx + 8)) */

loc_003FA5CA: ;
    xmm2 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */

loc_003FA5D5: ;
    xmm3 = XMM_SCALAR(MEMF(edx)); /* movss */
    _fca = xmm3.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FA5E1; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm1.f[0]) */

loc_003FA5DE: ;
    xmm1 = xmm3; /* movaps */

loc_003FA5E1: ;
    xmm3 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    _fca = xmm3.f[0]; _fcb = xmm5.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FA5EE; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm5.f[0]) */

loc_003FA5EB: ;
    xmm5 = xmm3; /* movaps */

loc_003FA5EE: ;
    xmm3 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    _fca = xmm3.f[0]; _fcb = xmm7.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FA5FB; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm7.f[0]) */

loc_003FA5F8: ;
    xmm7 = xmm3; /* movaps */

loc_003FA5FB: ;
    eax = eax + eax * 2 + 9;
    eax = esi + eax * 4;
    goto loc_003FA70D;

loc_003FA607: ;
    esi = MEM32(ecx + 0x20);
    edx = eax + eax * 4;
    eax = edx + edx * 2 + 3;
    _fca = xmm0.f[0]; _fcb = MEMF(esi + eax * 4); /* comiss */
    eax = esi + eax * 4;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FA61E; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esi + eax * 4)) */

loc_003FA61A: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */

loc_003FA61E: ;
    _fca = xmm6.f[0]; _fcb = MEMF(eax + 4); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FA629; /* jbe: below or equal (unsigned <=) (xmm6.f[0] vs MEMF(eax + 4)) */

loc_003FA624: ;
    xmm6 = XMM_SCALAR(MEMF(eax + 4)); /* movss */

loc_003FA629: ;
    _fca = xmm2.f[0]; _fcb = MEMF(eax + 8); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FA63A; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs MEMF(eax + 8)) */

loc_003FA62F: ;
    xmm2 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */

loc_003FA63A: ;
    xmm3 = XMM_SCALAR(MEMF(eax)); /* movss */
    _fca = xmm3.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FA646; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm1.f[0]) */

loc_003FA643: ;
    xmm1 = xmm3; /* movaps */

loc_003FA646: ;
    xmm3 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    _fca = xmm3.f[0]; _fcb = xmm5.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FA653; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm5.f[0]) */

loc_003FA650: ;
    xmm5 = xmm3; /* movaps */

loc_003FA653: ;
    xmm3 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    _fca = xmm3.f[0]; _fcb = xmm7.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FA660; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm7.f[0]) */

loc_003FA65D: ;
    xmm7 = xmm3; /* movaps */

loc_003FA660: ;
    eax = edx + edx * 2 + 6;
    _fca = xmm0.f[0]; _fcb = MEMF(esi + eax * 4); /* comiss */
    eax = esi + eax * 4;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FA671; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esi + eax * 4)) */

loc_003FA66D: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */

loc_003FA671: ;
    _fca = xmm6.f[0]; _fcb = MEMF(eax + 4); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FA67C; /* jbe: below or equal (unsigned <=) (xmm6.f[0] vs MEMF(eax + 4)) */

loc_003FA677: ;
    xmm6 = XMM_SCALAR(MEMF(eax + 4)); /* movss */

loc_003FA67C: ;
    _fca = xmm2.f[0]; _fcb = MEMF(eax + 8); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FA68D; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs MEMF(eax + 8)) */

loc_003FA682: ;
    xmm2 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */

loc_003FA68D: ;
    xmm3 = XMM_SCALAR(MEMF(eax)); /* movss */
    _fca = xmm3.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FA699; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm1.f[0]) */

loc_003FA696: ;
    xmm1 = xmm3; /* movaps */

loc_003FA699: ;
    xmm3 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    _fca = xmm3.f[0]; _fcb = xmm5.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FA6A6; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm5.f[0]) */

loc_003FA6A3: ;
    xmm5 = xmm3; /* movaps */

loc_003FA6A6: ;
    xmm3 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    _fca = xmm3.f[0]; _fcb = xmm7.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FA6B3; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm7.f[0]) */

loc_003FA6B0: ;
    xmm7 = xmm3; /* movaps */

loc_003FA6B3: ;
    eax = edx + edx * 2 + 9;
    _fca = xmm0.f[0]; _fcb = MEMF(esi + eax * 4); /* comiss */
    eax = esi + eax * 4;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FA6C4; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esi + eax * 4)) */

loc_003FA6C0: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */

loc_003FA6C4: ;
    _fca = xmm6.f[0]; _fcb = MEMF(eax + 4); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FA6CF; /* jbe: below or equal (unsigned <=) (xmm6.f[0] vs MEMF(eax + 4)) */

loc_003FA6CA: ;
    xmm6 = XMM_SCALAR(MEMF(eax + 4)); /* movss */

loc_003FA6CF: ;
    _fca = xmm2.f[0]; _fcb = MEMF(eax + 8); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FA6E0; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs MEMF(eax + 8)) */

loc_003FA6D5: ;
    xmm2 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */

loc_003FA6E0: ;
    xmm3 = XMM_SCALAR(MEMF(eax)); /* movss */
    _fca = xmm3.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FA6EC; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm1.f[0]) */

loc_003FA6E9: ;
    xmm1 = xmm3; /* movaps */

loc_003FA6EC: ;
    xmm3 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    _fca = xmm3.f[0]; _fcb = xmm5.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FA6F9; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm5.f[0]) */

loc_003FA6F6: ;
    xmm5 = xmm3; /* movaps */

loc_003FA6F9: ;
    xmm3 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    _fca = xmm3.f[0]; _fcb = xmm7.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FA706; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm7.f[0]) */

loc_003FA703: ;
    xmm7 = xmm3; /* movaps */

loc_003FA706: ;
    edx = edx + edx * 2 + 0xC;
    eax = esi + edx * 4;

loc_003FA70D: ;
    _fca = xmm0.f[0]; _fcb = MEMF(eax); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FA716; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax)) */

loc_003FA712: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */

loc_003FA716: ;
    _fca = xmm6.f[0]; _fcb = MEMF(eax + 4); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FA721; /* jbe: below or equal (unsigned <=) (xmm6.f[0] vs MEMF(eax + 4)) */

loc_003FA71C: ;
    xmm6 = XMM_SCALAR(MEMF(eax + 4)); /* movss */

loc_003FA721: ;
    _fca = xmm2.f[0]; _fcb = MEMF(eax + 8); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FA732; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs MEMF(eax + 8)) */

loc_003FA727: ;
    xmm2 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */

loc_003FA732: ;
    xmm3 = XMM_SCALAR(MEMF(eax)); /* movss */
    _fca = xmm3.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FA73E; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm1.f[0]) */

loc_003FA73B: ;
    xmm1 = xmm3; /* movaps */

loc_003FA73E: ;
    xmm3 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    _fca = xmm3.f[0]; _fcb = xmm5.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FA74B; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm5.f[0]) */

loc_003FA748: ;
    xmm5 = xmm3; /* movaps */

loc_003FA74B: ;
    xmm3 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    _fca = xmm3.f[0]; _fcb = xmm7.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FA758; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm7.f[0]) */

loc_003FA755: ;
    xmm7 = xmm3; /* movaps */

loc_003FA758: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003FA540; /* jb: below (unsigned <) */

loc_003FA761: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_003FA763: ;
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    MEMF(esp + 0x14) = xmm3.f[0]; /* movss */
    eax = MEM32(esp + 0x14);
    xmm3 = xmm5; /* movaps */
    xmm3.f[0] = xmm3.f[0] + xmm6.f[0]; /* addss */
    MEMF(esp + 0x18) = xmm3.f[0]; /* movss */
    ecx = MEM32(esp + 0x18);
    xmm3 = xmm7; /* movaps */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(0x7AA820)); /* movss */
    MEMF(esp + 0x1C) = xmm3.f[0]; /* movss */
    edx = MEM32(esp + 0x1C);
    MEM32(esp + 0x20) = eax;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    eax = MEM32(esp + 0x30);
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esp + 0x14) = xmm3.f[0]; /* movss */
    MEM32(esp + 0x24) = ecx;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    MEM32(esp + 0x28) = edx;
    edx = MEM32(esp + 0x14);
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esp + 0x18) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    ecx = eax;
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x18);
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    MEM32(ecx + 4) = edx;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esp + 0x1C) = xmm3.f[0]; /* movss */
    edx = MEM32(esp + 0x1C);
    POP32(esp, edi);
    MEM32(ecx + 8) = edx;
    POP32(esp, ebp);
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FA807; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_003FA802: ;
    xmm3 = xmm1; /* movaps */
    goto loc_003FA80E;

loc_003FA807: ;
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm1.f[0]; /* subss */

loc_003FA80E: ;
    xmm4 = XMM_SCALAR(MEMF(0x7AD340)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    _fca = xmm3.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FA83A; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm4.f[0]) */

loc_003FA81F: ;
    xmm3 = xmm1; /* movaps */
    _fca = xmm3.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FA82D; /* jb: below (unsigned <) (xmm3.f[0] vs xmm0.f[0]) */

loc_003FA827: ;
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    goto loc_003FA83D;

loc_003FA82D: ;
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm3.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    goto loc_003FA83D;

loc_003FA83A: ;
    xmm1 = xmm4; /* movaps */

loc_003FA83D: ;
    xmm5.f[0] = xmm5.f[0] - xmm6.f[0]; /* subss */
    xmm3 = xmm5; /* movaps */
    _fca = xmm3.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(eax + 0xC) = xmm1.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FA853; /* jb: below (unsigned <) (xmm3.f[0] vs xmm0.f[0]) */

loc_003FA84E: ;
    xmm1 = xmm3; /* movaps */
    goto loc_003FA85A;

loc_003FA853: ;
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm3.f[0]; /* subss */

loc_003FA85A: ;
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    _fca = xmm1.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FA87E; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm4.f[0]) */

loc_003FA863: ;
    _fca = xmm3.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FA871; /* jb: below (unsigned <) (xmm3.f[0] vs xmm0.f[0]) */

loc_003FA868: ;
    xmm1 = xmm3; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    goto loc_003FA881;

loc_003FA871: ;
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm3.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    goto loc_003FA881;

loc_003FA87E: ;
    xmm1 = xmm4; /* movaps */

loc_003FA881: ;
    xmm7.f[0] = xmm7.f[0] - MEMF(esp + 8); /* subss */
    xmm3 = xmm7; /* movaps */
    _fca = xmm3.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(eax + 0x10) = xmm1.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FA899; /* jb: below (unsigned <) (xmm3.f[0] vs xmm0.f[0]) */

loc_003FA894: ;
    xmm1 = xmm3; /* movaps */
    goto loc_003FA8A0;

loc_003FA899: ;
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm3.f[0]; /* subss */

loc_003FA8A0: ;
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    _fca = xmm1.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FA8D6; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm4.f[0]) */

loc_003FA8A9: ;
    xmm1 = xmm3; /* movaps */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FA8C3; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_003FA8B1: ;
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_003FA8C3: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_003FA8D6: ;
    xmm0 = xmm4; /* movaps */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003FA9E0
 * Original: 0x003FA9E0 - 0x003FAA17 (55 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FA9E0(void)
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

loc_003FA9E0: ;
    PUSH32(esp, ecx);
    eax = MEM32(ecx + 0x18);
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FAA00; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_003FA9F8: ;
    xmm0 = xmm1; /* movaps */
    MEMF(esp) = xmm0.f[0]; /* movss */

loc_003FAA00: ;
    xmm1 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FAA12; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_003FAA0A: ;
    xmm0 = xmm1; /* movaps */
    MEMF(esp) = xmm0.f[0]; /* movss */

loc_003FAA12: ;
    fp_push(MEMF(esp)); /* fld float */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003FAA30
 * Original: 0x003FAA30 - 0x003FAAB8 (136 bytes, 40 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FAA30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_003FAA30: ;
    edx = MEM32(esp + 4);
    xmm1 = XMM_SCALAR(MEMF(edx + 0x20)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ecx); /* subss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FAA4C; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_003FAA47: ;
    xmm2 = xmm1; /* movaps */
    goto loc_003FAA53;

loc_003FAA4C: ;
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */

loc_003FAA53: ;
    xmm1 = XMM_SCALAR(MEMF(edx + 0x30)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(ecx + 0xC); /* addss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FAAB5; /* jb: below (unsigned <) (xmm1.f[0] vs xmm2.f[0]) */

loc_003FAA62: ;
    xmm1 = XMM_SCALAR(MEMF(edx + 0x24)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ecx + 4); /* subss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FAA76; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_003FAA71: ;
    xmm2 = xmm1; /* movaps */
    goto loc_003FAA7D;

loc_003FAA76: ;
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */

loc_003FAA7D: ;
    xmm1 = XMM_SCALAR(MEMF(edx + 0x34)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(ecx + 0x10); /* addss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FAAB5; /* jb: below (unsigned <) (xmm1.f[0] vs xmm2.f[0]) */

loc_003FAA8C: ;
    xmm1 = XMM_SCALAR(MEMF(edx + 0x28)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ecx + 8); /* subss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FAAA0; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_003FAA9B: ;
    xmm0 = xmm1; /* movaps */
    goto loc_003FAAA4;

loc_003FAAA0: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */

loc_003FAAA4: ;
    xmm1 = XMM_SCALAR(MEMF(edx + 0x38)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(ecx + 0x14); /* addss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FAAB5; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_003FAAB3: ;
    SET_LO8(eax, 1);

loc_003FAAB5: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003FAAE0
 * Original: 0x003FAAE0 - 0x003FABF4 (276 bytes, 71 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FAAE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_003FAAE0: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x20);
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax); /* subss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp) = xmm0.f[0]; /* movss */
    edx = MEM32(esp);
    xmm0 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 4); /* subss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 8); /* subss */
    MEM32(esp + 0xC) = edx;
    edx = MEM32(esp + 4);
    xmm3 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm3.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x10) = edx;
    edx = MEM32(esp + 8);
    MEM32(esp + 0x14) = edx;
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FAB3E; /* jb: below (unsigned <) (xmm3.f[0] vs xmm1.f[0]) */

loc_003FAB39: ;
    xmm0 = xmm3; /* movaps */
    goto loc_003FAB45;

loc_003FAB3E: ;
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */

loc_003FAB45: ;
    xmm2 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */
    xmm2.f[0] = xmm2.f[0] + MEMF(ecx + 0xC); /* addss */
    xmm4 = XMM_SCALAR(MEMF(0x7AD340)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_003FABE4; /* ja: above (unsigned >) (xmm0.f[0] vs xmm4.f[0]) */

loc_003FAB64: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FAB74; /* jb: below (unsigned <) (xmm2.f[0] vs xmm1.f[0]) */

loc_003FAB6F: ;
    xmm0 = xmm2; /* movaps */
    goto loc_003FAB7B;

loc_003FAB74: ;
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */

loc_003FAB7B: ;
    xmm5 = XMM_SCALAR(MEMF(eax + 0x2C)); /* movss */
    xmm5.f[0] = xmm5.f[0] + MEMF(ecx + 0x14); /* addss */
    xmm0.f[0] = xmm0.f[0] - xmm5.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_003FABE4; /* ja: above (unsigned >) (xmm0.f[0] vs xmm4.f[0]) */

loc_003FAB8E: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FABEC; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_003FAB98: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca >= _fcb)) goto loc_003FABBA; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm1.f[0]) */

loc_003FABB3: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm0 = xmm1; /* movaps */

loc_003FABBA: ;
    xmm1 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx + 0xC); /* mulss */
    xmm2.f[0] = xmm2.f[0] * MEMF(ecx + 0x14); /* mulss */
    eax = MEM32(esp + 0x1C);
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + 0x18); /* addss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FABEC; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm4.f[0]) */

loc_003FABE4: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_003FABEC: ;
    SET_LO8(eax, 1);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003FAC40
 * Original: 0x003FAC40 - 0x003FAC57 (23 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FAC40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003FAC40: ;
    eax = MEM32(ecx);
    edx = MEM32(ecx + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    SET_LO16(esi, MEM16(esi));
    MEM16(edx + eax * 2) = LO16(esi);
    MEM32(ecx) = MEM32(ecx) + 1;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003FAC60
 * Original: 0x003FAC60 - 0x003FAC6D (13 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FAC60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003FAC60: ;
    eax = MEM32(ecx);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx) = eax;
    ecx = MEM32(ecx + 8);
    SET_LO16(eax, MEM16(ecx + eax * 2));
    esp += 4; return; /* ret */

}

/**
 * sub_003FAC70
 * Original: 0x003FAC70 - 0x003FAC7A (10 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FAC70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003FAC70: ;
    edx = MEM32(ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

}

/**
 * sub_003FAC80
 * Original: 0x003FAC80 - 0x003FAC87 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FAC80(void)
{

loc_003FAC80: ;
    MEM32(ecx) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_003FAC90
 * Original: 0x003FAC90 - 0x003FACA0 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FAC90(void)
{

loc_003FAC90: ;
    eax = ecx;
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_003FACB0
 * Original: 0x003FACB0 - 0x003FAD11 (97 bytes, 40 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FACB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003FACB0: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esi + 4) = eax;
    ecx = MEM32(0x9092A0);
    if (CMP_EQ(_fa, _fb)) goto loc_003FACFC; /* je: equal / zero */

loc_003FACCA: ;
    MEM32(esp + 8) = edi;
    MEM32(esp + 0xC) = edi;
    MEM32(esp + 0x10) = edi;
    edx = MEM32(ecx);
    edi = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x003FACE2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003FACE0u); } /* indirect call */
    }

loc_003FACE2: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, eax);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003FACEEu); RECOMP_ABI_CALL(0x00025DA7u, sub_00025DA7); /* call 0x00025DA7 */

loc_003FACEE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi + 8) = eax;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_003FACFC: ;
    eax = MEM32(esi + 8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x003FAD06u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003FAD03u); } /* indirect call */
    }

loc_003FAD06: ;
    MEM32(esi + 8) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003FAD30
 * Original: 0x003FAD30 - 0x003FAE6D (317 bytes, 99 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FAD30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003FAD30: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO16(ecx, MEM16(esp + 0x20));
    MEM32(esi + 0x14) = eax;
    SET_LO16(eax, MEM16(esp + 0x1C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    PUSH32(esp, edi);
    MEM32(esi + 4) = 8;
    MEM32(esi + 8) = ebx;
    MEM32(esi + 0xC) = 1;
    MEM8(esi + 0x10) = LO8(ebx);
    MEM8(esi + 0x11) = LO8(ebx);
    MEM32(esi) = 0x8370A8;
    MEM32(esi + 0x18) = ebx;
    MEM32(esi + 0x1C) = ebx;
    MEM32(esi + 0x20) = ebx;
    MEM16(esi + 0x24) = LO16(ebx);
    MEM16(esi + 0x26) = LO16(ebx);
    MEM16(esi + 0x28) = LO16(ebx);
    MEM16(esi + 0x2A) = LO16(ecx);
    MEM16(esi + 0x2C) = LO16(ebx);
    eax = SX16(LO16(eax));
    if (TEST_Z(_fa, _fb)) goto loc_003FAD8D; /* je: equal / zero */

loc_003FAD8C: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003FAD8D: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), LO16(ebx) (16-bit) */
    MEM16(esi + 0x24) = LO16(eax);
    if (CMP_NE(_fa, _fb)) goto loc_003FAD9E; /* jne: not equal / not zero */

loc_003FAD96: ;
    ecx = eax + eax + -1;
    MEM16(esi + 0x2A) = LO16(ecx);

loc_003FAD9E: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x2A);
    ecx = MEM32(0x9092A0);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    edi = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = ebx;
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x18) = ebx;
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x003FADC1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003FADBFu); } /* indirect call */
    }

loc_003FADC1: ;
    MEM32(esi + 0x18) = eax;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003FADF6; /* jne: not equal / not zero */

loc_003FADCB: ;
    eax = ZX16(MEM16(esi + 0x24));
    ecx = MEM32(0x9092A0);
    eax = eax + eax * 2;
    edi = esp + 0xC;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = ebx;
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x18) = ebx;
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x003FADF1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003FADEFu); } /* indirect call */
    }

loc_003FADF1: ;
    MEM32(esi + 0x1C) = eax;
    goto loc_003FAE21;

loc_003FADF6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003FAE21; /* jne: not equal / not zero */

loc_003FADFB: ;
    eax = ZX16(MEM16(esi + 0x24));
    ecx = MEM32(0x9092A0);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3C);
    edi = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = ebx;
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x18) = ebx;
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x003FAE1Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003FAE1Cu); } /* indirect call */
    }

loc_003FAE1E: ;
    MEM32(esi + 0x20) = eax;

loc_003FAE21: ;
    ecx = MEM32(0x9092A0);
    edx = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEM32(0x9092A8) = 0x64;
    MEM32(esp + 0x10) = ebx;
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x18) = ebx;
    eax = MEM32(ecx);
    PUSH32(esp, 0xC8);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003FAE4Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003FAE49u); } /* indirect call */
    }

loc_003FAE4B: ;
    PUSH32(esp, eax);
    eax = MEM32(0x9092A8);
    ecx = eax + eax;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003FAE5Au); RECOMP_ABI_CALL(0x00025DA7u, sub_00025DA7); /* call 0x00025DA7 */

loc_003FAE5A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(0x9092AC) = eax;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003FAEC0
 * Original: 0x003FAEC0 - 0x003FAF2C (108 bytes, 32 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FAEC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003FAEC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x8370A8;
    ecx = MEM32(0x9092A0);
    edx = MEM32(0x9092AC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    MEM32(0x9092A8) = 0;
    eax = MEM32(ecx);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x003FAEE7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003FAEE4u); } /* indirect call */
    }

loc_003FAEE7: ;
    ecx = MEM32(0x9092A0);
    MEM32(0x9092AC) = 0;
    edx = MEM32(esi + 0x1C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x003FAF02u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003FAEFFu); } /* indirect call */
    }

loc_003FAF02: ;
    ecx = MEM32(0x9092A0);
    edx = MEM32(esi + 0x20);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x003FAF13u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003FAF10u); } /* indirect call */
    }

loc_003FAF13: ;
    ecx = MEM32(0x9092A0);
    edx = MEM32(esi + 0x18);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x003FAF24u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003FAF21u); } /* indirect call */
    }

loc_003FAF24: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0002E1C8(); return; /* tail jmp 0x0002E1C8 */

}

/**
 * sub_003FAF50
 * Original: 0x003FAF50 - 0x003FB80A (2234 bytes, 563 insns)
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FAF50(void)
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

loc_003FAF50: ;
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ZX16(MEM16(esp + 0x68));
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax + eax;
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 0x1C) = esi;
    PUSH32(esp, 0x003FAF6Bu); RECOMP_ABI_CALL(0x0001C626u, sub_0001C626); /* call 0x0001C626 */

loc_003FAF6B: ;
    ecx = MEM32(esp + 0x68);
    PUSH32(esp, edi);
    MEM32(ecx) = eax;
    PUSH32(esp, 0x003FAF77u); RECOMP_ABI_CALL(0x0001C626u, sub_0001C626); /* call 0x0001C626 */

loc_003FAF77: ;
    edx = MEM32(esp + 0x74);
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEM32(edx) = eax;
    eax = MEM32(esp + 0x68);
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    edx = 2;
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ebx = 1;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x58) = xmm1.f[0]; /* movss */
    MEM32(esp + 0x14) = ebx;
    ecx = esp + 0x28;
    MEM32(esp + 0x60) = edx;
    eax = esp + 0x4C;
    MEM32(esp + 0x10) = edx;
    goto loc_003FB010;

    /* nop */
    /* nop */

loc_003FB010: ;
    _fa = (uint32_t)(MEM32(esp + 0x60)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x60), 4 (32-bit) */
    edi = ebx;
    if (CMP_L(_fas, _fbs)) goto loc_003FB1CA; /* jl: less (signed <) */

loc_003FB01D: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FB086; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx)) */

loc_003FB027: ;
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + -4)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    edx = eax + -20;
    edi = edx;
    ebp = MEM32(edi);
    MEM32(esp + 0x1C) = ebp;
    ebp = MEM32(edi + 4);
    edi = MEM32(edi + 8);
    MEM32(esp + 0x24) = edi;
    edi = MEM32(eax + -8);
    MEMF(eax + -12) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    MEM32(edx) = edi;
    edx = MEM32(ecx + 4);
    MEMF(eax + -16) = xmm2.f[0]; /* movss */
    MEMF(eax + -8) = xmm1.f[0]; /* movss */
    MEM32(esp + 0x20) = ebp;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    MEMF(eax + -4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    MEM32(ecx) = edx;
    MEMF(eax) = xmm1.f[0]; /* movss */
    MEMF(ecx + 4) = xmm0.f[0]; /* movss */

loc_003FB086: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FB0F1; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx)) */

loc_003FB090: ;
    xmm1 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    edx = eax + -20;
    edi = edx;
    ebp = MEM32(edi);
    MEM32(esp + 0x1C) = ebp;
    ebp = MEM32(edi + 4);
    edi = MEM32(edi + 8);
    MEM32(esp + 0x24) = edi;
    edi = MEM32(eax + 4);
    MEMF(eax + -12) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    MEM32(edx) = edi;
    edx = MEM32(ecx + 8);
    MEMF(eax + -16) = xmm2.f[0]; /* movss */
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    MEM32(esp + 0x20) = ebp;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    MEMF(eax + 8) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    MEM32(ecx) = edx;
    MEMF(eax + 0xC) = xmm1.f[0]; /* movss */
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */

loc_003FB0F1: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FB15C; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx)) */

loc_003FB0FB: ;
    xmm1 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    edx = eax + -20;
    edi = edx;
    ebp = MEM32(edi);
    MEM32(esp + 0x1C) = ebp;
    ebp = MEM32(edi + 4);
    edi = MEM32(edi + 8);
    MEM32(esp + 0x24) = edi;
    edi = MEM32(eax + 0x10);
    MEMF(eax + -12) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    MEM32(edx) = edi;
    edx = MEM32(ecx + 0xC);
    MEMF(eax + -16) = xmm2.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm1.f[0]; /* movss */
    MEM32(esp + 0x20) = ebp;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    MEMF(eax + 0x14) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    MEM32(ecx) = edx;
    MEMF(eax + 0x18) = xmm1.f[0]; /* movss */
    MEMF(ecx + 0xC) = xmm0.f[0]; /* movss */

loc_003FB15C: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x10)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FB1C7; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx)) */

loc_003FB166: ;
    xmm1 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    edx = eax + -20;
    edi = edx;
    ebp = MEM32(edi);
    MEM32(esp + 0x1C) = ebp;
    ebp = MEM32(edi + 4);
    edi = MEM32(edi + 8);
    MEM32(esp + 0x24) = edi;
    edi = MEM32(eax + 0x1C);
    MEMF(eax + -12) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    MEM32(edx) = edi;
    edx = MEM32(ecx + 0x10);
    MEMF(eax + -16) = xmm2.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm1.f[0]; /* movss */
    MEM32(esp + 0x20) = ebp;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    MEMF(eax + 0x20) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    MEM32(ecx) = edx;
    MEMF(eax + 0x24) = xmm1.f[0]; /* movss */
    MEMF(ecx + 0x10) = xmm0.f[0]; /* movss */

loc_003FB1C7: ;
    edi = ebx + 4;

loc_003FB1CA: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003FB25D; /* jae: above or equal (unsigned >=) */

loc_003FB1D3: ;
    edx = edi + edi * 2;
    edx = esp + edx * 4 + 0x40;
    /* nop */

loc_003FB1E0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + edi * 4 + 0x28)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FB250; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx)) */

loc_003FB1EB: ;
    xmm1 = XMM_SCALAR(MEMF(edx)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(edx + -4)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    esi = eax + -20;
    ebx = esi;
    ebp = MEM32(ebx);
    MEM32(esp + 0x1C) = ebp;
    ebp = MEM32(ebx + 4);
    ebx = MEM32(ebx + 8);
    MEM32(esp + 0x24) = ebx;
    ebx = MEM32(edx + -8);
    MEMF(eax + -12) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    MEM32(esi) = ebx;
    esi = MEM32(esp + edi * 4 + 0x28);
    MEMF(eax + -16) = xmm2.f[0]; /* movss */
    MEMF(edx + -8) = xmm1.f[0]; /* movss */
    MEM32(esp + 0x20) = ebp;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    MEM32(ecx) = esi;
    esi = MEM32(esp + 0x18);
    MEMF(edx + -4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    MEMF(edx) = xmm1.f[0]; /* movss */
    MEMF(esp + edi * 4 + 0x28) = xmm0.f[0]; /* movss */

loc_003FB250: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003FB1E0; /* jb: below (unsigned <) */

loc_003FB259: ;
    ebx = MEM32(esp + 0x14);

loc_003FB25D: ;
    edi = MEM32(esp + 0x60);
    edx = MEM32(esp + 0x10);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x60) = edi;
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x10) = edx;
    if ((_fa != 0)) goto loc_003FB010; /* jne: not equal / not zero */

loc_003FB280: ;
    ebp = ZX16(MEM16(esp + 0x78));
    eax = ebp + ebp * 2;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, eax);
    PUSH32(esp, 0x003FB292u); RECOMP_ABI_CALL(0x0001C626u, sub_0001C626); /* call 0x0001C626 */

loc_003FB292: ;
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    edi = MEM32(esp + 0x78);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    MEM32(esp + 0x14) = eax;
    xmm0 = xmm3; /* movaps */
    xmm1 = xmm3; /* movaps */
    xmm2 = xmm3; /* movaps */
    if (CMP_BE(_fa, _fb)) goto loc_003FB525; /* jbe: below or equal (unsigned <=) */

loc_003FB2B3: ;
    xmm6 = XMM_SCALAR(MEMF(0x7CEA20)); /* movss */
    ecx = eax + 4;
    edi = edi;

loc_003FB2C0: ;
    xmm4 = XMM_SCALAR(MEMF(0x87DA74)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(0x87DA70)); /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x87DA6C)); /* movss */
    MEMF(ecx + -4) = xmm7.f[0]; /* movss */
    MEMF(ecx) = xmm5.f[0]; /* movss */
    MEMF(ecx + 4) = xmm4.f[0]; /* movss */
    edx = MEM32(esi + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    edx = (uint32_t)(int32_t)SMEM16(edi + ebx * 2);
    if (CMP_NE(_fa, _fb)) goto loc_003FB3AA; /* jne: not equal / not zero */

loc_003FB2F5: ;
    edx = edx + edx * 2;
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + MEM32(esi + 0x1C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm4 = xmm7; /* movaps */
    xmm4.f[0] = xmm4.f[0] + MEMF(edx + 0xC); /* addss */
    MEMF(ecx + -4) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(edx + 0x10)); /* movss */
    xmm4.f[0] = xmm4.f[0] + MEMF(ecx); /* addss */
    MEMF(ecx) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(edx + 0x14)); /* movss */
    xmm4.f[0] = xmm4.f[0] + MEMF(ecx + 4); /* addss */
    MEMF(ecx + 4) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(ecx + -4)); /* movss */
    xmm4.f[0] = xmm4.f[0] + MEMF(edx + 0x18); /* addss */
    MEMF(ecx + -4) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(edx + 0x1C)); /* movss */
    xmm4.f[0] = xmm4.f[0] + MEMF(ecx); /* addss */
    MEMF(ecx) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(edx + 0x20)); /* movss */
    xmm4.f[0] = xmm4.f[0] + MEMF(ecx + 4); /* addss */
    MEMF(ecx + 4) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(ecx + -4)); /* movss */
    xmm4.f[0] = xmm4.f[0] + MEMF(edx + 0x24); /* addss */
    MEMF(ecx + -4) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(edx + 0x28)); /* movss */
    xmm4.f[0] = xmm4.f[0] + MEMF(ecx); /* addss */
    MEMF(ecx) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(edx + 0x2C)); /* movss */
    xmm4.f[0] = xmm4.f[0] + MEMF(ecx + 4); /* addss */
    MEMF(ecx + 4) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(ecx + -4)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm6.f[0]; /* mulss */
    MEMF(ecx + -4) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm6.f[0]; /* mulss */
    MEMF(ecx) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm6.f[0]; /* mulss */
    MEMF(ecx + 4) = xmm4.f[0]; /* movss */
    goto loc_003FB48C;

loc_003FB3AA: ;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x3C);
    _fb = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + MEM32(esi + 0x20);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm4 = XMM_SCALAR(MEMF(edx + 0xC)); /* movss */
    xmm4.f[0] = xmm4.f[0] + MEMF(ecx + -4); /* addss */
    MEMF(ecx + -4) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(edx + 0x10)); /* movss */
    xmm4.f[0] = xmm4.f[0] + MEMF(ecx); /* addss */
    MEMF(ecx) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(edx + 0x14)); /* movss */
    xmm4.f[0] = xmm4.f[0] + MEMF(ecx + 4); /* addss */
    MEMF(ecx + 4) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(edx + 0x18)); /* movss */
    xmm4.f[0] = xmm4.f[0] + MEMF(ecx + -4); /* addss */
    MEMF(ecx + -4) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(edx + 0x1C)); /* movss */
    xmm4.f[0] = xmm4.f[0] + MEMF(ecx); /* addss */
    MEMF(ecx) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(edx + 0x20)); /* movss */
    xmm4.f[0] = xmm4.f[0] + MEMF(ecx + 4); /* addss */
    MEMF(ecx + 4) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(edx + 0x24)); /* movss */
    xmm4.f[0] = xmm4.f[0] + MEMF(ecx + -4); /* addss */
    MEMF(ecx + -4) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(edx + 0x28)); /* movss */
    xmm4.f[0] = xmm4.f[0] + MEMF(ecx); /* addss */
    MEMF(ecx) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(edx + 0x2C)); /* movss */
    xmm4.f[0] = xmm4.f[0] + MEMF(ecx + 4); /* addss */
    MEMF(ecx + 4) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(edx + 0x30)); /* movss */
    xmm4.f[0] = xmm4.f[0] + MEMF(ecx + -4); /* addss */
    MEMF(ecx + -4) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(edx + 0x34)); /* movss */
    xmm4.f[0] = xmm4.f[0] + MEMF(ecx); /* addss */
    MEMF(ecx) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(edx + 0x38)); /* movss */
    xmm4.f[0] = xmm4.f[0] + MEMF(ecx + 4); /* addss */
    MEMF(ecx + 4) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(0x7ABD64)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(ecx + -4)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm4.f[0]; /* mulss */
    MEMF(ecx + -4) = xmm5.f[0]; /* movss */
    xmm5 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm4.f[0]; /* mulss */
    MEMF(ecx) = xmm5.f[0]; /* movss */
    xmm5 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm4.f[0]; /* mulss */
    MEMF(ecx + 4) = xmm5.f[0]; /* movss */

loc_003FB48C: ;
    xmm4 = XMM_SCALAR(MEMF(ecx + -4)); /* movss */
    xmm4.f[0] = xmm4.f[0] * MEMF(esp + 0x38); /* mulss */
    xmm5 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm5.f[0] = xmm5.f[0] * MEMF(esp + 0x40); /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    xmm5.f[0] = xmm5.f[0] * MEMF(ecx); /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    xmm5.f[0] = xmm5.f[0] * MEMF(ecx); /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm0.f[0]; /* addss */
    xmm0 = xmm4; /* movaps */
    xmm4 = XMM_SCALAR(MEMF(ecx + -4)); /* movss */
    xmm4.f[0] = xmm4.f[0] * MEMF(esp + 0x44); /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    xmm5 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm5.f[0] = xmm5.f[0] * MEMF(esp + 0x4C); /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    xmm5.f[0] = xmm5.f[0] * MEMF(ecx); /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm1.f[0]; /* addss */
    xmm1 = xmm4; /* movaps */
    xmm4 = XMM_SCALAR(MEMF(ecx + -4)); /* movss */
    xmm4.f[0] = xmm4.f[0] * MEMF(esp + 0x50); /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    xmm5 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm5.f[0] = xmm5.f[0] * MEMF(esp + 0x58); /* mulss */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    xmm4.f[0] = xmm4.f[0] + xmm2.f[0]; /* addss */
    xmm2 = xmm4; /* movaps */
    if (CMP_B(_fa, _fb)) goto loc_003FB2C0; /* jb: below (unsigned <) */

loc_003FB525: ;
    xmm4 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    edx = MEM32(esp + 0x68);
    xmm5.f[0] = (float)(int32_t)ebp; /* cvtsi2ss */
    xmm4.f[0] = xmm4.f[0] / xmm5.f[0]; /* divss */
    xmm5 = xmm4; /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    ecx = esp + 0x3C;
    xmm0 = xmm4; /* movaps */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    MEM32(esp + 0x60) = ecx;
    ecx = MEM32(esp + 0x70);
    MEMF(esp + 0x1C) = xmm5.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm4.f[0]; /* movss */
    MEM32(esp + 0x10) = esi;
    goto loc_003FB575;

loc_003FB571: ;
    eax = MEM32(esp + 0x14);

loc_003FB575: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 4 (32-bit) */
    MEM16(edx) = 0;
    MEM16(ecx) = 0;
    if (CMP_L(_fas, _fbs)) goto loc_003FB72F; /* jl: less (signed <) */

loc_003FB58A: ;
    xmm0 = XMM_SCALAR(MEMF(esp + esi * 4 + 0x1C)); /* movss */
    esi = edi + 4;
    edi = eax + 0x10;
    eax = ebp + -4;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x70) = eax;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM32(esp + 0x68) = eax;
    goto loc_003FB5B0;

    /* nop */

loc_003FB5B0: ;
    eax = MEM32(esp + 0x60);
    xmm1 = XMM_SCALAR(MEMF(edi + -16)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + -4); /* mulss */
    xmm2 = XMM_SCALAR(MEMF(edi + -12)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(eax); /* mulss */
    SET_LO16(ebp, MEM16(esi + -4));
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(edi + -8)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(eax + 4); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm3.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FB5F8; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm1.f[0]) */

loc_003FB5E6: ;
    eax = ZX16(MEM16(edx));
    ebx = MEM32(esp + 0x64);
    ebx = MEM32(ebx);
    MEM16(ebx + eax * 2) = LO16(ebp);
    MEM16(edx) = MEM16(edx) + 1;
    _fa = (uint32_t)(MEM16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    goto loc_003FB608;

loc_003FB5F8: ;
    eax = ZX16(MEM16(ecx));
    ebx = MEM32(esp + 0x6C);
    ebx = MEM32(ebx);
    MEM16(ebx + eax * 2) = LO16(ebp);
    MEM16(ecx) = MEM16(ecx) + 1;
    _fa = (uint32_t)(MEM16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */

loc_003FB608: ;
    eax = MEM32(esp + 0x60);
    xmm1 = XMM_SCALAR(MEMF(edi + -4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + -4); /* mulss */
    xmm2 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(eax + 4); /* mulss */
    SET_LO16(ebp, MEM16(esi + -2));
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(eax); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm3.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FB64F; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm1.f[0]) */

loc_003FB63D: ;
    eax = ZX16(MEM16(edx));
    ebx = MEM32(esp + 0x64);
    ebx = MEM32(ebx);
    MEM16(ebx + eax * 2) = LO16(ebp);
    MEM16(edx) = MEM16(edx) + 1;
    _fa = (uint32_t)(MEM16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    goto loc_003FB65F;

loc_003FB64F: ;
    eax = ZX16(MEM16(ecx));
    ebx = MEM32(esp + 0x6C);
    ebx = MEM32(ebx);
    MEM16(ebx + eax * 2) = LO16(ebp);
    MEM16(ecx) = MEM16(ecx) + 1;
    _fa = (uint32_t)(MEM16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */

loc_003FB65F: ;
    eax = MEM32(esp + 0x60);
    xmm1 = XMM_SCALAR(MEMF(edi + 0x10)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 4); /* mulss */
    xmm2 = XMM_SCALAR(MEMF(edi + 0xC)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(eax); /* mulss */
    SET_LO16(ebp, MEM16(esi));
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(eax + -4); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm3.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FB6A6; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm1.f[0]) */

loc_003FB694: ;
    eax = ZX16(MEM16(edx));
    ebx = MEM32(esp + 0x64);
    ebx = MEM32(ebx);
    MEM16(ebx + eax * 2) = LO16(ebp);
    MEM16(edx) = MEM16(edx) + 1;
    _fa = (uint32_t)(MEM16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    goto loc_003FB6B6;

loc_003FB6A6: ;
    eax = ZX16(MEM16(ecx));
    ebx = MEM32(esp + 0x6C);
    ebx = MEM32(ebx);
    MEM16(ebx + eax * 2) = LO16(ebp);
    MEM16(ecx) = MEM16(ecx) + 1;
    _fa = (uint32_t)(MEM16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */

loc_003FB6B6: ;
    eax = MEM32(esp + 0x60);
    xmm1 = XMM_SCALAR(MEMF(edi + 0x1C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 4); /* mulss */
    xmm2 = XMM_SCALAR(MEMF(edi + 0x18)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(eax); /* mulss */
    SET_LO16(ebp, MEM16(esi + 2));
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(edi + 0x14)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(eax + -4); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm3.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FB6FE; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm1.f[0]) */

loc_003FB6EC: ;
    eax = ZX16(MEM16(edx));
    ebx = MEM32(esp + 0x64);
    ebx = MEM32(ebx);
    MEM16(ebx + eax * 2) = LO16(ebp);
    MEM16(edx) = MEM16(edx) + 1;
    _fa = (uint32_t)(MEM16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    goto loc_003FB70E;

loc_003FB6FE: ;
    eax = ZX16(MEM16(ecx));
    ebx = MEM32(esp + 0x6C);
    ebx = MEM32(ebx);
    MEM16(ebx + eax * 2) = LO16(ebp);
    MEM16(ecx) = MEM16(ecx) + 1;
    _fa = (uint32_t)(MEM16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */

loc_003FB70E: ;
    eax = MEM32(esp + 0x70);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x30;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x70) = eax;
    if ((_fa != 0)) goto loc_003FB5B0; /* jne: not equal / not zero */

loc_003FB723: ;
    esi = MEM32(esp + 0x10);
    ebx = MEM32(esp + 0x68);
    edi = MEM32(esp + 0x74);

loc_003FB72F: ;
    SET_LO16(eax, MEM16(esp + 0x78));
    ebp = ZX16(LO16(eax));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003FB7C8; /* jae: above or equal (unsigned >=) */

loc_003FB73F: ;
    xmm0 = XMM_SCALAR(MEMF(esp + esi * 4 + 0x1C)); /* movss */
    esi = MEM32(esp + 0x14);
    eax = ebx + ebx * 2;
    eax = esi + eax * 4 + 4;
    MEM32(esp + 0x70) = eax;

loc_003FB754: ;
    esi = MEM32(esp + 0x60);
    xmm1 = XMM_SCALAR(MEMF(eax + -4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esi + -4); /* mulss */
    xmm2 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(esi + 4); /* mulss */
    SET_LO16(edi, MEM16(edi + ebx * 2));
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(esi); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm3.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FB79B; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm1.f[0]) */

loc_003FB789: ;
    eax = ZX16(MEM16(edx));
    esi = MEM32(esp + 0x64);
    esi = MEM32(esi);
    MEM16(esi + eax * 2) = LO16(edi);
    MEM16(edx) = MEM16(edx) + 1;
    _fa = (uint32_t)(MEM16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    goto loc_003FB7AB;

loc_003FB79B: ;
    eax = ZX16(MEM16(ecx));
    esi = MEM32(esp + 0x6C);
    esi = MEM32(esi);
    MEM16(esi + eax * 2) = LO16(edi);
    MEM16(ecx) = MEM16(ecx) + 1;
    _fa = (uint32_t)(MEM16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */

loc_003FB7AB: ;
    eax = MEM32(esp + 0x70);
    edi = MEM32(esp + 0x74);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    MEM32(esp + 0x70) = eax;
    if (CMP_B(_fa, _fb)) goto loc_003FB754; /* jb: below (unsigned <) */

loc_003FB7BF: ;
    esi = MEM32(esp + 0x10);
    SET_LO16(eax, MEM16(esp + 0x78));

loc_003FB7C8: ;
    _fa = (uint32_t)(MEM16(edx)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edx), LO16(eax) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003FB7D2; /* je: equal / zero */

loc_003FB7CD: ;
    _fa = (uint32_t)(MEM16(ecx)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx), LO16(eax) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003FB7EB; /* jne: not equal / not zero */

loc_003FB7D2: ;
    ebx = MEM32(esp + 0x60);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0xC;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 3 (32-bit) */
    MEM32(esp + 0x10) = esi;
    MEM32(esp + 0x60) = ebx;
    if (CMP_B(_fa, _fb)) goto loc_003FB571; /* jb: below (unsigned <) */

loc_003FB7EB: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003FB7F5u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_003FB7F5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 3 (32-bit) */
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 32; return; /* ret 28 */

}

/**
 * sub_003FBA40
 * Original: 0x003FBA40 - 0x003FBA61 (33 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FBA40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003FBA40: ;
    SET_LO16(eax, MEM16(esp + 4));
    ecx = MEM32(0x9092AC);
    MEM32(0x9092A4) = 0;
    MEM16(ecx) = LO16(eax);
    MEM32(0x9092A4) = MEM32(0x9092A4) + 1;
    _fa = (uint32_t)(MEM32(0x9092A4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003FBA70
 * Original: 0x003FBA70 - 0x003FBA71 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FBA70(void)
{

loc_003FBA70: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003FBA80
 * Original: 0x003FBA80 - 0x003FBBD8 (344 bytes, 100 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FBA80(void)
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

loc_003FBA80: ;
    PUSH32(esp, ecx);
    MEM32(esp) = ecx;
    ecx = MEM32(0x9092A4);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003FBBD0; /* je: equal / zero */

loc_003FBA95: ;
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    PUSH32(esp, ebp);

loc_003FBAA3: ;
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(MEM16(esp + 0x20)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), MEM16(esp + 0x20) (16-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003FBBCD; /* jge: greater or equal (signed >=) */

loc_003FBAAE: ;
    ebp = MEM32(0x9092AC);
    edx = MEM32(esp + 0x10);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x9092A4) = ecx;
    eax = ZX16(MEM16(ebp + ecx * 2));
    xmm0 = XMM_SCALAR(MEMF(edi + 0x20)); /* movss */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    _fb = (uint32_t)(MEM32(edx + 0x18)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(edx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax); /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FBADD; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_003FBAD8: ;
    xmm1 = xmm0; /* movaps */
    goto loc_003FBAE4;

loc_003FBADD: ;
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */

loc_003FBAE4: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edi + 0x30); /* addss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FBBBF; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_003FBAF7: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 0x24)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 4); /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FBB0B; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_003FBB06: ;
    xmm1 = xmm0; /* movaps */
    goto loc_003FBB12;

loc_003FBB0B: ;
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */

loc_003FBB12: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edi + 0x34); /* addss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FBBBF; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_003FBB25: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 0x28)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 8); /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FBB39; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_003FBB34: ;
    xmm1 = xmm0; /* movaps */
    goto loc_003FBB40;

loc_003FBB39: ;
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */

loc_003FBB40: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edi + 0x38); /* addss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FBBBF; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_003FBB4F: ;
    edx = MEM32(eax + 0x18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC0000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0xC0000000u (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003FBB8E; /* je: equal / zero */

loc_003FBB5A: ;
    ecx = edx;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(0x11) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((0x11) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edx = SX16(LO16(esi));
    MEM16(ebx + edx * 2) = LO16(ecx);
    ecx = MEM32(eax + 0x18);
    ecx = ecx & 0x3FFF8000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFF8000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x3FFF8000 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003FBBBF; /* je: equal / zero */

loc_003FBB7B: ;
    edx = MEM32(eax + 0x18);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = SX16(LO16(esi));
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((0x11) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM16(ebx + eax * 2) = LO16(edx);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_003FBBBF;

loc_003FBB8E: ;
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((0x11) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM16(ebp + ecx * 2) = LO16(edx);
    edx = MEM32(0x9092A4);
    ecx = MEM32(0x9092AC);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x9092A4) = edx;
    eax = MEM32(eax + 0x18);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x11) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0x11) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM16(ecx + edx * 2) = LO16(eax);
    MEM32(0x9092A4) = MEM32(0x9092A4) + 1;
    _fa = (uint32_t)(MEM32(0x9092A4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003FBBBF: ;
    ecx = MEM32(0x9092A4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003FBAA3; /* jne: not equal / not zero */

loc_003FBBCD: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, ebx);

loc_003FBBD0: ;
    eax = SX16(LO16(esi));
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003FBC30
 * Original: 0x003FBC30 - 0x003FBF65 (821 bytes, 210 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FBC30(void)
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

loc_003FBC30: ;
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x9092A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 4) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_003FBC48; /* jne: not equal / not zero */

loc_003FBC40: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_003FBC48: ;
    xmm2 = XMM_SCALAR(MEMF(0x7AA820)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x64);
    xmm0 = XMM_SCALAR(MEMF(edi + 0xC)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(edi + 0xC)); /* movss */
    _fca = xmm3.f[0]; _fcb = xmm1.f[0]; /* comiss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x10)); /* movss */
    eax = MEM32(esp + 0x14);
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x14)); /* movss */
    ecx = MEM32(esp + 0x18);
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi)); /* movss */
    edx = MEM32(esp + 0x1C);
    MEM32(esp + 0x20) = eax;
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x20); /* addss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    eax = MEM32(esp + 0x14);
    MEM32(esp + 0x24) = ecx;
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x24); /* addss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    ecx = MEM32(esp + 0x18);
    MEM32(esp + 0x28) = edx;
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x28); /* addss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x1C);
    MEM32(esp + 0x2C) = eax;
    MEM32(esp + 0x30) = ecx;
    MEM32(esp + 0x34) = edx;
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FBCF8; /* jb: below (unsigned <) (xmm3.f[0] vs xmm1.f[0]) */

loc_003FBCF3: ;
    xmm0 = xmm3; /* movaps */
    goto loc_003FBCFF;

loc_003FBCF8: ;
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */

loc_003FBCFF: ;
    xmm3 = XMM_SCALAR(MEMF(edi + 0x10)); /* movss */
    _fca = xmm3.f[0]; _fcb = xmm1.f[0]; /* comiss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edi + 0x18); /* addss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FBD1D; /* jb: below (unsigned <) (xmm3.f[0] vs xmm1.f[0]) */

loc_003FBD18: ;
    xmm0 = xmm3; /* movaps */
    goto loc_003FBD24;

loc_003FBD1D: ;
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */

loc_003FBD24: ;
    xmm3 = XMM_SCALAR(MEMF(edi + 0x14)); /* movss */
    _fca = xmm3.f[0]; _fcb = xmm1.f[0]; /* comiss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edi + 0x18); /* addss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FBD42; /* jb: below (unsigned <) (xmm3.f[0] vs xmm1.f[0]) */

loc_003FBD3D: ;
    xmm0 = xmm3; /* movaps */
    goto loc_003FBD49;

loc_003FBD42: ;
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */

loc_003FBD49: ;
    xmm3 = XMM_SCALAR(MEMF(edi + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(edi + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edi + 0x18); /* addss */
    xmm4 = xmm3; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x14)); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm4.f[0] = xmm4.f[0] + xmm3.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 0x64) = xmm4.f[0]; /* movss */
    fp_push(MEMF(esp + 0x64)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm2 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(esp + 0x5C) = xmm2.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FBE59; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm1.f[0]) */

loc_003FBDA9: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm0.f[0] = xmm0.f[0] / xmm2.f[0]; /* divss */
    xmm2 = XMM_SCALAR(MEMF(edi + 0xC)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x20) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(edi + 0x10)); /* movss */
    eax = MEM32(esp + 0x20);
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x24) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(edi + 0x14)); /* movss */
    ecx = MEM32(esp + 0x24);
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x28) = xmm2.f[0]; /* movss */
    edx = MEM32(esp + 0x28);
    MEM32(esp + 0x38) = eax;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEM32(esp + 0x3C) = ecx;
    MEM32(esp + 0x40) = edx;
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FBE0D; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_003FBE05: ;
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    goto loc_003FBE1A;

loc_003FBE0D: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0x44) = xmm2.f[0]; /* movss */

loc_003FBE1A: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FBE2D; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_003FBE25: ;
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    goto loc_003FBE3A;

loc_003FBE2D: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0x48) = xmm2.f[0]; /* movss */

loc_003FBE3A: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FBE4D; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_003FBE45: ;
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    goto loc_003FBE82;

loc_003FBE4D: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0x4C) = xmm1.f[0]; /* movss */
    goto loc_003FBE82;

loc_003FBE59: ;
    eax = MEM32(0x87DA6C);
    ecx = MEM32(0x87DA70);
    edx = MEM32(0x87DA74);
    MEM32(esp + 0x44) = eax;
    MEM32(esp + 0x48) = ecx;
    MEM32(esp + 0x4C) = edx;
    MEM32(esp + 0x38) = eax;
    MEM32(esp + 0x3C) = ecx;
    MEM32(esp + 0x40) = edx;

loc_003FBE82: ;
    ebp = MEM32(0x9092A4);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003FBF59; /* je: equal / zero */

loc_003FBE92: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x6C);
    goto loc_003FBEA0;

    /* nop */

loc_003FBEA0: ;
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(MEM16(esp + 0x70)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), MEM16(esp + 0x70) (16-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003FBF58; /* jge: greater or equal (signed >=) */

loc_003FBEAB: ;
    eax = MEM32(0x9092AC);
    edx = MEM32(esp + 0x14);
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x9092A4) = ebp;
    ecx = ZX16(MEM16(eax + ebp * 2));
    eax = MEM32(edx + 0x18);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x1C);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x003FBED2u); RECOMP_ABI_CALL(0x00021CC5u, sub_00021CC5); /* call 0x00021CC5 */

loc_003FBED2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003FBF4A; /* je: equal / zero */

loc_003FBED6: ;
    eax = MEM32(ecx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC0000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xC0000000u (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003FBF19; /* jne: not equal / not zero */

loc_003FBEE0: ;
    edx = eax * 4;
    eax = MEM32(0x9092AC);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((0x11) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM16(eax + ebp * 2) = LO16(edx);
    eax = MEM32(0x9092A4);
    edx = MEM32(0x9092AC);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x9092A4) = eax;
    ecx = MEM32(ecx + 0x18);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(0x11) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((0x11) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM16(edx + eax * 2) = LO16(ecx);
    MEM32(0x9092A4) = MEM32(0x9092A4) + 1;
    _fa = (uint32_t)(MEM32(0x9092A4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_003FBF4A;

loc_003FBF19: ;
    eax = MEM32(ecx + 0x18);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x11) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0x11) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edx = SX16(LO16(esi));
    MEM16(ebx + edx * 2) = LO16(eax);
    eax = MEM32(ecx + 0x18);
    eax = eax & 0x3FFF8000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFF8000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFF8000 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003FBF4A; /* je: equal / zero */

loc_003FBF39: ;
    ecx = MEM32(ecx + 0x18);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = SX16(LO16(esi));
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((0x11) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM16(ebx + edx * 2) = LO16(ecx);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003FBF4A: ;
    ebp = MEM32(0x9092A4);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003FBEA0; /* jne: not equal / not zero */

loc_003FBF58: ;
    POP32(esp, ebx);

loc_003FBF59: ;
    POP32(esp, edi);
    eax = SX16(LO16(esi));
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003FC040
 * Original: 0x003FC040 - 0x003FC06B (43 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FC040(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003FC040: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003FC069; /* je: equal / zero */

loc_003FC04A: ;
    edx = MEM32(esi + 8);
    MEM32(esi + 4) = 0;
    ecx = MEM32(0x9092A0);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x003FC062u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003FC05Fu); } /* indirect call */
    }

loc_003FC062: ;
    MEM32(esi + 8) = 0;

loc_003FC069: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003FC080
 * Original: 0x003FC080 - 0x003FC0A3 (35 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FC080(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003FC080: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x003FC088u); RECOMP_ABI_CALL(0x00031F2Bu, sub_00031F2B); /* call 0x00031F2B */

loc_003FC088: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003FC09D; /* je: equal / zero */

loc_003FC08F: ;
    ecx = MEM32(0x9092A0);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x003FC09Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003FC09Au); } /* indirect call */
    }

loc_003FC09D: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003FC0B0
 * Original: 0x003FC0B0 - 0x003FC204 (340 bytes, 124 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FC0B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003FC0B0: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    _fa = (uint32_t)(MEM16(edi + 0x2C)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 0x2C), LO16(eax) (16-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003FC0C5; /* jge: greater or equal (signed >=) */

loc_003FC0C1: ;
    MEM16(edi + 0x2C) = LO16(eax);

loc_003FC0C5: ;
    ebx = MEM32(esp + 0x20);
    ebp = MEM32(esp + 0x1C);
    esi = MEM32(esp + 0x18);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x003FC0DBu); RECOMP_ABI_CALL(0x00013D00u, sub_00013D00); /* call 0x00013D00 */

loc_003FC0DB: ;
    _fa = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ebx), 2 (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003FC1BB; /* jbe: below or equal (unsigned <=) */

loc_003FC0E5: ;
    PUSH32(esp, ebx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebp);
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x28) = eax;
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x003FC10Du); RECOMP_ABI_CALL(0x00017FEAu, sub_00017FEA); /* call 0x00017FEA */

loc_003FC10D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ebp = MEM32(esp + 0x1C);
    if (CMP_EQ(_fa, _fb)) goto loc_003FC1A0; /* je: equal / zero */

loc_003FC119: ;
    ebx = MEM32(esi + 0x18);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = ebx & 0x3FFFFFFF;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x18) = ebx;
    SET_LO16(ecx, MEM16(edi + 0x28));
    edx = MEM32(esp + 0x18);
    eax = ebx;
    ebx = MEM32(esp + 0x24);
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ecx & 0x7FFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x18) = ecx;
    MEM16(edi + 0x28) = MEM16(edi + 0x28) + 1;
    _fa = (uint32_t)(MEM16(edi + 0x28)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(esi + 0x18);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x11) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0x11) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    edx = MEM32(edi + 0x18);
    PUSH32(esp, ebp);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x003FC163u); RECOMP_ABI_CALL(0x0002078Fu, sub_0002078F); /* call 0x0002078F */

loc_003FC163: ;
    ecx = (uint32_t)(int32_t)SMEM16(edi + 0x28);
    edx = MEM32(esi + 0x18);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(0xF) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = ecx ^ edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = MEM32(esp + 0x20);
    ecx = ecx & 0x3FFF8000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx ^ ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x18) = edx;
    MEM16(edi + 0x28) = MEM16(edi + 0x28) + 1;
    _fa = (uint32_t)(MEM16(edi + 0x28)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    ecx = MEM32(esi + 0x18);
    edx = MEM32(esp + 0x10);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((0x11) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x1C);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    _fb = (uint32_t)(MEM32(edi + 0x18)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(edi + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x003FC1A0u); RECOMP_ABI_CALL(0x0002078Fu, sub_0002078F); /* call 0x0002078F */

loc_003FC1A0: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x003FC1A6u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_003FC1A6: ;
    edx = MEM32(esp + 0x24);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003FC1B0u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_003FC1B0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 20; return; /* ret 16 */

loc_003FC1BB: ;
    eax = MEM32(esi + 0x18);
    eax = eax & 0x3FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0x40000000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x18) = eax;
    SET_LO16(ecx, MEM16(ebp));
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ecx & 0x7FFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ebx), 2 (16-bit) */
    MEM32(esi + 0x18) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_003FC1EA; /* jne: not equal / not zero */

loc_003FC1E4: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 2);
    goto loc_003FC1ED;

loc_003FC1EA: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_003FC1ED: ;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0xF) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax & 0x3FFF8000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, edi);
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x18) = eax;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003FC260
 * Original: 0x003FC260 - 0x003FC2B5 (85 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FC260(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003FC260: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = ZX16(MEM16(esi + 0x26));
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003FC270u); RECOMP_ABI_CALL(0x0001C626u, sub_0001C626); /* call 0x0001C626 */

loc_003FC270: ;
    edi = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM16(esi + 0x26)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x26), LO16(eax) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003FC28E; /* jbe: below or equal (unsigned <=) */

loc_003FC27D: ;
    /* nop */

loc_003FC280: ;
    ecx = ZX16(LO16(eax));
    MEM16(edi + ecx * 2) = LO16(eax);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(MEM16(esi + 0x26)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), MEM16(esi + 0x26) (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003FC280; /* jb: below (unsigned <) */

loc_003FC28E: ;
    eax = MEM32(esi + 0x18);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(esi + 0x26));
    PUSH32(esp, 0);
    ecx = esi;
    MEM16(esi + 0x28) = 1;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003FC2A9u); RECOMP_ABI_CALL(0x0002078Fu, sub_0002078F); /* call 0x0002078F */

loc_003FC2A9: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x003FC2AFu); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_003FC2AF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003FC2D0
 * Original: 0x003FC2D0 - 0x003FC325 (85 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FC2D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003FC2D0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x18);
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    edx = MEM32(esp);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    eax = MEM32(esp + 0x10);
    ecx = eax;
    MEM32(ecx) = edx;
    edx = MEM32(esp + 4);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEM32(ecx + 4) = edx;
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 8);
    MEM32(ecx + 8) = edx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003FC340
 * Original: 0x003FC340 - 0x003FC385 (69 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003FC340(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003FC340: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(edx)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 0xC)); /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(esp); /* movaps */
    eax = ecx;
    XMM_STORE(eax, xmm0); /* movaps */
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003FC3A0
 * Original: 0x003FC3A0 - 0x003FC3A3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FC3A0(void)
{

loc_003FC3A0: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_003FC3B0
 * Original: 0x003FC3B0 - 0x003FC403 (83 bytes, 40 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FC3B0(void)
{

loc_003FC3B0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 0x38);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(eax + 0x3C);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x34);
    PUSH32(esp, edx);
    edx = MEM32(eax + 0x30);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x2C);
    PUSH32(esp, edx);
    edx = MEM32(eax + 0x28);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x24);
    PUSH32(esp, edx);
    edx = MEM32(eax + 0x20);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x1C);
    PUSH32(esp, edx);
    edx = MEM32(eax + 0x18);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(eax + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0xC);
    PUSH32(esp, edx);
    edx = MEM32(eax + 8);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 4);
    PUSH32(esp, edx);
    edx = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x003FC3FDu); RECOMP_ABI_CALL(0x005A0B75u, sub_005A0B75); /* call 0x005A0B75 */

loc_003FC3FD: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003FC420
 * Original: 0x003FC420 - 0x003FC428 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FC420(void)
{

loc_003FC420: ;
    eax = MEM32(ecx + 8);
    SET_LO8(eax, MEM8(eax + ecx + 0x10));
    esp += 4; return; /* ret */

}

/**
 * sub_003FC430
 * Original: 0x003FC430 - 0x003FC439 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FC430(void)
{

loc_003FC430: ;
    eax = MEM32(ecx + 8);
    MEM8(eax + ecx + 0x10) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_003FC440
 * Original: 0x003FC440 - 0x003FC449 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FC440(void)
{

loc_003FC440: ;
    eax = MEM32(ecx + 0xC);
    MEM8(eax + ecx + 0x10) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_003FC450
 * Original: 0x003FC450 - 0x003FC454 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FC450(void)
{

loc_003FC450: ;
    SET_LO8(eax, MEM8(ecx + 0x14));
    esp += 4; return; /* ret */

}

/**
 * sub_003FC460
 * Original: 0x003FC460 - 0x003FC46F (15 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FC460(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003FC460: ;
    eax = MEM32(esp + 4);
    edx = MEM32(ecx + 0x1C);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003FC480
 * Original: 0x003FC480 - 0x003FC490 (16 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FC480(void)
{

loc_003FC480: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(ecx + 0x14);
    eax = eax + eax * 2;
    eax = ecx + eax * 8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003FC4A0
 * Original: 0x003FC4A0 - 0x003FC4A4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FC4A0(void)
{

loc_003FC4A0: ;
    eax = MEM32(ecx + 0x28);
    esp += 4; return; /* ret */

}

/**
 * sub_003FC4B0
 * Original: 0x003FC4B0 - 0x003FC4B4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FC4B0(void)
{

loc_003FC4B0: ;
    eax = MEM32(ecx + 0x14);
    esp += 4; return; /* ret */

}

/**
 * sub_003FC4C0
 * Original: 0x003FC4C0 - 0x003FC4C6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FC4C0(void)
{

loc_003FC4C0: ;
    eax = MEM32(0x9092B4);
    esp += 4; return; /* ret */

}

/**
 * sub_003FC4D0
 * Original: 0x003FC4D0 - 0x003FC4DC (12 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FC4D0(void)
{

loc_003FC4D0: ;
    SET_LO16(eax, MEM16(esp + 4));
    MEM16(ecx + 0x12) = LO16(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003FC4E0
 * Original: 0x003FC4E0 - 0x003FC56B (139 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FC4E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_003FC4E0: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x20)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(edx + 0x20); /* subss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FC501; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_003FC4FC: ;
    xmm2 = xmm1; /* movaps */
    goto loc_003FC508;

loc_003FC501: ;
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */

loc_003FC508: ;
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x30)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(edx + 0x30); /* addss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FC56A; /* jb: below (unsigned <) (xmm1.f[0] vs xmm2.f[0]) */

loc_003FC517: ;
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x24)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(edx + 0x24); /* subss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FC52B; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_003FC526: ;
    xmm2 = xmm1; /* movaps */
    goto loc_003FC532;

loc_003FC52B: ;
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */

loc_003FC532: ;
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x34)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(edx + 0x34); /* addss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FC56A; /* jb: below (unsigned <) (xmm1.f[0] vs xmm2.f[0]) */

loc_003FC541: ;
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x28)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(edx + 0x28); /* subss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FC555; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_003FC550: ;
    xmm0 = xmm1; /* movaps */
    goto loc_003FC559;

loc_003FC555: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */

loc_003FC559: ;
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x38)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(edx + 0x38); /* addss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FC56A; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_003FC568: ;
    SET_LO8(eax, 1);

loc_003FC56A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003FC590
 * Original: 0x003FC590 - 0x003FC8B0 (800 bytes, 170 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FC590(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_003FC590: ;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esp + 0x50);
    edx = MEM32(esp + 0x4C);
    xmm0 = XMM_SCALAR(MEMF(edx)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 0xC); /* subss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 0x10); /* subss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 0x14); /* subss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x18)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 0xC); /* subss */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x1C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 0x10); /* subss */
    MEM32(esp + 4) = esi;
    esi = MEM32(esp + 0x14);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 0x14); /* subss */
    MEM32(esp + 8) = esi;
    esi = MEM32(esp + 0x18);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x24)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 0x18); /* subss */
    MEM32(esp + 0xC) = esi;
    esi = MEM32(esp + 0x10);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x28)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 0x1C); /* subss */
    MEM32(esp + 0x1C) = esi;
    esi = MEM32(esp + 0x14);
    MEM32(esp + 0x20) = esi;
    esi = MEM32(esp + 0x18);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x2C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 0x20); /* subss */
    MEM32(esp + 0x24) = esi;
    esi = MEM32(esp + 0x10);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 0x24); /* subss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x24); /* mulss */
    MEM32(esp + 0x28) = esi;
    esi = MEM32(esp + 0x14);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 0x28); /* subss */
    MEM32(esp + 0x2C) = esi;
    esi = MEM32(esp + 0x18);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 0x2C); /* subss */
    MEM32(esp + 0x30) = esi;
    esi = MEM32(esp + 0x10);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 0x30); /* subss */
    MEM32(esp + 0x34) = esi;
    esi = MEM32(esp + 0x14);
    MEM32(esp + 0x38) = esi;
    esi = MEM32(esp + 0x18);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 0x34); /* subss */
    MEM32(esp + 0x3C) = esi;
    esi = MEM32(esp + 0x10);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 0x38); /* subss */
    MEM32(esp + 0x40) = esi;
    esi = MEM32(esp + 0x14);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x44) = esi;
    esi = MEM32(esp + 0x18);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM32(esp + 0x48) = esi;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x20); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x1C); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FC8AB; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_003FC73D: ;
    xmm1 = XMM_SCALAR(MEMF(edx)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ecx + 0x18); /* subss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    esi = MEM32(esp + 0x1C);
    xmm1 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ecx + 0x1C); /* subss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ecx + 0x20); /* subss */
    MEM32(esp + 4) = esi;
    esi = MEM32(esp + 0x20);
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    MEM32(esp + 8) = esi;
    esi = MEM32(esp + 0x24);
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 8); /* mulss */
    MEM32(esp + 0xC) = esi;
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0xC); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 4); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FC8AB; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_003FC7B9: ;
    xmm1 = XMM_SCALAR(MEMF(edx)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ecx + 0x24); /* subss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    esi = MEM32(esp + 0x28);
    xmm1 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ecx + 0x28); /* subss */
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ecx + 0x2C); /* subss */
    MEM32(esp + 4) = esi;
    esi = MEM32(esp + 0x2C);
    MEMF(esp + 0x30) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    MEM32(esp + 8) = esi;
    esi = MEM32(esp + 0x30);
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 8); /* mulss */
    MEM32(esp + 0xC) = esi;
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0xC); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 4); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FC8AB; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_003FC831: ;
    xmm1 = XMM_SCALAR(MEMF(edx)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ecx + 0x30); /* subss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    MEMF(esp + 0x34) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ecx + 0x34); /* subss */
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ecx + 0x38); /* subss */
    ecx = MEM32(esp + 0x34);
    edx = MEM32(esp + 0x38);
    MEMF(esp + 0x3C) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    MEM32(esp + 4) = ecx;
    ecx = MEM32(esp + 0x3C);
    MEM32(esp + 8) = edx;
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 8); /* mulss */
    MEM32(esp + 0xC) = ecx;
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0xC); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 4); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FC8AB; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_003FC8A9: ;
    SET_LO8(eax, 1);

loc_003FC8AB: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003FC980
 * Original: 0x003FC980 - 0x003FCB05 (389 bytes, 110 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FC980(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
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
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003FC980: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x2C);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x34);
    PUSH32(esp, edi);
    edi = MEM32(eax);
    ecx = esi + 0xC;
    edx = ecx;
    MEM32(edx) = edi;
    edi = MEM32(eax + 4);
    MEM32(edx + 4) = edi;
    eax = MEM32(eax + 8);
    MEM32(edx + 8) = eax;
    edx = MEM32(esp + 0x40);
    ebx = MEM32(edx);
    eax = esi + 0x18;
    edi = eax;
    MEM32(edi) = ebx;
    ebx = MEM32(edx + 4);
    MEM32(edi + 4) = ebx;
    edx = MEM32(edx + 8);
    MEM32(edi + 8) = edx;
    edi = MEM32(esp + 0x44);
    ebp = MEM32(edi);
    edx = esi + 0x24;
    ebx = edx;
    MEM32(ebx) = ebp;
    ebp = MEM32(edi + 4);
    MEM32(ebx + 4) = ebp;
    edi = MEM32(edi + 8);
    MEM32(ebx + 8) = edi;
    ebx = MEM32(esp + 0x48);
    ebp = MEM32(ebx);
    edi = esi + 0x30;
    MEM32(edi) = ebp;
    ebp = MEM32(ebx + 4);
    MEM32(edi + 4) = ebp;
    ebx = MEM32(ebx + 8);
    MEM32(edi + 8) = ebx;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx); /* subss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 4); /* subss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 8); /* subss */
    ecx = MEM32(esp + 0x10);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax); /* subss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 4); /* subss */
    MEM32(esp + 0x1C) = ecx;
    ecx = MEM32(esp + 0x14);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 8); /* subss */
    edx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x14);
    MEM32(esp + 0x20) = ecx;
    ecx = MEM32(esp + 0x18);
    MEM32(esp + 0x28) = edx;
    PUSH32(esp, esi);
    edx = esp + 0x2C;
    MEM32(esp + 0x30) = eax;
    MEM32(esp + 0x28) = ecx;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    MEM32(esp + 0x3C) = ecx;
    PUSH32(esp, 0x003FCA89u); RECOMP_ABI_CALL(0x005A0935u, sub_005A0935); /* call 0x005A0935 */

loc_003FCA89: ;
    xmm2 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x38) = xmm3.f[0]; /* movss */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp + 0x3C); /* divss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esi) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esi + 4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    POP32(esp, edi);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esi + 8) = xmm1.f[0]; /* movss */
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}
