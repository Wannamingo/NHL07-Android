/**
 * nhl_07_recomp - Recompiled code chunk 218
 * Functions: 250 (0x004CAA41 - 0x004CEA45)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_004CAA41
 * Original: 0x004CAA41 - 0x004CAA52 (17 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CAA41(void)
{

loc_004CAA41: ;
    ecx = MEM32(ecx + 0x68C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x94); PUSH32(esp, 0x004CAA51u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CAA4Bu); } /* indirect call */
    }

loc_004CAA51: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004CAA52
 * Original: 0x004CAA52 - 0x004CAA5D (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CAA52(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004CAA52: ;
    ecx = MEM32(ecx + 0x68C);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x54)); return; /* indirect tail jmp */

}

/**
 * sub_004CAA5D
 * Original: 0x004CAA5D - 0x004CAA68 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CAA5D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004CAA5D: ;
    ecx = MEM32(ecx + 0x68C);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x24)); return; /* indirect tail jmp */

}

/**
 * sub_004CAA68
 * Original: 0x004CAA68 - 0x004CAA91 (41 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CAA68(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CAA68: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 8));
    esi = ecx;
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = esi + 8;
    PUSH32(esp, 0x004CAA7Bu); RECOMP_ABI_CALL(0x004C2C72u, sub_004C2C72); /* call 0x004C2C72 */

loc_004CAA7B: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x867738);
    ecx = esi + -24;
    PUSH32(esp, 0x004CAA8Du); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004CAA8D: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CAA91
 * Original: 0x004CAA91 - 0x004CAAC8 (55 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CAA91(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CAA91: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x86775C);
    PUSH32(esp, MEM32(esp + 0x10));
    esi = ecx;
    PUSH32(esp, 0x004CAAA3u); RECOMP_ABI_CALL(0x004C17F2u, sub_004C17F2); /* call 0x004C17F2 */

loc_004CAAA3: ;
    edi = esi + 0x18;
    ecx = edi;
    PUSH32(esp, 0x004CAAADu); RECOMP_ABI_CALL(0x004B898Cu, sub_004B898C); /* call 0x004B898C */

loc_004CAAAD: ;
    MEM32(esi + 0x1C) = MEM32(esi + 0x1C) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(edi) = 0x867750;
    MEM32(esi) = 0x86774C;
    MEM32(esi + 0x20) = MEM32(esi + 0x20) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CAAC8
 * Original: 0x004CAAC8 - 0x004CAAD0 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CAAC8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004CAAC8: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004CE082(); return; /* tail jmp 0x004CE082 */

}

/**
 * sub_004CAAD0
 * Original: 0x004CAAD0 - 0x004CAB0F (63 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CAAD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004CAAD0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = esi + 0x18;
    MEM32(esi) = 0x86774C;
    MEM32(edi) = 0x867750;
    if (CMP_EQ(_fa, _fb)) goto loc_004CAAF3; /* je: equal / zero */

loc_004CAAEA: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004CAAEFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CAAECu); } /* indirect call */
    }

loc_004CAAEF: ;
    MEM32(esi + 0x1C) = MEM32(esi + 0x1C) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_004CAAF3: ;
    ecx = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004CAAFF; /* je: equal / zero */

loc_004CAAFA: ;
    PUSH32(esp, 0x004CAAFFu); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004CAAFF: ;
    ecx = edi;
    PUSH32(esp, 0x004CAB06u); RECOMP_ABI_CALL(0x004B8995u, sub_004B8995); /* call 0x004B8995 */

loc_004CAB06: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004C1837(); return; /* tail jmp 0x004C1837 */

}

/**
 * sub_004CAB0F
 * Original: 0x004CAB0F - 0x004CAB1C (13 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CAB0F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CAB0F: ;
    ecx = MEM32(ecx + 0x20);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004CAB1B; /* je: equal / zero */

loc_004CAB18: ;
    eax = MEM32(ecx + 0x14);

loc_004CAB1B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004CAB1C
 * Original: 0x004CAB1C - 0x004CAB4D (49 bytes, 17 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CAB1C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CAB1C: ;
    PUSH32(esp, esi);
    edx = ecx;
    esi = 0x7B891F;
    PUSH32(esp, 0x004CAB29u); RECOMP_ABI_CALL(0x004CAB0Fu, sub_004CAB0F); /* call 0x004CAB0F */

loc_004CAB29: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_004CAB47; /* jge: greater or equal (signed >=) */

loc_004CAB2F: ;
    eax = MEM32(edx + 0x20);
    PUSH32(esp, MEM32(esp + 8));
    ecx = eax + 8;
    PUSH32(esp, 0x004CAB3Eu); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004CAB3E: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004CAB45u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CAB42u); } /* indirect call */
    }

loc_004CAB45: ;
    esi = eax;

loc_004CAB47: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CAB4D
 * Original: 0x004CAB4D - 0x004CAB7F (50 bytes, 17 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CAB4D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CAB4D: ;
    PUSH32(esp, ebx);
    edx = ecx;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    PUSH32(esp, 0x004CAB57u); RECOMP_ABI_CALL(0x004CAB0Fu, sub_004CAB0F); /* call 0x004CAB0F */

loc_004CAB57: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_004CAB79; /* jge: greater or equal (signed >=) */

loc_004CAB5D: ;
    eax = MEM32(edx + 0x20);
    PUSH32(esp, MEM32(esp + 8));
    ecx = eax + 8;
    PUSH32(esp, 0x004CAB6Cu); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004CAB6C: ;
    PUSH32(esp, eax);
    ecx = 0x90E444;
    PUSH32(esp, 0x004CAB77u); RECOMP_ABI_CALL(0x004AFE27u, sub_004AFE27); /* call 0x004AFE27 */

loc_004CAB77: ;
    SET_LO8(ebx, LO8(ebx) + 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */

loc_004CAB79: ;
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CAB7F
 * Original: 0x004CAB7F - 0x004CABBC (61 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CAB7F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CAB7F: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esi + 4;
    PUSH32(esp, 0x004CAB8Cu); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004CAB8C: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x7B891F);
    ecx = esi + -24;
    if ((_fa == 0)) goto loc_004CABAE; /* je: equal / zero */

loc_004CAB9D: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_004CABA7; /* je: equal / zero */

loc_004CABA0: ;
    PUSH32(esp, 0x86779C);
    goto loc_004CABB3;

loc_004CABA7: ;
    PUSH32(esp, 0x867788);
    goto loc_004CABB3;

loc_004CABAE: ;
    PUSH32(esp, 0x86777C);

loc_004CABB3: ;
    PUSH32(esp, 0x004CABB8u); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004CABB8: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CABBC
 * Original: 0x004CABBC - 0x004CABDD (33 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CABBC(void)
{

loc_004CABBC: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esi + 4;
    PUSH32(esp, 0x004CABC9u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004CABC9: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x8677AC);
    ecx = esi + -24;
    PUSH32(esp, 0x004CABDBu); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004CABDB: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004CABDD
 * Original: 0x004CABDD - 0x004CAC00 (35 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CABDD(void)
{

loc_004CABDD: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x20);
    eax = MEM32(ecx);
    edx = esi + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, MEM32(esp + 0xC));
    { uint32_t _icall_target = MEM32(eax + 0xB4); PUSH32(esp, 0x004CABF3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CABEDu); } /* indirect call */
    }

loc_004CABF3: ;
    PUSH32(esp, eax);
    ecx = esi + 0x1C;
    PUSH32(esp, 0x004CABFCu); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004CABFC: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CAC00
 * Original: 0x004CAC00 - 0x004CAC49 (73 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CAC00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CAC00: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x8677CC);
    PUSH32(esp, 2);
    esi = ecx;
    PUSH32(esp, 0x004CAC10u); RECOMP_ABI_CALL(0x004C17F2u, sub_004C17F2); /* call 0x004C17F2 */

loc_004CAC10: ;
    edi = esi + 0x18;
    ecx = edi;
    PUSH32(esp, 0x004CAC1Au); RECOMP_ABI_CALL(0x0060859Eu, sub_0060859E); /* call 0x0060859E */

loc_004CAC1A: ;
    MEM32(esi) = 0x8677C8;
    MEM32(edi) = 0x8677BC;
    MEM32(esi + 0x1C) = MEM32(esi + 0x1C) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, MEM32(0x90E43C));
    ecx = esi + 0x20;
    PUSH32(esp, 0x004CAC38u); RECOMP_ABI_CALL(0x004ABC3Eu, sub_004ABC3E); /* call 0x004ABC3E */

loc_004CAC38: ;
    PUSH32(esp, 0);
    ecx = 0x90E43C;
    PUSH32(esp, 0x004CAC44u); RECOMP_ABI_CALL(0x004AFE27u, sub_004AFE27); /* call 0x004AFE27 */

loc_004CAC44: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004CAC49
 * Original: 0x004CAC49 - 0x004CAC51 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CAC49(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004CAC49: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004CE09E(); return; /* tail jmp 0x004CE09E */

}

/**
 * sub_004CAC51
 * Original: 0x004CAC51 - 0x004CACA4 (83 bytes, 31 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CAC51(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004CAC51: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x1C;
    ecx = MEM32(edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    ebx = esi + 0x18;
    MEM32(esi) = 0x8677C8;
    MEM32(ebx) = 0x8677BC;
    if (CMP_EQ(_fa, _fb)) goto loc_004CAC7C; /* je: equal / zero */

loc_004CAC6E: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004CAC73u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CAC70u); } /* indirect call */
    }

loc_004CAC73: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x004CAC7Cu); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004CAC7C: ;
    ecx = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004CAC88; /* je: equal / zero */

loc_004CAC83: ;
    PUSH32(esp, 0x004CAC88u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004CAC88: ;
    ecx = MEM32(edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004CAC93; /* je: equal / zero */

loc_004CAC8E: ;
    PUSH32(esp, 0x004CAC93u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004CAC93: ;
    ecx = ebx;
    PUSH32(esp, 0x004CAC9Au); RECOMP_ABI_CALL(0x006085A7u, sub_006085A7); /* call 0x006085A7 */

loc_004CAC9A: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_004C1837(); return; /* tail jmp 0x004C1837 */

}

/**
 * sub_004CACA4
 * Original: 0x004CACA4 - 0x004CACC1 (29 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CACA4(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CACA4: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004CACACu); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_004CACAC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 8) = eax;
    MEM32(esi) = 0x8677E8;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x10) = eax;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004CACC1
 * Original: 0x004CACC1 - 0x004CACE1 (32 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CACC1(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CACC1: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004CACC9u); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_004CACC9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = eax;
    MEM32(esi) = 0x8677EC;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x14) = eax;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004CACE1
 * Original: 0x004CACE1 - 0x004CAD04 (35 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CACE1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004CACE1: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004CACF0; /* je: equal / zero */

loc_004CACEB: ;
    PUSH32(esp, 0x004CACF0u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004CACF0: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004CACFC; /* je: equal / zero */

loc_004CACF7: ;
    PUSH32(esp, 0x004CACFCu); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004CACFC: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004DD576(); return; /* tail jmp 0x004DD576 */

}

/**
 * sub_004CAD04
 * Original: 0x004CAD04 - 0x004CAD4F (75 bytes, 32 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CAD04(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CAD04: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 2 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_004CAD35; /* je: equal / zero */

loc_004CAD11: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x4CACE1);
    edi = esi + -4;
    PUSH32(esp, MEM32(edi));
    PUSH32(esp, 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004CAD24u); RECOMP_ABI_CALL(0x00029295u, sub_00029295); /* call 0x00029295 */

loc_004CAD24: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004CAD30; /* je: equal / zero */

loc_004CAD29: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x004CAD2Fu); RECOMP_ABI_CALL(0x004DD5D5u, sub_004DD5D5); /* call 0x004DD5D5 */

loc_004CAD2F: ;
    POP32(esp, ecx);

loc_004CAD30: ;
    eax = edi;
    POP32(esp, edi);
    goto loc_004CAD4A;

loc_004CAD35: ;
    ecx = esi;
    PUSH32(esp, 0x004CAD3Cu); RECOMP_ABI_CALL(0x004CACE1u, sub_004CACE1); /* call 0x004CACE1 */

loc_004CAD3C: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004CAD48; /* je: equal / zero */

loc_004CAD41: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004CAD47u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004CAD47: ;
    POP32(esp, ecx);

loc_004CAD48: ;
    eax = esi;

loc_004CAD4A: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CAD4F
 * Original: 0x004CAD4F - 0x004CADE2 (147 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004CAD4F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CAD4F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x20);
    PUSH32(esp, edi);
    edi = esi + 0x1C;
    MEM32(esi) = 0x867808;
    MEM32(esi + 0x18) = 0x8677F8;
    MEM32(edi) = 0x8677F0;
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004CAD86; /* je: equal / zero */

loc_004CAD77: ;
    ecx = ebp + -4;
    PUSH32(esp, ecx);
    ecx = eax + 8;
    MEM32(ebp + -4) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CAD86u); RECOMP_ABI_CALL(0x004DD8B2u, sub_004DD8B2); /* call 0x004DD8B2 */

loc_004CAD86: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CAD8Bu); RECOMP_ABI_CALL(0x004DC96Bu, sub_004DC96B); /* call 0x004DC96B */

loc_004CAD8B: ;
    ecx = MEM32(esi + 0x20);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ecx + 8));
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004CAD98u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CAD95u); } /* indirect call */
    }

loc_004CAD98: ;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CADA5u); RECOMP_ABI_CALL(0x004BFEADu, sub_004BFEAD); /* call 0x004BFEAD */

loc_004CADA5: ;
    ecx = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004CADB2; /* je: equal / zero */

loc_004CADAC: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004CADB2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CADB0u); } /* indirect call */
    }

loc_004CADB2: ;
    ecx = MEM32(esi + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004CADD0; /* je: equal / zero */

loc_004CADB9: ;
    eax = ecx + -4;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004CADC9; /* je: equal / zero */

loc_004CADC1: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004CADC7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CADC5u); } /* indirect call */
    }

loc_004CADC7: ;
    goto loc_004CADD0;

loc_004CADC9: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CADCFu); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_004CADCF: ;
    POP32(esp, ecx);

loc_004CADD0: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CADD7u); RECOMP_ABI_CALL(0x004AD973u, sub_004AD973); /* call 0x004AD973 */

loc_004CADD7: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CADDEu); RECOMP_ABI_CALL(0x004C1837u, sub_004C1837); /* call 0x004C1837 */

loc_004CADDE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004CADE2
 * Original: 0x004CADE2 - 0x004CADEA (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CADE2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004CADE2: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004CE1E9(); return; /* tail jmp 0x004CE1E9 */

}

/**
 * sub_004CADEA
 * Original: 0x004CADEA - 0x004CB00C (546 bytes, 193 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004CADEA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CADEA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CADFAu); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004CADFA: ;
    PUSH32(esp, eax);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x14);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CAE06u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004CAE06: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004CAE16; /* je: equal / zero */

loc_004CAE0D: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CAE14u); RECOMP_ABI_CALL(0x004CACA4u, sub_004CACA4); /* call 0x004CACA4 */

loc_004CAE14: ;
    goto loc_004CAE18;

loc_004CAE16: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004CAE18: ;
    MEM32(esi + 0x20) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CAE20u); RECOMP_ABI_CALL(0x004DC96Bu, sub_004DC96B); /* call 0x004DC96B */

loc_004CAE20: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    edi = eax;
    eax = MEM32(edi);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 8));
    MEM32(ebp + -4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CAE32u); RECOMP_ABI_CALL(0x005D0020u, sub_005D0020); /* call 0x005D0020 */

loc_004CAE32: ;
    POP32(esp, ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(ebp + -4);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004CAE3Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CAE3Au); } /* indirect call */
    }

loc_004CAE3C: ;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, MEM32(ebp + 8));
    MEM32(ecx + 8) = eax;
    eax = MEM32(esi + 0x20);
    PUSH32(esp, MEM32(eax + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CAE50u); RECOMP_ABI_CALL(0x005D00B0u, sub_005D00B0); /* call 0x005D00B0 */

loc_004CAE50: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    ecx = MEM32(0x90E424);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x004CAE5Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CAE5Au); } /* indirect call */
    }

loc_004CAE5D: ;
    ecx = MEM32(esi + 0x20);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ecx + 8));
    edi = eax;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004CAE6Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CAE69u); } /* indirect call */
    }

loc_004CAE6C: ;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, eax);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CAE78u); RECOMP_ABI_CALL(0x004C2FB8u, sub_004C2FB8); /* call 0x004C2FB8 */

loc_004CAE78: ;
    eax = MEM32(esi + 0x20);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004CB005; /* je: equal / zero */

loc_004CAE86: ;
    eax = MEM32(eax + 0xC);
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x004CAE90u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CAE8Du); } /* indirect call */
    }

loc_004CAE90: ;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CAE9Cu); RECOMP_ABI_CALL(0x004BFEADu, sub_004BFEAD); /* call 0x004BFEAD */

loc_004CAE9C: ;
    PUSH32(esp, 0x200);
    ecx = ebp + -24;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CAEA9u); RECOMP_ABI_CALL(0x004BDE7Du, sub_004BDE7D); /* call 0x004BDE7D */

loc_004CAEA9: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, MEM32(ecx + 8));
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004CAEB9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CAEB6u); } /* indirect call */
    }

loc_004CAEB9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + 8) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_004CAEE0; /* jbe: below or equal (unsigned <=) */

loc_004CAEC0: ;
    ecx = MEM32(esi + 0x20);
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ecx + 8));
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x004CAED1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CAECEu); } /* indirect call */
    }

loc_004CAED1: ;
    PUSH32(esp, eax);
    ecx = ebp + -24;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CAEDAu); RECOMP_ABI_CALL(0x004BDF09u, sub_004BDF09); /* call 0x004BDF09 */

loc_004CAEDA: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ebp + 8) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004CAEC0; /* jb: below (unsigned <) */

loc_004CAEE0: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(eax + 0xC);
    eax = MEM32(ecx);
    edx = ebp + -24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x004CAEEFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CAEECu); } /* indirect call */
    }

loc_004CAEEF: ;
    ecx = MEM32(eax + 0x14);
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(ebp + 0xC) = eax;
    MEM32(ebp + -8) = ecx;
    if (CMP_BE(_fa, _fb)) goto loc_004CAFE5; /* jbe: below or equal (unsigned <=) */

loc_004CAF04: ;
    goto loc_004CAF09;

loc_004CAF06: ;
    eax = MEM32(ebp + 0xC);

loc_004CAF09: ;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x11) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x24), 0x11 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_004CAFE5; /* jae: above or equal (unsigned >=) */

loc_004CAF13: ;
    PUSH32(esp, MEM32(ebp + 8));
    ecx = eax + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CAF1Eu); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004CAF1E: ;
    edi = eax;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004CAF27u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CAF24u); } /* indirect call */
    }

loc_004CAF27: ;
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_004CAF84; /* je: equal / zero */

loc_004CAF2C: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_004CAFD6; /* jne: not equal / not zero */

loc_004CAF33: ;
    eax = MEM32(esi + 0x24);
    ecx = MEM32(esi + 0x28);
    eax = eax + eax * 2;
    MEM32(ecx + eax * 8 + 8) = 3;
    ecx = MEM32(0x90E424);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x004CAF4Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CAF4Cu); } /* indirect call */
    }

loc_004CAF4F: ;
    ebx = MEM32(eax);
    MEM32(ebp + -4) = eax;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004CAF5Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CAF58u); } /* indirect call */
    }

loc_004CAF5B: ;
    ecx = MEM32(ebp + -4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ebx + 0x14); PUSH32(esp, 0x004CAF62u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CAF5Fu); } /* indirect call */
    }

loc_004CAF62: ;
    ecx = MEM32(esi + 0x24);
    edx = MEM32(esi + 0x28);
    ecx = ecx + ecx * 2;
    MEM32(edx + ecx * 8 + 0xC) = eax;
    eax = MEM32(esi + 0x24);
    ecx = MEM32(esi + 0x28);
    eax = eax + eax * 2;
    PUSH32(esp, edi);
    ecx = ecx + eax * 8 + 0x14;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CAF82u); RECOMP_ABI_CALL(0x004AE877u, sub_004AE877); /* call 0x004AE877 */

loc_004CAF82: ;
    goto loc_004CAFD3;

loc_004CAF84: ;
    eax = MEM32(esi + 0x24);
    ecx = MEM32(esi + 0x28);
    eax = eax + eax * 2;
    MEM32(ecx + eax * 8 + 8) = 2;
    ecx = MEM32(0x90E424);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x004CAFA0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CAF9Du); } /* indirect call */
    }

loc_004CAFA0: ;
    ebx = MEM32(eax);
    MEM32(ebp + -4) = eax;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004CAFACu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CAFA9u); } /* indirect call */
    }

loc_004CAFAC: ;
    ecx = MEM32(ebp + -4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ebx + 0x10); PUSH32(esp, 0x004CAFB3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CAFB0u); } /* indirect call */
    }

loc_004CAFB3: ;
    ecx = MEM32(esi + 0x24);
    edx = MEM32(esi + 0x28);
    ecx = ecx + ecx * 2;
    MEM32(edx + ecx * 8 + 0xC) = eax;
    eax = MEM32(esi + 0x24);
    ecx = MEM32(esi + 0x28);
    eax = eax + eax * 2;
    PUSH32(esp, edi);
    ecx = ecx + eax * 8 + 0x10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CAFD3u); RECOMP_ABI_CALL(0x004B6F0Eu, sub_004B6F0E); /* call 0x004B6F0E */

loc_004CAFD3: ;
    MEM32(esi + 0x24) = MEM32(esi + 0x24) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_004CAFD6: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -8) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004CAF06; /* jb: below (unsigned <) */

loc_004CAFE5: ;
    eax = esi + 0x1C;
    MEM32(ebp + 8) = eax;
    eax = ebp + 8;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x20);
    ecx = MEM32(eax + 0xC);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CAFFDu); RECOMP_ABI_CALL(0x004DD750u, sub_004DD750); /* call 0x004DD750 */

loc_004CAFFD: ;
    ecx = ebp + -24;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CB005u); RECOMP_ABI_CALL(0x004BDEF5u, sub_004BDEF5); /* call 0x004BDEF5 */

loc_004CB005: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004CB00C
 * Original: 0x004CB00C - 0x004CB049 (61 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CB00C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CB00C: ;
    edx = MEM32(esp + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 0x24) (32-bit) */
    eax = 0x7B891F;
    if (CMP_AE(_fa, _fb)) goto loc_004CB046; /* jae: above or equal (unsigned >=) */

loc_004CB01A: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x28);
    edx = edx + edx * 2;
    edx = esi + edx * 8;
    esi = MEM32(edx + 8);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_004CB03A; /* je: equal / zero */

loc_004CB02A: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_004CB035; /* je: equal / zero */

loc_004CB02D: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_004CB045; /* jne: not equal / not zero */

loc_004CB030: ;
    ecx = MEM32(edx + 0x14);
    goto loc_004CB040;

loc_004CB035: ;
    ecx = MEM32(edx + 0x10);
    goto loc_004CB040;

loc_004CB03A: ;
    eax = MEM32(ecx + 0x20);
    ecx = MEM32(eax + 0xC);

loc_004CB040: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004CB045u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CB042u); } /* indirect call */
    }

loc_004CB045: ;
    POP32(esp, esi);

loc_004CB046: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CB049
 * Original: 0x004CB049 - 0x004CB163 (282 bytes, 114 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004CB049(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004CB049: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x20));
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x20);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM8(ebp + -1) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_004CB15C; /* je: equal / zero */

loc_004CB065: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x200);
    ecx = ebp + -32;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CB073u); RECOMP_ABI_CALL(0x004BDE7Du, sub_004BDE7D); /* call 0x004BDE7D */

loc_004CB073: ;
    ecx = MEM32(0x90E424);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x004CB07Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CB07Bu); } /* indirect call */
    }

loc_004CB07E: ;
    ecx = MEM32(esi + 0x20);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ecx + 8));
    edi = eax;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x004CB08Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CB08Au); } /* indirect call */
    }

loc_004CB08D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(ebp + -16) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_004CB0D8; /* jbe: below or equal (unsigned <=) */

loc_004CB094: ;
    ecx = MEM32(esi + 0x20);
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ecx + 8));
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004CB0A2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CB09Fu); } /* indirect call */
    }

loc_004CB0A2: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(ebp + -12) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_004CB0D2; /* jbe: below or equal (unsigned <=) */

loc_004CB0AD: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -8));
    ecx = MEM32(esi + 0x20);
    eax = MEM32(edi);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ecx + 8));
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x004CB0BEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CB0BBu); } /* indirect call */
    }

loc_004CB0BE: ;
    PUSH32(esp, eax);
    ecx = ebp + -32;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CB0C7u); RECOMP_ABI_CALL(0x004BDF09u, sub_004BDF09); /* call 0x004BDF09 */

loc_004CB0C7: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) + 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -12) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_004CB0AD; /* jb: below (unsigned <) */

loc_004CB0D2: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ebp + -16) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_004CB094; /* jb: below (unsigned <) */

loc_004CB0D8: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(eax + 0xC);
    eax = MEM32(ecx);
    edx = ebp + -32;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x004CB0E7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CB0E4u); } /* indirect call */
    }

loc_004CB0E7: ;
    edi = eax;
    eax = MEM32(edi + 0x14);
    MEM32(ebp + -16) = eax;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004CB0F1: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ebp + -16) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_004CB153; /* jae: above or equal (unsigned >=) */

loc_004CB0F6: ;
    PUSH32(esp, ebx);
    ecx = edi + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CB0FFu); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004CB0FF: ;
    esi = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004CB108u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CB105u); } /* indirect call */
    }

loc_004CB108: ;
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0));
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_004CB12C; /* je: equal / zero */

loc_004CB10D: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_004CB14C; /* jne: not equal / not zero */

loc_004CB110: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x30); PUSH32(esp, 0x004CB117u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CB114u); } /* indirect call */
    }

loc_004CB117: ;
    edx = MEM32(esi);
    ecx = esi;
    MEM32(ebp + -12) = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x004CB121u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CB11Eu); } /* indirect call */
    }

loc_004CB121: ;
    ecx = MEM32(ebp + -12);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM8(ebp + -1) = (CMP_EQ(_fa, _fb)) ? 1 : 0; /* sete */
    goto loc_004CB14C;

loc_004CB12C: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x004CB133u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CB130u); } /* indirect call */
    }

loc_004CB133: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x004CB13Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CB138u); } /* indirect call */
    }

loc_004CB13B: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CB141u); RECOMP_ABI_CALL(0x005CFF90u, sub_005CFF90); /* call 0x005CFF90 */

loc_004CB141: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    POP32(esp, ecx);
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, ecx);
    MEM8(ebp + -1) = LO8(eax);

loc_004CB14C: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(ebp + -1)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -1), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_004CB0F1; /* jne: not equal / not zero */

loc_004CB153: ;
    ecx = ebp + -32;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CB15Bu); RECOMP_ABI_CALL(0x004BDEF5u, sub_004BDEF5); /* call 0x004BDEF5 */

loc_004CB15B: ;
    POP32(esp, edi);

loc_004CB15C: ;
    SET_LO8(eax, MEM8(ebp + -1));
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004CB163
 * Original: 0x004CB163 - 0x004CB173 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CB163(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004CB163: ;
    eax = MEM32(ecx + 0x20);
    ecx = MEM32(eax + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004CB172; /* je: equal / zero */

loc_004CB16D: ;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x10)); return; /* indirect tail jmp */

loc_004CB172: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004CB173
 * Original: 0x004CB173 - 0x004CB193 (32 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CB173(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CB173: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(eax + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004CB191; /* je: equal / zero */

loc_004CB180: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004CB185u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CB182u); } /* indirect call */
    }

loc_004CB185: ;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x004CB191u); RECOMP_ABI_CALL(0x004BFEADu, sub_004BFEAD); /* call 0x004BFEAD */

loc_004CB191: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004CB193
 * Original: 0x004CB193 - 0x004CB1A9 (22 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CB193(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CB193: ;
    edx = MEM32(ecx + 0x20);
    ecx = MEM32(edx + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO8(eax, 1);
    if (CMP_EQ(_fa, _fb)) goto loc_004CB1A8; /* je: equal / zero */

loc_004CB19F: ;
    edx = MEM32(edx + 0x10);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x004CB1A8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CB1A5u); } /* indirect call */
    }

loc_004CB1A8: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004CB1A9
 * Original: 0x004CB1A9 - 0x004CB1BE (21 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CB1A9(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CB1A9: ;
    eax = MEM32(ecx + 0x20);
    ecx = MEM32(eax + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004CB1BD; /* je: equal / zero */

loc_004CB1B3: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(eax + 0x10));
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x004CB1BDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CB1BAu); } /* indirect call */
    }

loc_004CB1BD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004CB1BE
 * Original: 0x004CB1BE - 0x004CB1CE (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CB1BE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004CB1BE: ;
    eax = MEM32(ecx + 0x20);
    ecx = MEM32(eax + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004CB1CD; /* je: equal / zero */

loc_004CB1C8: ;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x24)); return; /* indirect tail jmp */

loc_004CB1CD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004CB1CE
 * Original: 0x004CB1CE - 0x004CB1DE (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CB1CE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004CB1CE: ;
    eax = MEM32(ecx + 0x20);
    ecx = MEM32(eax + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004CB1DD; /* je: equal / zero */

loc_004CB1D8: ;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x28)); return; /* indirect tail jmp */

loc_004CB1DD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004CB1DE
 * Original: 0x004CB1DE - 0x004CB1FA (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CB1DE(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CB1DE: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004CB1E6u); RECOMP_ABI_CALL(0x004C1DE4u, sub_004C1DE4); /* call 0x004C1DE4 */

loc_004CB1E6: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004CB1F4; /* je: equal / zero */

loc_004CB1ED: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004CB1F3u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004CB1F3: ;
    POP32(esp, ecx);

loc_004CB1F4: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CB1FA
 * Original: 0x004CB1FA - 0x004CB261 (103 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004CB1FA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CB1FA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x86781C);
    PUSH32(esp, 1);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CB20Eu); RECOMP_ABI_CALL(0x004C17F2u, sub_004C17F2); /* call 0x004C17F2 */

loc_004CB20E: ;
    edi = esi + 0x18;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CB218u); RECOMP_ABI_CALL(0x006085CBu, sub_006085CB); /* call 0x006085CB */

loc_004CB218: ;
    MEM32(esi) = 0x867818;
    MEM32(edi) = 0x86780C;
    MEM32(esi + 0x20) = MEM32(esi + 0x20) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CB22Du); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004CB22D: ;
    edx = MEM32(eax);
    ecx = eax;
    MEM32(ebp + -4) = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x004CB237u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CB234u); } /* indirect call */
    }

loc_004CB237: ;
    ecx = ebp + -4;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CB245u); RECOMP_ABI_CALL(0x004DD750u, sub_004DD750); /* call 0x004DD750 */

loc_004CB245: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CB24Au); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004CB24A: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x004CB251u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CB24Eu); } /* indirect call */
    }

loc_004CB251: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x004CB258u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CB255u); } /* indirect call */
    }

loc_004CB258: ;
    MEM32(esi + 0x1C) = eax;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004CB261
 * Original: 0x004CB261 - 0x004CB269 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CB261(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004CB261: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004CE65F(); return; /* tail jmp 0x004CE65F */

}

/**
 * sub_004CB269
 * Original: 0x004CB269 - 0x004CB2BB (82 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004CB269(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CB269: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x18;
    MEM32(esi) = 0x867818;
    MEM32(edi) = 0x86780C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CB285u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004CB285: ;
    edx = MEM32(eax);
    ecx = eax;
    MEM32(ebp + -4) = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x004CB28Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CB28Cu); } /* indirect call */
    }

loc_004CB28F: ;
    ecx = ebp + -4;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CB29Du); RECOMP_ABI_CALL(0x004DD8B2u, sub_004DD8B2); /* call 0x004DD8B2 */

loc_004CB29D: ;
    ecx = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004CB2A9; /* je: equal / zero */

loc_004CB2A4: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CB2A9u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004CB2A9: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CB2B0u); RECOMP_ABI_CALL(0x006085D4u, sub_006085D4); /* call 0x006085D4 */

loc_004CB2B0: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CB2B7u); RECOMP_ABI_CALL(0x004C1837u, sub_004C1837); /* call 0x004C1837 */

loc_004CB2B7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004CB2BB
 * Original: 0x004CB2BB - 0x004CB2FA (63 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_004CB2BB(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CB2BB: ;
    eax = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004CB2F7; /* je: equal / zero */

loc_004CB2C2: ;
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x14), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004CB2F7; /* je: equal / zero */

loc_004CB2C8: ;
    PUSH32(esp, esi);
    esi = ecx + 0x20;
    PUSH32(esp, 0);
    ecx = eax + 8;
    PUSH32(esp, 0x004CB2D6u); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004CB2D6: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x004CB2DEu); RECOMP_ABI_CALL(0x004C3044u, sub_004C3044); /* call 0x004C3044 */

loc_004CB2DE: ;
    PUSH32(esp, 0x004CB2E3u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004CB2E3: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x004CB2EAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CB2E7u); } /* indirect call */
    }

loc_004CB2EA: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi));
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x004CB2F3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CB2F0u); } /* indirect call */
    }

loc_004CB2F3: ;
    eax = MEM32(esi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_004CB2F7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_004CB2FA
 * Original: 0x004CB2FA - 0x004CB34D (83 bytes, 31 insns)
 * Category: game_io
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004CB2FA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004CB2FA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 8));
    edi = esi + 8;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CB30Eu); RECOMP_ABI_CALL(0x004C2B91u, sub_004C2B91); /* call 0x004C2B91 */

loc_004CB30E: ;
    PUSH32(esp, 0);
    ecx = esi + 0xC;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CB318u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004CB318: ;
    eax = esi + -24;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    ecx = esi + 4;
    _cf = 0; /* logical op clears CF */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = MEM32(edi);
    MEM32(ebp + 8) = eax;
    eax = ebp + 8;
    PUSH32(esp, eax);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(8)) >> 32) & 1);
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CB335u); RECOMP_ABI_CALL(0x004DD750u, sub_004DD750); /* call 0x004DD750 */

loc_004CB335: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x866328);
    ecx = esi + -24;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CB347u); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004CB347: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CB34D
 * Original: 0x004CB34D - 0x004CB37E (49 bytes, 16 insns)
 * Category: game_io
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CB34D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CB34D: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esi + 0xC;
    PUSH32(esp, 0x004CB35Au); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004CB35A: ;
    eax = MEM32(esp + 8);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = esi + -24;
    PUSH32(esp, 0x7B891F);
    if ((_fa == 0)) goto loc_004CB370; /* je: equal / zero */

loc_004CB369: ;
    PUSH32(esp, 0x86634C);
    goto loc_004CB375;

loc_004CB370: ;
    PUSH32(esp, 0x86633C);

loc_004CB375: ;
    PUSH32(esp, 0x004CB37Au); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004CB37A: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CB37E
 * Original: 0x004CB37E - 0x004CB3FB (125 bytes, 43 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CB37E(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CB37E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x86784C);
    PUSH32(esp, MEM32(esp + 0x18));
    esi = ecx;
    PUSH32(esp, 0x004CB391u); RECOMP_ABI_CALL(0x004C17F2u, sub_004C17F2); /* call 0x004C17F2 */

loc_004CB391: ;
    ebx = esi + 0x18;
    ecx = ebx;
    PUSH32(esp, 0x004CB39Bu); RECOMP_ABI_CALL(0x00608625u, sub_00608625); /* call 0x00608625 */

loc_004CB39B: ;
    edi = esi + 0x1C;
    ecx = edi;
    PUSH32(esp, 0x004CB3A5u); RECOMP_ABI_CALL(0x006085F8u, sub_006085F8); /* call 0x006085F8 */

loc_004CB3A5: ;
    MEM32(edi) = 0x867844;
    MEM32(esi) = 0x867840;
    MEM32(ebx) = 0x867834;
    edi = esi + 0x20;
    MEM32(edi) = MEM32(edi) & 0;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x24) = MEM32(esi + 0x24) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0x004CB3C6u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004CB3C6: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x004CB3CDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CB3CAu); } /* indirect call */
    }

loc_004CB3CD: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x004CB3D4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CB3D1u); } /* indirect call */
    }

loc_004CB3D4: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x004CB3DCu); RECOMP_ABI_CALL(0x004C2B91u, sub_004C2B91); /* call 0x004C2B91 */

loc_004CB3DC: ;
    edi = MEM32(edi);
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(esp + 0x14));
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x004CB3EAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CB3E7u); } /* indirect call */
    }

loc_004CB3EA: ;
    PUSH32(esp, eax);
    ecx = esi + 0x24;
    PUSH32(esp, 0x004CB3F3u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004CB3F3: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004CB3FB
 * Original: 0x004CB3FB - 0x004CB403 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CB3FB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004CB3FB: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004CE67B(); return; /* tail jmp 0x004CE67B */

}

/**
 * sub_004CB403
 * Original: 0x004CB403 - 0x004CB40B (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CB403(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004CB403: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004CE67B(); return; /* tail jmp 0x004CE67B */

}

/**
 * sub_004CB40B
 * Original: 0x004CB40B - 0x004CB480 (117 bytes, 44 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004CB40B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CB40B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, edi);
    ebx = esi + 0x18;
    edi = esi + 0x1C;
    MEM32(esi) = 0x867840;
    MEM32(ebx) = 0x867834;
    MEM32(edi) = 0x867844;
    if (CMP_EQ(_fa, _fb)) goto loc_004CB438; /* je: equal / zero */

loc_004CB433: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004CB438u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CB435u); } /* indirect call */
    }

loc_004CB438: ;
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004CB44E; /* je: equal / zero */

loc_004CB43F: ;
    ecx = ebp + -4;
    PUSH32(esp, ecx);
    ecx = eax + 8;
    MEM32(ebp + -4) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CB44Eu); RECOMP_ABI_CALL(0x004DD8B2u, sub_004DD8B2); /* call 0x004DD8B2 */

loc_004CB44E: ;
    ecx = MEM32(esi + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004CB45A; /* je: equal / zero */

loc_004CB455: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CB45Au); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004CB45A: ;
    ecx = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004CB466; /* je: equal / zero */

loc_004CB461: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CB466u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004CB466: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CB46Du); RECOMP_ABI_CALL(0x00608601u, sub_00608601); /* call 0x00608601 */

loc_004CB46D: ;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CB474u); RECOMP_ABI_CALL(0x0060862Eu, sub_0060862E); /* call 0x0060862E */

loc_004CB474: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CB47Bu); RECOMP_ABI_CALL(0x004C1837u, sub_004C1837); /* call 0x004C1837 */

loc_004CB47B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004CB480
 * Original: 0x004CB480 - 0x004CB4C1 (65 bytes, 28 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004CB480(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004CB480: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = esi;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    ecx = esi + 0x1C;
    _cf = 0; /* logical op clears CF */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = MEM32(esi + 0x20);
    MEM32(ebp + -4) = eax;
    eax = ebp + -4;
    PUSH32(esp, eax);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(8)) >> 32) & 1);
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CB4A4u); RECOMP_ABI_CALL(0x004DD8B2u, sub_004DD8B2); /* call 0x004DD8B2 */

loc_004CB4A4: ;
    ecx = MEM32(esi + 0x20);
    eax = MEM32(ecx);
    edx = esi + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x004CB4B3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CB4B0u); } /* indirect call */
    }

loc_004CB4B3: ;
    PUSH32(esp, eax);
    ecx = esi + 0x24;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CB4BCu); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004CB4BC: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CB4C1
 * Original: 0x004CB4C1 - 0x004CB4E2 (33 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CB4C1(void)
{

loc_004CB4C1: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esi + 0x14;
    PUSH32(esp, 0x004CB4CEu); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004CB4CE: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x866450);
    ecx = esi + -28;
    PUSH32(esp, 0x004CB4E0u); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004CB4E0: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004CB4E2
 * Original: 0x004CB4E2 - 0x004CB505 (35 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CB4E2(void)
{

loc_004CB4E2: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esi + 0x14;
    PUSH32(esp, 0x004CB4EFu); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004CB4EF: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x86646C);
    ecx = esi + -28;
    PUSH32(esp, 0x004CB501u); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004CB501: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CB505
 * Original: 0x004CB505 - 0x004CB526 (33 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CB505(void)
{

loc_004CB505: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esi + 0xC;
    PUSH32(esp, 0x004CB512u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004CB512: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x866488);
    ecx = esi + -32;
    PUSH32(esp, 0x004CB524u); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004CB524: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004CB526
 * Original: 0x004CB526 - 0x004CB549 (35 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CB526(void)
{

loc_004CB526: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esi + 0xC;
    PUSH32(esp, 0x004CB533u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004CB533: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x8664C0);
    ecx = esi + -32;
    PUSH32(esp, 0x004CB545u); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004CB545: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CB549
 * Original: 0x004CB549 - 0x004CB5C0 (119 bytes, 44 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CB549(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CB549: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004CB554u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CB552u); } /* indirect call */
    }

loc_004CB554: ;
    ecx = MEM32(esi + 0x10);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x004CB55Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CB55Cu); } /* indirect call */
    }

loc_004CB55F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004CB58C; /* je: equal / zero */

loc_004CB563: ;
    eax = MEM32(esp + 0xC);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_004CB57A; /* je: equal / zero */

loc_004CB56A: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_004CB5B4; /* je: equal / zero */

loc_004CB56D: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_004CB5A8; /* je: equal / zero */

loc_004CB570: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_004CB59C; /* je: equal / zero */

loc_004CB573: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_004CB590; /* je: equal / zero */

loc_004CB576: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_004CB58C; /* jne: not equal / not zero */

loc_004CB57A: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x8664A4);

loc_004CB584: ;
    ecx = esi + -24;
    PUSH32(esp, 0x004CB58Cu); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004CB58C: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_004CB590: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x866524);
    goto loc_004CB584;

loc_004CB59C: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x86650C);
    goto loc_004CB584;

loc_004CB5A8: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x8664F4);
    goto loc_004CB584;

loc_004CB5B4: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x8664DC);
    goto loc_004CB584;

}

/**
 * sub_004CB5C0
 * Original: 0x004CB5C0 - 0x004CB66F (175 bytes, 56 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004CB5C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CB5C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x86789C);
    PUSH32(esp, 1);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CB5D5u); RECOMP_ABI_CALL(0x004C17F2u, sub_004C17F2); /* call 0x004C17F2 */

loc_004CB5D5: ;
    edi = esi + 0x18;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CB5DFu); RECOMP_ABI_CALL(0x00608109u, sub_00608109); /* call 0x00608109 */

loc_004CB5DF: ;
    ebx = esi + 0x1C;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CB5E9u); RECOMP_ABI_CALL(0x00607F47u, sub_00607F47); /* call 0x00607F47 */

loc_004CB5E9: ;
    ecx = esi + 0x20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CB5F1u); RECOMP_ABI_CALL(0x00607F1Au, sub_00607F1A); /* call 0x00607F1A */

loc_004CB5F1: ;
    ecx = esi + 0x24;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CB5F9u); RECOMP_ABI_CALL(0x00608652u, sub_00608652); /* call 0x00608652 */

loc_004CB5F9: ;
    MEM32(ebx) = 0x867890;
    MEM32(esi) = 0x86788C;
    MEM32(edi) = 0x867880;
    MEM32(esi + 0x20) = 0x867874;
    MEM32(esi + 0x24) = 0x867868;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi + 0x28;
    MEM32(ecx) = ebx;
    MEM32(esi + 0x2C) = ebx;
    MEM32(esi + 0x30) = ebx;
    MEM32(esi + 0x34) = ebx;
    PUSH32(esp, MEM32(0x90E460));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CB634u); RECOMP_ABI_CALL(0x004AFE27u, sub_004AFE27); /* call 0x004AFE27 */

loc_004CB634: ;
    PUSH32(esp, ebx);
    ecx = 0x90E460;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CB63Fu); RECOMP_ABI_CALL(0x004AFE27u, sub_004AFE27); /* call 0x004AFE27 */

loc_004CB63F: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CB644u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004CB644: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x44); PUSH32(esp, 0x004CB64Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CB648u); } /* indirect call */
    }

loc_004CB64B: ;
    ebx = eax;
    eax = ebp + -4;
    PUSH32(esp, eax);
    ecx = ebx + 8;
    MEM32(ebp + -4) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CB65Cu); RECOMP_ABI_CALL(0x004DD750u, sub_004DD750); /* call 0x004DD750 */

loc_004CB65C: ;
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x766F6970);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004CB668u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CB665u); } /* indirect call */
    }

loc_004CB668: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004CB66F
 * Original: 0x004CB66F - 0x004CB672 (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CB66F(void)
{

loc_004CB66F: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004CB672
 * Original: 0x004CB672 - 0x004CB67A (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CB672(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004CB672: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004CE697(); return; /* tail jmp 0x004CE697 */

}

/**
 * sub_004CB67A
 * Original: 0x004CB67A - 0x004CB682 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CB67A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004CB67A: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004CE697(); return; /* tail jmp 0x004CE697 */

}

/**
 * sub_004CB682
 * Original: 0x004CB682 - 0x004CB68A (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CB682(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004CB682: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004CE697(); return; /* tail jmp 0x004CE697 */

}

/**
 * sub_004CB68A
 * Original: 0x004CB68A - 0x004CB692 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CB68A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004CB68A: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x24;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004CE697(); return; /* tail jmp 0x004CE697 */

}

/**
 * sub_004CB692
 * Original: 0x004CB692 - 0x004CB78A (248 bytes, 85 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004CB692(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CB692: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x18;
    MEM32(esi) = 0x86788C;
    MEM32(edi) = 0x867880;
    MEM32(esi + 0x1C) = 0x867890;
    MEM32(esi + 0x20) = 0x867874;
    MEM32(esi + 0x24) = 0x867868;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CB6C5u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004CB6C5: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x44); PUSH32(esp, 0x004CB6CCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CB6C9u); } /* indirect call */
    }

loc_004CB6CC: ;
    ecx = ebp + -4;
    PUSH32(esp, ecx);
    ecx = eax + 8;
    MEM32(ebp + -8) = eax;
    MEM32(ebp + -4) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CB6DEu); RECOMP_ABI_CALL(0x004DD8B2u, sub_004DD8B2); /* call 0x004DD8B2 */

loc_004CB6DE: ;
    ebx = esi + 0x2C;
    ecx = MEM32(ebx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004CB6F5; /* je: equal / zero */

loc_004CB6E7: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004CB6ECu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CB6E9u); } /* indirect call */
    }

loc_004CB6EC: ;
    PUSH32(esp, 0);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CB6F5u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004CB6F5: ;
    ecx = MEM32(esi + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004CB70B; /* je: equal / zero */

loc_004CB6FC: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004CB701u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CB6FEu); } /* indirect call */
    }

loc_004CB701: ;
    PUSH32(esp, 0);
    ecx = esi + 0x30;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CB70Bu); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004CB70B: ;
    ecx = MEM32(esi + 0x34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004CB721; /* je: equal / zero */

loc_004CB712: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004CB717u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CB714u); } /* indirect call */
    }

loc_004CB717: ;
    PUSH32(esp, 0);
    ecx = esi + 0x34;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CB721u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004CB721: ;
    ecx = MEM32(ebp + -8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x766F6970);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004CB72Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CB72Bu); } /* indirect call */
    }

loc_004CB72E: ;
    ecx = MEM32(esi + 0x34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004CB73A; /* je: equal / zero */

loc_004CB735: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CB73Au); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004CB73A: ;
    ecx = MEM32(esi + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004CB746; /* je: equal / zero */

loc_004CB741: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CB746u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004CB746: ;
    ebx = MEM32(ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004CB753; /* je: equal / zero */

loc_004CB74C: ;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CB753u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004CB753: ;
    ecx = MEM32(esi + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004CB75F; /* je: equal / zero */

loc_004CB75A: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CB75Fu); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004CB75F: ;
    ecx = esi + 0x24;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CB767u); RECOMP_ABI_CALL(0x0060865Bu, sub_0060865B); /* call 0x0060865B */

loc_004CB767: ;
    ecx = esi + 0x20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CB76Fu); RECOMP_ABI_CALL(0x00607F23u, sub_00607F23); /* call 0x00607F23 */

loc_004CB76F: ;
    ecx = esi + 0x1C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CB777u); RECOMP_ABI_CALL(0x00607F50u, sub_00607F50); /* call 0x00607F50 */

loc_004CB777: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CB77Eu); RECOMP_ABI_CALL(0x00608112u, sub_00608112); /* call 0x00608112 */

loc_004CB77E: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CB785u); RECOMP_ABI_CALL(0x004C1837u, sub_004C1837); /* call 0x004C1837 */

loc_004CB785: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004CB78A
 * Original: 0x004CB78A - 0x004CB7AE (36 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CB78A(void)
{

loc_004CB78A: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x28);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x8C); PUSH32(esp, 0x004CB798u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CB792u); } /* indirect call */
    }

loc_004CB798: ;
    edx = MEM32(eax);
    ecx = esi + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x004CB7A3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CB7A0u); } /* indirect call */
    }

loc_004CB7A3: ;
    PUSH32(esp, eax);
    ecx = esi + 0x30;
    PUSH32(esp, 0x004CB7ACu); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004CB7AC: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004CB7AE
 * Original: 0x004CB7AE - 0x004CB7CB (29 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CB7AE(void)
{

loc_004CB7AE: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x28);
    eax = MEM32(ecx);
    edx = esi + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0xC0); PUSH32(esp, 0x004CB7C0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CB7BAu); } /* indirect call */
    }

loc_004CB7C0: ;
    PUSH32(esp, eax);
    ecx = esi + 0x2C;
    PUSH32(esp, 0x004CB7C9u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004CB7C9: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004CB7CB
 * Original: 0x004CB7CB - 0x004CB7FD (50 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CB7CB(void)
{

loc_004CB7CB: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x28);
    PUSH32(esp, 0x004CB7D7u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004CB7D7: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x004CB7DEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CB7DBu); } /* indirect call */
    }

loc_004CB7DE: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x004CB7E5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CB7E2u); } /* indirect call */
    }

loc_004CB7E5: ;
    edx = MEM32(eax);
    ecx = esi + 0x24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x004CB7F1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CB7EEu); } /* indirect call */
    }

loc_004CB7F1: ;
    PUSH32(esp, eax);
    ecx = esi + 0x34;
    PUSH32(esp, 0x004CB7FAu); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004CB7FA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004CB7FD
 * Original: 0x004CB7FD - 0x004CB805 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CB7FD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004CB7FD: ;
    ecx = MEM32(ecx + 0x34);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 4)); return; /* indirect tail jmp */

}

/**
 * sub_004CB805
 * Original: 0x004CB805 - 0x004CB826 (33 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CB805(void)
{

loc_004CB805: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esi + 0x10;
    PUSH32(esp, 0x004CB812u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004CB812: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x8678BC);
    ecx = esi + -36;
    PUSH32(esp, 0x004CB824u); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004CB824: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004CB826
 * Original: 0x004CB826 - 0x004CB857 (49 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CB826(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CB826: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esi + 0x10;
    PUSH32(esp, 0x004CB833u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004CB833: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), 1 (32-bit) */
    ecx = esi + -36;
    PUSH32(esp, 0x7B891F);
    if (CMP_NE(_fa, _fb)) goto loc_004CB849; /* jne: not equal / not zero */

loc_004CB842: ;
    PUSH32(esp, 0x8678EC);
    goto loc_004CB84E;

loc_004CB849: ;
    PUSH32(esp, 0x8678D4);

loc_004CB84E: ;
    PUSH32(esp, 0x004CB853u); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004CB853: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CB857
 * Original: 0x004CB857 - 0x004CB91C (197 bytes, 61 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004CB857(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CB857: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x867944);
    PUSH32(esp, 1);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CB86Cu); RECOMP_ABI_CALL(0x004C17F2u, sub_004C17F2); /* call 0x004C17F2 */

loc_004CB86C: ;
    ebx = esi + 0x18;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CB876u); RECOMP_ABI_CALL(0x00607FCEu, sub_00607FCE); /* call 0x00607FCE */

loc_004CB876: ;
    ecx = esi + 0x1C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CB87Eu); RECOMP_ABI_CALL(0x00607F74u, sub_00607F74); /* call 0x00607F74 */

loc_004CB87E: ;
    ecx = esi + 0x20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CB886u); RECOMP_ABI_CALL(0x00607FA1u, sub_00607FA1); /* call 0x00607FA1 */

loc_004CB886: ;
    edi = esi + 0x24;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CB890u); RECOMP_ABI_CALL(0x00608109u, sub_00608109); /* call 0x00608109 */

loc_004CB890: ;
    ecx = esi + 0x28;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CB898u); RECOMP_ABI_CALL(0x00608652u, sub_00608652); /* call 0x00608652 */

loc_004CB898: ;
    MEM32(ebx) = 0x867938;
    MEM32(esi) = 0x867934;
    MEM32(esi + 0x1C) = 0x867928;
    MEM32(esi + 0x20) = 0x86791C;
    MEM32(edi) = 0x867910;
    MEM32(esi + 0x28) = 0x867904;
    MEM8(esi + 0x2C) = 1;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi + 0x30;
    MEM32(ecx) = ebx;
    MEM32(esi + 0x34) = ebx;
    MEM32(esi + 0x38) = ebx;
    MEM32(esi + 0x3C) = ebx;
    MEM32(esi + 0x40) = ebx;
    PUSH32(esp, MEM32(0x90E474));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CB8E1u); RECOMP_ABI_CALL(0x004AFE27u, sub_004AFE27); /* call 0x004AFE27 */

loc_004CB8E1: ;
    PUSH32(esp, ebx);
    ecx = 0x90E474;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CB8ECu); RECOMP_ABI_CALL(0x004AFE27u, sub_004AFE27); /* call 0x004AFE27 */

loc_004CB8EC: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CB8F1u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004CB8F1: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x44); PUSH32(esp, 0x004CB8F8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CB8F5u); } /* indirect call */
    }

loc_004CB8F8: ;
    ebx = eax;
    eax = ebp + -4;
    PUSH32(esp, eax);
    ecx = ebx + 8;
    MEM32(ebp + -4) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CB909u); RECOMP_ABI_CALL(0x004DD750u, sub_004DD750); /* call 0x004DD750 */

loc_004CB909: ;
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x766F6970);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004CB915u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CB912u); } /* indirect call */
    }

loc_004CB915: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004CB91C
 * Original: 0x004CB91C - 0x004CB91F (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CB91C(void)
{

loc_004CB91C: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004CB91F
 * Original: 0x004CB91F - 0x004CB927 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CB91F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004CB91F: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004CE6B3(); return; /* tail jmp 0x004CE6B3 */

}

/**
 * sub_004CB927
 * Original: 0x004CB927 - 0x004CB92F (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CB927(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004CB927: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004CE6B3(); return; /* tail jmp 0x004CE6B3 */

}

/**
 * sub_004CB92F
 * Original: 0x004CB92F - 0x004CB937 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CB92F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004CB92F: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004CE6B3(); return; /* tail jmp 0x004CE6B3 */

}

/**
 * sub_004CB937
 * Original: 0x004CB937 - 0x004CB93F (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CB937(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004CB937: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x24;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004CE6B3(); return; /* tail jmp 0x004CE6B3 */

}

/**
 * sub_004CB93F
 * Original: 0x004CB93F - 0x004CB947 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CB93F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004CB93F: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x28;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004CE6B3(); return; /* tail jmp 0x004CE6B3 */

}

/**
 * sub_004CB947
 * Original: 0x004CB947 - 0x004CBA68 (289 bytes, 97 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004CB947(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CB947: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x24;
    MEM32(esi) = 0x867934;
    MEM32(esi + 0x18) = 0x867938;
    MEM32(esi + 0x1C) = 0x867928;
    MEM32(esi + 0x20) = 0x86791C;
    MEM32(edi) = 0x867910;
    MEM32(esi + 0x28) = 0x867904;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CB981u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004CB981: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x44); PUSH32(esp, 0x004CB988u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CB985u); } /* indirect call */
    }

loc_004CB988: ;
    MEM32(ebp + -8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CB990u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004CB990: ;
    edx = MEM32(eax);
    ecx = eax;
    MEM32(ebp + -4) = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x44); PUSH32(esp, 0x004CB99Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CB997u); } /* indirect call */
    }

loc_004CB99A: ;
    ecx = ebp + -4;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CB9A8u); RECOMP_ABI_CALL(0x004DD8B2u, sub_004DD8B2); /* call 0x004DD8B2 */

loc_004CB9A8: ;
    ebx = esi + 0x34;
    ecx = MEM32(ebx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004CB9BF; /* je: equal / zero */

loc_004CB9B1: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004CB9B6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CB9B3u); } /* indirect call */
    }

loc_004CB9B6: ;
    PUSH32(esp, 0);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CB9BFu); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004CB9BF: ;
    ecx = MEM32(esi + 0x38);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004CB9D5; /* je: equal / zero */

loc_004CB9C6: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004CB9CBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CB9C8u); } /* indirect call */
    }

loc_004CB9CB: ;
    PUSH32(esp, 0);
    ecx = esi + 0x38;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CB9D5u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004CB9D5: ;
    ecx = MEM32(esi + 0x40);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004CB9EB; /* je: equal / zero */

loc_004CB9DC: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004CB9E1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CB9DEu); } /* indirect call */
    }

loc_004CB9E1: ;
    PUSH32(esp, 0);
    ecx = esi + 0x40;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CB9EBu); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004CB9EB: ;
    ecx = MEM32(ebp + -8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x766F6970);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004CB9F8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CB9F5u); } /* indirect call */
    }

loc_004CB9F8: ;
    ecx = MEM32(esi + 0x40);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004CBA04; /* je: equal / zero */

loc_004CB9FF: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CBA04u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004CBA04: ;
    ecx = MEM32(esi + 0x3C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004CBA10; /* je: equal / zero */

loc_004CBA0B: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CBA10u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004CBA10: ;
    ecx = MEM32(esi + 0x38);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004CBA1C; /* je: equal / zero */

loc_004CBA17: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CBA1Cu); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004CBA1C: ;
    ebx = MEM32(ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004CBA29; /* je: equal / zero */

loc_004CBA22: ;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CBA29u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004CBA29: ;
    ecx = MEM32(esi + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004CBA35; /* je: equal / zero */

loc_004CBA30: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CBA35u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004CBA35: ;
    ecx = esi + 0x28;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CBA3Du); RECOMP_ABI_CALL(0x0060865Bu, sub_0060865B); /* call 0x0060865B */

loc_004CBA3D: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CBA44u); RECOMP_ABI_CALL(0x00608112u, sub_00608112); /* call 0x00608112 */

loc_004CBA44: ;
    ecx = esi + 0x20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CBA4Cu); RECOMP_ABI_CALL(0x00607FAAu, sub_00607FAA); /* call 0x00607FAA */

loc_004CBA4C: ;
    ecx = esi + 0x1C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CBA54u); RECOMP_ABI_CALL(0x00607F7Du, sub_00607F7D); /* call 0x00607F7D */

loc_004CBA54: ;
    ecx = esi + 0x18;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CBA5Cu); RECOMP_ABI_CALL(0x00607FD7u, sub_00607FD7); /* call 0x00607FD7 */

loc_004CBA5C: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CBA63u); RECOMP_ABI_CALL(0x004C1837u, sub_004C1837); /* call 0x004C1837 */

loc_004CBA63: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004CBA68
 * Original: 0x004CBA68 - 0x004CBA89 (33 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CBA68(void)
{

loc_004CBA68: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esi + 0x1C;
    PUSH32(esp, 0x004CBA75u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004CBA75: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x8666C0);
    ecx = esi + -24;
    PUSH32(esp, 0x004CBA87u); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004CBA87: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004CBA89
 * Original: 0x004CBA89 - 0x004CBAAC (35 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CBA89(void)
{

loc_004CBA89: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esi + 0x1C;
    PUSH32(esp, 0x004CBA96u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004CBA96: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x8666DC);
    ecx = esi + -24;
    PUSH32(esp, 0x004CBAA8u); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004CBAA8: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CBAAC
 * Original: 0x004CBAAC - 0x004CBACD (33 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CBAAC(void)
{

loc_004CBAAC: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esi + 0x1C;
    PUSH32(esp, 0x004CBAB9u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004CBAB9: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x866748);
    ecx = esi + -28;
    PUSH32(esp, 0x004CBACBu); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004CBACB: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004CBACD
 * Original: 0x004CBACD - 0x004CBAF0 (35 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CBACD(void)
{

loc_004CBACD: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esi + 0x1C;
    PUSH32(esp, 0x004CBADAu); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004CBADA: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x866768);
    ecx = esi + -28;
    PUSH32(esp, 0x004CBAECu); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004CBAEC: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CBAF0
 * Original: 0x004CBAF0 - 0x004CBB11 (33 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CBAF0(void)
{

loc_004CBAF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esi + 0x1C;
    PUSH32(esp, 0x004CBAFDu); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004CBAFD: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x8666F8);
    ecx = esi + -32;
    PUSH32(esp, 0x004CBB0Fu); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004CBB0F: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004CBB11
 * Original: 0x004CBB11 - 0x004CBB34 (35 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CBB11(void)
{

loc_004CBB11: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esi + 0x1C;
    PUSH32(esp, 0x004CBB1Eu); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004CBB1E: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x86672C);
    ecx = esi + -32;
    PUSH32(esp, 0x004CBB30u); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004CBB30: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CBB34
 * Original: 0x004CBB34 - 0x004CBB6F (59 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CBB34(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CBB34: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x30);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x80); PUSH32(esp, 0x004CBB42u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CBB3Cu); } /* indirect call */
    }

loc_004CBB42: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004CBB5C; /* je: equal / zero */

loc_004CBB46: ;
    edx = MEM32(eax);
    ecx = esi + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x004CBB51u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CBB4Eu); } /* indirect call */
    }

loc_004CBB51: ;
    PUSH32(esp, eax);
    ecx = esi + 0x34;
    PUSH32(esp, 0x004CBB5Au); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004CBB5A: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_004CBB5C: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x8667B4);
    ecx = esi;
    PUSH32(esp, 0x004CBB6Du); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004CBB6D: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004CBB6F
 * Original: 0x004CBB6F - 0x004CBBAC (61 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CBB6F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CBB6F: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x30);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x80); PUSH32(esp, 0x004CBB7Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CBB77u); } /* indirect call */
    }

loc_004CBB7D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004CBB99; /* je: equal / zero */

loc_004CBB81: ;
    edx = MEM32(eax);
    ecx = esi + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x004CBB8Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CBB8Bu); } /* indirect call */
    }

loc_004CBB8E: ;
    PUSH32(esp, eax);
    ecx = esi + 0x38;
    PUSH32(esp, 0x004CBB97u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004CBB97: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_004CBB99: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x8667B4);
    ecx = esi;
    PUSH32(esp, 0x004CBBAAu); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004CBBAA: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004CBBAC
 * Original: 0x004CBBAC - 0x004CBBE7 (59 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CBBAC(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CBBAC: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x30);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x80); PUSH32(esp, 0x004CBBBAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CBBB4u); } /* indirect call */
    }

loc_004CBBBA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004CBBD4; /* je: equal / zero */

loc_004CBBBE: ;
    edx = MEM32(eax);
    ecx = esi + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x004CBBC9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CBBC6u); } /* indirect call */
    }

loc_004CBBC9: ;
    PUSH32(esp, eax);
    ecx = esi + 0x3C;
    PUSH32(esp, 0x004CBBD2u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004CBBD2: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_004CBBD4: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x8667B4);
    ecx = esi;
    PUSH32(esp, 0x004CBBE5u); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004CBBE5: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004CBBE7
 * Original: 0x004CBBE7 - 0x004CBC2F (72 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CBBE7(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CBBE7: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004CBBF2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CBBF0u); } /* indirect call */
    }

loc_004CBBF2: ;
    ecx = MEM32(esi + 0xC);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x004CBBFDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CBBFAu); } /* indirect call */
    }

loc_004CBBFD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004CBC2B; /* je: equal / zero */

loc_004CBC01: ;
    eax = MEM32(esp + 0xC);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_004CBC19; /* je: equal / zero */

loc_004CBC08: ;
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_004CBC2B; /* jne: not equal / not zero */

loc_004CBC0D: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x8664A4);
    goto loc_004CBC23;

loc_004CBC19: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x8667B4);

loc_004CBC23: ;
    ecx = esi + -36;
    PUSH32(esp, 0x004CBC2Bu); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004CBC2B: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004CBC2F
 * Original: 0x004CBC2F - 0x004CBC37 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CBC2F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004CBC2F: ;
    ecx = MEM32(ecx + 0x30);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 4)); return; /* indirect tail jmp */

}

/**
 * sub_004CBC37
 * Original: 0x004CBC37 - 0x004CBC48 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CBC37(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CBC37: ;
    ecx = MEM32(ecx + 0x30);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xDC); PUSH32(esp, 0x004CBC42u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CBC3Cu); } /* indirect call */
    }

loc_004CBC42: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 4; return; /* ret */

}

/**
 * sub_004CBC48
 * Original: 0x004CBC48 - 0x004CBC57 (15 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CBC48(void)
{

loc_004CBC48: ;
    PUSH32(esp, MEM32(esp + 4));
    ecx = 0x90E474;
    PUSH32(esp, 0x004CBC56u); RECOMP_ABI_CALL(0x004AFE27u, sub_004AFE27); /* call 0x004AFE27 */

loc_004CBC56: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004CBC57
 * Original: 0x004CBC57 - 0x004CBC89 (50 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CBC57(void)
{

loc_004CBC57: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x004CBC60u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004CBC60: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x004CBC67u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CBC64u); } /* indirect call */
    }

loc_004CBC67: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x004CBC6Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CBC6Bu); } /* indirect call */
    }

loc_004CBC6E: ;
    ecx = MEM32(esi + 0x30);
    edx = MEM32(eax);
    edi = esi + 0x28;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x004CBC7Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CBC7Au); } /* indirect call */
    }

loc_004CBC7D: ;
    PUSH32(esp, eax);
    ecx = esi + 0x40;
    PUSH32(esp, 0x004CBC86u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004CBC86: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004CBC89
 * Original: 0x004CBC89 - 0x004CBC9F (22 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CBC89(void)
{

loc_004CBC89: ;
    PUSH32(esp, esi);
    esi = ecx + 0x40;
    ecx = MEM32(esi);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004CBC94u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CBC91u); } /* indirect call */
    }

loc_004CBC94: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x004CBC9Du); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004CBC9D: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004CBC9F
 * Original: 0x004CBC9F - 0x004CBCC0 (33 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CBC9F(void)
{

loc_004CBC9F: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esi + 0x18;
    PUSH32(esp, 0x004CBCACu); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004CBCAC: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x8678BC);
    ecx = esi + -40;
    PUSH32(esp, 0x004CBCBEu); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004CBCBE: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004CBCC0
 * Original: 0x004CBCC0 - 0x004CBCF1 (49 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CBCC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CBCC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esi + 0x18;
    PUSH32(esp, 0x004CBCCDu); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004CBCCD: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), 1 (32-bit) */
    ecx = esi + -40;
    PUSH32(esp, 0x7B891F);
    if (CMP_NE(_fa, _fb)) goto loc_004CBCE3; /* jne: not equal / not zero */

loc_004CBCDC: ;
    PUSH32(esp, 0x8678EC);
    goto loc_004CBCE8;

loc_004CBCE3: ;
    PUSH32(esp, 0x8678D4);

loc_004CBCE8: ;
    PUSH32(esp, 0x004CBCEDu); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004CBCED: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CBCF1
 * Original: 0x004CBCF1 - 0x004CBD0D (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CBCF1(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CBCF1: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004CBCF9u); RECOMP_ABI_CALL(0x004C1F23u, sub_004C1F23); /* call 0x004C1F23 */

loc_004CBCF9: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004CBD07; /* je: equal / zero */

loc_004CBD00: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004CBD06u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004CBD06: ;
    POP32(esp, ecx);

loc_004CBD07: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CBD0D
 * Original: 0x004CBD0D - 0x004CBD8E (129 bytes, 49 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004CBD0D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004CBD0D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x867980);
    PUSH32(esp, 1);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CBD23u); RECOMP_ABI_CALL(0x004C17F2u, sub_004C17F2); /* call 0x004C17F2 */

loc_004CBD23: ;
    edi = esi + 0x18;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CBD2Du); RECOMP_ABI_CALL(0x004DD91Fu, sub_004DD91F); /* call 0x004DD91F */

loc_004CBD2D: ;
    ebx = esi + 0x1C;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CBD37u); RECOMP_ABI_CALL(0x0060867Fu, sub_0060867F); /* call 0x0060867F */

loc_004CBD37: ;
    MEM32(esi) = 0x86797C;
    MEM32(edi) = 0x867974;
    MEM32(ebx) = 0x867968;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CBD4Eu); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004CBD4E: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x004CBD55u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CBD52u); } /* indirect call */
    }

loc_004CBD55: ;
    ecx = ebp + -4;
    PUSH32(esp, ecx);
    ecx = eax;
    MEM32(ebp + -8) = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -4) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CBD6Fu); RECOMP_ABI_CALL(0x004DD750u, sub_004DD750); /* call 0x004DD750 */

loc_004CBD6F: ;
    ecx = MEM32(ebp + -8);
    eax = ebp + -4;
    PUSH32(esp, eax);
    eax = ecx + 0x40;
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -4) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CBD87u); RECOMP_ABI_CALL(0x004DD750u, sub_004DD750); /* call 0x004DD750 */

loc_004CBD87: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004CBD8E
 * Original: 0x004CBD8E - 0x004CBD96 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CBD8E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004CBD8E: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004CE6CF(); return; /* tail jmp 0x004CE6CF */

}

/**
 * sub_004CBD96
 * Original: 0x004CBD96 - 0x004CBD9E (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CBD96(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004CBD96: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004CE6CF(); return; /* tail jmp 0x004CE6CF */

}

/**
 * sub_004CBD9E
 * Original: 0x004CBD9E - 0x004CBE18 (122 bytes, 47 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004CBD9E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004CBD9E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x18;
    ebx = esi + 0x1C;
    MEM32(esi) = 0x86797C;
    MEM32(edi) = 0x867974;
    MEM32(ebx) = 0x867968;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CBDC5u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004CBDC5: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x004CBDCCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CBDC9u); } /* indirect call */
    }

loc_004CBDCC: ;
    ecx = ebp + -4;
    PUSH32(esp, ecx);
    ecx = eax;
    MEM32(ebp + -8) = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -4) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CBDE6u); RECOMP_ABI_CALL(0x004DD8B2u, sub_004DD8B2); /* call 0x004DD8B2 */

loc_004CBDE6: ;
    ecx = MEM32(ebp + -8);
    eax = ebp + -4;
    PUSH32(esp, eax);
    eax = ecx + 0x40;
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -4) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CBDFEu); RECOMP_ABI_CALL(0x004DD8B2u, sub_004DD8B2); /* call 0x004DD8B2 */

loc_004CBDFE: ;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CBE05u); RECOMP_ABI_CALL(0x00608688u, sub_00608688); /* call 0x00608688 */

loc_004CBE05: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CBE0Cu); RECOMP_ABI_CALL(0x004DD928u, sub_004DD928); /* call 0x004DD928 */

loc_004CBE0C: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CBE13u); RECOMP_ABI_CALL(0x004C1837u, sub_004C1837); /* call 0x004C1837 */

loc_004CBE13: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004CBE18
 * Original: 0x004CBE18 - 0x004CBE4F (55 bytes, 17 insns)
 * Category: game_io
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CBE18(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CBE18: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x8679B0);
    PUSH32(esp, MEM32(esp + 0x10));
    esi = ecx;
    PUSH32(esp, 0x004CBE2Au); RECOMP_ABI_CALL(0x004C17F2u, sub_004C17F2); /* call 0x004C17F2 */

loc_004CBE2A: ;
    edi = esi + 0x18;
    ecx = edi;
    PUSH32(esp, 0x004CBE34u); RECOMP_ABI_CALL(0x004AD997u, sub_004AD997); /* call 0x004AD997 */

loc_004CBE34: ;
    MEM32(esi) = 0x8679AC;
    MEM32(edi) = 0x86799C;
    MEM32(esi + 0x20) = MEM32(esi + 0x20) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x24) = MEM32(esi + 0x24) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CBE4F
 * Original: 0x004CBE4F - 0x004CBE52 (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CBE4F(void)
{

loc_004CBE4F: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_004CBE52
 * Original: 0x004CBE52 - 0x004CBE5A (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CBE52(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004CBE52: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004CE6EB(); return; /* tail jmp 0x004CE6EB */

}

/**
 * sub_004CBE5A
 * Original: 0x004CBE5A - 0x004CBEAD (83 bytes, 31 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CBE5A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004CBE5A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x24;
    ecx = MEM32(edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    ebx = esi + 0x18;
    MEM32(esi) = 0x8679AC;
    MEM32(ebx) = 0x86799C;
    if (CMP_EQ(_fa, _fb)) goto loc_004CBE85; /* je: equal / zero */

loc_004CBE77: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004CBE7Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CBE79u); } /* indirect call */
    }

loc_004CBE7C: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x004CBE85u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004CBE85: ;
    ecx = MEM32(edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004CBE90; /* je: equal / zero */

loc_004CBE8B: ;
    PUSH32(esp, 0x004CBE90u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004CBE90: ;
    ecx = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004CBE9C; /* je: equal / zero */

loc_004CBE97: ;
    PUSH32(esp, 0x004CBE9Cu); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004CBE9C: ;
    ecx = ebx;
    PUSH32(esp, 0x004CBEA3u); RECOMP_ABI_CALL(0x004AD9A0u, sub_004AD9A0); /* call 0x004AD9A0 */

loc_004CBEA3: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_004C1837(); return; /* tail jmp 0x004C1837 */

}

/**
 * sub_004CBEAD
 * Original: 0x004CBEAD - 0x004CBF14 (103 bytes, 47 insns)
 * Category: game_io
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CBEAD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004CBEAD: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esi + 0x1C) = ebx;
    PUSH32(esp, 0x004CBEBFu); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004CBEBF: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x004CBEC6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CBEC3u); } /* indirect call */
    }

loc_004CBEC6: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    edi = eax;
    eax = MEM32(edi);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x004CBED4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CBED1u); } /* indirect call */
    }

loc_004CBED4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004CBEF3; /* jne: not equal / not zero */

loc_004CBED8: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ecx = esi + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004CBEE8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CBEE5u); } /* indirect call */
    }

loc_004CBEE8: ;
    PUSH32(esp, eax);
    ecx = esi + 0x24;
    PUSH32(esp, 0x004CBEF1u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004CBEF1: ;
    goto loc_004CBF0D;

loc_004CBEF3: ;
    PUSH32(esp, eax);
    ecx = esi + 0x20;
    PUSH32(esp, 0x004CBEFCu); RECOMP_ABI_CALL(0x00019237u, sub_00019237); /* call 0x00019237 */

loc_004CBEFC: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x8679CC);
    ecx = esi;
    PUSH32(esp, 0x004CBF0Du); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004CBF0D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CBF14
 * Original: 0x004CBF14 - 0x004CBF24 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CBF14(void)
{

loc_004CBF14: ;
    eax = ecx;
    ecx = MEM32(eax + 0x20);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(eax + 0x1C));
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x004CBF23u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CBF20u); } /* indirect call */
    }

loc_004CBF23: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004CBF24
 * Original: 0x004CBF24 - 0x004CBF53 (47 bytes, 14 insns)
 * Category: game_io
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CBF24(void)
{

loc_004CBF24: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esi + 0xC;
    PUSH32(esp, 0x004CBF31u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004CBF31: ;
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = esi + 8;
    PUSH32(esp, 0x004CBF3Du); RECOMP_ABI_CALL(0x00019237u, sub_00019237); /* call 0x00019237 */

loc_004CBF3D: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x8679CC);
    ecx = esi + -24;
    PUSH32(esp, 0x004CBF4Fu); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004CBF4F: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004CBF53
 * Original: 0x004CBF53 - 0x004CBF80 (45 bytes, 14 insns)
 * Category: game_io
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CBF53(void)
{

loc_004CBF53: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esi + 8;
    PUSH32(esp, 0x004CBF60u); RECOMP_ABI_CALL(0x00019237u, sub_00019237); /* call 0x00019237 */

loc_004CBF60: ;
    PUSH32(esp, 0);
    ecx = esi + 0xC;
    PUSH32(esp, 0x004CBF6Au); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004CBF6A: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x866F50);
    ecx = esi + -24;
    PUSH32(esp, 0x004CBF7Cu); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004CBF7C: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004CBF80
 * Original: 0x004CBF80 - 0x004CBFA2 (34 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CBF80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CBF80: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x865FD8;
    PUSH32(esp, 0x004CBF8Eu); RECOMP_ABI_CALL(0x004C1837u, sub_004C1837); /* call 0x004C1837 */

loc_004CBF8E: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004CBF9C; /* je: equal / zero */

loc_004CBF95: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004CBF9Bu); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004CBF9B: ;
    POP32(esp, ecx);

loc_004CBF9C: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CBFA2
 * Original: 0x004CBFA2 - 0x004CC080 (222 bytes, 82 insns)
 * Category: game_ui
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004CBFA2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CBFA2: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8E19F0);
    ecx = MEM32(0x90E420);
    PUSH32(esp, ebx);
    MEM32(ebp + -4) = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004CBFBDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CBFBAu); } /* indirect call */
    }

loc_004CBFBD: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 8));
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x004CBFC7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CBFC4u); } /* indirect call */
    }

loc_004CBFC7: ;
    ebx = eax;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004CC072; /* je: equal / zero */

loc_004CBFD5: ;
    eax = MEM32(ebx + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004CC072; /* jne: not equal / not zero */

loc_004CBFE0: ;
    PUSH32(esp, 0x865B84);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CBFEDu); RECOMP_ABI_CALL(0x005CFF90u, sub_005CFF90); /* call 0x005CFF90 */

loc_004CBFED: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_004CC06F; /* jne: not equal / not zero */

loc_004CBFF3: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CBFF9u); RECOMP_ABI_CALL(0x004DC9EFu, sub_004DC9EF); /* call 0x004DC9EF */

loc_004CBFF9: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x004CC001u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CBFFEu); } /* indirect call */
    }

loc_004CC001: ;
    esi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CC008u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004CC008: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x004CC00Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CC00Cu); } /* indirect call */
    }

loc_004CC00F: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x004CC017u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CC014u); } /* indirect call */
    }

loc_004CC017: ;
    ecx = ebp + -40;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CC01Fu); RECOMP_ABI_CALL(0x004C63DBu, sub_004C63DB); /* call 0x004C63DB */

loc_004CC01F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(ebp + -40) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_004CC06E; /* jbe: below or equal (unsigned <=) */

loc_004CC026: ;
    esi = 0x3E8;
    MEM32(ebp + 8) = esi;

loc_004CC02E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x7E0D78);
    eax = ebp + -36;
    PUSH32(esp, 0x20);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CC03Fu); RECOMP_ABI_CALL(0x004E3665u, sub_004E3665); /* call 0x004E3665 */

loc_004CC03F: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x865BA0);
    PUSH32(esp, edi);
    ecx = ebp + -40;
    MEM8(ebp + -5) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CC054u); RECOMP_ABI_CALL(0x004C63F2u, sub_004C63F2); /* call 0x004C63F2 */

loc_004CC054: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 8));
    eax = ebp + -36;
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CC065u); RECOMP_ABI_CALL(0x004C380Cu, sub_004C380C); /* call 0x004C380C */

loc_004CC065: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 8) = MEM32(ebp + 8) + esi;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebp + -40) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004CC02E; /* jb: below (unsigned <) */

loc_004CC06E: ;
    POP32(esp, esi);

loc_004CC06F: ;
    eax = MEM32(ebx + 0x20);

loc_004CC072: ;
    ecx = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CC07Cu); RECOMP_ABI_CALL(0x005CFF80u, sub_005CFF80); /* call 0x005CFF80 */

loc_004CC07C: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CC080
 * Original: 0x004CC080 - 0x004CC110 (144 bytes, 62 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004CC080(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CC080: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    ecx = MEM32(0x90E420);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004CC08Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CC08Bu); } /* indirect call */
    }

loc_004CC08E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 8));
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x004CC098u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CC095u); } /* indirect call */
    }

loc_004CC098: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004CC0B1; /* je: equal / zero */

loc_004CC09E: ;
    edx = MEM32(ebp + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax + 0x20) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_004CC0B1; /* jae: above or equal (unsigned >=) */

loc_004CC0A6: ;
    PUSH32(esp, edx);
    ecx = eax + 0x14;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CC0AFu); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004CC0AF: ;
    ecx = eax;

loc_004CC0B1: ;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edx = 0x7B891F;
    if (CMP_EQ(_fa, _fb)) goto loc_004CC0CB; /* je: equal / zero */

loc_004CC0BE: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004CC0C7; /* je: equal / zero */

loc_004CC0C2: ;
    eax = MEM32(ecx + 8);
    goto loc_004CC0C9;

loc_004CC0C7: ;
    eax = edx;

loc_004CC0C9: ;
    MEM32(esi) = eax;

loc_004CC0CB: ;
    esi = MEM32(ebp + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004CC0DF; /* je: equal / zero */

loc_004CC0D2: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004CC0DB; /* je: equal / zero */

loc_004CC0D6: ;
    eax = MEM32(ecx + 0x10);
    goto loc_004CC0DD;

loc_004CC0DB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004CC0DD: ;
    MEM32(esi) = eax;

loc_004CC0DF: ;
    esi = MEM32(ebp + 0x18);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004CC0F5; /* je: equal / zero */

loc_004CC0E6: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004CC0F1; /* je: equal / zero */

loc_004CC0EA: ;
    eax = MEM32(ecx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004CC0F3; /* jne: not equal / not zero */

loc_004CC0F1: ;
    eax = edx;

loc_004CC0F3: ;
    MEM32(esi) = eax;

loc_004CC0F5: ;
    eax = MEM32(ebp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_004CC10C; /* je: equal / zero */

loc_004CC0FD: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004CC108; /* je: equal / zero */

loc_004CC101: ;
    ecx = MEM32(ecx + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004CC10A; /* jne: not equal / not zero */

loc_004CC108: ;
    ecx = edx;

loc_004CC10A: ;
    MEM32(eax) = ecx;

loc_004CC10C: ;
    POP32(esp, ebp);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_004CC110
 * Original: 0x004CC110 - 0x004CC135 (37 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CC110(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CC110: ;
    ecx = MEM32(0x90E420);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004CC11Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CC118u); } /* indirect call */
    }

loc_004CC11B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 4));
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x004CC126u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CC123u); } /* indirect call */
    }

loc_004CC126: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004CC130; /* je: equal / zero */

loc_004CC12D: ;
    ecx = MEM32(eax + 0x28);

loc_004CC130: ;
    eax = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CC135
 * Original: 0x004CC135 - 0x004CC18B (86 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004CC135(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CC135: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    ecx = MEM32(0x90E420);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004CC143u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CC140u); } /* indirect call */
    }

loc_004CC143: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 8));
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x004CC14Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CC14Au); } /* indirect call */
    }

loc_004CC14D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004CC185; /* je: equal / zero */

loc_004CC151: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = eax + 0x1C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CC15Cu); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004CC15C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004CC185; /* je: equal / zero */

loc_004CC160: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004CC16C; /* jne: not equal / not zero */

loc_004CC167: ;
    eax = 0x7B891F;

loc_004CC16C: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x10));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CC178u); RECOMP_ABI_CALL(0x004E367Fu, sub_004E367F); /* call 0x004E367F */

loc_004CC178: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CC180u); RECOMP_ABI_CALL(0x005D0020u, sub_005D0020); /* call 0x005D0020 */

loc_004CC180: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_004CC187;

loc_004CC185: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004CC187: ;
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_004CC18B
 * Original: 0x004CC18B - 0x004CC1C2 (55 bytes, 21 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CC18B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CC18B: ;
    ecx = MEM32(0x90E420);
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004CC197u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CC194u); } /* indirect call */
    }

loc_004CC197: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 8));
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x004CC1A2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CC19Fu); } /* indirect call */
    }

loc_004CC1A2: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004CC1BC; /* je: equal / zero */

loc_004CC1A9: ;
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = eax + 0x1C;
    PUSH32(esp, 0x004CC1B5u); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004CC1B5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004CC1BC; /* je: equal / zero */

loc_004CC1B9: ;
    esi = MEM32(eax + 0x20);

loc_004CC1BC: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004CC1C2
 * Original: 0x004CC1C2 - 0x004CC202 (64 bytes, 23 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CC1C2(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CC1C2: ;
    ecx = MEM32(0x90E420);
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004CC1CEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CC1CBu); } /* indirect call */
    }

loc_004CC1CE: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 8));
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x004CC1D9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CC1D6u); } /* indirect call */
    }

loc_004CC1D9: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004CC1FC; /* je: equal / zero */

loc_004CC1DF: ;
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = eax + 0x1C;
    PUSH32(esp, 0x004CC1EBu); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004CC1EB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004CC1FC; /* je: equal / zero */

loc_004CC1EF: ;
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = eax;
    PUSH32(esp, 0x004CC1FAu); RECOMP_ABI_CALL(0x004C3E07u, sub_004C3E07); /* call 0x004C3E07 */

loc_004CC1FA: ;
    esi = eax;

loc_004CC1FC: ;
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004CC202
 * Original: 0x004CC202 - 0x004CC238 (54 bytes, 20 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CC202(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CC202: ;
    ecx = MEM32(0x90E420);
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004CC20Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CC20Bu); } /* indirect call */
    }

loc_004CC20E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 8));
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x004CC219u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CC216u); } /* indirect call */
    }

loc_004CC219: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004CC232; /* je: equal / zero */

loc_004CC21F: ;
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = eax + 0x1C;
    PUSH32(esp, 0x004CC22Bu); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004CC22B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004CC232; /* je: equal / zero */

loc_004CC22F: ;
    esi = MEM32(eax + 0x34);

loc_004CC232: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004CC238
 * Original: 0x004CC238 - 0x004CC2B4 (124 bytes, 51 insns)
 * Category: game_vtable
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004CC238(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CC238: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    ecx = MEM32(0x90E420);
    eax = MEM32(ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004CC249u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CC246u); } /* indirect call */
    }

loc_004CC249: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 8));
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x004CC253u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CC250u); } /* indirect call */
    }

loc_004CC253: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004CC274; /* je: equal / zero */

loc_004CC259: ;
    edi = MEM32(esi + 0x28);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004CC274; /* jbe: below or equal (unsigned <=) */

loc_004CC262: ;
    PUSH32(esp, ebx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CC26Au); RECOMP_ABI_CALL(0x004C3C41u, sub_004C3C41); /* call 0x004C3C41 */

loc_004CC26A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0xC) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004CC29B; /* je: equal / zero */

loc_004CC26F: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004CC262; /* jb: below (unsigned <) */

loc_004CC274: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    esi = MEM32(ebp + 0x14);
    edi = MEM32(ebp + 0x10);
    PUSH32(esp, 0x7E0D78);
    eax = esi + -1;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CC28Cu); RECOMP_ABI_CALL(0x004E3665u, sub_004E3665); /* call 0x004E3665 */

loc_004CC28C: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(edi + esi + -1) = 0;

loc_004CC294: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

loc_004CC29B: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    ecx = esi;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CC2A6u); RECOMP_ABI_CALL(0x004C3C53u, sub_004C3C53); /* call 0x004C3C53 */

loc_004CC2A6: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x10));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CC2AFu); RECOMP_ABI_CALL(0x004E367Fu, sub_004E367F); /* call 0x004E367F */

loc_004CC2AF: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_004CC294;

}

/**
 * sub_004CC2FC
 * Original: 0x004CC2FC - 0x004CC318 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CC2FC(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CC2FC: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004CC304u); RECOMP_ABI_CALL(0x004C306Eu, sub_004C306E); /* call 0x004C306E */

loc_004CC304: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004CC312; /* je: equal / zero */

loc_004CC30B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004CC311u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004CC311: ;
    POP32(esp, ecx);

loc_004CC312: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CC318
 * Original: 0x004CC318 - 0x004CC334 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CC318(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CC318: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004CC320u); RECOMP_ABI_CALL(0x004C3092u, sub_004C3092); /* call 0x004C3092 */

loc_004CC320: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004CC32E; /* je: equal / zero */

loc_004CC327: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004CC32Du); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004CC32D: ;
    POP32(esp, ecx);

loc_004CC32E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CC334
 * Original: 0x004CC334 - 0x004CC350 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CC334(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CC334: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004CC33Cu); RECOMP_ABI_CALL(0x004C30B6u, sub_004C30B6); /* call 0x004C30B6 */

loc_004CC33C: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004CC34A; /* je: equal / zero */

loc_004CC343: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004CC349u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004CC349: ;
    POP32(esp, ecx);

loc_004CC34A: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CC350
 * Original: 0x004CC350 - 0x004CC36C (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CC350(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CC350: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004CC358u); RECOMP_ABI_CALL(0x004C30DAu, sub_004C30DA); /* call 0x004C30DA */

loc_004CC358: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004CC366; /* je: equal / zero */

loc_004CC35F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004CC365u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004CC365: ;
    POP32(esp, ecx);

loc_004CC366: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CC36C
 * Original: 0x004CC36C - 0x004CC388 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CC36C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CC36C: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004CC374u); RECOMP_ABI_CALL(0x004C30FEu, sub_004C30FE); /* call 0x004C30FE */

loc_004CC374: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004CC382; /* je: equal / zero */

loc_004CC37B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004CC381u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004CC381: ;
    POP32(esp, ecx);

loc_004CC382: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CC388
 * Original: 0x004CC388 - 0x004CC3A4 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CC388(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CC388: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004CC390u); RECOMP_ABI_CALL(0x004C3122u, sub_004C3122); /* call 0x004C3122 */

loc_004CC390: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004CC39E; /* je: equal / zero */

loc_004CC397: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004CC39Du); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004CC39D: ;
    POP32(esp, ecx);

loc_004CC39E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CC3A4
 * Original: 0x004CC3A4 - 0x004CC3C0 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CC3A4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CC3A4: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004CC3ACu); RECOMP_ABI_CALL(0x004C3146u, sub_004C3146); /* call 0x004C3146 */

loc_004CC3AC: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004CC3BA; /* je: equal / zero */

loc_004CC3B3: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004CC3B9u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004CC3B9: ;
    POP32(esp, ecx);

loc_004CC3BA: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CC3C0
 * Original: 0x004CC3C0 - 0x004CC3DC (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CC3C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CC3C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004CC3C8u); RECOMP_ABI_CALL(0x004C316Au, sub_004C316A); /* call 0x004C316A */

loc_004CC3C8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004CC3D6; /* je: equal / zero */

loc_004CC3CF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004CC3D5u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004CC3D5: ;
    POP32(esp, ecx);

loc_004CC3D6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CC3DC
 * Original: 0x004CC3DC - 0x004CC3F8 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CC3DC(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CC3DC: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004CC3E4u); RECOMP_ABI_CALL(0x004C318Eu, sub_004C318E); /* call 0x004C318E */

loc_004CC3E4: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004CC3F2; /* je: equal / zero */

loc_004CC3EB: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004CC3F1u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004CC3F1: ;
    POP32(esp, ecx);

loc_004CC3F2: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CC3F8
 * Original: 0x004CC3F8 - 0x004CC4D7 (223 bytes, 86 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004CC3F8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CC3F8: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 8));
    edi = esi + 0x14;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CC410u); RECOMP_ABI_CALL(0x004C325Eu, sub_004C325E); /* call 0x004C325E */

loc_004CC410: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004CC425; /* jbe: below or equal (unsigned <=) */

loc_004CC419: ;
    ecx = MEM32(esi + 8);
    MEM32(ecx + eax * 4) = eax;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0xC) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004CC419; /* jb: below (unsigned <) */

loc_004CC425: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004CC4D0; /* je: equal / zero */

loc_004CC42D: ;
    eax = MEM32(esi + 0xC);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_004CC4D0; /* je: equal / zero */

loc_004CC437: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -12) = edi;

loc_004CC43D: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(ebx + eax);
    eax = MEM32(esi + 0x10);
    PUSH32(esp, ecx);
    ecx = eax + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CC44Fu); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004CC44F: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0xC) (32-bit) */
    MEM32(ebp + -8) = eax;
    MEM32(ebp + -4) = edi;
    if (CMP_AE(_fa, _fb)) goto loc_004CC4B7; /* jae: above or equal (unsigned >=) */

loc_004CC45A: ;
    edi = MEM32(ebp + -4);
    eax = MEM32(esi + 8);
    { uint32_t _sv=(uint32_t)(edi), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        edi = _sv << _sc;
        _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = MEM32(edi + eax);
    eax = MEM32(esi + 0x10);
    PUSH32(esp, ecx);
    ecx = eax + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CC472u); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004CC472: ;
    ecx = MEM32(ebp + 8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -8));
    MEM32(ebp + -16) = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004CC481u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CC47Eu); } /* indirect call */
    }

loc_004CC481: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_004CC4AC; /* jle: less or equal (signed <=) */

loc_004CC485: ;
    eax = MEM32(ebp + -16);
    MEM32(ebp + -8) = eax;
    eax = MEM32(esi + 8);
    ecx = ebx + eax;
    eax = MEM32(eax + edi);
    MEM32(ecx) = MEM32(ecx) ^ eax;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = MEM32(esi + 8);
    ecx = eax + edi;
    eax = MEM32(ebx + eax);
    MEM32(ecx) = MEM32(ecx) ^ eax;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = MEM32(esi + 8);
    ecx = ebx + eax;
    eax = MEM32(eax + edi);
    MEM32(ecx) = MEM32(ecx) ^ eax;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004CC4AC: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0xC) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004CC45A; /* jb: below (unsigned <) */

loc_004CC4B7: ;
    edi = MEM32(ebp + -12);
    ecx = MEM32(esi + 0xC);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edi + -1;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(ebp + -12) = edi;
    if (CMP_B(_fa, _fb)) goto loc_004CC43D; /* jb: below (unsigned <) */

loc_004CC4D0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CC4D7
 * Original: 0x004CC4D7 - 0x004CC4DF (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CC4D7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004CC4D7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004C9A51(); return; /* tail jmp 0x004C9A51 */

}

/**
 * sub_004CC4DF
 * Original: 0x004CC4DF - 0x004CC4E7 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CC4DF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004CC4DF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004C9A27(); return; /* tail jmp 0x004C9A27 */

}

/**
 * sub_004CC4E7
 * Original: 0x004CC4E7 - 0x004CC60F (296 bytes, 102 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004CC4E7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CC4E7: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(esi + 0x1C)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x1C), LO8(ebx) (8-bit) */
    edi = esi + 8;
    MEM32(esi) = 0x8679F8;
    MEM32(esi + 4) = 0x8679EC;
    MEM32(edi) = 0x8679E4;
    if (CMP_EQ(_fa, _fb)) goto loc_004CC546; /* je: equal / zero */

loc_004CC50D: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CC512u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004CC512: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x004CC519u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CC516u); } /* indirect call */
    }

loc_004CC519: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004CC543; /* je: equal / zero */

loc_004CC51D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(0x8631BC));
    edx = MEM32(eax);
    PUSH32(esp, MEM32(0x86319C));
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x004CC530u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CC52Du); } /* indirect call */
    }

loc_004CC530: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004CC543; /* je: equal / zero */

loc_004CC534: ;
    ecx = ebp + -4;
    PUSH32(esp, ecx);
    ecx = eax + 8;
    MEM32(ebp + -4) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CC543u); RECOMP_ABI_CALL(0x004DD8B2u, sub_004DD8B2); /* call 0x004DD8B2 */

loc_004CC543: ;
    MEM8(esi + 0x1C) = LO8(ebx);

loc_004CC546: ;
    ecx = MEM32(esi + 0x14);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CC54Eu); RECOMP_ABI_CALL(0x004C0BB4u, sub_004C0BB4); /* call 0x004C0BB4 */

loc_004CC54E: ;
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004CC55B; /* je: equal / zero */

loc_004CC555: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004CC55Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CC559u); } /* indirect call */
    }

loc_004CC55B: ;
    ecx = MEM32(esi + 0x10);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CC563u); RECOMP_ABI_CALL(0x004C07D5u, sub_004C07D5); /* call 0x004C07D5 */

loc_004CC563: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004CC570; /* je: equal / zero */

loc_004CC56A: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004CC570u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CC56Eu); } /* indirect call */
    }

loc_004CC570: ;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004CC57D; /* je: equal / zero */

loc_004CC577: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004CC57Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CC57Bu); } /* indirect call */
    }

loc_004CC57D: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CC582u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004CC582: ;
    edx = MEM32(eax);
    ecx = esi + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004CC58Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CC58Au); } /* indirect call */
    }

loc_004CC58D: ;
    PUSH32(esp, ebx);
    ecx = 0x90E444;
    MEM32(0x90E420) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CC59Eu); RECOMP_ABI_CALL(0x004AFE27u, sub_004AFE27); /* call 0x004AFE27 */

loc_004CC59E: ;
    PUSH32(esp, ebx);
    ecx = 0x90E468;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CC5A9u); RECOMP_ABI_CALL(0x004AFE27u, sub_004AFE27); /* call 0x004AFE27 */

loc_004CC5A9: ;
    PUSH32(esp, ebx);
    ecx = 0x90E44C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CC5B4u); RECOMP_ABI_CALL(0x004AFE27u, sub_004AFE27); /* call 0x004AFE27 */

loc_004CC5B4: ;
    PUSH32(esp, ebx);
    ecx = 0x90E454;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CC5BFu); RECOMP_ABI_CALL(0x004AFE27u, sub_004AFE27); /* call 0x004AFE27 */

loc_004CC5BF: ;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CC5C5u); RECOMP_ABI_CALL(0x004C5DAFu, sub_004C5DAF); /* call 0x004C5DAF */

loc_004CC5C5: ;
    POP32(esp, ecx);
    PUSH32(esp, ebx);
    ecx = 0x90E438;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CC5D1u); RECOMP_ABI_CALL(0x004AFE27u, sub_004AFE27); /* call 0x004AFE27 */

loc_004CC5D1: ;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CC5D7u); RECOMP_ABI_CALL(0x004CA8EFu, sub_004CA8EF); /* call 0x004CA8EF */

loc_004CC5D7: ;
    POP32(esp, ecx);
    PUSH32(esp, ebx);
    ecx = 0x90E43C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CC5E3u); RECOMP_ABI_CALL(0x004AFE27u, sub_004AFE27); /* call 0x004AFE27 */

loc_004CC5E3: ;
    PUSH32(esp, ebx);
    ecx = 0x90E460;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CC5EEu); RECOMP_ABI_CALL(0x004AFE27u, sub_004AFE27); /* call 0x004AFE27 */

loc_004CC5EE: ;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CC5F4u); RECOMP_ABI_CALL(0x004CBC48u, sub_004CBC48); /* call 0x004CBC48 */

loc_004CC5F4: ;
    POP32(esp, ecx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CC5FCu); RECOMP_ABI_CALL(0x004AD973u, sub_004AD973); /* call 0x004AD973 */

loc_004CC5FC: ;
    ecx = esi + 4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CC604u); RECOMP_ABI_CALL(0x004DCA2Fu, sub_004DCA2F); /* call 0x004DCA2F */

loc_004CC604: ;
    POP32(esp, edi);
    MEM32(esi) = 0x865C4C;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004CC60F
 * Original: 0x004CC60F - 0x004CC613 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CC60F(void)
{

loc_004CC60F: ;
    eax = MEM32(ecx + 0xC);
    esp += 4; return; /* ret */

}

/**
 * sub_004CC613
 * Original: 0x004CC613 - 0x004CC617 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CC613(void)
{

loc_004CC613: ;
    eax = MEM32(ecx + 0x10);
    esp += 4; return; /* ret */

}

/**
 * sub_004CC617
 * Original: 0x004CC617 - 0x004CC61B (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CC617(void)
{

loc_004CC617: ;
    eax = MEM32(ecx + 0x14);
    esp += 4; return; /* ret */

}

/**
 * sub_004CC61B
 * Original: 0x004CC61B - 0x004CC623 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CC61B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004CC61B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004CE898(); return; /* tail jmp 0x004CE898 */

}

/**
 * sub_004CC623
 * Original: 0x004CC623 - 0x004CC62B (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CC623(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004CC623: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004CE898(); return; /* tail jmp 0x004CE898 */

}

/**
 * sub_004CC62B
 * Original: 0x004CC62B - 0x004CC67A (79 bytes, 30 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CC62B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CC62B: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x004CC634u); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_004CC634: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = 0x865CF8;
    MEM32(esi + 8) = edi;
    MEM32(esi + 0xC) = edi;
    MEM32(esi + 0x10) = edi;
    MEM32(esi + 0x14) = edi;
    PUSH32(esp, 0x004CC64Du); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004CC64D: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 8);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x004CC658u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CC656u); } /* indirect call */
    }

loc_004CC658: ;
    ecx = eax;
    MEM32(esi + 0x14) = eax;
    PUSH32(esp, 0x004CC662u); RECOMP_ABI_CALL(0x004C03C6u, sub_004C03C6); /* call 0x004C03C6 */

loc_004CC662: ;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xC), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004CC673; /* je: equal / zero */

loc_004CC668: ;
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = esi;
    PUSH32(esp, 0x004CC673u); RECOMP_ABI_CALL(0x004C34ADu, sub_004C34AD); /* call 0x004C34AD */

loc_004CC673: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CC67A
 * Original: 0x004CC67A - 0x004CC696 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CC67A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CC67A: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004CC682u); RECOMP_ABI_CALL(0x004C3550u, sub_004C3550); /* call 0x004C3550 */

loc_004CC682: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004CC690; /* je: equal / zero */

loc_004CC689: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004CC68Fu); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004CC68F: ;
    POP32(esp, ecx);

loc_004CC690: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CC696
 * Original: 0x004CC696 - 0x004CCAAB (1045 bytes, 333 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CC696(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004CC696: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x7B891F);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x865C04);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004CC6AEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CC6ABu); } /* indirect call */
    }

loc_004CC6AE: ;
    eax = MEM32(esi);
    PUSH32(esp, 0x867C10);
    PUSH32(esp, 2);
    POP32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0x865BF4);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004CC6C3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CC6C0u); } /* indirect call */
    }

loc_004CC6C3: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x867C00);
    PUSH32(esp, edi);
    PUSH32(esp, 0x865BE4);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004CC6D5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CC6D2u); } /* indirect call */
    }

loc_004CC6D5: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x867BF4);
    PUSH32(esp, 1);
    PUSH32(esp, 0x865BC4);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004CC6E8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CC6E5u); } /* indirect call */
    }

loc_004CC6E8: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x867BE4);
    PUSH32(esp, 1);
    PUSH32(esp, 0x865BA0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004CC6FBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CC6F8u); } /* indirect call */
    }

loc_004CC6FB: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x867BD8);
    PUSH32(esp, 3);
    PUSH32(esp, 0x865B94);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004CC70Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CC70Bu); } /* indirect call */
    }

loc_004CC70E: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x867BCC);
    PUSH32(esp, 1);
    PUSH32(esp, 0x865B60);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004CC721u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CC71Eu); } /* indirect call */
    }

loc_004CC721: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x867BC0);
    PUSH32(esp, edi);
    ebx = 0x865B54;
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004CC734u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CC731u); } /* indirect call */
    }

loc_004CC734: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x867BA8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x865B14);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004CC746u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CC743u); } /* indirect call */
    }

loc_004CC746: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x867B94);
    PUSH32(esp, edi);
    PUSH32(esp, 0x865AFC);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004CC758u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CC755u); } /* indirect call */
    }

loc_004CC758: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x867B80);
    PUSH32(esp, edi);
    PUSH32(esp, 0x865AE4);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004CC76Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CC767u); } /* indirect call */
    }

loc_004CC76A: ;
    ecx = MEM32(0x90E424);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x004CC775u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CC772u); } /* indirect call */
    }

loc_004CC775: ;
    ebp = MEM32(esi);
    edi = eax;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x865C18);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004CC787u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CC784u); } /* indirect call */
    }

loc_004CC787: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x865C18);
    ecx = esi;
    { uint32_t _icall_target = MEM32(ebp + 4); PUSH32(esp, 0x004CC792u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CC78Fu); } /* indirect call */
    }

loc_004CC792: ;
    ebp = eax;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004CC79Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CC799u); } /* indirect call */
    }

loc_004CC79C: ;
    PUSH32(esp, 0x865BF4);
    PUSH32(esp, 0x867B70);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E8);
    PUSH32(esp, 0x830048);
    ecx = ebp;
    PUSH32(esp, 0x004CC7B9u); RECOMP_ABI_CALL(0x004C380Cu, sub_004C380C); /* call 0x004C380C */

loc_004CC7B9: ;
    PUSH32(esp, 0x865BE4);
    PUSH32(esp, 0x867B60);
    PUSH32(esp, 0);
    PUSH32(esp, 0x7D0);
    PUSH32(esp, 0x83003C);
    ecx = ebp;
    PUSH32(esp, 0x004CC7D6u); RECOMP_ABI_CALL(0x004C380Cu, sub_004C380C); /* call 0x004C380C */

loc_004CC7D6: ;
    PUSH32(esp, 0x865C04);
    PUSH32(esp, 0x867B50);
    PUSH32(esp, 0);
    PUSH32(esp, 0xBB8);
    PUSH32(esp, 0x865BD8);
    ecx = ebp;
    PUSH32(esp, 0x004CC7F3u); RECOMP_ABI_CALL(0x004C380Cu, sub_004C380C); /* call 0x004C380C */

loc_004CC7F3: ;
    PUSH32(esp, 0x865C04);
    PUSH32(esp, 0x867B48);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFA0);
    PUSH32(esp, 0x865BB8);
    ecx = ebp;
    PUSH32(esp, 0x004CC810u); RECOMP_ABI_CALL(0x004C380Cu, sub_004C380C); /* call 0x004C380C */

loc_004CC810: ;
    PUSH32(esp, 0x865C04);
    PUSH32(esp, 0x867B38);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1388);
    PUSH32(esp, 0x865B78);
    ecx = ebp;
    PUSH32(esp, 0x004CC82Du); RECOMP_ABI_CALL(0x004C380Cu, sub_004C380C); /* call 0x004C380C */

loc_004CC82D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x867B2C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1770);
    PUSH32(esp, 0x867B24);
    ecx = ebp;
    PUSH32(esp, 0x004CC846u); RECOMP_ABI_CALL(0x004C380Cu, sub_004C380C); /* call 0x004C380C */

loc_004CC846: ;
    eax = MEM32(edi);
    ebp = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x865BD8);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004CC856u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CC853u); } /* indirect call */
    }

loc_004CC856: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x865BD8);
    ecx = esi;
    { uint32_t _icall_target = MEM32(ebp + 4); PUSH32(esp, 0x004CC861u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CC85Eu); } /* indirect call */
    }

loc_004CC861: ;
    ebp = eax;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004CC86Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CC868u); } /* indirect call */
    }

loc_004CC86B: ;
    PUSH32(esp, 0x865BC4);
    PUSH32(esp, 0x867B10);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E8);
    PUSH32(esp, 0x867B00);
    ecx = ebp;
    PUSH32(esp, 0x004CC888u); RECOMP_ABI_CALL(0x004C380Cu, sub_004C380C); /* call 0x004C380C */

loc_004CC888: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x867AF4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x17AE8);
    PUSH32(esp, 0x867AEC);
    ecx = ebp;
    PUSH32(esp, 0x004CC8A1u); RECOMP_ABI_CALL(0x004C380Cu, sub_004C380C); /* call 0x004C380C */

loc_004CC8A1: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x867AE0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x17ED0);
    PUSH32(esp, 0x867AD8);
    ecx = ebp;
    PUSH32(esp, 0x004CC8BAu); RECOMP_ABI_CALL(0x004C380Cu, sub_004C380C); /* call 0x004C380C */

loc_004CC8BA: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x867ACC);
    PUSH32(esp, 0);
    PUSH32(esp, 0x182B8);
    PUSH32(esp, 0x867AC4);
    ecx = ebp;
    PUSH32(esp, 0x004CC8D3u); RECOMP_ABI_CALL(0x004C380Cu, sub_004C380C); /* call 0x004C380C */

loc_004CC8D3: ;
    eax = MEM32(edi);
    ebp = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x865BB8);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004CC8E3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CC8E0u); } /* indirect call */
    }

loc_004CC8E3: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x865BB8);
    ecx = esi;
    { uint32_t _icall_target = MEM32(ebp + 4); PUSH32(esp, 0x004CC8EEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CC8EBu); } /* indirect call */
    }

loc_004CC8EE: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 0x14) = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x004CC8FAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CC8F7u); } /* indirect call */
    }

loc_004CC8FA: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, 0x865C04);
    PUSH32(esp, 0x867ABC);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E8);
    ebp = 0x865B84;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x004CC91Au); RECOMP_ABI_CALL(0x004C380Cu, sub_004C380C); /* call 0x004C380C */

loc_004CC91A: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, 0x865B94);
    PUSH32(esp, 0x867AB0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x7D0);
    PUSH32(esp, 0x867AA4);
    PUSH32(esp, 0x004CC939u); RECOMP_ABI_CALL(0x004C380Cu, sub_004C380C); /* call 0x004C380C */

loc_004CC939: ;
    eax = MEM32(esi);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xA);
    PUSH32(esp, ebp);
    ecx = edi;
    MEM32(esp + 0x18) = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x004CC949u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CC946u); } /* indirect call */
    }

loc_004CC949: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004CC954u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CC951u); } /* indirect call */
    }

loc_004CC954: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x004CC95Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CC959u); } /* indirect call */
    }

loc_004CC95C: ;
    eax = MEM32(edi);
    ebp = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x865B78);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004CC96Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CC969u); } /* indirect call */
    }

loc_004CC96C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x865B78);
    ecx = esi;
    { uint32_t _icall_target = MEM32(ebp + 4); PUSH32(esp, 0x004CC977u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CC974u); } /* indirect call */
    }

loc_004CC977: ;
    ebp = eax;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004CC981u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CC97Eu); } /* indirect call */
    }

loc_004CC981: ;
    PUSH32(esp, 0x865C04);
    PUSH32(esp, 0x867A9C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E8);
    PUSH32(esp, 0x865B44);
    ecx = ebp;
    PUSH32(esp, 0x004CC99Eu); RECOMP_ABI_CALL(0x004C380Cu, sub_004C380C); /* call 0x004C380C */

loc_004CC99E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x867A90);
    PUSH32(esp, 0);
    PUSH32(esp, 0x7D0);
    PUSH32(esp, 0x867A84);
    ecx = ebp;
    PUSH32(esp, 0x004CC9B7u); RECOMP_ABI_CALL(0x004C380Cu, sub_004C380C); /* call 0x004C380C */

loc_004CC9B7: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x867A74);
    PUSH32(esp, 0);
    PUSH32(esp, 0xBB8);
    PUSH32(esp, 0x867A68);
    ecx = ebp;
    PUSH32(esp, 0x004CC9D0u); RECOMP_ABI_CALL(0x004C380Cu, sub_004C380C); /* call 0x004C380C */

loc_004CC9D0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x867A60);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFA0);
    PUSH32(esp, 0x867A54);
    ecx = ebp;
    PUSH32(esp, 0x004CC9E9u); RECOMP_ABI_CALL(0x004C380Cu, sub_004C380C); /* call 0x004C380C */

loc_004CC9E9: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x867A4C);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x1388);
    PUSH32(esp, 0x865D68);
    ecx = ebp;
    PUSH32(esp, 0x004CCA03u); RECOMP_ABI_CALL(0x004C380Cu, sub_004C380C); /* call 0x004C380C */

loc_004CCA03: ;
    eax = MEM32(esi);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xA);
    ebp = 0x865B44;
    PUSH32(esp, ebp);
    ecx = edi;
    MEM32(esp + 0x18) = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x004CCA18u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CCA15u); } /* indirect call */
    }

loc_004CCA18: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004CCA23u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CCA20u); } /* indirect call */
    }

loc_004CCA23: ;
    edi = eax;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004CCA2Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CCA2Au); } /* indirect call */
    }

loc_004CCA2D: ;
    esi = 0x865B60;
    PUSH32(esp, esi);
    PUSH32(esp, 0x867A40);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3E8);
    PUSH32(esp, 0x8636AC);
    ecx = edi;
    PUSH32(esp, 0x004CCA4Au); RECOMP_ABI_CALL(0x004C380Cu, sub_004C380C); /* call 0x004C380C */

loc_004CCA4A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x867A2C);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x7D0);
    PUSH32(esp, 0x86364C);
    ecx = edi;
    PUSH32(esp, 0x004CCA62u); RECOMP_ABI_CALL(0x004C380Cu, sub_004C380C); /* call 0x004C380C */

loc_004CCA62: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x867A18);
    PUSH32(esp, ebx);
    PUSH32(esp, 0xBB8);
    PUSH32(esp, 0x863614);
    ecx = edi;
    PUSH32(esp, 0x004CCA7Au); RECOMP_ABI_CALL(0x004C380Cu, sub_004C380C); /* call 0x004C380C */

loc_004CCA7A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x867A08);
    PUSH32(esp, ebx);
    PUSH32(esp, 0xFA0);
    PUSH32(esp, 0x8658FC);
    ecx = edi;
    PUSH32(esp, 0x004CCA92u); RECOMP_ABI_CALL(0x004C380Cu, sub_004C380C); /* call 0x004C380C */

loc_004CCA92: ;
    ecx = MEM32(0x90E424);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x004CCA9Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CCA9Au); } /* indirect call */
    }

loc_004CCA9D: ;
    edx = MEM32(eax);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    ecx = eax;
    POP32(esp, ebx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0xC)); return; /* indirect tail jmp */

}

/**
 * sub_004CCAAB
 * Original: 0x004CCAAB - 0x004CCACF (36 bytes, 13 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_004CCAAB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004CCAAB: ;
    PUSH32(esp, 0x004CCAB0u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004CCAB0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x34);
    PUSH32(esp, 0x004CCABCu); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004CCABC: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004CCACA; /* je: equal / zero */

loc_004CCAC3: ;
    ecx = eax;
    g_seh_ebp = ebp; sub_004C3933(); return; /* tail jmp 0x004C3933 */

loc_004CCACA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004CCACF
 * Original: 0x004CCACF - 0x004CCAEB (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CCACF(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CCACF: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004CCAD7u); RECOMP_ABI_CALL(0x004C398Fu, sub_004C398F); /* call 0x004C398F */

loc_004CCAD7: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004CCAE5; /* je: equal / zero */

loc_004CCADE: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004CCAE4u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004CCAE4: ;
    POP32(esp, ecx);

loc_004CCAE5: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CCAEB
 * Original: 0x004CCAEB - 0x004CCB07 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CCAEB(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CCAEB: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004CCAF3u); RECOMP_ABI_CALL(0x004C3A1Bu, sub_004C3A1B); /* call 0x004C3A1B */

loc_004CCAF3: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004CCB01; /* je: equal / zero */

loc_004CCAFA: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004CCB00u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004CCB00: ;
    POP32(esp, ecx);

loc_004CCB01: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CCB07
 * Original: 0x004CCB07 - 0x004CD4AF (2472 bytes, 694 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004CCB07(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CCB07: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x90E424);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x004CCB1Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CCB1Au); } /* indirect call */
    }

loc_004CCB1D: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ebp + -8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebp + -12;
    PUSH32(esp, ecx);
    ecx = ebp + -16;
    PUSH32(esp, ecx);
    MEM32(ebp + -16) = 1;
    MEM32(ebp + -12) = 0x8656D0;
    edx = MEM32(eax);
    ebx = 0x8636AC;
    PUSH32(esp, ebx);
    ecx = eax;
    MEM32(ebp + -20) = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x004CCB4Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CCB48u); } /* indirect call */
    }

loc_004CCB4A: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x865688);
    PUSH32(esp, MEM32(ebp + -8));
    edi = 0x7B891F;
    PUSH32(esp, MEM32(ebp + -12));
    ecx = esi;
    PUSH32(esp, MEM32(ebp + -16));
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(0x863160));
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x004CCB6Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CCB69u); } /* indirect call */
    }

loc_004CCB6C: ;
    ebx = eax;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x004CCB76u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CCB73u); } /* indirect call */
    }

loc_004CCB76: ;
    PUSH32(esp, 0);
    ecx = ebx + 0x1C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CCB80u); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004CCB80: ;
    PUSH32(esp, 0x3E8);
    PUSH32(esp, MEM32(0x863164));
    ebx = eax;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CCB94u); RECOMP_ABI_CALL(0x004C3E24u, sub_004C3E24); /* call 0x004C3E24 */

loc_004CCB94: ;
    PUSH32(esp, 0x7D0);
    PUSH32(esp, MEM32(0x863168));
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CCBA6u); RECOMP_ABI_CALL(0x004C3E24u, sub_004C3E24); /* call 0x004C3E24 */

loc_004CCBA6: ;
    PUSH32(esp, 0xBB8);
    PUSH32(esp, MEM32(0x86316C));
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CCBB8u); RECOMP_ABI_CALL(0x004C3E24u, sub_004C3E24); /* call 0x004C3E24 */

loc_004CCBB8: ;
    PUSH32(esp, 0xFA0);
    PUSH32(esp, MEM32(0x863170));
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CCBCAu); RECOMP_ABI_CALL(0x004C3E24u, sub_004C3E24); /* call 0x004C3E24 */

loc_004CCBCA: ;
    PUSH32(esp, 0x1388);
    PUSH32(esp, MEM32(0x863174));
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CCBDCu); RECOMP_ABI_CALL(0x004C3E24u, sub_004C3E24); /* call 0x004C3E24 */

loc_004CCBDC: ;
    PUSH32(esp, 0x1770);
    PUSH32(esp, MEM32(0x863178));
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CCBEEu); RECOMP_ABI_CALL(0x004C3E24u, sub_004C3E24); /* call 0x004C3E24 */

loc_004CCBEE: ;
    PUSH32(esp, 0x1B58);
    PUSH32(esp, MEM32(0x86317C));
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CCC00u); RECOMP_ABI_CALL(0x004C3E24u, sub_004C3E24); /* call 0x004C3E24 */

loc_004CCC00: ;
    PUSH32(esp, 0x1F40);
    PUSH32(esp, MEM32(0x863180));
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CCC12u); RECOMP_ABI_CALL(0x004C3E24u, sub_004C3E24); /* call 0x004C3E24 */

loc_004CCC12: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x865560);
    ebx = 0x863220;
    PUSH32(esp, ebx);
    PUSH32(esp, 2);
    PUSH32(esp, 0x867E4C);
    PUSH32(esp, 0x867E40);
    PUSH32(esp, MEM32(0x863164));
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004CCC36u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CCC33u); } /* indirect call */
    }

loc_004CCC36: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x865560);
    PUSH32(esp, ebx);
    PUSH32(esp, 2);
    PUSH32(esp, 0x867E38);
    PUSH32(esp, 0x867E28);
    PUSH32(esp, MEM32(0x863168));
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004CCC55u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CCC52u); } /* indirect call */
    }

loc_004CCC55: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x8655AC);
    PUSH32(esp, 0x863258);
    PUSH32(esp, 2);
    PUSH32(esp, 0x867E20);
    PUSH32(esp, 0x867E10);
    PUSH32(esp, MEM32(0x86316C));
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004CCC78u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CCC75u); } /* indirect call */
    }

loc_004CCC78: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x8655B4);
    PUSH32(esp, 0x863260);
    PUSH32(esp, 0xB);
    PUSH32(esp, 0x867E08);
    PUSH32(esp, 0x867E00);
    PUSH32(esp, MEM32(0x863170));
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004CCC9Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CCC98u); } /* indirect call */
    }

loc_004CCC9B: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x86560C);
    PUSH32(esp, 0x8632E4);
    PUSH32(esp, 0xB);
    PUSH32(esp, 0x867DF8);
    PUSH32(esp, 0x867DF0);
    PUSH32(esp, MEM32(0x863174));
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004CCCBEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CCCBBu); } /* indirect call */
    }

loc_004CCCBE: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(0x8D7D08));
    eax = MEM32(esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x867DE8);
    PUSH32(esp, 0x867DDC);
    PUSH32(esp, MEM32(0x863178));
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x004CCCDDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CCCDAu); } /* indirect call */
    }

loc_004CCCDD: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x865558);
    PUSH32(esp, ebx);
    PUSH32(esp, 2);
    PUSH32(esp, 0x867DCC);
    PUSH32(esp, 0x867DC4);
    PUSH32(esp, MEM32(0x86317C));
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004CCCFCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CCCF9u); } /* indirect call */
    }

loc_004CCCFC: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x865558);
    PUSH32(esp, ebx);
    PUSH32(esp, 2);
    PUSH32(esp, 0x867DB4);
    PUSH32(esp, 0x867DAC);
    PUSH32(esp, MEM32(0x863180));
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004CCD1Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CCD18u); } /* indirect call */
    }

loc_004CCD1B: ;
    ecx = MEM32(ebp + -20);
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = ebp + -8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = ebp + -12;
    PUSH32(esp, edx);
    edx = ebp + -16;
    PUSH32(esp, edx);
    MEM32(ebp + -16) = 1;
    MEM32(ebp + -12) = 0x8656DC;
    eax = MEM32(ecx);
    PUSH32(esp, 0x86364C);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004CCD45u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CCD43u); } /* indirect call */
    }

loc_004CCD45: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x865688);
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, MEM32(ebp + -12));
    ecx = esi;
    PUSH32(esp, MEM32(ebp + -16));
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(0x863184));
    PUSH32(esp, 0x86364C);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x004CCD66u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CCD63u); } /* indirect call */
    }

loc_004CCD66: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x004CCD6Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CCD6Bu); } /* indirect call */
    }

loc_004CCD6E: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x86364C);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x004CCD7Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CCD77u); } /* indirect call */
    }

loc_004CCD7A: ;
    PUSH32(esp, 0);
    ecx = eax + 0x1C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CCD84u); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004CCD84: ;
    PUSH32(esp, 0x3E8);
    PUSH32(esp, MEM32(0x863188));
    ecx = eax;
    MEM32(ebp + -4) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CCD99u); RECOMP_ABI_CALL(0x004C3E24u, sub_004C3E24); /* call 0x004C3E24 */

loc_004CCD99: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0x7D0);
    PUSH32(esp, MEM32(0x86318C));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CCDACu); RECOMP_ABI_CALL(0x004C3E24u, sub_004C3E24); /* call 0x004C3E24 */

loc_004CCDAC: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0xBB8);
    PUSH32(esp, MEM32(0x863190));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CCDBFu); RECOMP_ABI_CALL(0x004C3E24u, sub_004C3E24); /* call 0x004C3E24 */

loc_004CCDBF: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0xFA0);
    PUSH32(esp, MEM32(0x863194));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CCDD2u); RECOMP_ABI_CALL(0x004C3E24u, sub_004C3E24); /* call 0x004C3E24 */

loc_004CCDD2: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0x1388);
    PUSH32(esp, MEM32(0x863198));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CCDE5u); RECOMP_ABI_CALL(0x004C3E24u, sub_004C3E24); /* call 0x004C3E24 */

loc_004CCDE5: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(0x8D7D20));
    eax = MEM32(esi);
    PUSH32(esp, 0x4C0B6E);
    PUSH32(esp, 0x867DA4);
    PUSH32(esp, 0x867D98);
    PUSH32(esp, MEM32(0x863188));
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x004CCE07u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CCE04u); } /* indirect call */
    }

loc_004CCE07: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(0x8D7D1C));
    eax = MEM32(esi);
    PUSH32(esp, 0x4C0B91);
    PUSH32(esp, 0x867D90);
    PUSH32(esp, 0x867D80);
    PUSH32(esp, MEM32(0x86318C));
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x004CCE29u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CCE26u); } /* indirect call */
    }

loc_004CCE29: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x8655E0);
    PUSH32(esp, 0x86328C);
    PUSH32(esp, 5);
    PUSH32(esp, 0x867D78);
    PUSH32(esp, 0x867D70);
    PUSH32(esp, MEM32(0x863190));
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004CCE4Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CCE49u); } /* indirect call */
    }

loc_004CCE4C: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x865558);
    PUSH32(esp, ebx);
    PUSH32(esp, 2);
    PUSH32(esp, 0x867D68);
    PUSH32(esp, 0x867D60);
    PUSH32(esp, MEM32(0x863194));
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004CCE6Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CCE68u); } /* indirect call */
    }

loc_004CCE6B: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x865558);
    PUSH32(esp, ebx);
    PUSH32(esp, 2);
    PUSH32(esp, 0x867D58);
    PUSH32(esp, 0x867D4C);
    PUSH32(esp, MEM32(0x863198));
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004CCE8Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CCE87u); } /* indirect call */
    }

loc_004CCE8A: ;
    ecx = MEM32(ebp + -20);
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = ebp + -8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = ebp + -12;
    PUSH32(esp, edx);
    edx = ebp + -16;
    PUSH32(esp, edx);
    MEM32(ebp + -16) = 1;
    MEM32(ebp + -12) = 0x8656E8;
    eax = MEM32(ecx);
    PUSH32(esp, 0x863614);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004CCEB4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CCEB2u); } /* indirect call */
    }

loc_004CCEB4: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x865688);
    PUSH32(esp, MEM32(ebp + -8));
    ecx = esi;
    PUSH32(esp, MEM32(ebp + -12));
    PUSH32(esp, MEM32(ebp + -16));
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(0x86319C));
    PUSH32(esp, 0x863614);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x004CCED5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CCED2u); } /* indirect call */
    }

loc_004CCED5: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x004CCEDDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CCEDAu); } /* indirect call */
    }

loc_004CCEDD: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x863614);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x004CCEE9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CCEE6u); } /* indirect call */
    }

loc_004CCEE9: ;
    PUSH32(esp, 0);
    ecx = eax + 0x1C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CCEF3u); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004CCEF3: ;
    PUSH32(esp, 0x1F4);
    PUSH32(esp, MEM32(0x8631A0));
    ecx = eax;
    MEM32(ebp + -4) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CCF08u); RECOMP_ABI_CALL(0x004C3E24u, sub_004C3E24); /* call 0x004C3E24 */

loc_004CCF08: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0x3E8);
    PUSH32(esp, MEM32(0x8631A4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CCF1Bu); RECOMP_ABI_CALL(0x004C3E24u, sub_004C3E24); /* call 0x004C3E24 */

loc_004CCF1B: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0x7D0);
    PUSH32(esp, MEM32(0x8631A8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CCF2Eu); RECOMP_ABI_CALL(0x004C3E24u, sub_004C3E24); /* call 0x004C3E24 */

loc_004CCF2E: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0x9C4);
    PUSH32(esp, MEM32(0x8631AC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CCF41u); RECOMP_ABI_CALL(0x004C3E24u, sub_004C3E24); /* call 0x004C3E24 */

loc_004CCF41: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0xBB8);
    PUSH32(esp, MEM32(0x8631B0));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CCF54u); RECOMP_ABI_CALL(0x004C3E24u, sub_004C3E24); /* call 0x004C3E24 */

loc_004CCF54: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0xFA0);
    PUSH32(esp, MEM32(0x8631B4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CCF67u); RECOMP_ABI_CALL(0x004C3E24u, sub_004C3E24); /* call 0x004C3E24 */

loc_004CCF67: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0x1388);
    PUSH32(esp, MEM32(0x8631B8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CCF7Au); RECOMP_ABI_CALL(0x004C3E24u, sub_004C3E24); /* call 0x004C3E24 */

loc_004CCF7A: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0x1770);
    PUSH32(esp, MEM32(0x8631BC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CCF8Du); RECOMP_ABI_CALL(0x004C3E24u, sub_004C3E24); /* call 0x004C3E24 */

loc_004CCF8D: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0x1B58);
    PUSH32(esp, MEM32(0x8631C0));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CCFA0u); RECOMP_ABI_CALL(0x004C3E24u, sub_004C3E24); /* call 0x004C3E24 */

loc_004CCFA0: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x865558);
    PUSH32(esp, ebx);
    PUSH32(esp, 2);
    PUSH32(esp, 0x867D44);
    PUSH32(esp, 0x867D38);
    PUSH32(esp, MEM32(0x8631A4));
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004CCFBFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CCFBCu); } /* indirect call */
    }

loc_004CCFBF: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x865558);
    PUSH32(esp, ebx);
    PUSH32(esp, 2);
    PUSH32(esp, 0x867D44);
    PUSH32(esp, 0x867D2C);
    PUSH32(esp, MEM32(0x8631A8));
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004CCFDEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CCFDBu); } /* indirect call */
    }

loc_004CCFDE: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x865584);
    PUSH32(esp, 0x863230);
    PUSH32(esp, 7);
    PUSH32(esp, 0x867D24);
    PUSH32(esp, 0x867D18);
    PUSH32(esp, MEM32(0x8631B0));
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004CD001u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CCFFEu); } /* indirect call */
    }

loc_004CD001: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x8655A0);
    PUSH32(esp, 0x86324C);
    PUSH32(esp, 3);
    PUSH32(esp, 0x867D08);
    PUSH32(esp, 0x867CF8);
    PUSH32(esp, MEM32(0x8631B4));
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004CD024u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CD021u); } /* indirect call */
    }

loc_004CD024: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x8655F4);
    PUSH32(esp, 0x8632CC);
    PUSH32(esp, 6);
    PUSH32(esp, 0x867CF0);
    PUSH32(esp, 0x867CE0);
    PUSH32(esp, MEM32(0x8631B8));
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004CD047u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CD044u); } /* indirect call */
    }

loc_004CD047: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x865558);
    PUSH32(esp, ebx);
    PUSH32(esp, 2);
    PUSH32(esp, 0x867CD8);
    PUSH32(esp, 0x867CD0);
    PUSH32(esp, MEM32(0x8631BC));
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004CD066u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CD063u); } /* indirect call */
    }

loc_004CD066: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x865558);
    PUSH32(esp, ebx);
    PUSH32(esp, 2);
    PUSH32(esp, 0x867CC8);
    PUSH32(esp, 0x867CBC);
    PUSH32(esp, MEM32(0x8631C0));
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004CD085u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CD082u); } /* indirect call */
    }

loc_004CD085: ;
    ecx = MEM32(ebp + -20);
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = ebp + -8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = ebp + -12;
    PUSH32(esp, edx);
    edx = ebp + -16;
    PUSH32(esp, edx);
    MEM32(ebp + -16) = 1;
    MEM32(ebp + -12) = 0x8656F4;
    eax = MEM32(ecx);
    PUSH32(esp, 0x8658FC);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004CD0AFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CD0ADu); } /* indirect call */
    }

loc_004CD0AF: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x8656F8);
    PUSH32(esp, MEM32(ebp + -8));
    ecx = esi;
    PUSH32(esp, MEM32(ebp + -12));
    PUSH32(esp, MEM32(ebp + -16));
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(0x8631C4));
    PUSH32(esp, 0x8658FC);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x004CD0D0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CD0CDu); } /* indirect call */
    }

loc_004CD0D0: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x004CD0D8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CD0D5u); } /* indirect call */
    }

loc_004CD0D8: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x8658FC);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x004CD0E4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CD0E1u); } /* indirect call */
    }

loc_004CD0E4: ;
    PUSH32(esp, 0);
    ecx = eax + 0x1C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CD0EEu); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004CD0EE: ;
    PUSH32(esp, 0x3E8);
    PUSH32(esp, MEM32(0x8631C8));
    ecx = eax;
    MEM32(ebp + -4) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CD103u); RECOMP_ABI_CALL(0x004C3E24u, sub_004C3E24); /* call 0x004C3E24 */

loc_004CD103: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0x7D0);
    PUSH32(esp, MEM32(0x8631CC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CD116u); RECOMP_ABI_CALL(0x004C3E24u, sub_004C3E24); /* call 0x004C3E24 */

loc_004CD116: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0xBB8);
    PUSH32(esp, MEM32(0x8631D0));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CD129u); RECOMP_ABI_CALL(0x004C3E24u, sub_004C3E24); /* call 0x004C3E24 */

loc_004CD129: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0xFA0);
    PUSH32(esp, MEM32(0x8631D4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CD13Cu); RECOMP_ABI_CALL(0x004C3E24u, sub_004C3E24); /* call 0x004C3E24 */

loc_004CD13C: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0x1388);
    PUSH32(esp, MEM32(0x8631D8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CD14Fu); RECOMP_ABI_CALL(0x004C3E24u, sub_004C3E24); /* call 0x004C3E24 */

loc_004CD14F: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0x1770);
    PUSH32(esp, MEM32(0x8631DC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CD162u); RECOMP_ABI_CALL(0x004C3E24u, sub_004C3E24); /* call 0x004C3E24 */

loc_004CD162: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0x1B58);
    PUSH32(esp, MEM32(0x8631E0));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CD175u); RECOMP_ABI_CALL(0x004C3E24u, sub_004C3E24); /* call 0x004C3E24 */

loc_004CD175: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0x1F40);
    PUSH32(esp, MEM32(0x8631E4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CD188u); RECOMP_ABI_CALL(0x004C3E24u, sub_004C3E24); /* call 0x004C3E24 */

loc_004CD188: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0x2328);
    PUSH32(esp, MEM32(0x8631E8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CD19Bu); RECOMP_ABI_CALL(0x004C3E24u, sub_004C3E24); /* call 0x004C3E24 */

loc_004CD19B: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x867CB0);
    PUSH32(esp, 0x867CA8);
    PUSH32(esp, MEM32(0x8631C8));
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x004CD1B5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CD1B2u); } /* indirect call */
    }

loc_004CD1B5: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x867CB0);
    PUSH32(esp, 0x867CA0);
    PUSH32(esp, MEM32(0x8631CC));
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x004CD1CFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CD1CCu); } /* indirect call */
    }

loc_004CD1CF: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x867CB0);
    PUSH32(esp, 0x867C98);
    PUSH32(esp, MEM32(0x8631D0));
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x004CD1E9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CD1E6u); } /* indirect call */
    }

loc_004CD1E9: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x867CB0);
    PUSH32(esp, 0x867C90);
    PUSH32(esp, MEM32(0x8631D4));
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x004CD203u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CD200u); } /* indirect call */
    }

loc_004CD203: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x867CB0);
    PUSH32(esp, 0x867C88);
    PUSH32(esp, MEM32(0x8631D8));
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x004CD21Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CD21Au); } /* indirect call */
    }

loc_004CD21D: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x867CB0);
    PUSH32(esp, 0x867C80);
    PUSH32(esp, MEM32(0x8631DC));
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x004CD237u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CD234u); } /* indirect call */
    }

loc_004CD237: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x867CB0);
    PUSH32(esp, 0x867C78);
    PUSH32(esp, MEM32(0x8631E0));
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x004CD251u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CD24Eu); } /* indirect call */
    }

loc_004CD251: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x867CB0);
    PUSH32(esp, 0x867C70);
    PUSH32(esp, MEM32(0x8631E4));
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x004CD26Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CD268u); } /* indirect call */
    }

loc_004CD26B: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x867CB0);
    PUSH32(esp, 0x867C68);
    PUSH32(esp, MEM32(0x8631E8));
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x004CD285u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CD282u); } /* indirect call */
    }

loc_004CD285: ;
    ecx = MEM32(ebp + -20);
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = ebp + -8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = ebp + -12;
    PUSH32(esp, edx);
    edx = ebp + -16;
    PUSH32(esp, edx);
    MEM32(ebp + -16) = 1;
    MEM32(ebp + -12) = 0x865704;
    eax = MEM32(ecx);
    PUSH32(esp, 0x83003C);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004CD2AFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CD2ADu); } /* indirect call */
    }

loc_004CD2AF: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x865688);
    PUSH32(esp, MEM32(ebp + -8));
    ecx = esi;
    PUSH32(esp, MEM32(ebp + -12));
    PUSH32(esp, MEM32(ebp + -16));
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(0x863214));
    PUSH32(esp, 0x83003C);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x004CD2D0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CD2CDu); } /* indirect call */
    }

loc_004CD2D0: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x004CD2D8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CD2D5u); } /* indirect call */
    }

loc_004CD2D8: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83003C);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x004CD2E4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CD2E1u); } /* indirect call */
    }

loc_004CD2E4: ;
    PUSH32(esp, 0);
    ecx = eax + 0x1C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CD2EEu); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004CD2EE: ;
    MEM32(ebp + -4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CD2F6u); RECOMP_ABI_CALL(0x004DC981u, sub_004DC981); /* call 0x004DC981 */

loc_004CD2F6: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x004CD2FDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CD2FAu); } /* indirect call */
    }

loc_004CD2FD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004CD327; /* jne: not equal / not zero */

loc_004CD301: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0x3E8);
    PUSH32(esp, MEM32(0x863218));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CD314u); RECOMP_ABI_CALL(0x004C3E24u, sub_004C3E24); /* call 0x004C3E24 */

loc_004CD314: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0x7D0);
    PUSH32(esp, MEM32(0x86321C));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CD327u); RECOMP_ABI_CALL(0x004C3E24u, sub_004C3E24); /* call 0x004C3E24 */

loc_004CD327: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x865638);
    PUSH32(esp, 0x863310);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x867C5C);
    PUSH32(esp, 0x867C54);
    PUSH32(esp, MEM32(0x863218));
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004CD34Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CD347u); } /* indirect call */
    }

loc_004CD34A: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x865568);
    PUSH32(esp, 0x863230);
    PUSH32(esp, 7);
    PUSH32(esp, 0x867C48);
    PUSH32(esp, 0x867C3C);
    PUSH32(esp, MEM32(0x86321C));
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004CD36Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CD36Au); } /* indirect call */
    }

loc_004CD36D: ;
    ecx = MEM32(ebp + -20);
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = ebp + -8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = ebp + -12;
    PUSH32(esp, edx);
    edx = ebp + -16;
    PUSH32(esp, edx);
    MEM32(ebp + -16) = 1;
    MEM32(ebp + -12) = 0x865710;
    eax = MEM32(ecx);
    PUSH32(esp, 0x863524);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004CD397u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CD395u); } /* indirect call */
    }

loc_004CD397: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x865688);
    PUSH32(esp, MEM32(ebp + -8));
    ecx = esi;
    PUSH32(esp, MEM32(ebp + -12));
    PUSH32(esp, MEM32(ebp + -16));
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(0x863200));
    edi = 0x863524;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x004CD3B9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CD3B6u); } /* indirect call */
    }

loc_004CD3B9: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x004CD3C1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CD3BEu); } /* indirect call */
    }

loc_004CD3C1: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x004CD3C9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CD3C6u); } /* indirect call */
    }

loc_004CD3C9: ;
    PUSH32(esp, 0);
    ecx = eax + 0x1C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CD3D3u); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004CD3D3: ;
    PUSH32(esp, 0x3E8);
    PUSH32(esp, MEM32(0x863210));
    edi = eax;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CD3E7u); RECOMP_ABI_CALL(0x004C3E24u, sub_004C3E24); /* call 0x004C3E24 */

loc_004CD3E7: ;
    PUSH32(esp, 0x7D0);
    PUSH32(esp, MEM32(0x863204));
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CD3F9u); RECOMP_ABI_CALL(0x004C3E24u, sub_004C3E24); /* call 0x004C3E24 */

loc_004CD3F9: ;
    PUSH32(esp, 0xBB8);
    PUSH32(esp, MEM32(0x863208));
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CD40Bu); RECOMP_ABI_CALL(0x004C3E24u, sub_004C3E24); /* call 0x004C3E24 */

loc_004CD40B: ;
    PUSH32(esp, 0xFA0);
    PUSH32(esp, MEM32(0x86320C));
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CD41Du); RECOMP_ABI_CALL(0x004C3E24u, sub_004C3E24); /* call 0x004C3E24 */

loc_004CD41D: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x865638);
    PUSH32(esp, 0x863310);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x867C5C);
    PUSH32(esp, 0x867C54);
    PUSH32(esp, MEM32(0x863204));
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004CD440u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CD43Du); } /* indirect call */
    }

loc_004CD440: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x8D7AA0);
    edi = 0x863360;
    PUSH32(esp, edi);
    PUSH32(esp, 0x63);
    eax = 0x867C30;
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(0x863208));
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004CD461u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CD45Eu); } /* indirect call */
    }

loc_004CD461: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x8D7AA0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x63);
    eax = 0x867C24;
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(0x86320C));
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004CD47Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CD47Au); } /* indirect call */
    }

loc_004CD47D: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x865558);
    PUSH32(esp, ebx);
    PUSH32(esp, 2);
    eax = 0x867C1C;
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(0x863210));
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004CD499u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CD496u); } /* indirect call */
    }

loc_004CD499: ;
    ecx = MEM32(0x90E424);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x004CD4A4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CD4A1u); } /* indirect call */
    }

loc_004CD4A4: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x004CD4AAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CD4A8u); } /* indirect call */
    }

loc_004CD4AA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004CD4AF
 * Original: 0x004CD4AF - 0x004CD4F8 (73 bytes, 29 insns)
 * Category: game_vtable
 * CC: thiscall, 6 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004CD4AF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CD4AF: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CD4BAu); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004CD4BA: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CD4C6u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004CD4C6: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004CD4E8; /* je: equal / zero */

loc_004CD4CD: ;
    PUSH32(esp, MEM32(ebp + 0x1C));
    ecx = eax;
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CD4E6u); RECOMP_ABI_CALL(0x004C3C6Eu, sub_004C3C6E); /* call 0x004C3C6E */

loc_004CD4E6: ;
    goto loc_004CD4EA;

loc_004CD4E8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004CD4EA: ;
    PUSH32(esp, eax);
    ecx = esi + 0x10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CD4F3u); RECOMP_ABI_CALL(0x004DB91Cu, sub_004DB91C); /* call 0x004DB91C */

loc_004CD4F3: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_004CD4F8
 * Original: 0x004CD4F8 - 0x004CD521 (41 bytes, 17 insns)
 * Category: game_vtable
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004CD4F8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CD4F8: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CD500u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004CD500: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CD50Cu); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004CD50C: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004CD51B; /* je: equal / zero */

loc_004CD513: ;
    ecx = eax;
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_004C3FB9(); return; /* tail jmp 0x004C3FB9 */

loc_004CD51B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    esp += 32; return; /* ret 28 */

}

/**
 * sub_004CD521
 * Original: 0x004CD521 - 0x004CD53D (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CD521(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CD521: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004CD529u); RECOMP_ABI_CALL(0x004C3D7Du, sub_004C3D7D); /* call 0x004C3D7D */

loc_004CD529: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004CD537; /* je: equal / zero */

loc_004CD530: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004CD536u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004CD536: ;
    POP32(esp, ecx);

loc_004CD537: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CD53D
 * Original: 0x004CD53D - 0x004CD559 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CD53D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CD53D: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004CD545u); RECOMP_ABI_CALL(0x004C3F83u, sub_004C3F83); /* call 0x004C3F83 */

loc_004CD545: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004CD553; /* je: equal / zero */

loc_004CD54C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004CD552u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004CD552: ;
    POP32(esp, ecx);

loc_004CD553: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CD559
 * Original: 0x004CD559 - 0x004CD575 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CD559(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CD559: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004CD561u); RECOMP_ABI_CALL(0x004C40DAu, sub_004C40DA); /* call 0x004C40DA */

loc_004CD561: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004CD56F; /* je: equal / zero */

loc_004CD568: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004CD56Eu); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004CD56E: ;
    POP32(esp, ecx);

loc_004CD56F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CD575
 * Original: 0x004CD575 - 0x004CD591 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CD575(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CD575: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004CD57Du); RECOMP_ABI_CALL(0x004C41F2u, sub_004C41F2); /* call 0x004C41F2 */

loc_004CD57D: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004CD58B; /* je: equal / zero */

loc_004CD584: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004CD58Au); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004CD58A: ;
    POP32(esp, ecx);

loc_004CD58B: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CD591
 * Original: 0x004CD591 - 0x004CD5AD (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CD591(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CD591: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004CD599u); RECOMP_ABI_CALL(0x004C440Fu, sub_004C440F); /* call 0x004C440F */

loc_004CD599: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004CD5A7; /* je: equal / zero */

loc_004CD5A0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004CD5A6u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004CD5A6: ;
    POP32(esp, ecx);

loc_004CD5A7: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CD5AD
 * Original: 0x004CD5AD - 0x004CD5C9 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CD5AD(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CD5AD: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004CD5B5u); RECOMP_ABI_CALL(0x004C4982u, sub_004C4982); /* call 0x004C4982 */

loc_004CD5B5: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004CD5C3; /* je: equal / zero */

loc_004CD5BC: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004CD5C2u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004CD5C2: ;
    POP32(esp, ecx);

loc_004CD5C3: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CD5C9
 * Original: 0x004CD5C9 - 0x004CD5E5 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CD5C9(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CD5C9: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004CD5D1u); RECOMP_ABI_CALL(0x004C4B69u, sub_004C4B69); /* call 0x004C4B69 */

loc_004CD5D1: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004CD5DF; /* je: equal / zero */

loc_004CD5D8: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004CD5DEu); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004CD5DE: ;
    POP32(esp, ecx);

loc_004CD5DF: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CD5E5
 * Original: 0x004CD5E5 - 0x004CD601 (28 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CD5E5(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CD5E5: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004CD5EDu); RECOMP_ABI_CALL(0x004C4C77u, sub_004C4C77); /* call 0x004C4C77 */

loc_004CD5ED: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004CD5FB; /* je: equal / zero */

loc_004CD5F4: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004CD5FAu); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004CD5FA: ;
    POP32(esp, ecx);

loc_004CD5FB: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CD601
 * Original: 0x004CD601 - 0x004CD61D (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CD601(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CD601: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004CD609u); RECOMP_ABI_CALL(0x004C4DCDu, sub_004C4DCD); /* call 0x004C4DCD */

loc_004CD609: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004CD617; /* je: equal / zero */

loc_004CD610: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004CD616u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004CD616: ;
    POP32(esp, ecx);

loc_004CD617: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CD61D
 * Original: 0x004CD61D - 0x004CD639 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CD61D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CD61D: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004CD625u); RECOMP_ABI_CALL(0x004C4F0Du, sub_004C4F0D); /* call 0x004C4F0D */

loc_004CD625: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004CD633; /* je: equal / zero */

loc_004CD62C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004CD632u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004CD632: ;
    POP32(esp, ecx);

loc_004CD633: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CD639
 * Original: 0x004CD639 - 0x004CD655 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CD639(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CD639: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004CD641u); RECOMP_ABI_CALL(0x004C5272u, sub_004C5272); /* call 0x004C5272 */

loc_004CD641: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004CD64F; /* je: equal / zero */

loc_004CD648: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004CD64Eu); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004CD64E: ;
    POP32(esp, ecx);

loc_004CD64F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CD655
 * Original: 0x004CD655 - 0x004CD671 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CD655(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CD655: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004CD65Du); RECOMP_ABI_CALL(0x004C571Au, sub_004C571A); /* call 0x004C571A */

loc_004CD65D: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004CD66B; /* je: equal / zero */

loc_004CD664: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004CD66Au); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004CD66A: ;
    POP32(esp, ecx);

loc_004CD66B: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CD671
 * Original: 0x004CD671 - 0x004CD6A8 (55 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CD671(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004CD671: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi + 0x24;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), eax (32-bit) */
    PUSH32(esp, eax);
    if (CMP_EQ(_fa, _fb)) goto loc_004CD697; /* je: equal / zero */

loc_004CD67E: ;
    PUSH32(esp, 0x004CD683u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004CD683: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x8665C0);
    ecx = esi + -48;
    PUSH32(esp, 0x004CD695u); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004CD695: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_004CD697: ;
    ecx = esi + 0x28;
    PUSH32(esp, 0x004CD69Fu); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004CD69F: ;
    ecx = esi + -48;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004C5DBE(); return; /* tail jmp 0x004C5DBE */

}

/**
 * sub_004CD6A8
 * Original: 0x004CD6A8 - 0x004CD6D6 (46 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CD6A8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004CD6A8: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004CD6B0u); RECOMP_ABI_CALL(0x004C5572u, sub_004C5572); /* call 0x004C5572 */

loc_004CD6B0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004CD6C3; /* je: equal / zero */

loc_004CD6B4: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x004CD6BBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CD6B8u); } /* indirect call */
    }

loc_004CD6BB: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004C5DBE(); return; /* tail jmp 0x004C5DBE */

loc_004CD6C3: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x8667B4);
    ecx = esi;
    PUSH32(esp, 0x004CD6D4u); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004CD6D4: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004CD6D6
 * Original: 0x004CD6D6 - 0x004CD6F2 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CD6D6(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CD6D6: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004CD6DEu); RECOMP_ABI_CALL(0x004C5E70u, sub_004C5E70); /* call 0x004C5E70 */

loc_004CD6DE: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004CD6EC; /* je: equal / zero */

loc_004CD6E5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004CD6EBu); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004CD6EB: ;
    POP32(esp, ecx);

loc_004CD6EC: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CD6F2
 * Original: 0x004CD6F2 - 0x004CD70E (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CD6F2(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CD6F2: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004CD6FAu); RECOMP_ABI_CALL(0x004C6071u, sub_004C6071); /* call 0x004C6071 */

loc_004CD6FA: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004CD708; /* je: equal / zero */

loc_004CD701: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004CD707u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004CD707: ;
    POP32(esp, ecx);

loc_004CD708: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CD70E
 * Original: 0x004CD70E - 0x004CD72A (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CD70E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CD70E: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004CD716u); RECOMP_ABI_CALL(0x004C62A2u, sub_004C62A2); /* call 0x004C62A2 */

loc_004CD716: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004CD724; /* je: equal / zero */

loc_004CD71D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004CD723u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004CD723: ;
    POP32(esp, ecx);

loc_004CD724: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CD72A
 * Original: 0x004CD72A - 0x004CD746 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CD72A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CD72A: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004CD732u); RECOMP_ABI_CALL(0x004C6446u, sub_004C6446); /* call 0x004C6446 */

loc_004CD732: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004CD740; /* je: equal / zero */

loc_004CD739: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004CD73Fu); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004CD73F: ;
    POP32(esp, ecx);

loc_004CD740: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CD746
 * Original: 0x004CD746 - 0x004CD762 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CD746(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CD746: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004CD74Eu); RECOMP_ABI_CALL(0x004C6523u, sub_004C6523); /* call 0x004C6523 */

loc_004CD74E: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004CD75C; /* je: equal / zero */

loc_004CD755: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004CD75Bu); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004CD75B: ;
    POP32(esp, ecx);

loc_004CD75C: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CD762
 * Original: 0x004CD762 - 0x004CD78F (45 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CD762(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CD762: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi + 0x20);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x004CD76Fu); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004CD76F: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x004CD776u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CD773u); } /* indirect call */
    }

loc_004CD776: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004CD77Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CD77Au); } /* indirect call */
    }

loc_004CD77D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax + 0x14) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004CD784; /* jb: below (unsigned <) */

loc_004CD782: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004CD784: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x004CD78Cu); RECOMP_ABI_CALL(0x004C660Fu, sub_004C660F); /* call 0x004C660F */

loc_004CD78C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004CD78F
 * Original: 0x004CD78F - 0x004CD7B9 (42 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CD78F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CD78F: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x20);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_004CD7AF; /* jns: not sign (positive) */

loc_004CD798: ;
    PUSH32(esp, 0x004CD79Du); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004CD79D: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x004CD7A4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CD7A1u); } /* indirect call */
    }

loc_004CD7A4: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004CD7ABu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CD7A8u); } /* indirect call */
    }

loc_004CD7AB: ;
    eax = MEM32(eax + 0x14);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_004CD7AF: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x004CD7B7u); RECOMP_ABI_CALL(0x004C660Fu, sub_004C660F); /* call 0x004C660F */

loc_004CD7B7: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004CD7B9
 * Original: 0x004CD7B9 - 0x004CD7D5 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CD7B9(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CD7B9: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004CD7C1u); RECOMP_ABI_CALL(0x004C6A63u, sub_004C6A63); /* call 0x004C6A63 */

loc_004CD7C1: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004CD7CF; /* je: equal / zero */

loc_004CD7C8: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004CD7CEu); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004CD7CE: ;
    POP32(esp, ecx);

loc_004CD7CF: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CD7D5
 * Original: 0x004CD7D5 - 0x004CD7F7 (34 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CD7D5(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CD7D5: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x866A9C;
    PUSH32(esp, 0x004CD7E3u); RECOMP_ABI_CALL(0x004C1837u, sub_004C1837); /* call 0x004C1837 */

loc_004CD7E3: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004CD7F1; /* je: equal / zero */

loc_004CD7EA: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004CD7F0u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004CD7F0: ;
    POP32(esp, ecx);

loc_004CD7F1: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CD7F7
 * Original: 0x004CD7F7 - 0x004CD813 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CD7F7(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CD7F7: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004CD7FFu); RECOMP_ABI_CALL(0x004C6FCFu, sub_004C6FCF); /* call 0x004C6FCF */

loc_004CD7FF: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004CD80D; /* je: equal / zero */

loc_004CD806: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004CD80Cu); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004CD80C: ;
    POP32(esp, ecx);

loc_004CD80D: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CD813
 * Original: 0x004CD813 - 0x004CD822 (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CD813(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CD813: ;
    PUSH32(esp, MEM32(esp + 8));
    _fb = (uint32_t)(0xFFFFFFE4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFE4u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x004CD81Fu); RECOMP_ABI_CALL(0x004C7AA6u, sub_004C7AA6); /* call 0x004C7AA6 */

loc_004CD81F: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004CD822
 * Original: 0x004CD822 - 0x004CD843 (33 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CD822(void)
{

loc_004CD822: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004CD82Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CD82Bu); } /* indirect call */
    }

loc_004CD82E: ;
    PUSH32(esp, eax);
    ecx = esi + 0x38;
    PUSH32(esp, 0x004CD837u); RECOMP_ABI_CALL(0x004C2CD2u, sub_004C2CD2); /* call 0x004C2CD2 */

loc_004CD837: ;
    ecx = esi + -28;
    PUSH32(esp, 0x004CD83Fu); RECOMP_ABI_CALL(0x004C7A3Fu, sub_004C7A3F); /* call 0x004C7A3F */

loc_004CD83F: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CD843
 * Original: 0x004CD843 - 0x004CD85F (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CD843(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CD843: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004CD84Bu); RECOMP_ABI_CALL(0x004C7680u, sub_004C7680); /* call 0x004C7680 */

loc_004CD84B: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004CD859; /* je: equal / zero */

loc_004CD852: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004CD858u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004CD858: ;
    POP32(esp, ecx);

loc_004CD859: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CD85F
 * Original: 0x004CD85F - 0x004CD87B (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CD85F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CD85F: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004CD867u); RECOMP_ABI_CALL(0x004C7F74u, sub_004C7F74); /* call 0x004C7F74 */

loc_004CD867: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004CD875; /* je: equal / zero */

loc_004CD86E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004CD874u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004CD874: ;
    POP32(esp, ecx);

loc_004CD875: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CD87B
 * Original: 0x004CD87B - 0x004CD897 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CD87B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CD87B: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004CD883u); RECOMP_ABI_CALL(0x004C8263u, sub_004C8263); /* call 0x004C8263 */

loc_004CD883: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004CD891; /* je: equal / zero */

loc_004CD88A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004CD890u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004CD890: ;
    POP32(esp, ecx);

loc_004CD891: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CD897
 * Original: 0x004CD897 - 0x004CD8A2 (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CD897(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CD897: ;
    _fb = (uint32_t)(0xFFFFFFE0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFE0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x004CD89Fu); RECOMP_ABI_CALL(0x004C8331u, sub_004C8331); /* call 0x004C8331 */

loc_004CD89F: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CD8A2
 * Original: 0x004CD8A2 - 0x004CD8AA (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CD8A2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004CD8A2: ;
    _fb = (uint32_t)(0xFFFFFFE8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFE8u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_004C8331(); return; /* tail jmp 0x004C8331 */

}

/**
 * sub_004CD8AA
 * Original: 0x004CD8AA - 0x004CD8B2 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CD8AA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004CD8AA: ;
    _fb = (uint32_t)(0xFFFFFFDCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFDCu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_004C8331(); return; /* tail jmp 0x004C8331 */

}

/**
 * sub_004CD8B2
 * Original: 0x004CD8B2 - 0x004CD8F2 (64 bytes, 19 insns)
 * Category: game_io
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CD8B2(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CD8B2: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esi + 0xC;
    PUSH32(esp, 0x004CD8BFu); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004CD8BF: ;
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = esi + 8;
    PUSH32(esp, 0x004CD8CBu); RECOMP_ABI_CALL(0x004C2D83u, sub_004C2D83); /* call 0x004C2D83 */

loc_004CD8CB: ;
    MEM32(esi + 0x14) = MEM32(esi + 0x14) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM8(esi + 0x18) = 0;
    _fb = (uint32_t)(0xFFFFFFE8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xFFFFFFE8u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    PUSH32(esp, 0x004CD8DDu); RECOMP_ABI_CALL(0x004C8774u, sub_004C8774); /* call 0x004C8774 */

loc_004CD8DD: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x8679CC);
    ecx = esi;
    PUSH32(esp, 0x004CD8EEu); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004CD8EE: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004CD8F2
 * Original: 0x004CD8F2 - 0x004CD91A (40 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CD8F2(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CD8F2: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(MEM32(ecx + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x2C), eax (32-bit) */
    PUSH32(esp, esi);
    esi = ecx + 0x30;
    if (CMP_EQ(_fa, _fb)) goto loc_004CD907; /* je: equal / zero */

loc_004CD8FF: ;
    MEM32(ecx + 0x2C) = eax;
    MEM8(esi) = 0;
    goto loc_004CD90F;

loc_004CD907: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(esi) = LO8(eax);

loc_004CD90F: ;
    PUSH32(esp, 0x004CD914u); RECOMP_ABI_CALL(0x004C8774u, sub_004C8774); /* call 0x004C8774 */

loc_004CD914: ;
    SET_LO8(eax, MEM8(esi));
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CD91A
 * Original: 0x004CD91A - 0x004CD936 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CD91A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CD91A: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004CD922u); RECOMP_ABI_CALL(0x004C8975u, sub_004C8975); /* call 0x004C8975 */

loc_004CD922: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004CD930; /* je: equal / zero */

loc_004CD929: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004CD92Fu); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004CD92F: ;
    POP32(esp, ecx);

loc_004CD930: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CD936
 * Original: 0x004CD936 - 0x004CD952 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CD936(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CD936: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004CD93Eu); RECOMP_ABI_CALL(0x004C8A0Fu, sub_004C8A0F); /* call 0x004C8A0F */

loc_004CD93E: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004CD94C; /* je: equal / zero */

loc_004CD945: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004CD94Bu); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004CD94B: ;
    POP32(esp, ecx);

loc_004CD94C: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CD952
 * Original: 0x004CD952 - 0x004CD97E (44 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CD952(void)
{

loc_004CD952: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + -28;
    ecx = edi;
    PUSH32(esp, 0x004CD960u); RECOMP_ABI_CALL(0x004C8D15u, sub_004C8D15); /* call 0x004C8D15 */

loc_004CD960: ;
    PUSH32(esp, 0);
    ecx = esi + 0x40;
    PUSH32(esp, 0x004CD96Au); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004CD96A: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x867E58);
    ecx = edi;
    PUSH32(esp, 0x004CD97Bu); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004CD97B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004CD97E
 * Original: 0x004CD97E - 0x004CD99A (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CD97E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CD97E: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004CD986u); RECOMP_ABI_CALL(0x004C8F71u, sub_004C8F71); /* call 0x004C8F71 */

loc_004CD986: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004CD994; /* je: equal / zero */

loc_004CD98D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004CD993u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004CD993: ;
    POP32(esp, ecx);

loc_004CD994: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CD99A
 * Original: 0x004CD99A - 0x004CD9AA (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CD99A(void)
{

loc_004CD99A: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004CD9A2u); RECOMP_ABI_CALL(0x004C91A5u, sub_004C91A5); /* call 0x004C91A5 */

loc_004CD9A2: ;
    eax = MEM32(esi + 0x58);
    eax = MEM32(eax + 0x14);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004CD9AA
 * Original: 0x004CD9AA - 0x004CD9C5 (27 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CD9AA(void)
{

loc_004CD9AA: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004CD9B2u); RECOMP_ABI_CALL(0x004C91A5u, sub_004C91A5); /* call 0x004C91A5 */

loc_004CD9B2: ;
    esi = MEM32(esi + 0x58);
    PUSH32(esp, MEM32(esp + 8));
    ecx = esi + 8;
    PUSH32(esp, 0x004CD9C1u); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004CD9C1: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CD9C5
 * Original: 0x004CD9C5 - 0x004CDA11 (76 bytes, 26 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CD9C5(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CD9C5: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x004CD9CEu); RECOMP_ABI_CALL(0x004C91A5u, sub_004C91A5); /* call 0x004C91A5 */

loc_004CD9CE: ;
    eax = MEM32(esi + 0x58);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(eax + 0x14) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004CD9F7; /* jb: below (unsigned <) */

loc_004CD9DA: ;
    PUSH32(esp, 0);
    ecx = esi + 0x4C;
    PUSH32(esp, 0x004CD9E4u); RECOMP_ABI_CALL(0x004AFE27u, sub_004AFE27); /* call 0x004AFE27 */

loc_004CD9E4: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x867E6C);
    ecx = esi;
    PUSH32(esp, 0x004CD9F5u); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004CD9F5: ;
    goto loc_004CDA0C;

loc_004CD9F7: ;
    PUSH32(esp, edi);
    ecx = eax + 8;
    PUSH32(esp, 0x004CDA00u); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004CDA00: ;
    PUSH32(esp, eax);
    ecx = esi + 0x4C;
    PUSH32(esp, 0x004CDA09u); RECOMP_ABI_CALL(0x004AFE27u, sub_004AFE27); /* call 0x004AFE27 */

loc_004CDA09: ;
    MEM32(esi + 0x50) = edi;

loc_004CDA0C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CDA11
 * Original: 0x004CDA11 - 0x004CDA9F (142 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004CDA11(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CDA11: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CDA21u); RECOMP_ABI_CALL(0x004C91A5u, sub_004C91A5); /* call 0x004C91A5 */

loc_004CDA21: ;
    eax = MEM32(esi + 0x58);
    eax = MEM32(eax + 0x14);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(ebp + -12) = eax;
    MEM8(ebp + -1) = 0;
    if (CMP_BE(_fa, _fb)) goto loc_004CDA87; /* jbe: below or equal (unsigned <=) */

loc_004CDA34: ;
    edi = esi + 0x4C;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004CDA87; /* je: equal / zero */

loc_004CDA3B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004CDA87; /* jbe: below or equal (unsigned <=) */

loc_004CDA3F: ;
    eax = MEM32(esi + 0x58);
    PUSH32(esp, ebx);
    ecx = eax + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CDA4Bu); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004CDA4B: ;
    ecx = MEM32(edi);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEM32(ebp + -8) = eax;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x004CDA56u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CDA53u); } /* indirect call */
    }

loc_004CDA56: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004CDA6B; /* je: equal / zero */

loc_004CDA5A: ;
    PUSH32(esp, MEM32(ebp + -8));
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CDA64u); RECOMP_ABI_CALL(0x004AFE27u, sub_004AFE27); /* call 0x004AFE27 */

loc_004CDA64: ;
    MEM32(esi + 0x50) = ebx;
    MEM8(ebp + -1) = 1;

loc_004CDA6B: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ebp + -12) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004CDA3F; /* jb: below (unsigned <) */

loc_004CDA71: ;
    _fa = (uint32_t)(MEM8(ebp + -1)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -1), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004CDA87; /* je: equal / zero */

loc_004CDA77: ;
    PUSH32(esp, MEM32(edi));
    ecx = 0x90E444;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CDA83u); RECOMP_ABI_CALL(0x004AFE27u, sub_004AFE27); /* call 0x004AFE27 */

loc_004CDA83: ;
    SET_LO8(eax, 1);
    goto loc_004CDA9A;

loc_004CDA87: ;
    PUSH32(esp, 0x7B891F);
    ecx = esi;
    PUSH32(esp, 0x867E6C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CDA98u); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004CDA98: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_004CDA9A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004CDA9F
 * Original: 0x004CDA9F - 0x004CDC23 (388 bytes, 144 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004CDA9F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004CDA9F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x18));
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -12) = MEM32(ebp + -12) & 0;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x38);
    ecx = MEM32(esi + 0x2C);
    eax = MEM32(ecx + eax * 4);
    MEM32(ebp + -16) = eax;
    eax = MEM32(esi + 0x24);
    eax = MEM32(eax + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, edi);
    MEM32(ebp + -24) = eax;
    MEM8(ebp + -1) = 0;
    if (CMP_BE(_fa, _fb)) goto loc_004CDBF4; /* jbe: below or equal (unsigned <=) */

loc_004CDAD2: ;
    PUSH32(esp, ebx);

loc_004CDAD3: ;
    eax = MEM32(esi + 0x24);
    ebx = MEM32(ebp + -8);
    PUSH32(esp, ebx);
    ecx = eax + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CDAE2u); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004CDAE2: ;
    ecx = MEM32(esi + 0x28);
    edi = eax;
    eax = ebx;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, 0);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(eax)) >> 32) & 1);
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CDAF5u); RECOMP_ABI_CALL(0x004C2E61u, sub_004C2E61); /* call 0x004C2E61 */

loc_004CDAF5: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x864EA4);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004CDB01u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CDAFEu); } /* indirect call */
    }

loc_004CDB01: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CDB07u); RECOMP_ABI_CALL(0x005CFF90u, sub_005CFF90); /* call 0x005CFF90 */

loc_004CDB07: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_004CDB1F; /* jne: not equal / not zero */

loc_004CDB0D: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x004CDB14u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CDB11u); } /* indirect call */
    }

loc_004CDB14: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004CDB1F; /* je: equal / zero */

loc_004CDB18: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x004CDB1Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CDB1Cu); } /* indirect call */
    }

loc_004CDB1F: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x004CDB26u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CDB23u); } /* indirect call */
    }

loc_004CDB26: ;
    ecx = MEM32(esi + 0x28);
    ebx = eax;
    eax = MEM32(ebp + -8);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, ebx);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(eax)) >> 32) & 1);
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CDB39u); RECOMP_ABI_CALL(0x004C2E61u, sub_004C2E61); /* call 0x004C2E61 */

loc_004CDB39: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004CDB40u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CDB3Du); } /* indirect call */
    }

loc_004CDB40: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x24) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0x24 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_004CDBE4; /* je: equal / zero */

loc_004CDB49: ;
    eax = MEM32(ebx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(ebp + -20) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_004CDBC7; /* jbe: below or equal (unsigned <=) */

loc_004CDB53: ;
    edi = MEM32(ebp + -8);
    eax = MEM32(esi + 0x30);
    { uint32_t _sv=(uint32_t)(edi), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        edi = _sv << _sc;
        _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = MEM32(edi + eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_004CDB7B; /* jne: not equal / not zero */

loc_004CDB63: ;
    PUSH32(esp, eax);
    ecx = ebx + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CDB6Cu); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004CDB6C: ;
    ecx = MEM32(esi + 0x30);
    PUSH32(esp, eax);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(edi)) >> 32) & 1);
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CDB77u); RECOMP_ABI_CALL(0x004C2EA0u, sub_004C2EA0); /* call 0x004C2EA0 */

loc_004CDB77: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_004CDB97;

loc_004CDB7B: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CDB84u); RECOMP_ABI_CALL(0x004C9265u, sub_004C9265); /* call 0x004C9265 */

loc_004CDB84: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -20) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_004CDB97; /* jb: below (unsigned <) */

loc_004CDB89: ;
    ecx = MEM32(ebp + -8);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_004CDB97; /* jne: not equal / not zero */

loc_004CDB93: ;
    MEM8(ebp + -1) = 1;

loc_004CDB97: ;
    PUSH32(esp, eax);
    ecx = ebx + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CDBA0u); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004CDBA0: ;
    ecx = MEM32(esi + 0x30);
    PUSH32(esp, eax);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(edi)) >> 32) & 1);
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CDBABu); RECOMP_ABI_CALL(0x004C2EA0u, sub_004C2EA0); /* call 0x004C2EA0 */

loc_004CDBAB: ;
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_004CDBB9; /* jne: not equal / not zero */

loc_004CDBB3: ;
    ecx = MEM32(ebp + -12);
    MEM32(esi + 0x38) = ecx;

loc_004CDBB9: ;
    edx = MEM32(ebp + -12);
    ecx = MEM32(esi + 0x2C);
    MEM32(ebp + -12) = MEM32(ebp + -12) + 1;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + edx * 4) = eax;
    goto loc_004CDBE4;

loc_004CDBC7: ;
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_004CDBE4; /* jne: not equal / not zero */

loc_004CDBCF: ;
    eax = MEM32(ebp + -12);
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    edx = eax + -1;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x38) = eax;
    MEM8(ebp + -1) = 1;

loc_004CDBE4: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) + 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -24) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_004CDAD3; /* jb: below (unsigned <) */

loc_004CDBF3: ;
    POP32(esp, ebx);

loc_004CDBF4: ;
    _fa = (uint32_t)(MEM8(ebp + -1)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -1), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    eax = MEM32(ebp + -12);
    MEM32(esi + 0x34) = eax;
    edi = 0x7B891F;
    if (CMP_EQ(_fa, _fb)) goto loc_004CDC12; /* je: equal / zero */

loc_004CDC05: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x867E88);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CDC12u); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004CDC12: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x8669C4);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CDC1Fu); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004CDC1F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004CDC23
 * Original: 0x004CDC23 - 0x004CDD70 (333 bytes, 122 insns)
 * Category: game_ui
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004CDC23(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004CDC23: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x867EA4);
    PUSH32(esp, MEM32(ebp + 8));
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CDC38u); RECOMP_ABI_CALL(0x004C17F2u, sub_004C17F2); /* call 0x004C17F2 */

loc_004CDC38: ;
    ebx = esi + 0x18;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CDC42u); RECOMP_ABI_CALL(0x0060847Eu, sub_0060847E); /* call 0x0060847E */

loc_004CDC42: ;
    ecx = esi + 0x1C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CDC4Au); RECOMP_ABI_CALL(0x00608424u, sub_00608424); /* call 0x00608424 */

loc_004CDC4A: ;
    edi = esi + 0x20;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CDC54u); RECOMP_ABI_CALL(0x006084ABu, sub_006084AB); /* call 0x006084AB */

loc_004CDC54: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = 0x8671C0;
    MEM32(ebx) = 0x8671B4;
    MEM32(esi + 0x1C) = 0x8671A8;
    MEM32(edi) = 0x8671A0;
    MEM32(esi + 0x24) = eax;
    MEM32(esi + 0x2C) = eax;
    MEM32(esi + 0x30) = eax;
    MEM32(esi + 0x34) = eax;
    MEM32(esi + 0x38) = eax;
    MEM32(esi + 0x3C) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CDC86u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004CDC86: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x004CDC8Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CDC8Au); } /* indirect call */
    }

loc_004CDC8D: ;
    edi = eax;
    eax = ebp + 8;
    ecx = edi;
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    PUSH32(esp, eax);
    eax = edi + 0x24;
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + 8) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CDCA6u); RECOMP_ABI_CALL(0x004DD750u, sub_004DD750); /* call 0x004DD750 */

loc_004CDCA6: ;
    eax = esi + 0x20;
    MEM32(ebp + 8) = eax;
    eax = ebp + 8;
    ecx = edi;
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    PUSH32(esp, eax);
    eax = edi + 8;
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CDCC0u); RECOMP_ABI_CALL(0x004DD750u, sub_004DD750); /* call 0x004DD750 */

loc_004CDCC0: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x004CDCC7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CDCC4u); } /* indirect call */
    }

loc_004CDCC7: ;
    edi = esi + 0x24;
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CDCD2u); RECOMP_ABI_CALL(0x004C2E22u, sub_004C2E22); /* call 0x004C2E22 */

loc_004CDCD2: ;
    eax = MEM32(edi);
    edi = MEM32(eax + 0x14);
    eax = edi * 4 + 4;
    PUSH32(esp, eax);
    MEM32(esi + 0x34) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CDCE7u); RECOMP_ABI_CALL(0x0001C626u, sub_0001C626); /* call 0x0001C626 */

loc_004CDCE7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004CDD01; /* je: equal / zero */

loc_004CDCEC: ;
    PUSH32(esp, 0x4C2E49);
    PUSH32(esp, edi);
    ebx = eax + 4;
    PUSH32(esp, 4);
    PUSH32(esp, ebx);
    MEM32(eax) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CDCFFu); RECOMP_ABI_CALL(0x000199EEu, sub_000199EE); /* call 0x000199EE */

loc_004CDCFF: ;
    goto loc_004CDD03;

loc_004CDD01: ;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004CDD03: ;
    edi = MEM32(esi + 0x34);
    eax = edi * 4 + 4;
    PUSH32(esp, eax);
    MEM32(esi + 0x28) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CDD16u); RECOMP_ABI_CALL(0x0001C626u, sub_0001C626); /* call 0x0001C626 */

loc_004CDD16: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004CDD30; /* je: equal / zero */

loc_004CDD1B: ;
    PUSH32(esp, 0x4C2E88);
    PUSH32(esp, edi);
    ebx = eax + 4;
    PUSH32(esp, 4);
    PUSH32(esp, ebx);
    MEM32(eax) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CDD2Eu); RECOMP_ABI_CALL(0x000199EEu, sub_000199EE); /* call 0x000199EE */

loc_004CDD2E: ;
    goto loc_004CDD32;

loc_004CDD30: ;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004CDD32: ;
    MEM32(esi + 0x30) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CDD3Au); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004CDD3A: ;
    ecx = MEM32(esi + 0x34);
    edx = MEM32(eax);
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x004CDD4Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CDD4Au); } /* indirect call */
    }

loc_004CDD4C: ;
    ecx = MEM32(esi + 0x34);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    MEM32(esi + 0x2C) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CDD5Du); RECOMP_ABI_CALL(0x005CFEF0u, sub_005CFEF0); /* call 0x005CFEF0 */

loc_004CDD5D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CDD67u); RECOMP_ABI_CALL(0x004CDA9Fu, sub_004CDA9F); /* call 0x004CDA9F */

loc_004CDD67: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CDD70
 * Original: 0x004CDD70 - 0x004CDD8C (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CDD70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CDD70: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004CDD78u); RECOMP_ABI_CALL(0x004C93F2u, sub_004C93F2); /* call 0x004C93F2 */

loc_004CDD78: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004CDD86; /* je: equal / zero */

loc_004CDD7F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004CDD85u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004CDD85: ;
    POP32(esp, ecx);

loc_004CDD86: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CDD8C
 * Original: 0x004CDD8C - 0x004CDDEF (99 bytes, 41 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CDD8C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004CDD8C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = MEM32(esi + 0x38);
    PUSH32(esp, edi);
    PUSH32(esp, 0x004CDD9Bu); RECOMP_ABI_CALL(0x004C973Au, sub_004C973A); /* call 0x004C973A */

loc_004CDD9B: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x004CDDA4u); RECOMP_ABI_CALL(0x004C92D9u, sub_004C92D9); /* call 0x004C92D9 */

loc_004CDDA4: ;
    edx = MEM32(eax);
    ecx = esi + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(esp + 0x18));
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x004CDDB3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CDDB0u); } /* indirect call */
    }

loc_004CDDB3: ;
    PUSH32(esp, eax);
    ecx = esi + 0x3C;
    PUSH32(esp, 0x004CDDBCu); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004CDDBC: ;
    eax = MEM32(esi + 0x2C);
    eax = MEM32(eax + edi * 4);
    ecx = MEM32(esi + 0x30);
    edi = MEM32(ecx + eax * 4);
    PUSH32(esp, 0x004CDDCDu); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004CDDCD: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 0x14));
    ebx = eax;
    eax = MEM32(edi);
    ebp = MEM32(ebx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x004CDDDCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CDDD9u); } /* indirect call */
    }

loc_004CDDDC: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x38));
    ecx = ebx;
    { uint32_t _icall_target = MEM32(ebp + 0x80); PUSH32(esp, 0x004CDDE8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CDDE2u); } /* indirect call */
    }

loc_004CDDE8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CDDEF
 * Original: 0x004CDDEF - 0x004CDE7A (139 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CDDEF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004CDDEF: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    ebx = esi + 0x18;
    ebp = esi + 0x1C;
    PUSH32(esp, edi);
    MEM32(esi) = 0x8672F0;
    MEM32(ebx) = 0x8672D0;
    MEM32(ebp) = 0x8672B4;
    MEM32(esi + 0x20) = 0x8672A8;
    MEM32(esi + 0x24) = 0x86729C;
    PUSH32(esp, 0x004CDE21u); RECOMP_ABI_CALL(0x004C98A2u, sub_004C98A2); /* call 0x004C98A2 */

loc_004CDE21: ;
    edi = esi + 0x2C;
    ecx = MEM32(edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004CDE38; /* je: equal / zero */

loc_004CDE2A: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004CDE2Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CDE2Cu); } /* indirect call */
    }

loc_004CDE2F: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x004CDE38u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004CDE38: ;
    ecx = MEM32(esi + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004CDE44; /* je: equal / zero */

loc_004CDE3F: ;
    PUSH32(esp, 0x004CDE44u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004CDE44: ;
    edi = MEM32(edi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004CDE51; /* je: equal / zero */

loc_004CDE4A: ;
    ecx = edi;
    PUSH32(esp, 0x004CDE51u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004CDE51: ;
    ecx = esi + 0x24;
    PUSH32(esp, 0x004CDE59u); RECOMP_ABI_CALL(0x004DCA2Fu, sub_004DCA2F); /* call 0x004DCA2F */

loc_004CDE59: ;
    ecx = esi + 0x20;
    PUSH32(esp, 0x004CDE61u); RECOMP_ABI_CALL(0x006084E1u, sub_006084E1); /* call 0x006084E1 */

loc_004CDE61: ;
    ecx = ebp;
    PUSH32(esp, 0x004CDE68u); RECOMP_ABI_CALL(0x00608517u, sub_00608517); /* call 0x00608517 */

loc_004CDE68: ;
    ecx = ebx;
    PUSH32(esp, 0x004CDE6Fu); RECOMP_ABI_CALL(0x004AD93Du, sub_004AD93D); /* call 0x004AD93D */

loc_004CDE6F: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_004C1837(); return; /* tail jmp 0x004C1837 */

}

/**
 * sub_004CDE7A
 * Original: 0x004CDE7A - 0x004CDE96 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CDE7A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CDE7A: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004CDE82u); RECOMP_ABI_CALL(0x004C9C36u, sub_004C9C36); /* call 0x004C9C36 */

loc_004CDE82: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004CDE90; /* je: equal / zero */

loc_004CDE89: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004CDE8Fu); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004CDE8F: ;
    POP32(esp, ecx);

loc_004CDE90: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CDE96
 * Original: 0x004CDE96 - 0x004CDEB8 (34 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CDE96(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CDE96: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x867470;
    PUSH32(esp, 0x004CDEA4u); RECOMP_ABI_CALL(0x004C1837u, sub_004C1837); /* call 0x004C1837 */

loc_004CDEA4: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004CDEB2; /* je: equal / zero */

loc_004CDEAB: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004CDEB1u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004CDEB1: ;
    POP32(esp, ecx);

loc_004CDEB2: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CDEB8
 * Original: 0x004CDEB8 - 0x004CDED4 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CDEB8(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CDEB8: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004CDEC0u); RECOMP_ABI_CALL(0x004C9DC7u, sub_004C9DC7); /* call 0x004C9DC7 */

loc_004CDEC0: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004CDECE; /* je: equal / zero */

loc_004CDEC7: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004CDECDu); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004CDECD: ;
    POP32(esp, ecx);

loc_004CDECE: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CDED4
 * Original: 0x004CDED4 - 0x004CDEF4 (32 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CDED4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CDED4: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 8));
    esi = esi | 0xFFFFFFFFu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x004CDEE1u); RECOMP_ABI_CALL(0x004CA094u, sub_004CA094); /* call 0x004CA094 */

loc_004CDEE1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004CDEEE; /* je: equal / zero */

loc_004CDEE5: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x004CDEECu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CDEE9u); } /* indirect call */
    }

loc_004CDEEC: ;
    esi = eax;

loc_004CDEEE: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CDEF4
 * Original: 0x004CDEF4 - 0x004CDF0F (27 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_004CDEF4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CDEF4: ;
    PUSH32(esp, MEM32(esp + 4));
    PUSH32(esp, 0x004CDEFDu); RECOMP_ABI_CALL(0x004CA094u, sub_004CA094); /* call 0x004CA094 */

loc_004CDEFD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004CDF0A; /* je: equal / zero */

loc_004CDF01: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004CDF08u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CDF05u); } /* indirect call */
    }

loc_004CDF08: ;
    goto loc_004CDF0C;

loc_004CDF0A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004CDF0C: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CDF0F
 * Original: 0x004CDF0F - 0x004CDF3E (47 bytes, 16 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CDF0F(void)
{

loc_004CDF0F: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0x004CDF19u); RECOMP_ABI_CALL(0x004CA094u, sub_004CA094); /* call 0x004CA094 */

loc_004CDF19: ;
    ecx = MEM32(0x90E424);
    esi = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x004CDF26u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CDF23u); } /* indirect call */
    }

loc_004CDF26: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 0x14));
    edx = MEM32(eax);
    PUSH32(esp, MEM32(esp + 0x14));
    ecx = eax;
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004CDF3Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CDF37u); } /* indirect call */
    }

loc_004CDF3A: ;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_004CDF3E
 * Original: 0x004CDF3E - 0x004CDF81 (67 bytes, 29 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CDF3E(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004CDF3E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x10));
    esi = ecx;
    PUSH32(esp, 0x004CDF4Cu); RECOMP_ABI_CALL(0x004CA04Au, sub_004CA04A); /* call 0x004CA04A */

loc_004CDF4C: ;
    edi = eax;
    PUSH32(esp, 0x004CDF53u); RECOMP_ABI_CALL(0x004DC981u, sub_004DC981); /* call 0x004DC981 */

loc_004CDF53: ;
    ebx = MEM32(edi);
    ecx = esi;
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    edx = esi + 0x20;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004CDF68u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CDF65u); } /* indirect call */
    }

loc_004CDF68: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0x1C));
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebx + 0x3C); PUSH32(esp, 0x004CDF72u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CDF6Fu); } /* indirect call */
    }

loc_004CDF72: ;
    PUSH32(esp, eax);
    ecx = esi + 0x38;
    PUSH32(esp, 0x004CDF7Bu); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004CDF7B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004CDF81
 * Original: 0x004CDF81 - 0x004CE012 (145 bytes, 58 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004CDF81(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CDF81: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x30);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), esi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_004CE00C; /* jle: less or equal (signed <=) */

loc_004CDF92: ;
    ecx = MEM32(0x90E424);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x004CDF9Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CDF9Au); } /* indirect call */
    }

loc_004CDF9D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 8));
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x004CDFA7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CDFA4u); } /* indirect call */
    }

loc_004CDFA7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004CDFD0; /* jne: not equal / not zero */

loc_004CDFAB: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CDFB0u); RECOMP_ABI_CALL(0x004DC955u, sub_004DC955); /* call 0x004DC955 */

loc_004CDFB0: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x10);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CDFBAu); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004CDFBA: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004CDFF5; /* je: equal / zero */

loc_004CDFC1: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = eax;
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CDFCEu); RECOMP_ABI_CALL(0x004C19C8u, sub_004C19C8); /* call 0x004C19C8 */

loc_004CDFCE: ;
    goto loc_004CDFF7;

loc_004CDFD0: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CDFD5u); RECOMP_ABI_CALL(0x004DC955u, sub_004DC955); /* call 0x004DC955 */

loc_004CDFD5: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x10);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CDFDFu); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004CDFDF: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004CDFF5; /* je: equal / zero */

loc_004CDFE6: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = eax;
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CDFF3u); RECOMP_ABI_CALL(0x004C1906u, sub_004C1906); /* call 0x004C1906 */

loc_004CDFF3: ;
    goto loc_004CDFF7;

loc_004CDFF5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004CDFF7: ;
    esi = edi + 0x40;
    ecx = esi;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CE002u); RECOMP_ABI_CALL(0x004C2F67u, sub_004C2F67); /* call 0x004C2F67 */

loc_004CE002: ;
    PUSH32(esp, MEM32(esi));
    ecx = MEM32(edi + 0x30);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CE00Cu); RECOMP_ABI_CALL(0x004CC3F8u, sub_004CC3F8); /* call 0x004CC3F8 */

loc_004CE00C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004CE012
 * Original: 0x004CE012 - 0x004CE02E (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CE012(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CE012: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004CE01Au); RECOMP_ABI_CALL(0x004CA33Eu, sub_004CA33E); /* call 0x004CA33E */

loc_004CE01A: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004CE028; /* je: equal / zero */

loc_004CE021: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004CE027u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004CE027: ;
    POP32(esp, ecx);

loc_004CE028: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CE02E
 * Original: 0x004CE02E - 0x004CE04A (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CE02E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CE02E: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004CE036u); RECOMP_ABI_CALL(0x004CA4C3u, sub_004CA4C3); /* call 0x004CA4C3 */

loc_004CE036: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004CE044; /* je: equal / zero */

loc_004CE03D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004CE043u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004CE043: ;
    POP32(esp, ecx);

loc_004CE044: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CE04A
 * Original: 0x004CE04A - 0x004CE066 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CE04A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CE04A: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004CE052u); RECOMP_ABI_CALL(0x004CA6FEu, sub_004CA6FE); /* call 0x004CA6FE */

loc_004CE052: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004CE060; /* je: equal / zero */

loc_004CE059: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004CE05Fu); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004CE05F: ;
    POP32(esp, ecx);

loc_004CE060: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CE066
 * Original: 0x004CE066 - 0x004CE082 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CE066(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CE066: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004CE06Eu); RECOMP_ABI_CALL(0x004CA88Au, sub_004CA88A); /* call 0x004CA88A */

loc_004CE06E: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004CE07C; /* je: equal / zero */

loc_004CE075: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004CE07Bu); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004CE07B: ;
    POP32(esp, ecx);

loc_004CE07C: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CE082
 * Original: 0x004CE082 - 0x004CE09E (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CE082(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CE082: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004CE08Au); RECOMP_ABI_CALL(0x004CAAD0u, sub_004CAAD0); /* call 0x004CAAD0 */

loc_004CE08A: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004CE098; /* je: equal / zero */

loc_004CE091: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004CE097u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004CE097: ;
    POP32(esp, ecx);

loc_004CE098: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CE09E
 * Original: 0x004CE09E - 0x004CE0BA (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CE09E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CE09E: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004CE0A6u); RECOMP_ABI_CALL(0x004CAC51u, sub_004CAC51); /* call 0x004CAC51 */

loc_004CE0A6: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004CE0B4; /* je: equal / zero */

loc_004CE0AD: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004CE0B3u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004CE0B3: ;
    POP32(esp, ecx);

loc_004CE0B4: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CE0BA
 * Original: 0x004CE0BA - 0x004CE0D6 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CE0BA(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CE0BA: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004CE0C2u); RECOMP_ABI_CALL(0x004CE0D6u, sub_004CE0D6); /* call 0x004CE0D6 */

loc_004CE0C2: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004CE0D0; /* je: equal / zero */

loc_004CE0C9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004CE0CFu); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004CE0CF: ;
    POP32(esp, ecx);

loc_004CE0D0: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CE0D6
 * Original: 0x004CE0D6 - 0x004CE0F9 (35 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CE0D6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004CE0D6: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004CE0E5; /* je: equal / zero */

loc_004CE0E0: ;
    PUSH32(esp, 0x004CE0E5u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004CE0E5: ;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004CE0F1; /* je: equal / zero */

loc_004CE0EC: ;
    PUSH32(esp, 0x004CE0F1u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004CE0F1: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004DD576(); return; /* tail jmp 0x004DD576 */

}

/**
 * sub_004CE0F9
 * Original: 0x004CE0F9 - 0x004CE129 (48 bytes, 23 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CE0F9(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CE0F9: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x24), edi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004CE122; /* jbe: below or equal (unsigned <=) */

loc_004CE104: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x004CE10Cu); RECOMP_ABI_CALL(0x004CB00Cu, sub_004CB00C); /* call 0x004CB00C */

loc_004CE10C: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x004CE116u); RECOMP_ABI_CALL(0x005CFF90u, sub_005CFF90); /* call 0x005CFF90 */

loc_004CE116: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004CE122; /* je: equal / zero */

loc_004CE11C: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0x24) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004CE104; /* jb: below (unsigned <) */

loc_004CE122: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CE129
 * Original: 0x004CE129 - 0x004CE1E9 (192 bytes, 59 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CE129(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CE129: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x867EC0);
    PUSH32(esp, MEM32(esp + 0x14));
    esi = ecx;
    PUSH32(esp, 0x004CE13Cu); RECOMP_ABI_CALL(0x004C17F2u, sub_004C17F2); /* call 0x004C17F2 */

loc_004CE13C: ;
    edi = esi + 0x1C;
    ecx = edi;
    MEM32(esi + 0x18) = 0x865D58;
    PUSH32(esp, 0x004CE14Du); RECOMP_ABI_CALL(0x004AD96Au, sub_004AD96A); /* call 0x004AD96A */

loc_004CE14D: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = 0x867808;
    MEM32(esi + 0x18) = 0x8677F8;
    MEM32(edi) = 0x8677F0;
    MEM32(esi + 0x20) = ebx;
    MEM32(esi + 0x24) = ebx;
    MEM32(esi + 0x28) = ebx;
    PUSH32(esp, 0x004CE170u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004CE170: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x19C);
    PUSH32(esp, 0x004CE17Du); RECOMP_ABI_CALL(0x004DD5B1u, sub_004DD5B1); /* call 0x004DD5B1 */

loc_004CE17D: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004CE19C; /* je: equal / zero */

loc_004CE184: ;
    PUSH32(esp, 0x11);
    POP32(esp, ecx);
    PUSH32(esp, 0x4CACC1);
    PUSH32(esp, ecx);
    edi = eax + 4;
    PUSH32(esp, 0x18);
    PUSH32(esp, edi);
    MEM32(eax) = ecx;
    PUSH32(esp, 0x004CE19Au); RECOMP_ABI_CALL(0x000199EEu, sub_000199EE); /* call 0x000199EE */

loc_004CE19A: ;
    goto loc_004CE19E;

loc_004CE19C: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004CE19E: ;
    MEM32(esi + 0x28) = edi;
    PUSH32(esp, MEM32(0x8D7D90));
    ecx = esi;
    PUSH32(esp, MEM32(0x90E434));
    PUSH32(esp, 0x004CE1B4u); RECOMP_ABI_CALL(0x004CADEAu, sub_004CADEA); /* call 0x004CADEA */

loc_004CE1B4: ;
    _fa = (uint32_t)(MEM32(0x90E434)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x90E434), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004CE1DB; /* je: equal / zero */

loc_004CE1BC: ;
    PUSH32(esp, 0x004CE1C1u); RECOMP_ABI_CALL(0x004DC96Bu, sub_004DC96B); /* call 0x004DC96B */

loc_004CE1C1: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(0x90E434));
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004CE1CEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CE1CBu); } /* indirect call */
    }

loc_004CE1CE: ;
    MEM32(0x8D7D90) = MEM32(0x8D7D90) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(0x8D7D90)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x90E434) = ebx;

loc_004CE1DB: ;
    POP32(esp, edi);
    MEM32(esi + 0x30) = ebx;
    MEM32(esi + 0x2C) = ebx;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CE1E9
 * Original: 0x004CE1E9 - 0x004CE205 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CE1E9(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CE1E9: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004CE1F1u); RECOMP_ABI_CALL(0x004CAD4Fu, sub_004CAD4F); /* call 0x004CAD4F */

loc_004CE1F1: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004CE1FF; /* je: equal / zero */

loc_004CE1F8: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004CE1FEu); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004CE1FE: ;
    POP32(esp, ecx);

loc_004CE1FF: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CE205
 * Original: 0x004CE205 - 0x004CE22A (37 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CE205(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CE205: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0xC));
    esi = ecx;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x004CE214u); RECOMP_ABI_CALL(0x004CE0F9u, sub_004CE0F9); /* call 0x004CE0F9 */

loc_004CE214: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x24) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_004CE223; /* jae: above or equal (unsigned >=) */

loc_004CE219: ;
    ecx = MEM32(esi + 0x28);
    eax = eax + eax * 2;
    edi = MEM32(ecx + eax * 8 + 0xC);

loc_004CE223: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CE22A
 * Original: 0x004CE22A - 0x004CE270 (70 bytes, 25 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CE22A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CE22A: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, MEM32(esp + 0xC));
    esi = ecx;
    MEM8(edi) = 0;
    PUSH32(esp, 0x004CE23Eu); RECOMP_ABI_CALL(0x004CE0F9u, sub_004CE0F9); /* call 0x004CE0F9 */

loc_004CE23E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x24) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_004CE26B; /* jae: above or equal (unsigned >=) */

loc_004CE243: ;
    ecx = MEM32(esi + 0x28);
    eax = eax + eax * 2;
    _fa = (uint32_t)(MEM32(ecx + eax * 8 + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + eax * 8 + 8), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004CE26B; /* jne: not equal / not zero */

loc_004CE250: ;
    ecx = MEM32(0x90E424);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x004CE25Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CE258u); } /* indirect call */
    }

loc_004CE25B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 0x14));
    edx = MEM32(eax);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x14));
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x004CE26Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CE268u); } /* indirect call */
    }

loc_004CE26B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004CE270
 * Original: 0x004CE270 - 0x004CE2A9 (57 bytes, 24 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CE270(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CE270: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 8));
    esi = ecx;
    PUSH32(esp, 0x004CE27Cu); RECOMP_ABI_CALL(0x004CE0F9u, sub_004CE0F9); /* call 0x004CE0F9 */

loc_004CE27C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x24) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_004CE2A5; /* jae: above or equal (unsigned >=) */

loc_004CE281: ;
    ecx = MEM32(esi + 0x28);
    eax = eax + eax * 2;
    eax = ecx + eax * 8;
    ecx = MEM32(eax + 8);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_004CE299; /* je: equal / zero */

loc_004CE291: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_004CE2A5; /* jne: not equal / not zero */

loc_004CE294: ;
    eax = MEM32(eax + 0x14);
    goto loc_004CE29C;

loc_004CE299: ;
    eax = MEM32(eax + 0x10);

loc_004CE29C: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 6);
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x004CE2A5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CE2A2u); } /* indirect call */
    }

loc_004CE2A5: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CE2A9
 * Original: 0x004CE2A9 - 0x004CE2E4 (59 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CE2A9(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CE2A9: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 8));
    esi = ecx;
    PUSH32(esp, 0x004CE2B5u); RECOMP_ABI_CALL(0x004CE0F9u, sub_004CE0F9); /* call 0x004CE0F9 */

loc_004CE2B5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x24) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_004CE2DE; /* jae: above or equal (unsigned >=) */

loc_004CE2BA: ;
    ecx = MEM32(esi + 0x28);
    eax = eax + eax * 2;
    eax = ecx + eax * 8;
    ecx = MEM32(eax + 8);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_004CE2D2; /* je: equal / zero */

loc_004CE2CA: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_004CE2DE; /* jne: not equal / not zero */

loc_004CE2CD: ;
    eax = MEM32(eax + 0x14);
    goto loc_004CE2D5;

loc_004CE2D2: ;
    eax = MEM32(eax + 0x10);

loc_004CE2D5: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x004CE2DCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CE2D9u); } /* indirect call */
    }

loc_004CE2DC: ;
    goto loc_004CE2E0;

loc_004CE2DE: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_004CE2E0: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CE2E4
 * Original: 0x004CE2E4 - 0x004CE331 (77 bytes, 28 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CE2E4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CE2E4: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, MEM32(esp + 0xC));
    esi = ecx;
    MEM8(edi) = 0;
    PUSH32(esp, 0x004CE2F8u); RECOMP_ABI_CALL(0x004CE0F9u, sub_004CE0F9); /* call 0x004CE0F9 */

loc_004CE2F8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x24) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_004CE32C; /* jae: above or equal (unsigned >=) */

loc_004CE2FD: ;
    ecx = MEM32(esi + 0x28);
    eax = eax + eax * 2;
    eax = MEM32(ecx + eax * 8 + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004CE32C; /* jb: below (unsigned <) */

loc_004CE30C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_004CE32C; /* ja: above (unsigned >) */

loc_004CE311: ;
    ecx = MEM32(0x90E424);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x004CE31Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CE319u); } /* indirect call */
    }

loc_004CE31C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 0x14));
    edx = MEM32(eax);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x14));
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x004CE32Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CE329u); } /* indirect call */
    }

loc_004CE32C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004CE331
 * Original: 0x004CE331 - 0x004CE37E (77 bytes, 28 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CE331(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CE331: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, MEM32(esp + 0xC));
    esi = ecx;
    MEM8(edi) = 0;
    PUSH32(esp, 0x004CE345u); RECOMP_ABI_CALL(0x004CE0F9u, sub_004CE0F9); /* call 0x004CE0F9 */

loc_004CE345: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x24) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_004CE379; /* jae: above or equal (unsigned >=) */

loc_004CE34A: ;
    ecx = MEM32(esi + 0x28);
    eax = eax + eax * 2;
    eax = MEM32(ecx + eax * 8 + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004CE379; /* jb: below (unsigned <) */

loc_004CE359: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_004CE379; /* ja: above (unsigned >) */

loc_004CE35E: ;
    ecx = MEM32(0x90E424);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x004CE369u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CE366u); } /* indirect call */
    }

loc_004CE369: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 0x14));
    edx = MEM32(eax);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x14));
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x004CE379u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CE376u); } /* indirect call */
    }

loc_004CE379: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004CE37E
 * Original: 0x004CE37E - 0x004CE40D (143 bytes, 61 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004CE37E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CE37E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    esi = ecx;
    MEM8(ebx) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CE393u); RECOMP_ABI_CALL(0x004CE0F9u, sub_004CE0F9); /* call 0x004CE0F9 */

loc_004CE393: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x24) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_004CE407; /* jae: above or equal (unsigned >=) */

loc_004CE398: ;
    ecx = MEM32(esi + 0x28);
    eax = eax + eax * 2;
    eax = ecx + eax * 8;
    ecx = MEM32(eax + 8);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    if ((_fa == 0)) goto loc_004CE3DA; /* je: equal / zero */

loc_004CE3A9: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_004CE406; /* jne: not equal / not zero */

loc_004CE3AC: ;
    ecx = MEM32(0x90E424);
    esi = MEM32(eax + 0x14);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x004CE3BAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CE3B7u); } /* indirect call */
    }

loc_004CE3BA: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x10));
    edx = MEM32(esi);
    edi = eax;
    eax = MEM32(edi);
    PUSH32(esp, ebx);
    ecx = esi;
    MEM32(ebp + 0x10) = eax;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x004CE3CCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CE3C9u); } /* indirect call */
    }

loc_004CE3CC: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    eax = MEM32(ebp + 0x10);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x004CE3D8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CE3D5u); } /* indirect call */
    }

loc_004CE3D8: ;
    goto loc_004CE406;

loc_004CE3DA: ;
    ecx = MEM32(0x90E424);
    esi = MEM32(eax + 0x10);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x004CE3E8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CE3E5u); } /* indirect call */
    }

loc_004CE3E8: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x10));
    edx = MEM32(esi);
    edi = eax;
    eax = MEM32(edi);
    PUSH32(esp, ebx);
    ecx = esi;
    MEM32(ebp + 0x10) = eax;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x004CE3FAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CE3F7u); } /* indirect call */
    }

loc_004CE3FA: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    eax = MEM32(ebp + 0x10);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x004CE406u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CE403u); } /* indirect call */
    }

loc_004CE406: ;
    POP32(esp, edi);

loc_004CE407: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004CE40D
 * Original: 0x004CE40D - 0x004CE43F (50 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CE40D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CE40D: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 8));
    esi = ecx;
    PUSH32(esp, 0x004CE419u); RECOMP_ABI_CALL(0x004CE0F9u, sub_004CE0F9); /* call 0x004CE0F9 */

loc_004CE419: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x24) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_004CE439; /* jae: above or equal (unsigned >=) */

loc_004CE41E: ;
    ecx = MEM32(esi + 0x28);
    eax = eax + eax * 2;
    eax = ecx + eax * 8;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004CE439; /* jne: not equal / not zero */

loc_004CE42D: ;
    eax = MEM32(eax + 0x10);
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x004CE437u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CE434u); } /* indirect call */
    }

loc_004CE437: ;
    goto loc_004CE43B;

loc_004CE439: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004CE43B: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CE43F
 * Original: 0x004CE43F - 0x004CE471 (50 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CE43F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CE43F: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 8));
    esi = ecx;
    PUSH32(esp, 0x004CE44Bu); RECOMP_ABI_CALL(0x004CE0F9u, sub_004CE0F9); /* call 0x004CE0F9 */

loc_004CE44B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x24) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_004CE46B; /* jae: above or equal (unsigned >=) */

loc_004CE450: ;
    ecx = MEM32(esi + 0x28);
    eax = eax + eax * 2;
    eax = ecx + eax * 8;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004CE46B; /* jne: not equal / not zero */

loc_004CE45F: ;
    eax = MEM32(eax + 0x10);
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x004CE469u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CE466u); } /* indirect call */
    }

loc_004CE469: ;
    goto loc_004CE46D;

loc_004CE46B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004CE46D: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CE471
 * Original: 0x004CE471 - 0x004CE4A8 (55 bytes, 20 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CE471(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004CE471: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 8));
    esi = ecx;
    PUSH32(esp, 0x004CE47Du); RECOMP_ABI_CALL(0x004CE0F9u, sub_004CE0F9); /* call 0x004CE0F9 */

loc_004CE47D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x24) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_004CE4A2; /* jae: above or equal (unsigned >=) */

loc_004CE482: ;
    ecx = MEM32(esi + 0x28);
    eax = eax + eax * 2;
    _fa = (uint32_t)(MEM32(ecx + eax * 8 + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + eax * 8 + 8), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004CE4A2; /* jne: not equal / not zero */

loc_004CE48F: ;
    ecx = MEM32(0x90E424);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x004CE49Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CE497u); } /* indirect call */
    }

loc_004CE49A: ;
    edx = MEM32(eax);
    POP32(esp, esi);
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x20)); return; /* indirect tail jmp */

loc_004CE4A2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CE4A8
 * Original: 0x004CE4A8 - 0x004CE4EB (67 bytes, 24 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CE4A8(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CE4A8: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, MEM32(esp + 0xC));
    MEM32(edi) = 1;
    esi = ecx;
    MEM8(eax) = 0;
    PUSH32(esp, 0x004CE4C6u); RECOMP_ABI_CALL(0x004CE0F9u, sub_004CE0F9); /* call 0x004CE0F9 */

loc_004CE4C6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x24) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_004CE4E6; /* jae: above or equal (unsigned >=) */

loc_004CE4CB: ;
    ecx = MEM32(esi + 0x28);
    eax = eax + eax * 2;
    eax = ecx + eax * 8;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004CE4E6; /* jne: not equal / not zero */

loc_004CE4DA: ;
    eax = MEM32(eax + 0x14);
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x004CE4E4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CE4E1u); } /* indirect call */
    }

loc_004CE4E4: ;
    MEM32(edi) = eax;

loc_004CE4E6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004CE4EB
 * Original: 0x004CE4EB - 0x004CE51B (48 bytes, 18 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CE4EB(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CE4EB: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 8));
    esi = ecx;
    PUSH32(esp, 0x004CE4F7u); RECOMP_ABI_CALL(0x004CE0F9u, sub_004CE0F9); /* call 0x004CE0F9 */

loc_004CE4F7: ;
    ecx = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 0x24) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_004CE517; /* jae: above or equal (unsigned >=) */

loc_004CE500: ;
    edx = MEM32(esi + 0x28);
    ecx = ecx + ecx * 2;
    ecx = edx + ecx * 8;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 8), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004CE517; /* jne: not equal / not zero */

loc_004CE50F: ;
    ecx = MEM32(ecx + 0x14);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x004CE517u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CE514u); } /* indirect call */
    }

loc_004CE517: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CE51B
 * Original: 0x004CE51B - 0x004CE54D (50 bytes, 18 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CE51B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CE51B: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 8));
    esi = ecx;
    PUSH32(esp, 0x004CE527u); RECOMP_ABI_CALL(0x004CE0F9u, sub_004CE0F9); /* call 0x004CE0F9 */

loc_004CE527: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x24) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_004CE549; /* jae: above or equal (unsigned >=) */

loc_004CE52C: ;
    ecx = MEM32(esi + 0x28);
    eax = eax + eax * 2;
    eax = ecx + eax * 8;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004CE549; /* jne: not equal / not zero */

loc_004CE53B: ;
    eax = MEM32(eax + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 0xC));
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x004CE549u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CE546u); } /* indirect call */
    }

loc_004CE549: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004CE54D
 * Original: 0x004CE54D - 0x004CE57F (50 bytes, 18 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CE54D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CE54D: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 8));
    esi = ecx;
    PUSH32(esp, 0x004CE559u); RECOMP_ABI_CALL(0x004CE0F9u, sub_004CE0F9); /* call 0x004CE0F9 */

loc_004CE559: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x24) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_004CE57B; /* jae: above or equal (unsigned >=) */

loc_004CE55E: ;
    ecx = MEM32(esi + 0x28);
    eax = eax + eax * 2;
    eax = ecx + eax * 8;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004CE57B; /* jne: not equal / not zero */

loc_004CE56D: ;
    eax = MEM32(eax + 0x14);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 0xC));
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x004CE57Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CE578u); } /* indirect call */
    }

loc_004CE57B: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004CE57F
 * Original: 0x004CE57F - 0x004CE5AD (46 bytes, 17 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CE57F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CE57F: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 8));
    esi = ecx;
    PUSH32(esp, 0x004CE58Bu); RECOMP_ABI_CALL(0x004CE0F9u, sub_004CE0F9); /* call 0x004CE0F9 */

loc_004CE58B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x24) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_004CE5A9; /* jae: above or equal (unsigned >=) */

loc_004CE590: ;
    ecx = MEM32(esi + 0x28);
    eax = eax + eax * 2;
    eax = ecx + eax * 8;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004CE5A9; /* jne: not equal / not zero */

loc_004CE59F: ;
    eax = MEM32(eax + 0x14);
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x004CE5A9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CE5A6u); } /* indirect call */
    }

loc_004CE5A9: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CE5AD
 * Original: 0x004CE5AD - 0x004CE5DB (46 bytes, 17 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CE5AD(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CE5AD: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 8));
    esi = ecx;
    PUSH32(esp, 0x004CE5B9u); RECOMP_ABI_CALL(0x004CE0F9u, sub_004CE0F9); /* call 0x004CE0F9 */

loc_004CE5B9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x24) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_004CE5D7; /* jae: above or equal (unsigned >=) */

loc_004CE5BE: ;
    ecx = MEM32(esi + 0x28);
    eax = eax + eax * 2;
    eax = ecx + eax * 8;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004CE5D7; /* jne: not equal / not zero */

loc_004CE5CD: ;
    eax = MEM32(eax + 0x14);
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x004CE5D7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CE5D4u); } /* indirect call */
    }

loc_004CE5D7: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CE5DB
 * Original: 0x004CE5DB - 0x004CE60F (52 bytes, 19 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CE5DB(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CE5DB: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 8));
    esi = ecx;
    PUSH32(esp, 0x004CE5E7u); RECOMP_ABI_CALL(0x004CE0F9u, sub_004CE0F9); /* call 0x004CE0F9 */

loc_004CE5E7: ;
    ecx = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 0x24) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_004CE60B; /* jae: above or equal (unsigned >=) */

loc_004CE5F0: ;
    edx = MEM32(esi + 0x28);
    ecx = ecx + ecx * 2;
    ecx = edx + ecx * 8;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 8), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004CE60B; /* jne: not equal / not zero */

loc_004CE5FF: ;
    ecx = MEM32(ecx + 0x14);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 0xC));
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 0x44); PUSH32(esp, 0x004CE60Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CE608u); } /* indirect call */
    }

loc_004CE60B: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004CE60F
 * Original: 0x004CE60F - 0x004CE65F (80 bytes, 31 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004CE60F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CE60F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CE61Du); RECOMP_ABI_CALL(0x004CE0F9u, sub_004CE0F9); /* call 0x004CE0F9 */

loc_004CE61D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x24) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_004CE65A; /* jae: above or equal (unsigned >=) */

loc_004CE622: ;
    ecx = MEM32(esi + 0x28);
    eax = eax + eax * 2;
    eax = ecx + eax * 8;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004CE65A; /* jne: not equal / not zero */

loc_004CE631: ;
    ecx = MEM32(eax + 0x14);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 0x44); PUSH32(esp, 0x004CE63Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CE639u); } /* indirect call */
    }

loc_004CE63C: ;
    ecx = MEM32(0x90E424);
    esi = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x004CE649u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CE646u); } /* indirect call */
    }

loc_004CE649: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x14));
    edx = MEM32(eax);
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = eax;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x004CE65Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CE657u); } /* indirect call */
    }

loc_004CE65A: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_004CE65F
 * Original: 0x004CE65F - 0x004CE67B (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CE65F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CE65F: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004CE667u); RECOMP_ABI_CALL(0x004CB269u, sub_004CB269); /* call 0x004CB269 */

loc_004CE667: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004CE675; /* je: equal / zero */

loc_004CE66E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004CE674u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004CE674: ;
    POP32(esp, ecx);

loc_004CE675: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CE67B
 * Original: 0x004CE67B - 0x004CE697 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CE67B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CE67B: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004CE683u); RECOMP_ABI_CALL(0x004CB40Bu, sub_004CB40B); /* call 0x004CB40B */

loc_004CE683: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004CE691; /* je: equal / zero */

loc_004CE68A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004CE690u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004CE690: ;
    POP32(esp, ecx);

loc_004CE691: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CE697
 * Original: 0x004CE697 - 0x004CE6B3 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CE697(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CE697: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004CE69Fu); RECOMP_ABI_CALL(0x004CB692u, sub_004CB692); /* call 0x004CB692 */

loc_004CE69F: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004CE6AD; /* je: equal / zero */

loc_004CE6A6: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004CE6ACu); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004CE6AC: ;
    POP32(esp, ecx);

loc_004CE6AD: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CE6B3
 * Original: 0x004CE6B3 - 0x004CE6CF (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CE6B3(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CE6B3: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004CE6BBu); RECOMP_ABI_CALL(0x004CB947u, sub_004CB947); /* call 0x004CB947 */

loc_004CE6BB: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004CE6C9; /* je: equal / zero */

loc_004CE6C2: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004CE6C8u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004CE6C8: ;
    POP32(esp, ecx);

loc_004CE6C9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CE6CF
 * Original: 0x004CE6CF - 0x004CE6EB (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CE6CF(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CE6CF: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004CE6D7u); RECOMP_ABI_CALL(0x004CBD9Eu, sub_004CBD9E); /* call 0x004CBD9E */

loc_004CE6D7: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004CE6E5; /* je: equal / zero */

loc_004CE6DE: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004CE6E4u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004CE6E4: ;
    POP32(esp, ecx);

loc_004CE6E5: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CE6EB
 * Original: 0x004CE6EB - 0x004CE707 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CE6EB(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CE6EB: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004CE6F3u); RECOMP_ABI_CALL(0x004CBE5Au, sub_004CBE5A); /* call 0x004CBE5A */

loc_004CE6F3: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004CE701; /* je: equal / zero */

loc_004CE6FA: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004CE700u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004CE700: ;
    POP32(esp, ecx);

loc_004CE701: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CE707
 * Original: 0x004CE707 - 0x004CE758 (81 bytes, 28 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CE707(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CE707: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004CE70Fu); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_004CE70F: ;
    eax = MEM32(esp + 8);
    MEM32(esi) = 0x867EE0;
    ecx = MEM32(eax + 0x14);
    MEM32(esi + 0xC) = ecx;
    PUSH32(esp, eax);
    ecx = esi + 0x10;
    PUSH32(esp, 0x004CE728u); RECOMP_ABI_CALL(0x004C2DB6u, sub_004C2DB6); /* call 0x004C2DB6 */

loc_004CE728: ;
    MEM32(esi + 0x14) = MEM32(esi + 0x14) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0x004CE731u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004CE731: ;
    ecx = MEM32(esi + 0xC);
    edx = MEM32(eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x004CE744u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CE742u); } /* indirect call */
    }

loc_004CE744: ;
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = esi;
    MEM32(esi + 8) = eax;
    PUSH32(esp, 0x004CE752u); RECOMP_ABI_CALL(0x004CC3F8u, sub_004CC3F8); /* call 0x004CC3F8 */

loc_004CE752: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004CE758
 * Original: 0x004CE758 - 0x004CE774 (28 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CE758(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CE758: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004CE760u); RECOMP_ABI_CALL(0x004CE774u, sub_004CE774); /* call 0x004CE774 */

loc_004CE760: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004CE76E; /* je: equal / zero */

loc_004CE767: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004CE76Du); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004CE76D: ;
    POP32(esp, ecx);

loc_004CE76E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CE774
 * Original: 0x004CE774 - 0x004CE7B2 (62 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CE774(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004CE774: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), 0 (32-bit) */
    MEM32(esi) = 0x867EE0;
    if (CMP_EQ(_fa, _fb)) goto loc_004CE792; /* je: equal / zero */

loc_004CE783: ;
    PUSH32(esp, 0x004CE788u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004CE788: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi + 8));
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004CE792u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CE78Fu); } /* indirect call */
    }

loc_004CE792: ;
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004CE79E; /* je: equal / zero */

loc_004CE799: ;
    PUSH32(esp, 0x004CE79Eu); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004CE79E: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004CE7AA; /* je: equal / zero */

loc_004CE7A5: ;
    PUSH32(esp, 0x004CE7AAu); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004CE7AA: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004DD576(); return; /* tail jmp 0x004DD576 */

}

/**
 * sub_004CE7B2
 * Original: 0x004CE7B2 - 0x004CE898 (230 bytes, 83 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CE7B2(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CE7B2: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 4;
    ecx = edi;
    MEM32(esi) = 0x865C4C;
    PUSH32(esp, 0x004CE7C7u); RECOMP_ABI_CALL(0x004DCA26u, sub_004DCA26); /* call 0x004DCA26 */

loc_004CE7C7: ;
    ebx = esi + 8;
    ecx = ebx;
    PUSH32(esp, 0x004CE7D1u); RECOMP_ABI_CALL(0x004AD96Au, sub_004AD96A); /* call 0x004AD96A */

loc_004CE7D1: ;
    MEM32(ebx) = 0x8679E4;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = 0x8679F8;
    MEM32(edi) = 0x8679EC;
    MEM32(esi + 0xC) = ebx;
    MEM32(esi + 0x10) = ebx;
    MEM32(esi + 0x14) = ebx;
    MEM32(esi + 0x18) = ebx;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEM32(0x90E420) = esi;
    PUSH32(esp, 0x004CE7FFu); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004CE7FF: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x004CE806u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CE804u); } /* indirect call */
    }

loc_004CE806: ;
    PUSH32(esp, 0x004CE80Bu); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004CE80B: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x004CE815u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004CE815: ;
    edi = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004CE834; /* je: equal / zero */

loc_004CE81E: ;
    PUSH32(esp, 0x004CE823u); RECOMP_ABI_CALL(0x004DC9FAu, sub_004DC9FA); /* call 0x004DC9FA */

loc_004CE823: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004CE82Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CE827u); } /* indirect call */
    }

loc_004CE82A: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x004CE832u); RECOMP_ABI_CALL(0x004CC62Bu, sub_004CC62B); /* call 0x004CC62B */

loc_004CE832: ;
    goto loc_004CE836;

loc_004CE834: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004CE836: ;
    MEM32(esi + 0xC) = eax;
    PUSH32(esp, 0x004CE83Eu); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004CE83E: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x58);
    PUSH32(esp, 0x004CE848u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004CE848: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004CE858; /* je: equal / zero */

loc_004CE84F: ;
    ecx = eax;
    PUSH32(esp, 0x004CE856u); RECOMP_ABI_CALL(0x004C34FFu, sub_004C34FF); /* call 0x004C34FF */

loc_004CE856: ;
    goto loc_004CE85A;

loc_004CE858: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004CE85A: ;
    ecx = eax;
    MEM32(esi + 0x10) = eax;
    PUSH32(esp, 0x004CE864u); RECOMP_ABI_CALL(0x004CC696u, sub_004CC696); /* call 0x004CC696 */

loc_004CE864: ;
    PUSH32(esp, 0x004CE869u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004CE869: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x84);
    PUSH32(esp, 0x004CE876u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004CE876: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004CE886; /* je: equal / zero */

loc_004CE87D: ;
    ecx = eax;
    PUSH32(esp, 0x004CE884u); RECOMP_ABI_CALL(0x004C39B7u, sub_004C39B7); /* call 0x004C39B7 */

loc_004CE884: ;
    goto loc_004CE888;

loc_004CE886: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004CE888: ;
    ecx = eax;
    MEM32(esi + 0x14) = eax;
    PUSH32(esp, 0x004CE892u); RECOMP_ABI_CALL(0x004CCB07u, sub_004CCB07); /* call 0x004CCB07 */

loc_004CE892: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_004CE898
 * Original: 0x004CE898 - 0x004CE8B4 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CE898(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CE898: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004CE8A0u); RECOMP_ABI_CALL(0x004CC4E7u, sub_004CC4E7); /* call 0x004CC4E7 */

loc_004CE8A0: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004CE8AE; /* je: equal / zero */

loc_004CE8A7: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004CE8ADu); RECOMP_ABI_CALL(0x004C035Du, sub_004C035D); /* call 0x004C035D */

loc_004CE8AD: ;
    POP32(esp, ecx);

loc_004CE8AE: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CE8B4
 * Original: 0x004CE8B4 - 0x004CE8C8 (20 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CE8B4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004CE8B4: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x004CE8BBu); RECOMP_ABI_CALL(0x004C0348u, sub_004C0348); /* call 0x004C0348 */

loc_004CE8BB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004CE8C7; /* je: equal / zero */

loc_004CE8C0: ;
    ecx = eax;
    g_seh_ebp = ebp; sub_004CE7B2(); return; /* tail jmp 0x004CE7B2 */

loc_004CE8C7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004CE8C8
 * Original: 0x004CE8C8 - 0x004CE8D3 (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CE8C8(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CE8C8: ;
    _fb = (uint32_t)(0xFFFFFFE8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFE8u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x004CE8D0u); RECOMP_ABI_CALL(0x004CDA9Fu, sub_004CDA9F); /* call 0x004CDA9F */

loc_004CE8D0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CE8D3
 * Original: 0x004CE8D3 - 0x004CE8DE (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CE8D3(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CE8D3: ;
    _fb = (uint32_t)(0xFFFFFFE8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFE8u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x004CE8DBu); RECOMP_ABI_CALL(0x004CDA9Fu, sub_004CDA9F); /* call 0x004CDA9F */

loc_004CE8DB: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CE8DE
 * Original: 0x004CE8DE - 0x004CE8FA (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CE8DE(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CE8DE: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004CE8E6u); RECOMP_ABI_CALL(0x004CDDEFu, sub_004CDDEF); /* call 0x004CDDEF */

loc_004CE8E6: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004CE8F4; /* je: equal / zero */

loc_004CE8ED: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004CE8F3u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004CE8F3: ;
    POP32(esp, ecx);

loc_004CE8F4: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CE8FA
 * Original: 0x004CE8FA - 0x004CE94F (85 bytes, 29 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CE8FA(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CE8FA: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004CE902u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004CE902: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x004CE90Eu); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004CE90E: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004CE924; /* je: equal / zero */

loc_004CE915: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = eax;
    PUSH32(esp, 0x004CE922u); RECOMP_ABI_CALL(0x004CE707u, sub_004CE707); /* call 0x004CE707 */

loc_004CE922: ;
    goto loc_004CE926;

loc_004CE924: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004CE926: ;
    PUSH32(esp, eax);
    ecx = esi + 0x14;
    PUSH32(esp, 0x004CE92Fu); RECOMP_ABI_CALL(0x004C2F37u, sub_004C2F37); /* call 0x004C2F37 */

loc_004CE92F: ;
    PUSH32(esp, 0);
    ecx = esi + 0x18;
    PUSH32(esp, 0x004CE939u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004CE939: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x867EE4);
    ecx = esi + -28;
    PUSH32(esp, 0x004CE94Bu); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004CE94B: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004CE94F
 * Original: 0x004CE94F - 0x004CE966 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CE94F(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CE94F: ;
    PUSH32(esp, 0x10E);
    PUSH32(esp, 0x868148);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x004CE962u); RECOMP_ABI_CALL(0x00506060u, sub_00506060); /* call 0x00506060 */

loc_004CE962: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_004CE966
 * Original: 0x004CE966 - 0x004CE97B (21 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CE966(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004CE966: ;
    g_seh_ebp = ebp; sub_00504C90(); return; /* tail jmp 0x00504C90 */

}

/**
 * sub_004CE97B
 * Original: 0x004CE97B - 0x004CE998 (29 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CE97B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CE97B: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x868194;
    if (TEST_Z(_fa, _fb)) goto loc_004CE992; /* je: equal / zero */

loc_004CE98B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004CE991u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_004CE991: ;
    POP32(esp, ecx);

loc_004CE992: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CE998
 * Original: 0x004CE998 - 0x004CE9B3 (27 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CE998(void)
{

loc_004CE998: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x11);
    esi = ecx;
    PUSH32(esp, 0x004CE9A2u); RECOMP_ABI_CALL(0x004D075Cu, sub_004D075C); /* call 0x004D075C */

loc_004CE9A2: ;
    MEM32(esi) = 0x868198;
    MEM32(esi + 0xC) = 0x868194;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004CE9B3
 * Original: 0x004CE9B3 - 0x004CE9CD (26 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CE9B3(void)
{

loc_004CE9B3: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x004CE9BBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CE9B8u); } /* indirect call */
    }

loc_004CE9BB: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x004CE9C2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CE9BFu); } /* indirect call */
    }

loc_004CE9C2: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x004CE9CBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CE9C8u); } /* indirect call */
    }

loc_004CE9CB: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004CE9CD
 * Original: 0x004CE9CD - 0x004CE9D0 (3 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_004CE9CD(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CE9CD: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_004CE9D0
 * Original: 0x004CE9D0 - 0x004CE9D3 (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CE9D0(void)
{

loc_004CE9D0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CE9D3
 * Original: 0x004CE9D3 - 0x004CE9DF (12 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CE9D3(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CE9D3: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004CE9DE; /* je: equal / zero */

loc_004CE9D7: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x004CE9DEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CE9DBu); } /* indirect call */
    }

loc_004CE9DE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004CE9DF
 * Original: 0x004CE9DF - 0x004CE9E0 (1 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CE9DF(void)
{

loc_004CE9DF: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004CE9E0
 * Original: 0x004CE9E0 - 0x004CE9E3 (3 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CE9E0(void)
{

loc_004CE9E0: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_004CE9E3
 * Original: 0x004CE9E3 - 0x004CE9E9 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CE9E3(void)
{

loc_004CE9E3: ;
    eax = 0x8681DC;
    esp += 4; return; /* ret */

}

/**
 * sub_004CE9E9
 * Original: 0x004CE9E9 - 0x004CEA23 (58 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CE9E9(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CE9E9: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x868198;
    MEM32(esi + 0xC) = 0x868194;
    PUSH32(esp, 0x004CE9FEu); RECOMP_ABI_CALL(0x004D0774u, sub_004D0774); /* call 0x004D0774 */

loc_004CE9FE: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004CEA1D; /* je: equal / zero */

loc_004CEA05: ;
    PUSH32(esp, 0x10E);
    PUSH32(esp, 0x868148);
    PUSH32(esp, 0x110);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004CEA1Au); RECOMP_ABI_CALL(0x005060A0u, sub_005060A0); /* call 0x005060A0 */

loc_004CEA1A: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004CEA1D: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CEA23
 * Original: 0x004CEA23 - 0x004CEA3F (28 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CEA23(void)
{

loc_004CEA23: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x13);
    esi = ecx;
    PUSH32(esp, 0x004CEA2Du); RECOMP_ABI_CALL(0x004D075Cu, sub_004D075C); /* call 0x004D075C */

loc_004CEA2D: ;
    ecx = esi + 0xC;
    MEM32(esi) = 0x8681F0;
    PUSH32(esp, 0x004CEA3Bu); RECOMP_ABI_CALL(0x004D0A24u, sub_004D0A24); /* call 0x004D0A24 */

loc_004CEA3B: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004CEA3F
 * Original: 0x004CEA3F - 0x004CEA45 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CEA3F(void)
{

loc_004CEA3F: ;
    eax = 0x868234;
    esp += 4; return; /* ret */

}

/**
 * sub_004CEA45
 * Original: 0x004CEA45 - 0x004CEA7F (58 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CEA45(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CEA45: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0xC;
    MEM32(esi) = 0x8681F0;
    PUSH32(esp, 0x004CEA56u); RECOMP_ABI_CALL(0x004D0CE0u, sub_004D0CE0); /* call 0x004D0CE0 */

loc_004CEA56: ;
    ecx = esi;
    PUSH32(esp, 0x004CEA5Du); RECOMP_ABI_CALL(0x004D0774u, sub_004D0774); /* call 0x004D0774 */

loc_004CEA5D: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004CEA79; /* je: equal / zero */

loc_004CEA64: ;
    PUSH32(esp, 0x10E);
    PUSH32(esp, 0x868148);
    PUSH32(esp, 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004CEA76u); RECOMP_ABI_CALL(0x005060A0u, sub_005060A0); /* call 0x005060A0 */

loc_004CEA76: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004CEA79: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}
