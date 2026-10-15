/**
 * nhl_07_recomp - Recompiled code chunk 214
 * Functions: 250 (0x004BDFAE - 0x004C1147)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_004BDFAE
 * Original: 0x004BDFAE - 0x004BDFB5 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BDFAE(void)
{

loc_004BDFAE: ;
    MEM32(ecx) = 0x865084;
    esp += 4; return; /* ret */

}

/**
 * sub_004BDFB5
 * Original: 0x004BDFB5 - 0x004BDFD2 (29 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BDFB5(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004BDFB5: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x865084;
    if (TEST_Z(_fa, _fb)) goto loc_004BDFCC; /* je: equal / zero */

loc_004BDFC5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004BDFCBu); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_004BDFCB: ;
    POP32(esp, ecx);

loc_004BDFCC: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004BDFD2
 * Original: 0x004BDFD2 - 0x004BDFE4 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BDFD2(void)
{

loc_004BDFD2: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004BDFDAu); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_004BDFDA: ;
    MEM32(esi) = 0x86508C;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004BDFE4
 * Original: 0x004BDFE4 - 0x004BDFEF (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BDFE4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004BDFE4: ;
    MEM32(ecx) = 0x86508C;
    g_seh_ebp = ebp; sub_004DD576(); return; /* tail jmp 0x004DD576 */

}

/**
 * sub_004BDFEF
 * Original: 0x004BDFEF - 0x004BE011 (34 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BDFEF(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004BDFEF: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x86508C;
    PUSH32(esp, 0x004BDFFDu); RECOMP_ABI_CALL(0x004DD576u, sub_004DD576); /* call 0x004DD576 */

loc_004BDFFD: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004BE00B; /* je: equal / zero */

loc_004BE004: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004BE00Au); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004BE00A: ;
    POP32(esp, ecx);

loc_004BE00B: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004BE011
 * Original: 0x004BE011 - 0x004BE081 (112 bytes, 38 insns)
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004BE011(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_004BE011: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004BE01Du); RECOMP_ABI_CALL(0x004BFA66u, sub_004BFA66); /* call 0x004BFA66 */

loc_004BE01D: ;
    PUSH32(esp, MEM32(ebp + 0x1C));
    edi = esi + 0x24;
    PUSH32(esp, MEM32(ebp + 0x18));
    ecx = edi;
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004BE030u); RECOMP_ABI_CALL(0x004B64ADu, sub_004B64AD); /* call 0x004B64AD */

loc_004BE030: ;
    MEM32(esi) = 0x8650BC;
    MEM32(edi) = 0x8650AC;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004BE041u); RECOMP_ABI_CALL(0x004DC96Bu, sub_004DC96B); /* call 0x004DC96B */

loc_004BE041: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = esi + 0x48;
    PUSH32(esp, MEM32(ebp + 0x14));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004BE050u); RECOMP_ABI_CALL(0x004DDA0Au, sub_004DDA0A); /* call 0x004DDA0A */

loc_004BE050: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004BE055u); RECOMP_ABI_CALL(0x004DC96Bu, sub_004DC96B); /* call 0x004DC96B */

loc_004BE055: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = esi + 0x5C;
    PUSH32(esp, MEM32(ebp + 0x14));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004BE064u); RECOMP_ABI_CALL(0x004DDA0Au, sub_004DDA0A); /* call 0x004DDA0A */

loc_004BE064: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(ebp + 0x1C);
    MEM32(esi + 0x70) = eax;
    eax = MEM32(ebp + 0x20);
    PUSH32(esp, esi);
    MEM32(esi + 0x74) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004BE079u); RECOMP_ABI_CALL(0x004B6687u, sub_004B6687); /* call 0x004B6687 */

loc_004BE079: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 32; return; /* ret 28 */

}

/**
 * sub_004BE081
 * Original: 0x004BE081 - 0x004BE089 (8 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BE081(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004BE081: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x28;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x14)); return; /* indirect tail jmp */

}

/**
 * sub_004BE089
 * Original: 0x004BE089 - 0x004BE08D (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BE089(void)
{

loc_004BE089: ;
    SET_LO8(eax, MEM8(ecx + 0x3C));
    esp += 4; return; /* ret */

}

/**
 * sub_004BE08D
 * Original: 0x004BE08D - 0x004BE095 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BE08D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004BE08D: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x24;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_004B655A(); return; /* tail jmp 0x004B655A */

}

/**
 * sub_004BE095
 * Original: 0x004BE095 - 0x004BE09D (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BE095(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004BE095: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x24;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_004B656C(); return; /* tail jmp 0x004B656C */

}

/**
 * sub_004BE09D
 * Original: 0x004BE09D - 0x004BE0A7 (10 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BE09D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004BE09D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ecx + 0x40)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x40), 1 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

}

/**
 * sub_004BE0A7
 * Original: 0x004BE0A7 - 0x004BE0AB (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BE0A7(void)
{

loc_004BE0A7: ;
    eax = ecx + -36;
    esp += 4; return; /* ret */

}

/**
 * sub_004BE0AB
 * Original: 0x004BE0AB - 0x004BE0B3 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BE0AB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004BE0AB: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x24;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_004B650D(); return; /* tail jmp 0x004B650D */

}

/**
 * sub_004BE0B3
 * Original: 0x004BE0B3 - 0x004BE0B6 (3 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_004BE0B3(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004BE0B3: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_004BE0B6
 * Original: 0x004BE0B6 - 0x004BE0BE (8 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BE0B6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004BE0B6: ;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x48;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x14)); return; /* indirect tail jmp */

}

/**
 * sub_004BE0BE
 * Original: 0x004BE0BE - 0x004BE0C2 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BE0BE(void)
{

loc_004BE0BE: ;
    eax = MEM32(ecx + 0x70);
    esp += 4; return; /* ret */

}

/**
 * sub_004BE0C2
 * Original: 0x004BE0C2 - 0x004BE0C6 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BE0C2(void)
{

loc_004BE0C2: ;
    eax = MEM32(ecx + 0x74);
    esp += 4; return; /* ret */

}

/**
 * sub_004BE0C6
 * Original: 0x004BE0C6 - 0x004BE0CE (8 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BE0C6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004BE0C6: ;
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x5C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x14)); return; /* indirect tail jmp */

}

/**
 * sub_004BE0CE
 * Original: 0x004BE0CE - 0x004BE101 (51 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BE0CE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004BE0CE: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x24;
    ecx = esi + 0x5C;
    MEM32(esi) = 0x8650BC;
    MEM32(edi) = 0x8650AC;
    PUSH32(esp, 0x004BE0E9u); RECOMP_ABI_CALL(0x004DDA4Fu, sub_004DDA4F); /* call 0x004DDA4F */

loc_004BE0E9: ;
    ecx = esi + 0x48;
    PUSH32(esp, 0x004BE0F1u); RECOMP_ABI_CALL(0x004DDA4Fu, sub_004DDA4F); /* call 0x004DDA4F */

loc_004BE0F1: ;
    ecx = edi;
    PUSH32(esp, 0x004BE0F8u); RECOMP_ABI_CALL(0x004B64EFu, sub_004B64EF); /* call 0x004B64EF */

loc_004BE0F8: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004BFA78(); return; /* tail jmp 0x004BFA78 */

}

/**
 * sub_004BE101
 * Original: 0x004BE101 - 0x004BE130 (47 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BE101(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004BE101: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 0xC));
    edi = esi + 0x48;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004BE113u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BE110u); } /* indirect call */
    }

loc_004BE113: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004BE12B; /* je: equal / zero */

loc_004BE117: ;
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = edi;
    PUSH32(esp, 0x004BE122u); RECOMP_ABI_CALL(0x004DDA93u, sub_004DDA93); /* call 0x004DDA93 */

loc_004BE122: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x004BE12Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BE128u); } /* indirect call */
    }

loc_004BE12B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004BE130
 * Original: 0x004BE130 - 0x004BE15F (47 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BE130(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004BE130: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 0xC));
    edi = esi + 0x5C;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004BE142u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BE13Fu); } /* indirect call */
    }

loc_004BE142: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004BE15A; /* je: equal / zero */

loc_004BE146: ;
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = edi;
    PUSH32(esp, 0x004BE151u); RECOMP_ABI_CALL(0x004DDA93u, sub_004DDA93); /* call 0x004DDA93 */

loc_004BE151: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x004BE15Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BE157u); } /* indirect call */
    }

loc_004BE15A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004BE15F
 * Original: 0x004BE15F - 0x004BE167 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BE15F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004BE15F: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x24;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004BE09D(); return; /* tail jmp 0x004BE09D */

}

/**
 * sub_004BE167
 * Original: 0x004BE167 - 0x004BE16F (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BE167(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004BE167: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x24;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004BE1A5(); return; /* tail jmp 0x004BE1A5 */

}

/**
 * sub_004BE16F
 * Original: 0x004BE16F - 0x004BE173 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BE16F(void)
{

loc_004BE16F: ;
    eax = MEM32(ecx + 0x44);
    esp += 4; return; /* ret */

}

/**
 * sub_004BE173
 * Original: 0x004BE173 - 0x004BE1A5 (50 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BE173(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004BE173: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx + -28;
    ebx = MEM32(esi + 0xC);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004BE19F; /* jbe: below or equal (unsigned <=) */

loc_004BE182: ;
    PUSH32(esp, ebp);
    ebp = ecx + -36;

loc_004BE186: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x004BE18Eu); RECOMP_ABI_CALL(0x004DD726u, sub_004DD726); /* call 0x004DD726 */

loc_004BE18E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 0x14));
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004BE199u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BE197u); } /* indirect call */
    }

loc_004BE199: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004BE186; /* jb: below (unsigned <) */

loc_004BE19E: ;
    POP32(esp, ebp);

loc_004BE19F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004BE1A5
 * Original: 0x004BE1A5 - 0x004BE1C1 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BE1A5(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004BE1A5: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004BE1ADu); RECOMP_ABI_CALL(0x004BE0CEu, sub_004BE0CE); /* call 0x004BE0CE */

loc_004BE1AD: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004BE1BB; /* je: equal / zero */

loc_004BE1B4: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004BE1BAu); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004BE1BA: ;
    POP32(esp, ecx);

loc_004BE1BB: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004BE1C1
 * Original: 0x004BE1C1 - 0x004BE223 (98 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004BE1C1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004BE1C1: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x34);
    ecx = MEM32(eax + 8);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004BE1DBu); RECOMP_ABI_CALL(0x004B8348u, sub_004B8348); /* call 0x004B8348 */

loc_004BE1DB: ;
    esi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004BE1E2u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004BE1E2: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x78);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004BE1EEu); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004BE1EE: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004BE211; /* je: equal / zero */

loc_004BE1F5: ;
    PUSH32(esp, MEM32(ebp + 0x1C));
    ecx = eax;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004BE20Fu); RECOMP_ABI_CALL(0x004BE011u, sub_004BE011); /* call 0x004BE011 */

loc_004BE20F: ;
    goto loc_004BE213;

loc_004BE211: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004BE213: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004BE219u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004BE219: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004BE220u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004BE220: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_004BE223
 * Original: 0x004BE223 - 0x004BE285 (98 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004BE223(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004BE223: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x34);
    ecx = MEM32(eax + 8);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004BE23Du); RECOMP_ABI_CALL(0x004B8348u, sub_004B8348); /* call 0x004B8348 */

loc_004BE23D: ;
    esi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004BE244u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004BE244: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x78);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004BE250u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004BE250: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004BE273; /* je: equal / zero */

loc_004BE257: ;
    PUSH32(esp, MEM32(ebp + 0x20));
    ecx = eax;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004BE271u); RECOMP_ABI_CALL(0x004BE011u, sub_004BE011); /* call 0x004BE011 */

loc_004BE271: ;
    goto loc_004BE275;

loc_004BE273: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004BE275: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004BE27Bu); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004BE27B: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004BE282u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004BE282: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_004BE285
 * Original: 0x004BE285 - 0x004BE297 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BE285(void)
{

loc_004BE285: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004BE28Du); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_004BE28D: ;
    MEM32(esi) = 0x8650F8;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004BE297
 * Original: 0x004BE297 - 0x004BE2A2 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BE297(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004BE297: ;
    MEM32(ecx) = 0x8650F8;
    g_seh_ebp = ebp; sub_004DD576(); return; /* tail jmp 0x004DD576 */

}

/**
 * sub_004BE2A2
 * Original: 0x004BE2A2 - 0x004BE2CF (45 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BE2A2(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004BE2A2: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x8650F8;
    PUSH32(esp, 0x004BE2B0u); RECOMP_ABI_CALL(0x004DD576u, sub_004DD576); /* call 0x004DD576 */

loc_004BE2B0: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004BE2BE; /* je: equal / zero */

loc_004BE2B7: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004BE2BDu); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004BE2BD: ;
    POP32(esp, ecx);

loc_004BE2BE: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004BE2CF
 * Original: 0x004BE2CF - 0x004BE303 (52 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BE2CF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004BE2CF: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM8(esi + 0x25)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x25), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004BE301; /* jne: not equal / not zero */

loc_004BE2D8: ;
    _fa = (uint32_t)(MEM8(esi + 0x24)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x24), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004BE2ED; /* je: equal / zero */

loc_004BE2DE: ;
    eax = MEM32(esi + 0x10);
    SET_LO8(ecx, MEM8(eax + 0x10));
    SET_LO8(ecx, LO8(ecx) & 0xFD);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(ecx, LO8(ecx) | 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(eax + 0x10) = LO8(ecx);

loc_004BE2ED: ;
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, 0x004BE2F5u); RECOMP_ABI_CALL(0x004BAC23u, sub_004BAC23); /* call 0x004BAC23 */

loc_004BE2F5: ;
    MEM8(esi + 0x25) = 1;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004DD5FD(); return; /* tail jmp 0x004DD5FD */

loc_004BE301: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004BE303
 * Original: 0x004BE303 - 0x004BE351 (78 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BE303(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004BE303: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x004BE30Cu); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_004BE30C: ;
    edi = esi + 8;
    ecx = edi;
    PUSH32(esp, 0x004BE316u); RECOMP_ABI_CALL(0x004E30ECu, sub_004E30EC); /* call 0x004E30EC */

loc_004BE316: ;
    eax = MEM32(esp + 0xC);
    MEM32(esi + 0x14) = MEM32(esi + 0x14) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0x10) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    MEM32(esi) = 0x865114;
    MEM32(edi) = 0x865104;
    MEM8(esi + 0xC) = 1;
    MEM32(esi + 0x18) = eax;
    MEM32(esi + 0x1C) = eax;
    MEM32(esi + 0x20) = eax;
    MEM8(esi + 0x24) = 1;
    MEM8(esi + 0x25) = LO8(eax);
    PUSH32(esp, 0x004BE34Au); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_004BE34A: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004BE351
 * Original: 0x004BE351 - 0x004BE37F (46 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BE351(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004BE351: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM8(esi + 0x25)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x25), 0 (8-bit) */
    PUSH32(esp, edi);
    edi = esi + 8;
    MEM32(esi) = 0x865114;
    MEM32(edi) = 0x865104;
    if (CMP_NE(_fa, _fb)) goto loc_004BE36F; /* jne: not equal / not zero */

loc_004BE36A: ;
    PUSH32(esp, 0x004BE36Fu); RECOMP_ABI_CALL(0x004BE2CFu, sub_004BE2CF); /* call 0x004BE2CF */

loc_004BE36F: ;
    ecx = edi;
    PUSH32(esp, 0x004BE376u); RECOMP_ABI_CALL(0x004E310Cu, sub_004E310C); /* call 0x004E310C */

loc_004BE376: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004DD576(); return; /* tail jmp 0x004DD576 */

}

/**
 * sub_004BE37F
 * Original: 0x004BE37F - 0x004BE3D9 (90 bytes, 41 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004BE37F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004BE37F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(ebx, MEM8(esi + 4));
    if (CMP_EQ(_fa, _fb)) goto loc_004BE3A7; /* je: equal / zero */

loc_004BE393: ;
    ecx = esi + -8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(esi + 0x18));
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    PUSH32(esp, 9);
    PUSH32(esp, 0);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x004BE3A2u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x004BE3A0u); } /* indirect call */
    }

loc_004BE3A2: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_004BE3C9;

loc_004BE3A7: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004BE3C5; /* je: equal / zero */

loc_004BE3AE: ;
    ecx = MEM32(esi + 0x18);
    MEM32(ebp + -12) = ecx;
    ecx = esi + -8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebp + -24;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    { uint32_t _icall_target = eax; PUSH32(esp, 0x004BE3C2u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x004BE3C0u); } /* indirect call */
    }

loc_004BE3C2: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004BE3C5: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004BE3D1; /* jne: not equal / not zero */

loc_004BE3C9: ;
    ecx = esi + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004BE3D1u); RECOMP_ABI_CALL(0x004BE2CFu, sub_004BE2CF); /* call 0x004BE2CF */

loc_004BE3D1: ;
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004BE3D9
 * Original: 0x004BE3D9 - 0x004BE3DE (5 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BE3D9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004BE3D9: ;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0xC)); return; /* indirect tail jmp */

}

/**
 * sub_004BE3DE
 * Original: 0x004BE3DE - 0x004BE3F3 (21 bytes, 7 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BE3DE(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004BE3DE: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004BE3F0; /* je: equal / zero */

loc_004BE3E6: ;
    edx = MEM32(esp + 8);
    MEM32(ecx + 0x18) = edx;
    MEM32(ecx + 0x20) = eax;

loc_004BE3F0: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004BE3F3
 * Original: 0x004BE3F3 - 0x004BE40D (26 bytes, 9 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BE3F3(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004BE3F3: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_004BE407; /* jge: greater or equal (signed >=) */

loc_004BE3FB: ;
    edx = MEM32(esp + 8);
    MEM32(ecx + 0x1C) = edx;
    MEM32(ecx + 0x20) = eax;
    goto loc_004BE40A;

loc_004BE407: ;
    MEM32(ecx + 0x14) = eax;

loc_004BE40A: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004BE40D
 * Original: 0x004BE40D - 0x004BE431 (36 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BE40D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004BE40D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_004BE415;

loc_004BE415: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004BE41Du); RECOMP_ABI_CALL(0x004BE351u, sub_004BE351); /* call 0x004BE351 */

loc_004BE41D: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004BE42B; /* je: equal / zero */

loc_004BE424: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004BE42Au); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004BE42A: ;
    POP32(esp, ecx);

loc_004BE42B: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004BE415
 * Original: 0x004BE415 - 0x004BE431 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BE415(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004BE415: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004BE41Du); RECOMP_ABI_CALL(0x004BE351u, sub_004BE351); /* call 0x004BE351 */

loc_004BE41D: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004BE42B; /* je: equal / zero */

loc_004BE424: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004BE42Au); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004BE42A: ;
    POP32(esp, ecx);

loc_004BE42B: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004BE431
 * Original: 0x004BE431 - 0x004BE475 (68 bytes, 23 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BE431(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004BE431: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004BE452; /* jl: less (signed <) */

loc_004BE43B: ;
    PUSH32(esp, eax);
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x28);
    PUSH32(esp, MEM32(eax + 8));
    PUSH32(esp, 0x004BE44Fu); RECOMP_ABI_CALL(0x005E2EF0u, sub_005E2EF0); /* call 0x005E2EF0 */

loc_004BE44F: ;
    POP32(esp, ecx);
    goto loc_004BE468;

loc_004BE452: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x30);
    PUSH32(esp, MEM32(eax + 0xAC));
    PUSH32(esp, 0x004BE468u); RECOMP_ABI_CALL(0x005DE460u, sub_005DE460); /* call 0x005DE460 */

loc_004BE468: ;
    POP32(esp, ecx);
    ecx = esi + -8;
    PUSH32(esp, 0x004BE471u); RECOMP_ABI_CALL(0x004BE2CFu, sub_004BE2CF); /* call 0x004BE2CF */

loc_004BE471: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004BE475
 * Original: 0x004BE475 - 0x004BE487 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BE475(void)
{

loc_004BE475: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004BE47Du); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_004BE47D: ;
    MEM32(esi) = 0x865118;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004BE487
 * Original: 0x004BE487 - 0x004BE492 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BE487(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004BE487: ;
    MEM32(ecx) = 0x865118;
    g_seh_ebp = ebp; sub_004DD576(); return; /* tail jmp 0x004DD576 */

}

/**
 * sub_004BE492
 * Original: 0x004BE492 - 0x004BE4B4 (34 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BE492(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004BE492: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x865118;
    PUSH32(esp, 0x004BE4A0u); RECOMP_ABI_CALL(0x004DD576u, sub_004DD576); /* call 0x004DD576 */

loc_004BE4A0: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004BE4AE; /* je: equal / zero */

loc_004BE4A7: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004BE4ADu); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004BE4AD: ;
    POP32(esp, ecx);

loc_004BE4AE: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004BE4B4
 * Original: 0x004BE4B4 - 0x004BE4BD (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BE4B4(void)
{

loc_004BE4B4: ;
    eax = ecx;
    MEM32(eax) = 0x865124;
    esp += 4; return; /* ret */

}

/**
 * sub_004BE4BD
 * Original: 0x004BE4BD - 0x004BE4C4 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BE4BD(void)
{

loc_004BE4BD: ;
    MEM32(ecx) = 0x865124;
    esp += 4; return; /* ret */

}

/**
 * sub_004BE4C4
 * Original: 0x004BE4C4 - 0x004BE4E1 (29 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BE4C4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004BE4C4: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x865124;
    if (TEST_Z(_fa, _fb)) goto loc_004BE4DB; /* je: equal / zero */

loc_004BE4D4: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004BE4DAu); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_004BE4DA: ;
    POP32(esp, ecx);

loc_004BE4DB: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004BE4E1
 * Original: 0x004BE4E1 - 0x004BE4EA (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BE4E1(void)
{

loc_004BE4E1: ;
    eax = ecx;
    MEM32(eax) = 0x865154;
    esp += 4; return; /* ret */

}

/**
 * sub_004BE4EA
 * Original: 0x004BE4EA - 0x004BE4F1 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BE4EA(void)
{

loc_004BE4EA: ;
    MEM32(ecx) = 0x865154;
    esp += 4; return; /* ret */

}

/**
 * sub_004BE4F1
 * Original: 0x004BE4F1 - 0x004BE50E (29 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BE4F1(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004BE4F1: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x865154;
    if (TEST_Z(_fa, _fb)) goto loc_004BE508; /* je: equal / zero */

loc_004BE501: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004BE507u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_004BE507: ;
    POP32(esp, ecx);

loc_004BE508: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004BE50E
 * Original: 0x004BE50E - 0x004BE520 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BE50E(void)
{

loc_004BE50E: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004BE516u); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_004BE516: ;
    MEM32(esi) = 0x865170;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004BE520
 * Original: 0x004BE520 - 0x004BE52B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BE520(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004BE520: ;
    MEM32(ecx) = 0x865170;
    g_seh_ebp = ebp; sub_004DD576(); return; /* tail jmp 0x004DD576 */

}

/**
 * sub_004BE52B
 * Original: 0x004BE52B - 0x004BE54D (34 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BE52B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004BE52B: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x865170;
    PUSH32(esp, 0x004BE539u); RECOMP_ABI_CALL(0x004DD576u, sub_004DD576); /* call 0x004DD576 */

loc_004BE539: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004BE547; /* je: equal / zero */

loc_004BE540: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004BE546u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004BE546: ;
    POP32(esp, ecx);

loc_004BE547: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004BE54D
 * Original: 0x004BE54D - 0x004BE55F (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BE54D(void)
{

loc_004BE54D: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004BE555u); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_004BE555: ;
    MEM32(esi) = 0x8651B8;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004BE55F
 * Original: 0x004BE55F - 0x004BE56A (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BE55F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004BE55F: ;
    MEM32(ecx) = 0x8651B8;
    g_seh_ebp = ebp; sub_004DD576(); return; /* tail jmp 0x004DD576 */

}

/**
 * sub_004BE56A
 * Original: 0x004BE56A - 0x004BE59D (51 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BE56A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004BE56A: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x8651B8;
    PUSH32(esp, 0x004BE578u); RECOMP_ABI_CALL(0x004DD576u, sub_004DD576); /* call 0x004DD576 */

loc_004BE578: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004BE586; /* je: equal / zero */

loc_004BE57F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004BE585u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004BE585: ;
    POP32(esp, ecx);

loc_004BE586: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004BE59D
 * Original: 0x004BE59D - 0x004BE5B4 (23 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BE59D(void)
{

loc_004BE59D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x7DEFE8);
    esi = ecx;
    PUSH32(esp, 0x004BE5AAu); RECOMP_ABI_CALL(0x004BFAA5u, sub_004BFAA5); /* call 0x004BFAA5 */

loc_004BE5AA: ;
    MEM32(esi) = 0x86522C;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004BE5B4
 * Original: 0x004BE5B4 - 0x004BE5D6 (34 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BE5B4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004BE5B4: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x86522C;
    PUSH32(esp, 0x004BE5C2u); RECOMP_ABI_CALL(0x004BFAC0u, sub_004BFAC0); /* call 0x004BFAC0 */

loc_004BE5C2: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004BE5D0; /* je: equal / zero */

loc_004BE5C9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004BE5CFu); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004BE5CF: ;
    POP32(esp, ecx);

loc_004BE5D0: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004BE5D6
 * Original: 0x004BE5D6 - 0x004BE5ED (23 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BE5D6(void)
{

loc_004BE5D6: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x7DEFE8);
    esi = ecx;
    PUSH32(esp, 0x004BE5E3u); RECOMP_ABI_CALL(0x004BFAA5u, sub_004BFAA5); /* call 0x004BFAA5 */

loc_004BE5E3: ;
    MEM32(esi) = 0x865238;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004BE5ED
 * Original: 0x004BE5ED - 0x004BE60F (34 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BE5ED(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004BE5ED: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x865238;
    PUSH32(esp, 0x004BE5FBu); RECOMP_ABI_CALL(0x004BFAC0u, sub_004BFAC0); /* call 0x004BFAC0 */

loc_004BE5FB: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004BE609; /* je: equal / zero */

loc_004BE602: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004BE608u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004BE608: ;
    POP32(esp, ecx);

loc_004BE609: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004BE65E
 * Original: 0x004BE65E - 0x004BE662 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BE65E(void)
{

loc_004BE65E: ;
    SET_LO8(eax, MEM8(ecx + 0x3A));
    esp += 4; return; /* ret */

}

/**
 * sub_004BE662
 * Original: 0x004BE662 - 0x004BE6AE (76 bytes, 32 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BE662(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004BE662: ;
    PUSH32(esp, 0x004BE667u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004BE667: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 8);
    PUSH32(esp, 0x004BE673u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004BE673: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004BE683; /* je: equal / zero */

loc_004BE67A: ;
    ecx = eax;
    PUSH32(esp, 0x004BE681u); RECOMP_ABI_CALL(0x004BFAF1u, sub_004BFAF1); /* call 0x004BFAF1 */

loc_004BE681: ;
    goto loc_004BE685;

loc_004BE683: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004BE685: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004BE68Bu); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004BE68B: ;
    ecx = eax;
    PUSH32(esp, 0x004BE692u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004BE692: ;
    esp += 4; return; /* ret */

    g_seh_ebp = ebp; sub_004DD5FD(); return; /* tail jmp 0x004DD5FD */

loc_004BE6A7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004BE6AE
 * Original: 0x004BE6AE - 0x004BE6C9 (27 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BE6AE(void)
{

loc_004BE6AE: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x004BE6BEu); RECOMP_ABI_CALL(0x004DD62Cu, sub_004DD62C); /* call 0x004DD62C */

loc_004BE6BE: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004BE6C9
 * Original: 0x004BE6C9 - 0x004BE6F3 (42 bytes, 13 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BE6C9(void)
{

loc_004BE6C9: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004BE6D1u); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_004BE6D1: ;
    PUSH32(esp, MEM32(esp + 0xC));
    MEM32(esi) = 0x865244;
    PUSH32(esp, 0x004BE6E0u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004BE6E0: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = esi + 8;
    PUSH32(esp, 0x004BE6EDu); RECOMP_ABI_CALL(0x004DB87Du, sub_004DB87D); /* call 0x004DB87D */

loc_004BE6ED: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004BE6FB
 * Original: 0x004BE6FB - 0x004BE725 (42 bytes, 13 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BE6FB(void)
{

loc_004BE6FB: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004BE703u); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_004BE703: ;
    PUSH32(esp, MEM32(esp + 0xC));
    MEM32(esi) = 0x865248;
    PUSH32(esp, 0x004BE712u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004BE712: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = esi + 8;
    PUSH32(esp, 0x004BE71Fu); RECOMP_ABI_CALL(0x004DB87Du, sub_004DB87D); /* call 0x004DB87D */

loc_004BE71F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004BE739
 * Original: 0x004BE739 - 0x004BE755 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BE739(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004BE739: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004BE741u); RECOMP_ABI_CALL(0x004E1EF8u, sub_004E1EF8); /* call 0x004E1EF8 */

loc_004BE741: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004BE74F; /* je: equal / zero */

loc_004BE748: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004BE74Eu); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004BE74E: ;
    POP32(esp, ecx);

loc_004BE74F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004BE755
 * Original: 0x004BE755 - 0x004BE771 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BE755(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004BE755: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004BE75Du); RECOMP_ABI_CALL(0x004E1F88u, sub_004E1F88); /* call 0x004E1F88 */

loc_004BE75D: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004BE76B; /* je: equal / zero */

loc_004BE764: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004BE76Au); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004BE76A: ;
    POP32(esp, ecx);

loc_004BE76B: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004BE771
 * Original: 0x004BE771 - 0x004BE7CB (90 bytes, 41 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BE771(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004BE771: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x38);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x1C);
    eax = MEM32(esi + 0x14);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_004BE7C6; /* jbe: below or equal (unsigned <=) */

loc_004BE793: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);

loc_004BE795: ;
    PUSH32(esp, 0x004BE79Au); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004BE79A: ;
    PUSH32(esp, ebp);
    ecx = esi;
    ebx = eax;
    PUSH32(esp, 0x004BE7A4u); RECOMP_ABI_CALL(0x004DD726u, sub_004DD726); /* call 0x004DD726 */

loc_004BE7A4: ;
    edi = MEM32(eax);
    eax = MEM32(edi);
    edx = MEM32(ebx);
    ecx = ebx;
    MEM32(esp + 0x10) = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x004BE7B3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BE7B0u); } /* indirect call */
    }

loc_004BE7B3: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x004BE7BDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BE7BAu); } /* indirect call */
    }

loc_004BE7BD: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(esp + 0x14) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004BE795; /* jb: below (unsigned <) */

loc_004BE7C4: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_004BE7C6: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ecx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004BE7CB
 * Original: 0x004BE7CB - 0x004BE825 (90 bytes, 41 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BE7CB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004BE7CB: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x38);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x1C);
    eax = MEM32(esi + 0x14);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_004BE820; /* jbe: below or equal (unsigned <=) */

loc_004BE7ED: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);

loc_004BE7EF: ;
    PUSH32(esp, 0x004BE7F4u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004BE7F4: ;
    PUSH32(esp, ebp);
    ecx = esi;
    ebx = eax;
    PUSH32(esp, 0x004BE7FEu); RECOMP_ABI_CALL(0x004DD726u, sub_004DD726); /* call 0x004DD726 */

loc_004BE7FE: ;
    edi = MEM32(eax);
    eax = MEM32(edi);
    edx = MEM32(ebx);
    ecx = ebx;
    MEM32(esp + 0x10) = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x004BE80Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BE80Au); } /* indirect call */
    }

loc_004BE80D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x004BE817u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BE814u); } /* indirect call */
    }

loc_004BE817: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(esp + 0x14) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004BE7EF; /* jb: below (unsigned <) */

loc_004BE81E: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_004BE820: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ecx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004BE825
 * Original: 0x004BE825 - 0x004BE92A (261 bytes, 103 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BE825(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004BE825: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = ecx;
    MEM32(esp + 4) = ebx;
    PUSH32(esp, 0x004BE832u); RECOMP_ABI_CALL(0x004DC981u, sub_004DC981); /* call 0x004DC981 */

loc_004BE832: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x004BE839u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BE836u); } /* indirect call */
    }

loc_004BE839: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004BE848; /* je: equal / zero */

loc_004BE83D: ;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xC), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004BE925; /* jne: not equal / not zero */

loc_004BE848: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x004BE84Eu); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004BE84E: ;
    PUSH32(esp, eax);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x004BE85Au); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004BE85A: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004BE86D; /* je: equal / zero */

loc_004BE861: ;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    ecx = eax;
    PUSH32(esp, 0x004BE86Bu); RECOMP_ABI_CALL(0x004BE6C9u, sub_004BE6C9); /* call 0x004BE6C9 */

loc_004BE86B: ;
    goto loc_004BE86F;

loc_004BE86D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004BE86F: ;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004BE876u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004BE876: ;
    ecx = eax;
    PUSH32(esp, 0x004BE87Du); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004BE87D: ;
    esi = eax;
    PUSH32(esp, 0x004BE884u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004BE884: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x004BE88Eu); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004BE88E: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004BE89E; /* je: equal / zero */

loc_004BE895: ;
    ecx = eax;
    PUSH32(esp, 0x004BE89Cu); RECOMP_ABI_CALL(0x004BE5D6u, sub_004BE5D6); /* call 0x004BE5D6 */

loc_004BE89C: ;
    goto loc_004BE8A0;

loc_004BE89E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004BE8A0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004BE8A6u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004BE8A6: ;
    ecx = eax;
    PUSH32(esp, 0x004BE8ADu); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004BE8AD: ;
    PUSH32(esp, eax);
    ecx = esi + 8;
    PUSH32(esp, 0x004BE8B6u); RECOMP_ABI_CALL(0x004DB91Cu, sub_004DB91C); /* call 0x004DB91C */

loc_004BE8B6: ;
    PUSH32(esp, 0x004BE8BBu); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004BE8BB: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x48);
    PUSH32(esp, 0x004BE8C5u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004BE8C5: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004BE8E2; /* je: equal / zero */

loc_004BE8CC: ;
    PUSH32(esp, esi);
    edx = 0x7B891F;
    PUSH32(esp, edx);
    PUSH32(esp, 0x86524C);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x004BE8E0u); RECOMP_ABI_CALL(0x004BFC0Au, sub_004BFC0A); /* call 0x004BFC0A */

loc_004BE8E0: ;
    goto loc_004BE8E4;

loc_004BE8E2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004BE8E4: ;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004BE8EBu); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004BE8EB: ;
    ecx = eax;
    PUSH32(esp, 0x004BE8F2u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004BE8F2: ;
    esi = ebx + -32;
    ebx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    ebp = eax;
    if (CMP_BE(_fa, _fb)) goto loc_004BE922; /* jbe: below or equal (unsigned <=) */

loc_004BE8FE: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(0xFFFFFFD8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFD8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x18) = eax;

loc_004BE909: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x004BE911u); RECOMP_ABI_CALL(0x004DD726u, sub_004DD726); /* call 0x004DD726 */

loc_004BE911: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, MEM32(esp + 0x1C));
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004BE91Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BE91Au); } /* indirect call */
    }

loc_004BE91D: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004BE909; /* jb: below (unsigned <) */

loc_004BE922: ;
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, edi);

loc_004BE925: ;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004BE92A
 * Original: 0x004BE92A - 0x004BE992 (104 bytes, 45 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BE92A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004BE92A: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004BE932u); RECOMP_ABI_CALL(0x004DC981u, sub_004DC981); /* call 0x004DC981 */

loc_004BE932: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x004BE939u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BE936u); } /* indirect call */
    }

loc_004BE939: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_004BE98E; /* jne: not equal / not zero */

loc_004BE93E: ;
    ecx = esi + -40;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x004BE946u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BE943u); } /* indirect call */
    }

loc_004BE946: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004BE98E; /* je: equal / zero */

loc_004BE94A: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x004BE950u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004BE950: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x004BE957u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BE954u); } /* indirect call */
    }

loc_004BE957: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x004BE95Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BE95Bu); } /* indirect call */
    }

loc_004BE95E: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004BE98D; /* je: equal / zero */

loc_004BE964: ;
    eax = esi + -40;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    ecx = esi + 0xC;
    _cf = 0; /* logical op clears CF */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    ebx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004BE97Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BE97Au); } /* indirect call */
    }

loc_004BE97D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebx + 0x5C); PUSH32(esp, 0x004BE983u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BE980u); } /* indirect call */
    }

loc_004BE983: ;
    PUSH32(esp, eax);
    ecx = esi + 0x1C;
    PUSH32(esp, 0x004BE98Cu); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004BE98C: ;
    POP32(esp, ebx);

loc_004BE98D: ;
    POP32(esp, edi);

loc_004BE98E: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004BE992
 * Original: 0x004BE992 - 0x004BEA1D (139 bytes, 64 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BE992(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004BE992: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = esi + -40;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x004BE9A3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BE9A0u); } /* indirect call */
    }

loc_004BE9A3: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004BE9AAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BE9A7u); } /* indirect call */
    }

loc_004BE9AA: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x004BE9B1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BE9AEu); } /* indirect call */
    }

loc_004BE9B1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004BE9DF; /* jne: not equal / not zero */

loc_004BE9B6: ;
    ebx = esi + -32;
    eax = MEM32(ebx + 0xC);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_004BE9DF; /* jbe: below or equal (unsigned <=) */

loc_004BE9C6: ;
    PUSH32(esp, ebp);
    ecx = ebx;
    PUSH32(esp, 0x004BE9CEu); RECOMP_ABI_CALL(0x004DD726u, sub_004DD726); /* call 0x004DD726 */

loc_004BE9CE: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x004BE9D8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BE9D5u); } /* indirect call */
    }

loc_004BE9D8: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(esp + 0x10) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004BE9C6; /* jb: below (unsigned <) */

loc_004BE9DF: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x004BE9E6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BE9E3u); } /* indirect call */
    }

loc_004BE9E6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004BEA15; /* je: equal / zero */

loc_004BE9EA: ;
    _fa = (uint32_t)(MEM8(esi + 0x10)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x10), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004BEA15; /* je: equal / zero */

loc_004BE9F0: ;
    MEM8(esi + 0x10) = 0;
    ebp = MEM32(esi + -20);
    _fb = (uint32_t)(0xFFFFFFE0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xFFFFFFE0u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004BEA15; /* jbe: below or equal (unsigned <=) */

loc_004BEA00: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x004BEA08u); RECOMP_ABI_CALL(0x004DD726u, sub_004DD726); /* call 0x004DD726 */

loc_004BEA08: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004BEA10u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BEA0Du); } /* indirect call */
    }

loc_004BEA10: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004BEA00; /* jb: below (unsigned <) */

loc_004BEA15: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004BEA1D
 * Original: 0x004BEA1D - 0x004BEA91 (116 bytes, 48 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BEA1D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004BEA1D: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004BEA25u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004BEA25: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x004BEA2Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BEA29u); } /* indirect call */
    }

loc_004BEA2C: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x004BEA33u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BEA30u); } /* indirect call */
    }

loc_004BEA33: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004BEA8D; /* jne: not equal / not zero */

loc_004BEA39: ;
    PUSH32(esp, ebx);
    MEM8(esi + 0x24) = 1;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x34);
    ecx = MEM32(eax + 0x2C);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x67616D65);
    PUSH32(esp, 0x004BEA5Au); RECOMP_ABI_CALL(0x004B1865u, sub_004B1865); /* call 0x004B1865 */

loc_004BEA5A: ;
    edi = esi + -28;
    ebp = MEM32(edi + 0xC);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004BEA7E; /* jbe: below or equal (unsigned <=) */

loc_004BEA66: ;
    _fb = (uint32_t)(0xFFFFFFDCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xFFFFFFDCu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004BEA69: ;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x004BEA71u); RECOMP_ABI_CALL(0x004DD726u, sub_004DD726); /* call 0x004DD726 */

loc_004BEA71: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004BEA79u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BEA76u); } /* indirect call */
    }

loc_004BEA79: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004BEA69; /* jb: below (unsigned <) */

loc_004BEA7E: ;
    PUSH32(esp, 0x004BEA83u); RECOMP_ABI_CALL(0x004DC976u, sub_004DC976); /* call 0x004DC976 */

loc_004BEA83: ;
    edx = MEM32(eax);
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, esi);
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx)); return; /* indirect tail jmp */

loc_004BEA8D: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004BEA91
 * Original: 0x004BEA91 - 0x004BEBEF (350 bytes, 135 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004BEA91(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004BEA91: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    MEM32(ebp + -4) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004BEBC1; /* je: equal / zero */

loc_004BEAA9: ;
    if (CMP_LE(_fas, _fbs)) goto loc_004BEBE8; /* jle: less or equal (signed <=) */

loc_004BEAAF: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_004BEBE8; /* jg: greater (signed >) */

loc_004BEAB8: ;
    _fb = (uint32_t)(0xFFFFFFDCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFDCu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ecx);
    MEM32(ebp + 0xC) = ecx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x004BEAC3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BEAC0u); } /* indirect call */
    }

loc_004BEAC3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004BEBBE; /* jne: not equal / not zero */

loc_004BEACB: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004BEAD0u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004BEAD0: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x28);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004BEADAu); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004BEADA: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004BEAED; /* je: equal / zero */

loc_004BEAE1: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004BEAEBu); RECOMP_ABI_CALL(0x004BE6C9u, sub_004BE6C9); /* call 0x004BE6C9 */

loc_004BEAEB: ;
    goto loc_004BEAEF;

loc_004BEAED: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004BEAEF: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004BEAF5u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004BEAF5: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004BEAFCu); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004BEAFC: ;
    esi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004BEB03u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004BEB03: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0xC);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004BEB0Du); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004BEB0D: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004BEB1D; /* je: equal / zero */

loc_004BEB14: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004BEB1Bu); RECOMP_ABI_CALL(0x004BE59Du, sub_004BE59D); /* call 0x004BE59D */

loc_004BEB1B: ;
    goto loc_004BEB1F;

loc_004BEB1D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004BEB1F: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004BEB25u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004BEB25: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004BEB2Cu); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004BEB2C: ;
    PUSH32(esp, eax);
    ecx = esi + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004BEB35u); RECOMP_ABI_CALL(0x004DB91Cu, sub_004DB91C); /* call 0x004DB91C */

loc_004BEB35: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004BEB41; /* jne: not equal / not zero */

loc_004BEB3A: ;
    edi = 0x86526C;
    goto loc_004BEB5B;

loc_004BEB41: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004BEB46u); RECOMP_ABI_CALL(0x004DC981u, sub_004DC981); /* call 0x004DC981 */

loc_004BEB46: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x004BEB4Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BEB4Au); } /* indirect call */
    }

loc_004BEB4D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edi = 0x865264;
    if (CMP_EQ(_fa, _fb)) goto loc_004BEB5B; /* je: equal / zero */

loc_004BEB56: ;
    edi = 0x86525C;

loc_004BEB5B: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004BEB60u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004BEB60: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x48);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004BEB6Au); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004BEB6A: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004BEB83; /* je: equal / zero */

loc_004BEB71: ;
    PUSH32(esp, esi);
    edx = 0x7B891F;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004BEB81u); RECOMP_ABI_CALL(0x004BFC0Au, sub_004BFC0A); /* call 0x004BFC0A */

loc_004BEB81: ;
    goto loc_004BEB85;

loc_004BEB83: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004BEB85: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004BEB8Bu); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004BEB8B: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004BEB92u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004BEB92: ;
    esi = MEM32(ebp + -4);
    edi = MEM32(esi + -16);
    _fb = (uint32_t)(0xFFFFFFE4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xFFFFFFE4u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    MEM32(ebp + -8) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_004BEBE8; /* jbe: below or equal (unsigned <=) */

loc_004BEBA2: ;
    PUSH32(esp, ebx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004BEBAAu); RECOMP_ABI_CALL(0x004DD726u, sub_004DD726); /* call 0x004DD726 */

loc_004BEBAA: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -8));
    ecx = MEM32(eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004BEBB7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BEBB4u); } /* indirect call */
    }

loc_004BEBB7: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004BEBA2; /* jb: below (unsigned <) */

loc_004BEBBC: ;
    goto loc_004BEBE8;

loc_004BEBBE: ;
    ecx = MEM32(ebp + -4);

loc_004BEBC1: ;
    esi = ecx + -28;
    edi = MEM32(esi + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004BEBE8; /* jbe: below or equal (unsigned <=) */

loc_004BEBCB: ;
    _fb = (uint32_t)(0xFFFFFFDCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFDCu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0xC) = ecx;

loc_004BEBD1: ;
    PUSH32(esp, ebx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004BEBD9u); RECOMP_ABI_CALL(0x004DD726u, sub_004DD726); /* call 0x004DD726 */

loc_004BEBD9: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x004BEBE3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BEBE0u); } /* indirect call */
    }

loc_004BEBE3: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004BEBD1; /* jb: below (unsigned <) */

loc_004BEBE8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004BEBEF
 * Original: 0x004BEBEF - 0x004BEC22 (51 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BEBEF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004BEBEF: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx + -28;
    ebx = MEM32(esi + 0xC);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004BEC1C; /* jbe: below or equal (unsigned <=) */

loc_004BEBFE: ;
    PUSH32(esp, ebp);
    ebp = ecx + -36;

loc_004BEC02: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x004BEC0Au); RECOMP_ABI_CALL(0x004DD726u, sub_004DD726); /* call 0x004DD726 */

loc_004BEC0A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 0x18));
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x004BEC16u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BEC13u); } /* indirect call */
    }

loc_004BEC16: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004BEC02; /* jb: below (unsigned <) */

loc_004BEC1B: ;
    POP32(esp, ebp);

loc_004BEC1C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004BEC22
 * Original: 0x004BEC22 - 0x004BECC2 (160 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BEC22(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004BEC22: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x004BEC2Du); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004BEC2D: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x004BEC34u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BEC31u); } /* indirect call */
    }

loc_004BEC34: ;
    edi = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004BEC3Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BEC3Au); } /* indirect call */
    }

loc_004BEC3D: ;
    eax = MEM32(eax + 0x14);
    MEM32(esp + 8) = MEM32(esp + 8) & 0;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_004BECBD; /* jbe: below or equal (unsigned <=) */

loc_004BEC4D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);

loc_004BEC4F: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004BEC56u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BEC53u); } /* indirect call */
    }

loc_004BEC56: ;
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = eax + 8;
    PUSH32(esp, 0x004BEC62u); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004BEC62: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004BEC69u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BEC66u); } /* indirect call */
    }

loc_004BEC69: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x004BEC70u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BEC6Du); } /* indirect call */
    }

loc_004BEC70: ;
    ebx = eax;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x004BEC7Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BEC77u); } /* indirect call */
    }

loc_004BEC7A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004BECAD; /* jne: not equal / not zero */

loc_004BEC7E: ;
    ebp = esi + 0x40;
    ecx = MEM32(ebp);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004BEC8D; /* je: equal / zero */

loc_004BEC88: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004BEC8Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BEC8Au); } /* indirect call */
    }

loc_004BEC8D: ;
    eax = MEM32(ebx);
    ecx = esi + 0x30;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x72727470);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0xB8); PUSH32(esp, 0x004BECA5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BEC9Fu); } /* indirect call */
    }

loc_004BECA5: ;
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x004BECADu); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004BECAD: ;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0x14) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004BEC4F; /* jb: below (unsigned <) */

loc_004BECBB: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_004BECBD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004BECC2
 * Original: 0x004BECC2 - 0x004BEE54 (402 bytes, 124 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004BECC2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004BECC2: ;
    PUSH32(esp, ebp);
    ebp = esp + -976;
    _fb = (uint32_t)(0x450) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x450;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8E19F0);
    PUSH32(esp, esi);
    MEM32(ebp + 0x3CC) = eax;
    esi = ecx;
    PUSH32(esp, 0x004BECE3u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004BECE3: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x004BECEAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BECE7u); } /* indirect call */
    }

loc_004BECEA: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x004BECF1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BECEEu); } /* indirect call */
    }

loc_004BECF1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004BEE3E; /* je: equal / zero */

loc_004BECF9: ;
    eax = MEM32(ebp + 0x3DC);
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2B6B696B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), 0x2B6B696B (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004BED22; /* jne: not equal / not zero */

loc_004BED08: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x38);
    ecx = MEM32(eax + 0x14);
    PUSH32(esp, 2);
    PUSH32(esp, 0x004BED1Du); RECOMP_ABI_CALL(0x004BB180u, sub_004BB180); /* call 0x004BB180 */

loc_004BED1D: ;
    goto loc_004BEE3E;

loc_004BED22: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(eax + 0x10));
    ecx = ebp + -96;
    PUSH32(esp, 0x004BED2Fu); RECOMP_ABI_CALL(0x004DCC43u, sub_004DCC43); /* call 0x004DCC43 */

loc_004BED2F: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x864268);
    ecx = ebp + -96;
    PUSH32(esp, 0x004BED3Eu); RECOMP_ABI_CALL(0x004DD187u, sub_004DD187); /* call 0x004DD187 */

loc_004BED3E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_004BED9D; /* jns: not sign (positive) */

loc_004BED42: ;
    MEM32(ebp + -60) = MEM32(ebp + -60) & 0;
    _fa = (uint32_t)(MEM32(ebp + -60)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = esi + -36;
    ebx = MEM32(edi + 0xC);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004BEE34; /* jbe: below or equal (unsigned <=) */

loc_004BED54: ;
    _fb = (uint32_t)(0xFFFFFFD4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xFFFFFFD4u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -64) = esi;

loc_004BED5A: ;
    eax = MEM32(ebp + 0x3DC);
    PUSH32(esp, MEM32(eax + 0x10));
    PUSH32(esp, 0x004BED68u); RECOMP_ABI_CALL(0x004BD33Du, sub_004BD33D); /* call 0x004BD33D */

loc_004BED68: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_004BED71; /* jne: not equal / not zero */

loc_004BED6D: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_004BED7B;

loc_004BED71: ;
    ecx = MEM32(eax + 0xC);
    ecx = MEM32(ecx + 4);
    esi = ecx + eax + 0xC;

loc_004BED7B: ;
    PUSH32(esp, MEM32(ebp + -60));
    ecx = edi;
    PUSH32(esp, 0x004BED85u); RECOMP_ABI_CALL(0x004DD726u, sub_004DD726); /* call 0x004DD726 */

loc_004BED85: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + -64));
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x004BED90u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BED8Du); } /* indirect call */
    }

loc_004BED90: ;
    MEM32(ebp + -60) = MEM32(ebp + -60) + 1;
    _fa = (uint32_t)(MEM32(ebp + -60)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + -60)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -60), ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004BED5A; /* jb: below (unsigned <) */

loc_004BED98: ;
    goto loc_004BEE34;

loc_004BED9D: ;
    edi = esi + -44;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x004BEDA7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BEDA4u); } /* indirect call */
    }

loc_004BEDA7: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004BEDAEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BEDABu); } /* indirect call */
    }

loc_004BEDAE: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x004BEDB5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BEDB2u); } /* indirect call */
    }

loc_004BEDB5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004BEE34; /* je: equal / zero */

loc_004BEDB9: ;
    PUSH32(esp, 0x404);
    eax = ebp + -56;
    PUSH32(esp, eax);
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x864260);
    ecx = ebp + -96;
    PUSH32(esp, 0x004BEDD4u); RECOMP_ABI_CALL(0x004DCCC6u, sub_004DCCC6); /* call 0x004DCCC6 */

loc_004BEDD4: ;
    eax = ebp + -56;
    PUSH32(esp, eax);
    ecx = ebp + -128;
    PUSH32(esp, 0x004BEDE0u); RECOMP_ABI_CALL(0x004DCC43u, sub_004DCC43); /* call 0x004DCC43 */

loc_004BEDE0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x830C60);
    ecx = ebp + -128;
    PUSH32(esp, 0x004BEDEFu); RECOMP_ABI_CALL(0x004DCCFBu, sub_004DCCFB); /* call 0x004DCCFB */

loc_004BEDEF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x72727470) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x72727470 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004BEE2C; /* jne: not equal / not zero */

loc_004BEDF6: ;
    ebx = MEM32(esi + -24);
    MEM32(ebp + 0x3DC) = MEM32(ebp + 0x3DC) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x3DC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xFFFFFFDCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xFFFFFFDCu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004BEE2C; /* jbe: below or equal (unsigned <=) */

loc_004BEE07: ;
    PUSH32(esp, MEM32(ebp + 0x3DC));
    ecx = esi;
    PUSH32(esp, 0x004BEE14u); RECOMP_ABI_CALL(0x004DD726u, sub_004DD726); /* call 0x004DD726 */

loc_004BEE14: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x004BEE1Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BEE1Bu); } /* indirect call */
    }

loc_004BEE1E: ;
    MEM32(ebp + 0x3DC) = MEM32(ebp + 0x3DC) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x3DC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 0x3DC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x3DC), ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004BEE07; /* jb: below (unsigned <) */

loc_004BEE2C: ;
    ecx = ebp + -128;
    PUSH32(esp, 0x004BEE34u); RECOMP_ABI_CALL(0x004DCC7Fu, sub_004DCC7F); /* call 0x004DCC7F */

loc_004BEE34: ;
    ecx = ebp + -96;
    PUSH32(esp, 0x004BEE3Cu); RECOMP_ABI_CALL(0x004DCC7Fu, sub_004DCC7F); /* call 0x004DCC7F */

loc_004BEE3C: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_004BEE3E: ;
    ecx = MEM32(ebp + 0x3CC);
    POP32(esp, esi);
    PUSH32(esp, 0x004BEE4Au); RECOMP_ABI_CALL(0x005CFF80u, sub_005CFF80); /* call 0x005CFF80 */

loc_004BEE4A: ;
    _fb = (uint32_t)(0x3D0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x3D0;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004BEE54
 * Original: 0x004BEE54 - 0x004BEF7E (298 bytes, 116 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BEE54(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004BEE54: ;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0x004BEE5Du); RECOMP_ABI_CALL(0x004DC981u, sub_004DC981); /* call 0x004DC981 */

loc_004BEE5D: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x004BEE64u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BEE61u); } /* indirect call */
    }

loc_004BEE64: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004BEF7B; /* jne: not equal / not zero */

loc_004BEE6C: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x004BEE73u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BEE70u); } /* indirect call */
    }

loc_004BEE73: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004BEF7B; /* je: equal / zero */

loc_004BEE7B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004BEE81u); RECOMP_ABI_CALL(0x004DC9FAu, sub_004DC9FA); /* call 0x004DC9FA */

loc_004BEE81: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x004BEE88u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BEE85u); } /* indirect call */
    }

loc_004BEE88: ;
    esi = eax;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004BEE91u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BEE8Eu); } /* indirect call */
    }

loc_004BEE91: ;
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x14), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004BEE9F; /* jne: not equal / not zero */

loc_004BEE96: ;
    MEM8(edi + 0x39) = 1;
    goto loc_004BEF7A;

loc_004BEE9F: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(edi + 0x39)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x39), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004BEF79; /* je: equal / zero */

loc_004BEEAB: ;
    PUSH32(esp, 0x004BEEB0u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004BEEB0: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x004BEEBAu); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004BEEBA: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004BEECD; /* je: equal / zero */

loc_004BEEC1: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    ecx = eax;
    PUSH32(esp, 0x004BEECBu); RECOMP_ABI_CALL(0x004BE6C9u, sub_004BE6C9); /* call 0x004BE6C9 */

loc_004BEECB: ;
    goto loc_004BEECF;

loc_004BEECD: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004BEECF: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004BEED5u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004BEED5: ;
    ecx = eax;
    PUSH32(esp, 0x004BEEDCu); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004BEEDC: ;
    esi = eax;
    PUSH32(esp, 0x004BEEE3u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004BEEE3: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x004BEEEDu); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004BEEED: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004BEEFD; /* je: equal / zero */

loc_004BEEF4: ;
    ecx = eax;
    PUSH32(esp, 0x004BEEFBu); RECOMP_ABI_CALL(0x004BE5D6u, sub_004BE5D6); /* call 0x004BE5D6 */

loc_004BEEFB: ;
    goto loc_004BEEFF;

loc_004BEEFD: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004BEEFF: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004BEF05u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004BEF05: ;
    ecx = eax;
    PUSH32(esp, 0x004BEF0Cu); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004BEF0C: ;
    PUSH32(esp, eax);
    ecx = esi + 8;
    PUSH32(esp, 0x004BEF15u); RECOMP_ABI_CALL(0x004DB91Cu, sub_004DB91C); /* call 0x004DB91C */

loc_004BEF15: ;
    PUSH32(esp, 0x004BEF1Au); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004BEF1A: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x48);
    PUSH32(esp, 0x004BEF24u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004BEF24: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004BEF41; /* je: equal / zero */

loc_004BEF2B: ;
    PUSH32(esp, esi);
    edx = 0x7B891F;
    PUSH32(esp, edx);
    PUSH32(esp, 0x865264);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x004BEF3Fu); RECOMP_ABI_CALL(0x004BFC0Au, sub_004BFC0A); /* call 0x004BFC0A */

loc_004BEF3F: ;
    goto loc_004BEF43;

loc_004BEF41: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004BEF43: ;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004BEF4Au); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004BEF4A: ;
    ecx = eax;
    PUSH32(esp, 0x004BEF51u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004BEF51: ;
    esi = edi + 8;
    ebp = MEM32(esi + 0xC);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_004BEF78; /* jbe: below or equal (unsigned <=) */

loc_004BEF5F: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x004BEF67u); RECOMP_ABI_CALL(0x004DD726u, sub_004DD726); /* call 0x004DD726 */

loc_004BEF67: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004BEF73u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BEF70u); } /* indirect call */
    }

loc_004BEF73: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004BEF5F; /* jb: below (unsigned <) */

loc_004BEF78: ;
    POP32(esp, ebp);

loc_004BEF79: ;
    POP32(esp, ebx);

loc_004BEF7A: ;
    POP32(esp, esi);

loc_004BEF7B: ;
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004BEF7E
 * Original: 0x004BEF7E - 0x004BEFF2 (116 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BEF7E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004BEF7E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x004BEF86u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BEF83u); } /* indirect call */
    }

loc_004BEF86: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004BEFF0; /* je: equal / zero */

loc_004BEF8A: ;
    eax = MEM32(esi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ecx = esi;
    SET_LO8(ebx, 1);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004BEF96u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BEF93u); } /* indirect call */
    }

loc_004BEF96: ;
    edi = MEM32(eax + 0x14);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004BEFC4; /* jbe: below or equal (unsigned <=) */

loc_004BEF9F: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004BEFA6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BEFA3u); } /* indirect call */
    }

loc_004BEFA6: ;
    PUSH32(esp, ebp);
    ecx = eax + 8;
    PUSH32(esp, 0x004BEFAFu); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004BEFAF: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x004BEFB6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BEFB3u); } /* indirect call */
    }

loc_004BEFB6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004BEFC2; /* jne: not equal / not zero */

loc_004BEFBB: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004BEF9F; /* jb: below (unsigned <) */

loc_004BEFC0: ;
    goto loc_004BEFC4;

loc_004BEFC2: ;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_004BEFC4: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 0x38)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(esi + 0x38) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004BEFED; /* je: equal / zero */

loc_004BEFC9: ;
    MEM8(esi + 0x38) = LO8(ebx);
    edi = esi + 8;
    ebp = MEM32(edi + 0xC);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004BEFED; /* jbe: below or equal (unsigned <=) */

loc_004BEFD8: ;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x004BEFE0u); RECOMP_ABI_CALL(0x004DD726u, sub_004DD726); /* call 0x004DD726 */

loc_004BEFE0: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004BEFE8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BEFE5u); } /* indirect call */
    }

loc_004BEFE8: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004BEFD8; /* jb: below (unsigned <) */

loc_004BEFED: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_004BEFF0: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004BEFF2
 * Original: 0x004BEFF2 - 0x004BF013 (33 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BEFF2(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004BEFF2: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004BF007; /* je: equal / zero */

loc_004BEFFC: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004BF001u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BEFFEu); } /* indirect call */
    }

loc_004BF001: ;
    MEM32(esi + 0x1C) = MEM32(esi + 0x1C) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_004BF007: ;
    PUSH32(esp, 0);
    ecx = esi + 0x10;
    PUSH32(esp, 0x004BF011u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004BF011: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004BF013
 * Original: 0x004BF013 - 0x004BF035 (34 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BF013(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004BF013: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004BF027; /* je: equal / zero */

loc_004BF01D: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004BF021u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BF01Fu); } /* indirect call */
    }

loc_004BF021: ;
    MEM32(esi + 0x1C) = MEM32(esi + 0x1C) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_004BF031;

loc_004BF027: ;
    PUSH32(esp, 0);
    ecx = esi + 0x10;
    PUSH32(esp, 0x004BF031u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004BF031: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004BF035
 * Original: 0x004BF035 - 0x004BF06C (55 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BF035(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004BF035: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x30);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0xB4);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x004BF051u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BF04Eu); } /* indirect call */
    }

loc_004BF051: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004BF069; /* je: equal / zero */

loc_004BF055: ;
    eax = MEM32(esi);
    PUSH32(esp, ebx);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x28;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = MEM32(edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x004BF062u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BF05Fu); } /* indirect call */
    }

loc_004BF062: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebx + 0x18); PUSH32(esp, 0x004BF068u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BF065u); } /* indirect call */
    }

loc_004BF068: ;
    POP32(esp, ebx);

loc_004BF069: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004BF06C
 * Original: 0x004BF06C - 0x004BF108 (156 bytes, 47 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BF06C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004BF06C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x004BF077u); RECOMP_ABI_CALL(0x004BFD06u, sub_004BFD06); /* call 0x004BFD06 */

loc_004BF077: ;
    edi = esi + 0x24;
    ecx = edi;
    PUSH32(esp, 0x004BF081u); RECOMP_ABI_CALL(0x004E36E1u, sub_004E36E1); /* call 0x004E36E1 */

loc_004BF081: ;
    ebx = esi + 0x28;
    ecx = ebx;
    PUSH32(esp, 0x004BF08Bu); RECOMP_ABI_CALL(0x004E370Eu, sub_004E370E); /* call 0x004E370E */

loc_004BF08B: ;
    ebp = esi + 0x30;
    ecx = ebp;
    MEM32(esi + 0x2C) = 0x863F30;
    PUSH32(esp, 0x004BF09Cu); RECOMP_ABI_CALL(0x004BFCB8u, sub_004BFCB8); /* call 0x004BFCB8 */

loc_004BF09C: ;
    ecx = esi + 0x34;
    PUSH32(esp, 0x004BF0A4u); RECOMP_ABI_CALL(0x004E596Fu, sub_004E596F); /* call 0x004E596F */

loc_004BF0A4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esi + 0x38) = LO8(eax);
    MEM8(esi + 0x39) = LO8(eax);
    MEM8(esi + 0x3A) = LO8(eax);
    MEM32(esi) = 0x8652DC;
    MEM32(edi) = 0x8652BC;
    MEM32(ebx) = 0x865298;
    MEM32(esi + 0x2C) = 0x865290;
    MEM32(ebp) = 0x865284;
    MEM32(esi + 0x34) = 0x865278;
    MEM32(esi + 0x3C) = eax;
    MEM32(esi + 0x40) = eax;
    MEM32(esi + 0x44) = eax;
    MEM8(esi + 0x48) = LO8(eax);
    MEM32(esi + 0x4C) = eax;
    PUSH32(esp, 0x2B6B696B);
    eax = esi + 0x2C;
    PUSH32(esp, eax);
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x34);
    ecx = MEM32(eax + 0x14);
    PUSH32(esp, 0x004BF101u); RECOMP_ABI_CALL(0x004B3DE6u, sub_004B3DE6); /* call 0x004B3DE6 */

loc_004BF101: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_004BF108
 * Original: 0x004BF108 - 0x004BF10B (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BF108(void)
{

loc_004BF108: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004BF10B
 * Original: 0x004BF10B - 0x004BF10E (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BF10B(void)
{

loc_004BF10B: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004BF10E
 * Original: 0x004BF10E - 0x004BF111 (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BF10E(void)
{

loc_004BF10E: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004BF111
 * Original: 0x004BF111 - 0x004BF112 (1 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BF111(void)
{

loc_004BF111: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004BF112
 * Original: 0x004BF112 - 0x004BF113 (1 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BF112(void)
{

loc_004BF112: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004BF113
 * Original: 0x004BF113 - 0x004BF114 (1 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BF113(void)
{

loc_004BF113: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004BF114
 * Original: 0x004BF114 - 0x004BF11C (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BF114(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004BF114: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x24;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004BF6DE(); return; /* tail jmp 0x004BF6DE */

}

/**
 * sub_004BF11C
 * Original: 0x004BF11C - 0x004BF124 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BF11C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004BF11C: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x28;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004BF6DE(); return; /* tail jmp 0x004BF6DE */

}

/**
 * sub_004BF124
 * Original: 0x004BF124 - 0x004BF12C (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BF124(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004BF124: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x2C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004BF6DE(); return; /* tail jmp 0x004BF6DE */

}

/**
 * sub_004BF12C
 * Original: 0x004BF12C - 0x004BF134 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BF12C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004BF12C: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004BF6DE(); return; /* tail jmp 0x004BF6DE */

}

/**
 * sub_004BF134
 * Original: 0x004BF134 - 0x004BF13C (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BF134(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004BF134: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x34;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004BF6DE(); return; /* tail jmp 0x004BF6DE */

}

/**
 * sub_004BF13C
 * Original: 0x004BF13C - 0x004BF1E1 (165 bytes, 49 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BF13C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004BF13C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esi) = 0x8652DC;
    MEM32(esi + 0x2C) = 0x865290;
    MEM32(esi + 0x34) = 0x865278;
    eax = esi + 0x2C;
    PUSH32(esp, 0x2B6B696B);
    PUSH32(esp, eax);
    edi = esi + 0x24;
    MEM32(edi) = 0x8652BC;
    ebx = esi + 0x28;
    MEM32(ebx) = 0x865298;
    ebp = esi + 0x30;
    MEM32(ebp) = 0x865284;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x34);
    ecx = MEM32(eax + 0x14);
    PUSH32(esp, 0x004BF18Eu); RECOMP_ABI_CALL(0x004B3E43u, sub_004B3E43); /* call 0x004B3E43 */

loc_004BF18E: ;
    ecx = MEM32(esi + 0x44);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004BF19A; /* je: equal / zero */

loc_004BF195: ;
    PUSH32(esp, 0x004BF19Au); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004BF19A: ;
    ecx = MEM32(esi + 0x40);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004BF1A6; /* je: equal / zero */

loc_004BF1A1: ;
    PUSH32(esp, 0x004BF1A6u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004BF1A6: ;
    ecx = MEM32(esi + 0x3C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004BF1B2; /* je: equal / zero */

loc_004BF1AD: ;
    PUSH32(esp, 0x004BF1B2u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004BF1B2: ;
    ecx = esi + 0x34;
    PUSH32(esp, 0x004BF1BAu); RECOMP_ABI_CALL(0x004E5978u, sub_004E5978); /* call 0x004E5978 */

loc_004BF1BA: ;
    ecx = ebp;
    PUSH32(esp, 0x004BF1C1u); RECOMP_ABI_CALL(0x004BFCC1u, sub_004BFCC1); /* call 0x004BFCC1 */

loc_004BF1C1: ;
    ecx = ebx;
    MEM32(esi + 0x2C) = 0x863F30;
    PUSH32(esp, 0x004BF1CFu); RECOMP_ABI_CALL(0x004E3717u, sub_004E3717); /* call 0x004E3717 */

loc_004BF1CF: ;
    ecx = edi;
    PUSH32(esp, 0x004BF1D6u); RECOMP_ABI_CALL(0x004E36EAu, sub_004E36EA); /* call 0x004E36EA */

loc_004BF1D6: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_004BFD22(); return; /* tail jmp 0x004BFD22 */

}

/**
 * sub_004BF1E1
 * Original: 0x004BF1E1 - 0x004BF2BA (217 bytes, 89 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BF1E1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004BF1E1: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x004BF1E8u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004BF1E8: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x004BF1EFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BF1ECu); } /* indirect call */
    }

loc_004BF1EF: ;
    edx = MEM32(eax);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = eax;
    MEM32(esp + 4) = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x004BF1FCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BF1F9u); } /* indirect call */
    }

loc_004BF1FC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004BF2B3; /* je: equal / zero */

loc_004BF204: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x004BF20Bu); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004BF20B: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x004BF212u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BF20Fu); } /* indirect call */
    }

loc_004BF212: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x004BF219u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BF216u); } /* indirect call */
    }

loc_004BF219: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x004BF220u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BF21Du); } /* indirect call */
    }

loc_004BF220: ;
    edi = eax;
    esi = MEM32(edi + 0x14);
    PUSH32(esp, 0x004BF22Au); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004BF22A: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x004BF234u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004BF234: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004BF246; /* je: equal / zero */

loc_004BF23B: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x004BF244u); RECOMP_ABI_CALL(0x004BE6FBu, sub_004BE6FB); /* call 0x004BE6FB */

loc_004BF244: ;
    goto loc_004BF248;

loc_004BF246: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004BF248: ;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004BF24Fu); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004BF24F: ;
    ecx = eax;
    PUSH32(esp, 0x004BF256u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004BF256: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_004BF2B0; /* jbe: below or equal (unsigned <=) */

loc_004BF260: ;
    goto loc_004BF264;

loc_004BF262: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004BF264: ;
    PUSH32(esp, 0x004BF269u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004BF269: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x004BF273u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004BF273: ;
    ebp = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004BF28F; /* je: equal / zero */

loc_004BF27C: ;
    PUSH32(esp, ebx);
    ecx = edi + 8;
    PUSH32(esp, 0x004BF285u); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004BF285: ;
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x004BF28Du); RECOMP_ABI_CALL(0x004BFDEFu, sub_004BFDEF); /* call 0x004BFDEF */

loc_004BF28D: ;
    goto loc_004BF291;

loc_004BF28F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004BF291: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004BF297u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004BF297: ;
    ecx = eax;
    PUSH32(esp, 0x004BF29Eu); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004BF29E: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x004BF2ABu); RECOMP_ABI_CALL(0x004DB91Cu, sub_004DB91C); /* call 0x004DB91C */

loc_004BF2AB: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004BF262; /* jb: below (unsigned <) */

loc_004BF2B0: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);

loc_004BF2B3: ;
    eax = MEM32(esp + 4);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004BF2BA
 * Original: 0x004BF2BA - 0x004BF38E (212 bytes, 82 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004BF2BA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004BF2BA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x40;
    ecx = MEM32(edi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004BF2DB; /* je: equal / zero */

loc_004BF2CE: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004BF2D3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BF2D0u); } /* indirect call */
    }

loc_004BF2D3: ;
    PUSH32(esp, ebx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004BF2DBu); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004BF2DB: ;
    edi = esi + 0x44;
    ecx = MEM32(edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004BF2F1; /* je: equal / zero */

loc_004BF2E4: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004BF2E9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BF2E6u); } /* indirect call */
    }

loc_004BF2E9: ;
    PUSH32(esp, ebx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004BF2F1u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004BF2F1: ;
    edi = MEM32(0x90E7AC);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004BF2FCu); RECOMP_ABI_CALL(0x004DC981u, sub_004DC981); /* call 0x004DC981 */

loc_004BF2FC: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x004BF303u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BF300u); } /* indirect call */
    }

loc_004BF303: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004BF32D; /* jne: not equal / not zero */

loc_004BF307: ;
    _fa = (uint32_t)(MEM8(esi + 0x48)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x48), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004BF32D; /* jne: not equal / not zero */

loc_004BF30C: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x44); PUSH32(esp, 0x004BF313u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BF310u); } /* indirect call */
    }

loc_004BF313: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x67616D65);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x004BF31Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BF31Cu); } /* indirect call */
    }

loc_004BF31F: ;
    eax = MEM32(edi + 0x18);
    eax = MEM32(eax + 0x34);
    ecx = MEM32(eax + 0x10);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004BF32Du); RECOMP_ABI_CALL(0x004AFA64u, sub_004AFA64); /* call 0x004AFA64 */

loc_004BF32D: ;
    PUSH32(esp, 0x2B6D7367);
    eax = esi + 0x2C;
    PUSH32(esp, eax);
    eax = MEM32(edi + 0x18);
    eax = MEM32(eax + 0x34);
    ecx = MEM32(eax + 0x14);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004BF344u); RECOMP_ABI_CALL(0x004B3E43u, sub_004B3E43); /* call 0x004B3E43 */

loc_004BF344: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x30); PUSH32(esp, 0x004BF34Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BF348u); } /* indirect call */
    }

loc_004BF34B: ;
    edx = MEM32(eax);
    ecx = esi + 0x24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x004BF356u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BF353u); } /* indirect call */
    }

loc_004BF356: ;
    eax = esi + 0x28;
    MEM32(ebp + -4) = eax;
    eax = ebp + -4;
    PUSH32(esp, eax);
    eax = MEM32(edi + 0x18);
    eax = MEM32(eax + 0x30);
    ecx = MEM32(eax + 0xB4);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004BF374u); RECOMP_ABI_CALL(0x004DD8B2u, sub_004DD8B2); /* call 0x004DD8B2 */

loc_004BF374: ;
    PUSH32(esp, ebx);
    ecx = esi + 0x3C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004BF37Du); RECOMP_ABI_CALL(0x004BE6AEu, sub_004BE6AE); /* call 0x004BE6AE */

loc_004BF37D: ;
    POP32(esp, edi);
    MEM8(esi + 0x3A) = LO8(ebx);
    MEM8(esi + 0x38) = LO8(ebx);
    MEM8(esi + 0x39) = LO8(ebx);
    MEM8(esi + 0x48) = LO8(ebx);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004BF38E
 * Original: 0x004BF38E - 0x004BF3CA (60 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BF38E(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004BF38E: ;
    eax = MEM32(ecx + 0x3C);
    esp += 4; return; /* ret */

    PUSH32(esp, eax);
    PUSH32(esp, 0x80);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x004BF3C6u); RECOMP_ABI_CALL(0x004B2D0Bu, sub_004B2D0B); /* call 0x004B2D0B */

loc_004BF3C6: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004BF3CA
 * Original: 0x004BF3CA - 0x004BF430 (102 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BF3CA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004BF3CA: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x004BF3D1u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004BF3D1: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x004BF3D8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BF3D5u); } /* indirect call */
    }

loc_004BF3D8: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x004BF3DFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BF3DCu); } /* indirect call */
    }

loc_004BF3DF: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x004BF3E6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BF3E3u); } /* indirect call */
    }

loc_004BF3E6: ;
    edi = MEM32(eax + 0x14);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004BF42D; /* jbe: below or equal (unsigned <=) */

loc_004BF3EF: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = eax + 8;

loc_004BF3F4: ;
    PUSH32(esp, ebx);
    ecx = ebp;
    PUSH32(esp, 0x004BF3FCu); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004BF3FC: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x004BF403u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BF400u); } /* indirect call */
    }

loc_004BF403: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x7C); PUSH32(esp, 0x004BF40Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BF407u); } /* indirect call */
    }

loc_004BF40A: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004BF426; /* je: equal / zero */

loc_004BF410: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x004BF417u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BF414u); } /* indirect call */
    }

loc_004BF417: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004BF426; /* jne: not equal / not zero */

loc_004BF41B: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x004BF426u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BF423u); } /* indirect call */
    }

loc_004BF426: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004BF3F4; /* jb: below (unsigned <) */

loc_004BF42B: ;
    POP32(esp, esi);
    POP32(esp, ebp);

loc_004BF42D: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_004BF430
 * Original: 0x004BF430 - 0x004BF43B (11 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BF430(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004BF430: ;
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x004BF43Au); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004BF43A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004BF43B
 * Original: 0x004BF43B - 0x004BF448 (13 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BF43B(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004BF43B: ;
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x004BF445u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004BF445: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004BF448
 * Original: 0x004BF448 - 0x004BF4A6 (94 bytes, 41 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BF448(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004BF448: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004BF450u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004BF450: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x004BF457u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BF454u); } /* indirect call */
    }

loc_004BF457: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x004BF45Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BF45Bu); } /* indirect call */
    }

loc_004BF45E: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004BF4A2; /* jne: not equal / not zero */

loc_004BF464: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = esi + -36;
    ecx = edi;
    PUSH32(esp, 0x004BF471u); RECOMP_ABI_CALL(0x004BF035u, sub_004BF035); /* call 0x004BF035 */

loc_004BF471: ;
    ebp = MEM32(esi + -16);
    _fb = (uint32_t)(0xFFFFFFE4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xFFFFFFE4u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004BF491; /* jbe: below or equal (unsigned <=) */

loc_004BF47D: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x004BF485u); RECOMP_ABI_CALL(0x004DD726u, sub_004DD726); /* call 0x004DD726 */

loc_004BF485: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004BF48Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BF48Au); } /* indirect call */
    }

loc_004BF48C: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004BF47D; /* jb: below (unsigned <) */

loc_004BF491: ;
    ecx = edi;
    PUSH32(esp, 0x004BF498u); RECOMP_ABI_CALL(0x004BEF7Eu, sub_004BEF7E); /* call 0x004BEF7E */

loc_004BF498: ;
    ecx = edi;
    PUSH32(esp, 0x004BF49Fu); RECOMP_ABI_CALL(0x004BEE54u, sub_004BEE54); /* call 0x004BEE54 */

loc_004BF49F: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_004BF4A2: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004BF4A6
 * Original: 0x004BF4A6 - 0x004BF4FA (84 bytes, 40 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BF4A6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004BF4A6: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = edi + -40;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x004BF4B4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BF4B1u); } /* indirect call */
    }

loc_004BF4B4: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004BF4BBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BF4B8u); } /* indirect call */
    }

loc_004BF4BB: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x004BF4C2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BF4BFu); } /* indirect call */
    }

loc_004BF4C2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004BF4EE; /* jne: not equal / not zero */

loc_004BF4C7: ;
    PUSH32(esp, ebx);
    _fb = (uint32_t)(0xFFFFFFE0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xFFFFFFE0u;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebp);
    ebp = MEM32(edi + 0xC);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004BF4EC; /* jbe: below or equal (unsigned <=) */

loc_004BF4D5: ;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x004BF4DDu); RECOMP_ABI_CALL(0x004DD726u, sub_004DD726); /* call 0x004DD726 */

loc_004BF4DD: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x004BF4E7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BF4E4u); } /* indirect call */
    }

loc_004BF4E7: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004BF4D5; /* jb: below (unsigned <) */

loc_004BF4EC: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_004BF4EE: ;
    ecx = esi;
    PUSH32(esp, 0x004BF4F5u); RECOMP_ABI_CALL(0x004BEF7Eu, sub_004BEF7E); /* call 0x004BEF7E */

loc_004BF4F5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004BF4FA
 * Original: 0x004BF4FA - 0x004BF577 (125 bytes, 48 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BF4FA(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004BF4FA: ;
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0x004BF502u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004BF502: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x004BF509u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BF506u); } /* indirect call */
    }

loc_004BF509: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x004BF510u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BF50Du); } /* indirect call */
    }

loc_004BF510: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004BF573; /* jne: not equal / not zero */

loc_004BF516: ;
    PUSH32(esp, 0x004BF51Bu); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004BF51B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x004BF527u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004BF527: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004BF537; /* je: equal / zero */

loc_004BF52E: ;
    ecx = eax;
    PUSH32(esp, 0x004BF535u); RECOMP_ABI_CALL(0x004BFEC8u, sub_004BFEC8); /* call 0x004BFEC8 */

loc_004BF535: ;
    goto loc_004BF539;

loc_004BF537: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004BF539: ;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004BF540u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004BF540: ;
    ecx = eax;
    PUSH32(esp, 0x004BF547u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004BF547: ;
    PUSH32(esp, eax);
    ecx = edi + 0x18;
    PUSH32(esp, 0x004BF550u); RECOMP_ABI_CALL(0x004BE6AEu, sub_004BE6AE); /* call 0x004BE6AE */

loc_004BF550: ;
    esi = edi + -36;
    ecx = esi;
    PUSH32(esp, 0x004BF55Au); RECOMP_ABI_CALL(0x004BF3CAu, sub_004BF3CA); /* call 0x004BF3CA */

loc_004BF55A: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x004BF561u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BF55Eu); } /* indirect call */
    }

loc_004BF561: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004BF568u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BF565u); } /* indirect call */
    }

loc_004BF568: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x004BF56Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BF56Cu); } /* indirect call */
    }

loc_004BF56F: ;
    MEM8(edi + 0x16) = LO8(eax);
    POP32(esp, esi);

loc_004BF573: ;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004BF596
 * Original: 0x004BF596 - 0x004BF6DE (328 bytes, 119 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004BF596(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004BF596: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x3C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004BF5A8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BF5A5u); } /* indirect call */
    }

loc_004BF5A8: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004BF6D6; /* je: equal / zero */

loc_004BF5B2: ;
    eax = MEM32(ebx);
    PUSH32(esp, edi);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004BF5BAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BF5B7u); } /* indirect call */
    }

loc_004BF5BA: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x004BF5C1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BF5BEu); } /* indirect call */
    }

loc_004BF5C1: ;
    PUSH32(esp, 1);
    edi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004BF5CAu); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004BF5CA: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x004BF5D2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BF5CFu); } /* indirect call */
    }

loc_004BF5D2: ;
    _fb = (uint32_t)(0x12C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x12C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = ebp + -32;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004BF5E0u); RECOMP_ABI_CALL(0x004DCBBBu, sub_004DCBBB); /* call 0x004DCBBB */

loc_004BF5E0: ;
    ecx = MEM32(esi + 0x3C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004BF5E8u); RECOMP_ABI_CALL(0x004BFFC2u, sub_004BFFC2); /* call 0x004BFFC2 */

loc_004BF5E8: ;
    PUSH32(esp, eax);
    ecx = ebp + -32;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004BF5F1u); RECOMP_ABI_CALL(0x004DCFFBu, sub_004DCFFB); /* call 0x004DCFFB */

loc_004BF5F1: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004BF5F6u); RECOMP_ABI_CALL(0x004DC981u, sub_004DC981); /* call 0x004DC981 */

loc_004BF5F6: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x004BF5FDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BF5FAu); } /* indirect call */
    }

loc_004BF5FD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    POP32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_004BF60B; /* jne: not equal / not zero */

loc_004BF603: ;
    ecx = MEM32(esi + 0x3C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004BF60Bu); RECOMP_ABI_CALL(0x004BFFEAu, sub_004BFFEA); /* call 0x004BFFEA */

loc_004BF60B: ;
    ecx = MEM32(esi + 0x3C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(ecx + 8)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 8), LO8(eax) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004BF632; /* je: equal / zero */

loc_004BF615: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004BF61Au); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004BF61A: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x004BF621u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BF61Eu); } /* indirect call */
    }

loc_004BF621: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x004BF628u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BF625u); } /* indirect call */
    }

loc_004BF628: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = ecx;

loc_004BF632: ;
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    PUSH32(esp, 0x865210);
    ecx = ebp + -32;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004BF642u); RECOMP_ABI_CALL(0x004DCDDCu, sub_004DCDDC); /* call 0x004DCDDC */

loc_004BF642: ;
    eax = MEM32(esi + 0x3C);
    PUSH32(esp, 3);
    PUSH32(esp, MEM32(eax + 0xC));
    ecx = ebp + -32;
    PUSH32(esp, 0x865218);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004BF657u); RECOMP_ABI_CALL(0x004DCDDCu, sub_004DCDDC); /* call 0x004DCDDC */

loc_004BF657: ;
    ecx = MEM32(0x90E7AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x4C); PUSH32(esp, 0x004BF662u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BF65Fu); } /* indirect call */
    }

loc_004BF662: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(0x863164));
    edx = MEM32(eax);
    PUSH32(esp, MEM32(0x863160));
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x004BF675u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BF672u); } /* indirect call */
    }

loc_004BF675: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x004BF67Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BF67Bu); } /* indirect call */
    }

loc_004BF67E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x865224);
    ecx = ebp + -32;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004BF68Cu); RECOMP_ABI_CALL(0x004DCDDCu, sub_004DCDDC); /* call 0x004DCDDC */

loc_004BF68C: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004BF691u); RECOMP_ABI_CALL(0x004DC981u, sub_004DC981); /* call 0x004DC981 */

loc_004BF691: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x004BF698u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BF695u); } /* indirect call */
    }

loc_004BF698: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004BF6B3; /* jne: not equal / not zero */

loc_004BF69C: ;
    eax = MEM32(esi + 0x3C);
    _fa = (uint32_t)(MEM8(eax + 0x14)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x14), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004BF6B3; /* je: equal / zero */

loc_004BF6A5: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004BF6ACu); RECOMP_ABI_CALL(0x004BEC22u, sub_004BEC22); /* call 0x004BEC22 */

loc_004BF6AC: ;
    eax = MEM32(esi + 0x3C);
    MEM8(eax + 0x14) = 0;

loc_004BF6B3: ;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004BF6BAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BF6B7u); } /* indirect call */
    }

loc_004BF6BA: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 8));
    edx = MEM32(eax);
    ecx = ebp + -32;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x004BF6C8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BF6C5u); } /* indirect call */
    }

loc_004BF6C8: ;
    ecx = ebp + -32;
    esi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004BF6D2u); RECOMP_ABI_CALL(0x004DCC7Fu, sub_004DCC7F); /* call 0x004DCC7F */

loc_004BF6D2: ;
    eax = esi;
    goto loc_004BF6D8;

loc_004BF6D6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004BF6D8: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004BF6DE
 * Original: 0x004BF6DE - 0x004BF6FA (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BF6DE(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004BF6DE: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004BF6E6u); RECOMP_ABI_CALL(0x004BF13Cu, sub_004BF13C); /* call 0x004BF13C */

loc_004BF6E6: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004BF6F4; /* je: equal / zero */

loc_004BF6ED: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004BF6F3u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004BF6F3: ;
    POP32(esp, ecx);

loc_004BF6F4: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004BF6FA
 * Original: 0x004BF6FA - 0x004BF804 (266 bytes, 102 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004BF6FA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004BF6FA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x90E7AC);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004BF70Du); RECOMP_ABI_CALL(0x004DC981u, sub_004DC981); /* call 0x004DC981 */

loc_004BF70D: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x004BF714u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BF711u); } /* indirect call */
    }

loc_004BF714: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_004BF739; /* jne: not equal / not zero */

loc_004BF718: ;
    eax = MEM32(edi + 0x18);
    eax = MEM32(eax + 0x34);
    ecx = MEM32(eax + 0x10);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004BF726u); RECOMP_ABI_CALL(0x004AF0E1u, sub_004AF0E1); /* call 0x004AF0E1 */

loc_004BF726: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x44); PUSH32(esp, 0x004BF72Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BF72Au); } /* indirect call */
    }

loc_004BF72D: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x67616D65);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004BF739u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BF736u); } /* indirect call */
    }

loc_004BF739: ;
    eax = MEM32(edi);
    PUSH32(esp, ebx);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x30); PUSH32(esp, 0x004BF741u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BF73Eu); } /* indirect call */
    }

loc_004BF741: ;
    edx = MEM32(eax);
    ecx = esi;
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    ebx = esi + 0x24;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x004BF754u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BF751u); } /* indirect call */
    }

loc_004BF754: ;
    eax = esi;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    ecx = esi + 0x28;
    _cf = 0; /* logical op clears CF */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -4) = eax;
    eax = ebp + -4;
    PUSH32(esp, eax);
    eax = MEM32(edi + 0x18);
    eax = MEM32(eax + 0x30);
    ecx = MEM32(eax + 0xB4);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x10)) >> 32) & 1);
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004BF77Au); RECOMP_ABI_CALL(0x004DD750u, sub_004DD750); /* call 0x004DD750 */

loc_004BF77A: ;
    eax = esi;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    ecx = esi + 0x2C;
    _cf = 0; /* logical op clears CF */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0x2B6D7367);
    PUSH32(esp, eax);
    eax = MEM32(edi + 0x18);
    eax = MEM32(eax + 0x34);
    ecx = MEM32(eax + 0x14);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004BF799u); RECOMP_ABI_CALL(0x004B3DE6u, sub_004B3DE6); /* call 0x004B3DE6 */

loc_004BF799: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004BF79Eu); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004BF79E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x18);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004BF7AAu); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004BF7AA: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_004BF7BB; /* je: equal / zero */

loc_004BF7B2: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004BF7B9u); RECOMP_ABI_CALL(0x004BFEC8u, sub_004BFEC8); /* call 0x004BFEC8 */

loc_004BF7B9: ;
    goto loc_004BF7BD;

loc_004BF7BB: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004BF7BD: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004BF7C3u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004BF7C3: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004BF7CAu); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004BF7CA: ;
    PUSH32(esp, eax);
    ecx = esi + 0x3C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004BF7D3u); RECOMP_ABI_CALL(0x004BE6AEu, sub_004BE6AE); /* call 0x004BE6AE */

loc_004BF7D3: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004BF7DAu); RECOMP_ABI_CALL(0x004BF3CAu, sub_004BF3CA); /* call 0x004BF3CA */

loc_004BF7DA: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004BF7E1u); RECOMP_ABI_CALL(0x004BF035u, sub_004BF035); /* call 0x004BF035 */

loc_004BF7E1: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x004BF7E8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BF7E5u); } /* indirect call */
    }

loc_004BF7E8: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004BF7EFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BF7ECu); } /* indirect call */
    }

loc_004BF7EF: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x004BF7F6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BF7F3u); } /* indirect call */
    }

loc_004BF7F6: ;
    ecx = esi;
    MEM8(esi + 0x3A) = LO8(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004BF800u); RECOMP_ABI_CALL(0x004BEE54u, sub_004BEE54); /* call 0x004BEE54 */

loc_004BF800: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004BF804
 * Original: 0x004BF804 - 0x004BF846 (66 bytes, 21 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004BF804(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004BF804: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004BF824; /* je: equal / zero */

loc_004BF815: ;
    ecx = esi + 0xC;
    MEM32(esi + 8) = 0x865314;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004BF824u); RECOMP_ABI_CALL(0x004BDBCAu, sub_004BDBCA); /* call 0x004BDBCA */

loc_004BF824: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004BF82Bu); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_004BF82B: ;
    eax = MEM32(esi + 8);
    MEM32(esi) = 0x865308;
    eax = MEM32(eax + 4);
    MEM32(eax + esi + 8) = 0x8652F8;
    eax = esi;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004BF846
 * Original: 0x004BF846 - 0x004BF85F (25 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BF846(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004BF846: ;
    eax = MEM32(ecx + 8);
    MEM32(ecx) = 0x865308;
    eax = MEM32(eax + 4);
    MEM32(eax + ecx + 8) = 0x8652F8;
    g_seh_ebp = ebp; sub_004DD576(); return; /* tail jmp 0x004DD576 */

}

/**
 * sub_004BF85F
 * Original: 0x004BF85F - 0x004BF88B (44 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BF85F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004BF85F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_004BF867;

loc_004BF867: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004BF86Fu); RECOMP_ABI_CALL(0x004BF846u, sub_004BF846); /* call 0x004BF846 */

loc_004BF86F: ;
    ecx = esi + 0xC;
    PUSH32(esp, 0x004BF877u); RECOMP_ABI_CALL(0x004BDBD3u, sub_004BDBD3); /* call 0x004BDBD3 */

loc_004BF877: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004BF885; /* je: equal / zero */

loc_004BF87E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004BF884u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004BF884: ;
    POP32(esp, ecx);

loc_004BF885: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004BF867
 * Original: 0x004BF867 - 0x004BF88B (36 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BF867(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004BF867: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004BF86Fu); RECOMP_ABI_CALL(0x004BF846u, sub_004BF846); /* call 0x004BF846 */

loc_004BF86F: ;
    ecx = esi + 0xC;
    PUSH32(esp, 0x004BF877u); RECOMP_ABI_CALL(0x004BDBD3u, sub_004BDBD3); /* call 0x004BDBD3 */

loc_004BF877: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004BF885; /* je: equal / zero */

loc_004BF87E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004BF884u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004BF884: ;
    POP32(esp, ecx);

loc_004BF885: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004BF88B
 * Original: 0x004BF88B - 0x004BF8EF (100 bytes, 34 insns)
 * Category: game_vtable
 * CC: thiscall, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004BF88B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004BF88B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x18), 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004BF8AA; /* je: equal / zero */

loc_004BF89C: ;
    ecx = esi + 0x40;
    MEM32(esi) = 0x86532C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004BF8AAu); RECOMP_ABI_CALL(0x004BDBCAu, sub_004BDBCA); /* call 0x004BDBCA */

loc_004BF8AA: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = esi;
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004BF8B9u); RECOMP_ABI_CALL(0x004BDAFEu, sub_004BDAFE); /* call 0x004BDAFE */

loc_004BF8B9: ;
    eax = MEM32(esi);
    eax = MEM32(eax + 4);
    MEM32(esi + eax) = 0x86531C;
    eax = MEM32(esi);
    eax = MEM32(eax + 4);
    ecx = eax + -64;
    MEM32(eax + esi + -4) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004BF8D6u); RECOMP_ABI_CALL(0x004DC96Bu, sub_004DC96B); /* call 0x004DC96B */

loc_004BF8D6: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = esi + 0x24;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004BF8E2u); RECOMP_ABI_CALL(0x004DD9B8u, sub_004DD9B8); /* call 0x004DD9B8 */

loc_004BF8E2: ;
    eax = MEM32(ebp + 0x14);
    MEM32(esi + 0x38) = eax;
    eax = esi;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_004BF8EF
 * Original: 0x004BF8EF - 0x004BF91E (47 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BF8EF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004BF8EF: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + -64);
    eax = MEM32(eax + 4);
    MEM32(eax + esi + -64) = 0x86531C;
    eax = MEM32(esi + -64);
    eax = MEM32(eax + 4);
    ecx = eax + -64;
    MEM32(eax + esi + -68) = ecx;
    ecx = esi + -28;
    PUSH32(esp, 0x004BF915u); RECOMP_ABI_CALL(0x004DDA4Fu, sub_004DDA4F); /* call 0x004DDA4F */

loc_004BF915: ;
    ecx = esi + -24;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004BDB58(); return; /* tail jmp 0x004BDB58 */

}

/**
 * sub_004BF91E
 * Original: 0x004BF91E - 0x004BF92E (16 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BF91E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004BF91E: ;
    _fb = (uint32_t)(MEM32(ecx + -4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(ecx + -4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_004BF926;

loc_004BF926: ;
    _fb = (uint32_t)(0xFFFFFFE4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFE4u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x14)); return; /* indirect tail jmp */

}

/**
 * sub_004BF92E
 * Original: 0x004BF92E - 0x004BF961 (51 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BF92E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004BF92E: ;
    _fb = (uint32_t)(MEM32(ecx + -4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(ecx + -4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_004BF936;

loc_004BF936: ;
    PUSH32(esp, esi);
    esi = ecx + -64;
    PUSH32(esp, edi);
    edi = esi + 0x40;
    ecx = edi;
    PUSH32(esp, 0x004BF945u); RECOMP_ABI_CALL(0x004BF8EFu, sub_004BF8EF); /* call 0x004BF8EF */

loc_004BF945: ;
    ecx = edi;
    PUSH32(esp, 0x004BF94Cu); RECOMP_ABI_CALL(0x004BDBD3u, sub_004BDBD3); /* call 0x004BDBD3 */

loc_004BF94C: ;
    _fa = (uint32_t)(MEM8(esp + 0xC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0xC), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004BF95A; /* je: equal / zero */

loc_004BF953: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004BF959u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_004BF959: ;
    POP32(esp, ecx);

loc_004BF95A: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004BF961
 * Original: 0x004BF961 - 0x004BF973 (18 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BF961(void)
{

loc_004BF961: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004BF969u); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_004BF969: ;
    MEM32(esi) = 0x865334;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004BF973
 * Original: 0x004BF973 - 0x004BF97E (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BF973(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004BF973: ;
    MEM32(ecx) = 0x865334;
    g_seh_ebp = ebp; sub_004DD576(); return; /* tail jmp 0x004DD576 */

}

/**
 * sub_004BF97E
 * Original: 0x004BF97E - 0x004BF9A0 (34 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BF97E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004BF97E: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x865334;
    PUSH32(esp, 0x004BF98Cu); RECOMP_ABI_CALL(0x004DD576u, sub_004DD576); /* call 0x004DD576 */

loc_004BF98C: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004BF99A; /* je: equal / zero */

loc_004BF993: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004BF999u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004BF999: ;
    POP32(esp, ecx);

loc_004BF99A: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004BF9A0
 * Original: 0x004BF9A0 - 0x004BF9E2 (66 bytes, 21 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004BF9A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004BF9A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004BF9C0; /* je: equal / zero */

loc_004BF9B1: ;
    ecx = esi + 0xC;
    MEM32(esi + 8) = 0x865384;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004BF9C0u); RECOMP_ABI_CALL(0x004BDBCAu, sub_004BDBCA); /* call 0x004BDBCA */

loc_004BF9C0: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004BF9C7u); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_004BF9C7: ;
    eax = MEM32(esi + 8);
    MEM32(esi) = 0x865374;
    eax = MEM32(eax + 4);
    MEM32(eax + esi + 8) = 0x865364;
    eax = esi;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004BF9E2
 * Original: 0x004BF9E2 - 0x004BF9FB (25 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BF9E2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004BF9E2: ;
    eax = MEM32(ecx + 8);
    MEM32(ecx) = 0x865374;
    eax = MEM32(eax + 4);
    MEM32(eax + ecx + 8) = 0x865364;
    g_seh_ebp = ebp; sub_004DD576(); return; /* tail jmp 0x004DD576 */

}

/**
 * sub_004BF9FB
 * Original: 0x004BF9FB - 0x004BFA27 (44 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BF9FB(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004BF9FB: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_004BFA03;

loc_004BFA03: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004BFA0Bu); RECOMP_ABI_CALL(0x004BF9E2u, sub_004BF9E2); /* call 0x004BF9E2 */

loc_004BFA0B: ;
    ecx = esi + 0xC;
    PUSH32(esp, 0x004BFA13u); RECOMP_ABI_CALL(0x004BDBD3u, sub_004BDBD3); /* call 0x004BDBD3 */

loc_004BFA13: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004BFA21; /* je: equal / zero */

loc_004BFA1A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004BFA20u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004BFA20: ;
    POP32(esp, ecx);

loc_004BFA21: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004BFA03
 * Original: 0x004BFA03 - 0x004BFA27 (36 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BFA03(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004BFA03: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004BFA0Bu); RECOMP_ABI_CALL(0x004BF9E2u, sub_004BF9E2); /* call 0x004BF9E2 */

loc_004BFA0B: ;
    ecx = esi + 0xC;
    PUSH32(esp, 0x004BFA13u); RECOMP_ABI_CALL(0x004BDBD3u, sub_004BDBD3); /* call 0x004BDBD3 */

loc_004BFA13: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004BFA21; /* je: equal / zero */

loc_004BFA1A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004BFA20u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004BFA20: ;
    POP32(esp, ecx);

loc_004BFA21: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004BFA27
 * Original: 0x004BFA27 - 0x004BFA39 (18 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BFA27(void)
{

loc_004BFA27: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004BFA2Fu); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_004BFA2F: ;
    MEM32(esi) = 0x86538C;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004BFA39
 * Original: 0x004BFA39 - 0x004BFA44 (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BFA39(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004BFA39: ;
    MEM32(ecx) = 0x86538C;
    g_seh_ebp = ebp; sub_004DD576(); return; /* tail jmp 0x004DD576 */

}

/**
 * sub_004BFA44
 * Original: 0x004BFA44 - 0x004BFA66 (34 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BFA44(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004BFA44: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x86538C;
    PUSH32(esp, 0x004BFA52u); RECOMP_ABI_CALL(0x004DD576u, sub_004DD576); /* call 0x004DD576 */

loc_004BFA52: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004BFA60; /* je: equal / zero */

loc_004BFA59: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004BFA5Fu); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004BFA5F: ;
    POP32(esp, ecx);

loc_004BFA60: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004BFA66
 * Original: 0x004BFA66 - 0x004BFA78 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BFA66(void)
{

loc_004BFA66: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004BFA6Eu); RECOMP_ABI_CALL(0x004BDDC5u, sub_004BDDC5); /* call 0x004BDDC5 */

loc_004BFA6E: ;
    MEM32(esi) = 0x8653A4;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004BFA78
 * Original: 0x004BFA78 - 0x004BFA83 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BFA78(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004BFA78: ;
    MEM32(ecx) = 0x8653A4;
    g_seh_ebp = ebp; sub_004BDDEC(); return; /* tail jmp 0x004BDDEC */

}

/**
 * sub_004BFA83
 * Original: 0x004BFA83 - 0x004BFAA5 (34 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BFA83(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004BFA83: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x8653A4;
    PUSH32(esp, 0x004BFA91u); RECOMP_ABI_CALL(0x004BDDECu, sub_004BDDEC); /* call 0x004BDDEC */

loc_004BFA91: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004BFA9F; /* je: equal / zero */

loc_004BFA98: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004BFA9Eu); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004BFA9E: ;
    POP32(esp, ecx);

loc_004BFA9F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004BFAA5
 * Original: 0x004BFAA5 - 0x004BFAC0 (27 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BFAA5(void)
{

loc_004BFAA5: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004BFAADu); RECOMP_ABI_CALL(0x004BFFF5u, sub_004BFFF5); /* call 0x004BFFF5 */

loc_004BFAAD: ;
    eax = MEM32(esp + 8);
    MEM32(esi + 8) = eax;
    MEM32(esi) = 0x8653E0;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004BFAC0
 * Original: 0x004BFAC0 - 0x004BFACB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BFAC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004BFAC0: ;
    MEM32(ecx) = 0x8653E0;
    g_seh_ebp = ebp; sub_004C0007(); return; /* tail jmp 0x004C0007 */

}

/**
 * sub_004BFACB
 * Original: 0x004BFACB - 0x004BFACF (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BFACB(void)
{

loc_004BFACB: ;
    eax = MEM32(ecx + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_004BFACF
 * Original: 0x004BFACF - 0x004BFAF1 (34 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BFACF(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004BFACF: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x8653E0;
    PUSH32(esp, 0x004BFADDu); RECOMP_ABI_CALL(0x004C0007u, sub_004C0007); /* call 0x004C0007 */

loc_004BFADD: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004BFAEB; /* je: equal / zero */

loc_004BFAE4: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004BFAEAu); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004BFAEA: ;
    POP32(esp, ecx);

loc_004BFAEB: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004BFAF1
 * Original: 0x004BFAF1 - 0x004BFB03 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BFAF1(void)
{

loc_004BFAF1: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004BFAF9u); RECOMP_ABI_CALL(0x004C0034u, sub_004C0034); /* call 0x004C0034 */

loc_004BFAF9: ;
    MEM32(esi) = 0x8653EC;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004BFB03
 * Original: 0x004BFB03 - 0x004BFB25 (34 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BFB03(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004BFB03: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x8653EC;
    PUSH32(esp, 0x004BFB11u); RECOMP_ABI_CALL(0x004C0046u, sub_004C0046); /* call 0x004C0046 */

loc_004BFB11: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004BFB1F; /* je: equal / zero */

loc_004BFB18: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004BFB1Eu); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004BFB1E: ;
    POP32(esp, ecx);

loc_004BFB1F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004BFB25
 * Original: 0x004BFB25 - 0x004BFB75 (80 bytes, 32 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BFB25(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004BFB25: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004BFB2Bu); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004BFB2B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x004BFB37u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004BFB37: ;
    esi = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004BFB64; /* je: equal / zero */

loc_004BFB40: ;
    PUSH32(esp, 0x004BFB45u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004BFB45: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x004BFB4Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BFB49u); } /* indirect call */
    }

loc_004BFB4C: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x004BFB53u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BFB50u); } /* indirect call */
    }

loc_004BFB53: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x004BFB5Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BFB57u); } /* indirect call */
    }

loc_004BFB5A: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x004BFB62u); RECOMP_ABI_CALL(0x004BFDEFu, sub_004BFDEF); /* call 0x004BFDEF */

loc_004BFB62: ;
    goto loc_004BFB66;

loc_004BFB64: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004BFB66: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004BFB6Cu); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004BFB6C: ;
    ecx = eax;
    PUSH32(esp, 0x004BFB73u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004BFB73: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004BFB82
 * Original: 0x004BFB82 - 0x004BFB95 (19 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BFB82(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004BFB82: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x38);
    ecx = MEM32(eax + 0x1C);
    g_seh_ebp = ebp; sub_004BE60F(); return; /* tail jmp 0x004BE60F */

}

/**
 * sub_004BFB95
 * Original: 0x004BFB95 - 0x004BFBA8 (19 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BFB95(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004BFB95: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x38);
    ecx = MEM32(eax + 0x1C);
    g_seh_ebp = ebp; sub_004BE613(); return; /* tail jmp 0x004BE613 */

}

/**
 * sub_004BFBA8
 * Original: 0x004BFBA8 - 0x004BFBBB (19 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BFBA8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004BFBA8: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x38);
    ecx = MEM32(eax + 0x1C);
    g_seh_ebp = ebp; sub_004BE647(); return; /* tail jmp 0x004BE647 */

}

/**
 * sub_004BFBBB
 * Original: 0x004BFBBB - 0x004BFBCE (19 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BFBBB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004BFBBB: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x38);
    ecx = MEM32(eax + 0x1C);
    g_seh_ebp = ebp; sub_004BF577(); return; /* tail jmp 0x004BF577 */

}

/**
 * sub_004BFBCE
 * Original: 0x004BFBCE - 0x004BFBD2 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BFBCE(void)
{

loc_004BFBCE: ;
    eax = ecx + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_004BFBD2
 * Original: 0x004BFBD2 - 0x004BFBD6 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BFBD2(void)
{

loc_004BFBD2: ;
    eax = ecx + 0x1C;
    esp += 4; return; /* ret */

}

/**
 * sub_004BFBD6
 * Original: 0x004BFBD6 - 0x004BFBEF (25 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BFBD6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004BFBD6: ;
    eax = ecx + 0x30;
    esp += 4; return; /* ret */

    g_seh_ebp = ebp; sub_004DD5FD(); return; /* tail jmp 0x004DD5FD */

loc_004BFBEB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004BFBEF
 * Original: 0x004BFBEF - 0x004BFC0A (27 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BFBEF(void)
{

loc_004BFBEF: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x004BFBFFu); RECOMP_ABI_CALL(0x004DD62Cu, sub_004DD62C); /* call 0x004DD62C */

loc_004BFBFF: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004BFBFF
 * Original: 0x004BFBFF - 0x004BFC0A (11 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BFBFF(void)
{

loc_004BFBFF: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004BFC0A
 * Original: 0x004BFC0A - 0x004BFC63 (89 bytes, 26 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BFC0A(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004BFC0A: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004BFC12u); RECOMP_ABI_CALL(0x004C0073u, sub_004C0073); /* call 0x004C0073 */

loc_004BFC12: ;
    MEM32(esi) = 0x865404;
    PUSH32(esp, 0x004BFC1Du); RECOMP_ABI_CALL(0x004DC96Bu, sub_004DC96B); /* call 0x004DC96B */

loc_004BFC1D: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = esi + 8;
    PUSH32(esp, 0x004BFC2Au); RECOMP_ABI_CALL(0x004DD9B8u, sub_004DD9B8); /* call 0x004DD9B8 */

loc_004BFC2A: ;
    PUSH32(esp, 0x004BFC2Fu); RECOMP_ABI_CALL(0x004DC96Bu, sub_004DC96B); /* call 0x004DC96B */

loc_004BFC2F: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = esi + 0x1C;
    PUSH32(esp, 0x004BFC3Cu); RECOMP_ABI_CALL(0x004DD9B8u, sub_004DD9B8); /* call 0x004DD9B8 */

loc_004BFC3C: ;
    PUSH32(esp, 0x004BFC41u); RECOMP_ABI_CALL(0x004DC96Bu, sub_004DC96B); /* call 0x004DC96B */

loc_004BFC41: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0x14));
    ecx = esi + 0x30;
    PUSH32(esp, 0x004BFC4Eu); RECOMP_ABI_CALL(0x004DD9B8u, sub_004DD9B8); /* call 0x004DD9B8 */

loc_004BFC4E: ;
    PUSH32(esp, MEM32(esp + 0x14));
    ecx = esi + 0x44;
    MEM32(ecx) = MEM32(ecx) & 0;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0x004BFC5Du); RECOMP_ABI_CALL(0x004BFBEFu, sub_004BFBEF); /* call 0x004BFBEF */

loc_004BFC5D: ;
    eax = esi;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_004BFC63
 * Original: 0x004BFC63 - 0x004BFC98 (53 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BFC63(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004BFC63: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x865404;
    ecx = MEM32(esi + 0x44);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004BFC78; /* je: equal / zero */

loc_004BFC73: ;
    PUSH32(esp, 0x004BFC78u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004BFC78: ;
    ecx = esi + 0x30;
    PUSH32(esp, 0x004BFC80u); RECOMP_ABI_CALL(0x004DDA4Fu, sub_004DDA4F); /* call 0x004DDA4F */

loc_004BFC80: ;
    ecx = esi + 0x1C;
    PUSH32(esp, 0x004BFC88u); RECOMP_ABI_CALL(0x004DDA4Fu, sub_004DDA4F); /* call 0x004DDA4F */

loc_004BFC88: ;
    ecx = esi + 8;
    PUSH32(esp, 0x004BFC90u); RECOMP_ABI_CALL(0x004DDA4Fu, sub_004DDA4F); /* call 0x004DDA4F */

loc_004BFC90: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004C0085(); return; /* tail jmp 0x004C0085 */

}

/**
 * sub_004BFC98
 * Original: 0x004BFC98 - 0x004BFC9C (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BFC98(void)
{

loc_004BFC98: ;
    eax = MEM32(ecx + 0x44);
    esp += 4; return; /* ret */

}

/**
 * sub_004BFC9C
 * Original: 0x004BFC9C - 0x004BFCB8 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BFC9C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004BFC9C: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004BFCA4u); RECOMP_ABI_CALL(0x004BFC63u, sub_004BFC63); /* call 0x004BFC63 */

loc_004BFCA4: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004BFCB2; /* je: equal / zero */

loc_004BFCAB: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004BFCB1u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004BFCB1: ;
    POP32(esp, ecx);

loc_004BFCB2: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004BFCB8
 * Original: 0x004BFCB8 - 0x004BFCC1 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BFCB8(void)
{

loc_004BFCB8: ;
    eax = ecx;
    MEM32(eax) = 0x865418;
    esp += 4; return; /* ret */

}

/**
 * sub_004BFCC1
 * Original: 0x004BFCC1 - 0x004BFCC8 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BFCC1(void)
{

loc_004BFCC1: ;
    MEM32(ecx) = 0x865418;
    esp += 4; return; /* ret */

}

/**
 * sub_004BFCC8
 * Original: 0x004BFCC8 - 0x004BFCE5 (29 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BFCC8(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004BFCC8: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x865418;
    if (TEST_Z(_fa, _fb)) goto loc_004BFCDF; /* je: equal / zero */

loc_004BFCD8: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004BFCDEu); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_004BFCDE: ;
    POP32(esp, ecx);

loc_004BFCDF: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004BFCE5
 * Original: 0x004BFCE5 - 0x004BFD01 (28 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BFCE5(void)
{

loc_004BFCE5: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004BFCEDu); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004BFCED: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = esi;
    PUSH32(esp, 4);
    PUSH32(esp, 0x004BFCFBu); RECOMP_ABI_CALL(0x004DD66Du, sub_004DD66D); /* call 0x004DD66D */

loc_004BFCFB: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004BFD06
 * Original: 0x004BFD06 - 0x004BFD22 (28 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BFD06(void)
{

loc_004BFD06: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004BFD0Eu); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_004BFD0E: ;
    PUSH32(esp, 2);
    ecx = esi + 8;
    PUSH32(esp, 0x004BFD18u); RECOMP_ABI_CALL(0x004BFCE5u, sub_004BFCE5); /* call 0x004BFCE5 */

loc_004BFD18: ;
    MEM32(esi) = 0x865424;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004BFD22
 * Original: 0x004BFD22 - 0x004BFD3B (25 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BFD22(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004BFD22: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 8;
    MEM32(esi) = 0x865424;
    PUSH32(esp, 0x004BFD33u); RECOMP_ABI_CALL(0x004DD70Au, sub_004DD70A); /* call 0x004DD70A */

loc_004BFD33: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004DD576(); return; /* tail jmp 0x004DD576 */

}

/**
 * sub_004BFD3B
 * Original: 0x004BFD3B - 0x004BFD57 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BFD3B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004BFD3B: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004BFD43u); RECOMP_ABI_CALL(0x004BFD22u, sub_004BFD22); /* call 0x004BFD22 */

loc_004BFD43: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004BFD51; /* je: equal / zero */

loc_004BFD4A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004BFD50u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004BFD50: ;
    POP32(esp, ecx);

loc_004BFD51: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004BFD57
 * Original: 0x004BFD57 - 0x004BFD6F (24 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BFD57(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004BFD57: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004BFD69; /* je: equal / zero */

loc_004BFD64: ;
    PUSH32(esp, 0x004BFD69u); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_004BFD69: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004BFD81
 * Original: 0x004BFD81 - 0x004BFD85 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BFD81(void)
{

loc_004BFD81: ;
    eax = MEM32(ecx + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_004BFD85
 * Original: 0x004BFD85 - 0x004BFD9C (23 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BFD85(void)
{

loc_004BFD85: ;
    ecx = MEM32(ecx + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004BFD8Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BFD8Au); } /* indirect call */
    }

loc_004BFD8D: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x865210);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004BFD9Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BFD98u); } /* indirect call */
    }

loc_004BFD9B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004BFD9C
 * Original: 0x004BFD9C - 0x004BFDB3 (23 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BFD9C(void)
{

loc_004BFD9C: ;
    ecx = MEM32(ecx + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004BFDA4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BFDA1u); } /* indirect call */
    }

loc_004BFDA4: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x865218);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004BFDB2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BFDAFu); } /* indirect call */
    }

loc_004BFDB2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004BFDB3
 * Original: 0x004BFDB3 - 0x004BFDEF (60 bytes, 29 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BFDB3(void)
{

loc_004BFDB3: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x004BFDBEu); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004BFDBE: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x004BFDC5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BFDC2u); } /* indirect call */
    }

loc_004BFDC5: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x004BFDCCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BFDC9u); } /* indirect call */
    }

loc_004BFDCC: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x004BFDD3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BFDD0u); } /* indirect call */
    }

loc_004BFDD3: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x004BFDDAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BFDD7u); } /* indirect call */
    }

loc_004BFDDA: ;
    edi = eax;
    eax = MEM32(esi);
    ebx = MEM32(edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x004BFDE5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BFDE2u); } /* indirect call */
    }

loc_004BFDE5: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebx + 0x18); PUSH32(esp, 0x004BFDEBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BFDE8u); } /* indirect call */
    }

loc_004BFDEB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_004BFDEF
 * Original: 0x004BFDEF - 0x004BFE0F (32 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BFDEF(void)
{

loc_004BFDEF: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004BFDF7u); RECOMP_ABI_CALL(0x004C00B2u, sub_004C00B2); /* call 0x004C00B2 */

loc_004BFDF7: ;
    PUSH32(esp, MEM32(esp + 8));
    ecx = esi + 8;
    MEM32(esi) = 0x865440;
    PUSH32(esp, 0x004BFE09u); RECOMP_ABI_CALL(0x004BFD57u, sub_004BFD57); /* call 0x004BFD57 */

loc_004BFE09: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004BFE0F
 * Original: 0x004BFE0F - 0x004BFE2C (29 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BFE0F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004BFE0F: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x865440;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004BFE24; /* je: equal / zero */

loc_004BFE1F: ;
    PUSH32(esp, 0x004BFE24u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004BFE24: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004C00C4(); return; /* tail jmp 0x004C00C4 */

}

/**
 * sub_004BFE2C
 * Original: 0x004BFE2C - 0x004BFE48 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BFE2C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004BFE2C: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004BFE34u); RECOMP_ABI_CALL(0x004BFE0Fu, sub_004BFE0F); /* call 0x004BFE0F */

loc_004BFE34: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004BFE42; /* je: equal / zero */

loc_004BFE3B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004BFE41u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004BFE41: ;
    POP32(esp, ecx);

loc_004BFE42: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004BFE48
 * Original: 0x004BFE48 - 0x004BFEA4 (92 bytes, 40 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BFE48(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004BFE48: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004BFE4Eu); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004BFE4E: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x004BFE55u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BFE52u); } /* indirect call */
    }

loc_004BFE55: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x004BFE5Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BFE59u); } /* indirect call */
    }

loc_004BFE5C: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004BFEA0; /* je: equal / zero */

loc_004BFE62: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x004BFE68u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004BFE68: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x004BFE74u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004BFE74: ;
    edi = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004BFE8E; /* je: equal / zero */

loc_004BFE7D: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x44); PUSH32(esp, 0x004BFE84u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BFE81u); } /* indirect call */
    }

loc_004BFE84: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x004BFE8Cu); RECOMP_ABI_CALL(0x004BFDEFu, sub_004BFDEF); /* call 0x004BFDEF */

loc_004BFE8C: ;
    goto loc_004BFE90;

loc_004BFE8E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004BFE90: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004BFE96u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004BFE96: ;
    ecx = eax;
    PUSH32(esp, 0x004BFE9Du); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004BFE9D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_004BFEA0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004BFEAD
 * Original: 0x004BFEAD - 0x004BFEC8 (27 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BFEAD(void)
{

loc_004BFEAD: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x004BFEBDu); RECOMP_ABI_CALL(0x004DD62Cu, sub_004DD62C); /* call 0x004DD62C */

loc_004BFEBD: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004BFEC8
 * Original: 0x004BFEC8 - 0x004BFEF0 (40 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BFEC8(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004BFEC8: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004BFED0u); RECOMP_ABI_CALL(0x004C00F1u, sub_004C00F1); /* call 0x004C00F1 */

loc_004BFED0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi + 0x10;
    MEM32(esi) = 0x865454;
    MEM8(esi + 8) = LO8(eax);
    MEM32(esi + 0xC) = eax;
    MEM32(ecx) = eax;
    PUSH32(esp, eax);
    MEM8(esi + 0x14) = LO8(eax);
    PUSH32(esp, 0x004BFEECu); RECOMP_ABI_CALL(0x004BFEADu, sub_004BFEAD); /* call 0x004BFEAD */

loc_004BFEEC: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004BFEF0
 * Original: 0x004BFEF0 - 0x004BFF0C (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BFEF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004BFEF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004BFEF8u); RECOMP_ABI_CALL(0x004BFF0Cu, sub_004BFF0C); /* call 0x004BFF0C */

loc_004BFEF8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004BFF06; /* je: equal / zero */

loc_004BFEFF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004BFF05u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004BFF05: ;
    POP32(esp, ecx);

loc_004BFF06: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004BFF0C
 * Original: 0x004BFF0C - 0x004BFF29 (29 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BFF0C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004BFF0C: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x865454;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004BFF21; /* je: equal / zero */

loc_004BFF1C: ;
    PUSH32(esp, 0x004BFF21u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004BFF21: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004C0103(); return; /* tail jmp 0x004C0103 */

}

/**
 * sub_004BFF29
 * Original: 0x004BFF29 - 0x004BFF4A (33 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BFF29(void)
{

loc_004BFF29: ;
    SET_LO8(eax, MEM8(esp + 4));
    PUSH32(esp, MEM32(esp + 8));
    MEM8(ecx + 8) = LO8(eax);
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x38);
    ecx = MEM32(eax + 0x1C);
    PUSH32(esp, 0x004BFF47u); RECOMP_ABI_CALL(0x004BF596u, sub_004BF596); /* call 0x004BF596 */

loc_004BFF47: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004BFF4A
 * Original: 0x004BFF4A - 0x004BFF5D (19 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BFF4A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004BFF4A: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x38);
    ecx = MEM32(eax + 0x1C);
    g_seh_ebp = ebp; sub_004BE62D(); return; /* tail jmp 0x004BE62D */

}

/**
 * sub_004BFF5D
 * Original: 0x004BFF5D - 0x004BFF8E (49 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BFF5D(void)
{

loc_004BFF5D: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 8));
    esi = ecx;
    ecx = esi + 0x10;
    PUSH32(esp, 0x004BFF6Cu); RECOMP_ABI_CALL(0x004BFEADu, sub_004BFEAD); /* call 0x004BFEAD */

loc_004BFF6C: ;
    SET_LO8(eax, MEM8(esp + 0xC));
    PUSH32(esp, MEM32(esp + 0x10));
    MEM8(esi + 0x14) = LO8(eax);
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x38);
    ecx = MEM32(eax + 0x1C);
    PUSH32(esp, 0x004BFF8Au); RECOMP_ABI_CALL(0x004BF596u, sub_004BF596); /* call 0x004BF596 */

loc_004BFF8A: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004BFF8E
 * Original: 0x004BFF8E - 0x004BFFAF (33 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BFF8E(void)
{

loc_004BFF8E: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 8));
    MEM32(ecx + 0xC) = eax;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x38);
    ecx = MEM32(eax + 0x1C);
    PUSH32(esp, 0x004BFFACu); RECOMP_ABI_CALL(0x004BF596u, sub_004BF596); /* call 0x004BF596 */

loc_004BFFAC: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004BFFAF
 * Original: 0x004BFFAF - 0x004BFFC2 (19 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BFFAF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004BFFAF: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x38);
    ecx = MEM32(eax + 0x1C);
    g_seh_ebp = ebp; sub_004BF392(); return; /* tail jmp 0x004BF392 */

}

/**
 * sub_004BFFC2
 * Original: 0x004BFFC2 - 0x004BFFEA (40 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BFFC2(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004BFFC2: ;
    PUSH32(esp, esi);
    esi = ecx + 0x10;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004BFFE6; /* jne: not equal / not zero */

loc_004BFFCB: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004BFFD0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BFFCDu); } /* indirect call */
    }

loc_004BFFD0: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004BFFD7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BFFD4u); } /* indirect call */
    }

loc_004BFFD7: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x004BFFDEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BFFDBu); } /* indirect call */
    }

loc_004BFFDE: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x004BFFE6u); RECOMP_ABI_CALL(0x004BFEADu, sub_004BFEAD); /* call 0x004BFEAD */

loc_004BFFE6: ;
    eax = MEM32(esi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004BFFEA
 * Original: 0x004BFFEA - 0x004BFFF5 (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BFFEA(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004BFFEA: ;
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x004BFFF4u); RECOMP_ABI_CALL(0x004BFEADu, sub_004BFEAD); /* call 0x004BFEAD */

loc_004BFFF4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004BFFF5
 * Original: 0x004BFFF5 - 0x004C0007 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BFFF5(void)
{

loc_004BFFF5: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004BFFFDu); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_004BFFFD: ;
    MEM32(esi) = 0x865470;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004C0007
 * Original: 0x004C0007 - 0x004C0012 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C0007(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C0007: ;
    MEM32(ecx) = 0x865470;
    g_seh_ebp = ebp; sub_004DD576(); return; /* tail jmp 0x004DD576 */

}

/**
 * sub_004C0012
 * Original: 0x004C0012 - 0x004C0034 (34 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C0012(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C0012: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x865470;
    PUSH32(esp, 0x004C0020u); RECOMP_ABI_CALL(0x004DD576u, sub_004DD576); /* call 0x004DD576 */

loc_004C0020: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004C002E; /* je: equal / zero */

loc_004C0027: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004C002Du); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004C002D: ;
    POP32(esp, ecx);

loc_004C002E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C0034
 * Original: 0x004C0034 - 0x004C0046 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C0034(void)
{

loc_004C0034: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004C003Cu); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_004C003C: ;
    MEM32(esi) = 0x86547C;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004C0046
 * Original: 0x004C0046 - 0x004C0051 (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C0046(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C0046: ;
    MEM32(ecx) = 0x86547C;
    g_seh_ebp = ebp; sub_004DD576(); return; /* tail jmp 0x004DD576 */

}

/**
 * sub_004C004C
 * Original: 0x004C004C - 0x004C0051 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C004C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C004C: ;
    g_seh_ebp = ebp; sub_004DD576(); return; /* tail jmp 0x004DD576 */

}

/**
 * sub_004C0051
 * Original: 0x004C0051 - 0x004C0073 (34 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C0051(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C0051: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x86547C;
    PUSH32(esp, 0x004C005Fu); RECOMP_ABI_CALL(0x004DD576u, sub_004DD576); /* call 0x004DD576 */

loc_004C005F: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004C006D; /* je: equal / zero */

loc_004C0066: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004C006Cu); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004C006C: ;
    POP32(esp, ecx);

loc_004C006D: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C0073
 * Original: 0x004C0073 - 0x004C0085 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C0073(void)
{

loc_004C0073: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004C007Bu); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_004C007B: ;
    MEM32(esi) = 0x865494;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004C0085
 * Original: 0x004C0085 - 0x004C0090 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C0085(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C0085: ;
    MEM32(ecx) = 0x865494;
    g_seh_ebp = ebp; sub_004DD576(); return; /* tail jmp 0x004DD576 */

}

/**
 * sub_004C0090
 * Original: 0x004C0090 - 0x004C00B2 (34 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C0090(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C0090: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x865494;
    PUSH32(esp, 0x004C009Eu); RECOMP_ABI_CALL(0x004DD576u, sub_004DD576); /* call 0x004DD576 */

loc_004C009E: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004C00AC; /* je: equal / zero */

loc_004C00A5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004C00ABu); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004C00AB: ;
    POP32(esp, ecx);

loc_004C00AC: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C00B2
 * Original: 0x004C00B2 - 0x004C00C4 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C00B2(void)
{

loc_004C00B2: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004C00BAu); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_004C00BA: ;
    MEM32(esi) = 0x8654A8;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004C00C4
 * Original: 0x004C00C4 - 0x004C00CF (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C00C4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C00C4: ;
    MEM32(ecx) = 0x8654A8;
    g_seh_ebp = ebp; sub_004DD576(); return; /* tail jmp 0x004DD576 */

}

/**
 * sub_004C00CF
 * Original: 0x004C00CF - 0x004C00F1 (34 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C00CF(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C00CF: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x8654A8;
    PUSH32(esp, 0x004C00DDu); RECOMP_ABI_CALL(0x004DD576u, sub_004DD576); /* call 0x004DD576 */

loc_004C00DD: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004C00EB; /* je: equal / zero */

loc_004C00E4: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004C00EAu); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004C00EA: ;
    POP32(esp, ecx);

loc_004C00EB: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C00F1
 * Original: 0x004C00F1 - 0x004C0103 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C00F1(void)
{

loc_004C00F1: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004C00F9u); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_004C00F9: ;
    MEM32(esi) = 0x8654BC;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004C0103
 * Original: 0x004C0103 - 0x004C010E (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C0103(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C0103: ;
    MEM32(ecx) = 0x8654BC;
    g_seh_ebp = ebp; sub_004DD576(); return; /* tail jmp 0x004DD576 */

}

/**
 * sub_004C010E
 * Original: 0x004C010E - 0x004C0140 (50 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C010E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C010E: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x8654BC;
    PUSH32(esp, 0x004C011Cu); RECOMP_ABI_CALL(0x004DD576u, sub_004DD576); /* call 0x004DD576 */

loc_004C011C: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004C012A; /* je: equal / zero */

loc_004C0123: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004C0129u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004C0129: ;
    POP32(esp, ecx);

loc_004C012A: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C0140
 * Original: 0x004C0140 - 0x004C015D (29 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C0140(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C0140: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x865C4C;
    if (TEST_Z(_fa, _fb)) goto loc_004C0157; /* je: equal / zero */

loc_004C0150: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004C0156u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_004C0156: ;
    POP32(esp, ecx);

loc_004C0157: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C015D
 * Original: 0x004C015D - 0x004C016F (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C015D(void)
{

loc_004C015D: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004C0165u); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_004C0165: ;
    MEM32(esi) = 0x865C5C;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004C017A
 * Original: 0x004C017A - 0x004C01D7 (93 bytes, 37 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C017A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C017A: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x865C5C;
    PUSH32(esp, 0x004C0188u); RECOMP_ABI_CALL(0x004DD576u, sub_004DD576); /* call 0x004DD576 */

loc_004C0188: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004C0196; /* je: equal / zero */

loc_004C018F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004C0195u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004C0195: ;
    POP32(esp, ecx);

loc_004C0196: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    eax = 0x7B891F;

loc_004C01B0: ;
    esp += 4; return; /* ret */

    eax = 0x7B891F;

loc_004C01C5: ;
    esp += 4; return; /* ret */

    eax = 0x7B891F;

loc_004C01D2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004C01D7
 * Original: 0x004C01D7 - 0x004C01E9 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C01D7(void)
{

loc_004C01D7: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004C01DFu); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_004C01DF: ;
    MEM32(esi) = 0x865C74;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004C01F4
 * Original: 0x004C01F4 - 0x004C0285 (145 bytes, 57 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C01F4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C01F4: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x865C74;
    PUSH32(esp, 0x004C0202u); RECOMP_ABI_CALL(0x004DD576u, sub_004DD576); /* call 0x004DD576 */

loc_004C0202: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004C0210; /* je: equal / zero */

loc_004C0209: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004C020Fu); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004C020F: ;
    POP32(esp, ecx);

loc_004C0210: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    eax = 0x7B891F;

loc_004C0226: ;
    esp += 4; return; /* ret */

    eax = 0x7B891F;

loc_004C0233: ;
    esp += 4; return; /* ret */

    eax = 0x7B891F;

loc_004C0244: ;
    esp += 4; return; /* ret */

    eax = 0x7B891F;

loc_004C0251: ;
    esp += 4; return; /* ret */

    eax = 0x7B891F;

loc_004C025E: ;
    esp += 4; return; /* ret */

    eax = 0x7B891F;

loc_004C026B: ;
    esp += 4; return; /* ret */

    eax = 0x7B891F;

loc_004C0284: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004C0285
 * Original: 0x004C0285 - 0x004C0297 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C0285(void)
{

loc_004C0285: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004C028Du); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_004C028D: ;
    MEM32(esi) = 0x865C9C;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004C02A2
 * Original: 0x004C02A2 - 0x004C02CD (43 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C02A2(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C02A2: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x865C9C;
    PUSH32(esp, 0x004C02B0u); RECOMP_ABI_CALL(0x004DD576u, sub_004DD576); /* call 0x004DD576 */

loc_004C02B0: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004C02BE; /* je: equal / zero */

loc_004C02B7: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004C02BDu); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004C02BD: ;
    POP32(esp, ecx);

loc_004C02BE: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C02CD
 * Original: 0x004C02CD - 0x004C0330 (99 bytes, 39 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C02CD(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C02CD: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), 3 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_004C032C; /* jne: not equal / not zero */

loc_004C02D7: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, MEM32(0x8631BC));
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004C02E9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C02E6u); } /* indirect call */
    }

loc_004C02E9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004C02EFu); RECOMP_ABI_CALL(0x005CFF90u, sub_005CFF90); /* call 0x005CFF90 */

loc_004C02EF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_004C032B; /* jne: not equal / not zero */

loc_004C02F5: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x004C02FCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C02F9u); } /* indirect call */
    }

loc_004C02FC: ;
    _fa = (uint32_t)(MEM32(edi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x10), 6 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004C032B; /* jl: less (signed <) */

loc_004C0302: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C032B; /* je: equal / zero */

loc_004C0306: ;
    PUSH32(esp, 0x004C030Bu); RECOMP_ABI_CALL(0x004DC976u, sub_004DC976); /* call 0x004DC976 */

loc_004C030B: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x004C0312u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C030Fu); } /* indirect call */
    }

loc_004C0312: ;
    ecx = MEM32(0x90E424);
    esi = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004C031Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C031Cu); } /* indirect call */
    }

loc_004C031F: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFA);
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x004C032Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C0329u); } /* indirect call */
    }

loc_004C032B: ;
    POP32(esp, esi);

loc_004C032C: ;
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C0330
 * Original: 0x004C0330 - 0x004C0342 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C0330(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C0330: ;
    ecx = MEM32(0x90E420);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C0341; /* je: equal / zero */

loc_004C033A: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x004C0341u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C033Eu); } /* indirect call */
    }

loc_004C0341: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004C0342
 * Original: 0x004C0342 - 0x004C0348 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C0342(void)
{

loc_004C0342: ;
    eax = MEM32(0x90E420);
    esp += 4; return; /* ret */

}

/**
 * sub_004C0348
 * Original: 0x004C0348 - 0x004C035D (21 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C0348(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C0348: ;
    PUSH32(esp, 0x004C034Du); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004C034D: ;
    edx = MEM32(eax);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x004C035Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C035Au); } /* indirect call */
    }

loc_004C035C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004C035D
 * Original: 0x004C035D - 0x004C036E (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C035D(void)
{

loc_004C035D: ;
    PUSH32(esp, 0x004C0362u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004C0362: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 4));
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004C036Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C036Au); } /* indirect call */
    }

loc_004C036D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004C036E
 * Original: 0x004C036E - 0x004C038F (33 bytes, 12 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C036E(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C036E: ;
    eax = MEM32(ecx + 4);
    edx = MEM32(ecx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    MEM32(edx + eax * 8) = esi;
    eax = MEM32(ecx + 4);
    esi = MEM32(esp + 0xC);
    edx = MEM32(ecx);
    MEM32(edx + eax * 8 + 4) = esi;
    MEM32(ecx + 4) = MEM32(ecx + 4) + 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C038F
 * Original: 0x004C038F - 0x004C03C3 (52 bytes, 24 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C038F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C038F: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), edi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004C03B4; /* jbe: below or equal (unsigned <=) */

loc_004C039A: ;
    PUSH32(esp, MEM32(esp + 0xC));
    eax = MEM32(esi);
    PUSH32(esp, MEM32(eax + edi * 8));
    PUSH32(esp, 0x004C03A8u); RECOMP_ABI_CALL(0x005CFF90u, sub_005CFF90); /* call 0x005CFF90 */

loc_004C03A8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004C03BB; /* je: equal / zero */

loc_004C03AE: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004C039A; /* jb: below (unsigned <) */

loc_004C03B4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004C03B6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_004C03BB: ;
    eax = MEM32(esi);
    eax = MEM32(eax + edi * 8 + 4);
    goto loc_004C03B6;

}

/**
 * sub_004C03C6
 * Original: 0x004C03C6 - 0x004C03E7 (33 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C03C6(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C03C6: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004C03CEu); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004C03CE: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x10000);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x004C03DFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C03DDu); } /* indirect call */
    }

loc_004C03DF: ;
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004C03E7
 * Original: 0x004C03E7 - 0x004C03FA (19 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C03E7(void)
{

loc_004C03E7: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004C03EFu); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004C03EF: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi));
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004C03F8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C03F5u); } /* indirect call */
    }

loc_004C03F8: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004C03FA
 * Original: 0x004C03FA - 0x004C04BD (195 bytes, 78 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004C03FA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C03FA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 8), 0 (32-bit) */
    MEM32(ebp + -8) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004C04B9; /* je: equal / zero */

loc_004C040D: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    edx = eax;
    MEM32(ebp + -4) = edx;
    MEM32(ebp + 8) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_004C04B2; /* je: equal / zero */

loc_004C0421: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    goto loc_004C0429;

loc_004C0426: ;
    ecx = MEM32(ebp + -8);

loc_004C0429: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 8), ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004C04A3; /* jbe: below or equal (unsigned <=) */

loc_004C0430: ;
    eax = MEM32(ebp + -8);
    eax = MEM32(eax + 0xC);
    esi = eax + ebx * 8;
    PUSH32(esp, MEM32(esi));
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C0442u); RECOMP_ABI_CALL(0x005D0020u, sub_005D0020); /* call 0x005D0020 */

loc_004C0442: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    MEM32(ebp + -12) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_004C0461; /* jbe: below or equal (unsigned <=) */

loc_004C044A: ;
    ecx = MEM32(ebp + -4);
    SET_LO8(eax, MEM8(edi + ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C048C; /* je: equal / zero */

loc_004C0454: ;
    edx = MEM32(esi);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(edi + edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(edi + edx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004C048C; /* jne: not equal / not zero */

loc_004C045B: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebp + -12) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004C044A; /* jb: below (unsigned <) */

loc_004C0461: ;
    PUSH32(esp, MEM32(esi + 4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C0469u); RECOMP_ABI_CALL(0x005D0020u, sub_005D0020); /* call 0x005D0020 */

loc_004C0469: ;
    POP32(esp, ecx);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004C0481; /* jbe: below or equal (unsigned <=) */

loc_004C0470: ;
    edx = MEM32(esi + 4);
    SET_LO8(edx, MEM8(ecx + edx));
    edi = MEM32(ebp + 8);
    MEM8(ecx + edi) = LO8(edx);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004C0470; /* jb: below (unsigned <) */

loc_004C0481: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 8) = MEM32(ebp + 8) + eax;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ebp + -12);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -4) = MEM32(ebp + -4) + eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_004C04A3;

loc_004C048C: ;
    eax = MEM32(ebp + -8);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(eax + 8) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004C0430; /* jb: below (unsigned <) */

loc_004C0495: ;
    edx = MEM32(ebp + 8);
    SET_LO8(eax, MEM8(ecx));
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(edx) = LO8(eax);
    MEM32(ebp + -4) = ecx;

loc_004C04A3: ;
    edx = MEM32(ebp + -4);
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004C0426; /* jne: not equal / not zero */

loc_004C04AF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_004C04B2: ;
    SET_LO8(eax, MEM8(edx));
    ecx = MEM32(ebp + 8);
    MEM8(ecx) = LO8(eax);

loc_004C04B9: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C04BD
 * Original: 0x004C04BD - 0x004C05C2 (261 bytes, 102 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004C04BD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C04BD: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C04CCu); RECOMP_ABI_CALL(0x004DC940u, sub_004DC940); /* call 0x004DC940 */

loc_004C04CC: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x865CE0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 8); PUSH32(esp, 0x004C04D7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C04D4u); } /* indirect call */
    }

loc_004C04D7: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    ecx = MEM32(0x90E424);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004C04E4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C04E1u); } /* indirect call */
    }

loc_004C04E4: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x004C04EBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C04E8u); } /* indirect call */
    }

loc_004C04EB: ;
    MEM32(esi + 8) = eax;
    ecx = MEM32(0x90E424);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004C04F9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C04F6u); } /* indirect call */
    }

loc_004C04F9: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x004C0500u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C04FDu); } /* indirect call */
    }

loc_004C0500: ;
    edi = MEM32(esi + 0x10);
    MEM32(esi + 0xC) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), eax (32-bit) */
    MEM8(ebp + -1) = LO8(ebx);
    MEM8(ebp + -2) = LO8(ebx);
    MEM32(ebp + -8) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_004C05A9; /* jbe: below or equal (unsigned <=) */

loc_004C051C: ;
    _fa = (uint32_t)(MEM8(ebp + -1)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -1), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C052D; /* je: equal / zero */

loc_004C0522: ;
    ebx = MEM32(esi + 0x10);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(ebp + -1) = 0;
    goto loc_004C0599;

loc_004C052D: ;
    _fa = (uint32_t)(MEM8(ebp + -2)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -2), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C053E; /* je: equal / zero */

loc_004C0533: ;
    edi = MEM32(esi + 0x10);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(ebp + -2) = 0;
    goto loc_004C0599;

loc_004C053E: ;
    ecx = MEM32(esi + 0x10);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ecx, MEM8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x3D) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x3D (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004C0553; /* jne: not equal / not zero */

loc_004C054A: ;
    MEM8(eax) = 0;
    MEM8(ebp + -1) = 1;
    goto loc_004C0599;

loc_004C0553: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004C0561; /* jl: less (signed <) */

loc_004C0557: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x20 (8-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_004C0561; /* jge: greater or equal (signed >=) */

loc_004C055C: ;
    MEM8(eax) = 0x20;
    goto loc_004C0599;

loc_004C0561: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x7C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x7C (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C0574; /* je: equal / zero */

loc_004C0566: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C0574; /* je: equal / zero */

loc_004C056A: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C0574; /* je: equal / zero */

loc_004C056F: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xD) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xD (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004C0599; /* jne: not equal / not zero */

loc_004C0574: ;
    MEM8(eax) = 0;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), 0 (32-bit) */
    MEM8(ebp + -2) = 1;
    if (CMP_BE(_fa, _fb)) goto loc_004C058F; /* jbe: below or equal (unsigned <=) */

loc_004C0581: ;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C058F; /* je: equal / zero */

loc_004C0587: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004C058Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C058Cu); } /* indirect call */
    }

loc_004C058F: ;
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C0599u); RECOMP_ABI_CALL(0x004C036Eu, sub_004C036E); /* call 0x004C036E */

loc_004C0599: ;
    eax = MEM32(ebp + -8);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 8) (32-bit) */
    MEM32(ebp + -8) = eax;
    if (CMP_B(_fa, _fb)) goto loc_004C051C; /* jb: below (unsigned <) */

loc_004C05A9: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C05AEu); RECOMP_ABI_CALL(0x004DC940u, sub_004DC940); /* call 0x004DC940 */

loc_004C05AE: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x865CCC);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 8); PUSH32(esp, 0x004C05B9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C05B6u); } /* indirect call */
    }

loc_004C05B9: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C05C2
 * Original: 0x004C05C2 - 0x004C0605 (67 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C05C2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C05C2: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), 0 (32-bit) */
    MEM32(esi) = 0x865CF8;
    if (CMP_EQ(_fa, _fb)) goto loc_004C05E0; /* je: equal / zero */

loc_004C05D1: ;
    PUSH32(esp, 0x004C05D6u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004C05D6: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi + 0x10));
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004C05E0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C05DDu); } /* indirect call */
    }

loc_004C05E0: ;
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, 0x004C05E8u); RECOMP_ABI_CALL(0x004C03E7u, sub_004C03E7); /* call 0x004C03E7 */

loc_004C05E8: ;
    PUSH32(esp, 0x004C05EDu); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004C05ED: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi + 0x14));
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004C05F7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C05F4u); } /* indirect call */
    }

loc_004C05F7: ;
    MEM32(esi) = 0x865C5C;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004DD576(); return; /* tail jmp 0x004DD576 */

}

/**
 * sub_004C0605
 * Original: 0x004C0605 - 0x004C0638 (51 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C0605(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C0605: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x90E424);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004C0614u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C0611u); } /* indirect call */
    }

loc_004C0614: ;
    edi = MEM32(esp + 0xC);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x004C0620u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C061Du); } /* indirect call */
    }

loc_004C0620: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004C0633; /* jne: not equal / not zero */

loc_004C0624: ;
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, 0x004C062Du); RECOMP_ABI_CALL(0x004C038Fu, sub_004C038F); /* call 0x004C038F */

loc_004C062D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004C0633; /* jne: not equal / not zero */

loc_004C0631: ;
    eax = edi;

loc_004C0633: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C0638
 * Original: 0x004C0638 - 0x004C0677 (63 bytes, 25 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C0638(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C0638: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x90E424);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004C0647u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C0644u); } /* indirect call */
    }

loc_004C0647: ;
    edi = MEM32(esp + 0xC);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x004C0653u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C0650u); } /* indirect call */
    }

loc_004C0653: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C065E; /* je: equal / zero */

loc_004C0657: ;
    eax = 0x865D1C;
    goto loc_004C0672;

loc_004C065E: ;
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, 0x004C0667u); RECOMP_ABI_CALL(0x004C038Fu, sub_004C038F); /* call 0x004C038F */

loc_004C0667: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = 0x865D10;
    if (CMP_NE(_fa, _fb)) goto loc_004C0672; /* jne: not equal / not zero */

loc_004C0670: ;
    eax = edi;

loc_004C0672: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C0677
 * Original: 0x004C0677 - 0x004C07D5 (350 bytes, 128 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004C0677(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C0677: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM8(ebp + -8) = 0;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ebp + -7;
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    esi = ecx;
    ecx = MEM32(0x90E424);
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    MEM8(0x90E478) = 0;
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004C069Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C069Cu); } /* indirect call */
    }

loc_004C069F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 8));
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x004C06A9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C06A6u); } /* indirect call */
    }

loc_004C06A9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004C07C1; /* jne: not equal / not zero */

loc_004C06B1: ;
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C06BDu); RECOMP_ABI_CALL(0x004C038Fu, sub_004C038F); /* call 0x004C038F */

loc_004C06BD: ;
    PUSH32(esp, MEM32(ebp + 8));
    ecx = MEM32(esi + 0x14);
    MEM32(ebp + -20) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C06CBu); RECOMP_ABI_CALL(0x004C038Fu, sub_004C038F); /* call 0x004C038F */

loc_004C06CB: ;
    MEM32(ebp + -12) = MEM32(ebp + -12) & 0;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    MEM32(ebp + -4) = eax;
    edi = 0x90E478;
    if (CMP_BE(_fa, _fb)) goto loc_004C07BE; /* jbe: below or equal (unsigned <=) */

loc_004C06E1: ;
    PUSH32(esp, MEM32(ebp + -12));
    eax = ebp + -8;
    PUSH32(esp, 0x865D28);
    PUSH32(esp, 3);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C06F4u); RECOMP_ABI_CALL(0x004E3665u, sub_004E3665); /* call 0x004E3665 */

loc_004C06F4: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), 0 (32-bit) */
    MEM8(ebp + -5) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_004C07D0; /* je: equal / zero */

loc_004C0705: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0 (32-bit) */
    eax = ebp + -8;
    PUSH32(esp, eax);
    if (CMP_NE(_fa, _fb)) goto loc_004C0714; /* jne: not equal / not zero */

loc_004C070F: ;
    PUSH32(esp, MEM32(ebp + -20));
    goto loc_004C0715;

loc_004C0714: ;
    PUSH32(esp, edi);

loc_004C0715: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C071Au); RECOMP_ABI_CALL(0x005CC310u, sub_005CC310); /* call 0x005CC310 */

loc_004C071A: ;
    esi = eax;
    _fb = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - MEM32(ebp + -4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, ecx);
    MEM32(ebp + -16) = eax;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, ecx);
    eax = esi + 1;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C072Eu); RECOMP_ABI_CALL(0x0001C626u, sub_0001C626); /* call 0x0001C626 */

loc_004C072E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    ebx = eax;
    POP32(esp, ecx);
    MEM32(ebp + -24) = ebx;
    if (CMP_BE(_fa, _fb)) goto loc_004C0745; /* jbe: below or equal (unsigned <=) */

loc_004C0738: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C0742u); RECOMP_ABI_CALL(0x004E367Fu, sub_004E367F); /* call 0x004E367F */

loc_004C0742: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004C0745: ;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0 (32-bit) */
    MEM8(ebx + esi) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_004C07C7; /* je: equal / zero */

loc_004C074F: ;
    eax = MEM32(ebp + -4);
    goto loc_004C0755;

loc_004C0754: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_004C0755: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x3E) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0x3E (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004C0754; /* jne: not equal / not zero */

loc_004C075A: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    MEM32(ebp + -4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C0764u); RECOMP_ABI_CALL(0x005D0020u, sub_005D0020); /* call 0x005D0020 */

loc_004C0764: ;
    esi = eax;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = esi + 1;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C0770u); RECOMP_ABI_CALL(0x0001C626u, sub_0001C626); /* call 0x0001C626 */

loc_004C0770: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    ebx = eax;
    if (CMP_BE(_fa, _fb)) goto loc_004C0785; /* jbe: below or equal (unsigned <=) */

loc_004C0778: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C0782u); RECOMP_ABI_CALL(0x004E367Fu, sub_004E367F); /* call 0x004E367F */

loc_004C0782: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004C0785: ;
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, ebx);
    MEM8(ebx + esi) = 0;
    esi = MEM32(ebp + -12);
    PUSH32(esp, MEM32(eax + esi * 4));
    PUSH32(esp, MEM32(ebp + -24));
    PUSH32(esp, 0x835B74);
    PUSH32(esp, 0x1F);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C07A3u); RECOMP_ABI_CALL(0x004E3665u, sub_004E3665); /* call 0x004E3665 */

loc_004C07A3: ;
    PUSH32(esp, MEM32(ebp + -24));
    MEM32(ebp + -4) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C07AEu); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_004C07AE: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + 0xC) (32-bit) */
    MEM32(ebp + -12) = esi;
    if (CMP_B(_fa, _fb)) goto loc_004C06E1; /* jb: below (unsigned <) */

loc_004C07BE: ;
    eax = edi;

loc_004C07C0: ;
    POP32(esp, ebx);

loc_004C07C1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

loc_004C07C7: ;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C07CDu); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_004C07CD: ;
    POP32(esp, ecx);
    goto loc_004C07BE;

loc_004C07D0: ;
    eax = MEM32(ebp + 8);
    goto loc_004C07C0;

}

/**
 * sub_004C07D5
 * Original: 0x004C07D5 - 0x004C08B8 (227 bytes, 78 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C07D5(void)
{

loc_004C07D5: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x90E424);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x004C07E3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C07E0u); } /* indirect call */
    }

loc_004C07E3: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x004C07EAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C07E7u); } /* indirect call */
    }

loc_004C07EA: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x865C04);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x004C07F6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C07F3u); } /* indirect call */
    }

loc_004C07F6: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x865BF4);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x004C0802u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C07FFu); } /* indirect call */
    }

loc_004C0802: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x865BE4);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x004C080Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C080Bu); } /* indirect call */
    }

loc_004C080E: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x865BC4);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x004C081Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C0817u); } /* indirect call */
    }

loc_004C081A: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x865BA0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x004C0826u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C0823u); } /* indirect call */
    }

loc_004C0826: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x865B94);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x004C0832u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C082Fu); } /* indirect call */
    }

loc_004C0832: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x865B60);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x004C083Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C083Bu); } /* indirect call */
    }

loc_004C083E: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x865B54);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x004C084Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C0847u); } /* indirect call */
    }

loc_004C084A: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x865B14);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x004C0856u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C0853u); } /* indirect call */
    }

loc_004C0856: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x865AFC);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x004C0862u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C085Fu); } /* indirect call */
    }

loc_004C0862: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x865AE4);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x004C086Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C086Bu); } /* indirect call */
    }

loc_004C086E: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x865C18);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x004C087Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C0877u); } /* indirect call */
    }

loc_004C087A: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x865BD8);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x004C0886u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C0883u); } /* indirect call */
    }

loc_004C0886: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x865BB8);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x004C0892u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C088Fu); } /* indirect call */
    }

loc_004C0892: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x865B84);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x004C089Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C089Bu); } /* indirect call */
    }

loc_004C089E: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x865B78);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x004C08AAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C08A7u); } /* indirect call */
    }

loc_004C08AA: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x865B44);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x004C08B6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C08B3u); } /* indirect call */
    }

loc_004C08B6: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004C08B8
 * Original: 0x004C08B8 - 0x004C0941 (137 bytes, 61 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004C08B8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C08B8: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C08C5u); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_004C08C5: ;
    eax = MEM32(ebp + 0xC);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = 0x865D30;
    MEM32(esi + 8) = edi;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x10) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C08DEu); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004C08DE: ;
    ebx = MEM32(eax);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 8));
    MEM32(ebp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C08EEu); RECOMP_ABI_CALL(0x005D0020u, sub_005D0020); /* call 0x005D0020 */

loc_004C08EE: ;
    POP32(esp, ecx);
    ecx = MEM32(ebp + 0xC);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ebx); PUSH32(esp, 0x004C08F6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C08F4u); } /* indirect call */
    }

loc_004C08F6: ;
    PUSH32(esp, MEM32(ebp + 8));
    MEM32(esi + 8) = eax;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C0902u); RECOMP_ABI_CALL(0x005D00B0u, sub_005D00B0); /* call 0x005D00B0 */

loc_004C0902: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), edi (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004C0938; /* je: equal / zero */

loc_004C0909: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C090Eu); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004C090E: ;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    ebx = eax;
    eax = MEM32(ebx);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x10));
    MEM32(ebp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C0920u); RECOMP_ABI_CALL(0x005D0020u, sub_005D0020); /* call 0x005D0020 */

loc_004C0920: ;
    POP32(esp, ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004C092Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C0928u); } /* indirect call */
    }

loc_004C092A: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    MEM32(esi + 0x10) = eax;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C0936u); RECOMP_ABI_CALL(0x005D00B0u, sub_005D00B0); /* call 0x005D00B0 */

loc_004C0936: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_004C0938: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004C0941
 * Original: 0x004C0941 - 0x004C0976 (53 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C0941(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C0941: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x865D30;
    PUSH32(esp, 0x004C094Fu); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004C094F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi + 8));
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004C0959u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C0956u); } /* indirect call */
    }

loc_004C0959: ;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C096E; /* je: equal / zero */

loc_004C095F: ;
    PUSH32(esp, 0x004C0964u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004C0964: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi + 0x10));
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004C096Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C096Bu); } /* indirect call */
    }

loc_004C096E: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004DD576(); return; /* tail jmp 0x004DD576 */

}

/**
 * sub_004C0976
 * Original: 0x004C0976 - 0x004C0A38 (194 bytes, 85 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004C0976(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C0976: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C0983u); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_004C0983: ;
    eax = MEM32(ebp + 0xC);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0xC) = eax;
    eax = MEM32(ebp + 0x10);
    MEM32(esi) = 0x865D34;
    MEM32(esi + 8) = edi;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x14) = edi;
    MEM32(esi + 0x18) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C09A5u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004C09A5: ;
    ebx = MEM32(eax);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 8));
    MEM32(ebp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C09B5u); RECOMP_ABI_CALL(0x005D0020u, sub_005D0020); /* call 0x005D0020 */

loc_004C09B5: ;
    POP32(esp, ecx);
    ecx = MEM32(ebp + 0xC);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ebx); PUSH32(esp, 0x004C09BDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C09BBu); } /* indirect call */
    }

loc_004C09BD: ;
    PUSH32(esp, MEM32(ebp + 8));
    MEM32(esi + 8) = eax;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C09C9u); RECOMP_ABI_CALL(0x005D00B0u, sub_005D00B0); /* call 0x005D00B0 */

loc_004C09C9: ;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), edi (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004C09FB; /* je: equal / zero */

loc_004C09D0: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C09D5u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004C09D5: ;
    ebx = MEM32(eax);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x14));
    MEM32(ebp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C09E5u); RECOMP_ABI_CALL(0x005D0020u, sub_005D0020); /* call 0x005D0020 */

loc_004C09E5: ;
    POP32(esp, ecx);
    ecx = MEM32(ebp + 8);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ebx); PUSH32(esp, 0x004C09EDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C09EBu); } /* indirect call */
    }

loc_004C09ED: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    MEM32(esi + 0x14) = eax;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C09F9u); RECOMP_ABI_CALL(0x005D00B0u, sub_005D00B0); /* call 0x005D00B0 */

loc_004C09F9: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_004C09FB: ;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x18), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C0A2F; /* je: equal / zero */

loc_004C0A00: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C0A05u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004C0A05: ;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    ebx = eax;
    eax = MEM32(ebx);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x18));
    MEM32(ebp + 0x14) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C0A17u); RECOMP_ABI_CALL(0x005D0020u, sub_005D0020); /* call 0x005D0020 */

loc_004C0A17: ;
    POP32(esp, ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x14);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004C0A21u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C0A1Fu); } /* indirect call */
    }

loc_004C0A21: ;
    PUSH32(esp, MEM32(ebp + 0x18));
    MEM32(esi + 0x18) = eax;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C0A2Du); RECOMP_ABI_CALL(0x005D00B0u, sub_005D00B0); /* call 0x005D00B0 */

loc_004C0A2D: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_004C0A2F: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_004C0A38
 * Original: 0x004C0A38 - 0x004C0A82 (74 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C0A38(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C0A38: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x865D34;
    PUSH32(esp, 0x004C0A46u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004C0A46: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi + 8));
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004C0A50u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C0A4Du); } /* indirect call */
    }

loc_004C0A50: ;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C0A65; /* je: equal / zero */

loc_004C0A56: ;
    PUSH32(esp, 0x004C0A5Bu); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004C0A5B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi + 0x14));
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004C0A65u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C0A62u); } /* indirect call */
    }

loc_004C0A65: ;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C0A7A; /* je: equal / zero */

loc_004C0A6B: ;
    PUSH32(esp, 0x004C0A70u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004C0A70: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi + 0x18));
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004C0A7Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C0A77u); } /* indirect call */
    }

loc_004C0A7A: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004DD576(); return; /* tail jmp 0x004DD576 */

}

/**
 * sub_004C0A82
 * Original: 0x004C0A82 - 0x004C0AB9 (55 bytes, 27 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C0A82(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C0A82: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = ebx;
    MEM32(esi + 4) = ebx;
    MEM32(esi + 8) = edi;
    MEM32(esi + 0xC) = ebx;
    PUSH32(esp, 0x004C0A9Du); RECOMP_ABI_CALL(0x004DC955u, sub_004DC955); /* call 0x004DC955 */

loc_004C0A9D: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x004C0AA7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C0AA5u); } /* indirect call */
    }

loc_004C0AA7: ;
    MEM32(esi) = eax;
    MEM8(eax) = LO8(ebx);
    eax = MEM32(esi);
    MEM8(eax + edi + -1) = LO8(ebx);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C0AB9
 * Original: 0x004C0AB9 - 0x004C0ACC (19 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C0AB9(void)
{

loc_004C0AB9: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004C0AC1u); RECOMP_ABI_CALL(0x004DC955u, sub_004DC955); /* call 0x004DC955 */

loc_004C0AC1: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi));
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004C0ACAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C0AC7u); } /* indirect call */
    }

loc_004C0ACA: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004C0ACC
 * Original: 0x004C0ACC - 0x004C0B33 (103 bytes, 47 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C0ACC(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C0ACC: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    edx = MEM32(esi + 8);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = eax + ecx;
    ebx = edx + -1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004C0B2D; /* jbe: below or equal (unsigned <=) */

loc_004C0AE5: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = eax + ecx + 1;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), edx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004C0B14; /* jbe: below or equal (unsigned <=) */

loc_004C0AF7: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_004C0B14; /* jae: above or equal (unsigned >=) */

loc_004C0AFB: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0xA (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004C0B0A; /* jne: not equal / not zero */

loc_004C0B04: ;
    _fa = (uint32_t)(MEM8(eax + -1)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + -1), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C0B0E; /* je: equal / zero */

loc_004C0B0A: ;
    ecx = edx + 1;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_004C0B0E: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004C0AF7; /* jb: below (unsigned <) */

loc_004C0B14: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(esi + 4) = MEM32(esi + 4) - ecx;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(esi + 4);
    eax = MEM32(esi);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edx);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004C0B27u); RECOMP_ABI_CALL(0x005CFAF0u, sub_005CFAF0); /* call 0x005CFAF0 */

loc_004C0B27: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(esi + 0xC) = MEM32(esi + 0xC) - ebx;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_004C0B2D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C0B33
 * Original: 0x004C0B33 - 0x004C0B6E (59 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C0B33(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C0B33: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0xC));
    esi = ecx;
    PUSH32(esp, 0x004C0B40u); RECOMP_ABI_CALL(0x005D0020u, sub_005D0020); /* call 0x005D0020 */

loc_004C0B40: ;
    edi = eax;
    POP32(esp, ecx);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x004C0B4Du); RECOMP_ABI_CALL(0x004C0ACCu, sub_004C0ACC); /* call 0x004C0ACC */

loc_004C0B4D: ;
    eax = edi + 1;
    PUSH32(esp, eax);
    eax = MEM32(esi + 4);
    _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, eax);
    PUSH32(esp, 0x004C0B60u); RECOMP_ABI_CALL(0x005CFAF0u, sub_005CFAF0); /* call 0x005CFAF0 */

loc_004C0B60: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + 4) = MEM32(esi + 4) + edi;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xC) = MEM32(esi + 0xC) + 1;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C0B6E
 * Original: 0x004C0B6E - 0x004C0B91 (35 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004C0B6E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C0B6E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    PUSH32(esp, MEM32(ebp + 0x10));
    if (CMP_EQ(_fa, _fb)) goto loc_004C0B7F; /* je: equal / zero */

loc_004C0B7C: ;
    PUSH32(esp, eax);
    goto loc_004C0B84;

loc_004C0B7F: ;
    PUSH32(esp, 0x7B891F);

loc_004C0B84: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C0B8Cu); RECOMP_ABI_CALL(0x004E367Fu, sub_004E367F); /* call 0x004E367F */

loc_004C0B8C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_004C0B91
 * Original: 0x004C0B91 - 0x004C0BB4 (35 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004C0B91(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C0B91: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    PUSH32(esp, MEM32(ebp + 0x10));
    if (CMP_EQ(_fa, _fb)) goto loc_004C0BA2; /* je: equal / zero */

loc_004C0B9F: ;
    PUSH32(esp, eax);
    goto loc_004C0BA7;

loc_004C0BA2: ;
    PUSH32(esp, 0x7B891F);

loc_004C0BA7: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C0BAFu); RECOMP_ABI_CALL(0x004E367Fu, sub_004E367F); /* call 0x004E367F */

loc_004C0BAF: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_004C0BB4
 * Original: 0x004C0BB4 - 0x004C0DDA (550 bytes, 174 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C0BB4(void)
{

loc_004C0BB4: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x90E424);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x004C0BC2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C0BBFu); } /* indirect call */
    }

loc_004C0BC2: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004C0BC9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C0BC6u); } /* indirect call */
    }

loc_004C0BC9: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x8636AC);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x004C0BD5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C0BD2u); } /* indirect call */
    }

loc_004C0BD5: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(0x863164));
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004C0BE2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C0BDFu); } /* indirect call */
    }

loc_004C0BE2: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(0x863168));
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004C0BEFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C0BECu); } /* indirect call */
    }

loc_004C0BEF: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(0x86316C));
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004C0BFCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C0BF9u); } /* indirect call */
    }

loc_004C0BFC: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(0x863170));
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004C0C09u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C0C06u); } /* indirect call */
    }

loc_004C0C09: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(0x863174));
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004C0C16u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C0C13u); } /* indirect call */
    }

loc_004C0C16: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(0x863178));
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004C0C23u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C0C20u); } /* indirect call */
    }

loc_004C0C23: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(0x86317C));
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004C0C30u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C0C2Du); } /* indirect call */
    }

loc_004C0C30: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(0x863180));
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004C0C3Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C0C3Au); } /* indirect call */
    }

loc_004C0C3D: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x86364C);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x004C0C49u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C0C46u); } /* indirect call */
    }

loc_004C0C49: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(0x863188));
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004C0C56u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C0C53u); } /* indirect call */
    }

loc_004C0C56: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(0x86318C));
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004C0C63u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C0C60u); } /* indirect call */
    }

loc_004C0C63: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(0x863190));
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004C0C70u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C0C6Du); } /* indirect call */
    }

loc_004C0C70: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(0x863194));
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004C0C7Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C0C7Au); } /* indirect call */
    }

loc_004C0C7D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(0x863198));
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004C0C8Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C0C87u); } /* indirect call */
    }

loc_004C0C8A: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x863614);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x004C0C96u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C0C93u); } /* indirect call */
    }

loc_004C0C96: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(0x8631A4));
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004C0CA3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C0CA0u); } /* indirect call */
    }

loc_004C0CA3: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(0x8631A8));
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004C0CB0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C0CADu); } /* indirect call */
    }

loc_004C0CB0: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(0x8631B0));
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004C0CBDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C0CBAu); } /* indirect call */
    }

loc_004C0CBD: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(0x8631B4));
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004C0CCAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C0CC7u); } /* indirect call */
    }

loc_004C0CCA: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(0x8631B8));
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004C0CD7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C0CD4u); } /* indirect call */
    }

loc_004C0CD7: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(0x8631BC));
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004C0CE4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C0CE1u); } /* indirect call */
    }

loc_004C0CE4: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(0x8631C0));
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004C0CF1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C0CEEu); } /* indirect call */
    }

loc_004C0CF1: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x8658FC);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x004C0CFDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C0CFAu); } /* indirect call */
    }

loc_004C0CFD: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(0x8631C8));
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004C0D0Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C0D07u); } /* indirect call */
    }

loc_004C0D0A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(0x8631CC));
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004C0D17u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C0D14u); } /* indirect call */
    }

loc_004C0D17: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(0x8631D0));
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004C0D24u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C0D21u); } /* indirect call */
    }

loc_004C0D24: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(0x8631D4));
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004C0D31u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C0D2Eu); } /* indirect call */
    }

loc_004C0D31: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(0x8631D8));
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004C0D3Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C0D3Bu); } /* indirect call */
    }

loc_004C0D3E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(0x8631DC));
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004C0D4Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C0D48u); } /* indirect call */
    }

loc_004C0D4B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(0x8631E0));
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004C0D58u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C0D55u); } /* indirect call */
    }

loc_004C0D58: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(0x8631E4));
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004C0D65u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C0D62u); } /* indirect call */
    }

loc_004C0D65: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(0x8631E8));
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004C0D72u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C0D6Fu); } /* indirect call */
    }

loc_004C0D72: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83003C);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x004C0D7Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C0D7Bu); } /* indirect call */
    }

loc_004C0D7E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(0x863218));
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004C0D8Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C0D88u); } /* indirect call */
    }

loc_004C0D8B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(0x86321C));
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004C0D98u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C0D95u); } /* indirect call */
    }

loc_004C0D98: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x863524);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x004C0DA4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C0DA1u); } /* indirect call */
    }

loc_004C0DA4: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(0x863204));
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004C0DB1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C0DAEu); } /* indirect call */
    }

loc_004C0DB1: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(0x863208));
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004C0DBEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C0DBBu); } /* indirect call */
    }

loc_004C0DBE: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(0x86320C));
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004C0DCBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C0DC8u); } /* indirect call */
    }

loc_004C0DCB: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(0x863210));
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004C0DD8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C0DD5u); } /* indirect call */
    }

loc_004C0DD8: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004C0DDA
 * Original: 0x004C0DDA - 0x004C0DF2 (24 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C0DDA(void)
{

loc_004C0DDA: ;
    eax = MEM32(esp + 8);
    MEM32(ecx + 0x80) = eax;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 5);
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x004C0DEFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C0DECu); } /* indirect call */
    }

loc_004C0DEF: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C0DF2
 * Original: 0x004C0DF2 - 0x004C0E4D (91 bytes, 41 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004C0DF2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C0DF2: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C0DFEu); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_004C0DFE: ;
    eax = MEM32(ebp + 8);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), ebx (32-bit) */
    MEM32(esi) = 0x865D38;
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_004C0E45; /* je: equal / zero */

loc_004C0E14: ;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C0E1Au); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004C0E1A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    edi = eax;
    eax = MEM32(edi);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0xC));
    MEM32(ebp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C0E2Cu); RECOMP_ABI_CALL(0x005D0020u, sub_005D0020); /* call 0x005D0020 */

loc_004C0E2C: ;
    POP32(esp, ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004C0E36u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C0E34u); } /* indirect call */
    }

loc_004C0E36: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    MEM32(esi + 0xC) = eax;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C0E42u); RECOMP_ABI_CALL(0x005D00B0u, sub_005D00B0); /* call 0x005D00B0 */

loc_004C0E42: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    POP32(esp, edi);

loc_004C0E45: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C0E4D
 * Original: 0x004C0E4D - 0x004C0E73 (38 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C0E4D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C0E4D: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), 0 (32-bit) */
    MEM32(esi) = 0x865D38;
    if (CMP_EQ(_fa, _fb)) goto loc_004C0E6B; /* je: equal / zero */

loc_004C0E5C: ;
    PUSH32(esp, 0x004C0E61u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004C0E61: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi + 0xC));
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004C0E6Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C0E68u); } /* indirect call */
    }

loc_004C0E6B: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004DD576(); return; /* tail jmp 0x004DD576 */

}

/**
 * sub_004C0E73
 * Original: 0x004C0E73 - 0x004C0E9C (41 bytes, 16 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004C0E73(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C0E73: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ecx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, MEM32(ebp + 0x10));
    if (CMP_EQ(_fa, _fb)) goto loc_004C0E8A; /* je: equal / zero */

loc_004C0E80: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = eax; PUSH32(esp, 0x004C0E88u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C0E86u); } /* indirect call */
    }

loc_004C0E88: ;
    goto loc_004C0E95;

loc_004C0E8A: ;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C0E95u); RECOMP_ABI_CALL(0x004E367Fu, sub_004E367F); /* call 0x004E367F */

loc_004C0E95: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004C0E9C
 * Original: 0x004C0E9C - 0x004C0F8B (239 bytes, 105 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004C0E9C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C0E9C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C0EA9u); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_004C0EA9: ;
    eax = MEM32(ebp + 0x14);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = 0x865D3C;
    MEM32(esi + 8) = edi;
    MEM32(esi + 0xC) = edi;
    MEM32(esi + 0x10) = edi;
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x18) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C0EC8u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004C0EC8: ;
    ebx = MEM32(eax);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 8));
    MEM32(ebp + 0x14) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C0ED8u); RECOMP_ABI_CALL(0x005D0020u, sub_005D0020); /* call 0x005D0020 */

loc_004C0ED8: ;
    POP32(esp, ecx);
    ecx = MEM32(ebp + 0x14);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ebx); PUSH32(esp, 0x004C0EE0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C0EDEu); } /* indirect call */
    }

loc_004C0EE0: ;
    PUSH32(esp, MEM32(ebp + 8));
    MEM32(esi + 8) = eax;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C0EECu); RECOMP_ABI_CALL(0x005D00B0u, sub_005D00B0); /* call 0x005D00B0 */

loc_004C0EEC: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), edi (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004C0F1E; /* je: equal / zero */

loc_004C0EF3: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C0EF8u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004C0EF8: ;
    ebx = MEM32(eax);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0xC));
    MEM32(ebp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C0F08u); RECOMP_ABI_CALL(0x005D0020u, sub_005D0020); /* call 0x005D0020 */

loc_004C0F08: ;
    POP32(esp, ecx);
    ecx = MEM32(ebp + 8);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ebx); PUSH32(esp, 0x004C0F10u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C0F0Eu); } /* indirect call */
    }

loc_004C0F10: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    MEM32(esi + 0xC) = eax;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C0F1Cu); RECOMP_ABI_CALL(0x005D00B0u, sub_005D00B0); /* call 0x005D00B0 */

loc_004C0F1C: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_004C0F1E: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C0F4E; /* je: equal / zero */

loc_004C0F23: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C0F28u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004C0F28: ;
    ebx = MEM32(eax);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x10));
    MEM32(ebp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C0F38u); RECOMP_ABI_CALL(0x005D0020u, sub_005D0020); /* call 0x005D0020 */

loc_004C0F38: ;
    POP32(esp, ecx);
    ecx = MEM32(ebp + 0xC);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ebx); PUSH32(esp, 0x004C0F40u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C0F3Eu); } /* indirect call */
    }

loc_004C0F40: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    MEM32(esi + 0x10) = eax;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C0F4Cu); RECOMP_ABI_CALL(0x005D00B0u, sub_005D00B0); /* call 0x005D00B0 */

loc_004C0F4C: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_004C0F4E: ;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x18), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C0F82; /* je: equal / zero */

loc_004C0F53: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C0F58u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004C0F58: ;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    ebx = eax;
    eax = MEM32(ebx);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x18));
    MEM32(ebp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C0F6Au); RECOMP_ABI_CALL(0x005D0020u, sub_005D0020); /* call 0x005D0020 */

loc_004C0F6A: ;
    POP32(esp, ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0xC);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004C0F74u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C0F72u); } /* indirect call */
    }

loc_004C0F74: ;
    PUSH32(esp, MEM32(ebp + 0x18));
    MEM32(esi + 0x18) = eax;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C0F80u); RECOMP_ABI_CALL(0x005D00B0u, sub_005D00B0); /* call 0x005D00B0 */

loc_004C0F80: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_004C0F82: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_004C0F8B
 * Original: 0x004C0F8B - 0x004C0FEA (95 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C0F8B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C0F8B: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x865D3C;
    PUSH32(esp, 0x004C0F99u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004C0F99: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi + 8));
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004C0FA3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C0FA0u); } /* indirect call */
    }

loc_004C0FA3: ;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C0FB8; /* je: equal / zero */

loc_004C0FA9: ;
    PUSH32(esp, 0x004C0FAEu); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004C0FAE: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi + 0xC));
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004C0FB8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C0FB5u); } /* indirect call */
    }

loc_004C0FB8: ;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C0FCD; /* je: equal / zero */

loc_004C0FBE: ;
    PUSH32(esp, 0x004C0FC3u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004C0FC3: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi + 0x10));
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004C0FCDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C0FCAu); } /* indirect call */
    }

loc_004C0FCD: ;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C0FE2; /* je: equal / zero */

loc_004C0FD3: ;
    PUSH32(esp, 0x004C0FD8u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004C0FD8: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi + 0x18));
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004C0FE2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C0FDFu); } /* indirect call */
    }

loc_004C0FE2: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004DD576(); return; /* tail jmp 0x004DD576 */

}

/**
 * sub_004C0FEA
 * Original: 0x004C0FEA - 0x004C1040 (86 bytes, 36 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004C0FEA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C0FEA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C0FF6u); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_004C0FF6: ;
    eax = MEM32(ebp + 0xC);
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi) = 0x865D40;
    MEM32(esi + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C100Bu); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004C100B: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    edi = eax;
    eax = MEM32(edi);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 8));
    MEM32(ebp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C1020u); RECOMP_ABI_CALL(0x005D0020u, sub_005D0020); /* call 0x005D0020 */

loc_004C1020: ;
    POP32(esp, ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0xC);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004C102Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C1028u); } /* indirect call */
    }

loc_004C102A: ;
    PUSH32(esp, MEM32(ebp + 8));
    MEM32(esi + 8) = eax;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C1036u); RECOMP_ABI_CALL(0x005D00B0u, sub_005D00B0); /* call 0x005D00B0 */

loc_004C1036: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C1040
 * Original: 0x004C1040 - 0x004C1060 (32 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C1040(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C1040: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x865D40;
    PUSH32(esp, 0x004C104Eu); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004C104E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi + 8));
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004C1058u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C1055u); } /* indirect call */
    }

loc_004C1058: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004DD576(); return; /* tail jmp 0x004DD576 */

}

/**
 * sub_004C1070
 * Original: 0x004C1070 - 0x004C1082 (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C1070(void)
{

loc_004C1070: ;
    PUSH32(esp, 0x004C1075u); RECOMP_ABI_CALL(0x004DC981u, sub_004DC981); /* call 0x004DC981 */

loc_004C1075: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(0x8631F4));
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x004C1081u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C107Fu); } /* indirect call */
    }

loc_004C1081: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004C1082
 * Original: 0x004C1082 - 0x004C1094 (18 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C1082(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004C1082: ;
    PUSH32(esp, 0x004C1087u); RECOMP_ABI_CALL(0x004DC9FAu, sub_004DC9FA); /* call 0x004DC9FA */

loc_004C1087: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x004C108Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C108Bu); } /* indirect call */
    }

loc_004C108E: ;
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
 * sub_004C1094
 * Original: 0x004C1094 - 0x004C10A0 (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C1094(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C1094: ;
    PUSH32(esp, 0x004C1099u); RECOMP_ABI_CALL(0x004DC9ADu, sub_004DC9AD); /* call 0x004DC9AD */

loc_004C1099: ;
    edx = MEM32(eax);
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x18)); return; /* indirect tail jmp */

}

/**
 * sub_004C10A0
 * Original: 0x004C10A0 - 0x004C10A7 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C10A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C10A0: ;
    ecx = MEM32(ecx + 0x20);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax)); return; /* indirect tail jmp */

}

/**
 * sub_004C10A7
 * Original: 0x004C10A7 - 0x004C10AF (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C10A7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C10A7: ;
    ecx = MEM32(ecx + 0x20);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 4)); return; /* indirect tail jmp */

}

/**
 * sub_004C10AF
 * Original: 0x004C10AF - 0x004C10B3 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C10AF(void)
{

loc_004C10AF: ;
    eax = MEM32(ecx + 0x24);
    esp += 4; return; /* ret */

}

/**
 * sub_004C10B3
 * Original: 0x004C10B3 - 0x004C10EF (60 bytes, 26 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C10B3(void)
{

loc_004C10B3: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x004C10BAu); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004C10BA: ;
    esi = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x004C10C3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C10C0u); } /* indirect call */
    }

loc_004C10C3: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 0xC));
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x004C10CEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C10CBu); } /* indirect call */
    }

loc_004C10CE: ;
    edi = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x004C10D7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C10D4u); } /* indirect call */
    }

loc_004C10D7: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 0x10));
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004C10E2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C10DFu); } /* indirect call */
    }

loc_004C10E2: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x004C10EAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C10E7u); } /* indirect call */
    }

loc_004C10EA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C10EF
 * Original: 0x004C10EF - 0x004C10FC (13 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C10EF(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C10EF: ;
    eax = MEM32(ecx + 0x1C);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), LO8(ecx) (8-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(ecx));
    esp += 4; return; /* ret */

}

/**
 * sub_004C10FC
 * Original: 0x004C10FC - 0x004C1102 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C10FC(void)
{

loc_004C10FC: ;
    eax = MEM32(0x90E464);
    esp += 4; return; /* ret */

}

/**
 * sub_004C1102
 * Original: 0x004C1102 - 0x004C1108 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C1102(void)
{

loc_004C1102: ;
    eax = MEM32(0x90E458);
    esp += 4; return; /* ret */

}

/**
 * sub_004C1108
 * Original: 0x004C1108 - 0x004C1116 (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C1108(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C1108: ;
    eax = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004C1115; /* jne: not equal / not zero */

loc_004C1110: ;
    eax = 0x865D44;

loc_004C1115: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004C1116
 * Original: 0x004C1116 - 0x004C1123 (13 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C1116(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C1116: ;
    eax = MEM32(ecx + 0x20);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), LO8(ecx) (8-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(ecx));
    esp += 4; return; /* ret */

}

/**
 * sub_004C1123
 * Original: 0x004C1123 - 0x004C1131 (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C1123(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C1123: ;
    eax = MEM32(ecx + 0x20);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004C1130; /* jne: not equal / not zero */

loc_004C112B: ;
    eax = 0x7F1D48;

loc_004C1130: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004C1131
 * Original: 0x004C1131 - 0x004C1135 (4 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C1131(void)
{

loc_004C1131: ;
    PUSH32(esp, 7);
    POP32(esp, eax);
    esp += 4; return; /* ret */

}

/**
 * sub_004C1135
 * Original: 0x004C1135 - 0x004C1143 (14 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C1135(void)
{

loc_004C1135: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax * 4 + 0x8D7D24);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C1143
 * Original: 0x004C1143 - 0x004C1147 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C1143(void)
{

loc_004C1143: ;
    eax = MEM32(ecx + 0x24);
    esp += 4; return; /* ret */

}

/**
 * sub_004C1147
 * Original: 0x004C1147 - 0x004C1194 (77 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C1147(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C1147: ;
    PUSH32(esp, 0x004C114Cu); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004C114C: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x004C1153u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C1150u); } /* indirect call */
    }

loc_004C1153: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C1190; /* je: equal / zero */

loc_004C1157: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x68); PUSH32(esp, 0x004C115Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C115Cu); } /* indirect call */
    }

loc_004C115F: ;
    esi = eax;
    PUSH32(esp, 0x004C1166u); RECOMP_ABI_CALL(0x004DCA1Bu, sub_004DCA1B); /* call 0x004DCA1B */

loc_004C1166: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x004C1170u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C116Du); } /* indirect call */
    }

loc_004C1170: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    POP32(esp, esi);
    if (CMP_L(_fas, _fbs)) goto loc_004C1190; /* jl: less (signed <) */

loc_004C1176: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5F (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_004C117F; /* jle: less or equal (signed <=) */

loc_004C117B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

loc_004C117F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 5);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    POP32(esp, ecx);
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    PUSH32(esp, 0x15);
    POP32(esp, ecx);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ecx;
    esp += 4; return; /* ret */

loc_004C1190: ;
    PUSH32(esp, 0x14);
    POP32(esp, eax);
    esp += 4; return; /* ret */

}
