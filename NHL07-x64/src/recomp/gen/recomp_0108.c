/**
 * nhl_07_recomp - Recompiled code chunk 108
 * Functions: 250 (0x0011ECD0 - 0x00125EC0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_0011ECD0
 * Original: 0x0011ECD0 - 0x0011ED43 (115 bytes, 35 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011ECD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011ECD0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    _fa = (uint32_t)(MEM32(esi + 0x58)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x58), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011ED3C; /* je: equal / zero */

loc_0011ECDE: ;
    xmm0 = XMM_SCALAR(MEMF(0x7D8B34)); /* movss */
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    MEM32(esp + 0xC) = 0;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0011ECFFu); RECOMP_ABI_CALL(0x000348C0u, sub_000348C0); /* call 0x000348C0 */

loc_0011ECFF: ;
    ecx = MEM32(esp + 0xC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    ecx = MEM32(esi + 0x3D8);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0011ED3C; /* jl: less (signed <) */

loc_0011ED1C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0011ED36; /* jle: less or equal (signed <=) */

loc_0011ED21: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011ED3C; /* jne: not equal / not zero */

loc_0011ED25: ;
    MEM32(ecx + 8) = edx;
    MEM32(ecx + 0xC) = 0xFFFFFFFFu;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0011ED36: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011ED3Cu); RECOMP_ABI_CALL(0x0002CE9Au, sub_0002CE9A); /* call 0x0002CE9A */

loc_0011ED3C: ;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011ED60
 * Original: 0x0011ED60 - 0x0011ED69 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011ED60(void)
{

loc_0011ED60: ;
    eax = ecx;
    MEM32(eax) = 0x7D9058;
    esp += 4; return; /* ret */

}

/**
 * sub_0011ED70
 * Original: 0x0011ED70 - 0x0011ED73 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011ED70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011ED70: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011ED80
 * Original: 0x0011ED80 - 0x0011ED8D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011ED80(void)
{

loc_0011ED80: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7D9068;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011ED90
 * Original: 0x0011ED90 - 0x0011ED9E (14 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011ED90(void)
{

loc_0011ED90: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011ED9Au); RECOMP_ABI_CALL(0x00017955u, sub_00017955); /* call 0x00017955 */

loc_0011ED9A: ;
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011EDB0
 * Original: 0x0011EDB0 - 0x0011EDB9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011EDB0(void)
{

loc_0011EDB0: ;
    eax = ecx;
    MEM32(eax) = 0x7D9084;
    esp += 4; return; /* ret */

}

/**
 * sub_0011EDC0
 * Original: 0x0011EDC0 - 0x0011EDC3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011EDC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011EDC0: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011EDD0
 * Original: 0x0011EDD0 - 0x0011EDDD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011EDD0(void)
{

loc_0011EDD0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7D9094;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011EDE0
 * Original: 0x0011EDE0 - 0x0011EE12 (50 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011EDE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011EDE0: ;
    eax = MEM32(0x8E8F84);
    ecx = MEM32(0x8E93E0);
    edx = MEM32(0x8E93DC);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x3F666666);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011EE0Cu); RECOMP_ABI_CALL(0x00014CE6u, sub_00014CE6); /* call 0x00014CE6 */

loc_0011EE0C: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011EE20
 * Original: 0x0011EE20 - 0x0011EE29 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011EE20(void)
{

loc_0011EE20: ;
    eax = ecx;
    MEM32(eax) = 0x7D90A4;
    esp += 4; return; /* ret */

}

/**
 * sub_0011EE30
 * Original: 0x0011EE30 - 0x0011EE33 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011EE30(void)
{

loc_0011EE30: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_0011EE40
 * Original: 0x0011EE40 - 0x0011EE4D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011EE40(void)
{

loc_0011EE40: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7D90B4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011EE50
 * Original: 0x0011EE50 - 0x0011EE85 (53 bytes, 20 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011EE50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011EE50: ;
    ecx = MEM32(0x8E8F84);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x20);
    edx = MEM32(eax + 0x38);
    eax = MEM32(eax + 0x30);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011EE78u); RECOMP_ABI_CALL(0x00014CE6u, sub_00014CE6); /* call 0x00014CE6 */

loc_0011EE78: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011EE7Eu); RECOMP_ABI_CALL(0x0002A4B0u, sub_0002A4B0); /* call 0x0002A4B0 */

loc_0011EE7E: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011EEA0
 * Original: 0x0011EEA0 - 0x0011EEA9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011EEA0(void)
{

loc_0011EEA0: ;
    eax = ecx;
    MEM32(eax) = 0x7D90BC;
    esp += 4; return; /* ret */

}

/**
 * sub_0011EEB0
 * Original: 0x0011EEB0 - 0x0011EEB3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011EEB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011EEB0: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011EEC0
 * Original: 0x0011EEC0 - 0x0011EECD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011EEC0(void)
{

loc_0011EEC0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7D90CC;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011EED0
 * Original: 0x0011EED0 - 0x0011EED9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011EED0(void)
{

loc_0011EED0: ;
    eax = ecx;
    MEM32(eax) = 0x7D90E8;
    esp += 4; return; /* ret */

}

/**
 * sub_0011EEE0
 * Original: 0x0011EEE0 - 0x0011EEE3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011EEE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011EEE0: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011EEF0
 * Original: 0x0011EEF0 - 0x0011EEFD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011EEF0(void)
{

loc_0011EEF0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7D90F8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011EF00
 * Original: 0x0011EF00 - 0x0011EF0E (14 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011EF00(void)
{

loc_0011EF00: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011EF0Au); RECOMP_ABI_CALL(0x00032444u, sub_00032444); /* call 0x00032444 */

loc_0011EF0A: ;
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011EF20
 * Original: 0x0011EF20 - 0x0011EF29 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011EF20(void)
{

loc_0011EF20: ;
    eax = ecx;
    MEM32(eax) = 0x7D9114;
    esp += 4; return; /* ret */

}

/**
 * sub_0011EF30
 * Original: 0x0011EF30 - 0x0011EF33 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011EF30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011EF30: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011EF40
 * Original: 0x0011EF40 - 0x0011EF4D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011EF40(void)
{

loc_0011EF40: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7D9124;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011EF50
 * Original: 0x0011EF50 - 0x0011EF5E (14 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011EF50(void)
{

loc_0011EF50: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011EF5Au); RECOMP_ABI_CALL(0x00017955u, sub_00017955); /* call 0x00017955 */

loc_0011EF5A: ;
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011EF70
 * Original: 0x0011EF70 - 0x0011EF79 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011EF70(void)
{

loc_0011EF70: ;
    eax = ecx;
    MEM32(eax) = 0x7D9138;
    esp += 4; return; /* ret */

}

/**
 * sub_0011EF80
 * Original: 0x0011EF80 - 0x0011EF83 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011EF80(void)
{

loc_0011EF80: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_0011EF90
 * Original: 0x0011EF90 - 0x0011EF9D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011EF90(void)
{

loc_0011EF90: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7D9148;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011EFA0
 * Original: 0x0011EFA0 - 0x0011EFAE (14 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011EFA0(void)
{

loc_0011EFA0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011EFAAu); RECOMP_ABI_CALL(0x00017955u, sub_00017955); /* call 0x00017955 */

loc_0011EFAA: ;
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011EFC0
 * Original: 0x0011EFC0 - 0x0011EFC9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011EFC0(void)
{

loc_0011EFC0: ;
    eax = ecx;
    MEM32(eax) = 0x7D9154;
    esp += 4; return; /* ret */

}

/**
 * sub_0011EFD0
 * Original: 0x0011EFD0 - 0x0011EFD3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011EFD0(void)
{

loc_0011EFD0: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_0011EFE0
 * Original: 0x0011EFE0 - 0x0011EFED (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011EFE0(void)
{

loc_0011EFE0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7D9164;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011EFF0
 * Original: 0x0011EFF0 - 0x0011EFF9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011EFF0(void)
{

loc_0011EFF0: ;
    eax = ecx;
    MEM32(eax) = 0x7D9188;
    esp += 4; return; /* ret */

}

/**
 * sub_0011F000
 * Original: 0x0011F000 - 0x0011F003 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011F000(void)
{

loc_0011F000: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_0011F010
 * Original: 0x0011F010 - 0x0011F01D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011F010(void)
{

loc_0011F010: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7D9198;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011F020
 * Original: 0x0011F020 - 0x0011F029 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011F020(void)
{

loc_0011F020: ;
    eax = ecx;
    MEM32(eax) = 0x7D91AC;
    esp += 4; return; /* ret */

}

/**
 * sub_0011F030
 * Original: 0x0011F030 - 0x0011F033 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011F030(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011F030: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011F040
 * Original: 0x0011F040 - 0x0011F04D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011F040(void)
{

loc_0011F040: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7D91BC;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011F050
 * Original: 0x0011F050 - 0x0011F193 (323 bytes, 87 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011F050(void)
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

loc_0011F050: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    eax = MEM32(esi + 0x20);
    xmm1 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011F06D; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0011F068: ;
    xmm0 = xmm1; /* movaps */
    goto loc_0011F072;

loc_0011F06D: ;
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x38); /* subss */

loc_0011F072: ;
    xmm1 = XMM_SCALAR(MEMF(0x7D91D8)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    ecx = esi;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011F0CD; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0011F081: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x48); PUSH32(esp, 0x0011F086u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0011F083u); } /* indirect call */
    }

loc_0011F086: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    SET_LO8(eax, MEM8(esi + 0x64));
    if (CMP_EQ(_fa, _fb)) goto loc_0011F0A9; /* je: equal / zero */

loc_0011F08D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011F0B5; /* jne: not equal / not zero */

loc_0011F091: ;
    xmm0 = XMM_SCALAR(MEMF(0x7D91D4)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7BA43C)); /* movss */
    goto loc_0011F109;

loc_0011F0A9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    xmm0 = XMM_SCALAR(MEMF(0x7D91D4)); /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_0011F0BD; /* jne: not equal / not zero */

loc_0011F0B5: ;
    xmm0 = XMM_SCALAR(MEMF(0x7BFF88)); /* movss */

loc_0011F0BD: ;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7BA43C)); /* movss */
    goto loc_0011F109;

loc_0011F0CD: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x0011F0D2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0011F0CFu); } /* indirect call */
    }

loc_0011F0D2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    SET_LO8(eax, MEM8(esi + 0x64));
    if (CMP_EQ(_fa, _fb)) goto loc_0011F0E7; /* je: equal / zero */

loc_0011F0D9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011F0F3; /* jne: not equal / not zero */

loc_0011F0DD: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A99C0)); /* movss */
    goto loc_0011F0FB;

loc_0011F0E7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    xmm0 = XMM_SCALAR(MEMF(0x7A99C0)); /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_0011F0FB; /* jne: not equal / not zero */

loc_0011F0F3: ;
    xmm0 = XMM_SCALAR(MEMF(0x7D9010)); /* movss */

loc_0011F0FB: ;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7C3B98)); /* movss */

loc_0011F109: ;
    ecx = esi;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0011F116u); RECOMP_ABI_CALL(0x0001C94Bu, sub_0001C94B); /* call 0x0001C94B */

loc_0011F116: ;
    fp_push(MEMF(0x7B8DF4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_0011F12B; /* jbe: below or equal (unsigned <=) */

loc_0011F122: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */

loc_0011F12B: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0011F132u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0011F12Fu); } /* indirect call */
    }

loc_0011F132: ;
    ecx = MEM32(eax + 0x20);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x38)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7D8EE0); /* comiss */
    xmm0 = XMM_SCALAR(MEMF(0x7D8B34)); /* movss */
    if ((_fca >= _fcb)) goto loc_0011F153; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs MEMF(0x7D8EE0)) */

loc_0011F14B: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */

loc_0011F153: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0011F162u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0011F15Fu); } /* indirect call */
    }

loc_0011F162: ;
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
    PUSH32(esp, 0x0011F189u); RECOMP_ABI_CALL(0x00014CE6u, sub_00014CE6); /* call 0x00014CE6 */

loc_0011F189: ;
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
 * sub_0011F1F0
 * Original: 0x0011F1F0 - 0x0011F20A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0011F1F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011F1F0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0011F1F9u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0011F1F9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011F207; /* je: equal / zero */

loc_0011F200: ;
    MEM32(eax) = 0x7D8FB4;
    esp += 4; return; /* ret */

loc_0011F207: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011F210
 * Original: 0x0011F210 - 0x0011F22A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0011F210(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011F210: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0011F219u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0011F219: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011F227; /* je: equal / zero */

loc_0011F220: ;
    MEM32(eax) = 0x7D8FE4;
    esp += 4; return; /* ret */

loc_0011F227: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011F230
 * Original: 0x0011F230 - 0x0011F24A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0011F230(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011F230: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0011F239u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0011F239: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011F247; /* je: equal / zero */

loc_0011F240: ;
    MEM32(eax) = 0x7D9018;
    esp += 4; return; /* ret */

loc_0011F247: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011F250
 * Original: 0x0011F250 - 0x0011F657 (1031 bytes, 269 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011F250(void)
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

loc_0011F250: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x3C);
    SET_LO8(eax, MEM8(ebp + 0x1DC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0011F650; /* jge: greater or equal (signed >=) */

loc_0011F266: ;
    eax = MEM32(0x8E8F84);
    ecx = MEM32(eax + 0x20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    MEM8(esp + 0x44) = 1;
    PUSH32(esp, 0x0011F27Du); RECOMP_ABI_CALL(0x000294B6u, sub_000294B6); /* call 0x000294B6 */

loc_0011F27D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0011F28F; /* jl: less (signed <) */

loc_0011F285: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0011F28F; /* jg: greater (signed >) */

loc_0011F28A: ;
    MEM8(esp + 0x3C) = 0;

loc_0011F28F: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AACB0)); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ebx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0011F2A5: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0011F2ABu); RECOMP_ABI_CALL(0x000253F2u, sub_000253F2); /* call 0x000253F2 */

loc_0011F2AB: ;
    xmm0 = XMM_SCALAR(MEMF(0x7B04A0)); /* movss */
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 4); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011F3AC; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esi + 4)) */

loc_0011F2C2: ;
    SET_LO8(eax, MEM8(esp + 0x48));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011F320; /* je: equal / zero */

loc_0011F2CA: ;
    edx = edi;
    PUSH32(esp, ecx);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    eax = esp + 0x3C;
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x0011F2E4u); RECOMP_ABI_CALL(0x000274C7u, sub_000274C7); /* call 0x000274C7 */

loc_0011F2E4: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi); /* subss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 4); /* subss */
    ecx = MEM32(esp + 0x20);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 8); /* subss */
    edx = MEM32(esp + 0x24);
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x28);
    goto loc_0011F361;

loc_0011F320: ;
    eax = MEM32(ebp + 0x20);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi); /* subss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 4); /* subss */
    ecx = MEM32(esp + 0x2C);
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 8); /* subss */
    edx = MEM32(esp + 0x30);
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x34);

loc_0011F361: ;
    MEM32(esp + 0x18) = edx;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    MEM32(esp + 0x1C) = eax;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm0.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEM32(esp + 0x14) = ecx;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011F3AC; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0011F3A4: ;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    ebx = edi;

loc_0011F3AC: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x3C (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0011F2A5; /* jl: less (signed <) */

loc_0011F3B6: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0011F3BF; /* jge: greater or equal (signed >=) */

loc_0011F3BA: ;
    ebx = 0x3C;

loc_0011F3BF: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0011F3C5u); RECOMP_ABI_CALL(0x000253F2u, sub_000253F2); /* call 0x000253F2 */

loc_0011F3C5: ;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x1C) = edx;
    edx = MEM32(ebp);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ebp;
    MEM32(esp + 0x1C) = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0011F3E4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0011F3E1u); } /* indirect call */
    }

loc_0011F3E4: ;
    eax = MEM32(eax + 0x20);
    xmm1 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011F404; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_0011F3F4: ;
    xmm2 = XMM_SCALAR(MEMF(0x7D8B34)); /* movss */
    MEMF(esp + 0x48) = xmm2.f[0]; /* movss */
    goto loc_0011F415;

loc_0011F404: ;
    xmm1 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */
    MEMF(esp + 0x48) = xmm1.f[0]; /* movss */
    xmm2 = xmm1; /* movaps */

loc_0011F415: ;
    eax = MEM32(ebp + 0xF0);
    xmm1 = XMM_SCALAR(MEMF(0x7D8ECC)); /* movss */
    _fca = xmm1.f[0]; _fcb = MEMF(eax + 0x1C); /* comiss */
    ecx = MEM32(0x8E8F84);
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011F4A9; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs MEMF(eax + 0x1C)) */

loc_0011F42F: ;
    xmm3 = XMM_SCALAR(MEMF(eax + 0x1C)); /* movss */
    _fca = xmm3.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011F4A9; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm0.f[0]) */

loc_0011F439: ;
    edx = MEM32(ecx + 0x20);
    xmm3 = XMM_SCALAR(MEMF(edx + 0x38)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011F4A9; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm3.f[0]) */

loc_0011F44A: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    _fca = xmm3.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011F4A9; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm1.f[0]) */

loc_0011F459: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011F461u); RECOMP_ABI_CALL(0x000253F2u, sub_000253F2); /* call 0x000253F2 */

loc_0011F461: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x4C); /* mulss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7D8ECC); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011F520; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7D8ECC)) */

loc_0011F47C: ;
    /* nop */

loc_0011F480: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0011F520; /* jge: greater or equal (signed >=) */

loc_0011F489: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011F490u); RECOMP_ABI_CALL(0x000253F2u, sub_000253F2); /* call 0x000253F2 */

loc_0011F490: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x4C); /* mulss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7D8ECC); /* comiss */
    if ((_fca > _fcb)) goto loc_0011F480; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(0x7D8ECC)) */

loc_0011F4A7: ;
    goto loc_0011F520;

loc_0011F4A9: ;
    xmm3 = XMM_SCALAR(MEMF(eax + 0x1C)); /* movss */
    _fca = xmm3.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011F523; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm1.f[0]) */

loc_0011F4B3: ;
    eax = MEM32(ecx + 0x20);
    xmm3 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    _fca = xmm3.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011F523; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm1.f[0]) */

loc_0011F4C4: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(0x7D03D8)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011F523; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm1.f[0]) */

loc_0011F4DB: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_0011F4E0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011F4E6u); RECOMP_ABI_CALL(0x000253F2u, sub_000253F2); /* call 0x000253F2 */

loc_0011F4E6: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x4C); /* mulss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7D03D8); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011F503; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7D03D8)) */

loc_0011F4FD: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xF (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0011F4E0; /* jl: less (signed <) */

loc_0011F503: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011F509u); RECOMP_ABI_CALL(0x000253F2u, sub_000253F2); /* call 0x000253F2 */

loc_0011F509: ;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x1C) = eax;

loc_0011F520: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_0011F523: ;
    xmm3 = XMM_SCALAR(MEMF(0x8E931C)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(0x7ABD78)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    POP32(esp, edi);
    xmm3.f[0] = xmm3.f[0] - xmm4.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    POP32(esp, esi);
    POP32(esp, ebx);
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011F54A; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm3.f[0]) */

loc_0011F545: ;
    xmm1 = xmm3; /* movaps */
    goto loc_0011F559;

loc_0011F54A: ;
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm3.f[0]; /* subss */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011F55F; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm1.f[0]) */

loc_0011F556: ;
    xmm1 = xmm2; /* movaps */

loc_0011F559: ;
    MEMF(esp + 8) = xmm1.f[0]; /* movss */

loc_0011F55F: ;
    xmm3 = XMM_SCALAR(MEMF(0x8AE700)); /* movss */
    xmm3.f[0] = xmm3.f[0] - xmm4.f[0]; /* subss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    _fca = xmm4.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011F57E; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs xmm3.f[0]) */

loc_0011F576: ;
    MEMF(esp + 0x10) = xmm3.f[0]; /* movss */
    goto loc_0011F590;

loc_0011F57E: ;
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm3.f[0]; /* subss */
    _fca = xmm2.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011F590; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm4.f[0]) */

loc_0011F58A: ;
    MEMF(esp + 0x10) = xmm2.f[0]; /* movss */

loc_0011F590: ;
    eax = MEM32(ebp + 0x20);
    xmm2 = XMM_SCALAR(MEMF(eax + 0x6C)); /* movss */
    _fca = xmm2.f[0]; _fcb = MEMF(0x7D8B34); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011F61A; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs MEMF(0x7D8B34)) */

loc_0011F5A1: ;
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 0x30); /* subss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(eax + 0x38); /* subss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x34); /* subss */
    PUSH32(esp, 0x3F800000);
    ecx = esp + 0x18;
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm2.f[0]; /* movss */
    PUSH32(esp, 0x0011F5DCu); RECOMP_ABI_CALL(0x000130D0u, sub_000130D0); /* call 0x000130D0 */

loc_0011F5DC: ;
    fp_pop(); /* fstp st(0) */
    eax = MEM32(ebp + 0x20);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x50)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x1C); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x4C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x18); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x48)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x14); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] / MEMF(eax + 0x6C); /* divss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011F61A; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0011F617: ;
    xmm0 = xmm1; /* movaps */

loc_0011F61A: ;
    ecx = MEM32(0x8E8F84);
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7D91DC); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7D8B2C); /* addss */
    edx = MEM32(esp + 0x10);
    eax = MEM32(esp + 8);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 3);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0011F64Du); RECOMP_ABI_CALL(0x00014CE6u, sub_00014CE6); /* call 0x00014CE6 */

loc_0011F64D: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0011F650: ;
    POP32(esp, ebp);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0011F760
 * Original: 0x0011F760 - 0x0011F77A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0011F760(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011F760: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0011F769u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0011F769: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011F777; /* je: equal / zero */

loc_0011F770: ;
    MEM32(eax) = 0x7D9038;
    esp += 4; return; /* ret */

loc_0011F777: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011F780
 * Original: 0x0011F780 - 0x0011F79A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0011F780(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011F780: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0011F789u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0011F789: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011F797; /* je: equal / zero */

loc_0011F790: ;
    MEM32(eax) = 0x7D9058;
    esp += 4; return; /* ret */

loc_0011F797: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011F7A0
 * Original: 0x0011F7A0 - 0x0011F7BA (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0011F7A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011F7A0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0011F7A9u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0011F7A9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011F7B7; /* je: equal / zero */

loc_0011F7B0: ;
    MEM32(eax) = 0x7D9084;
    esp += 4; return; /* ret */

loc_0011F7B7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011F7C0
 * Original: 0x0011F7C0 - 0x0011F7DA (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0011F7C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011F7C0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0011F7C9u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0011F7C9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011F7D7; /* je: equal / zero */

loc_0011F7D0: ;
    MEM32(eax) = 0x7D90A4;
    esp += 4; return; /* ret */

loc_0011F7D7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011F7E0
 * Original: 0x0011F7E0 - 0x0011F7FA (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0011F7E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011F7E0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0011F7E9u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0011F7E9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011F7F7; /* je: equal / zero */

loc_0011F7F0: ;
    MEM32(eax) = 0x7D90BC;
    esp += 4; return; /* ret */

loc_0011F7F7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011F800
 * Original: 0x0011F800 - 0x0011F83A (58 bytes, 20 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011F800(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011F800: ;
    ecx = MEM32(esp + 4);
    SET_LO8(eax, MEM8(ecx + 0x1DC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0011F837; /* jge: greater or equal (signed >=) */

loc_0011F80E: ;
    eax = MEM32(ecx + 0x54);
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011F837; /* je: equal / zero */

loc_0011F819: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011F837; /* je: equal / zero */

loc_0011F81E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011F837; /* je: equal / zero */

loc_0011F823: ;
    edx = MEM32(ecx + 0xF0);
    eax = MEM32(edx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011F837; /* jne: not equal / not zero */

loc_0011F830: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0011F836u); RECOMP_ABI_CALL(0x0002933Au, sub_0002933A); /* call 0x0002933A */

loc_0011F836: ;
    POP32(esp, ecx);

loc_0011F837: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011F850
 * Original: 0x0011F850 - 0x0011F86A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0011F850(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011F850: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0011F859u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0011F859: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011F867; /* je: equal / zero */

loc_0011F860: ;
    MEM32(eax) = 0x7D90E8;
    esp += 4; return; /* ret */

loc_0011F867: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011F870
 * Original: 0x0011F870 - 0x0011F88A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0011F870(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011F870: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0011F879u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0011F879: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011F887; /* je: equal / zero */

loc_0011F880: ;
    MEM32(eax) = 0x7D9114;
    esp += 4; return; /* ret */

loc_0011F887: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011F890
 * Original: 0x0011F890 - 0x0011F8AA (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0011F890(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011F890: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0011F899u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0011F899: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011F8A7; /* je: equal / zero */

loc_0011F8A0: ;
    MEM32(eax) = 0x7D9138;
    esp += 4; return; /* ret */

loc_0011F8A7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011F8B0
 * Original: 0x0011F8B0 - 0x0011F8CA (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0011F8B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011F8B0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0011F8B9u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0011F8B9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011F8C7; /* je: equal / zero */

loc_0011F8C0: ;
    MEM32(eax) = 0x7D9154;
    esp += 4; return; /* ret */

loc_0011F8C7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011F8D0
 * Original: 0x0011F8D0 - 0x0011F993 (195 bytes, 55 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011F8D0(void)
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

loc_0011F8D0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    SET_LO8(eax, MEM8(esi + 0x1DC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0011F98C; /* jge: greater or equal (signed >=) */

loc_0011F8E6: ;
    eax = MEM32(0x8E8F84);
    ecx = MEM32(eax + 0x20);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x64)); /* movss */
    edx = MEM32(esi);
    ecx = esi;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0011F900u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0011F8FDu); } /* indirect call */
    }

loc_0011F900: ;
    eax = MEM32(eax + 0x20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x10) = eax;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7D8EE0); /* comiss */
    xmm0 = XMM_SCALAR(MEMF(0x7D8B34)); /* movss */
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = edx;
    if ((_fca >= _fcb)) goto loc_0011F939; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs MEMF(0x7D8EE0)) */

loc_0011F931: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */

loc_0011F939: ;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    ecx = MEM32(0x8E8F84);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7B047C)); /* fmul dword ptr [0x7b047c] */
    eax = MEM32(ecx + 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x18) - fp_top()); /* fsubr dword ptr [esp + 0x18] */
    PUSH32(esp, 1);
    PUSH32(esp, 3);
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x3F666666);
    fp_push(MEMF(esp + 0x18)); /* fld float */
    ecx = MEM32(esp + 0x2C);
    { fp_top() = tan(fp_top()); fp_push(1.0); } /* fptan */
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 0x38)); /* fsub dword ptr [eax + 0x38] */
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x30)); /* fadd dword ptr [eax + 0x30] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011F989u); RECOMP_ABI_CALL(0x00014CE6u, sub_00014CE6); /* call 0x00014CE6 */

loc_0011F989: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0011F98C: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0011F9D0
 * Original: 0x0011F9D0 - 0x0011F9EA (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0011F9D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011F9D0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0011F9D9u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0011F9D9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011F9E7; /* je: equal / zero */

loc_0011F9E0: ;
    MEM32(eax) = 0x7D9188;
    esp += 4; return; /* ret */

loc_0011F9E7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011F9F0
 * Original: 0x0011F9F0 - 0x0011FB35 (325 bytes, 88 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011F9F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0011F9F0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    SET_LO8(eax, MEM8(edi + 0x1DC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0011FB2E; /* jge: greater or equal (signed >=) */

loc_0011FA06: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, ebx);
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AACB0)); /* movss */
    PUSH32(esp, esi);
    ebx = ebx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0011FA24: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011FA2Au); RECOMP_ABI_CALL(0x000253F2u, sub_000253F2); /* call 0x000253F2 */

loc_0011FA2A: ;
    ecx = MEM32(edi + 0x20);
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x30)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax); /* subss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 0x34)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(eax + 4); /* subss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 8); /* subss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm0.f[0]; /* mulss */
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011FA7D; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0011FA75: ;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    ebx = esi;

loc_0011FA7D: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x14 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0011FA24; /* jl: less (signed <) */

loc_0011FA83: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    if (CMP_L(_fas, _fbs)) goto loc_0011FB08; /* jl: less (signed <) */

loc_0011FA96: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    _fca = xmm1.f[0]; _fcb = MEMF(0x7D91E0); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011FAE6; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs MEMF(0x7D91E0)) */

loc_0011FAA5: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0011FAABu); RECOMP_ABI_CALL(0x000253F2u, sub_000253F2); /* call 0x000253F2 */

loc_0011FAAB: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7C3B84)); /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x1C); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011FADC; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esp + 0x1C)) */

loc_0011FAD2: ;
    xmm0 = XMM_SCALAR(MEMF(0x7D8B2C)); /* movss */
    goto loc_0011FB02;

loc_0011FADC: ;
    xmm0 = XMM_SCALAR(MEMF(0x7D8B30)); /* movss */
    goto loc_0011FB02;

loc_0011FAE6: ;
    eax = MEM32(edi + 0x20);
    xmm1 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */

loc_0011FB02: ;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */

loc_0011FB08: ;
    eax = MEM32(0x8E8F84);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, 1);
    PUSH32(esp, 3);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0011FB29u); RECOMP_ABI_CALL(0x00014CE6u, sub_00014CE6); /* call 0x00014CE6 */

loc_0011FB29: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0011FB2E: ;
    POP32(esp, edi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011FB90
 * Original: 0x0011FB90 - 0x0011FBAA (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0011FB90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011FB90: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0011FB99u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0011FB99: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011FBA7; /* je: equal / zero */

loc_0011FBA0: ;
    MEM32(eax) = 0x7D91AC;
    esp += 4; return; /* ret */

loc_0011FBA7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011FBB0
 * Original: 0x0011FBB0 - 0x0011FBBE (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011FBB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011FBB0: ;
    edx = MEM32(ecx + 0xC0);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(eax, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    esp += 4; return; /* ret */

}

/**
 * sub_0011FBD0
 * Original: 0x0011FBD0 - 0x0011FBD4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011FBD0(void)
{

loc_0011FBD0: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_0011FBE0
 * Original: 0x0011FBE0 - 0x0011FBE3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011FBE0(void)
{

loc_0011FBE0: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0011FBF0
 * Original: 0x0011FBF0 - 0x0011FBF4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011FBF0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0011FBF0: ;
    fp_push(MEMF(ecx + 0x30)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0011FC00
 * Original: 0x0011FC00 - 0x0011FC0A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011FC00(void)
{

loc_0011FC00: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 0x38) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011FC10
 * Original: 0x0011FC10 - 0x0011FC1B (11 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011FC10(void)
{

loc_0011FC10: ;
    eax = ecx;
    ecx = MEM32(eax);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0011FC1Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0011FC17u); } /* indirect call */
    }

loc_0011FC1A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0011FC20
 * Original: 0x0011FC20 - 0x0011FC8A (106 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011FC20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011FC20: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0011FC24: ;
    ecx = MEM32(edi + 0x8F00F8);
    PUSH32(esp, 1);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0011FC34u); RECOMP_ABI_CALL(0x0002A76Cu, sub_0002A76C); /* call 0x0002A76C */

loc_0011FC34: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011FC7F; /* je: equal / zero */

loc_0011FC3A: ;
    /* nop */

loc_0011FC40: ;
    eax = MEM32(esi + 0x3D8);
    ecx = MEM32(eax);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0011FC4Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0011FC4Bu); } /* indirect call */
    }

loc_0011FC4E: ;
    PUSH32(esp, 0x0011FC53u); RECOMP_ABI_CALL(0x0001C491u, sub_0001C491); /* call 0x0001C491 */

loc_0011FC53: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax + 0x28) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011FC6C; /* jne: not equal / not zero */

loc_0011FC58: ;
    ecx = MEM32(eax + 0x34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011FC6C; /* je: equal / zero */

loc_0011FC5F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011FC65u); RECOMP_ABI_CALL(0x0001C491u, sub_0001C491); /* call 0x0001C491 */

loc_0011FC65: ;
    ecx = eax;
    PUSH32(esp, 0x0011FC6Cu); RECOMP_ABI_CALL(0x0001D51Cu, sub_0001D51C); /* call 0x0001D51C */

loc_0011FC6C: ;
    PUSH32(esp, 1);
    ecx = esi + 0x200;
    PUSH32(esp, 0x0011FC79u); RECOMP_ABI_CALL(0x0002A76Cu, sub_0002A76C); /* call 0x0002A76C */

loc_0011FC79: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011FC40; /* jne: not equal / not zero */

loc_0011FC7F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0011FC24; /* jl: less (signed <) */

loc_0011FC87: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0011FCB0
 * Original: 0x0011FCB0 - 0x0011FDE6 (310 bytes, 86 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011FCB0(void)
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

loc_0011FCB0: ;
    eax = MEM32(0x8E8F84);
    ecx = MEM32(eax + 0xA8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0011FDE2; /* jge: greater or equal (signed >=) */

loc_0011FCC6: ;
    eax = MEM32(0x8EACE4);
    SET_LO8(ecx, MEM8(eax + 4));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011FCDC; /* je: equal / zero */

loc_0011FCD2: ;
    _fa = (uint32_t)(MEM32(eax + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x24), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011FDE2; /* je: equal / zero */

loc_0011FCDC: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    eax = MEM32(esi + 0x3D8);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8AC088) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0x8AC088 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011FDE1; /* jne: not equal / not zero */

loc_0011FCF3: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011FDE1; /* jne: not equal / not zero */

loc_0011FCFD: ;
    ecx = MEM32(0x8EACE0);
    PUSH32(esp, 0x0011FD08u); RECOMP_ABI_CALL(0x0001734Cu, sub_0001734C); /* call 0x0001734C */

loc_0011FD08: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011FD26; /* je: equal / zero */

loc_0011FD0C: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0011FD14u); RECOMP_ABI_CALL(0x00011861u, sub_00011861); /* call 0x00011861 */

loc_0011FD14: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011FD26; /* je: equal / zero */

loc_0011FD18: ;
    SET_LO8(eax, MEM8(esi + 0x1DC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0011FDE1; /* jl: less (signed <) */

loc_0011FD26: ;
    ecx = MEM32(esi + 0x1D4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0011FD32u); RECOMP_ABI_CALL(0x0001D030u, sub_0001D030); /* call 0x0001D030 */

loc_0011FD32: ;
    ecx = MEM32(eax + 0x24);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011FD4A; /* je: equal / zero */

loc_0011FD3C: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0011FD41u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0011FD3Eu); } /* indirect call */
    }

loc_0011FD41: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011FDE1; /* je: equal / zero */

loc_0011FD4A: ;
    ecx = esi;
    PUSH32(esp, 0x0011FD51u); RECOMP_ABI_CALL(0x0002152Cu, sub_0002152C); /* call 0x0002152C */

loc_0011FD51: ;
    fp_push(MEMF(0x7AEBF0)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_0011FDCB; /* jbe: below or equal (unsigned <=) */

loc_0011FD5D: ;
    eax = MEM32(esi + 0x20);
    xmm1 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011FD72; /* jb: below (unsigned <) (xmm1.f[0] vs xmm2.f[0]) */

loc_0011FD6D: ;
    xmm0 = xmm1; /* movaps */
    goto loc_0011FD79;

loc_0011FD72: ;
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */

loc_0011FD79: ;
    xmm1 = XMM_SCALAR(MEMF(0x7D958C)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011FDCB; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0011FD86: ;
    fp_push(MEMF(eax + 0x60)); /* fld float */
    eax = MEM32(0x8E8F84);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    eax = MEM32(eax + 0x20);
    fp_top() = sin(fp_top()); /* fsin */
    ecx = MEM32(esi + 0x20);
    xmm1 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 0x38); /* subss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ecx + 0x30); /* subss */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 4); /* mulss */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0xC); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0011FDE1; /* ja: above (unsigned >) (xmm2.f[0] vs xmm0.f[0]) */

loc_0011FDCB: ;
    ecx = MEM32(esi + 0x3D8);
    PUSH32(esp, 0x0011FDD6u); RECOMP_ABI_CALL(0x0003315Au, sub_0003315A); /* call 0x0003315A */

loc_0011FDD6: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011FDDEu); RECOMP_ABI_CALL(0x00026392u, sub_00026392); /* call 0x00026392 */

loc_0011FDDE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0011FDE1: ;
    POP32(esp, esi);

loc_0011FDE2: ;
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
 * sub_0011FE40
 * Original: 0x0011FE40 - 0x001200D2 (658 bytes, 204 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0011FE40(void)
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

loc_0011FE40: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = eax;

loc_0011FE53: ;
    ecx = MEM32(eax + 0x8F00F8);
    PUSH32(esp, 1);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0011FE63u); RECOMP_ABI_CALL(0x0002A76Cu, sub_0002A76C); /* call 0x0002A76C */

loc_0011FE63: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001200B6; /* je: equal / zero */

loc_0011FE6D: ;
    /* nop */

loc_0011FE70: ;
    eax = MEM32(0x8E99D8);
    edx = MEM32(esi);
    ecx = esi;
    MEM32(esp + 0x14) = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0011FE80u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0011FE7Du); } /* indirect call */
    }

loc_0011FE80: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7AB7D0)); /* fmul dword ptr [0x7ab7d0] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_001200B6; /* jbe: below or equal (unsigned <=) */

loc_0011FE94: ;
    xmm0 = XMM_SCALAR(MEMF(0x8E99D8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AB7D0); /* mulss */
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x0011FEB1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0011FEAEu); } /* indirect call */
    }

loc_0011FEB1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012009F; /* je: equal / zero */

loc_0011FEB9: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0011FEBFu); RECOMP_ABI_CALL(0x0002BD0Bu, sub_0002BD0B); /* call 0x0002BD0B */

loc_0011FEBF: ;
    ebp = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00120096; /* je: equal / zero */

loc_0011FECC: ;
    eax = MEM32(0x8EACE0);
    SET_LO8(ecx, MEM8(eax + 4));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012001D; /* je: equal / zero */

loc_0011FEDC: ;
    edi = eax + 0x2C;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012001D; /* je: equal / zero */

loc_0011FEE9: ;
    ecx = MEM32(eax + 0x1D4);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0011FEF5u); RECOMP_ABI_CALL(0x0001D030u, sub_0001D030); /* call 0x0001D030 */

loc_0011FEF5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012001D; /* je: equal / zero */

loc_0011FF00: ;
    edi = MEM32(edi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012001D; /* je: equal / zero */

loc_0011FF0A: ;
    PUSH32(esp, edi);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0011FF12u); RECOMP_ABI_CALL(0x00011861u, sub_00011861); /* call 0x00011861 */

loc_0011FF12: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012001D; /* je: equal / zero */

loc_0011FF1A: ;
    SET_LO8(eax, MEM8(esi + 0x1DC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0012001D; /* jge: greater or equal (signed >=) */

loc_0011FF28: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012009F; /* jne: not equal / not zero */

loc_0011FF30: ;
    edx = MEM32(esi + 0x1D4);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0011FF3Cu); RECOMP_ABI_CALL(0x0001D030u, sub_0001D030); /* call 0x0001D030 */

loc_0011FF3C: ;
    edi = MEM32(eax + 0x24);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012009F; /* je: equal / zero */

loc_0011FF4A: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0011FF51u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0011FF4Eu); } /* indirect call */
    }

loc_0011FF51: ;
    ebx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0011FF58u); RECOMP_ABI_CALL(0x00013D96u, sub_00013D96); /* call 0x00013D96 */

loc_0011FF58: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012009F; /* jne: not equal / not zero */

loc_0011FF60: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0011FF67u); RECOMP_ABI_CALL(0x00029380u, sub_00029380); /* call 0x00029380 */

loc_0011FF67: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012009F; /* je: equal / zero */

loc_0011FF6F: ;
    PUSH32(esp, 0xE6);
    PUSH32(esp, 0x7D9670);
    PUSH32(esp, 0x64);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0011FF80u); RECOMP_ABI_CALL(0x00028B2Eu, sub_00028B2E); /* call 0x00028B2E */

loc_0011FF80: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x8E9708;
    ebx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0011FF8Fu); RECOMP_ABI_CALL(0x0001C252u, sub_0001C252); /* call 0x0001C252 */

loc_0011FF8F: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    SET_LO8(eax, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012009F; /* je: equal / zero */

loc_0011FF9C: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0011FFA3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0011FFA0u); } /* indirect call */
    }

loc_0011FFA3: ;
    edi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0011FFAAu); RECOMP_ABI_CALL(0x0001A371u, sub_0001A371); /* call 0x0001A371 */

loc_0011FFAA: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012009F; /* je: equal / zero */

loc_0011FFB2: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0011FFBBu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0011FFBB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011FFCE; /* je: equal / zero */

loc_0011FFC2: ;
    PUSH32(esp, esi);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0011FFCAu); RECOMP_ABI_CALL(0x00019296u, sub_00019296); /* call 0x00019296 */

loc_0011FFCA: ;
    edi = eax;
    goto loc_0011FFD0;

loc_0011FFCE: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0011FFD0: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    MEM32(esp + 0x20) = 0;
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0011FFF1u); RECOMP_ABI_CALL(0x000348C0u, sub_000348C0); /* call 0x000348C0 */

loc_0011FFF1: ;
    ebp = MEM32(esp + 0x20);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 2 (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(edi + 0x38) = LO8(ecx);
    edx = MEM32(esi + 0x1D4);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012000Eu); RECOMP_ABI_CALL(0x0001D030u, sub_0001D030); /* call 0x0001D030 */

loc_0012000E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00120018u); RECOMP_ABI_CALL(0x000284F3u, sub_000284F3); /* call 0x000284F3 */

loc_00120018: ;
    goto loc_0012009F;

loc_0012001D: ;
    eax = MEM32(0x8EACE4);
    SET_LO8(ecx, MEM8(eax + 4));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00120051; /* jne: not equal / not zero */

loc_00120029: ;
    PUSH32(esp, 0xC3);
    PUSH32(esp, 0x7D9670);
    PUSH32(esp, 0x64);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012003Au); RECOMP_ABI_CALL(0x00028B2Eu, sub_00028B2E); /* call 0x00028B2E */

loc_0012003A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x8E9708;
    edi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00120049u); RECOMP_ABI_CALL(0x0001C252u, sub_0001C252); /* call 0x0001C252 */

loc_00120049: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00120051; /* jl: less (signed <) */

loc_0012004D: ;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_00120053;

loc_00120051: ;
    SET_LO8(ebx, 1);

loc_00120053: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0012005Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00120057u); } /* indirect call */
    }

loc_0012005A: ;
    eax = MEM32(eax + 0x20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00120067u); RECOMP_ABI_CALL(0x000294B6u, sub_000294B6); /* call 0x000294B6 */

loc_00120067: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0012007C; /* jl: less (signed <) */

loc_0012006E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00120078; /* jle: less or equal (signed <=) */

loc_00120073: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012007C; /* jne: not equal / not zero */

loc_00120078: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00120086; /* jne: not equal / not zero */

loc_0012007C: ;
    SET_LO8(eax, MEM8(esi + 0x1DC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0012009F; /* jl: less (signed <) */

loc_00120086: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00120091u); RECOMP_ABI_CALL(0x0002DE1Cu, sub_0002DE1C); /* call 0x0002DE1C */

loc_00120091: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0012009F;

loc_00120096: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012009Cu); RECOMP_ABI_CALL(0x00019C55u, sub_00019C55); /* call 0x00019C55 */

loc_0012009C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0012009F: ;
    PUSH32(esp, 1);
    ecx = esi + 0x200;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001200ACu); RECOMP_ABI_CALL(0x0002A76Cu, sub_0002A76C); /* call 0x0002A76C */

loc_001200AC: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011FE70; /* jne: not equal / not zero */

loc_001200B6: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0011FE53; /* jl: less (signed <) */

loc_001200CA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
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
 * sub_00120008
 * Original: 0x00120008 - 0x001200D2 (202 bytes, 71 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120008(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00120008: ;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0012000Eu); RECOMP_ABI_CALL(0x0001D030u, sub_0001D030); /* call 0x0001D030 */

loc_0012000E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    PUSH32(esp, 0x00120018u); RECOMP_ABI_CALL(0x000284F3u, sub_000284F3); /* call 0x000284F3 */

loc_00120018: ;
    goto loc_0012009F;

    eax = MEM32(0x8EACE4);
    SET_LO8(ecx, MEM8(eax + 4));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00120051; /* jne: not equal / not zero */

loc_00120029: ;
    PUSH32(esp, 0xC3);
    PUSH32(esp, 0x7D9670);
    PUSH32(esp, 0x64);
    PUSH32(esp, 0x0012003Au); RECOMP_ABI_CALL(0x00028B2Eu, sub_00028B2E); /* call 0x00028B2E */

loc_0012003A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x8E9708;
    edi = eax;
    PUSH32(esp, 0x00120049u); RECOMP_ABI_CALL(0x0001C252u, sub_0001C252); /* call 0x0001C252 */

loc_00120049: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00120051; /* jl: less (signed <) */

loc_0012004D: ;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_00120053;

loc_00120051: ;
    SET_LO8(ebx, 1);

loc_00120053: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0012005Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00120057u); } /* indirect call */
    }

loc_0012005A: ;
    eax = MEM32(eax + 0x20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00120067u); RECOMP_ABI_CALL(0x000294B6u, sub_000294B6); /* call 0x000294B6 */

loc_00120067: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0012007C; /* jl: less (signed <) */

loc_0012006E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00120078; /* jle: less or equal (signed <=) */

loc_00120073: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012007C; /* jne: not equal / not zero */

loc_00120078: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00120086; /* jne: not equal / not zero */

loc_0012007C: ;
    SET_LO8(eax, MEM8(esi + 0x1DC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0012009F; /* jl: less (signed <) */

loc_00120086: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00120091u); RECOMP_ABI_CALL(0x0002DE1Cu, sub_0002DE1C); /* call 0x0002DE1C */

loc_00120091: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0012009F;

    PUSH32(esp, esi);
    PUSH32(esp, 0x0012009Cu); RECOMP_ABI_CALL(0x00019C55u, sub_00019C55); /* call 0x00019C55 */

loc_0012009C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0012009F: ;
    PUSH32(esp, 1);
    ecx = esi + 0x200;
    PUSH32(esp, 0x001200ACu); RECOMP_ABI_CALL(0x0002A76Cu, sub_0002A76C); /* call 0x0002A76C */

loc_001200AC: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0011FE70(); return; } /* jne: not equal / not zero */

loc_001200B6: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_0011FE53(); return; } /* jl: less (signed <) */

loc_001200CA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00120009
 * Original: 0x00120009 - 0x001200D2 (201 bytes, 70 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120009(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00120009: ;
    PUSH32(esp, 0x0012000Eu); RECOMP_ABI_CALL(0x0001D030u, sub_0001D030); /* call 0x0001D030 */

loc_0012000E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    PUSH32(esp, 0x00120018u); RECOMP_ABI_CALL(0x000284F3u, sub_000284F3); /* call 0x000284F3 */

loc_00120018: ;
    goto loc_0012009F;

    eax = MEM32(0x8EACE4);
    SET_LO8(ecx, MEM8(eax + 4));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00120051; /* jne: not equal / not zero */

loc_00120029: ;
    PUSH32(esp, 0xC3);
    PUSH32(esp, 0x7D9670);
    PUSH32(esp, 0x64);
    PUSH32(esp, 0x0012003Au); RECOMP_ABI_CALL(0x00028B2Eu, sub_00028B2E); /* call 0x00028B2E */

loc_0012003A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x8E9708;
    edi = eax;
    PUSH32(esp, 0x00120049u); RECOMP_ABI_CALL(0x0001C252u, sub_0001C252); /* call 0x0001C252 */

loc_00120049: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00120051; /* jl: less (signed <) */

loc_0012004D: ;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_00120053;

loc_00120051: ;
    SET_LO8(ebx, 1);

loc_00120053: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0012005Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00120057u); } /* indirect call */
    }

loc_0012005A: ;
    eax = MEM32(eax + 0x20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00120067u); RECOMP_ABI_CALL(0x000294B6u, sub_000294B6); /* call 0x000294B6 */

loc_00120067: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0012007C; /* jl: less (signed <) */

loc_0012006E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00120078; /* jle: less or equal (signed <=) */

loc_00120073: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012007C; /* jne: not equal / not zero */

loc_00120078: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00120086; /* jne: not equal / not zero */

loc_0012007C: ;
    SET_LO8(eax, MEM8(esi + 0x1DC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0012009F; /* jl: less (signed <) */

loc_00120086: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00120091u); RECOMP_ABI_CALL(0x0002DE1Cu, sub_0002DE1C); /* call 0x0002DE1C */

loc_00120091: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0012009F;

    PUSH32(esp, esi);
    PUSH32(esp, 0x0012009Cu); RECOMP_ABI_CALL(0x00019C55u, sub_00019C55); /* call 0x00019C55 */

loc_0012009C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0012009F: ;
    PUSH32(esp, 1);
    ecx = esi + 0x200;
    PUSH32(esp, 0x001200ACu); RECOMP_ABI_CALL(0x0002A76Cu, sub_0002A76C); /* call 0x0002A76C */

loc_001200AC: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0011FE70(); return; } /* jne: not equal / not zero */

loc_001200B6: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_0011FE53(); return; } /* jl: less (signed <) */

loc_001200CA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0012000E
 * Original: 0x0012000E - 0x001200D2 (196 bytes, 69 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012000E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012000E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    PUSH32(esp, 0x00120018u); RECOMP_ABI_CALL(0x000284F3u, sub_000284F3); /* call 0x000284F3 */

loc_00120018: ;
    goto loc_0012009F;

    eax = MEM32(0x8EACE4);
    SET_LO8(ecx, MEM8(eax + 4));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00120051; /* jne: not equal / not zero */

loc_00120029: ;
    PUSH32(esp, 0xC3);
    PUSH32(esp, 0x7D9670);
    PUSH32(esp, 0x64);
    PUSH32(esp, 0x0012003Au); RECOMP_ABI_CALL(0x00028B2Eu, sub_00028B2E); /* call 0x00028B2E */

loc_0012003A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x8E9708;
    edi = eax;
    PUSH32(esp, 0x00120049u); RECOMP_ABI_CALL(0x0001C252u, sub_0001C252); /* call 0x0001C252 */

loc_00120049: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00120051; /* jl: less (signed <) */

loc_0012004D: ;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_00120053;

loc_00120051: ;
    SET_LO8(ebx, 1);

loc_00120053: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0012005Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00120057u); } /* indirect call */
    }

loc_0012005A: ;
    eax = MEM32(eax + 0x20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00120067u); RECOMP_ABI_CALL(0x000294B6u, sub_000294B6); /* call 0x000294B6 */

loc_00120067: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0012007C; /* jl: less (signed <) */

loc_0012006E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00120078; /* jle: less or equal (signed <=) */

loc_00120073: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012007C; /* jne: not equal / not zero */

loc_00120078: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00120086; /* jne: not equal / not zero */

loc_0012007C: ;
    SET_LO8(eax, MEM8(esi + 0x1DC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0012009F; /* jl: less (signed <) */

loc_00120086: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00120091u); RECOMP_ABI_CALL(0x0002DE1Cu, sub_0002DE1C); /* call 0x0002DE1C */

loc_00120091: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0012009F;

    PUSH32(esp, esi);
    PUSH32(esp, 0x0012009Cu); RECOMP_ABI_CALL(0x00019C55u, sub_00019C55); /* call 0x00019C55 */

loc_0012009C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0012009F: ;
    PUSH32(esp, 1);
    ecx = esi + 0x200;
    PUSH32(esp, 0x001200ACu); RECOMP_ABI_CALL(0x0002A76Cu, sub_0002A76C); /* call 0x0002A76C */

loc_001200AC: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0011FE70(); return; } /* jne: not equal / not zero */

loc_001200B6: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_0011FE53(); return; } /* jl: less (signed <) */

loc_001200CA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00120011
 * Original: 0x00120011 - 0x001200D2 (193 bytes, 68 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120011(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00120011: ;
    ecx = eax;
    PUSH32(esp, 0x00120018u); RECOMP_ABI_CALL(0x000284F3u, sub_000284F3); /* call 0x000284F3 */

loc_00120018: ;
    goto loc_0012009F;

    eax = MEM32(0x8EACE4);
    SET_LO8(ecx, MEM8(eax + 4));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00120051; /* jne: not equal / not zero */

loc_00120029: ;
    PUSH32(esp, 0xC3);
    PUSH32(esp, 0x7D9670);
    PUSH32(esp, 0x64);
    PUSH32(esp, 0x0012003Au); RECOMP_ABI_CALL(0x00028B2Eu, sub_00028B2E); /* call 0x00028B2E */

loc_0012003A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x8E9708;
    edi = eax;
    PUSH32(esp, 0x00120049u); RECOMP_ABI_CALL(0x0001C252u, sub_0001C252); /* call 0x0001C252 */

loc_00120049: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00120051; /* jl: less (signed <) */

loc_0012004D: ;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_00120053;

loc_00120051: ;
    SET_LO8(ebx, 1);

loc_00120053: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0012005Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00120057u); } /* indirect call */
    }

loc_0012005A: ;
    eax = MEM32(eax + 0x20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00120067u); RECOMP_ABI_CALL(0x000294B6u, sub_000294B6); /* call 0x000294B6 */

loc_00120067: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0012007C; /* jl: less (signed <) */

loc_0012006E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00120078; /* jle: less or equal (signed <=) */

loc_00120073: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012007C; /* jne: not equal / not zero */

loc_00120078: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00120086; /* jne: not equal / not zero */

loc_0012007C: ;
    SET_LO8(eax, MEM8(esi + 0x1DC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0012009F; /* jl: less (signed <) */

loc_00120086: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00120091u); RECOMP_ABI_CALL(0x0002DE1Cu, sub_0002DE1C); /* call 0x0002DE1C */

loc_00120091: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0012009F;

    PUSH32(esp, esi);
    PUSH32(esp, 0x0012009Cu); RECOMP_ABI_CALL(0x00019C55u, sub_00019C55); /* call 0x00019C55 */

loc_0012009C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0012009F: ;
    PUSH32(esp, 1);
    ecx = esi + 0x200;
    PUSH32(esp, 0x001200ACu); RECOMP_ABI_CALL(0x0002A76Cu, sub_0002A76C); /* call 0x0002A76C */

loc_001200AC: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0011FE70(); return; } /* jne: not equal / not zero */

loc_001200B6: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_0011FE53(); return; } /* jl: less (signed <) */

loc_001200CA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00120013
 * Original: 0x00120013 - 0x001200D2 (191 bytes, 67 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120013(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00120013: ;
    PUSH32(esp, 0x00120018u); RECOMP_ABI_CALL(0x000284F3u, sub_000284F3); /* call 0x000284F3 */

loc_00120018: ;
    goto loc_0012009F;

    eax = MEM32(0x8EACE4);
    SET_LO8(ecx, MEM8(eax + 4));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00120051; /* jne: not equal / not zero */

loc_00120029: ;
    PUSH32(esp, 0xC3);
    PUSH32(esp, 0x7D9670);
    PUSH32(esp, 0x64);
    PUSH32(esp, 0x0012003Au); RECOMP_ABI_CALL(0x00028B2Eu, sub_00028B2E); /* call 0x00028B2E */

loc_0012003A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x8E9708;
    edi = eax;
    PUSH32(esp, 0x00120049u); RECOMP_ABI_CALL(0x0001C252u, sub_0001C252); /* call 0x0001C252 */

loc_00120049: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00120051; /* jl: less (signed <) */

loc_0012004D: ;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_00120053;

loc_00120051: ;
    SET_LO8(ebx, 1);

loc_00120053: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0012005Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00120057u); } /* indirect call */
    }

loc_0012005A: ;
    eax = MEM32(eax + 0x20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00120067u); RECOMP_ABI_CALL(0x000294B6u, sub_000294B6); /* call 0x000294B6 */

loc_00120067: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0012007C; /* jl: less (signed <) */

loc_0012006E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00120078; /* jle: less or equal (signed <=) */

loc_00120073: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012007C; /* jne: not equal / not zero */

loc_00120078: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00120086; /* jne: not equal / not zero */

loc_0012007C: ;
    SET_LO8(eax, MEM8(esi + 0x1DC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0012009F; /* jl: less (signed <) */

loc_00120086: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00120091u); RECOMP_ABI_CALL(0x0002DE1Cu, sub_0002DE1C); /* call 0x0002DE1C */

loc_00120091: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0012009F;

    PUSH32(esp, esi);
    PUSH32(esp, 0x0012009Cu); RECOMP_ABI_CALL(0x00019C55u, sub_00019C55); /* call 0x00019C55 */

loc_0012009C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0012009F: ;
    PUSH32(esp, 1);
    ecx = esi + 0x200;
    PUSH32(esp, 0x001200ACu); RECOMP_ABI_CALL(0x0002A76Cu, sub_0002A76C); /* call 0x0002A76C */

loc_001200AC: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0011FE70(); return; } /* jne: not equal / not zero */

loc_001200B6: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_0011FE53(); return; } /* jl: less (signed <) */

loc_001200CA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00120180
 * Original: 0x00120180 - 0x00120419 (665 bytes, 195 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120180(void)
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

loc_00120180: ;
    eax = MEM32(0x8E8F84);
    ecx = MEM32(eax + 0xA8);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x14));
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(ecx * 4 + 0x8E9058);
    ecx = MEM32(esi + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00120361; /* jne: not equal / not zero */

loc_001201A1: ;
    ecx = MEM32(esi + 0x1A0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0012040A; /* jne: not equal / not zero */

loc_001201AF: ;
    edx = MEM32(esi + 0x1D4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001201BBu); RECOMP_ABI_CALL(0x0001D030u, sub_0001D030); /* call 0x0001D030 */

loc_001201BB: ;
    eax = MEM32(eax + 0x28);
    edx = MEM32(eax);
    ecx = eax + 0xC;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00120361; /* jne: not equal / not zero */

loc_001201CE: ;
    ecx = MEM32(eax + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00120361; /* je: equal / zero */

loc_001201D9: ;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x248);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00120366; /* je: equal / zero */

loc_001201E8: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00120366; /* jne: not equal / not zero */

loc_001201F1: ;
    ecx = MEM32(esi + 0x44);
    edx = MEM32(ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(edi + 8);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x001201FDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001201FAu); } /* indirect call */
    }

loc_001201FD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0012035F; /* jne: not equal / not zero */

loc_00120205: ;
    ecx = MEM32(esi + 0x44);
    eax = MEM32(ecx);
    SET_LO8(ebx, MEM8(edi + 0x2C));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x4C); PUSH32(esp, 0x00120210u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012020Du); } /* indirect call */
    }

loc_00120210: ;
    ecx = SX8(LO8(ebx));
    MEM32(esp + 0x10) = ecx;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp < 0 || g_fp_cmp == 2) /* fcompi */) goto loc_0012035F; /* jb: below (unsigned <) */

loc_00120227: ;
    ecx = esi;
    PUSH32(esp, 0x0012022Eu); RECOMP_ABI_CALL(0x0001AF38u, sub_0001AF38); /* call 0x0001AF38 */

loc_0012022E: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    ecx = esi;
    MEM32(esi + 0x2C) = eax;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00120246u); RECOMP_ABI_CALL(0x0001E0E3u, sub_0001E0E3); /* call 0x0001E0E3 */

loc_00120246: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001202B2; /* je: equal / zero */

loc_0012024A: ;
    edx = MEM32(0x8E8F84);
    eax = MEM32(edx + 0x20);
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x54)) >> 32) & 1);
    eax = eax + 0x54;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x14) = ecx;
    ecx = esp + 0x14;
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0x00120273u); RECOMP_ABI_CALL(0x0002F67Cu, sub_0002F67C); /* call 0x0002F67C */

loc_00120273: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(0x8E989C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x7D9544); /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_001202A1; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_0012029E: ;
    xmm1 = xmm0; /* movaps */

loc_001202A1: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    goto loc_00120301;

loc_001202B2: ;
    ecx = MEM32(esi + 0x3D8);
    _fa = (uint32_t)(MEM32(esi + 0x3E4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x3E4), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x10)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_00120301; /* jne: not equal / not zero */

loc_001202CC: ;
    xmm1 = XMM_SCALAR(MEMF(edi + 0x30)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001202E1; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_001202D6: ;
    xmm0 = xmm1; /* movaps */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    goto loc_00120301;

loc_001202E1: ;
    xmm1 = XMM_SCALAR(MEMF(edi + 0x30)); /* movss */
    _fca = xmm1.f[0]; _fcb = MEMF(0x7AA840); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00120301; /* jp: parity */

loc_001202F3: ;
    xmm1 = XMM_SCALAR(MEMF(0x7AD440)); /* movss */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */

loc_00120301: ;
    xmm1 = XMM_SCALAR(MEMF(0x7D955C)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00120314; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_0012030E: ;
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */

loc_00120314: ;
    edx = MEM32(0x8E8F84);
    eax = MEM32(edx + 0xC0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_00120342; /* jle: less or equal (signed <=) */

loc_00120324: ;
    SET_LO8(eax, MEM8(esi + 0x1DC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_GE(_fas, _fbs)) goto loc_00120342; /* jge: greater or equal (signed >=) */

loc_0012032E: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7D95A8); /* mulss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */

loc_00120342: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0x10);
    edx = MEM32(edi + 0x34);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00120356u); RECOMP_ABI_CALL(0x0002CAF3u, sub_0002CAF3); /* call 0x0002CAF3 */

loc_00120356: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012035Cu); RECOMP_ABI_CALL(0x00016FCDu, sub_00016FCD); /* call 0x00016FCD */

loc_0012035C: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0012035F: ;
    POP32(esp, ebx);

loc_00120360: ;
    POP32(esp, edi);

loc_00120361: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00120366: ;
    PUSH32(esp, 0x0012036Bu); RECOMP_ABI_CALL(0x0002747Cu, sub_0002747C); /* call 0x0002747C */

loc_0012036B: ;
    edi = MEM32(eax + 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001203D0; /* je: equal / zero */

loc_00120372: ;
    PUSH32(esp, 0x00120377u); RECOMP_ABI_CALL(0x0002747Cu, sub_0002747C); /* call 0x0002747C */

loc_00120377: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001203D0; /* jne: not equal / not zero */

loc_0012037B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00120381u); RECOMP_ABI_CALL(0x0001C491u, sub_0001C491); /* call 0x0001C491 */

loc_00120381: ;
    ecx = eax;
    PUSH32(esp, 0x00120388u); RECOMP_ABI_CALL(0x000174F0u, sub_000174F0); /* call 0x000174F0 */

loc_00120388: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001203A6; /* je: equal / zero */

loc_0012038C: ;
    eax = MEM32(edi);
    ecx = MEM32(edi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00120399u); RECOMP_ABI_CALL(0x0001C491u, sub_0001C491); /* call 0x0001C491 */

loc_00120399: ;
    ecx = eax;
    PUSH32(esp, 0x001203A0u); RECOMP_ABI_CALL(0x0002C0BCu, sub_0002C0BC); /* call 0x0002C0BC */

loc_001203A0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001203A6: ;
    xmm0 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7D955C); /* mulss */
    edx = MEM32(edi + 4);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001203C7u); RECOMP_ABI_CALL(0x0002CAF3u, sub_0002CAF3); /* call 0x0002CAF3 */

loc_001203C7: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001203D0: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x30);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001203DAu); RECOMP_ABI_CALL(0x00035C61u, sub_00035C61); /* call 0x00035C61 */

loc_001203DA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_00120360; /* jle: less or equal (signed <=) */

loc_001203E5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001203EBu); RECOMP_ABI_CALL(0x0002BD0Bu, sub_0002BD0B); /* call 0x0002BD0B */

loc_001203EB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00120360; /* je: equal / zero */

loc_001203F6: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00120401u); RECOMP_ABI_CALL(0x0002DE1Cu, sub_0002DE1C); /* call 0x0002DE1C */

loc_00120401: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0012040A: ;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00120414u); RECOMP_ABI_CALL(0x00031FE4u, sub_00031FE4); /* call 0x00031FE4 */

loc_00120414: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001204C0
 * Original: 0x001204C0 - 0x00120541 (129 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001204C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001204C0: ;
    PUSH32(esp, 0x001204C5u); RECOMP_ABI_CALL(0x0011FC20u, sub_0011FC20); /* call 0x0011FC20 */

loc_001204C5: ;
    PUSH32(esp, 0x001204CAu); RECOMP_ABI_CALL(0x00014791u, sub_00014791); /* call 0x00014791 */

loc_001204CA: ;
    ecx = eax;
    PUSH32(esp, 0x001204D1u); RECOMP_ABI_CALL(0x0002B955u, sub_0002B955); /* call 0x0002B955 */

loc_001204D1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001204EB; /* jne: not equal / not zero */

loc_001204D5: ;
    PUSH32(esp, 0x001204DAu); RECOMP_ABI_CALL(0x00031337u, sub_00031337); /* call 0x00031337 */

loc_001204DA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001204EB; /* jne: not equal / not zero */

loc_001204DE: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001204EB; /* je: equal / zero */

loc_001204E7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00120516; /* jne: not equal / not zero */

loc_001204EB: ;
    eax = MEM32(0x8E8F84);
    ecx = MEM32(eax + 0xA8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00120501; /* jl: less (signed <) */

loc_001204FA: ;
    PUSH32(esp, 0x001204FFu); RECOMP_ABI_CALL(0x00120180u, sub_00120180); /* call 0x00120180 */

loc_001204FF: ;
    goto loc_00120516;

loc_00120501: ;
    PUSH32(esp, 0x00120506u); RECOMP_ABI_CALL(0x00014791u, sub_00014791); /* call 0x00014791 */

loc_00120506: ;
    ecx = eax;
    PUSH32(esp, 0x0012050Du); RECOMP_ABI_CALL(0x0002B955u, sub_0002B955); /* call 0x0002B955 */

loc_0012050D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00120516; /* je: equal / zero */

loc_00120511: ;
    PUSH32(esp, 0x00120516u); RECOMP_ABI_CALL(0x0011FE40u, sub_0011FE40); /* call 0x0011FE40 */

loc_00120516: ;
    eax = MEM32(0x8F0214);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00120533; /* jne: not equal / not zero */

loc_0012051F: ;
    MEM32(0x8F0200) = eax;
    MEM32(0x8F0204) = eax;
    eax = 0x8F0200;
    MEM32(0x8F0214) = eax;

loc_00120533: ;
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00120570
 * Original: 0x00120570 - 0x00120591 (33 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00120570(void)
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

loc_00120570: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    fp_push(MEMF(ebp + 8)); /* fld float */
    fp_top() = recomp_frndint(fp_top(), g_fp_control_word); /* frndint */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ebp + 8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [ebp + 8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x45) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x45 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00120587; /* jne: not equal / not zero */

loc_00120583: ;
    fp_push(1.0); /* fld1 */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */

loc_00120587: ;
    MEMF(ebp + -4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -4)); /* fld float */
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
 * sub_001205A0
 * Original: 0x001205A0 - 0x001205D3 (51 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001205A0(void)
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

loc_001205A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7AA820); /* addss */
    MEMF(ebp + 8) = xmm0.f[0]; /* movss */
    fp_push(MEMF(ebp + 8)); /* fld float */
    fp_top() = recomp_frndint(fp_top(), g_fp_control_word); /* frndint */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ebp + 8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [ebp + 8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x45) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x45 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001205C9; /* jne: not equal / not zero */

loc_001205C5: ;
    fp_push(1.0); /* fld1 */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */

loc_001205C9: ;
    MEMF(ebp + -4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -4)); /* fld float */
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
 * sub_001205E0
 * Original: 0x001205E0 - 0x00120613 (51 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001205E0(void)
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

loc_001205E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7AA820); /* addss */
    MEMF(ebp + 8) = xmm0.f[0]; /* movss */
    fp_push(MEMF(ebp + 8)); /* fld float */
    fp_top() = recomp_frndint(fp_top(), g_fp_control_word); /* frndint */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ebp + 8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [ebp + 8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x45) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x45 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00120609; /* jne: not equal / not zero */

loc_00120605: ;
    fp_push(1.0); /* fld1 */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */

loc_00120609: ;
    MEMF(ebp + -4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -4)); /* fld float */
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
 * sub_00120620
 * Original: 0x00120620 - 0x00120624 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120620(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00120620: ;
    fp_push(MEMF(ecx + 0x5C)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00120630
 * Original: 0x00120630 - 0x00120648 (24 bytes, 7 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120630(void)
{

loc_00120630: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    eax = ecx;
    ecx = MEM32(esp + 8);
    MEMF(eax) = xmm0.f[0]; /* movss */
    edx = MEM32(ecx);
    MEM32(eax + 4) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00120650
 * Original: 0x00120650 - 0x00120661 (17 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120650(void)
{

loc_00120650: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    MEM32(ecx) = edx;
    eax = MEM32(eax + 4);
    MEM32(ecx + 4) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00120670
 * Original: 0x00120670 - 0x00120686 (22 bytes, 6 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120670(void)
{

loc_00120670: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    eax = MEM32(esp + 8);
    MEMF(ecx) = xmm0.f[0]; /* movss */
    edx = MEM32(eax);
    MEM32(ecx + 4) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00120690
 * Original: 0x00120690 - 0x001206A3 (19 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120690(void)
{

loc_00120690: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    ecx = MEM32(ecx + 4);
    MEM32(eax + 4) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001206B0
 * Original: 0x001206B0 - 0x001206BA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001206B0(void)
{

loc_001206B0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 4) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001206C0
 * Original: 0x001206C0 - 0x001206CA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001206C0(void)
{

loc_001206C0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 8) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001206D0
 * Original: 0x001206D0 - 0x001206DE (14 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001206D0(void)
{

loc_001206D0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 0xC) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001206F0
 * Original: 0x001206F0 - 0x001206FE (14 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001206F0(void)
{

loc_001206F0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 0x10) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00120710
 * Original: 0x00120710 - 0x0012071E (14 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120710(void)
{

loc_00120710: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 0x14) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00120730
 * Original: 0x00120730 - 0x0012073E (14 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120730(void)
{

loc_00120730: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 0x1C) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00120750
 * Original: 0x00120750 - 0x0012075E (14 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120750(void)
{

loc_00120750: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 0x20) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00120770
 * Original: 0x00120770 - 0x00120791 (33 bytes, 11 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120770(void)
{

loc_00120770: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    MEM32(ecx + 0x38) = edx;
    eax = MEM32(eax + 4);
    MEM32(ecx + 0x3C) = eax;
    eax = MEM32(esp + 8);
    edx = MEM32(eax);
    MEM32(ecx + 0x30) = edx;
    eax = MEM32(eax + 4);
    MEM32(ecx + 0x34) = eax;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001207A0
 * Original: 0x001207A0 - 0x001207A4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001207A0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001207A0: ;
    fp_push(MEMF(ecx + 0x44)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001207B0
 * Original: 0x001207B0 - 0x001207BE (14 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001207B0(void)
{

loc_001207B0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 0x44) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001207D0
 * Original: 0x001207D0 - 0x001207DE (14 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001207D0(void)
{

loc_001207D0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 0x18) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001207F0
 * Original: 0x001207F0 - 0x001207F4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001207F0(void)
{

loc_001207F0: ;
    eax = MEM32(ecx + 0x4C);
    esp += 4; return; /* ret */

}

/**
 * sub_00120800
 * Original: 0x00120800 - 0x0012080A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120800(void)
{

loc_00120800: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x4C) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00120810
 * Original: 0x00120810 - 0x0012081E (14 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120810(void)
{

loc_00120810: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 0x50) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00120830
 * Original: 0x00120830 - 0x0012083E (14 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120830(void)
{

loc_00120830: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 0x54) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00120850
 * Original: 0x00120850 - 0x0012085E (14 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120850(void)
{

loc_00120850: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 0x58) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00120870
 * Original: 0x00120870 - 0x0012087E (14 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120870(void)
{

loc_00120870: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 0x5C) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00120890
 * Original: 0x00120890 - 0x0012089A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120890(void)
{

loc_00120890: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x60) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001208A0
 * Original: 0x001208A0 - 0x001208AA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001208A0(void)
{

loc_001208A0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x64) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001208B0
 * Original: 0x001208B0 - 0x001208BA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001208B0(void)
{

loc_001208B0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x68) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001208C0
 * Original: 0x001208C0 - 0x001208CD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001208C0(void)
{

loc_001208C0: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 0x80) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001208D0
 * Original: 0x001208D0 - 0x001208DE (14 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001208D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001208D0: ;
    ecx = MEM32(ecx + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001208DD; /* je: equal / zero */

loc_001208D7: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x001208DDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001208DBu); } /* indirect call */
    }

loc_001208DD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001208F0
 * Original: 0x001208F0 - 0x001208F4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001208F0(void)
{

loc_001208F0: ;
    eax = MEM32(ecx + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_00120900
 * Original: 0x00120900 - 0x00120913 (19 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120900(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00120900: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 4); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0012090D; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esp + 4)) */

loc_0012090A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0012090D: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00120920
 * Original: 0x00120920 - 0x00120926 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120920(void)
{

loc_00120920: ;
    eax = 2;
    esp += 4; return; /* ret */

}

/**
 * sub_00120930
 * Original: 0x00120930 - 0x00120936 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120930(void)
{

loc_00120930: ;
    eax = 2;
    esp += 4; return; /* ret */

}

/**
 * sub_00120940
 * Original: 0x00120940 - 0x00120946 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120940(void)
{

loc_00120940: ;
    eax = 4;
    esp += 4; return; /* ret */

}

/**
 * sub_00120950
 * Original: 0x00120950 - 0x0012095C (12 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120950(void)
{

loc_00120950: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax * 4 + 0x8F033C);
    esp += 4; return; /* ret */

}

/**
 * sub_00120960
 * Original: 0x00120960 - 0x00120963 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120960(void)
{

loc_00120960: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00120970
 * Original: 0x00120970 - 0x001209A8 (56 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120970(void)
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

loc_00120970: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x34);
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012098C; /* jne: not equal / not zero */

loc_0012097E: ;
    eax = edi + 4;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00120989u); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_00120989: ;
    MEM32(edi + 8) = eax;

loc_0012098C: ;
    eax = MEM32(edi + 8);
    fp_push(MEMF(esi + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x24)); /* fsub dword ptr [esi + 0x24] */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(eax + 8)) & 0xFFFFu; _fb = (uint32_t)(0x13) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 8), 0x13 (16-bit) */
    POP32(esp, edi);
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, esi);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0xC)); /* fmul dword ptr [eax + 0xc] */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001209C0
 * Original: 0x001209C0 - 0x00120A4E (142 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001209C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_001209C0: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 1 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00120A48; /* je: equal / zero */

loc_001209CC: ;
    xmm0 = XMM_SCALAR(MEMF(0x8E931C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7C6A34); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001209E6; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7C6A34)) */

loc_001209DD: ;
    eax = MEM32(ecx * 4 + 0x8AE8D4);
    goto loc_001209ED;

loc_001209E6: ;
    eax = MEM32(ecx * 4 + 0x8AE8AC);

loc_001209ED: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00120A02; /* je: equal / zero */

loc_001209F2: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 7 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00120A02; /* je: equal / zero */

loc_001209F7: ;
    ecx = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    goto loc_00120A0A;

loc_00120A02: ;
    edx = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(edx)); /* movss */

loc_00120A0A: ;
    xmm1 = XMM_SCALAR(MEMF(0x7B04A0)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x7D9C88)); /* movss */
    /* nop */

loc_00120A20: ;
    xmm3 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00120A3B; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm3.f[0]) */

loc_00120A2D: ;
    xmm3 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm3.f[0] = xmm3.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm3.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00120A4B; /* ja: above (unsigned >) (xmm3.f[0] vs xmm0.f[0]) */

loc_00120A3B: ;
    xmm3 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm3.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00120A20; /* ja: above (unsigned >) (xmm3.f[0] vs xmm2.f[0]) */

loc_00120A48: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_00120A4B: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_00120A80
 * Original: 0x00120A80 - 0x00120AA9 (41 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120A80(void)
{

loc_00120A80: ;
    xmm0 = XMM_SCALAR(MEMF(0x7B04A0)); /* movss */
    eax = ecx;
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x8F95F4)); /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x8F95FC)); /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00120AC0
 * Original: 0x00120AC0 - 0x00120B1E (94 bytes, 30 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120AC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    int _cf = 0; /* carry flag */

loc_00120AC0: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00120AD3; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm2.f[0]) */

loc_00120ACE: ;
    xmm0 = xmm1; /* movaps */
    goto loc_00120ADA;

loc_00120AD3: ;
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */

loc_00120ADA: ;
    xmm3 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00120AEC; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm3.f[0]) */

loc_00120AE7: ;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

loc_00120AEC: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */
    _cf = 0; /* xor clears CF */
    SET_LO8(edx, 0); /* xor self */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm1 = xmm3; /* movaps */
    if ((_fca >= _fcb)) goto loc_00120B01; /* jae: above or equal (unsigned >=) (xmm1.f[0] vs xmm2.f[0]) */

loc_00120AFE: ;
    xmm1 = xmm0; /* movaps */

loc_00120B01: ;
    xmm4 = XMM_SCALAR(MEMF(ecx + 0x44)); /* movss */
    _fca = xmm4.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00120B0E; /* jb: below (unsigned <) (xmm4.f[0] vs xmm2.f[0]) */

loc_00120B0B: ;
    xmm0 = xmm3; /* movaps */

loc_00120B0E: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00120B19; /* jp: parity */

loc_00120B17: ;
    SET_LO8(edx, 1);

loc_00120B19: ;
    SET_LO8(eax, LO8(edx));
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00120B40
 * Original: 0x00120B40 - 0x00120B63 (35 bytes, 12 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120B40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00120B40: ;
    eax = MEM32(ecx + 0x40);
    ecx = MEM32(esp + 4);
    eax = MEM32(eax);
    ecx = MEM32(ecx + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00120B5E; /* je: equal / zero */

loc_00120B50: ;
    _fa = (uint32_t)(MEM32(eax * 4 + 0x8F033C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax * 4 + 0x8F033C), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00120B5E; /* je: equal / zero */

loc_00120B59: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 16; return; /* ret 12 */

loc_00120B5E: ;
    SET_LO8(eax, 1);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00120B70
 * Original: 0x00120B70 - 0x00120B80 (16 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120B70(void)
{

loc_00120B70: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = ecx;
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00120B90
 * Original: 0x00120B90 - 0x00120B91 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120B90(void)
{

loc_00120B90: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00120BA0
 * Original: 0x00120BA0 - 0x00120BA7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120BA0(void)
{

loc_00120BA0: ;
    MEM32(ecx) = 0x7D9C8C;
    esp += 4; return; /* ret */

}

/**
 * sub_00120BB0
 * Original: 0x00120BB0 - 0x00120BB6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120BB0(void)
{

loc_00120BB0: ;
    eax = 7;
    esp += 4; return; /* ret */

}

/**
 * sub_00120BC0
 * Original: 0x00120BC0 - 0x00120BC4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120BC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00120BC0: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

}

/**
 * sub_00120BD0
 * Original: 0x00120BD0 - 0x00120BD3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00120BD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00120BD0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00120BE0
 * Original: 0x00120BE0 - 0x00120BE7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120BE0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00120BE0: ;
    fp_push(MEMF(0x7AA840)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00120BF0
 * Original: 0x00120BF0 - 0x00120C37 (71 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120BF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00120BF0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00120C31; /* ja: above (unsigned >) */

loc_00120BF9: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x120C38); /* switch: 9 entries, 9 targets */
    if (_jt == 0x00120C00u) goto loc_00120C00;
    if (_jt == 0x00120C04u) goto loc_00120C04;
    if (_jt == 0x00120C07u) goto loc_00120C07;
    if (_jt == 0x00120C0Du) goto loc_00120C0D;
    if (_jt == 0x00120C13u) goto loc_00120C13;
    if (_jt == 0x00120C19u) goto loc_00120C19;
    if (_jt == 0x00120C1Fu) goto loc_00120C1F;
    if (_jt == 0x00120C25u) goto loc_00120C25;
    if (_jt == 0x00120C2Bu) goto loc_00120C2B;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00120C00: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

loc_00120C04: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_00120C07: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_00120C0D: ;
    eax = 2;
    esp += 4; return; /* ret */

loc_00120C13: ;
    eax = 3;
    esp += 4; return; /* ret */

loc_00120C19: ;
    eax = 4;
    esp += 4; return; /* ret */

loc_00120C1F: ;
    eax = 5;
    esp += 4; return; /* ret */

loc_00120C25: ;
    eax = 6;
    esp += 4; return; /* ret */

loc_00120C2B: ;
    eax = 7;
    esp += 4; return; /* ret */

loc_00120C31: ;
    eax = 0xFFFFFFFEu;
    esp += 4; return; /* ret */

}

/**
 * sub_00120C00
 * Original: 0x00120C00 - 0x00120C37 (55 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120C00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00120C00: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

}

/**
 * sub_00120C80
 * Original: 0x00120C80 - 0x00120D0D (141 bytes, 43 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120C80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00120C80: ;
    eax = MEM32(esp + 0xC);
    eax = MEM32(eax + 0x20);
    xmm1 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00120C96; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00120C94: ;
    goto loc_00120C9E;

loc_00120C96: ;
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 0x38); /* subss */

loc_00120C9E: ;
    xmm2 = XMM_SCALAR(MEMF(0x7D9A38)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00120CC8; /* ja: above (unsigned >) (xmm2.f[0] vs xmm1.f[0]) */

loc_00120CAB: ;
    xmm1 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00120CB7; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00120CB5: ;
    goto loc_00120CBF;

loc_00120CB7: ;
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 0x30); /* subss */

loc_00120CBF: ;
    _fca = xmm1.f[0]; _fcb = MEMF(0x7B70AC); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00120D03; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs MEMF(0x7B70AC)) */

loc_00120CC8: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x60);
    _fa = (uint32_t)(MEM32(edx + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edx + 0x20), eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00120D03; /* je: equal / zero */

loc_00120CD4: ;
    eax = eax & 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00120CE2; /* jne: not equal / not zero */

loc_00120CDB: ;
    SET_LO8(eax, MEM8(edx + 0x24));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00120D03; /* je: equal / zero */

loc_00120CE2: ;
    xmm1 = XMM_SCALAR(MEMF(edx + 0x10)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ecx + 0x54); /* subss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00120CF6; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00120CF1: ;
    xmm0 = xmm1; /* movaps */
    goto loc_00120CFA;

loc_00120CF6: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */

loc_00120CFA: ;
    _fca = xmm0.f[0]; _fcb = MEMF(0x8AE860); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00120D08; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x8AE860)) */

loc_00120D03: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 16; return; /* ret 12 */

loc_00120D08: ;
    SET_LO8(eax, 1);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00120D30
 * Original: 0x00120D30 - 0x00120D37 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120D30(void)
{

loc_00120D30: ;
    MEM32(ecx) = 0x7D9C8C;
    esp += 4; return; /* ret */

}

/**
 * sub_00120D40
 * Original: 0x00120D40 - 0x00120D78 (56 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120D40(void)
{

loc_00120D40: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = ecx;
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x34) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x44) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x48) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00120D90
 * Original: 0x00120D90 - 0x00120D91 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120D90(void)
{

loc_00120D90: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00120DA0
 * Original: 0x00120DA0 - 0x00120DEE (78 bytes, 25 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120DA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00120DA0: ;
    ecx = MEM32(esp + 0xC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00120DB1; /* jne: not equal / not zero */

loc_00120DAB: ;
    eax = MEM32(0x8F0394);
    esp += 4; return; /* ret */

loc_00120DB1: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00120DBC; /* jne: not equal / not zero */

loc_00120DB6: ;
    eax = MEM32(0x8F0390);
    esp += 4; return; /* ret */

loc_00120DBC: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00120DED; /* ja: above (unsigned >) */

loc_00120DC5: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x120DF0); /* switch: 5 entries, 3 targets */
    if (_jt == 0x00120DCCu) goto loc_00120DCC;
    if (_jt == 0x00120DD2u) goto loc_00120DD2;
    if (_jt == 0x00120DD8u) goto loc_00120DD8;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00120DCC: ;
    eax = MEM32(0x8F039C);
    esp += 4; return; /* ret */

loc_00120DD2: ;
    eax = MEM32(0x8F0398);
    esp += 4; return; /* ret */

loc_00120DD8: ;
    eax = MEM32(esp + 4);
    SET_LO8(ecx, MEM8(eax + 0x25));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    eax = MEM32(0x8F0398);
    if (CMP_NE(_fa, _fb)) goto loc_00120DED; /* jne: not equal / not zero */

loc_00120DE8: ;
    eax = MEM32(0x8F038C);

loc_00120DED: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00120DEE
 * Original: 0x00120DEE - 0x00120E20 (50 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120DEE(void)
{
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

loc_00120DEE: ;
    edi = edi;
    /* int3: debug-trap slide byte, stepped over */
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xDD20012;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(MEM8(eax)) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0xDD20012)); /* fmul dword ptr [0xdd20012] */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(MEM8(eax)) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    /* int3: debug-trap slide byte, stepped over */
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xCCCC0012u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
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

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00120E20
 * Original: 0x00120E20 - 0x00120F79 (345 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120E20(void)
{

loc_00120E20: ;
    xmm1 = XMM_SCALAR(MEMF(0x7AD318)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7D9CB0)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x7AD474)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x7AD3DC)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(0x7AD380)); /* movss */
    MEMF(0x8F0350) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AD3D4)); /* movss */
    MEMF(0x8F034C) = xmm1.f[0]; /* movss */
    MEMF(0x8F0354) = xmm1.f[0]; /* movss */
    MEMF(0x8F02FC) = xmm1.f[0]; /* movss */
    MEMF(0x8F0304) = xmm1.f[0]; /* movss */
    MEMF(0x8F031C) = xmm1.f[0]; /* movss */
    MEMF(0x8F0324) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x7AB8B8)); /* movss */
    MEMF(0x8F0358) = xmm0.f[0]; /* movss */
    MEMF(0x8F0364) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x7AB1C8)); /* movss */
    MEMF(0x8F0360) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7B0478)); /* movss */
    MEMF(0x8F0300) = xmm3.f[0]; /* movss */
    MEMF(0x8F030C) = xmm3.f[0]; /* movss */
    MEMF(0x8F0314) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x7BF2E8)); /* movss */
    MEMF(0x8F036C) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x7AD44C)); /* movss */
    MEMF(0x8F035C) = xmm4.f[0]; /* movss */
    MEMF(0x8F0368) = xmm2.f[0]; /* movss */
    MEMF(0x8F0308) = xmm0.f[0]; /* movss */
    MEMF(0x8F0310) = xmm0.f[0]; /* movss */
    MEMF(0x8F0318) = xmm2.f[0]; /* movss */
    MEMF(0x8F0320) = xmm3.f[0]; /* movss */
    MEMF(0x8F032C) = xmm3.f[0]; /* movss */
    MEMF(0x8F0328) = xmm0.f[0]; /* movss */
    MEMF(0x8F0334) = xmm4.f[0]; /* movss */
    MEMF(0x8F0330) = xmm0.f[0]; /* movss */
    MEMF(0x8F0338) = xmm2.f[0]; /* movss */
    MEMF(0x8F0370) = xmm0.f[0]; /* movss */
    MEMF(0x8F037C) = xmm0.f[0]; /* movss */
    MEMF(0x8F0378) = xmm1.f[0]; /* movss */
    MEMF(0x8F0384) = xmm0.f[0]; /* movss */
    MEMF(0x8F0380) = xmm1.f[0]; /* movss */
    MEMF(0x8F0374) = xmm1.f[0]; /* movss */
    MEMF(0x8F0388) = xmm2.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00120FD0
 * Original: 0x00120FD0 - 0x001210CC (252 bytes, 104 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120FD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00120FD0: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0x7D9D40;
    esi = edx;
    ecx = 0x10;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_00120FF4; /* jne: not equal / not zero */

loc_00120FEB: ;
    eax = MEM32(0x8F0390);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00120FF4: ;
    edi = 0x7D9D28;
    esi = edx;
    ecx = 0x14;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_0012100F; /* jne: not equal / not zero */

loc_00121006: ;
    eax = MEM32(0x8F0394);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0012100F: ;
    edi = 0x7D9D14;
    esi = edx;
    ecx = 0xF;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_0012102A; /* jne: not equal / not zero */

loc_00121021: ;
    eax = MEM32(0x8F038C);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0012102A: ;
    edi = 0x7D9D04;
    esi = edx;
    ecx = 0xD;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_00121045; /* jne: not equal / not zero */

loc_0012103C: ;
    eax = MEM32(0x8F0398);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00121045: ;
    edi = 0x7D9CF8;
    esi = edx;
    ecx = 0xA;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_00121060; /* jne: not equal / not zero */

loc_00121057: ;
    eax = MEM32(0x8F039C);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00121060: ;
    edi = 0x7D9CEC;
    esi = edx;
    ecx = 8;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_0012107B; /* jne: not equal / not zero */

loc_00121072: ;
    eax = MEM32(0x8F03A0);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0012107B: ;
    edi = 0x7D9CE0;
    esi = edx;
    ecx = 8;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_00121096; /* jne: not equal / not zero */

loc_0012108D: ;
    eax = MEM32(0x8F03A4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00121096: ;
    edi = 0x7D9CCC;
    esi = edx;
    ecx = 0xF;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_001210B1; /* jne: not equal / not zero */

loc_001210A8: ;
    eax = MEM32(0x8F03A8);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001210B1: ;
    esi = edx;
    edi = 0x7D9CB4;
    ecx = 0x14;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_001210C8; /* jne: not equal / not zero */

loc_001210C3: ;
    eax = MEM32(0x8F03AC);

loc_001210C8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00121110
 * Original: 0x00121110 - 0x001211E7 (215 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121110(void)
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

loc_00121110: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 0x10);
    ecx = MEM32(eax + 0x1C);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 4);
    xmm1 = XMM_SCALAR(MEMF(edi + 0xC)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x10)); /* movss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    esi = MEM32(esp + 0x10);
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esi + 0x50) = xmm1.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm1 = XMM_SCALAR(MEMF(0x8AE874)); /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00121164; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_0012115F: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0012118F; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_00121164: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0012116F; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_00121169: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_0012118F;

loc_0012116F: ;
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00121181; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_00121178: ;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0 = xmm1; /* movaps */
    goto loc_0012118F;

loc_00121181: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    xmm0 = xmm2; /* movaps */

loc_0012118F: ;
    MEMF(esi + 0x5C) = xmm0.f[0]; /* movss */
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001211C7; /* ja: above (unsigned >) */

loc_0012119C: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x1211E8); /* switch: 4 entries, 4 targets */
    if (_jt == 0x001211A3u) goto loc_001211A3;
    if (_jt == 0x001211ACu) goto loc_001211AC;
    if (_jt == 0x001211B5u) goto loc_001211B5;
    if (_jt == 0x001211BEu) goto loc_001211BE;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001211A3: ;
    MEM32(esi + 0x60) = 1;
    goto loc_001211D1;

loc_001211AC: ;
    MEM32(esi + 0x60) = 2;
    goto loc_001211D1;

loc_001211B5: ;
    MEM32(esi + 0x60) = 4;
    goto loc_001211D1;

loc_001211BE: ;
    MEM32(esi + 0x60) = 7;
    goto loc_001211D1;

loc_001211C7: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x001211CFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001211CDu); } /* indirect call */
    }

loc_001211CF: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001211D1: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001211E3; /* je: equal / zero */

loc_001211D6: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x001211DDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001211DAu); } /* indirect call */
    }

loc_001211DD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x60) = eax;

loc_001211E3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00121280
 * Original: 0x00121280 - 0x001212B2 (50 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121280(void)
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

loc_00121280: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00121290u); RECOMP_ABI_CALL(0x0001A105u, sub_0001A105); /* call 0x0001A105 */

loc_00121290: ;
    xmm0 = XMM_SCALAR(MEMF(0x8AE86C)); /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001212A7; /* jne: not equal / not zero */

loc_0012129F: ;
    xmm0 = XMM_SCALAR(MEMF(0x8AE868)); /* movss */

loc_001212A7: ;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 4)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001212C0
 * Original: 0x001212C0 - 0x0012141D (349 bytes, 103 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001212C0(void)
{
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_001212C0: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm0 = XMM_SCALAR(MEMF(0x8AE874)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    xmm2 = xmm1; /* movaps */
    if ((_fca > _fcb)) goto loc_001212E3; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_001212D3: ;
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm2 = xmm0; /* movaps */
    if ((_fca >= _fcb)) goto loc_001212E3; /* jae: above or equal (unsigned >=) (xmm1.f[0] vs xmm2.f[0]) */

loc_001212DF: ;
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */

loc_001212E3: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(ecx + 4) = xmm2.f[0]; /* movss */
    MEMF(ecx) = xmm1.f[0]; /* movss */
    xmm2 = xmm1; /* movaps */
    if ((_fca > _fcb)) goto loc_00121304; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_001212F4: ;
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm2 = xmm0; /* movaps */
    if ((_fca >= _fcb)) goto loc_00121304; /* jae: above or equal (unsigned >=) (xmm1.f[0] vs xmm2.f[0]) */

loc_00121300: ;
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */

loc_00121304: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(ecx + 0xC) = xmm2.f[0]; /* movss */
    MEMF(ecx + 8) = xmm1.f[0]; /* movss */
    xmm2 = xmm1; /* movaps */
    if ((_fca > _fcb)) goto loc_00121326; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_00121316: ;
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm2 = xmm0; /* movaps */
    if ((_fca >= _fcb)) goto loc_00121326; /* jae: above or equal (unsigned >=) (xmm1.f[0] vs xmm2.f[0]) */

loc_00121322: ;
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */

loc_00121326: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(ecx + 0x14) = xmm2.f[0]; /* movss */
    MEMF(ecx + 0x10) = xmm1.f[0]; /* movss */
    xmm2 = xmm1; /* movaps */
    if ((_fca > _fcb)) goto loc_00121348; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_00121338: ;
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm2 = xmm0; /* movaps */
    if ((_fca >= _fcb)) goto loc_00121348; /* jae: above or equal (unsigned >=) (xmm1.f[0] vs xmm2.f[0]) */

loc_00121344: ;
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */

loc_00121348: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(ecx + 0x1C) = xmm2.f[0]; /* movss */
    MEMF(ecx + 0x18) = xmm1.f[0]; /* movss */
    xmm2 = xmm1; /* movaps */
    if ((_fca > _fcb)) goto loc_0012136A; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_0012135A: ;
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm2 = xmm0; /* movaps */
    if ((_fca >= _fcb)) goto loc_0012136A; /* jae: above or equal (unsigned >=) (xmm1.f[0] vs xmm2.f[0]) */

loc_00121366: ;
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */

loc_0012136A: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(ecx + 0x24) = xmm2.f[0]; /* movss */
    MEMF(ecx + 0x20) = xmm1.f[0]; /* movss */
    xmm2 = xmm1; /* movaps */
    if ((_fca > _fcb)) goto loc_0012138C; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_0012137C: ;
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm2 = xmm0; /* movaps */
    if ((_fca >= _fcb)) goto loc_0012138C; /* jae: above or equal (unsigned >=) (xmm1.f[0] vs xmm2.f[0]) */

loc_00121388: ;
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */

loc_0012138C: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(ecx + 0x2C) = xmm2.f[0]; /* movss */
    MEMF(ecx + 0x28) = xmm1.f[0]; /* movss */
    xmm2 = xmm1; /* movaps */
    if ((_fca > _fcb)) goto loc_001213AE; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_0012139E: ;
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm2 = xmm0; /* movaps */
    if ((_fca >= _fcb)) goto loc_001213AE; /* jae: above or equal (unsigned >=) (xmm1.f[0] vs xmm2.f[0]) */

loc_001213AA: ;
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */

loc_001213AE: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(ecx + 0x34) = xmm2.f[0]; /* movss */
    MEMF(ecx + 0x30) = xmm1.f[0]; /* movss */
    xmm2 = xmm1; /* movaps */
    if ((_fca > _fcb)) goto loc_001213D0; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_001213C0: ;
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm2 = xmm0; /* movaps */
    if ((_fca >= _fcb)) goto loc_001213D0; /* jae: above or equal (unsigned >=) (xmm1.f[0] vs xmm2.f[0]) */

loc_001213CC: ;
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */

loc_001213D0: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(ecx + 0x3C) = xmm2.f[0]; /* movss */
    MEMF(ecx + 0x38) = xmm1.f[0]; /* movss */
    xmm2 = xmm1; /* movaps */
    if ((_fca > _fcb)) goto loc_001213F2; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_001213E2: ;
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm2 = xmm0; /* movaps */
    if ((_fca >= _fcb)) goto loc_001213F2; /* jae: above or equal (unsigned >=) (xmm1.f[0] vs xmm2.f[0]) */

loc_001213EE: ;
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */

loc_001213F2: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(ecx + 0x44) = xmm2.f[0]; /* movss */
    MEMF(ecx + 0x40) = xmm1.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00121407; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00121401: ;
    MEMF(ecx + 0x48) = xmm1.f[0]; /* movss */
    esp += 4; return; /* ret */

loc_00121407: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca >= _fcb)) goto loc_00121417; /* jae: above or equal (unsigned >=) (xmm1.f[0] vs xmm2.f[0]) */

loc_00121413: ;
    xmm0.f[0] = xmm0.f[0] + xmm0.f[0]; /* addss */

loc_00121417: ;
    MEMF(ecx + 0x48) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00121480
 * Original: 0x00121480 - 0x00121483 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121480(void)
{

loc_00121480: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00121490
 * Original: 0x00121490 - 0x00121494 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121490(void)
{

loc_00121490: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_001214A0
 * Original: 0x001214A0 - 0x001214AD (13 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001214A0(void)
{

loc_001214A0: ;
    eax = MEM32(esp + 4);
    eax = eax + eax * 2;
    eax = ecx + eax * 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001214B0
 * Original: 0x001214B0 - 0x001214BD (13 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001214B0(void)
{

loc_001214B0: ;
    eax = MEM32(esp + 4);
    eax = eax + eax * 2;
    eax = ecx + eax * 8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001214C0
 * Original: 0x001214C0 - 0x001214CF (15 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001214C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001214C0: ;
    eax = MEM32(esp + 4);
    eax = eax + eax * 2;
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
 * sub_001214E0
 * Original: 0x001214E0 - 0x00121506 (38 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001214E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001214E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001214F0; /* je: equal / zero */

loc_001214EA: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x001214F0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001214EEu); } /* indirect call */
    }

loc_001214F0: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00121500; /* je: equal / zero */

loc_001214F7: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001214FDu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_001214FD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00121500: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00121510
 * Original: 0x00121510 - 0x00121514 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121510(void)
{

loc_00121510: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_00121520
 * Original: 0x00121520 - 0x00121529 (9 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121520(void)
{

loc_00121520: ;
    eax = MEM32(esp + 4);
    MEM32(ecx) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00121530
 * Original: 0x00121530 - 0x0012153A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121530(void)
{

loc_00121530: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 4) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00121540
 * Original: 0x00121540 - 0x0012154B (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121540(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00121540: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 4) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00121550
 * Original: 0x00121550 - 0x00121592 (66 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121550(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00121550: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012158F; /* je: equal / zero */

loc_00121558: ;
    edx = MEM32(eax + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00121566; /* je: equal / zero */

loc_00121560: ;
    esi = MEM32(eax);
    MEM32(edx) = esi;
    goto loc_0012156B;

loc_00121566: ;
    edx = MEM32(eax);
    MEM32(ecx + 4) = edx;

loc_0012156B: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00121579; /* je: equal / zero */

loc_00121571: ;
    esi = MEM32(eax + 4);
    MEM32(edx + 4) = esi;
    goto loc_0012157F;

loc_00121579: ;
    edx = MEM32(eax + 4);
    MEM32(ecx + 8) = edx;

loc_0012157F: ;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0;
    MEM32(ecx) = MEM32(ecx) - 1;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, esi);

loc_0012158F: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001215B0
 * Original: 0x001215B0 - 0x001215CB (27 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001215B0(void)
{

loc_001215B0: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, eax);
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x001215C5u); RECOMP_ABI_CALL(0x0001E151u, sub_0001E151); /* call 0x0001E151 */

loc_001215C5: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001215E0
 * Original: 0x001215E0 - 0x0012167B (155 bytes, 48 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001215E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_001215E0: ;
    eax = MEM32(esp + 8);
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    xmm1.f[0] = xmm1.f[0] - MEMF(ecx); /* subss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00121600; /* jb: below (unsigned <) (xmm1.f[0] vs xmm2.f[0]) */

loc_001215FB: ;
    xmm0 = xmm1; /* movaps */
    goto loc_00121607;

loc_00121600: ;
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */

loc_00121607: ;
    xmm1 = XMM_SCALAR(MEMF(0x8AE874)); /* movss */
    MEMF(esi) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 4); /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0012162F; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_00121622: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0012162F; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00121627: ;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    goto loc_00121660;

loc_0012162F: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0012163D; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_00121634: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm2 = xmm0; /* movaps */
    goto loc_0012165A;

loc_0012163D: ;
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0012164F; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_00121646: ;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm2 = xmm1; /* movaps */
    goto loc_0012165A;

loc_0012164F: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */

loc_0012165A: ;
    MEMF(esp + 0xC) = xmm2.f[0]; /* movss */

loc_00121660: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0012166Fu); RECOMP_ABI_CALL(0x0001F6E6u, sub_0001F6E6); /* call 0x0001F6E6 */

loc_0012166F: ;
    edx = MEM32(eax);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = edx;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001216B0
 * Original: 0x001216B0 - 0x001216CA (26 bytes, 9 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001216B0(void)
{

loc_001216B0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    MEM32(ecx) = edx;
    eax = MEM32(eax + 4);
    edx = MEM32(esp + 8);
    MEM32(ecx + 4) = eax;
    eax = MEM32(edx);
    MEM32(ecx + 8) = eax;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001216D0
 * Original: 0x001216D0 - 0x001216EB (27 bytes, 9 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001216D0(void)
{

loc_001216D0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    MEM32(ecx + 0x24) = edx;
    eax = MEM32(eax + 4);
    edx = MEM32(esp + 8);
    MEM32(ecx + 0x28) = eax;
    eax = MEM32(edx);
    MEM32(ecx + 0x2C) = eax;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00121700
 * Original: 0x00121700 - 0x0012171B (27 bytes, 9 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121700(void)
{

loc_00121700: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    MEM32(ecx + 0x6C) = edx;
    eax = MEM32(eax + 4);
    edx = MEM32(esp + 8);
    MEM32(ecx + 0x70) = eax;
    eax = MEM32(edx);
    MEM32(ecx + 0x74) = eax;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00121730
 * Original: 0x00121730 - 0x0012173F (15 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121730(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00121730: ;
    eax = MEM32(esp + 4);
    eax = eax + eax * 2;
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
 * sub_00121750
 * Original: 0x00121750 - 0x001217C3 (115 bytes, 50 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121750(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00121750: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = ecx;
    ecx = MEM32(ebx + 0x18);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 8) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_001217BD; /* jle: less or equal (signed <=) */

loc_00121764: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    /* nop */

loc_00121770: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00121781; /* jl: less (signed <) */

loc_00121774: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebx + 0x18) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00121781; /* jge: greater or equal (signed >=) */

loc_00121779: ;
    eax = MEM32(ebx + 0x1C);
    eax = eax + edi * 4;
    goto loc_00121784;

loc_00121781: ;
    eax = MEM32(ebx + 0x1C);

loc_00121784: ;
    esi = MEM32(eax);
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012179F; /* jne: not equal / not zero */

loc_0012178D: ;
    ecx = esi + 4;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00121798u); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_00121798: ;
    ecx = MEM32(esp + 0x10);
    MEM32(esi + 8) = eax;

loc_0012179F: ;
    eax = MEM32(esi + 8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(eax + 8)) & 0xFFFFu; _fb = (uint32_t)(5) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 8), 5 (16-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001217BB; /* je: equal / zero */

loc_001217B4: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00121770; /* jl: less (signed <) */

loc_001217B9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001217BB: ;
    POP32(esp, esi);
    POP32(esp, ebp);

loc_001217BD: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001217E0
 * Original: 0x001217E0 - 0x00121CFE (1310 bytes, 364 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001217E0(void)
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

loc_001217E0: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x34));
    esp = esp - 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x40);
    ecx = MEM32(ebx + 0x20);
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x30)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 0x38)); /* movss */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x50);
    eax = MEM32(edi + 0x20);
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 0x30); /* subss */
    xmm2.f[0] = xmm2.f[0] - MEMF(eax + 0x38); /* subss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x30)) >> 32) & 1);
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(edi + 0x3C);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x30)) >> 32) & 1);
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ebx + 0x3C);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 0x30); /* addss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AA820); /* mulss */
    xmm4 = xmm1; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x24) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x50) = xmm4.f[0]; /* movss */
    fp_push(MEMF(esp + 0x50)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */
    esi = MEM32(esp + 0x48);
    xmm1.f[0] = xmm1.f[0] / xmm0.f[0]; /* divss */
    MEMF(esi) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    MEMF(esp + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    xmm1 = XMM_SCALAR(MEMF(0x8AE874)); /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00121896; /* jb: below (unsigned <) (xmm0.f[0] vs xmm3.f[0]) */

loc_00121891: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_001218B5; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_00121896: ;
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001218A1; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm3.f[0]) */

loc_0012189B: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_001218B5;

loc_001218A1: ;
    xmm2 = xmm3; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_001218B5; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm2.f[0]) */

loc_001218B1: ;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */

loc_001218B5: ;
    edx = MEM32(edi + 0x20);
    xmm0.f[0] = xmm0.f[0] - MEMF(edx + 0x60); /* subss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001218C7; /* jb: below (unsigned <) (xmm0.f[0] vs xmm3.f[0]) */

loc_001218C2: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_001218E6; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_001218C7: ;
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001218D2; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm3.f[0]) */

loc_001218CC: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_001218E6;

loc_001218D2: ;
    xmm2 = xmm3; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_001218E6; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm2.f[0]) */

loc_001218E2: ;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */

loc_001218E6: ;
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    eax = MEM32(ebx + 0x20);
    ecx = MEM32(edi + 0x20);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x60)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 0x60); /* subss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00121905; /* jb: below (unsigned <) (xmm0.f[0] vs xmm3.f[0]) */

loc_00121900: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00121921; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_00121905: ;
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00121910; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm3.f[0]) */

loc_0012190A: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_00121921;

loc_00121910: ;
    xmm3.f[0] = xmm3.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_00121921; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm3.f[0]) */

loc_0012191D: ;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */

loc_00121921: ;
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x44); PUSH32(esp, 0x0012192Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012192Au); } /* indirect call */
    }

loc_0012192D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    ecx = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0012193F; /* je: equal / zero */

loc_00121933: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x44); PUSH32(esp, 0x00121938u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00121935u); } /* indirect call */
    }

loc_00121938: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0012194B;

loc_0012193F: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x44); PUSH32(esp, 0x00121944u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00121941u); } /* indirect call */
    }

loc_00121944: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(3)) >> 32) & 1);
    eax = eax + 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0012194B: ;
    MEM32(esi + 0xC) = eax;
    eax = MEM32(ebx + 0x20);
    ecx = MEM32(eax + 0x6C);
    MEM32(esi + 0x14) = ecx;
    edx = MEM32(edi + 0x20);
    eax = MEM32(edx + 0x6C);
    MEM32(esi + 0x18) = eax;
    ecx = MEM32(edi + 0x20);
    xmm0 = XMM_SCALAR(MEMF(0x8E976C)); /* movss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x30)) >> 32) & 1);
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ecx);
    MEM32(esp + 0x10) = edx;
    eax = MEM32(ecx + 4);
    MEM32(esp + 0x14) = eax;
    ecx = MEM32(ecx + 8);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    MEM32(esp + 0x1C) = ecx;
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00121992u); RECOMP_ABI_CALL(0x0002D5A2u, sub_0002D5A2); /* call 0x0002D5A2 */

loc_00121992: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AB7D0); /* mulss */
    ebp = eax;
    MEMF(esp) = xmm0.f[0]; /* movss */
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001219DDu); RECOMP_ABI_CALL(0x000309DCu, sub_000309DC); /* call 0x000309DC */

loc_001219DD: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00121CD8; /* je: equal / zero */

loc_001219E8: ;
    eax = MEM32(esp + 0x38);
    ecx = MEM32(esp + 0x3C);
    edx = MEM32(esp + 0x34);
    MEM32(esp + 0x20) = eax;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x14); /* subss */
    MEM32(esp + 0x24) = ecx;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x18); /* subss */
    MEM32(esp + 0x1C) = edx;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 0x10); /* subss */
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm4 = xmm0; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm4 = xmm2; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    MEMF(esp + 0x50) = xmm3.f[0]; /* movss */
    fp_push(MEMF(esp + 0x50)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    xmm3 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */
    xmm3.f[0] = xmm3.f[0] / xmm5.f[0]; /* divss */
    xmm4 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm4.f[0]; /* subss */
    MEMF(esp + 0x1C) = xmm3.f[0]; /* movss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 0x20) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    MEMF(esp + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm3 = XMM_SCALAR(MEMF(0x8AE874)); /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00121AC2; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_00121ABD: ;
    _fca = xmm3.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00121AE1; /* ja: above (unsigned >) (xmm3.f[0] vs xmm0.f[0]) */

loc_00121AC2: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00121ACD; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_00121AC7: ;
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    goto loc_00121AE1;

loc_00121ACD: ;
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm3.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_00121AE1; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00121ADD: ;
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */

loc_00121AE1: ;
    edx = MEM32(edi + 0x20);
    xmm1 = XMM_SCALAR(MEMF(edx + 0x60)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00121AF7; /* jb: below (unsigned <) (xmm1.f[0] vs xmm2.f[0]) */

loc_00121AF2: ;
    _fca = xmm3.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00121B13; /* ja: above (unsigned >) (xmm3.f[0] vs xmm1.f[0]) */

loc_00121AF7: ;
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00121B02; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm2.f[0]) */

loc_00121AFC: ;
    xmm1.f[0] = xmm1.f[0] - xmm3.f[0]; /* subss */
    goto loc_00121B13;

loc_00121B02: ;
    xmm2.f[0] = xmm2.f[0] - xmm3.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_00121B13; /* jae: above or equal (unsigned >=) (xmm1.f[0] vs xmm2.f[0]) */

loc_00121B0F: ;
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */

loc_00121B13: ;
    eax = esp + 0x10;
    PUSH32(esp, ebp);
    MEMF(esi + 0x1C) = xmm1.f[0]; /* movss */
    PUSH32(esp, eax);
    MEMF(esi + 0x10) = xmm5.f[0]; /* movss */
    PUSH32(esp, 0x00121B28u); RECOMP_ABI_CALL(0x00019BE7u, sub_00019BE7); /* call 0x00019BE7 */

loc_00121B28: ;
    fp_push(MEMF(0x7AA7E8)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_00121C1A; /* jbe: below or equal (unsigned <=) */

loc_00121B3B: ;
    edi = MEM32(edi + 0x20);
    xmm3 = XMM_SCALAR(MEMF(0x7AD314)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x48)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x4C)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(edi + 0x50)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(edi + 0x30)); /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x38)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esp + 0x1C) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00121B9C; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00121B96: ;
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */

loc_00121B9C: ;
    eax = MEM32(esp + 0x24);
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x20);
    MEM32(esp + 0x18) = eax;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = edx;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00121BC4; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00121BBF: ;
    xmm2 = xmm0; /* movaps */
    goto loc_00121BCB;

loc_00121BC4: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */

loc_00121BCB: ;
    _fca = xmm2.f[0]; _fcb = MEMF(0x7B70AC); /* comiss */
    ebx = 1;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00121C08; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs MEMF(0x7B70AC)) */

loc_00121BD9: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00121BE5; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_00121BDE: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm0 = xmm1; /* movaps */

loc_00121BE5: ;
    xmm1 = XMM_SCALAR(MEMF(0x7D9A40)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00121C08; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00121BF2: ;
    POP32(esp, edi);
    MEM8(esi + 0x25) = LO8(ebx);
    MEM32(esi + 0x20) = 4;
    MEM8(esi + 0x24) = 0;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x34)) >> 32) & 1);
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00121C08: ;
    MEM32(esi + 0x20) = ebx;

loc_00121C0B: ;
    POP32(esp, edi);
    MEM8(esi + 0x25) = LO8(ebx);
    MEM8(esi + 0x24) = 0;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x34)) >> 32) & 1);
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00121C1A: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00121C20u); RECOMP_ABI_CALL(0x0002E70Eu, sub_0002E70E); /* call 0x0002E70E */

loc_00121C20: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    ebx = 1;
    if (CMP_NE(_fa, _fb)) goto loc_00121C99; /* jne: not equal / not zero */

loc_00121C2C: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00121C3F; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm1.f[0]) */

loc_00121C3A: ;
    xmm0 = xmm2; /* movaps */
    goto loc_00121C46;

loc_00121C3F: ;
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */

loc_00121C46: ;
    xmm4 = XMM_SCALAR(MEMF(0x8E931C)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x7AA7D8)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x7B04A0)); /* movss */
    xmm4.f[0] = xmm4.f[0] - xmm2.f[0]; /* subss */
    xmm4.f[0] = xmm4.f[0] - xmm3.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00121C94; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm4.f[0]) */

loc_00121C6B: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00121C7B; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00121C76: ;
    xmm1 = xmm0; /* movaps */
    goto loc_00121C7F;

loc_00121C7B: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */

loc_00121C7F: ;
    xmm0 = XMM_SCALAR(MEMF(0x8AE88C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00121C99; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_00121C94: ;
    MEM32(esi + 0x20) = ebx;
    goto loc_00121CA0;

loc_00121C99: ;
    MEM32(esi + 0x20) = 2;

loc_00121CA0: ;
    PUSH32(esp, 0x13E);
    PUSH32(esp, 0x7D9D54);
    PUSH32(esp, 3);
    PUSH32(esp, 0x00121CB1u); RECOMP_ABI_CALL(0x00028B2Eu, sub_00028B2E); /* call 0x00028B2E */

loc_00121CB1: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00121C0B; /* je: equal / zero */

loc_00121CBC: ;
    ecx = esp + 0x10;
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00121CC7u); RECOMP_ABI_CALL(0x0002C30Au, sub_0002C30A); /* call 0x0002C30A */

loc_00121CC7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM8(esi + 0x25) = LO8(ebx);
    MEM8(esi + 0x24) = LO8(eax);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x34)) >> 32) & 1);
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00121CD8: ;
    xmm0 = XMM_SCALAR(MEMF(0x8F95B0)); /* movss */
    MEMF(esi + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7B1DA8)); /* movss */
    POP32(esp, edi);
    MEMF(esi + 0x10) = xmm0.f[0]; /* movss */
    MEM8(esi + 0x25) = 0;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x34)) >> 32) & 1);
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00121E50
 * Original: 0x00121E50 - 0x00121FDC (396 bytes, 118 insns)
 * CC: cdecl, 6 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00121E50(void)
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

loc_00121E50: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x24);
    eax = MEM32(esi + 8);
    MEM32(ebp) = eax;
    ecx = MEM32(ecx + 0x40);
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    xmm0 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    PUSH32(esp, edi);
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_00121E82; /* je: equal / zero */

loc_00121E76: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00121E82; /* je: equal / zero */

loc_00121E7B: ;
    ebx = 1;
    goto loc_00121E84;

loc_00121E82: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00121E84: ;
    edi = MEM32(esp + 0x24);
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x00121E8Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00121E8Cu); } /* indirect call */
    }

loc_00121E8F: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    xmm0 = XMM_SCALAR(MEMF(0x8AE874)); /* movss */
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00121F33; /* je: equal / zero */

loc_00121EA2: ;
    xmm4 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00121EC6; /* jb: below (unsigned <) (xmm1.f[0] vs xmm3.f[0]) */

loc_00121EB9: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00121EC6; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00121EBE: ;
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    goto loc_00121EF1;

loc_00121EC6: ;
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00121ED4; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm3.f[0]) */

loc_00121ECB: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm2 = xmm1; /* movaps */
    goto loc_00121EEB;

loc_00121ED4: ;
    xmm2 = xmm3; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_00121EEB; /* jae: above or equal (unsigned >=) (xmm1.f[0] vs xmm2.f[0]) */

loc_00121EE7: ;
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */

loc_00121EEB: ;
    MEMF(esp + 0x28) = xmm2.f[0]; /* movss */

loc_00121EF1: ;
    xmm1 = XMM_SCALAR(MEMF(ebp)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    MEMF(ebp) = xmm1.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00121F09; /* jb: below (unsigned <) (xmm1.f[0] vs xmm3.f[0]) */

loc_00121F04: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00121F2E; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_00121F09: ;
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00121F14; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm3.f[0]) */

loc_00121F0E: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    goto loc_00121F2E;

loc_00121F14: ;
    xmm2 = xmm3; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_00121F2B; /* jae: above or equal (unsigned >=) (xmm1.f[0] vs xmm2.f[0]) */

loc_00121F27: ;
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */

loc_00121F2B: ;
    xmm1 = xmm2; /* movaps */

loc_00121F2E: ;
    MEMF(ebp) = xmm1.f[0]; /* movss */

loc_00121F33: ;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(eax + 0x3C);
    edx = MEM32(edi + 0x3C);
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x30)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(edx + 0x30); /* addss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x7AA820); /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esi); /* mulss */
    eax = MEM32(edi + 0x20);
    POP32(esp, edi);
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x60)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x24); /* addss */
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    POP32(esp, esi);
    POP32(esp, ebp);
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    POP32(esp, ebx);
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00121F7B; /* jb: below (unsigned <) (xmm1.f[0] vs xmm3.f[0]) */

loc_00121F76: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00121FAF; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_00121F7B: ;
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00121F86; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm3.f[0]) */

loc_00121F80: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    goto loc_00121FA9;

loc_00121F86: ;
    xmm2 = xmm3; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00121F9B; /* jb: below (unsigned <) (xmm1.f[0] vs xmm2.f[0]) */

loc_00121F92: ;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = xmm0; /* movaps */
    goto loc_00121FA9;

loc_00121F9B: ;
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm1 = xmm2; /* movaps */

loc_00121FA9: ;
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */

loc_00121FAF: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    eax = MEM32(esp + 4);
    fp_top() = sin(fp_top()); /* fsin */
    ecx = MEM32(esp + 0xC);
    MEMF(ecx) = xmm1.f[0]; /* movss */
    MEMF(eax + 4) = xmm3.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = cos(fp_top()); /* fcos */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 28; return; /* ret 24 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00122040
 * Original: 0x00122040 - 0x0012229F (607 bytes, 162 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00122040(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    int _cf = 0; /* carry flag */

loc_00122040: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x2C));
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x34);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x3C);
    PUSH32(esp, edi);
    edi = ecx;
    eax = edi + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    ecx = edi;
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0012208Du); RECOMP_ABI_CALL(0x0003709Du, sub_0003709D); /* call 0x0003709D */

loc_0012208D: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AACB4); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001220AA; /* jp: parity */

loc_001220A0: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edi + 0x14); /* subss */

loc_001220AA: ;
    xmm3 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    _fca = xmm3.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca >= _fcb)) goto loc_001220BB; /* jae: above or equal (unsigned >=) (xmm3.f[0] vs xmm0.f[0]) */

loc_001220B7: ;
    xmm3.f[0] = xmm3.f[0] / xmm0.f[0]; /* divss */

loc_001220BB: ;
    ecx = MEM32(esi + 0x20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x30)) >> 32) & 1);
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ecx);
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0x20) = edx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x14); /* addss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x2C);
    MEM32(esp + 0x20) = edx;
    edx = MEM32(ebx + 0x20);
    MEM32(esp + 0x28) = ecx;
    MEM32(esp + 0x24) = eax;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x18); /* addss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x30);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x1C); /* addss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x34);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0x30)) >> 32) & 1);
    edx = edx + 0x30;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x28) = ecx;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    MEM32(esp + 0x24) = eax;
    eax = MEM32(edx);
    ecx = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    xmm1 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    MEM32(esp + 0x30) = ecx;
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x30); /* subss */
    MEM32(esp + 0x34) = edx;
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 0x34); /* subss */
    MEM32(esp + 0x2C) = eax;
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x2C); /* subss */
    eax = MEM32(esp + 0x44);
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x2C);
    ecx = eax;
    MEM32(ecx) = edx;
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    MEMF(esp + 0x30) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 0x30);
    MEM32(ecx + 4) = edx;
    xmm1 = XMM_SCALAR(MEMF(0x8AE874)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    MEMF(esp + 0x34) = xmm2.f[0]; /* movss */
    edx = MEM32(esp + 0x34);
    MEM32(ecx + 8) = edx;
    ecx = MEM32(esi + 0x20);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x48)) >> 32) & 1);
    ecx = ecx + 0x48;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ecx);
    MEM32(esp + 0x2C) = edx;
    edx = MEM32(ecx + 4);
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x2C); /* addss */
    ecx = MEM32(ecx + 8);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEM32(esp + 0x30) = edx;
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x30); /* addss */
    edx = MEM32(esp + 0x20);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    MEM32(eax) = edx;
    MEM32(esp + 0x34) = ecx;
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x34); /* addss */
    ecx = MEM32(esp + 0x24);
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x28);
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = edx;
    eax = MEM32(esi + 0x20);
    MEMF(esp + 0x40) = xmm3.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x60)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0xC); /* addss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00122222; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_0012221D: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00122241; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_00122222: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0012222D; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_00122227: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_00122241;

loc_0012222D: ;
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_00122241; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm3.f[0]) */

loc_0012223D: ;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */

loc_00122241: ;
    ecx = MEM32(ebx + 0x20);
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 0x60); /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00122256; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_00122251: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00122272; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_00122256: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00122261; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_0012225B: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_00122272;

loc_00122261: ;
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_00122272; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm2.f[0]) */

loc_0012226E: ;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */

loc_00122272: ;
    edx = MEM32(esp + 0x34);
    PUSH32(esp, edx);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    ecx = esp + 0x3C;
    PUSH32(esp, 0x8F95B0);
    PUSH32(esp, ecx);
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00122291u); RECOMP_ABI_CALL(0x00013260u, sub_00013260); /* call 0x00013260 */

loc_00122291: ;
    edx = MEM32(eax);
    eax = MEM32(esp + 0x4C);
    MEM32(eax) = edx;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x3C)) >> 32) & 1);
    esp = esp + 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00122340
 * Original: 0x00122340 - 0x00122606 (710 bytes, 196 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00122340(void)
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

loc_00122340: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x34);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x3C);
    PUSH32(esp, edi);
    edi = ecx;
    eax = edi + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    ecx = edi;
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0012238Du); RECOMP_ABI_CALL(0x0003709Du, sub_0003709D); /* call 0x0003709D */

loc_0012238D: ;
    ecx = MEM32(esp + 0x44);
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx); /* subss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm1 = XMM_SCALAR(MEMF(0x8AE874)); /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001223B0; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_001223AB: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_001223CC; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_001223B0: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001223BB; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_001223B5: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_001223CC;

loc_001223BB: ;
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_001223CC; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm2.f[0]) */

loc_001223C8: ;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */

loc_001223CC: ;
    edx = esp + 0x40;
    PUSH32(esp, edx);
    eax = esp + 0x40;
    PUSH32(esp, eax);
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x001223E1u); RECOMP_ABI_CALL(0x0001F6E6u, sub_0001F6E6); /* call 0x0001F6E6 */

loc_001223E1: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = MEMF(0x8F9608); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001223FE; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x8F9608)) */

loc_001223F3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

loc_001223FE: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edi + 0x14); /* subss */
    xmm3 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    PUSH32(esp, ebx);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fca = xmm3.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca >= _fcb)) goto loc_0012241C; /* jae: above or equal (unsigned >=) (xmm3.f[0] vs xmm0.f[0]) */

loc_00122418: ;
    xmm3.f[0] = xmm3.f[0] / xmm0.f[0]; /* divss */

loc_0012241C: ;
    ecx = MEM32(esi + 0x20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ecx);
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0x24) = edx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x18); /* addss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x30);
    MEM32(esp + 0x24) = edx;
    edx = MEM32(ebp + 0x20);
    MEM32(esp + 0x2C) = ecx;
    MEM32(esp + 0x28) = eax;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x1C); /* addss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x34);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x20); /* addss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x38);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x30;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x2C) = ecx;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    MEM32(esp + 0x28) = eax;
    eax = MEM32(edx);
    ecx = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    xmm1 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    MEM32(esp + 0x34) = ecx;
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x34); /* subss */
    MEM32(esp + 0x38) = edx;
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 0x38); /* subss */
    MEM32(esp + 0x30) = eax;
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x30); /* subss */
    eax = MEM32(esp + 0x4C);
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x30);
    ecx = eax;
    MEM32(ecx) = edx;
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    MEMF(esp + 0x34) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 0x34);
    MEM32(ecx + 4) = edx;
    xmm1 = XMM_SCALAR(MEMF(0x8AE874)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    MEMF(esp + 0x38) = xmm2.f[0]; /* movss */
    edx = MEM32(esp + 0x38);
    MEM32(ecx + 8) = edx;
    ecx = MEM32(esi + 0x20);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x48;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ecx);
    MEM32(esp + 0x30) = edx;
    edx = MEM32(ecx + 4);
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x30); /* addss */
    ecx = MEM32(ecx + 8);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEM32(esp + 0x34) = edx;
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x34); /* addss */
    edx = MEM32(esp + 0x24);
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    MEM32(eax) = edx;
    MEM32(esp + 0x38) = ecx;
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x38); /* addss */
    ecx = MEM32(esp + 0x28);
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x2C);
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = edx;
    eax = MEM32(esi + 0x20);
    MEMF(esp + 0x44) = xmm3.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x60)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x14); /* addss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00122583; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_0012257E: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_001225A2; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_00122583: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0012258E; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_00122588: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_001225A2;

loc_0012258E: ;
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_001225A2; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm3.f[0]) */

loc_0012259E: ;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */

loc_001225A2: ;
    ecx = MEM32(ebp + 0x20);
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 0x60); /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001225B4; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_001225AF: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_001225D0; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_001225B4: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001225BF; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_001225B9: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_001225D0;

loc_001225BF: ;
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_001225D0; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm2.f[0]) */

loc_001225CC: ;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */

loc_001225D0: ;
    edx = MEM32(esp + 0x44);
    PUSH32(esp, edx);
    eax = esp + 0x44;
    PUSH32(esp, eax);
    ecx = esp + 0x4C;
    PUSH32(esp, 0x8F95B0);
    PUSH32(esp, ecx);
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x001225EFu); RECOMP_ABI_CALL(0x00013260u, sub_00013260); /* call 0x00013260 */

loc_001225EF: ;
    edx = MEM32(eax);
    eax = MEM32(esp + 0x60);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = edx;
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_001226C0
 * Original: 0x001226C0 - 0x0012277A (186 bytes, 59 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001226C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_001226C0: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    edi = ecx;
    SET_LO8(ebx, 1);
    PUSH32(esp, 0x001226D3u); RECOMP_ABI_CALL(0x00032291u, sub_00032291); /* call 0x00032291 */

loc_001226D3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00122770; /* je: equal / zero */

loc_001226DE: ;
    eax = MEM32(esp + 0x28);
    ecx = MEM32(eax + 0x20);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x48;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ecx);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x54);
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0x1C) = edx;
    edx = esp + 0x1C;
    MEM32(esp + 0x24) = ecx;
    PUSH32(esp, edx);
    ecx = esp + 0x18;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x24) = eax;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00122720u); RECOMP_ABI_CALL(0x0001E151u, sub_0001E151); /* call 0x0001E151 */

loc_00122720: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = esp + 0x14;
    PUSH32(esp, 0x0012272Fu); RECOMP_ABI_CALL(0x0001D611u, sub_0001D611); /* call 0x0001D611 */

loc_0012272F: ;
    eax = MEM32(edi + 0x4C);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x1C); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    POP32(esp, esi);
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00122749; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00122747: ;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_00122749: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7B43AC); /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x1C); /* mulss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00122770; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00122766: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_00122770: ;
    POP32(esp, edi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001227B0
 * Original: 0x001227B0 - 0x00122A92 (738 bytes, 218 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001227B0(void)
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

loc_001227B0: ;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x38);
    PUSH32(esp, eax);
    esi = ecx;
    ecx = MEM32(esp + 0x38);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x001227CEu); RECOMP_ABI_CALL(0x00031A67u, sub_00031A67); /* call 0x00031A67 */

loc_001227CE: ;
    SET_LO8(ebx, LO8(eax));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00122A87; /* je: equal / zero */

loc_001227D8: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x18)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AA840); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00122A87; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(0x7AA840)) */

loc_001227EA: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001227F0u); RECOMP_ABI_CALL(0x00032291u, sub_00032291); /* call 0x00032291 */

loc_001227F0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00122A87; /* je: equal / zero */

loc_001227FB: ;
    edx = MEM32(edi + 0x20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x30;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(edx);
    MEM32(esp + 0xC) = eax;
    ecx = MEM32(edx + 4);
    MEM32(esp + 0x10) = ecx;
    edx = MEM32(edx + 8);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    MEM32(esp + 0x1C) = edx;
    PUSH32(esp, 0x00122824u); RECOMP_ABI_CALL(0x00031FEEu, sub_00031FEE); /* call 0x00031FEE */

loc_00122824: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x18); /* subss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 0x1C); /* subss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm3.f[0] = xmm3.f[0] - MEMF(esp + 0x14); /* subss */
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm4 = xmm1; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    xmm4 = xmm3; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x54)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x8AE860); /* addss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    _fca = xmm4.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00122892; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs xmm0.f[0]) */

loc_00122890: ;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_00122892: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm0.f[0] = xmm0.f[0] / xmm4.f[0]; /* divss */
    xmm4 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm4.f[0]; /* subss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    xmm2 = XMM_SCALAR(MEMF(0x8AE874)); /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001228FD; /* jb: below (unsigned <) (xmm0.f[0] vs xmm3.f[0]) */

loc_001228F8: ;
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0012291C; /* ja: above (unsigned >) (xmm2.f[0] vs xmm0.f[0]) */

loc_001228FD: ;
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00122908; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm3.f[0]) */

loc_00122902: ;
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    goto loc_0012291C;

loc_00122908: ;
    xmm1 = xmm3; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_0012291C; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00122918: ;
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */

loc_0012291C: ;
    edx = MEM32(edi + 0x20);
    xmm1 = XMM_SCALAR(MEMF(edx + 0x60)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    MEMF(esp + 0x3C) = xmm1.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00122938; /* jb: below (unsigned <) (xmm1.f[0] vs xmm3.f[0]) */

loc_00122933: ;
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0012295A; /* ja: above (unsigned >) (xmm2.f[0] vs xmm1.f[0]) */

loc_00122938: ;
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00122943; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm3.f[0]) */

loc_0012293D: ;
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    goto loc_00122954;

loc_00122943: ;
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_00122954; /* jae: above or equal (unsigned >=) (xmm1.f[0] vs xmm3.f[0]) */

loc_00122950: ;
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */

loc_00122954: ;
    MEMF(esp + 0x3C) = xmm1.f[0]; /* movss */

loc_0012295A: ;
    eax = MEM32(esi + 0x40);
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebp);
    if (CMP_EQ(_fa, _fb)) goto loc_00122970; /* je: equal / zero */

loc_00122964: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00122970; /* je: equal / zero */

loc_00122969: ;
    ebp = 1;
    goto loc_00122972;

loc_00122970: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00122972: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x00122979u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00122976u); } /* indirect call */
    }

loc_00122979: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    POP32(esp, ebp);
    if (CMP_NE(_fa, _fb)) goto loc_0012298E; /* jne: not equal / not zero */

loc_00122986: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */

loc_0012298E: ;
    xmm2 = XMM_SCALAR(MEMF(esi + 0x58)); /* movss */
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x8AE874)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    _fca = xmm2.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001229AC; /* jb: below (unsigned <) (xmm2.f[0] vs xmm3.f[0]) */

loc_001229A7: ;
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_001229CB; /* ja: above (unsigned >) (xmm1.f[0] vs xmm2.f[0]) */

loc_001229AC: ;
    _fca = xmm2.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001229B7; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm3.f[0]) */

loc_001229B1: ;
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    goto loc_001229CB;

loc_001229B7: ;
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_001229CB; /* jae: above or equal (unsigned >=) (xmm2.f[0] vs xmm0.f[0]) */

loc_001229C7: ;
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */

loc_001229CB: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001229DF; /* jb: below (unsigned <) (xmm0.f[0] vs xmm3.f[0]) */

loc_001229DA: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_001229FE; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_001229DF: ;
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001229EA; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm3.f[0]) */

loc_001229E4: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_001229FE;

loc_001229EA: ;
    xmm2 = xmm3; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_001229FE; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm2.f[0]) */

loc_001229FA: ;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */

loc_001229FE: ;
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00122A08; /* jb: below (unsigned <) (xmm0.f[0] vs xmm3.f[0]) */

loc_00122A03: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00122A27; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_00122A08: ;
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00122A13; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm3.f[0]) */

loc_00122A0D: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_00122A27;

loc_00122A13: ;
    xmm2 = xmm3; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_00122A27; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm2.f[0]) */

loc_00122A23: ;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */

loc_00122A27: ;
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00122A31; /* jb: below (unsigned <) (xmm0.f[0] vs xmm3.f[0]) */

loc_00122A2C: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00122A4D; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_00122A31: ;
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00122A3C; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm3.f[0]) */

loc_00122A36: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_00122A4D;

loc_00122A3C: ;
    xmm3.f[0] = xmm3.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_00122A4D; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm3.f[0]) */

loc_00122A49: ;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */

loc_00122A4D: ;
    eax = esp + 0x3C;
    PUSH32(esp, eax);
    ecx = esp + 0x3C;
    PUSH32(esp, ecx);
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00122A62u); RECOMP_ABI_CALL(0x0001F6E6u, sub_0001F6E6); /* call 0x0001F6E6 */

loc_00122A62: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7B43AC); /* mulss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = MEMF(0x8AE864); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00122A87; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x8AE864)) */

loc_00122A7C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_00122A87: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00122B50
 * Original: 0x00122B50 - 0x00122BD7 (135 bytes, 28 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00122B50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00122B50: ;
    xmm1 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = MEM32(esp + 4);
    eax = ecx;
    MEMF(eax + 0xC) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x7C64E0)); /* movss */
    MEMF(eax + 0x1C) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x7B04A0)); /* movss */
    MEM32(eax) = 0x7D9C8C;
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEMF(eax + 0x24) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x8F95F4)); /* movss */
    MEMF(eax + 0x28) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x8F95FC)); /* movss */
    MEMF(eax + 0x2C) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x34) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x3C) = xmm0.f[0]; /* movss */
    MEM32(eax + 0x40) = edx;
    MEMF(eax + 0x44) = xmm0.f[0]; /* movss */
    MEM32(eax + 0x48) = ecx;
    MEM32(eax + 0x4C) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00122C00
 * Original: 0x00122C00 - 0x00122C1F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00122C00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00122C00: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x7D9C8C;
    if (TEST_Z(_fa, _fb)) goto loc_00122C19; /* je: equal / zero */

loc_00122C10: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00122C16u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00122C16: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00122C19: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00122C30
 * Original: 0x00122C30 - 0x00122CC1 (145 bytes, 29 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00122C30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00122C30: ;
    xmm1 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = MEM32(esp + 4);
    eax = ecx;
    MEMF(eax + 0xC) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x7C64E0)); /* movss */
    MEMF(eax + 0x1C) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x7B04A0)); /* movss */
    MEM32(eax) = 0x7D9C8C;
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEMF(eax + 0x24) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x8F95F4)); /* movss */
    MEMF(eax + 0x28) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x8F95FC)); /* movss */
    MEMF(eax + 0x2C) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x34) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x3C) = xmm0.f[0]; /* movss */
    MEM32(eax + 0x40) = edx;
    MEMF(eax + 0x44) = xmm0.f[0]; /* movss */
    MEM32(eax + 0x4C) = ecx;
    MEM32(eax) = 0x7D9D7C;
    MEM32(eax + 0x48) = 2;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00122CF0
 * Original: 0x00122CF0 - 0x00122CF4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00122CF0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00122CF0: ;
    fp_push(MEMF(ecx + 0x10)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00122D00
 * Original: 0x00122D00 - 0x00122D1F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00122D00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00122D00: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x7D9C8C;
    if (TEST_Z(_fa, _fb)) goto loc_00122D19; /* je: equal / zero */

loc_00122D10: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00122D16u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00122D16: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00122D19: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00122D30
 * Original: 0x00122D30 - 0x00122E3E (270 bytes, 58 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00122D30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00122D30: ;
    PUSH32(esp, esi);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */
    edx = MEM32(esp + 8);
    MEMF(ecx + 0xC) = xmm1.f[0]; /* movss */
    MEMF(ecx + 0x18) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x7C64E0)); /* movss */
    MEMF(ecx + 0x1C) = xmm1.f[0]; /* movss */
    MEMF(ecx + 0x20) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x7B04A0)); /* movss */
    MEM32(ecx) = 0x7D9C8C;
    MEMF(ecx + 0x10) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x14) = xmm0.f[0]; /* movss */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEMF(ecx + 0x24) = xmm1.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x8F95F4)); /* movss */
    MEMF(ecx + 0x28) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x8F95FC)); /* movss */
    MEMF(ecx + 0x2C) = xmm2.f[0]; /* movss */
    MEMF(ecx + 0x34) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x3C) = xmm0.f[0]; /* movss */
    MEM32(ecx + 0x48) = eax;
    MEM32(ecx + 0x4C) = eax;
    MEMF(ecx + 0x44) = xmm0.f[0]; /* movss */
    MEM32(ecx) = 0x7D9DA0;
    MEMF(ecx + 0x50) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x54) = xmm0.f[0]; /* movss */
    esi = edx + 8;
    MEM32(ecx + 0x40) = esi;
    xmm0 = XMM_SCALAR(MEMF(0x8F95B0)); /* movss */
    MEMF(ecx + 0x58) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x8F95B0)); /* movss */
    MEMF(ecx + 0x5C) = xmm0.f[0]; /* movss */
    MEM32(ecx + 0x68) = eax;
    MEM32(ecx + 0x60) = 7;
    MEM32(ecx + 0x64) = 0xFFFFFFFFu;
    MEMF(ecx + 0x6C) = xmm1.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x8F95F4)); /* movss */
    MEMF(ecx + 0x70) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x8F95FC)); /* movss */
    MEMF(ecx + 0x74) = xmm0.f[0]; /* movss */
    eax = MEM32(edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00122E18u); RECOMP_ABI_CALL(0x00026545u, sub_00026545); /* call 0x00026545 */

loc_00122E18: ;
    MEM32(ecx + 0x78) = eax;
    edx = MEM32(edx + 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00122E24u); RECOMP_ABI_CALL(0x00026545u, sub_00026545); /* call 0x00026545 */

loc_00122E24: ;
    MEM32(ecx + 0x7C) = eax;
    eax = 1;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(ecx + 0x80) = LO8(eax);
    MEM32(ecx + 0x48) = eax;
    eax = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00122E90
 * Original: 0x00122E90 - 0x00122E94 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00122E90(void)
{

loc_00122E90: ;
    eax = MEM32(ecx + 0x60);
    esp += 4; return; /* ret */

}

/**
 * sub_00122EA0
 * Original: 0x00122EA0 - 0x00122EA4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00122EA0(void)
{

loc_00122EA0: ;
    eax = MEM32(ecx + 0x64);
    esp += 4; return; /* ret */

}

/**
 * sub_00122EB0
 * Original: 0x00122EB0 - 0x00122EB4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00122EB0(void)
{

loc_00122EB0: ;
    eax = MEM32(ecx + 0x68);
    esp += 4; return; /* ret */

}

/**
 * sub_00122EC0
 * Original: 0x00122EC0 - 0x00122EDE (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00122EC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00122EC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00122EC8u); RECOMP_ABI_CALL(0x0001F0ABu, sub_0001F0AB); /* call 0x0001F0AB */

loc_00122EC8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00122ED8; /* je: equal / zero */

loc_00122ECF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00122ED5u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00122ED5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00122ED8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00122EF0
 * Original: 0x00122EF0 - 0x00122EF7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00122EF0(void)
{

loc_00122EF0: ;
    MEM32(ecx) = 0x7D9C8C;
    esp += 4; return; /* ret */

}

/**
 * sub_00122F00
 * Original: 0x00122F00 - 0x00122FFB (251 bytes, 74 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00122F00(void)
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

loc_00122F00: ;
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x5C);
    ecx = MEM32(ebx + 0xC);
    PUSH32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x74); /* comiss */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x68) = ecx;
    MEM32(esp + 0x7C) = eax;
    if ((_fca > _fcb)) goto loc_00122F2E; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(esp + 0x74)) */

loc_00122F26: ;
    MEM32(esp + 0x7C) = 1;

loc_00122F2E: ;
    ebp = MEM32(esp + 0x78);
    MEM32(esp + 0x14) = 2;
    /* nop */

loc_00122F40: ;
    edx = MEM32(esp + 0x7C);
    eax = MEM32(esp + 0x68);
    ecx = edx + eax * 2;
    edx = ZX8(MEM8(ebx + 0x25));
    eax = edx + ecx * 2;
    ecx = MEM32(esp + 0x6C);
    eax = eax + eax * 2;
    edi = MEM32(ecx + eax * 4 + 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00122FD1; /* je: equal / zero */

loc_00122F61: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00122FD1; /* jne: not equal / not zero */

loc_00122F69: ;
    esi = MEM32(edi + 8);
    ecx = MEM32(esp + 0x74);
    eax = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x74);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x64) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x6C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x70) = xmm0.f[0]; /* movss */
    edx = MEM32(esi);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00122FC0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00122FBDu); } /* indirect call */
    }

loc_00122FC0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00122FC8; /* je: equal / zero */

loc_00122FC4: ;
    MEM32(esp + 0x10) = esi;

loc_00122FC8: ;
    edi = MEM32(edi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    if (CMP_NE(_fa, _fb)) goto loc_00122F61; /* jne: not equal / not zero */

loc_00122FD1: ;
    ecx = MEM32(esp + 0x68);
    eax = MEM32(esp + 0x14);
    edx = MEM32(ecx * 4 + 0x8F033C);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x68) = edx;
    MEM32(esp + 0x14) = eax;
    if ((_fa != 0)) goto loc_00122F40; /* jne: not equal / not zero */

loc_00122FEF: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00123040
 * Original: 0x00123040 - 0x001230A2 (98 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00123040(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00123040: ;
    eax = MEM32(ecx + 4);
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    ecx = eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    xmm1 = xmm2; /* movaps */
    if (CMP_EQ(_fa, _fb)) goto loc_001230A1; /* je: equal / zero */

loc_0012304F: ;
    /* nop */

loc_00123050: ;
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00123073; /* je: equal / zero */

loc_00123057: ;
    xmm0 = XMM_SCALAR(MEMF(edx + 0x44)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00123063; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_00123061: ;
    goto loc_0012306B;

loc_00123063: ;
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(edx + 0x44); /* subss */

loc_0012306B: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00123073; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00123070: ;
    xmm1 = xmm0; /* movaps */

loc_00123073: ;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00123050; /* jne: not equal / not zero */

loc_00123079: ;
    _fca = xmm1.f[0]; _fcb = MEMF(0x7AB2D0); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001230A1; /* jb: below (unsigned <) (xmm1.f[0] vs MEMF(0x7AB2D0)) */

loc_00123082: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001230A1; /* je: equal / zero */

loc_00123086: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012309B; /* je: equal / zero */

loc_0012308D: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x44)); /* movss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    MEMF(ecx + 0x44) = xmm0.f[0]; /* movss */

loc_0012309B: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00123086; /* jne: not equal / not zero */

loc_001230A1: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001230C0
 * Original: 0x001230C0 - 0x0012320F (335 bytes, 106 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001230C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_001230C0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 0x54);
    eax = MEM32(eax + 0x58);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001230D9; /* jle: less or equal (signed <=) */

loc_001230D6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001230D9: ;
    esi = MEM32(eax);
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001230F0; /* jne: not equal / not zero */

loc_001230E2: ;
    eax = esi + 4;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001230EDu); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_001230ED: ;
    MEM32(esi + 8) = eax;

loc_001230F0: ;
    esi = MEM32(esi + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(esi + 8)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 8), LO16(edi) (16-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = esi & ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM16(esi + 8)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 8), LO16(edi) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00123111; /* jne: not equal / not zero */

loc_00123105: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0012310Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00123109u); } /* indirect call */
    }

loc_0012310C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00123113; /* je: equal / zero */

loc_00123111: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00123113: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(eax + 0x1C);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    edi = MEM32(esi + 0x34);
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ebx = MEM32(ecx + 4);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_00123140; /* jne: not equal / not zero */

loc_00123132: ;
    edx = edi + 4;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x0012313Du); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_0012313D: ;
    MEM32(edi + 8) = eax;

loc_00123140: ;
    edi = MEM32(edi + 8);
    xmm0 = XMM_SCALAR(MEMF(esi + 0x28)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x24); /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x14); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x24); /* addss */
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(edi + 8)) & 0xFFFFu; _fb = (uint32_t)(0x13) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 8), 0x13 (16-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    xmm1 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(0x7A9980); /* subss */
    eax = MEM32(esp + 0x10);
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(0x8AE874)); /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(ebx + 0x10)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00123199; /* jb: below (unsigned <) (xmm2.f[0] vs xmm3.f[0]) */

loc_00123194: ;
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_001231BE; /* ja: above (unsigned >) (xmm1.f[0] vs xmm2.f[0]) */

loc_00123199: ;
    _fca = xmm2.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001231A4; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm3.f[0]) */

loc_0012319E: ;
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    goto loc_001231BE;

loc_001231A4: ;
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_001231BB; /* jae: above or equal (unsigned >=) (xmm2.f[0] vs xmm0.f[0]) */

loc_001231B7: ;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */

loc_001231BB: ;
    xmm2 = xmm0; /* movaps */

loc_001231BE: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    xmm4 = XMM_SCALAR(MEMF(ebx + 0x14)); /* movss */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001231D5; /* jb: below (unsigned <) (xmm0.f[0] vs xmm3.f[0]) */

loc_001231D0: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_001231FF; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_001231D5: ;
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001231EE; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm3.f[0]) */

loc_001231DA: ;
    MEMF(eax + 0x6C) = xmm4.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(eax + 0x70) = xmm2.f[0]; /* movss */
    MEMF(eax + 0x74) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

loc_001231EE: ;
    xmm3.f[0] = xmm3.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_001231FF; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm3.f[0]) */

loc_001231FB: ;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */

loc_001231FF: ;
    MEMF(eax + 0x6C) = xmm4.f[0]; /* movss */
    MEMF(eax + 0x70) = xmm2.f[0]; /* movss */
    MEMF(eax + 0x74) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00123270
 * Original: 0x00123270 - 0x0012357E (782 bytes, 256 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00123270(void)
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

loc_00123270: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    eax = MEM32(ebx + 0x54);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = MEM32(ebx + 0x58);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_00123298; /* jne: not equal / not zero */

loc_0012328A: ;
    eax = esi + 4;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00123295u); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_00123295: ;
    MEM32(esi + 8) = eax;

loc_00123298: ;
    eax = MEM32(esi + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 1;
    _fa = (uint32_t)(MEM16(eax + 8)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 8), LO16(edi) (16-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = ecx;
    _fa = (uint32_t)(MEM16(esi + 8)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 8), LO16(edi) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001232C1; /* jne: not equal / not zero */

loc_001232B4: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x001232B9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001232B6u); } /* indirect call */
    }

loc_001232B9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    MEM32(ebp + 0xC) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_001232C8; /* je: equal / zero */

loc_001232C1: ;
    MEM32(ebp + 0xC) = 0;

loc_001232C8: ;
    _fa = (uint32_t)(MEM32(ebx + 0x54)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x54), edi (32-bit) */
    eax = MEM32(ebx + 0x58);
    if (CMP_LE(_fas, _fbs)) goto loc_001232D3; /* jle: less or equal (signed <=) */

loc_001232D0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001232D3: ;
    esi = MEM32(eax);
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001232EA; /* jne: not equal / not zero */

loc_001232DC: ;
    eax = esi + 4;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001232E7u); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_001232E7: ;
    MEM32(esi + 8) = eax;

loc_001232EA: ;
    esi = MEM32(esi + 8);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(esi + 8)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 8), LO16(edi) (16-bit) */
    SET_LO8(ebx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx & esi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM16(ebx + 8)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebx + 8), LO16(edi) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012330B; /* jne: not equal / not zero */

loc_001232FF: ;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00123306u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00123303u); } /* indirect call */
    }

loc_00123306: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012330D; /* je: equal / zero */

loc_0012330B: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0012330D: ;
    edi = MEM32(ebp + 0x10);
    ecx = MEM32(edi + 0x10);
    eax = MEM32(ebp + 0x14);
    MEM32(eax) = ecx;
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00123320u); RECOMP_ABI_CALL(0x00021CA2u, sub_00021CA2); /* call 0x00021CA2 */

loc_00123320: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7AA820)); /* fadd dword ptr [0x7aa820] */
    MEMF(ebp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    fp_top() = recomp_frndint(fp_top(), g_fp_control_word); /* frndint */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ebp + 0x10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [ebp + 0x10] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x45) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x45 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0012333C; /* jne: not equal / not zero */

loc_00123338: ;
    fp_push(1.0); /* fld1 */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */

loc_0012333C: ;
    MEMF(ebp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    esi = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x14)); /* movss */
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi + 0xC) = xmm0.f[0]; /* movss */
    edx = MEM32(edi + 0x1C);
    eax = MEM32(edx + 4);
    xmm2 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm3.f[0]; /* comiss */
    xmm0 = XMM_SCALAR(MEMF(0x8AE874)); /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0012336C; /* jb: below (unsigned <) (xmm2.f[0] vs xmm3.f[0]) */

loc_00123367: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0012338B; /* ja: above (unsigned >) (xmm0.f[0] vs xmm2.f[0]) */

loc_0012336C: ;
    _fca = xmm2.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00123377; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm3.f[0]) */

loc_00123371: ;
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    goto loc_0012338B;

loc_00123377: ;
    xmm1 = xmm3; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_0012338B; /* jae: above or equal (unsigned >=) (xmm2.f[0] vs xmm1.f[0]) */

loc_00123387: ;
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */

loc_0012338B: ;
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    xmm4 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0012339E; /* jb: below (unsigned <) (xmm1.f[0] vs xmm3.f[0]) */

loc_00123399: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_001233BD; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_0012339E: ;
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001233A9; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm3.f[0]) */

loc_001233A3: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    goto loc_001233BD;

loc_001233A9: ;
    xmm5 = xmm3; /* movaps */
    xmm5.f[0] = xmm5.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm5.f[0]; /* comiss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_001233BD; /* jae: above or equal (unsigned >=) (xmm1.f[0] vs xmm5.f[0]) */

loc_001233B9: ;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */

loc_001233BD: ;
    MEMF(esi + 0x24) = xmm4.f[0]; /* movss */
    MEMF(esi + 0x28) = xmm2.f[0]; /* movss */
    MEMF(esi + 0x2C) = xmm1.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001233DB; /* jb: below (unsigned <) (xmm2.f[0] vs xmm3.f[0]) */

loc_001233D6: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_001233FA; /* ja: above (unsigned >) (xmm0.f[0] vs xmm2.f[0]) */

loc_001233DB: ;
    _fca = xmm2.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001233E6; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm3.f[0]) */

loc_001233E0: ;
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    goto loc_001233FA;

loc_001233E6: ;
    xmm1 = xmm3; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_001233FA; /* jae: above or equal (unsigned >=) (xmm2.f[0] vs xmm1.f[0]) */

loc_001233F6: ;
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */

loc_001233FA: ;
    xmm1 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    xmm4 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0012340E; /* jb: below (unsigned <) (xmm1.f[0] vs xmm3.f[0]) */

loc_00123409: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0012342A; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_0012340E: ;
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00123419; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm3.f[0]) */

loc_00123413: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    goto loc_0012342A;

loc_00123419: ;
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_0012342A; /* jae: above or equal (unsigned >=) (xmm1.f[0] vs xmm3.f[0]) */

loc_00123426: ;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */

loc_0012342A: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    edi = MEM32(ebp + 0xC);
    MEMF(esi + 0x38) = xmm4.f[0]; /* movss */
    MEMF(esi + 0x3C) = xmm2.f[0]; /* movss */
    MEMF(esi + 0x30) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x10B7E9AD);
    ecx = edi;
    MEMF(esi + 0x34) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00123452u); RECOMP_ABI_CALL(0x0001FBAFu, sub_0001FBAF); /* call 0x0001FBAF */

loc_00123452: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00123571; /* je: equal / zero */

loc_0012345A: ;
    ecx = MEM32(eax + 0x1C);
    edx = MEM32(eax + 0x10);
    eax = MEM32(ebp + 0x18);
    ecx = MEM32(ecx + 4);
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    MEM32(eax) = edx;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00123478; /* jge: greater or equal (signed >=) */

loc_00123471: ;
    MEMF(esi + 0x10) = xmm1.f[0]; /* movss */
    goto loc_00123481;

loc_00123478: ;
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esi + 0x10) = xmm0.f[0]; /* movss */

loc_00123481: ;
    xmm2 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0xC)); /* movss */
    MEMF(ebp + 0x10) = xmm2.f[0]; /* movss */
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(ebp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    xmm2 = XMM_SCALAR(MEMF(ebp + 0x14)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esi + 0x54) = xmm2.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    xmm2 = XMM_SCALAR(MEMF(0x8AE874)); /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001234BD; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_001234B8: ;
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_001234D9; /* ja: above (unsigned >) (xmm2.f[0] vs xmm0.f[0]) */

loc_001234BD: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001234C8; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_001234C2: ;
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    goto loc_001234D9;

loc_001234C8: ;
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_001234D9; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm1.f[0]) */

loc_001234D5: ;
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */

loc_001234D9: ;
    MEMF(esi + 0x58) = xmm0.f[0]; /* movss */
    edi = MEM32(edi + 0x34);
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001234F6; /* jne: not equal / not zero */

loc_001234E8: ;
    ecx = edi + 4;
    PUSH32(esp, ecx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001234F3u); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_001234F3: ;
    MEM32(edi + 8) = eax;

loc_001234F6: ;
    eax = MEM32(edi + 8);
    ecx = MEM32(ebp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x28)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 0x24); /* subss */
    edi = MEM32(ebx + 0x34);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(eax + 8)) & 0xFFFFu; _fb = (uint32_t)(0x13) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 8), 0x13 (16-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0xC); /* mulss */
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEMF(ebp + 0xC) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_0012353A; /* jne: not equal / not zero */

loc_00123527: ;
    eax = edi + 4;
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00123532u); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_00123532: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    MEM32(edi + 8) = eax;

loc_0012353A: ;
    edi = MEM32(edi + 8);
    xmm1 = XMM_SCALAR(MEMF(ebx + 0x28)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ebx + 0x24); /* subss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x10); /* subss */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(edi + 8)) & 0xFFFFu; _fb = (uint32_t)(0x13) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 8), 0x13 (16-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0xC); /* mulss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esi + 0xC); /* subss */
    POP32(esp, edi);
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(esi + 0x44) = xmm1.f[0]; /* movss */
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00123571: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00123579u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00123577u); } /* indirect call */
    }

loc_00123579: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00123650
 * Original: 0x00123650 - 0x0012377D (301 bytes, 109 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00123650(void)
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

loc_00123650: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi + 0x54);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0012377B; /* jle: less or equal (signed <=) */

loc_00123661: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = MEM32(edi + 0x58);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012367E; /* jne: not equal / not zero */

loc_00123670: ;
    eax = esi + 4;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0012367Bu); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_0012367B: ;
    MEM32(esi + 8) = eax;

loc_0012367E: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, ebx);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebp);
    ebp = 1;
    _fa = (uint32_t)(MEM16(eax + 8)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebp)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 8), LO16(ebp) (16-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = ecx;
    _fa = (uint32_t)(MEM16(esi + 8)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebp)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 8), LO16(ebp) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001236AA; /* jne: not equal / not zero */

loc_0012369C: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x001236A1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012369Eu); } /* indirect call */
    }

loc_001236A1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001236AA; /* jne: not equal / not zero */

loc_001236A6: ;
    ebx = esi;
    goto loc_001236AC;

loc_001236AA: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001236AC: ;
    _fa = (uint32_t)(MEM32(edi + 0x54)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x54), 2 (32-bit) */
    eax = MEM32(edi + 0x58);
    if (CMP_LE(_fas, _fbs)) goto loc_001236B8; /* jle: less or equal (signed <=) */

loc_001236B5: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001236B8: ;
    esi = MEM32(eax);
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001236CF; /* jne: not equal / not zero */

loc_001236C1: ;
    eax = esi + 4;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001236CCu); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_001236CC: ;
    MEM32(esi + 8) = eax;

loc_001236CF: ;
    esi = MEM32(esi + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(esi + 8)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebp)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 8), LO16(ebp) (16-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = esi & ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM16(esi + 8)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebp)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 8), LO16(ebp) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00123778; /* jne: not equal / not zero */

loc_001236E8: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x001236EFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001236ECu); } /* indirect call */
    }

loc_001236EF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00123778; /* jne: not equal / not zero */

loc_001236F8: ;
    eax = MEM32(esp + 0x1C);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = ebx;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00123713u); RECOMP_ABI_CALL(0x00021CA2u, sub_00021CA2); /* call 0x00021CA2 */

loc_00123713: ;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    eax = (int32_t)MEMF(esp + 0x18); /* cvttss2si */
    edi = MEM32(esp + 0x14);
    MEM32(edi + 0x64) = eax;
    esi = MEM32(esi + 0x34);
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012373C; /* jne: not equal / not zero */

loc_0012372E: ;
    edx = esi + 4;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00123739u); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_00123739: ;
    MEM32(esi + 8) = eax;

loc_0012373C: ;
    esi = MEM32(esi + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(esi + 8)) & 0xFFFFu; _fb = (uint32_t)(0x13) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 8), 0x13 (16-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00123772; /* jbe: below or equal (unsigned <=) */

loc_00123753: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7D0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7D0 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00123772; /* jae: above or equal (unsigned >=) */

loc_0012375A: ;
    ecx = MEM32(0x8F0680);
    edx = MEM32(ecx + 0x1014);
    eax = (uint32_t)(int32_t)SMEM16(edx + eax * 2);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, esi);
    MEM32(edi + 0x68) = eax;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_00123772: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edi + 0x68) = eax;

loc_00123778: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, esi);

loc_0012377B: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001237D0
 * Original: 0x001237D0 - 0x001239C5 (501 bytes, 160 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001237D0(void)
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

loc_001237D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(eax + 0x1C);
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, ebx);
    ebx = MEM32(ecx + 4);
    ecx = MEM32(eax + 0x54);
    eax = MEM32(eax + 0x58);
    PUSH32(esp, edi);
    edi = 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001237F3; /* jle: less or equal (signed <=) */

loc_001237F0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001237F3: ;
    PUSH32(esp, esi);
    esi = MEM32(eax);
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012380B; /* jne: not equal / not zero */

loc_001237FD: ;
    edx = esi + 4;
    PUSH32(esp, edx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00123808u); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_00123808: ;
    MEM32(esi + 8) = eax;

loc_0012380B: ;
    esi = MEM32(esi + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(esi + 8)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 8), LO16(edi) (16-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = esi & eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM16(esi + 8)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 8), LO16(edi) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012382C; /* jne: not equal / not zero */

loc_00123820: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00123827u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00123824u); } /* indirect call */
    }

loc_00123827: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012382E; /* je: equal / zero */

loc_0012382C: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0012382E: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    edi = MEM32(esi + 0x34);
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEMF(ebp + 0x10) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_00123853; /* jne: not equal / not zero */

loc_00123845: ;
    ecx = edi + 4;
    PUSH32(esp, ecx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00123850u); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_00123850: ;
    MEM32(edi + 8) = eax;

loc_00123853: ;
    eax = MEM32(edi + 8);
    xmm0 = XMM_SCALAR(MEMF(esi + 0x28)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x24); /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + 0x10); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x24); /* addss */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(eax + 8)) & 0xFFFFu; _fb = (uint32_t)(0x13) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 8), 0x13 (16-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    xmm1 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(0x7A9980); /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7AA820); /* addss */
    MEMF(ebp + 0x10) = xmm0.f[0]; /* movss */
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    fp_top() = recomp_frndint(fp_top(), g_fp_control_word); /* frndint */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ebp + 0x10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [ebp + 0x10] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x45) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x45 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001238A8; /* jne: not equal / not zero */

loc_001238A4: ;
    fp_push(1.0); /* fld1 */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */

loc_001238A8: ;
    MEMF(ebp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    ecx = MEM32(ebx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_GE(_fas, _fbs)) goto loc_001238C9; /* jge: greater or equal (signed >=) */

loc_001238C2: ;
    MEMF(eax + 0x10) = xmm2.f[0]; /* movss */
    goto loc_001238D2;

loc_001238C9: ;
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */

loc_001238D2: ;
    xmm5 = XMM_SCALAR(MEMF(ebx + 8)); /* movss */
    _fca = xmm5.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm0 = XMM_SCALAR(MEMF(0x8AE874)); /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001238E9; /* jb: below (unsigned <) (xmm5.f[0] vs xmm2.f[0]) */

loc_001238E4: ;
    _fca = xmm0.f[0]; _fcb = xmm5.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00123908; /* ja: above (unsigned >) (xmm0.f[0] vs xmm5.f[0]) */

loc_001238E9: ;
    _fca = xmm5.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001238F4; /* jbe: below or equal (unsigned <=) (xmm5.f[0] vs xmm2.f[0]) */

loc_001238EE: ;
    xmm5.f[0] = xmm5.f[0] - xmm0.f[0]; /* subss */
    goto loc_00123908;

loc_001238F4: ;
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm5.f[0]; _fcb = xmm1.f[0]; /* comiss */
    xmm5.f[0] = xmm5.f[0] + xmm0.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_00123908; /* jae: above or equal (unsigned >=) (xmm5.f[0] vs xmm1.f[0]) */

loc_00123904: ;
    xmm5.f[0] = xmm5.f[0] + xmm0.f[0]; /* addss */

loc_00123908: ;
    xmm4 = XMM_SCALAR(MEMF(ebx + 4)); /* movss */
    _fca = xmm4.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm7 = XMM_SCALAR(MEMF(ebx + 0xC)); /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0012391C; /* jb: below (unsigned <) (xmm4.f[0] vs xmm2.f[0]) */

loc_00123917: ;
    _fca = xmm0.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0012393B; /* ja: above (unsigned >) (xmm0.f[0] vs xmm4.f[0]) */

loc_0012391C: ;
    _fca = xmm4.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00123927; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs xmm2.f[0]) */

loc_00123921: ;
    xmm4.f[0] = xmm4.f[0] - xmm0.f[0]; /* subss */
    goto loc_0012393B;

loc_00123927: ;
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm4.f[0]; _fcb = xmm1.f[0]; /* comiss */
    xmm4.f[0] = xmm4.f[0] + xmm0.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_0012393B; /* jae: above or equal (unsigned >=) (xmm4.f[0] vs xmm1.f[0]) */

loc_00123937: ;
    xmm4.f[0] = xmm4.f[0] + xmm0.f[0]; /* addss */

loc_0012393B: ;
    xmm3 = XMM_SCALAR(MEMF(ebx + 0x18)); /* movss */
    _fca = xmm3.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0012394A; /* jb: below (unsigned <) (xmm3.f[0] vs xmm2.f[0]) */

loc_00123945: ;
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00123969; /* ja: above (unsigned >) (xmm0.f[0] vs xmm3.f[0]) */

loc_0012394A: ;
    _fca = xmm3.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00123955; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm2.f[0]) */

loc_0012394F: ;
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    goto loc_00123969;

loc_00123955: ;
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm3.f[0]; _fcb = xmm1.f[0]; /* comiss */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_00123969; /* jae: above or equal (unsigned >=) (xmm3.f[0] vs xmm1.f[0]) */

loc_00123965: ;
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */

loc_00123969: ;
    xmm1 = XMM_SCALAR(MEMF(ebx + 0x10)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm6 = XMM_SCALAR(MEMF(ebx + 0x1C)); /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0012397D; /* jb: below (unsigned <) (xmm1.f[0] vs xmm2.f[0]) */

loc_00123978: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00123999; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_0012397D: ;
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00123988; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm2.f[0]) */

loc_00123982: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    goto loc_00123999;

loc_00123988: ;
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_00123999; /* jae: above or equal (unsigned >=) (xmm1.f[0] vs xmm2.f[0]) */

loc_00123995: ;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */

loc_00123999: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x14)); /* movss */
    MEMF(eax + 0x38) = xmm6.f[0]; /* movss */
    MEMF(eax + 0x3C) = xmm3.f[0]; /* movss */
    MEMF(eax + 0x30) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x34) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x24) = xmm7.f[0]; /* movss */
    POP32(esp, edi);
    MEMF(eax + 0x28) = xmm5.f[0]; /* movss */
    MEMF(eax + 0x2C) = xmm4.f[0]; /* movss */
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00123A50
 * Original: 0x00123A50 - 0x00123A60 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00123A50(void)
{

loc_00123A50: ;
    eax = ecx;
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00123A70
 * Original: 0x00123A70 - 0x00123A7D (13 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00123A70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00123A70: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00123A80
 * Original: 0x00123A80 - 0x00123AE0 (96 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00123A80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00123A80: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00123ADD; /* je: equal / zero */

loc_00123A8B: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00123A98; /* je: equal / zero */

loc_00123A92: ;
    ecx = MEM32(esi);
    MEM32(eax) = ecx;
    goto loc_00123A9D;

loc_00123A98: ;
    edx = MEM32(esi);
    MEM32(edi + 4) = edx;

loc_00123A9D: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00123AAB; /* je: equal / zero */

loc_00123AA3: ;
    ecx = MEM32(esi + 4);
    MEM32(eax + 4) = ecx;
    goto loc_00123AB1;

loc_00123AAB: ;
    edx = MEM32(esi + 4);
    MEM32(edi + 8) = edx;

loc_00123AB1: ;
    MEM32(esi + 4) = 0;
    MEM32(esi) = 0;
    MEM32(edi) = MEM32(edi) - 1;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00123ACD; /* je: equal / zero */

loc_00123AC7: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00123ACDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00123ACBu); } /* indirect call */
    }

loc_00123ACD: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00123AD3u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00123AD3: ;
    esi = MEM32(edi + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00123A8B; /* jne: not equal / not zero */

loc_00123ADD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00123B00
 * Original: 0x00123B00 - 0x00123B29 (41 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00123B00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00123B00: ;
    eax = MEM32(esp + 4);
    edx = MEM32(ecx + 8);
    MEM32(eax + 4) = edx;
    MEM32(eax) = 0;
    MEM32(ecx + 8) = eax;
    edx = MEM32(eax + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00123B21; /* je: equal / zero */

loc_00123B1A: ;
    MEM32(edx) = eax;
    MEM32(ecx) = MEM32(ecx) + 1;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

loc_00123B21: ;
    MEM32(ecx + 4) = eax;
    MEM32(ecx) = MEM32(ecx) + 1;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00123B40
 * Original: 0x00123B40 - 0x00123B59 (25 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00123B40(void)
{

loc_00123B40: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    MEM32(eax + 8) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00123B60
 * Original: 0x00123B60 - 0x00123BD8 (120 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00123B60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00123B60: ;
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    xmm3 = XMM_SCALAR(MEMF(0x7AB2D0)); /* movss */
    PUSH32(esp, esi);
    esi = 2;

loc_00123B71: ;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    xmm1 = xmm2; /* movaps */
    if (CMP_EQ(_fa, _fb)) goto loc_00123BD0; /* je: equal / zero */

loc_00123B7B: ;
    goto loc_00123B80;

    /* nop */

loc_00123B80: ;
    edx = MEM32(eax + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00123BA3; /* je: equal / zero */

loc_00123B87: ;
    xmm0 = XMM_SCALAR(MEMF(edx + 0x44)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00123B93; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_00123B91: ;
    goto loc_00123B9B;

loc_00123B93: ;
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(edx + 0x44); /* subss */

loc_00123B9B: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00123BA3; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00123BA0: ;
    xmm1 = xmm0; /* movaps */

loc_00123BA3: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00123B80; /* jne: not equal / not zero */

loc_00123BA9: ;
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00123BD0; /* jb: below (unsigned <) (xmm1.f[0] vs xmm3.f[0]) */

loc_00123BAE: ;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00123BD0; /* je: equal / zero */

loc_00123BB5: ;
    edx = MEM32(eax + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00123BCA; /* je: equal / zero */

loc_00123BBC: ;
    xmm0 = XMM_SCALAR(MEMF(edx + 0x44)); /* movss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    MEMF(edx + 0x44) = xmm0.f[0]; /* movss */

loc_00123BCA: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00123BB5; /* jne: not equal / not zero */

loc_00123BD0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00123B71; /* jne: not equal / not zero */

loc_00123BD6: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00123C00
 * Original: 0x00123C00 - 0x00123C20 (32 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00123C00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00123C00: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = 2;
    /* nop */

loc_00123C10: ;
    ecx = esi;
    PUSH32(esp, 0x00123C17u); RECOMP_ABI_CALL(0x000185A8u, sub_000185A8); /* call 0x000185A8 */

loc_00123C17: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x18;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00123C10; /* jne: not equal / not zero */

loc_00123C1D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00123C30
 * Original: 0x00123C30 - 0x00123ECD (669 bytes, 201 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00123C30(void)
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

loc_00123C30: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ecx + 0x40);
    edx = MEM32(esp + 0x18);
    edx = MEM32(edx + 0xC);
    xmm0 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax) (32-bit) */
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = ecx;
    MEM8(esp + 0xF) = 1;
    if (CMP_NE(_fa, _fb)) goto loc_00123C5D; /* jne: not equal / not zero */

loc_00123C55: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */

loc_00123C5D: ;
    esi = MEM32(esp + 0x34);
    edx = MEM32(esp + 0x30);
    edi = MEM32(ecx + 0x4C);
    ebx = esi + 0x48;
    PUSH32(esp, ebx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x34);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x34);
    PUSH32(esp, eax);
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, edx);
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00123C9Cu); RECOMP_ABI_CALL(0x00021D79u, sub_00021D79); /* call 0x00021D79 */

loc_00123C9C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00123CB2; /* je: equal / zero */

loc_00123CA0: ;
    POP32(esp, edi);
    MEM8(esp + 0xB) = 0;
    SET_LO8(eax, MEM8(esp + 0xB));
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

loc_00123CB2: ;
    PUSH32(esp, ebp);
    eax = esp + 0x18;
    ebp = esi + 0x18;
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x00123CC2u); RECOMP_ABI_CALL(0x0001E151u, sub_0001E151); /* call 0x0001E151 */

loc_00123CC2: ;
    ecx = esp + 0x38;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00123CCDu); RECOMP_ABI_CALL(0x0001F6E6u, sub_0001F6E6); /* call 0x0001F6E6 */

loc_00123CCD: ;
    edx = MEM32(eax);
    eax = MEM32(esp + 0x34);
    MEM32(ebx) = edx;
    edx = MEM32(eax + 0x20);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x48;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00123CE7u); RECOMP_ABI_CALL(0x0001E151u, sub_0001E151); /* call 0x0001E151 */

loc_00123CE7: ;
    eax = esi + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x00123CF3u); RECOMP_ABI_CALL(0x0001D611u, sub_0001D611); /* call 0x0001D611 */

loc_00123CF3: ;
    xmm0 = XMM_SCALAR(MEMF(esi)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(edi); /* comiss */
    if ((_fca > _fcb)) goto loc_00123EBA; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(edi)) */

loc_00123D00: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7B43AC)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    _fca = xmm1.f[0]; _fcb = MEMF(edi + 4); /* comiss */
    if ((_fca > _fcb)) goto loc_00123EBA; /* ja: above (unsigned >) (xmm1.f[0] vs MEMF(edi + 4)) */

loc_00123D1B: ;
    xmm1 = XMM_SCALAR(MEMF(ebx)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    _fca = xmm1.f[0]; _fcb = MEMF(edi + 8); /* comiss */
    if ((_fca > _fcb)) goto loc_00123EBA; /* ja: above (unsigned >) (xmm1.f[0] vs MEMF(edi + 8)) */

loc_00123D2D: ;
    eax = MEM32(ebp);
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    xmm2 = XMM_SCALAR(MEMF(0x8AE874)); /* movss */
    ecx = esi + 0x30;
    MEM32(ecx) = eax;
    edx = MEM32(ebp + 4);
    ebp = MEM32(esp + 0x14);
    MEM32(ecx + 4) = edx;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x3C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x28); /* mulss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00123D5F; /* jb: below (unsigned <) (xmm0.f[0] vs xmm3.f[0]) */

loc_00123D5A: ;
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00123D7E; /* ja: above (unsigned >) (xmm2.f[0] vs xmm0.f[0]) */

loc_00123D5F: ;
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00123D6A; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm3.f[0]) */

loc_00123D64: ;
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    goto loc_00123D7E;

loc_00123D6A: ;
    xmm1 = xmm3; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_00123D7E; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00123D7A: ;
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */

loc_00123D7E: ;
    eax = MEM32(esp + 0x30);
    edx = MEM32(eax + 0x20);
    xmm1 = XMM_SCALAR(MEMF(edx + 0x60)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00123D98; /* jb: below (unsigned <) (xmm1.f[0] vs xmm3.f[0]) */

loc_00123D93: ;
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00123DB4; /* ja: above (unsigned >) (xmm2.f[0] vs xmm1.f[0]) */

loc_00123D98: ;
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00123DA3; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm3.f[0]) */

loc_00123D9D: ;
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    goto loc_00123DB4;

loc_00123DA3: ;
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_00123DB4; /* jae: above or equal (unsigned >=) (xmm1.f[0] vs xmm3.f[0]) */

loc_00123DB0: ;
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */

loc_00123DB4: ;
    edx = MEM32(ebp + 0x38);
    eax = esi + 0x28;
    PUSH32(esp, ecx);
    ebx = esi + 8;
    MEM32(eax) = edx;
    PUSH32(esp, eax);
    ecx = ebx;
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x00123DCDu); RECOMP_ABI_CALL(0x0001D611u, sub_0001D611); /* call 0x0001D611 */

loc_00123DCD: ;
    xmm0 = XMM_SCALAR(MEMF(ebx)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(edi + 0xC); /* comiss */
    if ((_fca > _fcb)) goto loc_00123EBA; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(edi + 0xC)) */

loc_00123DDB: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7B43AC); /* mulss */
    _fca = xmm0.f[0]; _fcb = MEMF(edi + 0x10); /* comiss */
    if ((_fca > _fcb)) goto loc_00123EBA; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(edi + 0x10)) */

loc_00123DF2: ;
    ebx = MEM32(esp + 0x30);
    eax = MEM32(ebx + 0x20);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x48;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + 0x40;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00123E05u); RECOMP_ABI_CALL(0x0001E151u, sub_0001E151); /* call 0x0001E151 */

loc_00123E05: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x28); /* mulss */
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    xmm2 = XMM_SCALAR(MEMF(0x8AE874)); /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00123E25; /* jb: below (unsigned <) (xmm0.f[0] vs xmm3.f[0]) */

loc_00123E20: ;
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00123E44; /* ja: above (unsigned >) (xmm2.f[0] vs xmm0.f[0]) */

loc_00123E25: ;
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00123E30; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm3.f[0]) */

loc_00123E2A: ;
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    goto loc_00123E44;

loc_00123E30: ;
    xmm1 = xmm3; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_00123E44; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00123E40: ;
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */

loc_00123E44: ;
    ecx = MEM32(ebx + 0x20);
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x60)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00123E5A; /* jb: below (unsigned <) (xmm1.f[0] vs xmm3.f[0]) */

loc_00123E55: ;
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00123E76; /* ja: above (unsigned >) (xmm2.f[0] vs xmm1.f[0]) */

loc_00123E5A: ;
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00123E65; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm3.f[0]) */

loc_00123E5F: ;
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    goto loc_00123E76;

loc_00123E65: ;
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_00123E76; /* jae: above or equal (unsigned >=) (xmm1.f[0] vs xmm3.f[0]) */

loc_00123E72: ;
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */

loc_00123E76: ;
    edx = MEM32(ebp + 0x30);
    eax = esi + 0x38;
    ebp = esi + 0x40;
    PUSH32(esp, ebp);
    ebx = esi + 0x10;
    MEM32(eax) = edx;
    PUSH32(esp, eax);
    ecx = ebx;
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x00123E92u); RECOMP_ABI_CALL(0x0001D611u, sub_0001D611); /* call 0x0001D611 */

loc_00123E92: ;
    xmm0 = XMM_SCALAR(MEMF(ebx)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(edi + 0x14); /* comiss */
    if ((_fca > _fcb)) goto loc_00123EBA; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(edi + 0x14)) */

loc_00123E9C: ;
    xmm0 = XMM_SCALAR(MEMF(ebp)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(edi + 0x14); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00123EBF; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(edi + 0x14)) */

loc_00123EA7: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7B43AC); /* mulss */
    _fca = xmm0.f[0]; _fcb = MEMF(edi + 0x18); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00123EBF; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(edi + 0x18)) */

loc_00123EBA: ;
    MEM8(esp + 0x13) = 0;

loc_00123EBF: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00123E3E
 * Original: 0x00123E3E - 0x00123ECD (143 bytes, 46 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00123E3E(void)
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

loc_00123E3E: ;
    if (_flags /* jae: above or equal (unsigned >=) */) goto loc_00123E44;

loc_00123E40: ;
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */

loc_00123E44: ;
    ecx = MEM32(ebx + 0x20);
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x60)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00123E5A; /* jb: below (unsigned <) (xmm1.f[0] vs xmm3.f[0]) */

loc_00123E55: ;
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00123E76; /* ja: above (unsigned >) (xmm2.f[0] vs xmm1.f[0]) */

loc_00123E5A: ;
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00123E65; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm3.f[0]) */

loc_00123E5F: ;
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    goto loc_00123E76;

loc_00123E65: ;
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_00123E76; /* jae: above or equal (unsigned >=) (xmm1.f[0] vs xmm3.f[0]) */

loc_00123E72: ;
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */

loc_00123E76: ;
    edx = MEM32(ebp + 0x30);
    eax = esi + 0x38;
    ebp = esi + 0x40;
    PUSH32(esp, ebp);
    ebx = esi + 0x10;
    MEM32(eax) = edx;
    PUSH32(esp, eax);
    ecx = ebx;
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x00123E92u); RECOMP_ABI_CALL(0x0001D611u, sub_0001D611); /* call 0x0001D611 */

loc_00123E92: ;
    xmm0 = XMM_SCALAR(MEMF(ebx)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(edi + 0x14); /* comiss */
    if ((_fca > _fcb)) goto loc_00123EBA; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(edi + 0x14)) */

loc_00123E9C: ;
    xmm0 = XMM_SCALAR(MEMF(ebp)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(edi + 0x14); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00123EBF; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(edi + 0x14)) */

loc_00123EA7: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7B43AC); /* mulss */
    _fca = xmm0.f[0]; _fcb = MEMF(edi + 0x18); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00123EBF; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(edi + 0x18)) */

loc_00123EBA: ;
    MEM8(esp + 0x13) = 0;

loc_00123EBF: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00123F80
 * Original: 0x00123F80 - 0x00123FA6 (38 bytes, 14 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00123F80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00123F80: ;
    eax = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00123F9Eu); RECOMP_ABI_CALL(0x000309D2u, sub_000309D2); /* call 0x000309D2 */

loc_00123F9E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00123FB0
 * Original: 0x00123FB0 - 0x00124135 (389 bytes, 130 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00123FB0(void)
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

loc_00123FB0: ;
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = ecx;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x18)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0012411A; /* jb: below (unsigned <) (xmm0.f[0] vs xmm3.f[0]) */

loc_00123FD3: ;
    eax = MEM32(esi + 0x40);
    ecx = MEM32(edi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax) (32-bit) */
    xmm0 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_00123FED; /* jne: not equal / not zero */

loc_00123FE5: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */

loc_00123FED: ;
    xmm2 = XMM_SCALAR(MEMF(esi + 0x58)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x8AE874)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    _fca = xmm2.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00124008; /* jb: below (unsigned <) (xmm2.f[0] vs xmm3.f[0]) */

loc_00124003: ;
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0012402D; /* ja: above (unsigned >) (xmm1.f[0] vs xmm2.f[0]) */

loc_00124008: ;
    _fca = xmm2.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00124013; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm3.f[0]) */

loc_0012400D: ;
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    goto loc_0012402D;

loc_00124013: ;
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_0012402A; /* jae: above or equal (unsigned >=) (xmm2.f[0] vs xmm0.f[0]) */

loc_00124026: ;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */

loc_0012402A: ;
    xmm2 = xmm0; /* movaps */

loc_0012402D: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 0x1C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00124040; /* jb: below (unsigned <) (xmm0.f[0] vs xmm3.f[0]) */

loc_0012403B: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00124065; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_00124040: ;
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0012404B; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm3.f[0]) */

loc_00124045: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_00124065;

loc_0012404B: ;
    xmm2 = xmm3; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_00124062; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm2.f[0]) */

loc_0012405E: ;
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */

loc_00124062: ;
    xmm0 = xmm2; /* movaps */

loc_00124065: ;
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0012406F; /* jb: below (unsigned <) (xmm0.f[0] vs xmm3.f[0]) */

loc_0012406A: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00124097; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_0012406F: ;
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0012407D; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm3.f[0]) */

loc_00124074: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm2 = xmm0; /* movaps */
    goto loc_00124094;

loc_0012407D: ;
    xmm2 = xmm3; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_00124094; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm2.f[0]) */

loc_00124090: ;
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */

loc_00124094: ;
    xmm0 = xmm2; /* movaps */

loc_00124097: ;
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001240A9; /* jb: below (unsigned <) (xmm0.f[0] vs xmm3.f[0]) */

loc_0012409C: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001240A9; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_001240A1: ;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    goto loc_001240DA;

loc_001240A9: ;
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001240B7; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm3.f[0]) */

loc_001240AE: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm2 = xmm0; /* movaps */
    goto loc_001240D4;

loc_001240B7: ;
    xmm3.f[0] = xmm3.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001240C9; /* jb: below (unsigned <) (xmm0.f[0] vs xmm3.f[0]) */

loc_001240C0: ;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm2 = xmm1; /* movaps */
    goto loc_001240D4;

loc_001240C9: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */

loc_001240D4: ;
    MEMF(esp + 0x1C) = xmm2.f[0]; /* movss */

loc_001240DA: ;
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001240E9u); RECOMP_ABI_CALL(0x0001F6E6u, sub_0001F6E6); /* call 0x0001F6E6 */

loc_001240E9: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7B43AC); /* mulss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = MEMF(0x8AE864); /* comiss */
    if ((_fca > _fcb)) goto loc_00124111; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(0x8AE864)) */

loc_00124103: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0012410Du); RECOMP_ABI_CALL(0x0001E03Eu, sub_0001E03E); /* call 0x0001E03E */

loc_0012410D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012411A; /* jne: not equal / not zero */

loc_00124111: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 24; return; /* ret 20 */

loc_0012411A: ;
    ecx = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0012412Eu); RECOMP_ABI_CALL(0x000309D2u, sub_000309D2); /* call 0x000309D2 */

loc_0012412E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_001241A0
 * Original: 0x001241A0 - 0x001241D4 (52 bytes, 22 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001241A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001241A0: ;
    eax = MEM32(esp + 4);
    SET_LO8(edx, MEM8(eax + 0x25));
    PUSH32(esp, ebx);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001241CE; /* jne: not equal / not zero */

loc_001241AE: ;
    edx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001241C8u); RECOMP_ABI_CALL(0x000309D2u, sub_000309D2); /* call 0x000309D2 */

loc_001241C8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    SET_LO8(eax, 1);
    if (CMP_NE(_fa, _fb)) goto loc_001241D0; /* jne: not equal / not zero */

loc_001241CE: ;
    SET_LO8(eax, LO8(ebx));

loc_001241D0: ;
    POP32(esp, ebx);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_001241F0
 * Original: 0x001241F0 - 0x001241F5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001241F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001241F0: ;
    g_seh_ebp = ebp; sub_0001B74E(); return; /* tail jmp 0x0001B74E */

}

/**
 * sub_00124200
 * Original: 0x00124200 - 0x00124252 (82 bytes, 29 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00124200(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00124200: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0xC);
    esi = ecx;
    PUSH32(esp, 0x0012420Cu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0012420C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00124229; /* je: equal / zero */

loc_00124213: ;
    ecx = MEM32(esp + 8);
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    MEM32(eax + 8) = ecx;
    goto loc_0012422B;

loc_00124229: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0012422B: ;
    edx = MEM32(esi + 8);
    MEM32(eax + 4) = edx;
    MEM32(eax) = 0;
    MEM32(esi + 8) = eax;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00124249; /* je: equal / zero */

loc_00124241: ;
    MEM32(ecx) = eax;
    MEM32(esi) = MEM32(esi) + 1;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00124249: ;
    MEM32(esi + 4) = eax;
    MEM32(esi) = MEM32(esi) + 1;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00124270
 * Original: 0x00124270 - 0x00124290 (32 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00124270(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00124270: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx + 0x18;
    edi = 2;
    /* nop */

loc_00124280: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esi;
    PUSH32(esp, 0x0012428Au); RECOMP_ABI_CALL(0x0001B74Eu, sub_0001B74E); /* call 0x0001B74E */

loc_0012428A: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00124280; /* jne: not equal / not zero */

loc_0012428D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001242A0
 * Original: 0x001242A0 - 0x001242AD (13 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001242A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001242A0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_001242B0
 * Original: 0x001242B0 - 0x001242DD (45 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001242B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001242B0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = 4;
    goto loc_001242C0;

    /* nop */

loc_001242C0: ;
    esi = ecx;
    edi = 2;

loc_001242C7: ;
    ecx = esi;
    PUSH32(esp, 0x001242CEu); RECOMP_ABI_CALL(0x000185A8u, sub_000185A8); /* call 0x000185A8 */

loc_001242CE: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x18;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001242C7; /* jne: not equal / not zero */

loc_001242D4: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = esi;
    if ((_fa != 0)) goto loc_001242C0; /* jne: not equal / not zero */

loc_001242D9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001242F0
 * Original: 0x001242F0 - 0x0012432A (58 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001242F0(void)
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

loc_001242F0: ;
    edx = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(edx + 0x18)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AA840); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00124316; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(0x7AA840)) */

loc_00124302: ;
    SET_LO8(eax, 1);
    eax = ZX8(LO8(eax));
    eax = eax + eax * 2;
    MEM32(esp + 4) = edx;
    ecx = ecx + eax * 4;
    g_seh_ebp = ebp; sub_00038187(); return; /* tail jmp 0x00038187 */

loc_00124316: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    eax = ZX8(LO8(eax));
    eax = eax + eax * 2;
    MEM32(esp + 4) = edx;
    ecx = ecx + eax * 4;
    g_seh_ebp = ebp; sub_00038187(); return; /* tail jmp 0x00038187 */

}

/**
 * sub_00124340
 * Original: 0x00124340 - 0x0012437D (61 bytes, 22 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00124340(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00124340: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x44); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00124352; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esi + 0x44)) */

loc_0012434E: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00124357;

loc_00124352: ;
    edx = 1;

loc_00124357: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 0x18)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00124365; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_00124361: ;
    SET_LO8(eax, 1);
    goto loc_00124367;

loc_00124365: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_00124367: ;
    eax = ZX8(LO8(eax));
    eax = eax + edx * 2;
    edx = eax + eax * 2;
    PUSH32(esp, esi);
    ecx = ecx + edx * 4;
    PUSH32(esp, 0x00124379u); RECOMP_ABI_CALL(0x00038187u, sub_00038187); /* call 0x00038187 */

loc_00124379: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00124390
 * Original: 0x00124390 - 0x001243D7 (71 bytes, 27 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00124390(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00124390: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 0x40);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x44); /* comiss */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(edx);
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001243A8; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax + 0x44)) */

loc_001243A4: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001243AD;

loc_001243A8: ;
    esi = 1;

loc_001243AD: ;
    xmm1 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001243BB; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_001243B7: ;
    SET_LO8(edx, 1);
    goto loc_001243BD;

loc_001243BB: ;
    SET_LO8(edx, 0); /* xor self */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_001243BD: ;
    PUSH32(esp, eax);
    edx = ZX8(LO8(edx));
    eax = esi + edi * 2;
    eax = edx + eax * 2;
    eax = eax + eax * 2;
    ecx = ecx + eax * 4;
    PUSH32(esp, 0x001243D2u); RECOMP_ABI_CALL(0x00038187u, sub_00038187); /* call 0x00038187 */

loc_001243D2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001243F0
 * Original: 0x001243F0 - 0x00124410 (32 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001243F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001243F0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx + 0x18;
    edi = 2;
    /* nop */

loc_00124400: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esi;
    PUSH32(esp, 0x0012440Au); RECOMP_ABI_CALL(0x0001B74Eu, sub_0001B74E); /* call 0x0001B74E */

loc_0012440A: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00124400; /* jne: not equal / not zero */

loc_0012440D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00124420
 * Original: 0x00124420 - 0x00124436 (22 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00124420(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00124420: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x10) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00124440
 * Original: 0x00124440 - 0x00124824 (996 bytes, 338 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00124440(void)
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

loc_00124440: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x10);
    eax = MEM32(ebx + 0x54);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = MEM32(ebx + 0x58);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    MEMF(ebp + -4) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_00124478; /* jne: not equal / not zero */

loc_0012446A: ;
    ecx = esi + 4;
    PUSH32(esp, ecx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00124475u); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_00124475: ;
    MEM32(esi + 8) = eax;

loc_00124478: ;
    eax = MEM32(esi + 8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 1;
    _fa = (uint32_t)(MEM16(eax + 8)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 8), LO16(edi) (16-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx & eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = edx;
    _fa = (uint32_t)(MEM16(esi + 8)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 8), LO16(edi) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001244A3; /* jne: not equal / not zero */

loc_00124494: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0012449Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00124498u); } /* indirect call */
    }

loc_0012449B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    MEM32(ebp + 0xC) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_001244AA; /* je: equal / zero */

loc_001244A3: ;
    MEM32(ebp + 0xC) = 0;

loc_001244AA: ;
    _fa = (uint32_t)(MEM32(ebx + 0x54)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x54), edi (32-bit) */
    eax = MEM32(ebx + 0x58);
    if (CMP_LE(_fas, _fbs)) goto loc_001244B5; /* jle: less or equal (signed <=) */

loc_001244B2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001244B5: ;
    esi = MEM32(eax);
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001244CC; /* jne: not equal / not zero */

loc_001244BE: ;
    ecx = esi + 4;
    PUSH32(esp, ecx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001244C9u); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_001244C9: ;
    MEM32(esi + 8) = eax;

loc_001244CC: ;
    esi = MEM32(esi + 8);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(esi + 8)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 8), LO16(edi) (16-bit) */
    SET_LO8(ebx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx & esi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM16(ebx + 8)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebx + 8), LO16(edi) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001244ED; /* jne: not equal / not zero */

loc_001244E1: ;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x001244E8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001244E5u); } /* indirect call */
    }

loc_001244E8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001244EF; /* je: equal / zero */

loc_001244ED: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001244EF: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x84);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001244FBu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_001244FB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00124511; /* je: equal / zero */

loc_00124502: ;
    ecx = MEM32(ebp + 0x14);
    PUSH32(esp, ecx);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012450Du); RECOMP_ABI_CALL(0x00014322u, sub_00014322); /* call 0x00014322 */

loc_0012450D: ;
    esi = eax;
    goto loc_00124513;

loc_00124511: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00124513: ;
    edi = MEM32(ebx + 0x34);
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012452B; /* jne: not equal / not zero */

loc_0012451D: ;
    edx = edi + 4;
    PUSH32(esp, edx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00124528u); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_00124528: ;
    MEM32(edi + 8) = eax;

loc_0012452B: ;
    eax = MEM32(edi + 8);
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x28)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebx + 0x24); /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -4); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebx + 0x24); /* addss */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(eax + 8)) & 0xFFFFu; _fb = (uint32_t)(0x13) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 8), 0x13 (16-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    xmm1 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(0x7A9980); /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7AA820); /* addss */
    MEMF(ebp + -8) = xmm0.f[0]; /* movss */
    fp_push(MEMF(ebp + -8)); /* fld float */
    fp_top() = recomp_frndint(fp_top(), g_fp_control_word); /* frndint */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ebp + -8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [ebp - 8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x45) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x45 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00124580; /* jne: not equal / not zero */

loc_0012457C: ;
    fp_push(1.0); /* fld1 */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */

loc_00124580: ;
    MEMF(ebp + -12) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -12)); /* movss */
    MEMF(esi + 0x14) = xmm0.f[0]; /* movss */
    edi = MEM32(ebx + 0x34);
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001245A5; /* jne: not equal / not zero */

loc_00124597: ;
    edx = edi + 4;
    PUSH32(esp, edx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001245A2u); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_001245A2: ;
    MEM32(edi + 8) = eax;

loc_001245A5: ;
    edi = MEM32(edi + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(edi + 8)) & 0xFFFFu; _fb = (uint32_t)(0x13) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 8), 0x13 (16-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001245D5; /* jbe: below or equal (unsigned <=) */

loc_001245BC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7D0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7D0 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001245D5; /* jae: above or equal (unsigned >=) */

loc_001245C3: ;
    ecx = MEM32(0x8F0680);
    edx = MEM32(ecx + 0x1014);
    eax = (uint32_t)(int32_t)SMEM16(edx + eax * 2);
    goto loc_001245D8;

loc_001245D5: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001245D8: ;
    MEM32(esi + 4) = eax;
    eax = MEM32(ebp + 0xC);
    edi = MEM32(eax + 0x34);
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001245F6; /* jne: not equal / not zero */

loc_001245E8: ;
    ecx = edi + 4;
    PUSH32(esp, ecx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001245F3u); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_001245F3: ;
    MEM32(edi + 8) = eax;

loc_001245F6: ;
    edi = MEM32(edi + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(edi + 8)) & 0xFFFFu; _fb = (uint32_t)(0x13) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 8), 0x13 (16-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00124626; /* jbe: below or equal (unsigned <=) */

loc_0012460D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7D0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7D0 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00124626; /* jae: above or equal (unsigned >=) */

loc_00124614: ;
    edx = MEM32(0x8F0680);
    ecx = MEM32(edx + 0x1014);
    eax = (uint32_t)(int32_t)SMEM16(ecx + eax * 2);
    goto loc_00124629;

loc_00124626: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00124629: ;
    edi = MEM32(ebp + 0x18);
    PUSH32(esp, 0x7D9DD4);
    PUSH32(esp, edi);
    MEM32(esi + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012463Au); RECOMP_ABI_CALL(0x005CC310u, sub_005CC310); /* call 0x005CC310 */

loc_0012463A: ;
    PUSH32(esp, 0x7D9DC8);
    PUSH32(esp, edi);
    MEM32(ebp + 0x18) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00124648u); RECOMP_ABI_CALL(0x005CC310u, sub_005CC310); /* call 0x005CC310 */

loc_00124648: ;
    ecx = MEM32(ebp + 0x18);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012465B; /* jne: not equal / not zero */

loc_00124652: ;
    MEM32(esi + 0x4C) = 0x8F031C;
    goto loc_0012466F;

loc_0012465B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00124668; /* jne: not equal / not zero */

loc_0012465F: ;
    MEM32(esi + 0x4C) = 0x8F02FC;
    goto loc_0012466F;

loc_00124668: ;
    MEM32(esi + 0x4C) = 0x8F034C;

loc_0012466F: ;
    edx = MEM32(ebp + -4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x24B7EC7E);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012467Fu); RECOMP_ABI_CALL(0x00019B01u, sub_00019B01); /* call 0x00019B01 */

loc_0012467F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012469B; /* je: equal / zero */

loc_00124683: ;
    ecx = ebp + 0x18;
    PUSH32(esp, ecx);
    edx = ebp + -4;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00124696u); RECOMP_ABI_CALL(0x0002A3D9u, sub_0002A3D9); /* call 0x0002A3D9 */

loc_00124696: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_001246A5;

loc_0012469B: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x001246A3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001246A1u); } /* indirect call */
    }

loc_001246A3: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001246A5: ;
    eax = MEM32(ebp + 0x18);
    edi = MEM32(ebp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0xB7E127);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001246B8u); RECOMP_ABI_CALL(0x00019B01u, sub_00019B01); /* call 0x00019B01 */

loc_001246B8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001246CA; /* je: equal / zero */

loc_001246BC: ;
    ecx = MEM32(ebp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001246C7u); RECOMP_ABI_CALL(0x0001F4DEu, sub_0001F4DE); /* call 0x0001F4DE */

loc_001246C7: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001246CA: ;
    edx = MEM32(ebp + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, 0x14B7F415);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001246DAu); RECOMP_ABI_CALL(0x00019B01u, sub_00019B01); /* call 0x00019B01 */

loc_001246DA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00124712; /* je: equal / zero */

loc_001246DE: ;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001246E9u); RECOMP_ABI_CALL(0x000296DCu, sub_000296DC); /* call 0x000296DC */

loc_001246E9: ;
    ecx = MEM32(ebp + -4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x18B7E186);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001246FCu); RECOMP_ABI_CALL(0x00019B01u, sub_00019B01); /* call 0x00019B01 */

loc_001246FC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00124712; /* je: equal / zero */

loc_00124700: ;
    edx = ebp + -4;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012470Fu); RECOMP_ABI_CALL(0x0002046Fu, sub_0002046F); /* call 0x0002046F */

loc_0012470F: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00124712: ;
    ecx = MEM32(ebp + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, 0xB7F97D);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00124722u); RECOMP_ABI_CALL(0x00019B01u, sub_00019B01); /* call 0x00019B01 */

loc_00124722: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001247C9; /* je: equal / zero */

loc_0012472A: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    edx = ebp + 0x10;
    PUSH32(esp, edx);
    ecx = edi;
    MEMF(ebp + 0x10) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012473Fu); RECOMP_ABI_CALL(0x00021CA2u, sub_00021CA2); /* call 0x00021CA2 */

loc_0012473F: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7AA820)); /* fadd dword ptr [0x7aa820] */
    MEMF(ebp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    fp_top() = recomp_frndint(fp_top(), g_fp_control_word); /* frndint */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ebp + 0x10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [ebp + 0x10] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x45) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x45 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0012475B; /* jne: not equal / not zero */

loc_00124757: ;
    fp_push(1.0); /* fld1 */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */

loc_0012475B: ;
    MEMF(ebp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(ebp + -4);
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    PUSH32(esp, eax);
    PUSH32(esp, 0xB7F97D);
    ecx = ebx;
    MEMF(esi + 0x1C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00124778u); RECOMP_ABI_CALL(0x00019B01u, sub_00019B01); /* call 0x00019B01 */

loc_00124778: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001247BC; /* je: equal / zero */

loc_0012477C: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    ecx = ebp + 0x10;
    PUSH32(esp, ecx);
    ecx = ebx;
    MEMF(ebp + 0x10) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00124791u); RECOMP_ABI_CALL(0x00021CA2u, sub_00021CA2); /* call 0x00021CA2 */

loc_00124791: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7AA820)); /* fadd dword ptr [0x7aa820] */
    MEMF(ebp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    fp_top() = recomp_frndint(fp_top(), g_fp_control_word); /* frndint */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ebp + 0x10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [ebp + 0x10] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x45) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x45 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001247AD; /* jne: not equal / not zero */

loc_001247A9: ;
    fp_push(1.0); /* fld1 */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */

loc_001247AD: ;
    MEMF(ebp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    MEMF(esi + 0x20) = xmm0.f[0]; /* movss */
    goto loc_001247C9;

loc_001247BC: ;
    xmm0 = XMM_SCALAR(MEMF(0x7D9DC4)); /* movss */
    MEMF(esi + 0x1C) = xmm0.f[0]; /* movss */

loc_001247C9: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x44)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7ABE28); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001247DE; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7ABE28)) */

loc_001247D7: ;
    MEM8(esi + 0x80) = 0;

loc_001247DE: ;
    edx = MEM32(esi + 0x40);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x44); /* comiss */
    edx = MEM32(edx);
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001247F0; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esi + 0x44)) */

loc_001247EC: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001247F5;

loc_001247F0: ;
    ecx = 1;

loc_001247F5: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 0x18)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00124803; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_001247FF: ;
    SET_LO8(eax, 1);
    goto loc_00124805;

loc_00124803: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_00124805: ;
    ecx = ecx + edx * 2;
    edx = ZX8(LO8(eax));
    eax = edx + ecx * 2;
    ecx = MEM32(ebp + 8);
    eax = eax + eax * 2;
    PUSH32(esp, esi);
    ecx = ecx + eax * 4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012481Du); RECOMP_ABI_CALL(0x00038187u, sub_00038187); /* call 0x00038187 */

loc_0012481D: ;
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
 * sub_00124920
 * Original: 0x00124920 - 0x00124CC6 (934 bytes, 299 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00124920(void)
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

loc_00124920: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x10);
    eax = MEM32(ebx + 0x54);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = MEM32(ebx + 0x58);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(eax);
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEMF(ebp + -4) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_00124958; /* jne: not equal / not zero */

loc_0012494A: ;
    ecx = edi + 4;
    PUSH32(esp, ecx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00124955u); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_00124955: ;
    MEM32(edi + 8) = eax;

loc_00124958: ;
    eax = MEM32(edi + 8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 1;
    _fa = (uint32_t)(MEM16(eax + 8)) & 0xFFFFu; _fb = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 8), LO16(esi) (16-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx & eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edx;
    _fa = (uint32_t)(MEM16(edi + 8)) & 0xFFFFu; _fb = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 8), LO16(esi) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00124983; /* jne: not equal / not zero */

loc_00124974: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0012497Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00124978u); } /* indirect call */
    }

loc_0012497B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    MEM32(ebp + 0xC) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0012498A; /* je: equal / zero */

loc_00124983: ;
    MEM32(ebp + 0xC) = 0;

loc_0012498A: ;
    _fa = (uint32_t)(MEM32(ebx + 0x54)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x54), esi (32-bit) */
    eax = MEM32(ebx + 0x58);
    if (CMP_LE(_fas, _fbs)) goto loc_00124995; /* jle: less or equal (signed <=) */

loc_00124992: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00124995: ;
    edi = MEM32(eax);
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001249AC; /* jne: not equal / not zero */

loc_0012499E: ;
    ecx = edi + 4;
    PUSH32(esp, ecx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001249A9u); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_001249A9: ;
    MEM32(edi + 8) = eax;

loc_001249AC: ;
    edi = MEM32(edi + 8);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(edi + 8)) & 0xFFFFu; _fb = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 8), LO16(esi) (16-bit) */
    SET_LO8(ebx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx & edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM16(ebx + 8)) & 0xFFFFu; _fb = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebx + 8), LO16(esi) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001249CD; /* jne: not equal / not zero */

loc_001249C1: ;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x001249C8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001249C5u); } /* indirect call */
    }

loc_001249C8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001249CF; /* je: equal / zero */

loc_001249CD: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001249CF: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x50);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001249D8u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_001249D8: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00124A70; /* je: equal / zero */

loc_001249E5: ;
    xmm1 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = MEM32(ebp + 0x14);
    MEMF(eax + 0xC) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x7C64E0)); /* movss */
    MEMF(eax + 0x1C) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x7B04A0)); /* movss */
    MEM32(eax) = 0x7D9C8C;
    MEM32(eax + 4) = esi;
    MEM32(eax + 8) = esi;
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x24) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x8F95F4)); /* movss */
    MEMF(eax + 0x28) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x8F95FC)); /* movss */
    MEMF(eax + 0x2C) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x34) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x3C) = xmm0.f[0]; /* movss */
    MEM32(eax + 0x4C) = esi;
    MEM32(eax + 0x40) = ecx;
    MEMF(eax + 0x44) = xmm0.f[0]; /* movss */
    MEM32(eax) = 0x7D9D7C;
    MEM32(eax + 0x48) = 2;
    esi = eax;

loc_00124A70: ;
    edi = MEM32(ebx + 0x34);
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00124A88; /* jne: not equal / not zero */

loc_00124A7A: ;
    edx = edi + 4;
    PUSH32(esp, edx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00124A85u); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_00124A85: ;
    MEM32(edi + 8) = eax;

loc_00124A88: ;
    eax = MEM32(edi + 8);
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x28)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebx + 0x24); /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -4); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebx + 0x24); /* addss */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(eax + 8)) & 0xFFFFu; _fb = (uint32_t)(0x13) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 8), 0x13 (16-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    xmm1 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(0x7A9980); /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7AA820); /* addss */
    MEMF(ebp + -8) = xmm0.f[0]; /* movss */
    fp_push(MEMF(ebp + -8)); /* fld float */
    fp_top() = recomp_frndint(fp_top(), g_fp_control_word); /* frndint */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ebp + -8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [ebp - 8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x45) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x45 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00124ADD; /* jne: not equal / not zero */

loc_00124AD9: ;
    fp_push(1.0); /* fld1 */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */

loc_00124ADD: ;
    MEMF(ebp + -12) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -12)); /* movss */
    MEMF(esi + 0x14) = xmm0.f[0]; /* movss */
    edi = MEM32(ebx + 0x34);
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00124B02; /* jne: not equal / not zero */

loc_00124AF4: ;
    edx = edi + 4;
    PUSH32(esp, edx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00124AFFu); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_00124AFF: ;
    MEM32(edi + 8) = eax;

loc_00124B02: ;
    edi = MEM32(edi + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(edi + 8)) & 0xFFFFu; _fb = (uint32_t)(0x13) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 8), 0x13 (16-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00124B32; /* jbe: below or equal (unsigned <=) */

loc_00124B19: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7D0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7D0 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00124B32; /* jae: above or equal (unsigned >=) */

loc_00124B20: ;
    ecx = MEM32(0x8F0680);
    edx = MEM32(ecx + 0x1014);
    eax = (uint32_t)(int32_t)SMEM16(edx + eax * 2);
    goto loc_00124B35;

loc_00124B32: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00124B35: ;
    MEM32(esi + 4) = eax;
    eax = MEM32(ebp + 0xC);
    edi = MEM32(eax + 0x34);
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00124B53; /* jne: not equal / not zero */

loc_00124B45: ;
    ecx = edi + 4;
    PUSH32(esp, ecx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00124B50u); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_00124B50: ;
    MEM32(edi + 8) = eax;

loc_00124B53: ;
    edi = MEM32(edi + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(edi + 8)) & 0xFFFFu; _fb = (uint32_t)(0x13) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 8), 0x13 (16-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00124B83; /* jbe: below or equal (unsigned <=) */

loc_00124B6A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7D0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7D0 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00124B83; /* jae: above or equal (unsigned >=) */

loc_00124B71: ;
    edx = MEM32(0x8F0680);
    ecx = MEM32(edx + 0x1014);
    eax = (uint32_t)(int32_t)SMEM16(ecx + eax * 2);
    goto loc_00124B86;

loc_00124B83: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00124B86: ;
    edx = MEM32(ebp + -4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x28B7F91D);
    ecx = ebx;
    MEM32(esi + 8) = eax;
    MEM32(esi + 0x4C) = 0x8F036C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00124BA0u); RECOMP_ABI_CALL(0x00019B01u, sub_00019B01); /* call 0x00019B01 */

loc_00124BA0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00124CB7; /* je: equal / zero */

loc_00124BA8: ;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00124BB3u); RECOMP_ABI_CALL(0x0002FFAFu, sub_0002FFAF); /* call 0x0002FFAF */

loc_00124BB3: ;
    ecx = MEM32(esi + 0x40);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = MEM32(ecx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x44); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00124BC8; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esi + 0x44)) */

loc_00124BC4: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00124BCD;

loc_00124BC8: ;
    ecx = 1;

loc_00124BCD: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 0x18)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00124BDB; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_00124BD7: ;
    SET_LO8(eax, 1);
    goto loc_00124BDD;

loc_00124BDB: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_00124BDD: ;
    edx = ecx + edx * 2;
    eax = ZX8(LO8(eax));
    eax = eax + edx * 2;
    edx = MEM32(ebp + 8);
    ecx = eax + eax * 2;
    PUSH32(esp, esi);
    ecx = edx + ecx * 4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00124BF5u); RECOMP_ABI_CALL(0x00038187u, sub_00038187); /* call 0x00038187 */

loc_00124BF5: ;
    edi = MEM32(ebp + 0xC);
    PUSH32(esp, 0xB7F97D);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00124C04u); RECOMP_ABI_CALL(0x0001FBAFu, sub_0001FBAF); /* call 0x0001FBAF */

loc_00124C04: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00124CBF; /* je: equal / zero */

loc_00124C0C: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    eax = ebp + 0x10;
    PUSH32(esp, eax);
    ecx = edi;
    MEMF(ebp + 0x10) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00124C21u); RECOMP_ABI_CALL(0x00021CA2u, sub_00021CA2); /* call 0x00021CA2 */

loc_00124C21: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7AA820)); /* fadd dword ptr [0x7aa820] */
    MEMF(ebp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    fp_top() = recomp_frndint(fp_top(), g_fp_control_word); /* frndint */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ebp + 0x10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [ebp + 0x10] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x45) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x45 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00124C3D; /* jne: not equal / not zero */

loc_00124C39: ;
    fp_push(1.0); /* fld1 */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */

loc_00124C3D: ;
    MEMF(ebp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(ebp + -4);
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    PUSH32(esp, ecx);
    PUSH32(esp, 0xB7F97D);
    ecx = ebx;
    MEMF(esi + 0x1C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00124C5Au); RECOMP_ABI_CALL(0x00019B01u, sub_00019B01); /* call 0x00019B01 */

loc_00124C5A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00124CA3; /* je: equal / zero */

loc_00124C5E: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    edx = ebp + 0x10;
    PUSH32(esp, edx);
    ecx = ebx;
    MEMF(ebp + 0x10) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00124C73u); RECOMP_ABI_CALL(0x00021CA2u, sub_00021CA2); /* call 0x00021CA2 */

loc_00124C73: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7AA820)); /* fadd dword ptr [0x7aa820] */
    MEMF(ebp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    fp_top() = recomp_frndint(fp_top(), g_fp_control_word); /* frndint */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ebp + 0x10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [ebp + 0x10] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x45) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x45 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00124C8F; /* jne: not equal / not zero */

loc_00124C8B: ;
    fp_push(1.0); /* fld1 */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */

loc_00124C8F: ;
    MEMF(ebp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    POP32(esp, edi);
    MEMF(esi + 0x20) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00124CA3: ;
    xmm0 = XMM_SCALAR(MEMF(0x7D9DC4)); /* movss */
    POP32(esp, edi);
    MEMF(esi + 0x1C) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00124CB7: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00124CBFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00124CBDu); } /* indirect call */
    }

loc_00124CBF: ;
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
 * sub_00124DB0
 * Original: 0x00124DB0 - 0x00124DD8 (40 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00124DB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00124DB0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx + 0x30;
    edi = 2;
    /* nop */

loc_00124DC0: ;
    PUSH32(esp, 0x244A2);
    PUSH32(esp, 2);
    PUSH32(esp, 0xC);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x18;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x00124DD2u); RECOMP_ABI_CALL(0x00029295u, sub_00029295); /* call 0x00029295 */

loc_00124DD2: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00124DC0; /* jne: not equal / not zero */

loc_00124DD5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00124DF0
 * Original: 0x00124DF0 - 0x00124E06 (22 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00124DF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00124DF0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x10) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00124E10
 * Original: 0x00124E10 - 0x00124F27 (279 bytes, 106 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00124E10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00124E10: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00124E19u); RECOMP_ABI_CALL(0x0002C567u, sub_0002C567); /* call 0x0002C567 */

loc_00124E19: ;
    eax = MEM32(eax + 0x28);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, ebp);
    ecx = eax;
    PUSH32(esp, 0x00124E28u); RECOMP_ABI_CALL(0x00015D26u, sub_00015D26); /* call 0x00015D26 */

loc_00124E28: ;
    MEM32(esp + 0x14) = eax;
    eax = MEM32(ebp + 0x54);
    edi = 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    eax = MEM32(ebp + 0x58);
    if (CMP_LE(_fas, _fbs)) goto loc_00124E3E; /* jle: less or equal (signed <=) */

loc_00124E3B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00124E3E: ;
    esi = MEM32(eax);
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00124E55; /* jne: not equal / not zero */

loc_00124E47: ;
    eax = esi + 4;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00124E52u); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_00124E52: ;
    MEM32(esi + 8) = eax;

loc_00124E55: ;
    esi = MEM32(esi + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(esi + 8)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 8), LO16(edi) (16-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = esi & ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM16(esi + 8)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 8), LO16(edi) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00124E7A; /* jne: not equal / not zero */

loc_00124E6A: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00124E71u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00124E6Eu); } /* indirect call */
    }

loc_00124E71: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00124E7A; /* jne: not equal / not zero */

loc_00124E76: ;
    edi = esi;
    goto loc_00124E7C;

loc_00124E7A: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00124E7C: ;
    eax = MEM32(edi + 0x18);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00124F22; /* jle: less or equal (signed <=) */

loc_00124E89: ;
    /* nop */

loc_00124E90: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(edi + 0x20) = 0;
    if (CMP_L(_fas, _fbs)) goto loc_00124EA8; /* jl: less (signed <) */

loc_00124E9B: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(edi + 0x18) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00124EA8; /* jge: greater or equal (signed >=) */

loc_00124EA0: ;
    eax = MEM32(edi + 0x1C);
    eax = eax + ebx * 4;
    goto loc_00124EAB;

loc_00124EA8: ;
    eax = MEM32(edi + 0x1C);

loc_00124EAB: ;
    esi = MEM32(eax);
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00124EC2; /* jne: not equal / not zero */

loc_00124EB4: ;
    ecx = esi + 4;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00124EBFu); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_00124EBF: ;
    MEM32(esi + 8) = eax;

loc_00124EC2: ;
    eax = MEM32(esi + 8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(eax + 8)) & 0xFFFFu; _fb = (uint32_t)(5) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 8), 5 (16-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = MEM32(eax + 0x1C);
    edx = MEM32(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10B7E9AB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x10B7E9AB (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00124EFE; /* je: equal / zero */

loc_00124EDF: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x18B7E0A0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x18B7E0A0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00124F16; /* jne: not equal / not zero */

loc_00124EE7: ;
    edx = MEM32(esp + 0x14);
    ecx = MEM32(ecx + 4);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00124EFCu); RECOMP_ABI_CALL(0x000224EAu, sub_000224EA); /* call 0x000224EA */

loc_00124EFC: ;
    goto loc_00124F13;

loc_00124EFE: ;
    edx = MEM32(esp + 0x14);
    ecx = MEM32(ecx + 4);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00124F13u); RECOMP_ABI_CALL(0x0001477Du, sub_0001477D); /* call 0x0001477D */

loc_00124F13: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00124F16: ;
    eax = MEM32(edi + 0x18);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00124E90; /* jl: less (signed <) */

loc_00124F22: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00124F70
 * Original: 0x00124F70 - 0x0012524C (732 bytes, 251 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00124F70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00124F70: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x00124F79u); RECOMP_ABI_CALL(0x0002C567u, sub_0002C567); /* call 0x0002C567 */

loc_00124F79: ;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(eax + 0x28);
    PUSH32(esp, ecx);
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x00124F8Au); RECOMP_ABI_CALL(0x00015E5Cu, sub_00015E5C); /* call 0x00015E5C */

loc_00124F8A: ;
    ecx = eax;
    PUSH32(esp, 0x00124F91u); RECOMP_ABI_CALL(0x0001FA1Au, sub_0001FA1A); /* call 0x0001FA1A */

loc_00124F91: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00125247; /* je: equal / zero */

loc_00124F9B: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00124FB0; /* jne: not equal / not zero */

loc_00124FA2: ;
    edx = esi + 4;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00124FADu); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_00124FAD: ;
    MEM32(esi + 8) = eax;

loc_00124FB0: ;
    esi = MEM32(esi + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(esi + 8)) & 0xFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 8), 0xB (16-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = MEM32(eax + 0x14);
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00124FD8; /* jne: not equal / not zero */

loc_00124FCA: ;
    eax = esi + 4;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00124FD5u); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_00124FD5: ;
    MEM32(esi + 8) = eax;

loc_00124FD8: ;
    esi = MEM32(esi + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 1;
    _fa = (uint32_t)(MEM16(esi + 8)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 8), LO16(eax) (16-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = esi & ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM16(esi + 8)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 8), LO16(eax) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00124FFE; /* jne: not equal / not zero */

loc_00124FF2: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00124FF9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00124FF6u); } /* indirect call */
    }

loc_00124FF9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00125000; /* je: equal / zero */

loc_00124FFE: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00125000: ;
    eax = MEM32(esi + 0x54);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebx);
    MEM32(esp + 8) = esi;
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_00125123; /* jle: less or equal (signed <=) */

loc_00125019: ;
    PUSH32(esp, ebp);
    /* nop */

loc_00125020: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(esp + 0x10);
    if (CMP_L(_fas, _fbs)) goto loc_00125039; /* jl: less (signed <) */

loc_0012502C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x54)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x54) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00125039; /* jge: greater or equal (signed >=) */

loc_00125031: ;
    ecx = MEM32(ecx + 0x58);
    eax = ecx + eax * 4;
    goto loc_0012503C;

loc_00125039: ;
    eax = MEM32(ecx + 0x58);

loc_0012503C: ;
    esi = MEM32(eax);
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00125053; /* jne: not equal / not zero */

loc_00125045: ;
    edx = esi + 4;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00125050u); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_00125050: ;
    MEM32(esi + 8) = eax;

loc_00125053: ;
    esi = MEM32(esi + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 1;
    _fa = (uint32_t)(MEM16(esi + 8)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 8), LO16(eax) (16-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = ecx;
    _fa = (uint32_t)(MEM16(edi + 8)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 8), LO16(eax) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012510A; /* jne: not equal / not zero */

loc_00125073: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00125078u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00125075u); } /* indirect call */
    }

loc_00125078: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012510A; /* jne: not equal / not zero */

loc_00125081: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0012508Bu); RECOMP_ABI_CALL(0x00015D26u, sub_00015D26); /* call 0x00015D26 */

loc_0012508B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012510A; /* je: equal / zero */

loc_0012508F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00125095u); RECOMP_ABI_CALL(0x00029A97u, sub_00029A97); /* call 0x00029A97 */

loc_00125095: ;
    ebp = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012510A; /* je: equal / zero */

loc_0012509E: ;
    eax = MEM32(edi + 0x54);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0012510A; /* jle: less or equal (signed <=) */

loc_001250A7: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001250B8; /* jl: less (signed <) */

loc_001250AB: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x54)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(edi + 0x54) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001250B8; /* jge: greater or equal (signed >=) */

loc_001250B0: ;
    eax = MEM32(edi + 0x58);
    eax = eax + ebx * 4;
    goto loc_001250BB;

loc_001250B8: ;
    eax = MEM32(edi + 0x58);

loc_001250BB: ;
    esi = MEM32(eax);
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001250D2; /* jne: not equal / not zero */

loc_001250C4: ;
    ecx = esi + 4;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x001250CFu); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_001250CF: ;
    MEM32(esi + 8) = eax;

loc_001250D2: ;
    esi = MEM32(esi + 8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 1;
    _fa = (uint32_t)(MEM16(esi + 8)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 8), LO16(eax) (16-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = esi & edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM16(esi + 8)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 8), LO16(eax) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00125102; /* jne: not equal / not zero */

loc_001250EC: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x001250F3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001250F0u); } /* indirect call */
    }

loc_001250F3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00125102; /* jne: not equal / not zero */

loc_001250F8: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001250FFu); RECOMP_ABI_CALL(0x00011640u, sub_00011640); /* call 0x00011640 */

loc_001250FF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00125102: ;
    eax = MEM32(edi + 0x54);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001250A7; /* jl: less (signed <) */

loc_0012510A: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x10);
    edx = MEM32(ecx + 0x54);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00125020; /* jl: less (signed <) */

loc_00125122: ;
    POP32(esp, ebp);

loc_00125123: ;
    esi = MEM32(0x8F038C);
    ebx = 4;
    edi = edi;

loc_00125130: ;
    edi = 2;

loc_00125135: ;
    ecx = esi;
    PUSH32(esp, 0x0012513Cu); RECOMP_ABI_CALL(0x000185A8u, sub_000185A8); /* call 0x000185A8 */

loc_0012513C: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x18;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00125135; /* jne: not equal / not zero */

loc_00125142: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00125130; /* jne: not equal / not zero */

loc_00125145: ;
    esi = MEM32(0x8F0390);
    ebx = 4;

loc_00125150: ;
    edi = 2;

loc_00125155: ;
    ecx = esi;
    PUSH32(esp, 0x0012515Cu); RECOMP_ABI_CALL(0x000185A8u, sub_000185A8); /* call 0x000185A8 */

loc_0012515C: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x18;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00125155; /* jne: not equal / not zero */

loc_00125162: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00125150; /* jne: not equal / not zero */

loc_00125165: ;
    esi = MEM32(0x8F0394);
    ebx = 4;

loc_00125170: ;
    edi = 2;

loc_00125175: ;
    ecx = esi;
    PUSH32(esp, 0x0012517Cu); RECOMP_ABI_CALL(0x000185A8u, sub_000185A8); /* call 0x000185A8 */

loc_0012517C: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x18;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00125175; /* jne: not equal / not zero */

loc_00125182: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00125170; /* jne: not equal / not zero */

loc_00125185: ;
    esi = MEM32(0x8F0398);
    ebx = 4;

loc_00125190: ;
    edi = 2;

loc_00125195: ;
    ecx = esi;
    PUSH32(esp, 0x0012519Cu); RECOMP_ABI_CALL(0x000185A8u, sub_000185A8); /* call 0x000185A8 */

loc_0012519C: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x18;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00125195; /* jne: not equal / not zero */

loc_001251A2: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00125190; /* jne: not equal / not zero */

loc_001251A5: ;
    esi = MEM32(0x8F039C);
    ebx = 4;

loc_001251B0: ;
    edi = 2;

loc_001251B5: ;
    ecx = esi;
    PUSH32(esp, 0x001251BCu); RECOMP_ABI_CALL(0x000185A8u, sub_000185A8); /* call 0x000185A8 */

loc_001251BC: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x18;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001251B5; /* jne: not equal / not zero */

loc_001251C2: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001251B0; /* jne: not equal / not zero */

loc_001251C5: ;
    esi = MEM32(0x8F03A0);
    ebx = 4;

loc_001251D0: ;
    edi = 2;

loc_001251D5: ;
    ecx = esi;
    PUSH32(esp, 0x001251DCu); RECOMP_ABI_CALL(0x000185A8u, sub_000185A8); /* call 0x000185A8 */

loc_001251DC: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x18;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001251D5; /* jne: not equal / not zero */

loc_001251E2: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001251D0; /* jne: not equal / not zero */

loc_001251E5: ;
    esi = MEM32(0x8F03A4);
    ebx = 4;

loc_001251F0: ;
    edi = 2;

loc_001251F5: ;
    ecx = esi;
    PUSH32(esp, 0x001251FCu); RECOMP_ABI_CALL(0x000185A8u, sub_000185A8); /* call 0x000185A8 */

loc_001251FC: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x18;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001251F5; /* jne: not equal / not zero */

loc_00125202: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001251F0; /* jne: not equal / not zero */

loc_00125205: ;
    esi = MEM32(0x8F03A8);
    ebx = 4;

loc_00125210: ;
    edi = 2;

loc_00125215: ;
    ecx = esi;
    PUSH32(esp, 0x0012521Cu); RECOMP_ABI_CALL(0x000185A8u, sub_000185A8); /* call 0x000185A8 */

loc_0012521C: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x18;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00125215; /* jne: not equal / not zero */

loc_00125222: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00125210; /* jne: not equal / not zero */

loc_00125225: ;
    esi = MEM32(0x8F03AC);
    ebx = 4;

loc_00125230: ;
    edi = 2;

loc_00125235: ;
    ecx = esi;
    PUSH32(esp, 0x0012523Cu); RECOMP_ABI_CALL(0x000185A8u, sub_000185A8); /* call 0x000185A8 */

loc_0012523C: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x18;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00125235; /* jne: not equal / not zero */

loc_00125242: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00125230; /* jne: not equal / not zero */

loc_00125245: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_00125247: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00125310
 * Original: 0x00125310 - 0x00125338 (40 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00125310(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00125310: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx + 0x30;
    edi = 2;
    /* nop */

loc_00125320: ;
    PUSH32(esp, 0x244A2);
    PUSH32(esp, 2);
    PUSH32(esp, 0xC);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x18;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x00125332u); RECOMP_ABI_CALL(0x00029295u, sub_00029295); /* call 0x00029295 */

loc_00125332: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00125320; /* jne: not equal / not zero */

loc_00125335: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00125350
 * Original: 0x00125350 - 0x0012537B (43 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00125350(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00125350: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    PUSH32(esp, edi);
    esi = ebx;
    edi = 2;
    /* nop */

loc_00125360: ;
    PUSH32(esp, 0x2B216);
    PUSH32(esp, 2);
    PUSH32(esp, 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012536Fu); RECOMP_ABI_CALL(0x000199EEu, sub_000199EE); /* call 0x000199EE */

loc_0012536F: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x18;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00125360; /* jne: not equal / not zero */

loc_00125375: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00125390
 * Original: 0x00125390 - 0x001253B8 (40 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00125390(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00125390: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx + 0xC0;
    edi = 4;
    /* nop */

loc_001253A0: ;
    PUSH32(esp, 0x36837);
    PUSH32(esp, 2);
    PUSH32(esp, 0x18);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x30;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x001253B2u); RECOMP_ABI_CALL(0x00029295u, sub_00029295); /* call 0x00029295 */

loc_001253B2: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001253A0; /* jne: not equal / not zero */

loc_001253B5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001253D0
 * Original: 0x001253D0 - 0x001253FB (43 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001253D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001253D0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    PUSH32(esp, edi);
    esi = ebx;
    edi = 2;
    /* nop */

loc_001253E0: ;
    PUSH32(esp, 0x2B216);
    PUSH32(esp, 2);
    PUSH32(esp, 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001253EFu); RECOMP_ABI_CALL(0x000199EEu, sub_000199EE); /* call 0x000199EE */

loc_001253EF: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x18;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001253E0; /* jne: not equal / not zero */

loc_001253F5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00125410
 * Original: 0x00125410 - 0x00125438 (40 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00125410(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00125410: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx + 0xC0;
    edi = 4;
    /* nop */

loc_00125420: ;
    PUSH32(esp, 0x36837);
    PUSH32(esp, 2);
    PUSH32(esp, 0x18);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x30;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x00125432u); RECOMP_ABI_CALL(0x00029295u, sub_00029295); /* call 0x00029295 */

loc_00125432: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00125420; /* jne: not equal / not zero */

loc_00125435: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00125450
 * Original: 0x00125450 - 0x0012547B (43 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00125450(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00125450: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    PUSH32(esp, edi);
    esi = ebx;
    edi = 4;
    /* nop */

loc_00125460: ;
    PUSH32(esp, 0x26414);
    PUSH32(esp, 2);
    PUSH32(esp, 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012546Fu); RECOMP_ABI_CALL(0x000199EEu, sub_000199EE); /* call 0x000199EE */

loc_0012546F: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x30;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00125460; /* jne: not equal / not zero */

loc_00125475: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00125490
 * Original: 0x00125490 - 0x001254CD (61 bytes, 24 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00125490(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00125490: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    PUSH32(esp, edi);
    esi = ebx + 0xC0;
    edi = 4;

loc_001254A0: ;
    PUSH32(esp, 0x36837);
    PUSH32(esp, 2);
    PUSH32(esp, 0x18);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x30;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x001254B2u); RECOMP_ABI_CALL(0x00029295u, sub_00029295); /* call 0x00029295 */

loc_001254B2: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001254A0; /* jne: not equal / not zero */

loc_001254B5: ;
    _fa = (uint32_t)(MEM8(esp + 0x10)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x10), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001254C5; /* je: equal / zero */

loc_001254BC: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001254C2u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_001254C2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001254C5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001254E0
 * Original: 0x001254E0 - 0x0012550B (43 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001254E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001254E0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    PUSH32(esp, edi);
    esi = ebx;
    edi = 4;
    /* nop */

loc_001254F0: ;
    PUSH32(esp, 0x26414);
    PUSH32(esp, 2);
    PUSH32(esp, 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001254FFu); RECOMP_ABI_CALL(0x000199EEu, sub_000199EE); /* call 0x000199EE */

loc_001254FF: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x30;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001254F0; /* jne: not equal / not zero */

loc_00125505: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00125520
 * Original: 0x00125520 - 0x00125576 (86 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00125520(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00125520: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xC0);
    PUSH32(esp, 0x0012552Cu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0012552C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00125541; /* je: equal / zero */

loc_00125533: ;
    ecx = eax;
    PUSH32(esp, 0x0012553Au); RECOMP_ABI_CALL(0x00029029u, sub_00029029); /* call 0x00029029 */

loc_0012553A: ;
    MEM32(0x8F03A0) = eax;
    goto loc_0012554B;

loc_00125541: ;
    MEM32(0x8F03A0) = 0;

loc_0012554B: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xC0);
    PUSH32(esp, 0x00125557u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00125557: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012556B; /* je: equal / zero */

loc_0012555E: ;
    ecx = eax;
    PUSH32(esp, 0x00125565u); RECOMP_ABI_CALL(0x00029029u, sub_00029029); /* call 0x00029029 */

loc_00125565: ;
    MEM32(0x8F03A4) = eax;
    esp += 4; return; /* ret */

loc_0012556B: ;
    MEM32(0x8F03A4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00125590
 * Original: 0x00125590 - 0x001255E6 (86 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00125590(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00125590: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xC0);
    PUSH32(esp, 0x0012559Cu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0012559C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001255B1; /* je: equal / zero */

loc_001255A3: ;
    ecx = eax;
    PUSH32(esp, 0x001255AAu); RECOMP_ABI_CALL(0x00029029u, sub_00029029); /* call 0x00029029 */

loc_001255AA: ;
    MEM32(0x8F03A8) = eax;
    goto loc_001255BB;

loc_001255B1: ;
    MEM32(0x8F03A8) = 0;

loc_001255BB: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xC0);
    PUSH32(esp, 0x001255C7u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_001255C7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001255DB; /* je: equal / zero */

loc_001255CE: ;
    ecx = eax;
    PUSH32(esp, 0x001255D5u); RECOMP_ABI_CALL(0x00029029u, sub_00029029); /* call 0x00029029 */

loc_001255D5: ;
    MEM32(0x8F03AC) = eax;
    esp += 4; return; /* ret */

loc_001255DB: ;
    MEM32(0x8F03AC) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00125600
 * Original: 0x00125600 - 0x00125849 (585 bytes, 181 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00125600(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00125600: ;
    eax = MEM32(0x8F038C);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0012563E; /* je: equal / zero */

loc_00125611: ;
    esi = eax + 0xC0;
    edi = 4;
    /* nop */

loc_00125620: ;
    PUSH32(esp, 0x36837);
    PUSH32(esp, 2);
    PUSH32(esp, 0x18);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x30;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x00125632u); RECOMP_ABI_CALL(0x00029295u, sub_00029295); /* call 0x00029295 */

loc_00125632: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00125620; /* jne: not equal / not zero */

loc_00125635: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0012563Bu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0012563B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0012563E: ;
    eax = MEM32(0x8F0390);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    MEM32(0x8F038C) = ebp;
    ebx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0012567E; /* je: equal / zero */

loc_0012564F: ;
    esi = eax + 0xC0;
    edi = 4;
    /* nop */

loc_00125660: ;
    PUSH32(esp, 0x36837);
    PUSH32(esp, 2);
    PUSH32(esp, 0x18);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x30;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x00125672u); RECOMP_ABI_CALL(0x00029295u, sub_00029295); /* call 0x00029295 */

loc_00125672: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00125660; /* jne: not equal / not zero */

loc_00125675: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0012567Bu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0012567B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0012567E: ;
    eax = MEM32(0x8F0394);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    MEM32(0x8F0390) = ebp;
    ebx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001256BE; /* je: equal / zero */

loc_0012568F: ;
    esi = eax + 0xC0;
    edi = 4;
    /* nop */

loc_001256A0: ;
    PUSH32(esp, 0x36837);
    PUSH32(esp, 2);
    PUSH32(esp, 0x18);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x30;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x001256B2u); RECOMP_ABI_CALL(0x00029295u, sub_00029295); /* call 0x00029295 */

loc_001256B2: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001256A0; /* jne: not equal / not zero */

loc_001256B5: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001256BBu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_001256BB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001256BE: ;
    eax = MEM32(0x8F0398);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    MEM32(0x8F0394) = ebp;
    ebx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001256FE; /* je: equal / zero */

loc_001256CF: ;
    esi = eax + 0xC0;
    edi = 4;
    /* nop */

loc_001256E0: ;
    PUSH32(esp, 0x36837);
    PUSH32(esp, 2);
    PUSH32(esp, 0x18);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x30;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x001256F2u); RECOMP_ABI_CALL(0x00029295u, sub_00029295); /* call 0x00029295 */

loc_001256F2: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001256E0; /* jne: not equal / not zero */

loc_001256F5: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001256FBu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_001256FB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001256FE: ;
    eax = MEM32(0x8F039C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    MEM32(0x8F0398) = ebp;
    ebx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0012573E; /* je: equal / zero */

loc_0012570F: ;
    esi = eax + 0xC0;
    edi = 4;
    /* nop */

loc_00125720: ;
    PUSH32(esp, 0x36837);
    PUSH32(esp, 2);
    PUSH32(esp, 0x18);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x30;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x00125732u); RECOMP_ABI_CALL(0x00029295u, sub_00029295); /* call 0x00029295 */

loc_00125732: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00125720; /* jne: not equal / not zero */

loc_00125735: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0012573Bu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0012573B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0012573E: ;
    eax = MEM32(0x8F03A0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    MEM32(0x8F039C) = ebp;
    ebx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0012577E; /* je: equal / zero */

loc_0012574F: ;
    esi = eax + 0xC0;
    edi = 4;
    /* nop */

loc_00125760: ;
    PUSH32(esp, 0x36837);
    PUSH32(esp, 2);
    PUSH32(esp, 0x18);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x30;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x00125772u); RECOMP_ABI_CALL(0x00029295u, sub_00029295); /* call 0x00029295 */

loc_00125772: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00125760; /* jne: not equal / not zero */

loc_00125775: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0012577Bu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0012577B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0012577E: ;
    eax = MEM32(0x8F03A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    MEM32(0x8F03A0) = ebp;
    ebx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001257BE; /* je: equal / zero */

loc_0012578F: ;
    esi = eax + 0xC0;
    edi = 4;
    /* nop */

loc_001257A0: ;
    PUSH32(esp, 0x36837);
    PUSH32(esp, 2);
    PUSH32(esp, 0x18);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x30;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x001257B2u); RECOMP_ABI_CALL(0x00029295u, sub_00029295); /* call 0x00029295 */

loc_001257B2: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001257A0; /* jne: not equal / not zero */

loc_001257B5: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001257BBu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_001257BB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001257BE: ;
    eax = MEM32(0x8F03A8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    MEM32(0x8F03A4) = ebp;
    ebx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001257FE; /* je: equal / zero */

loc_001257CF: ;
    esi = eax + 0xC0;
    edi = 4;
    /* nop */

loc_001257E0: ;
    PUSH32(esp, 0x36837);
    PUSH32(esp, 2);
    PUSH32(esp, 0x18);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x30;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x001257F2u); RECOMP_ABI_CALL(0x00029295u, sub_00029295); /* call 0x00029295 */

loc_001257F2: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001257E0; /* jne: not equal / not zero */

loc_001257F5: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001257FBu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_001257FB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001257FE: ;
    eax = MEM32(0x8F03AC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    MEM32(0x8F03A8) = ebp;
    ebx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0012583E; /* je: equal / zero */

loc_0012580F: ;
    esi = eax + 0xC0;
    edi = 4;
    /* nop */

loc_00125820: ;
    PUSH32(esp, 0x36837);
    PUSH32(esp, 2);
    PUSH32(esp, 0x18);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x30;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x00125832u); RECOMP_ABI_CALL(0x00029295u, sub_00029295); /* call 0x00029295 */

loc_00125832: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00125820; /* jne: not equal / not zero */

loc_00125835: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0012583Bu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0012583B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0012583E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(0x8F03AC) = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001258E0
 * Original: 0x001258E0 - 0x001259A3 (195 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001258E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001258E0: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, 0xC0);
    PUSH32(esp, 0x001258EEu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_001258EE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00125903; /* je: equal / zero */

loc_001258F5: ;
    ecx = eax;
    PUSH32(esp, 0x001258FCu); RECOMP_ABI_CALL(0x00029029u, sub_00029029); /* call 0x00029029 */

loc_001258FC: ;
    MEM32(0x8F039C) = eax;
    goto loc_00125909;

loc_00125903: ;
    MEM32(0x8F039C) = esi;

loc_00125909: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xC0);
    PUSH32(esp, 0x00125914u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00125914: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00125929; /* je: equal / zero */

loc_0012591B: ;
    ecx = eax;
    PUSH32(esp, 0x00125922u); RECOMP_ABI_CALL(0x00029029u, sub_00029029); /* call 0x00029029 */

loc_00125922: ;
    MEM32(0x8F0398) = eax;
    goto loc_0012592F;

loc_00125929: ;
    MEM32(0x8F0398) = esi;

loc_0012592F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xC0);
    PUSH32(esp, 0x0012593Au); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0012593A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012594F; /* je: equal / zero */

loc_00125941: ;
    ecx = eax;
    PUSH32(esp, 0x00125948u); RECOMP_ABI_CALL(0x00029029u, sub_00029029); /* call 0x00029029 */

loc_00125948: ;
    MEM32(0x8F038C) = eax;
    goto loc_00125955;

loc_0012594F: ;
    MEM32(0x8F038C) = esi;

loc_00125955: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xC0);
    PUSH32(esp, 0x00125960u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00125960: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00125975; /* je: equal / zero */

loc_00125967: ;
    ecx = eax;
    PUSH32(esp, 0x0012596Eu); RECOMP_ABI_CALL(0x00029029u, sub_00029029); /* call 0x00029029 */

loc_0012596E: ;
    MEM32(0x8F0390) = eax;
    goto loc_0012597B;

loc_00125975: ;
    MEM32(0x8F0390) = esi;

loc_0012597B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xC0);
    PUSH32(esp, 0x00125986u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00125986: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012599B; /* je: equal / zero */

loc_0012598D: ;
    ecx = eax;
    PUSH32(esp, 0x00125994u); RECOMP_ABI_CALL(0x00029029u, sub_00029029); /* call 0x00029029 */

loc_00125994: ;
    MEM32(0x8F0394) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0012599B: ;
    MEM32(0x8F0394) = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001259E0
 * Original: 0x001259E0 - 0x00125A28 (72 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001259E0(void)
{

loc_001259E0: ;
    PUSH32(esp, 0x001259E5u); RECOMP_ABI_CALL(0x00020DC0u, sub_00020DC0); /* call 0x00020DC0 */

loc_001259E5: ;
    PUSH32(esp, 0x001259EAu); RECOMP_ABI_CALL(0x00031B9Du, sub_00031B9D); /* call 0x00031B9D */

loc_001259EA: ;
    PUSH32(esp, 0x001259EFu); RECOMP_ABI_CALL(0x00031A8Fu, sub_00031A8F); /* call 0x00031A8F */

loc_001259EF: ;
    PUSH32(esp, 0x001259F4u); RECOMP_ABI_CALL(0x0001869Du, sub_0001869D); /* call 0x0001869D */

loc_001259F4: ;
    PUSH32(esp, 0x7D9DE0);
    MEM32(0x8F033C) = 3;
    MEM32(0x8F0340) = 2;
    MEM32(0x8F0344) = 1;
    MEM32(0x8F0348) = 0;
    PUSH32(esp, 0x00125A26u); RECOMP_ABI_CALL(0x00036F03u, sub_00036F03); /* call 0x00036F03 */

loc_00125A26: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00125A40
 * Original: 0x00125A40 - 0x00125A44 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00125A40(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00125A40: ;
    fp_push(MEMF(ecx + 4)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00125A50
 * Original: 0x00125A50 - 0x00125A57 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00125A50(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00125A50: ;
    fp_push(MEMF(ecx + 0x364)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00125A60
 * Original: 0x00125A60 - 0x00125A66 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00125A60(void)
{

loc_00125A60: ;
    eax = 0x4F4B810;
    esp += 4; return; /* ret */

}

/**
 * sub_00125A70
 * Original: 0x00125A70 - 0x00125A76 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00125A70(void)
{

loc_00125A70: ;
    eax = 0x4F4B17B;
    esp += 4; return; /* ret */

}

/**
 * sub_00125A80
 * Original: 0x00125A80 - 0x00125A8A (10 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00125A80(void)
{

loc_00125A80: ;
    eax = MEM32(ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00125A88u); RECOMP_ABI_CALL(0x000356D0u, sub_000356D0); /* call 0x000356D0 */

loc_00125A88: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00125A90
 * Original: 0x00125A90 - 0x00125A9A (10 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00125A90(void)
{

loc_00125A90: ;
    eax = MEM32(ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00125A98u); RECOMP_ABI_CALL(0x000356D0u, sub_000356D0); /* call 0x000356D0 */

loc_00125A98: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00125AA0
 * Original: 0x00125AA0 - 0x00125AA6 (6 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00125AA0(void)
{

loc_00125AA0: ;
    eax = MEM32(ecx);
    eax = MEM32(eax + 0x14);
    esp += 4; return; /* ret */

}

/**
 * sub_00125AB0
 * Original: 0x00125AB0 - 0x00125AB3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00125AB0(void)
{

loc_00125AB0: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00125AC0
 * Original: 0x00125AC0 - 0x00125AC6 (6 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00125AC0(void)
{

loc_00125AC0: ;
    eax = MEM32(ecx);
    eax = MEM32(eax + 0x14);
    esp += 4; return; /* ret */

}

/**
 * sub_00125AD0
 * Original: 0x00125AD0 - 0x00125AD3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00125AD0(void)
{

loc_00125AD0: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00125AE0
 * Original: 0x00125AE0 - 0x00125AEA (10 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00125AE0(void)
{

loc_00125AE0: ;
    eax = MEM32(ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00125AE8u); RECOMP_ABI_CALL(0x000356D0u, sub_000356D0); /* call 0x000356D0 */

loc_00125AE8: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00125AF0
 * Original: 0x00125AF0 - 0x00125AFA (10 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00125AF0(void)
{

loc_00125AF0: ;
    eax = MEM32(ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00125AF8u); RECOMP_ABI_CALL(0x000356D0u, sub_000356D0); /* call 0x000356D0 */

loc_00125AF8: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00125B00
 * Original: 0x00125B00 - 0x00125B37 (55 bytes, 22 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00125B00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00125B00: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0x1C);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x20);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x18);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x4F4B17B);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00125B2Eu); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_00125B2E: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_00125B50
 * Original: 0x00125B50 - 0x00125B56 (6 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00125B50(void)
{

loc_00125B50: ;
    eax = MEM32(ecx);
    eax = MEM32(eax + 0x14);
    esp += 4; return; /* ret */

}

/**
 * sub_00125B60
 * Original: 0x00125B60 - 0x00125B97 (55 bytes, 22 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00125B60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00125B60: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0x1C);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x20);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x18);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x4F4B810);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00125B8Eu); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_00125B8E: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_00125BB0
 * Original: 0x00125BB0 - 0x00125BB6 (6 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00125BB0(void)
{

loc_00125BB0: ;
    eax = MEM32(ecx);
    eax = MEM32(eax + 0x14);
    esp += 4; return; /* ret */

}

/**
 * sub_00125BC0
 * Original: 0x00125BC0 - 0x00125BF4 (52 bytes, 21 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00125BC0(void)
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

loc_00125BC0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00125BD3; /* jne: not equal / not zero */

loc_00125BCC: ;
    fp_push(MEMF(esi + 0xC)); /* fld float */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00125BD3: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00125BDBu); RECOMP_ABI_CALL(0x0002459Cu, sub_0002459C); /* call 0x0002459C */

loc_00125BDB: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00125BE3; /* je: equal / zero */

loc_00125BDE: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_00125BCC; /* jne: not equal / not zero */

loc_00125BE3: ;
    eax = MEM32(0x8F0420);
    ecx = MEM32(eax + 0x14);
    fp_push(MEMF(ecx)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0xC)); /* fmul dword ptr [esi + 0xc] */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00125C10
 * Original: 0x00125C10 - 0x00125C1B (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00125C10(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00125C10: ;
    eax = MEM32(0x8F03E4);
    ecx = MEM32(eax + 0x14);
    fp_push(MEMF(ecx)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00125C20
 * Original: 0x00125C20 - 0x00125C2B (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00125C20(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00125C20: ;
    eax = MEM32(0x8F0458);
    ecx = MEM32(eax + 0x14);
    fp_push(MEMF(ecx)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00125C30
 * Original: 0x00125C30 - 0x00125C3B (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00125C30(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00125C30: ;
    eax = MEM32(0x8F03D8);
    ecx = MEM32(eax + 0x14);
    fp_push(MEMF(ecx)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00125C40
 * Original: 0x00125C40 - 0x00125C4B (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00125C40(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00125C40: ;
    eax = MEM32(0x8F040C);
    ecx = MEM32(eax + 0x14);
    fp_push(MEMF(ecx)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00125C50
 * Original: 0x00125C50 - 0x00125C5B (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00125C50(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00125C50: ;
    eax = MEM32(0x8F0404);
    ecx = MEM32(eax + 0x14);
    fp_push(MEMF(ecx)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00125C60
 * Original: 0x00125C60 - 0x00125C6B (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00125C60(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00125C60: ;
    eax = MEM32(0x8F046C);
    ecx = MEM32(eax + 0x14);
    fp_push(MEMF(ecx)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00125C70
 * Original: 0x00125C70 - 0x00125C7B (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00125C70(void)
{

loc_00125C70: ;
    eax = MEM32(0x8F03F4);
    ecx = MEM32(eax + 0x14);
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00125C80
 * Original: 0x00125C80 - 0x00125C8B (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00125C80(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00125C80: ;
    eax = MEM32(0x8F0430);
    ecx = MEM32(eax + 0x14);
    fp_push(MEMF(ecx)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00125C90
 * Original: 0x00125C90 - 0x00125CCF (63 bytes, 21 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00125C90(void)
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

loc_00125C90: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x00125C9Du); RECOMP_ABI_CALL(0x0002459Cu, sub_0002459C); /* call 0x0002459C */

loc_00125C9D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00125CBB; /* jle: less or equal (signed <=) */

loc_00125CA1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00125CBB; /* jg: greater (signed >) */

loc_00125CA6: ;
    ecx = MEM32(0x8F041C);
    edx = MEM32(ecx + 0x14);
    fp_push(MEMF(edx)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x364)); /* fmul dword ptr [esi + 0x364] */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00125CBB: ;
    eax = MEM32(0x8F0428);
    ecx = MEM32(eax + 0x14);
    fp_push(MEMF(ecx)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x364)); /* fmul dword ptr [esi + 0x364] */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00125CE0
 * Original: 0x00125CE0 - 0x00125D19 (57 bytes, 21 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00125CE0(void)
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

loc_00125CE0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x00125CEDu); RECOMP_ABI_CALL(0x0002459Cu, sub_0002459C); /* call 0x0002459C */

loc_00125CED: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00125D08; /* jle: less or equal (signed <=) */

loc_00125CF1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00125D08; /* jg: greater (signed >) */

loc_00125CF6: ;
    ecx = MEM32(0x8F045C);
    edx = MEM32(ecx + 0x14);
    fp_push(MEMF(edx)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 4)); /* fmul dword ptr [esi + 4] */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00125D08: ;
    eax = MEM32(0x8F043C);
    ecx = MEM32(eax + 0x14);
    fp_push(MEMF(ecx)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 4)); /* fmul dword ptr [esi + 4] */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00125D30
 * Original: 0x00125D30 - 0x00125D5E (46 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00125D30(void)
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

loc_00125D30: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00125D3Au); RECOMP_ABI_CALL(0x0002459Cu, sub_0002459C); /* call 0x0002459C */

loc_00125D3A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00125D51; /* jle: less or equal (signed <=) */

loc_00125D3E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00125D51; /* jg: greater (signed >) */

loc_00125D43: ;
    ecx = MEM32(0x8F0438);
    edx = MEM32(ecx + 0x14);
    fp_push(MEMF(edx)); /* fld float */
    esp += 8; return; /* ret 4 */

loc_00125D51: ;
    eax = MEM32(0x8F0414);
    ecx = MEM32(eax + 0x14);
    fp_push(MEMF(ecx)); /* fld float */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00125D70
 * Original: 0x00125D70 - 0x00125D9E (46 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00125D70(void)
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

loc_00125D70: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00125D7Au); RECOMP_ABI_CALL(0x0002459Cu, sub_0002459C); /* call 0x0002459C */

loc_00125D7A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00125D91; /* jle: less or equal (signed <=) */

loc_00125D7E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00125D91; /* jg: greater (signed >) */

loc_00125D83: ;
    ecx = MEM32(0x8F0448);
    edx = MEM32(ecx + 0x14);
    fp_push(MEMF(edx)); /* fld float */
    esp += 8; return; /* ret 4 */

loc_00125D91: ;
    eax = MEM32(0x8F03E0);
    ecx = MEM32(eax + 0x14);
    fp_push(MEMF(ecx)); /* fld float */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00125DB0
 * Original: 0x00125DB0 - 0x00125DDE (46 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00125DB0(void)
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

loc_00125DB0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00125DBAu); RECOMP_ABI_CALL(0x0002459Cu, sub_0002459C); /* call 0x0002459C */

loc_00125DBA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00125DD1; /* jle: less or equal (signed <=) */

loc_00125DBE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00125DD1; /* jg: greater (signed >) */

loc_00125DC3: ;
    ecx = MEM32(0x8F0400);
    edx = MEM32(ecx + 0x14);
    fp_push(MEMF(edx)); /* fld float */
    esp += 8; return; /* ret 4 */

loc_00125DD1: ;
    eax = MEM32(0x8F0418);
    ecx = MEM32(eax + 0x14);
    fp_push(MEMF(ecx)); /* fld float */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00125DF0
 * Original: 0x00125DF0 - 0x00125E1E (46 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00125DF0(void)
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

loc_00125DF0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00125DFAu); RECOMP_ABI_CALL(0x0002459Cu, sub_0002459C); /* call 0x0002459C */

loc_00125DFA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00125E11; /* jle: less or equal (signed <=) */

loc_00125DFE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00125E11; /* jg: greater (signed >) */

loc_00125E03: ;
    ecx = MEM32(0x8F03EC);
    edx = MEM32(ecx + 0x14);
    fp_push(MEMF(edx)); /* fld float */
    esp += 8; return; /* ret 4 */

loc_00125E11: ;
    eax = MEM32(0x8F042C);
    ecx = MEM32(eax + 0x14);
    fp_push(MEMF(ecx)); /* fld float */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00125E30
 * Original: 0x00125E30 - 0x00125E3B (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00125E30(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00125E30: ;
    eax = MEM32(0x8F0454);
    ecx = MEM32(eax + 0x14);
    fp_push(MEMF(ecx)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00125E40
 * Original: 0x00125E40 - 0x00125EA4 (100 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00125E40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00125E40: ;
    eax = MEM32(0x8F03FC);
    ecx = MEM32(eax + 0x14);
    eax = (int32_t)MEMF(ecx); /* cvttss2si */
    edx = MEM32(esp + 4);
    ecx = MEM32(edx * 4 + 0x8F0040);
    edx = MEM32(ecx);
    edx = (uint32_t)(int32_t)SMEM8(edx + 0xD2);
    ecx = (uint32_t)(int32_t)SMEM8(ecx + 0xD2);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00125EA1; /* jg: greater (signed >) */

loc_00125E6D: ;
    ecx = MEM32(0x8F6A68);
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00125E91; /* je: equal / zero */

loc_00125E7B: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00125EA1; /* jne: not equal / not zero */

loc_00125E7E: ;
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7ABD64); /* mulss */
    eax = (int32_t)xmm0.f[0]; /* cvttss2si */
    esp += 8; return; /* ret 4 */

loc_00125E91: ;
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AA820); /* mulss */
    eax = (int32_t)xmm0.f[0]; /* cvttss2si */

loc_00125EA1: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00125EC0
 * Original: 0x00125EC0 - 0x00125F09 (73 bytes, 23 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00125EC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00125EC0: ;
    eax = MEM32(0x8F03DC);
    ecx = MEM32(eax + 0x14);
    eax = MEM32(ecx);
    edx = MEM32(esp + 4);
    ecx = MEM32(edx * 4 + 0x8F0040);
    edx = MEM32(ecx);
    edx = (uint32_t)(int32_t)SMEM8(edx + 0xD2);
    ecx = (uint32_t)(int32_t)SMEM8(ecx + 0xD2);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00125F06; /* jle: less or equal (signed <=) */

loc_00125EEB: ;
    ecx = MEM32(0x8F6A68);
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00125F01; /* je: equal / zero */

loc_00125EF9: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00125F06; /* jne: not equal / not zero */

loc_00125EFC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

loc_00125F01: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */

loc_00125F06: ;
    esp += 8; return; /* ret 4 */

}
