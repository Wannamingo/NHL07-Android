/**
 * nhl_07_recomp - Recompiled code chunk 210
 * Functions: 250 (0x004AD96A - 0x004B21D6)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_004AD96A
 * Original: 0x004AD96A - 0x004AD973 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AD96A(void)
{

loc_004AD96A: ;
    eax = ecx;
    MEM32(eax) = 0x863964;
    esp += 4; return; /* ret */

}

/**
 * sub_004AD973
 * Original: 0x004AD973 - 0x004AD97A (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AD973(void)
{

loc_004AD973: ;
    MEM32(ecx) = 0x863964;
    esp += 4; return; /* ret */

}

/**
 * sub_004AD97A
 * Original: 0x004AD97A - 0x004AD997 (29 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AD97A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004AD97A: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x863964;
    if (TEST_Z(_fa, _fb)) goto loc_004AD991; /* je: equal / zero */

loc_004AD98A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004AD990u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_004AD990: ;
    POP32(esp, ecx);

loc_004AD991: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004AD997
 * Original: 0x004AD997 - 0x004AD9A0 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AD997(void)
{

loc_004AD997: ;
    eax = ecx;
    MEM32(eax) = 0x86396C;
    esp += 4; return; /* ret */

}

/**
 * sub_004AD9A0
 * Original: 0x004AD9A0 - 0x004AD9A7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AD9A0(void)
{

loc_004AD9A0: ;
    MEM32(ecx) = 0x86396C;
    esp += 4; return; /* ret */

}

/**
 * sub_004AD9A7
 * Original: 0x004AD9A7 - 0x004AD9C4 (29 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AD9A7(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004AD9A7: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x86396C;
    if (TEST_Z(_fa, _fb)) goto loc_004AD9BE; /* je: equal / zero */

loc_004AD9B7: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004AD9BDu); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_004AD9BD: ;
    POP32(esp, ecx);

loc_004AD9BE: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004AD9C4
 * Original: 0x004AD9C4 - 0x004AD9FC (56 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AD9C4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004AD9C4: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x48)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x48), 0 (32-bit) */
    PUSH32(esp, edi);
    edi = esi + 0x24;
    MEM32(esi) = 0x863990;
    MEM32(edi) = 0x86397C;
    if (CMP_EQ(_fa, _fb)) goto loc_004AD9EC; /* je: equal / zero */

loc_004AD9DD: ;
    PUSH32(esp, 0x004AD9E2u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004AD9E2: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi + 0x48));
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004AD9ECu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004AD9E9u); } /* indirect call */
    }

loc_004AD9EC: ;
    ecx = edi;
    PUSH32(esp, 0x004AD9F3u); RECOMP_ABI_CALL(0x004B64EFu, sub_004B64EF); /* call 0x004B64EF */

loc_004AD9F3: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004B6455(); return; /* tail jmp 0x004B6455 */

}

/**
 * sub_004AD9FC
 * Original: 0x004AD9FC - 0x004ADA04 (8 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AD9FC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004AD9FC: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x28;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x14)); return; /* indirect tail jmp */

}

/**
 * sub_004ADA04
 * Original: 0x004ADA04 - 0x004ADA08 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ADA04(void)
{

loc_004ADA04: ;
    SET_LO8(eax, MEM8(ecx + 0x3C));
    esp += 4; return; /* ret */

}

/**
 * sub_004ADA08
 * Original: 0x004ADA08 - 0x004ADA10 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ADA08(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004ADA08: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x24;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_004B655A(); return; /* tail jmp 0x004B655A */

}

/**
 * sub_004ADA10
 * Original: 0x004ADA10 - 0x004ADA18 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ADA10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004ADA10: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x24;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_004B656C(); return; /* tail jmp 0x004B656C */

}

/**
 * sub_004ADA18
 * Original: 0x004ADA18 - 0x004ADA22 (10 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ADA18(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004ADA18: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ecx + 0x40)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x40), 1 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

}

/**
 * sub_004ADA22
 * Original: 0x004ADA22 - 0x004ADA26 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ADA22(void)
{

loc_004ADA22: ;
    eax = ecx + -36;
    esp += 4; return; /* ret */

}

/**
 * sub_004ADA26
 * Original: 0x004ADA26 - 0x004ADA2E (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ADA26(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004ADA26: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x24;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_004B650D(); return; /* tail jmp 0x004B650D */

}

/**
 * sub_004ADA2E
 * Original: 0x004ADA2E - 0x004ADA32 (4 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ADA2E(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004ADA2E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_004ADA32
 * Original: 0x004ADA32 - 0x004ADA36 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ADA32(void)
{

loc_004ADA32: ;
    eax = MEM32(ecx + 0x58);
    esp += 4; return; /* ret */

}

/**
 * sub_004ADA36
 * Original: 0x004ADA36 - 0x004ADA3A (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ADA36(void)
{

loc_004ADA36: ;
    eax = MEM32(ecx + 0x5C);
    esp += 4; return; /* ret */

}

/**
 * sub_004ADA3A
 * Original: 0x004ADA3A - 0x004ADA3E (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ADA3A(void)
{

loc_004ADA3A: ;
    eax = MEM32(ecx + 0x4C);
    esp += 4; return; /* ret */

}

/**
 * sub_004ADA3E
 * Original: 0x004ADA3E - 0x004ADA42 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ADA3E(void)
{

loc_004ADA3E: ;
    eax = MEM32(ecx + 0x50);
    esp += 4; return; /* ret */

}

/**
 * sub_004ADA42
 * Original: 0x004ADA42 - 0x004ADA58 (22 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ADA42(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004ADA42: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(MEM32(ecx + 0x58)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x58), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004ADA55; /* je: equal / zero */

loc_004ADA4B: ;
    MEM32(ecx + 0x58) = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x004ADA55u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004ADA52u); } /* indirect call */
    }

loc_004ADA55: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004ADA58
 * Original: 0x004ADA58 - 0x004ADA6E (22 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ADA58(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004ADA58: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(MEM32(ecx + 0x5C)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x5C), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004ADA6B; /* je: equal / zero */

loc_004ADA61: ;
    MEM32(ecx + 0x5C) = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x004ADA6Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004ADA68u); } /* indirect call */
    }

loc_004ADA6B: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004ADA6E
 * Original: 0x004ADA6E - 0x004ADB19 (171 bytes, 76 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004ADA6E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004ADA6E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 0x50)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x50), ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004ADAB9; /* jbe: below or equal (unsigned <=) */

loc_004ADA7C: ;
    _fa = (uint32_t)(MEM32(esi + 0x48)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x48), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004ADA99; /* jne: not equal / not zero */

loc_004ADA81: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004ADA86u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004ADA86: ;
    ecx = MEM32(esi + 0x50);
    edx = MEM32(eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x004ADA96u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004ADA94u); } /* indirect call */
    }

loc_004ADA96: ;
    MEM32(esi + 0x48) = eax;

loc_004ADA99: ;
    ecx = MEM32(ebp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    MEM32(esi + 0x54) = ecx;
    if (CMP_BE(_fa, _fb)) goto loc_004ADAE3; /* jbe: below or equal (unsigned <=) */

loc_004ADAA5: ;
    edx = MEM32(ebp + 0xC);
    edx = MEM32(edx + eax * 4);
    ecx = MEM32(esi + 0x48);
    MEM32(ecx + eax * 4) = edx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x54)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x54) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004ADAA5; /* jb: below (unsigned <) */

loc_004ADAB7: ;
    goto loc_004ADAE3;

loc_004ADAB9: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004ADAE3; /* je: equal / zero */

loc_004ADABE: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004ADAE3; /* jbe: below or equal (unsigned <=) */

loc_004ADAC3: ;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004ADAC9u); RECOMP_ABI_CALL(0x004DC9B8u, sub_004DC9B8); /* call 0x004DC9B8 */

loc_004ADAC9: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 8));
    edi = eax;
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = MEM32(esi);
    ebx = MEM32(edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004ADADAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004ADAD7u); } /* indirect call */
    }

loc_004ADADA: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebx + 0x14); PUSH32(esp, 0x004ADAE0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004ADADDu); } /* indirect call */
    }

loc_004ADAE0: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);

loc_004ADAE3: ;
    eax = MEM32(ebp + 0x10);
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 0x58)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x58), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004ADAF2; /* je: equal / zero */

loc_004ADAED: ;
    SET_LO8(ecx, LO8(ecx) + 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x58) = eax;

loc_004ADAF2: ;
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(MEM32(esi + 0x5C)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x5C), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004ADAFD; /* je: equal / zero */

loc_004ADAFA: ;
    MEM32(esi + 0x5C) = eax;

loc_004ADAFD: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004ADB0A; /* je: equal / zero */

loc_004ADB01: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x004ADB0Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004ADB07u); } /* indirect call */
    }

loc_004ADB0A: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x004ADB13u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004ADB10u); } /* indirect call */
    }

loc_004ADB13: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_004ADB19
 * Original: 0x004ADB19 - 0x004ADB3E (37 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ADB19(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004ADB19: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    ebx = MEM32(esi + 0x54);
    PUSH32(esp, edi);
    PUSH32(esp, 0x004ADB27u); RECOMP_ABI_CALL(0x004DC9B8u, sub_004DC9B8); /* call 0x004DC9B8 */

loc_004ADB27: ;
    edi = eax;
    eax = MEM32(esi);
    ebp = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004ADB33u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004ADB30u); } /* indirect call */
    }

loc_004ADB33: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebp + 0xC); PUSH32(esp, 0x004ADB39u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004ADB36u); } /* indirect call */
    }

loc_004ADB39: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_004ADB3E
 * Original: 0x004ADB3E - 0x004ADB82 (68 bytes, 31 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ADB3E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004ADB3E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x50)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x50), 0 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x5C);
    if (CMP_BE(_fa, _fb)) goto loc_004ADB5B; /* jbe: below or equal (unsigned <=) */

loc_004ADB51: ;
    eax = MEM32(esi + 0x48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004ADB5B; /* je: equal / zero */

loc_004ADB58: ;
    edi = MEM32(eax + ebp * 4);

loc_004ADB5B: ;
    PUSH32(esp, 0x004ADB60u); RECOMP_ABI_CALL(0x004DC9B8u, sub_004DC9B8); /* call 0x004DC9B8 */

loc_004ADB60: ;
    edx = MEM32(esi);
    ebx = eax;
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    ecx = esi;
    MEM32(esp + 0x1C) = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004ADB71u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004ADB6Eu); } /* indirect call */
    }

loc_004ADB71: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x20);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x004ADB7Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004ADB78u); } /* indirect call */
    }

loc_004ADB7B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004ADB82
 * Original: 0x004ADB82 - 0x004ADBD3 (81 bytes, 40 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ADB82(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004ADB82: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x004ADB8Du); RECOMP_ABI_CALL(0x004DC9B8u, sub_004DC9B8); /* call 0x004DC9B8 */

loc_004ADB8D: ;
    ebx = MEM32(esp + 0x14);
    edi = eax;
    eax = MEM32(esi);
    ebp = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004ADB9Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004ADB9Au); } /* indirect call */
    }

loc_004ADB9D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebp + 8); PUSH32(esp, 0x004ADBA3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004ADBA0u); } /* indirect call */
    }

loc_004ADBA3: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(edx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004ADBCC; /* jne: not equal / not zero */

loc_004ADBA9: ;
    _fa = (uint32_t)(MEM32(esi + 0x50)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x50), edx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004ADBCC; /* jbe: below or equal (unsigned <=) */

loc_004ADBAE: ;
    ecx = MEM32(esi + 0x48);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004ADBCC; /* je: equal / zero */

loc_004ADBB5: ;
    esi = MEM32(esi + 0x54);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004ADBCC; /* jbe: below or equal (unsigned <=) */

loc_004ADBBC: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004ADBCA; /* je: equal / zero */

loc_004ADBC0: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004ADBBC; /* jb: below (unsigned <) */

loc_004ADBC8: ;
    goto loc_004ADBCC;

loc_004ADBCA: ;
    SET_LO8(eax, 1);

loc_004ADBCC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004ADBD3
 * Original: 0x004ADBD3 - 0x004ADC0B (56 bytes, 27 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ADBD3(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004ADBD3: ;
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x54);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004ADBF2; /* jbe: below or equal (unsigned <=) */

loc_004ADBDD: ;
    edx = MEM32(ecx + 0x48);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x58);

loc_004ADBE4: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004ADBF1; /* je: equal / zero */

loc_004ADBE8: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x54)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x54) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004ADBE4; /* jb: below (unsigned <) */

loc_004ADBF1: ;
    POP32(esp, esi);

loc_004ADBF2: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    POP32(esp, edi);
    if (CMP_B(_fa, _fb)) goto loc_004ADBFA; /* jb: below (unsigned <) */

loc_004ADBF8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004ADBFA: ;
    edx = MEM32(ecx + 0x48);
    eax = MEM32(edx + eax * 4);
    MEM32(ecx + 0x58) = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x004ADC0Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004ADC07u); } /* indirect call */
    }

loc_004ADC0A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004ADC0B
 * Original: 0x004ADC0B - 0x004ADC46 (59 bytes, 28 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ADC0B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004ADC0B: ;
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x54);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004ADC2E; /* jbe: below or equal (unsigned <=) */

loc_004ADC15: ;
    edx = MEM32(ecx + 0x48);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x58);

loc_004ADC1C: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004ADC29; /* je: equal / zero */

loc_004ADC20: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x54)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x54) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004ADC1C; /* jb: below (unsigned <) */

loc_004ADC29: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_004ADC33; /* jne: not equal / not zero */

loc_004ADC2E: ;
    eax = edi + -1;
    goto loc_004ADC34;

loc_004ADC33: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_004ADC34: ;
    edx = MEM32(ecx + 0x48);
    eax = MEM32(edx + eax * 4);
    MEM32(ecx + 0x58) = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x004ADC44u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004ADC41u); } /* indirect call */
    }

loc_004ADC44: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_004ADC49
 * Original: 0x004ADC49 - 0x004ADC51 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ADC49(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004ADC49: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x24;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004ADA18(); return; /* tail jmp 0x004ADA18 */

}

/**
 * sub_004ADC51
 * Original: 0x004ADC51 - 0x004ADC59 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ADC51(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004ADC51: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x24;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004ADD02(); return; /* tail jmp 0x004ADD02 */

}

/**
 * sub_004ADC59
 * Original: 0x004ADC59 - 0x004ADC5D (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ADC59(void)
{

loc_004ADC59: ;
    eax = MEM32(ecx + 0x44);
    esp += 4; return; /* ret */

}

/**
 * sub_004ADC5D
 * Original: 0x004ADC5D - 0x004ADC8F (50 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ADC5D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004ADC5D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx + -28;
    ebx = MEM32(esi + 0xC);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004ADC89; /* jbe: below or equal (unsigned <=) */

loc_004ADC6C: ;
    PUSH32(esp, ebp);
    ebp = ecx + -36;

loc_004ADC70: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x004ADC78u); RECOMP_ABI_CALL(0x004DD726u, sub_004DD726); /* call 0x004DD726 */

loc_004ADC78: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 0x14));
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004ADC83u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004ADC81u); } /* indirect call */
    }

loc_004ADC83: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004ADC70; /* jb: below (unsigned <) */

loc_004ADC88: ;
    POP32(esp, ebp);

loc_004ADC89: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004ADC99
 * Original: 0x004ADC99 - 0x004ADD02 (105 bytes, 37 insns)
 * Category: game_vtable
 * CC: thiscall, 9 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004ADC99(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004ADC99: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004ADCA5u); RECOMP_ABI_CALL(0x004B6443u, sub_004B6443); /* call 0x004B6443 */

loc_004ADCA5: ;
    PUSH32(esp, MEM32(ebp + 0x24));
    edi = esi + 0x24;
    PUSH32(esp, MEM32(ebp + 0x20));
    ecx = edi;
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004ADCB8u); RECOMP_ABI_CALL(0x004B64ADu, sub_004B64AD); /* call 0x004B64AD */

loc_004ADCB8: ;
    PUSH32(esp, MEM32(ebp + 0x1C));
    ecx = MEM32(ebp + 0x28);
    PUSH32(esp, MEM32(ebp + 0x18));
    MEM32(esi + 0x4C) = ecx;
    PUSH32(esp, MEM32(ebp + 0x14));
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, MEM32(ebp + 0x10));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x50) = ecx;
    ecx = esi;
    MEM32(esi) = 0x863990;
    MEM32(edi) = 0x86397C;
    MEM32(esi + 0x48) = eax;
    MEM32(esi + 0x54) = eax;
    MEM32(esi + 0x58) = eax;
    MEM32(esi + 0x5C) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004ADCF1u); RECOMP_ABI_CALL(0x004ADA6Eu, sub_004ADA6E); /* call 0x004ADA6E */

loc_004ADCF1: ;
    ecx = MEM32(ebp + 0x24);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004ADCFAu); RECOMP_ABI_CALL(0x004B6687u, sub_004B6687); /* call 0x004B6687 */

loc_004ADCFA: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 40; return; /* ret 36 */

}

/**
 * sub_004ADD02
 * Original: 0x004ADD02 - 0x004ADD1E (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ADD02(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004ADD02: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004ADD0Au); RECOMP_ABI_CALL(0x004AD9C4u, sub_004AD9C4); /* call 0x004AD9C4 */

loc_004ADD0A: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004ADD18; /* je: equal / zero */

loc_004ADD11: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004ADD17u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004ADD17: ;
    POP32(esp, ecx);

loc_004ADD18: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004ADD1E
 * Original: 0x004ADD1E - 0x004ADD86 (104 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004ADD1E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004ADD1E: ;
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
    PUSH32(esp, 0x004ADD38u); RECOMP_ABI_CALL(0x004B8348u, sub_004B8348); /* call 0x004B8348 */

loc_004ADD38: ;
    esi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004ADD3Fu); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004ADD3F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x60);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004ADD4Bu); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004ADD4B: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004ADD74; /* je: equal / zero */

loc_004ADD52: ;
    PUSH32(esp, MEM32(ebp + 0x28));
    ecx = eax;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x24));
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004ADD72u); RECOMP_ABI_CALL(0x004ADC99u, sub_004ADC99); /* call 0x004ADC99 */

loc_004ADD72: ;
    goto loc_004ADD76;

loc_004ADD74: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004ADD76: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004ADD7Cu); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004ADD7C: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004ADD83u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004ADD83: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_004ADD86
 * Original: 0x004ADD86 - 0x004ADDAA (36 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004ADD86(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004ADD86: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, MEM32(ebp + 0x18));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004ADDA5u); RECOMP_ABI_CALL(0x004ADD1Eu, sub_004ADD1E); /* call 0x004ADD1E */

loc_004ADDA5: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_004ADDB3
 * Original: 0x004ADDB3 - 0x004ADDE3 (48 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ADDB3(void)
{

loc_004ADDB3: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004ADDBBu); RECOMP_ABI_CALL(0x004AE593u, sub_004AE593); /* call 0x004AE593 */

loc_004ADDBB: ;
    eax = MEM32(esp + 8);
    MEM32(esi + 8) = eax;
    eax = MEM32(esp + 0xC);
    MEM32(esi + 0xC) = eax;
    eax = MEM32(esp + 0x10);
    MEM32(esi + 0x10) = eax;
    eax = MEM32(esp + 0x14);
    MEM32(esi + 0x14) = eax;
    MEM32(esi) = 0x863F0C;
    eax = esi;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_004ADDE3
 * Original: 0x004ADDE3 - 0x004ADDE7 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ADDE3(void)
{

loc_004ADDE3: ;
    eax = MEM32(ecx + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_004ADDE7
 * Original: 0x004ADDE7 - 0x004ADDEB (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ADDE7(void)
{

loc_004ADDE7: ;
    eax = MEM32(ecx + 0xC);
    esp += 4; return; /* ret */

}

/**
 * sub_004ADDEB
 * Original: 0x004ADDEB - 0x004ADDEF (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ADDEB(void)
{

loc_004ADDEB: ;
    eax = MEM32(ecx + 0x10);
    esp += 4; return; /* ret */

}

/**
 * sub_004ADDEF
 * Original: 0x004ADDEF - 0x004ADDF3 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ADDEF(void)
{

loc_004ADDEF: ;
    eax = MEM32(ecx + 0x14);
    esp += 4; return; /* ret */

}

/**
 * sub_004ADDF3
 * Original: 0x004ADDF3 - 0x004ADE15 (34 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ADDF3(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004ADDF3: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x863F0C;
    PUSH32(esp, 0x004ADE01u); RECOMP_ABI_CALL(0x004AE5A5u, sub_004AE5A5); /* call 0x004AE5A5 */

loc_004ADE01: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004ADE0F; /* je: equal / zero */

loc_004ADE08: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004ADE0Eu); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004ADE0E: ;
    POP32(esp, ecx);

loc_004ADE0F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004ADE3D
 * Original: 0x004ADE3D - 0x004ADE6A (45 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ADE3D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004ADE3D: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x863F20;
    if (TEST_Z(_fa, _fb)) goto loc_004ADE54; /* je: equal / zero */

loc_004ADE4D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004ADE53u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_004ADE53: ;
    POP32(esp, ecx);

loc_004ADE54: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004ADE6A
 * Original: 0x004ADE6A - 0x004ADE8A (32 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ADE6A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004ADE6A: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x863F30;
    if (TEST_Z(_fa, _fb)) goto loc_004ADE81; /* je: equal / zero */

loc_004ADE7A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004ADE80u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_004ADE80: ;
    POP32(esp, ecx);

loc_004ADE81: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004ADE8A
 * Original: 0x004ADE8A - 0x004ADEB4 (42 bytes, 13 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ADE8A(void)
{

loc_004ADE8A: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004ADE92u); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_004ADE92: ;
    PUSH32(esp, MEM32(esp + 0xC));
    MEM32(esi) = 0x863F38;
    PUSH32(esp, 0x004ADEA1u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004ADEA1: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = esi + 8;
    PUSH32(esp, 0x004ADEAEu); RECOMP_ABI_CALL(0x004DB87Du, sub_004DB87D); /* call 0x004DB87D */

loc_004ADEAE: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004ADEE8
 * Original: 0x004ADEE8 - 0x004ADF03 (27 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ADEE8(void)
{

loc_004ADEE8: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x004ADEF8u); RECOMP_ABI_CALL(0x004DD62Cu, sub_004DD62C); /* call 0x004DD62C */

loc_004ADEF8: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004ADF03
 * Original: 0x004ADF03 - 0x004ADF2D (42 bytes, 13 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ADF03(void)
{

loc_004ADF03: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004ADF0Bu); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_004ADF0B: ;
    PUSH32(esp, MEM32(esp + 0xC));
    MEM32(esi) = 0x863F3C;
    PUSH32(esp, 0x004ADF1Au); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004ADF1A: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = esi + 8;
    PUSH32(esp, 0x004ADF27u); RECOMP_ABI_CALL(0x004DB87Du, sub_004DB87D); /* call 0x004DB87D */

loc_004ADF27: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004ADF41
 * Original: 0x004ADF41 - 0x004ADF5D (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ADF41(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004ADF41: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004ADF49u); RECOMP_ABI_CALL(0x004E1694u, sub_004E1694); /* call 0x004E1694 */

loc_004ADF49: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004ADF57; /* je: equal / zero */

loc_004ADF50: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004ADF56u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004ADF56: ;
    POP32(esp, ecx);

loc_004ADF57: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004ADF5D
 * Original: 0x004ADF5D - 0x004ADF79 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ADF5D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004ADF5D: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004ADF65u); RECOMP_ABI_CALL(0x004E21C8u, sub_004E21C8); /* call 0x004E21C8 */

loc_004ADF65: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004ADF73; /* je: equal / zero */

loc_004ADF6C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004ADF72u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004ADF72: ;
    POP32(esp, ecx);

loc_004ADF73: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004ADF81
 * Original: 0x004ADF81 - 0x004AE007 (134 bytes, 53 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004ADF81(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004ADF81: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ebx = MEM32(esi + 0x1C);
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + -12) = esi;
    MEM32(ebp + -8) = ebx;
    if ((_fas < 0)) goto loc_004ADFFF; /* js: sign (negative) */

loc_004ADF97: ;
    PUSH32(esp, edi);

loc_004ADF98: ;
    PUSH32(esp, ebx);
    ecx = esi + 0x10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004ADFA1u); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004ADFA1: ;
    edi = eax;
    _fa = (uint32_t)(MEM8(edi + 0x200)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x200), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004ADFE0; /* je: equal / zero */

loc_004ADFAC: ;
    ebx = MEM32(esi + -16);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xFFFFFFE4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xFFFFFFE4u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004ADFD3; /* jbe: below or equal (unsigned <=) */

loc_004ADFBA: ;
    PUSH32(esp, MEM32(ebp + -4));
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004ADFC4u); RECOMP_ABI_CALL(0x004DD726u, sub_004DD726); /* call 0x004DD726 */

loc_004ADFC4: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004ADFCBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004ADFC9u); } /* indirect call */
    }

loc_004ADFCB: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004ADFBA; /* jb: below (unsigned <) */

loc_004ADFD3: ;
    esi = MEM32(ebp + -12);
    ebx = MEM32(ebp + -8);
    MEM8(edi + 0x200) = 0;

loc_004ADFE0: ;
    _fa = (uint32_t)(MEM8(edi + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 4), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004ADFF1; /* jne: not equal / not zero */

loc_004ADFE6: ;
    PUSH32(esp, ebx);
    ecx = esi + 0x10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004ADFEFu); RECOMP_ABI_CALL(0x004DB98Eu, sub_004DB98E); /* call 0x004DB98E */

loc_004ADFEF: ;
    goto loc_004ADFF8;

loc_004ADFF1: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004ADFF8u); RECOMP_ABI_CALL(0x004ABB7Eu, sub_004ABB7E); /* call 0x004ABB7E */

loc_004ADFF8: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + -8) = ebx;
    if ((_fas >= 0)) goto loc_004ADF98; /* jns: not sign (positive) */

loc_004ADFFE: ;
    POP32(esp, edi);

loc_004ADFFF: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004AE007
 * Original: 0x004AE007 - 0x004AE19A (403 bytes, 142 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AE007(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004AE007: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x004AE014u); RECOMP_ABI_CALL(0x004B86A6u, sub_004B86A6); /* call 0x004B86A6 */

loc_004AE014: ;
    edi = esi + 0x24;
    MEM32(edi) = 0x863F20;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = esi + 0x28;
    MEM32(ebx) = 0x863F30;
    PUSH32(esp, ebp);
    PUSH32(esp, 0xFA);
    ecx = esi + 0x2C;
    MEM32(esi) = 0x863F6C;
    MEM32(edi) = 0x863F5C;
    MEM32(ebx) = 0x863F54;
    PUSH32(esp, 0x004AE048u); RECOMP_ABI_CALL(0x004ADE8Au, sub_004ADE8A); /* call 0x004ADE8A */

loc_004AE048: ;
    MEM32(esi + 0x54) = ebp;
    MEM32(esi + 0x58) = ebp;
    MEM32(esi + 0x5C) = ebp;
    MEM32(esi + 0x60) = ebp;
    eax = MEM32(0x90E7AC);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x24);
    ecx = MEM32(eax + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004AE06Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004AE06Bu); } /* indirect call */
    }

loc_004AE06E: ;
    MEM32(esi + 0x60) = eax;
    PUSH32(esp, 0x004AE076u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004AE076: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x004AE080u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004AE080: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004AE093; /* je: equal / zero */

loc_004AE087: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 7);
    ecx = eax;
    PUSH32(esp, 0x004AE091u); RECOMP_ABI_CALL(0x004ADF03u, sub_004ADF03); /* call 0x004ADF03 */

loc_004AE091: ;
    goto loc_004AE095;

loc_004AE093: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004AE095: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004AE09Bu); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004AE09B: ;
    ecx = eax;
    PUSH32(esp, 0x004AE0A2u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004AE0A2: ;
    PUSH32(esp, eax);
    ecx = esi + 0x58;
    PUSH32(esp, 0x004AE0ABu); RECOMP_ABI_CALL(0x004ADEE8u, sub_004ADEE8); /* call 0x004ADEE8 */

loc_004AE0AB: ;
    edi = 0x8639E8;

loc_004AE0B0: ;
    PUSH32(esp, 0x004AE0B5u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004AE0B5: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x004AE0BFu); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004AE0BF: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004AE0DA; /* je: equal / zero */

loc_004AE0C6: ;
    PUSH32(esp, MEM32(edi + 4));
    ecx = eax;
    PUSH32(esp, MEM32(edi));
    PUSH32(esp, MEM32(edi + -4));
    PUSH32(esp, MEM32(edi + -8));
    PUSH32(esp, 0x004AE0D8u); RECOMP_ABI_CALL(0x004ADDB3u, sub_004ADDB3); /* call 0x004ADDB3 */

loc_004AE0D8: ;
    goto loc_004AE0DC;

loc_004AE0DA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004AE0DC: ;
    ecx = MEM32(esi + 0x58);
    PUSH32(esp, eax);
    MEM32(esp + 0x14) = ecx;
    PUSH32(esp, 0x004AE0E9u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004AE0E9: ;
    ecx = eax;
    PUSH32(esp, 0x004AE0F0u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004AE0F0: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x004AE0FDu); RECOMP_ABI_CALL(0x004DB91Cu, sub_004DB91C); /* call 0x004DB91C */

loc_004AE0FD: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x863A58) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x863A58 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004AE0B0; /* jl: less (signed <) */

loc_004AE108: ;
    PUSH32(esp, 0x004AE10Du); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004AE10D: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x004AE117u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004AE117: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004AE12A; /* je: equal / zero */

loc_004AE11E: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 5);
    ecx = eax;
    PUSH32(esp, 0x004AE128u); RECOMP_ABI_CALL(0x004ADF03u, sub_004ADF03); /* call 0x004ADF03 */

loc_004AE128: ;
    goto loc_004AE12C;

loc_004AE12A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004AE12C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004AE132u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004AE132: ;
    ecx = eax;
    PUSH32(esp, 0x004AE139u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004AE139: ;
    PUSH32(esp, eax);
    ecx = esi + 0x5C;
    PUSH32(esp, 0x004AE142u); RECOMP_ABI_CALL(0x004ADEE8u, sub_004ADEE8); /* call 0x004ADEE8 */

loc_004AE142: ;
    eax = MEM32(esp + 0x14);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x34);
    edi = MEM32(eax + 0x14);
    PUSH32(esp, 0x2B757372);
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x004AE15Cu); RECOMP_ABI_CALL(0x004B3DE6u, sub_004B3DE6); /* call 0x004B3DE6 */

loc_004AE15C: ;
    PUSH32(esp, 0x75736572);
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x004AE169u); RECOMP_ABI_CALL(0x004B3DE6u, sub_004B3DE6); /* call 0x004B3DE6 */

loc_004AE169: ;
    ecx = MEM32(0x90E7AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x004AE174u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004AE171u); } /* indirect call */
    }

loc_004AE174: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x004AE17Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004AE178u); } /* indirect call */
    }

loc_004AE17B: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3A98);
    PUSH32(esp, 0x863F40);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004AE18Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004AE189u); } /* indirect call */
    }

loc_004AE18C: ;
    POP32(esp, edi);
    MEM32(0x90E40C) = eax;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004AE19A
 * Original: 0x004AE19A - 0x004AE19D (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AE19A(void)
{

loc_004AE19A: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004AE19D
 * Original: 0x004AE19D - 0x004AE1A5 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AE19D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004AE19D: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x24;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004AE3F9(); return; /* tail jmp 0x004AE3F9 */

}

/**
 * sub_004AE1A5
 * Original: 0x004AE1A5 - 0x004AE1AD (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AE1A5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004AE1A5: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x28;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004AE3F9(); return; /* tail jmp 0x004AE3F9 */

}

/**
 * sub_004AE1AD
 * Original: 0x004AE1AD - 0x004AE249 (156 bytes, 47 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AE1AD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004AE1AD: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esi) = 0x863F6C;
    MEM32(esi + 0x24) = 0x863F5C;
    edi = esi + 0x28;
    MEM32(edi) = 0x863F54;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x34);
    ebx = MEM32(eax + 0x14);
    PUSH32(esp, 0x75736572);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x004AE1E3u); RECOMP_ABI_CALL(0x004B3E43u, sub_004B3E43); /* call 0x004B3E43 */

loc_004AE1E3: ;
    PUSH32(esp, 0x2B757372);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x004AE1F0u); RECOMP_ABI_CALL(0x004B3E43u, sub_004B3E43); /* call 0x004B3E43 */

loc_004AE1F0: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x24);
    PUSH32(esp, MEM32(esi + 0x60));
    ecx = MEM32(eax + 0xC);
    PUSH32(esp, 0x004AE206u); RECOMP_ABI_CALL(0x004E354Bu, sub_004E354B); /* call 0x004E354B */

loc_004AE206: ;
    ecx = MEM32(esi + 0x5C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004AE212; /* je: equal / zero */

loc_004AE20D: ;
    PUSH32(esp, 0x004AE212u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004AE212: ;
    ecx = MEM32(esi + 0x58);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004AE21E; /* je: equal / zero */

loc_004AE219: ;
    PUSH32(esp, 0x004AE21Eu); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004AE21E: ;
    ecx = MEM32(esi + 0x54);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004AE22A; /* je: equal / zero */

loc_004AE225: ;
    PUSH32(esp, 0x004AE22Au); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004AE22A: ;
    ecx = esi + 0x2C;
    PUSH32(esp, 0x004AE232u); RECOMP_ABI_CALL(0x004E1694u, sub_004E1694); /* call 0x004E1694 */

loc_004AE232: ;
    MEM32(edi) = 0x863F30;
    POP32(esp, edi);
    MEM32(esi + 0x24) = 0x863F20;
    ecx = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_004B86C2(); return; /* tail jmp 0x004B86C2 */

}

/**
 * sub_004AE249
 * Original: 0x004AE249 - 0x004AE2D0 (135 bytes, 55 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004AE249(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004AE249: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ebx = MEM32(edi + 0x40);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004AE280; /* jbe: below or equal (unsigned <=) */

loc_004AE25D: ;
    PUSH32(esp, MEM32(ebp + -4));
    ecx = edi + 0x34;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AE268u); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004AE268: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 8));
    esi = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004AE274u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004AE271u); } /* indirect call */
    }

loc_004AE274: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004AE2C7; /* jne: not equal / not zero */

loc_004AE278: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004AE25D; /* jb: below (unsigned <) */

loc_004AE280: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(ebp + 0xC)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0xC), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004AE2C7; /* je: equal / zero */

loc_004AE288: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AE28Du); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004AE28D: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x218);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AE29Au); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004AE29A: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004AE2AD; /* je: equal / zero */

loc_004AE2A1: ;
    PUSH32(esp, MEM32(ebp + 8));
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AE2ABu); RECOMP_ABI_CALL(0x004AB9E9u, sub_004AB9E9); /* call 0x004AB9E9 */

loc_004AE2AB: ;
    goto loc_004AE2AF;

loc_004AE2AD: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004AE2AF: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AE2B5u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004AE2B5: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AE2BCu); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004AE2BC: ;
    esi = eax;
    PUSH32(esp, esi);
    ecx = edi + 0x34;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AE2C7u); RECOMP_ABI_CALL(0x004DB91Cu, sub_004DB91C); /* call 0x004DB91C */

loc_004AE2C7: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004AE2D4
 * Original: 0x004AE2D4 - 0x004AE327 (83 bytes, 29 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AE2D4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004AE2D4: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004AE2DCu); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004AE2DC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x004AE2E8u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004AE2E8: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004AE308; /* je: equal / zero */

loc_004AE2EF: ;
    PUSH32(esp, MEM32(esp + 0x14));
    ecx = eax;
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, 0x004AE306u); RECOMP_ABI_CALL(0x004ADDB3u, sub_004ADDB3); /* call 0x004ADDB3 */

loc_004AE306: ;
    goto loc_004AE30A;

loc_004AE308: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004AE30A: ;
    esi = MEM32(esi + 0x5C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004AE313u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004AE313: ;
    ecx = eax;
    PUSH32(esp, 0x004AE31Au); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004AE31A: ;
    PUSH32(esp, eax);
    ecx = esi + 8;
    PUSH32(esp, 0x004AE323u); RECOMP_ABI_CALL(0x004DB91Cu, sub_004DB91C); /* call 0x004DB91C */

loc_004AE323: ;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_004AE327
 * Original: 0x004AE327 - 0x004AE3F1 (202 bytes, 73 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004AE327(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004AE327: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x1D8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1D8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8E19F0);
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(eax + 0x10));
    eax = ebp + -472;
    PUSH32(esp, eax);
    ebx = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AE34Du); RECOMP_ABI_CALL(0x005E8350u, sub_005E8350); /* call 0x005E8350 */

loc_004AE34D: ;
    _fa = (uint32_t)(MEM8(ebp + -464)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -464), 0 (8-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004AE379; /* je: equal / zero */

loc_004AE358: ;
    PUSH32(esp, 1);
    eax = ebp + -464;
    PUSH32(esp, eax);
    ecx = ebx + -40;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AE369u); RECOMP_ABI_CALL(0x004AE249u, sub_004AE249); /* call 0x004AE249 */

loc_004AE369: ;
    ecx = ebp + -472;
    PUSH32(esp, ecx);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AE377u); RECOMP_ABI_CALL(0x004ABB18u, sub_004ABB18); /* call 0x004ABB18 */

loc_004AE377: ;
    goto loc_004AE3E4;

loc_004AE379: ;
    _fa = (uint32_t)(MEM32(ebp + -472)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -472), 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004AE3E4; /* jl: less (signed <) */

loc_004AE382: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x28);
    PUSH32(esp, esi);
    esi = MEM32(eax + 8);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AE399u); RECOMP_ABI_CALL(0x005E6A90u, sub_005E6A90); /* call 0x005E6A90 */

loc_004AE399: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004AE3E3; /* je: equal / zero */

loc_004AE39F: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + -472));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AE3ACu); RECOMP_ABI_CALL(0x005E7610u, sub_005E7610); /* call 0x005E7610 */

loc_004AE3AC: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004AE3E2; /* je: equal / zero */

loc_004AE3B4: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AE3BCu); RECOMP_ABI_CALL(0x005E6A70u, sub_005E6A70); /* call 0x005E6A70 */

loc_004AE3BC: ;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AE3C3u); RECOMP_ABI_CALL(0x005E66B0u, sub_005E66B0); /* call 0x005E66B0 */

loc_004AE3C3: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004AE3E2; /* je: equal / zero */

loc_004AE3CA: ;
    PUSH32(esp, 1);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = ebx + -40;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AE3D8u); RECOMP_ABI_CALL(0x004AE249u, sub_004AE249); /* call 0x004AE249 */

loc_004AE3D8: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xB0); PUSH32(esp, 0x004AE3E2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004AE3DCu); } /* indirect call */
    }

loc_004AE3E2: ;
    POP32(esp, edi);

loc_004AE3E3: ;
    POP32(esp, esi);

loc_004AE3E4: ;
    ecx = MEM32(ebp + -4);
    POP32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AE3EDu); RECOMP_ABI_CALL(0x005CFF80u, sub_005CFF80); /* call 0x005CFF80 */

loc_004AE3ED: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004AE3F9
 * Original: 0x004AE3F9 - 0x004AE415 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AE3F9(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004AE3F9: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004AE401u); RECOMP_ABI_CALL(0x004AE1ADu, sub_004AE1AD); /* call 0x004AE1AD */

loc_004AE401: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004AE40F; /* je: equal / zero */

loc_004AE408: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004AE40Eu); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004AE40E: ;
    POP32(esp, ecx);

loc_004AE40F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004AE415
 * Original: 0x004AE415 - 0x004AE423 (14 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AE415(void)
{

loc_004AE415: ;
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0x004AE420u); RECOMP_ABI_CALL(0x004AE249u, sub_004AE249); /* call 0x004AE249 */

loc_004AE420: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004AE423
 * Original: 0x004AE423 - 0x004AE571 (334 bytes, 126 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004AE423(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004AE423: ;
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
    edi = ecx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + -12) = edi;
    MEM32(ebp + -4) = ebx;
    eax = 0x863A50;

loc_004AE43B: ;
    ecx = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004AE445; /* jne: not equal / not zero */

loc_004AE442: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_004AE445: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x863BE0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x863BE0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004AE43B; /* jl: less (signed <) */

loc_004AE44F: ;
    eax = MEM32(edi + 0x5C);
    esi = MEM32(eax + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    MEM32(ebp + -8) = esi;
    if (CMP_LE(_fas, _fbs)) goto loc_004AE47C; /* jle: less or equal (signed <=) */

loc_004AE45C: ;
    eax = MEM32(edi + 0x5C);
    PUSH32(esp, ebx);
    ecx = eax + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AE468u); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004AE468: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004AE46Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004AE46Cu); } /* indirect call */
    }

loc_004AE46F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004AE477; /* jne: not equal / not zero */

loc_004AE474: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_004AE477: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004AE45C; /* jl: less (signed <) */

loc_004AE47C: ;
    ebx = edi + 0x54;
    eax = MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004AE48F; /* je: equal / zero */

loc_004AE485: ;
    ecx = eax + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AE48Du); RECOMP_ABI_CALL(0x004DB960u, sub_004DB960); /* call 0x004DB960 */

loc_004AE48D: ;
    goto loc_004AE4CB;

loc_004AE48F: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AE494u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004AE494: ;
    PUSH32(esp, eax);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x28);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AE4A0u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004AE4A0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004AE4B4; /* je: equal / zero */

loc_004AE4A7: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + -4));
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AE4B2u); RECOMP_ABI_CALL(0x004ADF03u, sub_004ADF03); /* call 0x004ADF03 */

loc_004AE4B2: ;
    goto loc_004AE4B6;

loc_004AE4B4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004AE4B6: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AE4BCu); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004AE4BC: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AE4C3u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004AE4C3: ;
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AE4CBu); RECOMP_ABI_CALL(0x004ADEE8u, sub_004ADEE8); /* call 0x004ADEE8 */

loc_004AE4CB: ;
    esi = 0x863A58;

loc_004AE4D0: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(esi + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + -8), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004AE521; /* jne: not equal / not zero */

loc_004AE4D8: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AE4DDu); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004AE4DD: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x18);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AE4E9u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004AE4E9: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004AE504; /* je: equal / zero */

loc_004AE4F0: ;
    PUSH32(esp, MEM32(esi + 4));
    ecx = eax;
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, MEM32(esi + -4));
    PUSH32(esp, MEM32(esi + -8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AE502u); RECOMP_ABI_CALL(0x004ADDB3u, sub_004ADDB3); /* call 0x004ADDB3 */

loc_004AE502: ;
    goto loc_004AE506;

loc_004AE504: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004AE506: ;
    edi = MEM32(ebx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AE50Eu); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004AE50E: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AE515u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004AE515: ;
    PUSH32(esp, eax);
    ecx = edi + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AE51Eu); RECOMP_ABI_CALL(0x004DB91Cu, sub_004DB91C); /* call 0x004DB91C */

loc_004AE51E: ;
    edi = MEM32(ebp + -12);

loc_004AE521: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x863BE8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x863BE8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004AE4D0; /* jl: less (signed <) */

loc_004AE52C: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_004AE568; /* jle: less or equal (signed <=) */

loc_004AE536: ;
    eax = MEM32(edi + 0x5C);
    PUSH32(esp, MEM32(ebp + -4));
    ecx = eax + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AE544u); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004AE544: ;
    esi = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004AE54Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004AE54Au); } /* indirect call */
    }

loc_004AE54D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004AE55D; /* jne: not equal / not zero */

loc_004AE552: ;
    ecx = MEM32(ebx);
    PUSH32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AE55Du); RECOMP_ABI_CALL(0x004DB91Cu, sub_004DB91C); /* call 0x004DB91C */

loc_004AE55D: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -8) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004AE536; /* jl: less (signed <) */

loc_004AE568: ;
    eax = MEM32(ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004AE571
 * Original: 0x004AE571 - 0x004AE576 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AE571(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004AE571: ;
    g_seh_ebp = ebp; sub_004AE415(); return; /* tail jmp 0x004AE415 */

}

/**
 * sub_004AE576
 * Original: 0x004AE576 - 0x004AE588 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AE576(void)
{

loc_004AE576: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004AE57Eu); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_004AE57E: ;
    MEM32(esi) = 0x863F78;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004AE588
 * Original: 0x004AE588 - 0x004AE593 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AE588(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004AE588: ;
    MEM32(ecx) = 0x863F78;
    g_seh_ebp = ebp; sub_004DD576(); return; /* tail jmp 0x004DD576 */

}

/**
 * sub_004AE593
 * Original: 0x004AE593 - 0x004AE5A5 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AE593(void)
{

loc_004AE593: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004AE59Bu); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_004AE59B: ;
    MEM32(esi) = 0x8640A8;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004AE5A5
 * Original: 0x004AE5A5 - 0x004AE5B0 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AE5A5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004AE5A5: ;
    MEM32(ecx) = 0x8640A8;
    g_seh_ebp = ebp; sub_004DD576(); return; /* tail jmp 0x004DD576 */

}

/**
 * sub_004AE5B0
 * Original: 0x004AE5B0 - 0x004AE5D2 (34 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AE5B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004AE5B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x863F78;
    PUSH32(esp, 0x004AE5BEu); RECOMP_ABI_CALL(0x004DD576u, sub_004DD576); /* call 0x004DD576 */

loc_004AE5BE: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004AE5CC; /* je: equal / zero */

loc_004AE5C5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004AE5CBu); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004AE5CB: ;
    POP32(esp, ecx);

loc_004AE5CC: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004AE5D2
 * Original: 0x004AE5D2 - 0x004AE5F4 (34 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AE5D2(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004AE5D2: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x8640A8;
    PUSH32(esp, 0x004AE5E0u); RECOMP_ABI_CALL(0x004DD576u, sub_004DD576); /* call 0x004DD576 */

loc_004AE5E0: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004AE5EE; /* je: equal / zero */

loc_004AE5E7: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004AE5EDu); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004AE5ED: ;
    POP32(esp, ecx);

loc_004AE5EE: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004AE5F4
 * Original: 0x004AE5F4 - 0x004AE60B (23 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AE5F4(void)
{

loc_004AE5F4: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x8640CC);
    esi = ecx;
    PUSH32(esp, 0x004AE601u); RECOMP_ABI_CALL(0x004B87B1u, sub_004B87B1); /* call 0x004B87B1 */

loc_004AE601: ;
    MEM32(esi) = 0x8640BC;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004AE60B
 * Original: 0x004AE60B - 0x004AE60F (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AE60B(void)
{

loc_004AE60B: ;
    eax = ecx + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_004AE60F
 * Original: 0x004AE60F - 0x004AE631 (34 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AE60F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004AE60F: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x8640BC;
    PUSH32(esp, 0x004AE61Du); RECOMP_ABI_CALL(0x004B87D7u, sub_004B87D7); /* call 0x004B87D7 */

loc_004AE61D: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004AE62B; /* je: equal / zero */

loc_004AE624: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004AE62Au); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004AE62A: ;
    POP32(esp, ecx);

loc_004AE62B: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004AE631
 * Original: 0x004AE631 - 0x004AE648 (23 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AE631(void)
{

loc_004AE631: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x8640E0);
    esi = ecx;
    PUSH32(esp, 0x004AE63Eu); RECOMP_ABI_CALL(0x004B87B1u, sub_004B87B1); /* call 0x004B87B1 */

loc_004AE63E: ;
    MEM32(esi) = 0x8640D0;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004AE648
 * Original: 0x004AE648 - 0x004AE66A (34 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AE648(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004AE648: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x8640D0;
    PUSH32(esp, 0x004AE656u); RECOMP_ABI_CALL(0x004B87D7u, sub_004B87D7); /* call 0x004B87D7 */

loc_004AE656: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004AE664; /* je: equal / zero */

loc_004AE65D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004AE663u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004AE663: ;
    POP32(esp, ecx);

loc_004AE664: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004AE66A
 * Original: 0x004AE66A - 0x004AE681 (23 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AE66A(void)
{

loc_004AE66A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x8640F8);
    esi = ecx;
    PUSH32(esp, 0x004AE677u); RECOMP_ABI_CALL(0x004B87B1u, sub_004B87B1); /* call 0x004B87B1 */

loc_004AE677: ;
    MEM32(esi) = 0x8640E8;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004AE681
 * Original: 0x004AE681 - 0x004AE6A3 (34 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AE681(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004AE681: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x8640E8;
    PUSH32(esp, 0x004AE68Fu); RECOMP_ABI_CALL(0x004B87D7u, sub_004B87D7); /* call 0x004B87D7 */

loc_004AE68F: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004AE69D; /* je: equal / zero */

loc_004AE696: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004AE69Cu); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004AE69C: ;
    POP32(esp, ecx);

loc_004AE69D: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004AE6A3
 * Original: 0x004AE6A3 - 0x004AE6BA (23 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AE6A3(void)
{

loc_004AE6A3: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x864110);
    esi = ecx;
    PUSH32(esp, 0x004AE6B0u); RECOMP_ABI_CALL(0x004B87B1u, sub_004B87B1); /* call 0x004B87B1 */

loc_004AE6B0: ;
    MEM32(esi) = 0x864100;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004AE6BA
 * Original: 0x004AE6BA - 0x004AE6DC (34 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AE6BA(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004AE6BA: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x864100;
    PUSH32(esp, 0x004AE6C8u); RECOMP_ABI_CALL(0x004B87D7u, sub_004B87D7); /* call 0x004B87D7 */

loc_004AE6C8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004AE6D6; /* je: equal / zero */

loc_004AE6CF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004AE6D5u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004AE6D5: ;
    POP32(esp, ecx);

loc_004AE6D6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004AE6DC
 * Original: 0x004AE6DC - 0x004AE6F3 (23 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AE6DC(void)
{

loc_004AE6DC: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x86412C);
    esi = ecx;
    PUSH32(esp, 0x004AE6E9u); RECOMP_ABI_CALL(0x004B87B1u, sub_004B87B1); /* call 0x004B87B1 */

loc_004AE6E9: ;
    MEM32(esi) = 0x86411C;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004AE6F3
 * Original: 0x004AE6F3 - 0x004AE715 (34 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AE6F3(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004AE6F3: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x86411C;
    PUSH32(esp, 0x004AE701u); RECOMP_ABI_CALL(0x004B87D7u, sub_004B87D7); /* call 0x004B87D7 */

loc_004AE701: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004AE70F; /* je: equal / zero */

loc_004AE708: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004AE70Eu); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004AE70E: ;
    POP32(esp, ecx);

loc_004AE70F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004AE715
 * Original: 0x004AE715 - 0x004AE72C (23 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AE715(void)
{

loc_004AE715: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x864144);
    esi = ecx;
    PUSH32(esp, 0x004AE722u); RECOMP_ABI_CALL(0x004B87B1u, sub_004B87B1); /* call 0x004B87B1 */

loc_004AE722: ;
    MEM32(esi) = 0x864134;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004AE72C
 * Original: 0x004AE72C - 0x004AE74E (34 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AE72C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004AE72C: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x864134;
    PUSH32(esp, 0x004AE73Au); RECOMP_ABI_CALL(0x004B87D7u, sub_004B87D7); /* call 0x004B87D7 */

loc_004AE73A: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004AE748; /* je: equal / zero */

loc_004AE741: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004AE747u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004AE747: ;
    POP32(esp, ecx);

loc_004AE748: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004AE74E
 * Original: 0x004AE74E - 0x004AE764 (22 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AE74E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004AE74E: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(ecx + 8));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004AE75E; /* jne: not equal / not zero */

loc_004AE756: ;
    _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFF8u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x004AE75Eu); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004AE75E: ;
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004AE764
 * Original: 0x004AE764 - 0x004AE769 (5 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AE764(void)
{

loc_004AE764: ;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004AE769
 * Original: 0x004AE769 - 0x004AE77C (19 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AE769(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004AE769: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x4C); PUSH32(esp, 0x004AE772u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004AE76Fu); } /* indirect call */
    }

loc_004AE772: ;
    SET_LO8(eax, LO8(eax) - 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004AE77C
 * Original: 0x004AE77C - 0x004AE7A8 (44 bytes, 18 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AE77C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004AE77C: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x114); PUSH32(esp, 0x004AE78Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004AE785u); } /* indirect call */
    }

loc_004AE78B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004AE7A1; /* jne: not equal / not zero */

loc_004AE78F: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x100); PUSH32(esp, 0x004AE799u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004AE793u); } /* indirect call */
    }

loc_004AE799: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004AE7A1; /* jne: not equal / not zero */

loc_004AE79D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_004AE7A4;

loc_004AE7A1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_004AE7A4: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004AE7A8
 * Original: 0x004AE7A8 - 0x004AE7B4 (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AE7A8(void)
{

loc_004AE7A8: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x004AE7B1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004AE7AEu); } /* indirect call */
    }

loc_004AE7B1: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004AE7B4
 * Original: 0x004AE7B4 - 0x004AE7C0 (12 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AE7B4(void)
{

loc_004AE7B4: ;
    eax = MEM32(esp + 0x10);
    MEM8(eax + 0xA8) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_004AE7C0
 * Original: 0x004AE7C0 - 0x004AE7CC (12 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AE7C0(void)
{

loc_004AE7C0: ;
    eax = MEM32(esp + 0xC);
    MEM8(eax + 0xA9) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_004AE7CC
 * Original: 0x004AE7CC - 0x004AE7DD (17 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AE7CC(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004AE7CC: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_004AE7DA; /* jge: greater or equal (signed >=) */

loc_004AE7D3: ;
    MEM8(0x90E410) = 0;

loc_004AE7DA: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004AE7DD
 * Original: 0x004AE7DD - 0x004AE7EE (17 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AE7DD(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004AE7DD: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_004AE7EB; /* jge: greater or equal (signed >=) */

loc_004AE7E4: ;
    MEM8(0x90E410) = 0;

loc_004AE7EB: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004AE7EE
 * Original: 0x004AE7EE - 0x004AE7F6 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AE7EE(void)
{

loc_004AE7EE: ;
    MEM8(ecx + 0xAC) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_004AE7F6
 * Original: 0x004AE7F6 - 0x004AE80E (24 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AE7F6(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004AE7F6: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004AE808; /* je: equal / zero */

loc_004AE803: ;
    PUSH32(esp, 0x004AE808u); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_004AE808: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004AE814
 * Original: 0x004AE814 - 0x004AE83E (42 bytes, 13 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AE814(void)
{

loc_004AE814: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004AE81Cu); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_004AE81C: ;
    PUSH32(esp, MEM32(esp + 0xC));
    MEM32(esi) = 0x864150;
    PUSH32(esp, 0x004AE82Bu); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004AE82B: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = esi + 8;
    PUSH32(esp, 0x004AE838u); RECOMP_ABI_CALL(0x004DB87Du, sub_004DB87D); /* call 0x004DB87D */

loc_004AE838: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004AE877
 * Original: 0x004AE877 - 0x004AE892 (27 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AE877(void)
{

loc_004AE877: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x004AE887u); RECOMP_ABI_CALL(0x004DD62Cu, sub_004DD62C); /* call 0x004DD62C */

loc_004AE887: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004AE892
 * Original: 0x004AE892 - 0x004AE8BC (42 bytes, 13 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AE892(void)
{

loc_004AE892: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004AE89Au); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_004AE89A: ;
    PUSH32(esp, MEM32(esp + 0xC));
    MEM32(esi) = 0x864154;
    PUSH32(esp, 0x004AE8A9u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004AE8A9: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = esi + 8;
    PUSH32(esp, 0x004AE8B6u); RECOMP_ABI_CALL(0x004DB87Du, sub_004DB87D); /* call 0x004DB87D */

loc_004AE8B6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004AE8D4
 * Original: 0x004AE8D4 - 0x004AE8F0 (28 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AE8D4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004AE8D4: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004AE8DCu); RECOMP_ABI_CALL(0x004E1670u, sub_004E1670); /* call 0x004E1670 */

loc_004AE8DC: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004AE8EA; /* je: equal / zero */

loc_004AE8E3: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004AE8E9u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004AE8E9: ;
    POP32(esp, ecx);

loc_004AE8EA: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004AE8F0
 * Original: 0x004AE8F0 - 0x004AE90C (28 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AE8F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004AE8F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004AE8F8u); RECOMP_ABI_CALL(0x004E21A4u, sub_004E21A4); /* call 0x004E21A4 */

loc_004AE8F8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004AE906; /* je: equal / zero */

loc_004AE8FF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004AE905u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004AE905: ;
    POP32(esp, ecx);

loc_004AE906: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004AE946
 * Original: 0x004AE946 - 0x004AE96C (38 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AE946(void)
{

loc_004AE946: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x30);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(eax + 0xAC));
    esi = ecx;
    PUSH32(esp, 0x004AE95Fu); RECOMP_ABI_CALL(0x005DE460u, sub_005DE460); /* call 0x005DE460 */

loc_004AE95F: ;
    POP32(esp, ecx);
    ecx = esi + -8;
    PUSH32(esp, 0x004AE968u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004AE968: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004AE96C
 * Original: 0x004AE96C - 0x004AE992 (38 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AE96C(void)
{

loc_004AE96C: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x30);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(eax + 0xAC));
    esi = ecx;
    PUSH32(esp, 0x004AE985u); RECOMP_ABI_CALL(0x005DE460u, sub_005DE460); /* call 0x005DE460 */

loc_004AE985: ;
    POP32(esp, ecx);
    ecx = esi + -8;
    PUSH32(esp, 0x004AE98Eu); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004AE98E: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004AE992
 * Original: 0x004AE992 - 0x004AEA51 (191 bytes, 78 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004AE992(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004AE992: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFF94u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0xFFFFFF94u (32-bit) */
    PUSH32(esp, edi);
    if (CMP_L(_fas, _fbs)) goto loc_004AEA3D; /* jl: less (signed <) */

loc_004AE9A4: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFF95u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0xFFFFFF95u (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_004AEA39; /* jle: less or equal (signed <=) */

loc_004AE9AE: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004AEA3D; /* jne: not equal / not zero */

loc_004AE9B7: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AE9BCu); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004AE9BC: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x28);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AE9C6u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004AE9C6: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004AE9D9; /* je: equal / zero */

loc_004AE9CD: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x14);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AE9D7u); RECOMP_ABI_CALL(0x004AE892u, sub_004AE892); /* call 0x004AE892 */

loc_004AE9D7: ;
    goto loc_004AE9DB;

loc_004AE9D9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004AE9DB: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AE9E1u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004AE9E1: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AE9E8u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004AE9E8: ;
    edi = eax;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004AE9EC: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AE9F5u); RECOMP_ABI_CALL(0x005DE490u, sub_005DE490); /* call 0x005DE490 */

loc_004AE9F5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004AEA1D; /* je: equal / zero */

loc_004AE9FB: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004AEA1D; /* je: equal / zero */

loc_004AE9FF: ;
    ecx = MEM32(0x90E7AC);
    ecx = MEM32(ecx + 0x18);
    ecx = MEM32(ecx + 0x34);
    ecx = MEM32(ecx + 0x28);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004AEA14u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004AEA11u); } /* indirect call */
    }

loc_004AEA14: ;
    PUSH32(esp, eax);
    ecx = edi + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AEA1Du); RECOMP_ABI_CALL(0x004DB91Cu, sub_004DB91C); /* call 0x004DB91C */

loc_004AEA1D: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x14 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004AE9EC; /* jl: less (signed <) */

loc_004AEA23: ;
    _fa = (uint32_t)(MEM32(edi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x14), ebx (32-bit) */
    esi = MEM32(ebp + 0x14);
    ecx = MEM32(esi + 0xC);
    eax = MEM32(ecx);
    if (CMP_BE(_fa, _fb)) goto loc_004AEA35; /* jbe: below or equal (unsigned <=) */

loc_004AEA30: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004AEA33u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004AEA31u); } /* indirect call */
    }

loc_004AEA33: ;
    goto loc_004AEA49;

loc_004AEA35: ;
    PUSH32(esp, 1);
    goto loc_004AEA46;

loc_004AEA39: ;
    PUSH32(esp, 3);
    goto loc_004AEA3E;

loc_004AEA3D: ;
    PUSH32(esp, ebx);

loc_004AEA3E: ;
    esi = MEM32(ebp + 0x14);
    ecx = MEM32(esi + 0xC);
    eax = MEM32(ecx);

loc_004AEA46: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004AEA49u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004AEA46u); } /* indirect call */
    }

loc_004AEA49: ;
    POP32(esp, edi);
    MEM8(esi + 0x10) = LO8(ebx);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_004AEAE6
 * Original: 0x004AEAE6 - 0x004AEB28 (66 bytes, 29 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AEAE6(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004AEAE6: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x30);
    ecx = MEM32(esp + 4);
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(eax + 0xAC);
    eax = MEM32(ecx);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004AEB04u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004AEB01u); } /* indirect call */
    }

loc_004AEB04: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004AEB0Bu); RECOMP_ABI_CALL(0x005DEAF0u, sub_005DEAF0); /* call 0x005DEAF0 */

loc_004AEB0B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004AEB21; /* je: equal / zero */

loc_004AEB11: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004AEB19u); RECOMP_ABI_CALL(0x005DE600u, sub_005DE600); /* call 0x005DE600 */

loc_004AEB19: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004AEB21; /* je: equal / zero */

loc_004AEB1F: ;
    SET_LO8(ebx, LO8(ebx) + 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */

loc_004AEB21: ;
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004AEB28
 * Original: 0x004AEB28 - 0x004AEB51 (41 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AEB28(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004AEB28: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 0xC));
    edi = ecx;
    esi = edi + 0x9C;
    ecx = MEM32(esi);
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004AEB3Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004AEB3Au); } /* indirect call */
    }

loc_004AEB3C: ;
    MEM32(esi) = MEM32(esi) & 0;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0);
    ecx = edi + 0x98;
    PUSH32(esp, 0x004AEB4Cu); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004AEB4C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004AEB51
 * Original: 0x004AEB51 - 0x004AEB7B (42 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AEB51(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004AEB51: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 0xC));
    edi = ecx;
    esi = edi + 0x9C;
    ecx = MEM32(esi);
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004AEB66u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004AEB63u); } /* indirect call */
    }

loc_004AEB66: ;
    MEM32(esi) = MEM32(esi) & 0;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0);
    ecx = edi + 0x98;
    PUSH32(esp, 0x004AEB76u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004AEB76: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004AEB7B
 * Original: 0x004AEB7B - 0x004AEC3F (196 bytes, 77 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AEB7B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004AEB7B: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    ecx = MEM32(0x90E7AC);
    eax = MEM32(ecx + 0x18);
    eax = MEM32(eax + 0x30);
    PUSH32(esp, ebp);
    ebp = MEM32(eax + 0xAC);
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x4C); PUSH32(esp, 0x004AEB98u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004AEB95u); } /* indirect call */
    }

loc_004AEB98: ;
    esi = MEM32(esp + 0x14);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(0x8631C0));
    edi = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004AEBABu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004AEBA8u); } /* indirect call */
    }

loc_004AEBAB: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004AEBB1u); RECOMP_ABI_CALL(0x005CFF90u, sub_005CFF90); /* call 0x005CFF90 */

loc_004AEBB1: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = MEM32(esi);
    ecx = esi;
    if (CMP_NE(_fa, _fb)) goto loc_004AEBE5; /* jne: not equal / not zero */

loc_004AEBBB: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x004AEBBEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004AEBBBu); } /* indirect call */
    }

loc_004AEBBE: ;
    edi = eax;
    esi = ebx + 0xA0;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004AEC38; /* je: equal / zero */

loc_004AEBCA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x004AEBD8u); RECOMP_ABI_CALL(0x005DEDD0u, sub_005DEDD0); /* call 0x005DEDD0 */

loc_004AEBD8: ;
    POP32(esp, ecx);
    MEM32(esi) = edi;
    POP32(esp, ecx);
    MEM8(0x90E410) = 1;
    goto loc_004AEC38;

loc_004AEBE5: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(0x863194));
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004AEBEEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004AEBEBu); } /* indirect call */
    }

loc_004AEBEE: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004AEBF4u); RECOMP_ABI_CALL(0x005CFF90u, sub_005CFF90); /* call 0x005CFF90 */

loc_004AEBF4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_004AEC38; /* jne: not equal / not zero */

loc_004AEBFA: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x004AEC01u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004AEBFEu); } /* indirect call */
    }

loc_004AEC01: ;
    esi = eax;
    eax = ebx + 0xA4;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004AEC38; /* je: equal / zero */

loc_004AEC0D: ;
    MEM32(eax) = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(0x863188));
    eax = MEM32(edi);
    PUSH32(esp, MEM32(0x863184));
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004AEC22u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004AEC1Fu); } /* indirect call */
    }

loc_004AEC22: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x004AEC2Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004AEC2Au); } /* indirect call */
    }

loc_004AEC2D: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x004AEC35u); RECOMP_ABI_CALL(0x005DEF20u, sub_005DEF20); /* call 0x005DEF20 */

loc_004AEC35: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004AEC38: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004AEC3F
 * Original: 0x004AEC3F - 0x004AECD9 (154 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004AEC3F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004AEC3F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8E19F0);
    MEM32(ebp + -4) = eax;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x30);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0xAC);
    PUSH32(esp, edi);
    edi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AEC68u); RECOMP_ABI_CALL(0x004DC9A2u, sub_004DC9A2); /* call 0x004DC9A2 */

loc_004AEC68: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x004AEC6Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004AEC6Cu); } /* indirect call */
    }

loc_004AEC6E: ;
    _fa = (uint32_t)(MEM8(0x90E410)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x90E410), 0 (8-bit) */
    ebx = eax;
    if (CMP_NE(_fa, _fb)) goto loc_004AEC95; /* jne: not equal / not zero */

loc_004AEC79: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(edi + 0xA0)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0xA0), 1 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AEC8Cu); RECOMP_ABI_CALL(0x005DEDD0u, sub_005DEDD0); /* call 0x005DEDD0 */

loc_004AEC8C: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM8(0x90E410) = 1;

loc_004AEC95: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x8638A0);
    eax = ebp + -20;
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    MEM8(ebp + -20) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AECABu); RECOMP_ABI_CALL(0x005E4200u, sub_005E4200); /* call 0x005E4200 */

loc_004AECAB: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AECB2u); RECOMP_ABI_CALL(0x005DED40u, sub_005DED40); /* call 0x005DED40 */

loc_004AECB2: ;
    eax = ebp + -20;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AECBCu); RECOMP_ABI_CALL(0x005DEDC0u, sub_005DEDC0); /* call 0x005DEDC0 */

loc_004AECBC: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AECC9u); RECOMP_ABI_CALL(0x005DEE20u, sub_005DEE20); /* call 0x005DEE20 */

loc_004AECC9: ;
    ecx = MEM32(ebp + -4);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AECD7u); RECOMP_ABI_CALL(0x005CFF80u, sub_005CFF80); /* call 0x005CFF80 */

loc_004AECD7: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004AECD9
 * Original: 0x004AECD9 - 0x004AED01 (40 bytes, 12 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AECD9(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004AECD9: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    ecx = MEM32(esp + 4);
    eax = MEM32(eax + 0x30);
    PUSH32(esp, 0x10);
    PUSH32(esp, MEM32(esp + 0xC));
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax + ecx + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004AECFBu); RECOMP_ABI_CALL(0x004E367Fu, sub_004E367F); /* call 0x004E367F */

loc_004AECFB: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004AED01
 * Original: 0x004AED01 - 0x004AED1A (25 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AED01(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004AED01: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    ecx = MEM32(esp + 4);
    eax = MEM32(eax + 0x30);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax + ecx + 8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004AED1A
 * Original: 0x004AED1A - 0x004AED32 (24 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AED1A(void)
{

loc_004AED1A: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x30);
    ecx = MEM32(esp + 4);
    MEM32(eax + 0xA8) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004AED44
 * Original: 0x004AED44 - 0x004AED7F (59 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AED44(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004AED44: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x30);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0xAC);
    ebx = ecx;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004AED5C: ;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x004AED64u); RECOMP_ABI_CALL(0x004AED01u, sub_004AED01); /* call 0x004AED01 */

loc_004AED64: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004AED75; /* je: equal / zero */

loc_004AED69: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x004AED72u); RECOMP_ABI_CALL(0x005E0BC0u, sub_005E0BC0); /* call 0x005E0BC0 */

loc_004AED72: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004AED75: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004AED5C; /* jb: below (unsigned <) */

loc_004AED7B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_004AED7F
 * Original: 0x004AED7F - 0x004AEDB3 (52 bytes, 26 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AED7F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004AED7F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ebx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi = ecx;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004AED89: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x004AED91u); RECOMP_ABI_CALL(0x004AED01u, sub_004AED01); /* call 0x004AED01 */

loc_004AED91: ;
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, eax);
    PUSH32(esp, 0x004AED9Bu); RECOMP_ABI_CALL(0x004ABAD7u, sub_004ABAD7); /* call 0x004ABAD7 */

loc_004AED9B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_004AEDA9; /* jne: not equal / not zero */

loc_004AEDA1: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004AED89; /* jb: below (unsigned <) */

loc_004AEDA7: ;
    goto loc_004AEDAB;

loc_004AEDA9: ;
    ebx = esi;

loc_004AEDAB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004AEDB3
 * Original: 0x004AEDB3 - 0x004AEDD5 (34 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AEDB3(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004AEDB3: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 8));
    esi = ecx + 0x50;
    ecx = esi;
    PUSH32(esp, 0x004AEDC2u); RECOMP_ABI_CALL(0x004DB9F8u, sub_004DB9F8); /* call 0x004DB9F8 */

loc_004AEDC2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004AEDD1; /* jne: not equal / not zero */

loc_004AEDC6: ;
    PUSH32(esp, MEM32(esp + 8));
    ecx = esi;
    PUSH32(esp, 0x004AEDD1u); RECOMP_ABI_CALL(0x004DB91Cu, sub_004DB91C); /* call 0x004DB91C */

loc_004AEDD1: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004AEDDD
 * Original: 0x004AEDDD - 0x004AEE08 (43 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AEDDD(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004AEDDD: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x30);
    ecx = MEM32(esp + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(eax + 0xAC);
    eax = MEM32(ecx);
    PUSH32(esp, 2);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004AEDFAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004AEDF7u); } /* indirect call */
    }

loc_004AEDFA: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004AEE01u); RECOMP_ABI_CALL(0x005E0BC0u, sub_005E0BC0); /* call 0x005E0BC0 */

loc_004AEE01: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004AEE08
 * Original: 0x004AEE08 - 0x004AEE33 (43 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AEE08(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004AEE08: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x30);
    ecx = MEM32(esp + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(eax + 0xAC);
    eax = MEM32(ecx);
    PUSH32(esp, 8);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004AEE25u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004AEE22u); } /* indirect call */
    }

loc_004AEE25: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004AEE2Cu); RECOMP_ABI_CALL(0x005E0BC0u, sub_005E0BC0); /* call 0x005E0BC0 */

loc_004AEE2C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004AEE33
 * Original: 0x004AEE33 - 0x004AEF76 (323 bytes, 130 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004AEE33(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004AEE33: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi);
    MEM32(ebp + -4) = ecx;
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x004AEE47u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004AEE44u); } /* indirect call */
    }

loc_004AEE47: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004AEF19; /* jne: not equal / not zero */

loc_004AEE4F: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004AEE58u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004AEE55u); } /* indirect call */
    }

loc_004AEE58: ;
    ecx = MEM32(0x90E7AC);
    ecx = MEM32(ecx + 0x18);
    ecx = MEM32(ecx + 0x30);
    esi = MEM32(ecx + 0xA8);
    ecx = MEM32(ebp + -4);
    PUSH32(esp, eax);
    MEM32(ebp + -12) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AEE76u); RECOMP_ABI_CALL(0x004AED7Fu, sub_004AED7F); /* call 0x004AED7F */

loc_004AEE76: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(ebp + -8) = edi;
    if (CMP_GE(_fas, _fbs)) goto loc_004AEF1E; /* jge: greater or equal (signed >=) */

loc_004AEE83: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x30);
    edi = MEM32(eax + 0xAC);
    PUSH32(esp, 0x40);
    PUSH32(esp, MEM32(ebp + -12));
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AEE9Fu); RECOMP_ABI_CALL(0x005E0BC0u, sub_005E0BC0); /* call 0x005E0BC0 */

loc_004AEE9F: ;
    ecx = MEM32(ebp + -4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AEEABu); RECOMP_ABI_CALL(0x004AED01u, sub_004AED01); /* call 0x004AED01 */

loc_004AEEAB: ;
    ebx = eax;
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004AEEF3; /* je: equal / zero */

loc_004AEEB2: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AEEB9u); RECOMP_ABI_CALL(0x005DEAF0u, sub_005DEAF0); /* call 0x005DEAF0 */

loc_004AEEB9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(ebp + 8) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_004AEEF3; /* je: equal / zero */

loc_004AEEC2: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AEECBu); RECOMP_ABI_CALL(0x005DEB80u, sub_005DEB80); /* call 0x005DEB80 */

loc_004AEECB: ;
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AEED3u); RECOMP_ABI_CALL(0x005DE620u, sub_005DE620); /* call 0x005DE620 */

loc_004AEED3: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004AEEF3; /* jne: not equal / not zero */

loc_004AEEDA: ;
    PUSH32(esp, 0x3B);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AEEE4u); RECOMP_ABI_CALL(0x005DE600u, sub_005DE600); /* call 0x005DE600 */

loc_004AEEE4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_004AEEF3; /* jne: not equal / not zero */

loc_004AEEEA: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AEEF1u); RECOMP_ABI_CALL(0x005DFA40u, sub_005DFA40); /* call 0x005DFA40 */

loc_004AEEF1: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_004AEEF3: ;
    edi = MEM32(ebp + -8);

loc_004AEEF6: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004AEF06; /* je: equal / zero */

loc_004AEEFA: ;
    PUSH32(esp, MEM32(ebp + -12));
    ecx = MEM32(ebp + -4);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AEF06u); RECOMP_ABI_CALL(0x004AECD9u, sub_004AECD9); /* call 0x004AECD9 */

loc_004AEF06: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA (32-bit) */
    POP32(esp, edi);
    POP32(esp, ebx);
    if (CMP_B(_fa, _fb)) goto loc_004AEF10; /* jb: below (unsigned <) */

loc_004AEF0E: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004AEF10: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AEF19u); RECOMP_ABI_CALL(0x004AED1Au, sub_004AED1A); /* call 0x004AED1A */

loc_004AEF19: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

loc_004AEF1E: ;
    PUSH32(esp, 0xA);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = edi + 1;
    POP32(esp, ecx);
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004AEF30; /* jne: not equal / not zero */

loc_004AEF2C: ;
    esi = edi;
    goto loc_004AEF06;

loc_004AEF30: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_004AEF55; /* jge: greater or equal (signed >=) */

loc_004AEF34: ;
    edx = edi;

loc_004AEF36: ;
    ecx = MEM32(ebp + -4);
    ebx = edx + 1;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AEF42u); RECOMP_ABI_CALL(0x004AED01u, sub_004AED01); /* call 0x004AED01 */

loc_004AEF42: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AEF4Cu); RECOMP_ABI_CALL(0x004AECD9u, sub_004AECD9); /* call 0x004AECD9 */

loc_004AEF4C: ;
    edx = ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004AEF36; /* jl: less (signed <) */

loc_004AEF52: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_004AEEF6;

loc_004AEF55: ;
    if (CMP_LE(_fas, _fbs)) goto loc_004AEEF6; /* jle: less or equal (signed <=) */

loc_004AEF57: ;
    ebx = edi;

loc_004AEF59: ;
    ecx = MEM32(ebp + -4);
    eax = ebx + -1;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AEF65u); RECOMP_ABI_CALL(0x004AED01u, sub_004AED01); /* call 0x004AED01 */

loc_004AEF65: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AEF6Fu); RECOMP_ABI_CALL(0x004AECD9u, sub_004AECD9); /* call 0x004AECD9 */

loc_004AEF6F: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_004AEF59; /* jg: greater (signed >) */

loc_004AEF74: ;
    goto loc_004AEEF6;

}

/**
 * sub_004AEF76
 * Original: 0x004AEF76 - 0x004AEF94 (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AEF76(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004AEF76: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x30);
    PUSH32(esp, MEM32(eax + 0xAC));
    PUSH32(esp, 0x004AEF8Cu); RECOMP_ABI_CALL(0x005DE440u, sub_005DE440); /* call 0x005DE440 */

loc_004AEF8C: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    POP32(esp, ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_004AEF94
 * Original: 0x004AEF94 - 0x004AEFD6 (66 bytes, 33 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AEF94(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004AEF94: ;
    PUSH32(esp, ebx);
    ebx = MEM32(ecx + 0x5C);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004AEFC9; /* jbe: below or equal (unsigned <=) */

loc_004AEFA1: ;
    ebp = ecx + 0x50;

loc_004AEFA4: ;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0x004AEFACu); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004AEFAC: ;
    esi = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004AEFB5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004AEFB2u); } /* indirect call */
    }

loc_004AEFB5: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 0x14));
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004AEFC0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004AEFBDu); } /* indirect call */
    }

loc_004AEFC0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004AEFD2; /* je: equal / zero */

loc_004AEFC4: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004AEFA4; /* jb: below (unsigned <) */

loc_004AEFC9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004AEFCB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_004AEFD2: ;
    eax = esi;
    goto loc_004AEFCB;

}

/**
 * sub_004AEFD6
 * Original: 0x004AEFD6 - 0x004AF041 (107 bytes, 46 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AEFD6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004AEFD6: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x34);
    ecx = MEM32(eax + 0x2C);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x67616D65);
    MEM32(esp + 0xC) = ebx;
    PUSH32(esp, 0x004AEFF7u); RECOMP_ABI_CALL(0x004B08CFu, sub_004B08CF); /* call 0x004B08CF */

loc_004AEFF7: ;
    edi = MEM32(eax + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004AF039; /* jbe: below or equal (unsigned <=) */

loc_004AEFFE: ;
    PUSH32(esp, ebp);
    ebp = eax + 8;
    PUSH32(esp, esi);

loc_004AF003: ;
    PUSH32(esp, ebx);
    ecx = ebp;
    PUSH32(esp, 0x004AF00Bu); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004AF00B: ;
    esi = eax;
    ecx = esi + 8;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004AF014u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004AF012u); } /* indirect call */
    }

loc_004AF014: ;
    _fa = (uint32_t)(MEM8(esi + 0x15)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x15), 0xF (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004AF02C; /* je: equal / zero */

loc_004AF01A: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x004AF021u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004AF01Eu); } /* indirect call */
    }

loc_004AF021: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004AF02C; /* jne: not equal / not zero */

loc_004AF025: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004AF003; /* jb: below (unsigned <) */

loc_004AF02A: ;
    goto loc_004AF037;

loc_004AF02C: ;
    ecx = esi + 8;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004AF033u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004AF031u); } /* indirect call */
    }

loc_004AF033: ;
    MEM32(esp + 0x10) = eax;

loc_004AF037: ;
    POP32(esp, esi);
    POP32(esp, ebp);

loc_004AF039: ;
    eax = MEM32(esp + 8);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004AF041
 * Original: 0x004AF041 - 0x004AF0C9 (136 bytes, 42 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AF041(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004AF041: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x30);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0xAC);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004AF059u); RECOMP_ABI_CALL(0x005DE430u, sub_005DE430); /* call 0x005DE430 */

loc_004AF059: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_004AF074; /* jne: not equal / not zero */

loc_004AF05F: ;
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004AF06Fu); RECOMP_ABI_CALL(0x005DF020u, sub_005DF020); /* call 0x005DF020 */

loc_004AF06F: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_004AF089;

loc_004AF074: ;
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x004AF086u); RECOMP_ABI_CALL(0x004E367Fu, sub_004E367F); /* call 0x004E367F */

loc_004AF086: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004AF089: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_004AF0C9
 * Original: 0x004AF0C9 - 0x004AF0E1 (24 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AF0C9(void)
{

loc_004AF0C9: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x30);
    PUSH32(esp, MEM32(eax + 0xAC));
    PUSH32(esp, 0x004AF0DFu); RECOMP_ABI_CALL(0x005DFAF0u, sub_005DFAF0); /* call 0x005DFAF0 */

loc_004AF0DF: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004AF0E1
 * Original: 0x004AF0E1 - 0x004AF11B (58 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AF0E1(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004AF0E1: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x30);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0xAC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x004AF0F9u); RECOMP_ABI_CALL(0x004DC9A2u, sub_004DC9A2); /* call 0x004DC9A2 */

loc_004AF0F9: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x004AF0FFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004AF0FDu); } /* indirect call */
    }

loc_004AF0FF: ;
    edi = eax;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004AF108u); RECOMP_ABI_CALL(0x005DED40u, sub_005DED40); /* call 0x005DED40 */

loc_004AF108: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 5);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004AF115u); RECOMP_ABI_CALL(0x005DEE20u, sub_005DEE20); /* call 0x005DEE20 */

loc_004AF115: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004AF11B
 * Original: 0x004AF11B - 0x004AF14E (51 bytes, 17 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AF11B(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004AF11B: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x30);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0xAC);
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, esi);
    PUSH32(esp, 0x004AF137u); RECOMP_ABI_CALL(0x005DED40u, sub_005DED40); /* call 0x005DED40 */

loc_004AF137: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004AF147u); RECOMP_ABI_CALL(0x005DEE20u, sub_005DEE20); /* call 0x005DEE20 */

loc_004AF147: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004AF14E
 * Original: 0x004AF14E - 0x004AF164 (22 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AF14E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004AF14E: ;
    PUSH32(esp, MEM32(esp + 4));
    PUSH32(esp, 0x004AF157u); RECOMP_ABI_CALL(0x004AED7Fu, sub_004AED7F); /* call 0x004AED7F */

loc_004AF157: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(ecx));
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004AF164
 * Original: 0x004AF164 - 0x004AF234 (208 bytes, 72 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004AF164(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004AF164: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8E19F0);
    MEM32(ebp + -4) = eax;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x30);
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 0xAC);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    edi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AF190u); RECOMP_ABI_CALL(0x005DE430u, sub_005DE430); /* call 0x005DE430 */

loc_004AF190: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004AF228; /* je: equal / zero */

loc_004AF19A: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x28);
    eax = MEM32(eax + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x70617274);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AF1B4u); RECOMP_ABI_CALL(0x005E2630u, sub_005E2630); /* call 0x005E2630 */

loc_004AF1B4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x864174);
    eax = ebp + -68;
    PUSH32(esp, 0x40);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AF1C5u); RECOMP_ABI_CALL(0x004E3665u, sub_004E3665); /* call 0x004E3665 */

loc_004AF1C5: ;
    ecx = MEM32(0x90E7AC);
    eax = MEM32(ecx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x004AF1D3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004AF1D0u); } /* indirect call */
    }

loc_004AF1D3: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x004AF1DAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004AF1D7u); } /* indirect call */
    }

loc_004AF1DA: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x80);
    ecx = ebp + -196;
    PUSH32(esp, ecx);
    esi = eax;
    eax = MEM32(esi);
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x864164);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x004AF1F9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004AF1F6u); } /* indirect call */
    }

loc_004AF1F9: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x864158);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004AF207u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004AF204u); } /* indirect call */
    }

loc_004AF207: ;
    esi = eax;
    eax = ebp + -68;
    ecx = edi + 0x34;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004AF215u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004AF212u); } /* indirect call */
    }

loc_004AF215: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    eax = ebp + -196;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AF224u); RECOMP_ABI_CALL(0x005E1920u, sub_005E1920); /* call 0x005E1920 */

loc_004AF224: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);

loc_004AF228: ;
    ecx = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AF232u); RECOMP_ABI_CALL(0x005CFF80u, sub_005CFF80); /* call 0x005CFF80 */

loc_004AF232: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004AF234
 * Original: 0x004AF234 - 0x004AF25A (38 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AF234(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004AF234: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx + 8;
    ebx = MEM32(esi + 0xC);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004AF256; /* jbe: below or equal (unsigned <=) */

loc_004AF243: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x004AF24Bu); RECOMP_ABI_CALL(0x004DD726u, sub_004DD726); /* call 0x004DD726 */

loc_004AF24B: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004AF251u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004AF24Fu); } /* indirect call */
    }

loc_004AF251: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004AF243; /* jb: below (unsigned <) */

loc_004AF256: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_004AF25A
 * Original: 0x004AF25A - 0x004AF26A (16 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AF25A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004AF25A: ;
    ecx = MEM32(esp + 0x10);
    MEM8(ecx + 0xAB) = 0;
    g_seh_ebp = ebp; sub_004AF234(); return; /* tail jmp 0x004AF234 */

}

/**
 * sub_004AF26A
 * Original: 0x004AF26A - 0x004AF299 (47 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AF26A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004AF26A: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x30);
    PUSH32(esp, MEM32(eax + 0xAC));
    PUSH32(esp, 0x004AF280u); RECOMP_ABI_CALL(0x005DE430u, sub_005DE430); /* call 0x005DE430 */

loc_004AF280: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    POP32(esp, ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(8)) >> 32) & 1);
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_004DB960(); return; /* tail jmp 0x004DB960 */

}

/**
 * sub_004AF299
 * Original: 0x004AF299 - 0x004AF2F4 (91 bytes, 27 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AF299(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004AF299: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x004AF2A2u); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_004AF2A2: ;
    edi = esi + 8;
    ecx = edi;
    PUSH32(esp, 0x004AF2ACu); RECOMP_ABI_CALL(0x004E30ECu, sub_004E30EC); /* call 0x004E30EC */

loc_004AF2AC: ;
    eax = MEM32(esp + 0x10);
    ecx = esi;
    MEM32(esi) = 0x864188;
    MEM32(edi) = 0x864178;
    MEM32(esi + 0xC) = eax;
    MEM8(esi + 0x10) = 1;
    PUSH32(esp, 0x004AF2CAu); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_004AF2CA: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x30);
    PUSH32(esp, esi);
    PUSH32(esp, 0x4AE992);
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, MEM32(eax + 0xAC));
    PUSH32(esp, 0x004AF2EAu); RECOMP_ABI_CALL(0x005DF550u, sub_005DF550); /* call 0x005DF550 */

loc_004AF2EA: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004AF2F4
 * Original: 0x004AF2F4 - 0x004AF310 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AF2F4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004AF2F4: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004AF2FCu); RECOMP_ABI_CALL(0x004AF310u, sub_004AF310); /* call 0x004AF310 */

loc_004AF2FC: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004AF30A; /* je: equal / zero */

loc_004AF303: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004AF309u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004AF309: ;
    POP32(esp, ecx);

loc_004AF30A: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004AF310
 * Original: 0x004AF310 - 0x004AF32F (31 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AF310(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004AF310: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 8;
    MEM32(esi) = 0x864188;
    MEM32(ecx) = 0x864178;
    PUSH32(esp, 0x004AF327u); RECOMP_ABI_CALL(0x004E310Cu, sub_004E310C); /* call 0x004E310C */

loc_004AF327: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004DD576(); return; /* tail jmp 0x004DD576 */

}

/**
 * sub_004AF32F
 * Original: 0x004AF32F - 0x004AF337 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AF32F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004AF32F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004AF2F4(); return; /* tail jmp 0x004AF2F4 */

}

/**
 * sub_004AF337
 * Original: 0x004AF337 - 0x004AF354 (29 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AF337(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004AF337: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), 7 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004AF345; /* je: equal / zero */

loc_004AF33E: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), 8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004AF351; /* jne: not equal / not zero */

loc_004AF345: ;
    PUSH32(esp, MEM32(esp + 4));
    _fb = (uint32_t)(0xFFFFFFD4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFD4u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x004AF351u); RECOMP_ABI_CALL(0x004AEB7Bu, sub_004AEB7B); /* call 0x004AEB7B */

loc_004AF351: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004AF354
 * Original: 0x004AF354 - 0x004AF726 (978 bytes, 308 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004AF354(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004AF354: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AF362u); RECOMP_ABI_CALL(0x004B89DAu, sub_004B89DA); /* call 0x004B89DA */

loc_004AF362: ;
    ebx = esi + 0x28;
    ecx = ebx;
    MEM32(esi + 0x24) = 0x863F20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AF373u); RECOMP_ABI_CALL(0x004B898Cu, sub_004B898C); /* call 0x004B898C */

loc_004AF373: ;
    edi = esi + 0x2C;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AF37Du); RECOMP_ABI_CALL(0x004AD96Au, sub_004AD96A); /* call 0x004AD96A */

loc_004AF37D: ;
    ecx = esi + 0x30;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AF385u); RECOMP_ABI_CALL(0x004DCA26u, sub_004DCA26); /* call 0x004DCA26 */

loc_004AF385: ;
    MEM32(esi) = 0x8641BC;
    MEM32(esi + 0x24) = 0x8641AC;
    MEM32(ebx) = 0x8641A0;
    MEM32(edi) = 0x864198;
    MEM32(esi + 0x30) = 0x86418C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AF3AAu); RECOMP_ABI_CALL(0x004DC96Bu, sub_004DC96B); /* call 0x004DC96B */

loc_004AF3AA: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    ecx = esi + 0x34;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AF3B6u); RECOMP_ABI_CALL(0x004DD9B8u, sub_004DD9B8); /* call 0x004DD9B8 */

loc_004AF3B6: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    PUSH32(esp, 8);
    ecx = esi + 0x48;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AF3C3u); RECOMP_ABI_CALL(0x004AE814u, sub_004AE814); /* call 0x004AE814 */

loc_004AF3C3: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0xA0);
    ecx = esi + 0x70;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AF3D1u); RECOMP_ABI_CALL(0x004ADE8Au, sub_004ADE8A); /* call 0x004ADE8A */

loc_004AF3D1: ;
    MEM32(esi + 0x98) = ebx;
    MEM32(esi + 0x9C) = ebx;
    MEM32(esi + 0xA4) = MEM32(esi + 0xA4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(esi + 0xA4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0xA0) = ebx;
    MEM8(esi + 0xA8) = LO8(ebx);
    MEM8(esi + 0xA9) = LO8(ebx);
    MEM8(esi + 0xAA) = LO8(ebx);
    MEM8(esi + 0xAB) = LO8(ebx);
    MEM8(esi + 0xAC) = LO8(ebx);
    MEM32(esi + 0xB0) = ebx;
    MEM32(esi + 0xB4) = ebx;
    MEM32(esi + 0xB8) = ebx;
    MEM32(esi + 0xBC) = ebx;
    MEM32(esi + 0xC0) = ebx;
    MEM32(esi + 0xC4) = ebx;
    MEM8(0x90E410) = LO8(ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AF437u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004AF437: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x1C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AF441u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004AF441: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004AF451; /* je: equal / zero */

loc_004AF448: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AF44Fu); RECOMP_ABI_CALL(0x004AE5F4u, sub_004AE5F4); /* call 0x004AE5F4 */

loc_004AF44F: ;
    goto loc_004AF453;

loc_004AF451: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004AF453: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AF459u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004AF459: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AF460u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004AF460: ;
    ecx = esi + 0x50;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AF469u); RECOMP_ABI_CALL(0x004DB91Cu, sub_004DB91C); /* call 0x004DB91C */

loc_004AF469: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AF46Eu); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004AF46E: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x1C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AF478u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004AF478: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004AF488; /* je: equal / zero */

loc_004AF47F: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AF486u); RECOMP_ABI_CALL(0x004AE631u, sub_004AE631); /* call 0x004AE631 */

loc_004AF486: ;
    goto loc_004AF48A;

loc_004AF488: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004AF48A: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AF490u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004AF490: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AF497u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004AF497: ;
    PUSH32(esp, eax);
    ecx = esi + 0x50;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AF4A0u); RECOMP_ABI_CALL(0x004DB91Cu, sub_004DB91C); /* call 0x004DB91C */

loc_004AF4A0: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AF4A5u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004AF4A5: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x1C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AF4AFu); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004AF4AF: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004AF4BF; /* je: equal / zero */

loc_004AF4B6: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AF4BDu); RECOMP_ABI_CALL(0x004AE66Au, sub_004AE66A); /* call 0x004AE66A */

loc_004AF4BD: ;
    goto loc_004AF4C1;

loc_004AF4BF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004AF4C1: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AF4C7u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004AF4C7: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AF4CEu); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004AF4CE: ;
    PUSH32(esp, eax);
    ecx = esi + 0x50;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AF4D7u); RECOMP_ABI_CALL(0x004DB91Cu, sub_004DB91C); /* call 0x004DB91C */

loc_004AF4D7: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AF4DCu); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004AF4DC: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x1C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AF4E6u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004AF4E6: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004AF4F6; /* je: equal / zero */

loc_004AF4ED: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AF4F4u); RECOMP_ABI_CALL(0x004AE6A3u, sub_004AE6A3); /* call 0x004AE6A3 */

loc_004AF4F4: ;
    goto loc_004AF4F8;

loc_004AF4F6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004AF4F8: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AF4FEu); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004AF4FE: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AF505u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004AF505: ;
    PUSH32(esp, eax);
    ecx = esi + 0x50;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AF50Eu); RECOMP_ABI_CALL(0x004DB91Cu, sub_004DB91C); /* call 0x004DB91C */

loc_004AF50E: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AF513u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004AF513: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x1C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AF51Du); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004AF51D: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004AF52D; /* je: equal / zero */

loc_004AF524: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AF52Bu); RECOMP_ABI_CALL(0x004AE6DCu, sub_004AE6DC); /* call 0x004AE6DC */

loc_004AF52B: ;
    goto loc_004AF52F;

loc_004AF52D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004AF52F: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AF535u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004AF535: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AF53Cu); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004AF53C: ;
    PUSH32(esp, eax);
    ecx = esi + 0x50;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AF545u); RECOMP_ABI_CALL(0x004DB91Cu, sub_004DB91C); /* call 0x004DB91C */

loc_004AF545: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AF54Au); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004AF54A: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x1C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AF554u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004AF554: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004AF564; /* je: equal / zero */

loc_004AF55B: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AF562u); RECOMP_ABI_CALL(0x004AE715u, sub_004AE715); /* call 0x004AE715 */

loc_004AF562: ;
    goto loc_004AF566;

loc_004AF564: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004AF566: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AF56Cu); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004AF56C: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AF573u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004AF573: ;
    PUSH32(esp, eax);
    ecx = esi + 0x50;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AF57Cu); RECOMP_ABI_CALL(0x004DB91Cu, sub_004DB91C); /* call 0x004DB91C */

loc_004AF57C: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x30);
    eax = MEM32(eax + 0xAC);
    PUSH32(esp, esi);
    PUSH32(esp, 0x4AE7B4);
    PUSH32(esp, eax);
    MEM32(ebp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AF59Cu); RECOMP_ABI_CALL(0x005DE4D0u, sub_005DE4D0); /* call 0x005DE4D0 */

loc_004AF59C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x4AE7C0);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AF5AAu); RECOMP_ABI_CALL(0x005DE4A0u, sub_005DE4A0); /* call 0x005DE4A0 */

loc_004AF5AA: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x4AF25A);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AF5B8u); RECOMP_ABI_CALL(0x005DE410u, sub_005DE410); /* call 0x005DE410 */

loc_004AF5B8: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x24);
    ecx = MEM32(eax + 0xC);
    edx = MEM32(ecx);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    eax = esi + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004AF5D4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004AF5D1u); } /* indirect call */
    }

loc_004AF5D4: ;
    PUSH32(esp, eax);
    ecx = esi + 0x98;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AF5E0u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004AF5E0: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, 1);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x863230);
    PUSH32(esp, 7);
    PUSH32(esp, 7);
    PUSH32(esp, MEM32(0x8631B0));
    PUSH32(esp, MEM32(0x86319C));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AF602u); RECOMP_ABI_CALL(0x004ADD1Eu, sub_004ADD1E); /* call 0x004ADD1E */

loc_004AF602: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi + 0xB0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AF611u); RECOMP_ABI_CALL(0x004AE877u, sub_004AE877); /* call 0x004AE877 */

loc_004AF611: ;
    ecx = MEM32(esi + 0xB0);
    eax = ebp + -4;
    PUSH32(esp, eax);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -4) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AF626u); RECOMP_ABI_CALL(0x004DD750u, sub_004DD750); /* call 0x004DD750 */

loc_004AF626: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x86324C);
    PUSH32(esp, 3);
    PUSH32(esp, 3);
    PUSH32(esp, MEM32(0x8631B4));
    PUSH32(esp, MEM32(0x86319C));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AF646u); RECOMP_ABI_CALL(0x004ADD1Eu, sub_004ADD1E); /* call 0x004ADD1E */

loc_004AF646: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi + 0xB4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AF655u); RECOMP_ABI_CALL(0x004AE877u, sub_004AE877); /* call 0x004AE877 */

loc_004AF655: ;
    ecx = MEM32(esi + 0xB4);
    eax = ebp + -4;
    PUSH32(esp, eax);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -4) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AF66Au); RECOMP_ABI_CALL(0x004DD750u, sub_004DD750); /* call 0x004DD750 */

loc_004AF66A: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0x863220);
    PUSH32(esp, 2);
    PUSH32(esp, 2);
    PUSH32(esp, MEM32(0x8631C0));
    PUSH32(esp, MEM32(0x86319C));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AF68Cu); RECOMP_ABI_CALL(0x004ADD1Eu, sub_004ADD1E); /* call 0x004ADD1E */

loc_004AF68C: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi + 0xB8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AF69Bu); RECOMP_ABI_CALL(0x004AE877u, sub_004AE877); /* call 0x004AE877 */

loc_004AF69B: ;
    ecx = MEM32(esi + 0xB8);
    eax = ebp + -4;
    PUSH32(esp, eax);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -4) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AF6B0u); RECOMP_ABI_CALL(0x004DD750u, sub_004DD750); /* call 0x004DD750 */

loc_004AF6B0: ;
    ecx = MEM32(0x90E7AC);
    edx = MEM32(ecx);
    eax = esi + 0x30;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x004AF6BEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004AF6BCu); } /* indirect call */
    }

loc_004AF6BE: ;
    ecx = MEM32(0x90E7AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x4C); PUSH32(esp, 0x004AF6C9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004AF6C6u); } /* indirect call */
    }

loc_004AF6C9: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(0x863194));
    edx = MEM32(eax);
    PUSH32(esp, MEM32(0x863184));
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x004AF6DCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004AF6D9u); } /* indirect call */
    }

loc_004AF6DC: ;
    ecx = ebp + -4;
    PUSH32(esp, ecx);
    ecx = eax + 8;
    MEM32(ebp + -4) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AF6EBu); RECOMP_ABI_CALL(0x004DD750u, sub_004DD750); /* call 0x004DD750 */

loc_004AF6EB: ;
    PUSH32(esp, 0xA);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AF6F5u); RECOMP_ABI_CALL(0x005DE320u, sub_005DE320); /* call 0x005DE320 */

loc_004AF6F5: ;
    PUSH32(esp, ebx);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x1E);
    PUSH32(esp, 0x1E);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AF70Cu); RECOMP_ABI_CALL(0x005DE330u, sub_005DE330); /* call 0x005DE330 */

loc_004AF70C: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AF716u); RECOMP_ABI_CALL(0x004AED44u, sub_004AED44); /* call 0x004AED44 */

loc_004AF716: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AF71Du); RECOMP_ABI_CALL(0x004AF164u, sub_004AF164); /* call 0x004AF164 */

loc_004AF71D: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004AF726
 * Original: 0x004AF726 - 0x004AF72A (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AF726(void)
{

loc_004AF726: ;
    eax = ecx + 0x48;
    esp += 4; return; /* ret */

}

/**
 * sub_004AF72A
 * Original: 0x004AF72A - 0x004AF72D (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AF72A(void)
{

loc_004AF72A: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004AF72D
 * Original: 0x004AF72D - 0x004AF730 (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AF72D(void)
{

loc_004AF72D: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004AF730
 * Original: 0x004AF730 - 0x004AF738 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AF730(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004AF730: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x24;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004AFBAA(); return; /* tail jmp 0x004AFBAA */

}

/**
 * sub_004AF738
 * Original: 0x004AF738 - 0x004AF740 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AF738(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004AF738: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x28;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004AFBAA(); return; /* tail jmp 0x004AFBAA */

}

/**
 * sub_004AF740
 * Original: 0x004AF740 - 0x004AF748 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AF740(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004AF740: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x2C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004AFBAA(); return; /* tail jmp 0x004AFBAA */

}

/**
 * sub_004AF748
 * Original: 0x004AF748 - 0x004AF750 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AF748(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004AF748: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004AFBAA(); return; /* tail jmp 0x004AFBAA */

}

/**
 * sub_004AF750
 * Original: 0x004AF750 - 0x004AF924 (468 bytes, 136 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004AF750(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004AF750: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xC0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    ebx = esi + 0x2C;
    MEM32(esi) = 0x8641BC;
    MEM32(esi + 0x24) = 0x8641AC;
    MEM32(esi + 0x28) = 0x8641A0;
    MEM32(ebx) = 0x864198;
    MEM32(esi + 0x30) = 0x86418C;
    if (CMP_EQ(_fa, _fb)) goto loc_004AF78B; /* je: equal / zero */

loc_004AF786: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004AF78Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004AF788u); } /* indirect call */
    }

loc_004AF78B: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x34);
    ecx = MEM32(esi + 0xB0);
    PUSH32(esp, edi);
    edi = MEM32(eax + 8);
    eax = ebp + -4;
    PUSH32(esp, eax);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -4) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AF7AFu); RECOMP_ABI_CALL(0x004DD8B2u, sub_004DD8B2); /* call 0x004DD8B2 */

loc_004AF7AF: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(0x8631B0));
    eax = MEM32(edi);
    PUSH32(esp, MEM32(0x86319C));
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x004AF7C2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004AF7BFu); } /* indirect call */
    }

loc_004AF7C2: ;
    ecx = MEM32(esi + 0xB4);
    eax = ebp + -4;
    PUSH32(esp, eax);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -4) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AF7D7u); RECOMP_ABI_CALL(0x004DD8B2u, sub_004DD8B2); /* call 0x004DD8B2 */

loc_004AF7D7: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(0x8631B4));
    eax = MEM32(edi);
    PUSH32(esp, MEM32(0x86319C));
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x004AF7EAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004AF7E7u); } /* indirect call */
    }

loc_004AF7EA: ;
    ecx = MEM32(esi + 0xB8);
    eax = ebp + -4;
    PUSH32(esp, eax);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -4) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AF7FFu); RECOMP_ABI_CALL(0x004DD8B2u, sub_004DD8B2); /* call 0x004DD8B2 */

loc_004AF7FF: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(0x8631C0));
    eax = MEM32(edi);
    PUSH32(esp, MEM32(0x86319C));
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x004AF812u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004AF80Fu); } /* indirect call */
    }

loc_004AF812: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(0x863194));
    eax = MEM32(edi);
    PUSH32(esp, MEM32(0x863184));
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004AF825u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004AF822u); } /* indirect call */
    }

loc_004AF825: ;
    ecx = ebp + -4;
    PUSH32(esp, ecx);
    ecx = eax + 8;
    MEM32(ebp + -4) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AF834u); RECOMP_ABI_CALL(0x004DD8B2u, sub_004DD8B2); /* call 0x004DD8B2 */

loc_004AF834: ;
    ecx = MEM32(0x90E7AC);
    edx = MEM32(ecx);
    eax = esi + 0x30;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004AF843u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004AF840u); } /* indirect call */
    }

loc_004AF843: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x30);
    edi = MEM32(eax + 0xAC);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AF85Eu); RECOMP_ABI_CALL(0x005DE4D0u, sub_005DE4D0); /* call 0x005DE4D0 */

loc_004AF85E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AF868u); RECOMP_ABI_CALL(0x005DE4A0u, sub_005DE4A0); /* call 0x005DE4A0 */

loc_004AF868: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AF872u); RECOMP_ABI_CALL(0x005DE410u, sub_005DE410); /* call 0x005DE410 */

loc_004AF872: ;
    ecx = MEM32(esi + 0x98);
    eax = MEM32(ecx);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004AF880u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004AF87Du); } /* indirect call */
    }

loc_004AF880: ;
    ecx = esi + 0x50;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AF888u); RECOMP_ABI_CALL(0x004DB960u, sub_004DB960); /* call 0x004DB960 */

loc_004AF888: ;
    ecx = MEM32(esi + 0xC0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_004AF898; /* je: equal / zero */

loc_004AF893: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AF898u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004AF898: ;
    ecx = MEM32(esi + 0xB8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004AF8A7; /* je: equal / zero */

loc_004AF8A2: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AF8A7u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004AF8A7: ;
    ecx = MEM32(esi + 0xB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004AF8B6; /* je: equal / zero */

loc_004AF8B1: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AF8B6u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004AF8B6: ;
    ecx = MEM32(esi + 0xB0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004AF8C5; /* je: equal / zero */

loc_004AF8C0: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AF8C5u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004AF8C5: ;
    ecx = MEM32(esi + 0x9C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004AF8D4; /* je: equal / zero */

loc_004AF8CF: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AF8D4u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004AF8D4: ;
    ecx = MEM32(esi + 0x98);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004AF8E3; /* je: equal / zero */

loc_004AF8DE: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AF8E3u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004AF8E3: ;
    ecx = esi + 0x70;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AF8EBu); RECOMP_ABI_CALL(0x004E1694u, sub_004E1694); /* call 0x004E1694 */

loc_004AF8EB: ;
    ecx = esi + 0x48;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AF8F3u); RECOMP_ABI_CALL(0x004E1670u, sub_004E1670); /* call 0x004E1670 */

loc_004AF8F3: ;
    ecx = esi + 0x34;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AF8FBu); RECOMP_ABI_CALL(0x004DDA4Fu, sub_004DDA4F); /* call 0x004DDA4F */

loc_004AF8FB: ;
    ecx = esi + 0x30;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AF903u); RECOMP_ABI_CALL(0x004DCA2Fu, sub_004DCA2F); /* call 0x004DCA2F */

loc_004AF903: ;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AF90Au); RECOMP_ABI_CALL(0x004AD973u, sub_004AD973); /* call 0x004AD973 */

loc_004AF90A: ;
    ecx = esi + 0x28;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AF912u); RECOMP_ABI_CALL(0x004B8995u, sub_004B8995); /* call 0x004B8995 */

loc_004AF912: ;
    ecx = esi;
    MEM32(esi + 0x24) = 0x863F20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AF920u); RECOMP_ABI_CALL(0x004B89F6u, sub_004B89F6); /* call 0x004B89F6 */

loc_004AF920: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004AF924
 * Original: 0x004AF924 - 0x004AF9BA (150 bytes, 55 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AF924(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004AF924: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0xC0;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004AF942; /* je: equal / zero */

loc_004AF933: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004AF93Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004AF93Bu); } /* indirect call */
    }

loc_004AF93E: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_004AF9B5;

loc_004AF942: ;
    eax = MEM32(esp + 0x10);
    MEM32(esi + 0xC4) = eax;
    PUSH32(esp, 0x004AF951u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004AF951: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x004AF95Du); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004AF95D: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004AF975; /* je: equal / zero */

loc_004AF964: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x28)) >> 32) & 1);
    esi = esi + 0x28;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = eax;
    PUSH32(esp, 0x004AF973u); RECOMP_ABI_CALL(0x004AF299u, sub_004AF299); /* call 0x004AF299 */

loc_004AF973: ;
    goto loc_004AF977;

loc_004AF975: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004AF977: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004AF97Du); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004AF97D: ;
    ecx = eax;
    PUSH32(esp, 0x004AF984u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004AF984: ;
    ecx = MEM32(0x90E7AC);
    ecx = MEM32(ecx + 0x18);
    ecx = MEM32(ecx + 0x24);
    ecx = MEM32(ecx + 0xC);
    edx = MEM32(ecx);
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((esi) != 0);
    esi = (uint32_t)(-(int32_t)esi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    _cf = 0; /* logical op clears CF */
    esi = esi & eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x7530);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004AF9ABu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004AF9A8u); } /* indirect call */
    }

loc_004AF9AB: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x004AF9B3u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004AF9B3: ;
    eax = MEM32(edi);

loc_004AF9B5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004AF9BA
 * Original: 0x004AF9BA - 0x004AFA64 (170 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AF9BA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004AF9BA: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x30);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0xAC);
    PUSH32(esp, edi);
    ebp = ecx;
    PUSH32(esp, 0x004AF9D9u); RECOMP_ABI_CALL(0x005DF700u, sub_005DF700); /* call 0x005DF700 */

loc_004AF9D9: ;
    MEM32(esp + 0x14) = eax;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x34);
    eax = MEM32(eax + 0x28);
    POP32(esp, ecx);
    ebx = ebp + 0x78;
    ecx = ebx;
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0x004AF9FAu); RECOMP_ABI_CALL(0x004DB960u, sub_004DB960); /* call 0x004DB960 */

loc_004AF9FA: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), esi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004AFA2B; /* jbe: below or equal (unsigned <=) */

loc_004AFA02: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x004AFA09u); RECOMP_ABI_CALL(0x005DEB30u, sub_005DEB30); /* call 0x005DEB30 */

loc_004AFA09: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004AFA0Fu); RECOMP_ABI_CALL(0x005DE560u, sub_005DE560); /* call 0x005DE560 */

loc_004AFA0F: ;
    ecx = MEM32(esp + 0x20);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x004AFA1Cu); RECOMP_ABI_CALL(0x004AE415u, sub_004AE415); /* call 0x004AE415 */

loc_004AFA1C: ;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x004AFA24u); RECOMP_ABI_CALL(0x004DB91Cu, sub_004DB91C); /* call 0x004DB91C */

loc_004AFA24: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(esp + 0x10) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004AFA02; /* jb: below (unsigned <) */

loc_004AFA2B: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x34);
    ecx = MEM32(eax + 0x2C);
    PUSH32(esp, 0x004AFA3Eu); RECOMP_ABI_CALL(0x004B12C9u, sub_004B12C9); /* call 0x004B12C9 */

loc_004AFA3E: ;
    edi = MEM32(ebp + 0x14);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 8;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004AFA5D; /* jbe: below or equal (unsigned <=) */

loc_004AFA4A: ;
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0x004AFA52u); RECOMP_ABI_CALL(0x004DD726u, sub_004DD726); /* call 0x004DD726 */

loc_004AFA52: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004AFA58u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004AFA56u); } /* indirect call */
    }

loc_004AFA58: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004AFA4A; /* jb: below (unsigned <) */

loc_004AFA5D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004AFA64
 * Original: 0x004AFA64 - 0x004AFA7C (24 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AFA64(void)
{

loc_004AFA64: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004AFA6Cu); RECOMP_ABI_CALL(0x004DC9A2u, sub_004DC9A2); /* call 0x004DC9A2 */

loc_004AFA6C: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x004AFA72u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004AFA70u); } /* indirect call */
    }

loc_004AFA72: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x004AFA7Au); RECOMP_ABI_CALL(0x004AF11Bu, sub_004AF11B); /* call 0x004AF11B */

loc_004AFA7A: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004AFA7C
 * Original: 0x004AFA7C - 0x004AFBAA (302 bytes, 97 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004AFA7C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004AFA7C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8E19F0);
    MEM32(ebp + -4) = eax;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x30);
    eax = MEM32(eax + 0xAC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(ebp + -76) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_004AFB9B; /* je: equal / zero */

loc_004AFAA9: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AFAB1u); RECOMP_ABI_CALL(0x005E06E0u, sub_005E06E0); /* call 0x005E06E0 */

loc_004AFAB1: ;
    edi = esi + 0x84;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), 0 (8-bit) */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004AFAC8; /* je: equal / zero */

loc_004AFABD: ;
    ecx = esi + -36;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AFAC5u); RECOMP_ABI_CALL(0x004AF9BAu, sub_004AF9BA); /* call 0x004AF9BA */

loc_004AFAC5: ;
    MEM8(edi) = 0;

loc_004AFAC8: ;
    _fa = (uint32_t)(MEM8(esi + 0x85)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x85), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004AFAFF; /* je: equal / zero */

loc_004AFAD1: ;
    MEM32(ebp + -72) = MEM32(ebp + -72) & 0;
    _fa = (uint32_t)(MEM32(ebp + -72)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = esi + -28;
    ebx = MEM32(edi + 0xC);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004AFAF8; /* jbe: below or equal (unsigned <=) */

loc_004AFADF: ;
    PUSH32(esp, MEM32(ebp + -72));
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AFAE9u); RECOMP_ABI_CALL(0x004DD726u, sub_004DD726); /* call 0x004DD726 */

loc_004AFAE9: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004AFAF0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004AFAEDu); } /* indirect call */
    }

loc_004AFAF0: ;
    MEM32(ebp + -72) = MEM32(ebp + -72) + 1;
    _fa = (uint32_t)(MEM32(ebp + -72)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + -72)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -72), ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004AFADF; /* jb: below (unsigned <) */

loc_004AFAF8: ;
    MEM8(esi + 0x85) = 0;

loc_004AFAFF: ;
    _fa = (uint32_t)(MEM8(esi + 0x88)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x88), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004AFB36; /* je: equal / zero */

loc_004AFB08: ;
    MEM32(ebp + -72) = MEM32(ebp + -72) & 0;
    _fa = (uint32_t)(MEM32(ebp + -72)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = esi + -28;
    ebx = MEM32(edi + 0xC);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004AFB2F; /* jbe: below or equal (unsigned <=) */

loc_004AFB16: ;
    PUSH32(esp, MEM32(ebp + -72));
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AFB20u); RECOMP_ABI_CALL(0x004DD726u, sub_004DD726); /* call 0x004DD726 */

loc_004AFB20: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x004AFB27u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004AFB24u); } /* indirect call */
    }

loc_004AFB27: ;
    MEM32(ebp + -72) = MEM32(ebp + -72) + 1;
    _fa = (uint32_t)(MEM32(ebp + -72)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + -72)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -72), ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004AFB16; /* jb: below (unsigned <) */

loc_004AFB2F: ;
    MEM8(esi + 0x88) = 0;

loc_004AFB36: ;
    _fa = (uint32_t)(MEM8(esi + 0x86)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x86), 0 (8-bit) */
    POP32(esp, edi);
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_004AFB6C; /* jne: not equal / not zero */

loc_004AFB41: ;
    eax = ebp + -68;
    PUSH32(esp, eax);
    PUSH32(esp, 0x40);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + -76));
    MEM8(ebp + -68) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AFB55u); RECOMP_ABI_CALL(0x005DF020u, sub_005DF020); /* call 0x005DF020 */

loc_004AFB55: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004AFB64; /* jne: not equal / not zero */

loc_004AFB5C: ;
    _fa = (uint32_t)(MEM8(ebp + -68)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -68), LO8(eax) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004AFB64; /* je: equal / zero */

loc_004AFB61: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_004AFB66;

loc_004AFB64: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004AFB66: ;
    MEM8(esi + 0x86) = LO8(eax);

loc_004AFB6C: ;
    _fa = (uint32_t)(MEM8(esi + 0x86)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x86), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004AFB9B; /* jne: not equal / not zero */

loc_004AFB75: ;
    _fa = (uint32_t)(MEM8(esi + 0x87)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x87), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004AFB9B; /* jne: not equal / not zero */

loc_004AFB7E: ;
    PUSH32(esp, MEM32(ebp + -76));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AFB86u); RECOMP_ABI_CALL(0x005DE430u, sub_005DE430); /* call 0x005DE430 */

loc_004AFB86: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_004AFB9B; /* jne: not equal / not zero */

loc_004AFB8C: ;
    ecx = esi + -36;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AFB94u); RECOMP_ABI_CALL(0x004AEC3Fu, sub_004AEC3F); /* call 0x004AEC3F */

loc_004AFB94: ;
    MEM8(esi + 0x87) = 1;

loc_004AFB9B: ;
    ecx = MEM32(ebp + -4);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AFBA6u); RECOMP_ABI_CALL(0x005CFF80u, sub_005CFF80); /* call 0x005CFF80 */

loc_004AFBA6: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004AFBAA
 * Original: 0x004AFBAA - 0x004AFBC6 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AFBAA(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004AFBAA: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004AFBB2u); RECOMP_ABI_CALL(0x004AF750u, sub_004AF750); /* call 0x004AF750 */

loc_004AFBB2: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004AFBC0; /* je: equal / zero */

loc_004AFBB9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004AFBBFu); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004AFBBF: ;
    POP32(esp, ecx);

loc_004AFBC0: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004AFBDA
 * Original: 0x004AFBDA - 0x004AFC09 (47 bytes, 22 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AFBDA(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004AFBDA: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x80);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004AFC02; /* jbe: below or equal (unsigned <=) */

loc_004AFBE8: ;
    PUSH32(esp, ebx);
    ebx = ecx + 0x74;

loc_004AFBEC: ;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x004AFBF4u); RECOMP_ABI_CALL(0x004DD726u, sub_004DD726); /* call 0x004DD726 */

loc_004AFBF4: ;
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004AFC01; /* je: equal / zero */

loc_004AFBFC: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004AFBEC; /* jb: below (unsigned <) */

loc_004AFC01: ;
    POP32(esp, ebx);

loc_004AFC02: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004AFC09
 * Original: 0x004AFC09 - 0x004AFC21 (24 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AFC09(void)
{

loc_004AFC09: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 8));
    esi = ecx;
    PUSH32(esp, 0x004AFC15u); RECOMP_ABI_CALL(0x004AFBDAu, sub_004AFBDA); /* call 0x004AFBDA */

loc_004AFC15: ;
    MEM8(eax + esi + 0x90) = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004AFC21
 * Original: 0x004AFC21 - 0x004AFC39 (24 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AFC21(void)
{

loc_004AFC21: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 8));
    esi = ecx;
    PUSH32(esp, 0x004AFC2Du); RECOMP_ABI_CALL(0x004AFBDAu, sub_004AFBDA); /* call 0x004AFBDA */

loc_004AFC2D: ;
    MEM8(eax + esi + 0x90) = 0;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004AFC39
 * Original: 0x004AFC39 - 0x004AFC50 (23 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AFC39(void)
{

loc_004AFC39: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 8));
    esi = ecx;
    PUSH32(esp, 0x004AFC45u); RECOMP_ABI_CALL(0x004AFBDAu, sub_004AFBDA); /* call 0x004AFBDA */

loc_004AFC45: ;
    SET_LO8(eax, MEM8(eax + esi + 0x90));
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004AFC50
 * Original: 0x004AFC50 - 0x004AFD17 (199 bytes, 82 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AFC50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004AFC50: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = ecx;
    PUSH32(esp, 0x004AFC5Cu); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004AFC5C: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x004AFC63u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004AFC60u); } /* indirect call */
    }

loc_004AFC63: ;
    edi = eax;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x004AFC6Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004AFC69u); } /* indirect call */
    }

loc_004AFC6C: ;
    ebx = eax;
    PUSH32(esp, 0x004AFC73u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004AFC73: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x004AFC7Fu); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004AFC7F: ;
    esi = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004AFC9D; /* je: equal / zero */

loc_004AFC8A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004AFC90u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004AFC90: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80);
    ecx = esi;
    PUSH32(esp, 0x004AFC9Du); RECOMP_ABI_CALL(0x004DCBBBu, sub_004DCBBB); /* call 0x004DCBBB */

loc_004AFC9D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004AFCA3u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004AFCA3: ;
    ecx = eax;
    PUSH32(esp, 0x004AFCAAu); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004AFCAA: ;
    edx = MEM32(ebx);
    esi = eax;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x20);
    ecx = ebx;
    MEM32(esp + 0x14) = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x004AFCBBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004AFCB8u); } /* indirect call */
    }

loc_004AFCBB: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(0x8D7C54));
    eax = MEM32(esp + 0x1C);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004AFCCBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004AFCC8u); } /* indirect call */
    }

loc_004AFCCB: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x68); PUSH32(esp, 0x004AFCD2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004AFCCFu); } /* indirect call */
    }

loc_004AFCD2: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x68); PUSH32(esp, 0x004AFCD9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004AFCD6u); } /* indirect call */
    }

loc_004AFCD9: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(0x8D7C58));
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x004AFCE9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004AFCE6u); } /* indirect call */
    }

loc_004AFCE9: ;
    edi = MEM32(ebp + 0xE4);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004AFD0F; /* jbe: below or equal (unsigned <=) */

loc_004AFCF5: ;
    _fb = (uint32_t)(0xD8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0xD8;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004AFCFB: ;
    PUSH32(esp, ebx);
    ecx = ebp;
    PUSH32(esp, 0x004AFD03u); RECOMP_ABI_CALL(0x004DD726u, sub_004DD726); /* call 0x004DD726 */

loc_004AFD03: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004AFD0Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004AFD08u); } /* indirect call */
    }

loc_004AFD0A: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004AFCFB; /* jb: below (unsigned <) */

loc_004AFD0F: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004AFD17
 * Original: 0x004AFD17 - 0x004AFD1C (5 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AFD17(void)
{

loc_004AFD17: ;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004AFD1C
 * Original: 0x004AFD1C - 0x004AFD71 (85 bytes, 30 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004AFD1C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004AFD1C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AFD28u); RECOMP_ABI_CALL(0x004DC96Bu, sub_004DC96B); /* call 0x004DC96B */

loc_004AFD28: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x10);
    ecx = ebp + -20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AFD33u); RECOMP_ABI_CALL(0x004DD979u, sub_004DD979); /* call 0x004DD979 */

loc_004AFD33: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x8638F8);
    PUSH32(esp, MEM32(ebp + 8));
    ecx = ebp + -20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AFD46u); RECOMP_ABI_CALL(0x004DDAF9u, sub_004DDAF9); /* call 0x004DDAF9 */

loc_004AFD46: ;
    PUSH32(esp, MEM32(esi * 4 + 0x8D7C3C));
    ecx = ebp + -20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AFD55u); RECOMP_ABI_CALL(0x004DDA6Bu, sub_004DDA6B); /* call 0x004DDA6B */

loc_004AFD55: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004AFD62; /* je: equal / zero */

loc_004AFD59: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 6 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004AFD46; /* jl: less (signed <) */

loc_004AFD5F: ;
    esi = esi | 0xFFFFFFFFu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_004AFD62: ;
    ecx = ebp + -20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004AFD6Au); RECOMP_ABI_CALL(0x004DDA4Fu, sub_004DDA4F); /* call 0x004DDA4F */

loc_004AFD6A: ;
    eax = esi;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004AFD71
 * Original: 0x004AFD71 - 0x004AFD84 (19 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AFD71(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004AFD71: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0xD8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xD8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x004AFD81u); RECOMP_ABI_CALL(0x004DD750u, sub_004DD750); /* call 0x004DD750 */

loc_004AFD81: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004AFD84
 * Original: 0x004AFD84 - 0x004AFD97 (19 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AFD84(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004AFD84: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0xD8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xD8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x004AFD94u); RECOMP_ABI_CALL(0x004DD8B2u, sub_004DD8B2); /* call 0x004DD8B2 */

loc_004AFD94: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004AFD9D
 * Original: 0x004AFD9D - 0x004AFDA3 (6 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AFD9D(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004AFD9D: ;
    eax = ecx;
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_004AFDB5
 * Original: 0x004AFDB5 - 0x004AFDD0 (27 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AFDB5(void)
{

loc_004AFDB5: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x004AFDC5u); RECOMP_ABI_CALL(0x004DD62Cu, sub_004DD62C); /* call 0x004DD62C */

loc_004AFDC5: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004AFDD0
 * Original: 0x004AFDD0 - 0x004AFDD6 (6 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AFDD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004AFDD0: ;
    eax = ecx;
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_004AFDD6
 * Original: 0x004AFDD6 - 0x004AFDE5 (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AFDD6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004AFDD6: ;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004AFDE1; /* je: equal / zero */

loc_004AFDDC: ;
    g_seh_ebp = ebp; sub_004DD5FD(); return; /* tail jmp 0x004DD5FD */

loc_004AFDE1: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004AFDE5
 * Original: 0x004AFDE5 - 0x004AFE00 (27 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AFDE5(void)
{

loc_004AFDE5: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x004AFDF5u); RECOMP_ABI_CALL(0x004DD62Cu, sub_004DD62C); /* call 0x004DD62C */

loc_004AFDF5: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004AFE0C
 * Original: 0x004AFE0C - 0x004AFE27 (27 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AFE0C(void)
{

loc_004AFE0C: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x004AFE1Cu); RECOMP_ABI_CALL(0x004DD62Cu, sub_004DD62C); /* call 0x004DD62C */

loc_004AFE1C: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004AFE27
 * Original: 0x004AFE27 - 0x004AFE42 (27 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AFE27(void)
{

loc_004AFE27: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x004AFE37u); RECOMP_ABI_CALL(0x004DD62Cu, sub_004DD62C); /* call 0x004DD62C */

loc_004AFE37: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004AFE48
 * Original: 0x004AFE48 - 0x004AFE72 (42 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AFE48(void)
{

loc_004AFE48: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004AFE50u); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_004AFE50: ;
    PUSH32(esp, MEM32(esp + 0xC));
    MEM32(esi) = 0x864210;
    PUSH32(esp, 0x004AFE5Fu); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004AFE5F: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = esi + 8;
    PUSH32(esp, 0x004AFE6Cu); RECOMP_ABI_CALL(0x004DB87Du, sub_004DB87D); /* call 0x004DB87D */

loc_004AFE6C: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004AFE8A
 * Original: 0x004AFE8A - 0x004AFEB4 (42 bytes, 13 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AFE8A(void)
{

loc_004AFE8A: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004AFE92u); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_004AFE92: ;
    PUSH32(esp, MEM32(esp + 0xC));
    MEM32(esi) = 0x864214;
    PUSH32(esp, 0x004AFEA1u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004AFEA1: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = esi + 8;
    PUSH32(esp, 0x004AFEAEu); RECOMP_ABI_CALL(0x004DB87Du, sub_004DB87D); /* call 0x004DB87D */

loc_004AFEAE: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004AFEE0
 * Original: 0x004AFEE0 - 0x004AFEFC (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AFEE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004AFEE0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004AFEE8u); RECOMP_ABI_CALL(0x004E1FACu, sub_004E1FAC); /* call 0x004E1FAC */

loc_004AFEE8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004AFEF6; /* je: equal / zero */

loc_004AFEEF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004AFEF5u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004AFEF5: ;
    POP32(esp, ecx);

loc_004AFEF6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004AFEFC
 * Original: 0x004AFEFC - 0x004AFF18 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AFEFC(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004AFEFC: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004AFF04u); RECOMP_ABI_CALL(0x004E1FD0u, sub_004E1FD0); /* call 0x004E1FD0 */

loc_004AFF04: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004AFF12; /* je: equal / zero */

loc_004AFF0B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004AFF11u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004AFF11: ;
    POP32(esp, ecx);

loc_004AFF12: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004AFF49
 * Original: 0x004AFF49 - 0x004B001A (209 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AFF49(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004AFF49: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x864230;
    MEM32(esi + 0x28) = 0x864220;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0xCC));
    edi = esi + 0x24;
    MEM32(edi) = 0x864218;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    ecx = MEM32(eax + 0x34);
    eax = MEM32(eax + 0x24);
    ebx = MEM32(ecx + 0x14);
    ecx = MEM32(eax + 0xC);
    PUSH32(esp, 0x004AFF83u); RECOMP_ABI_CALL(0x004E354Bu, sub_004E354B); /* call 0x004E354B */

loc_004AFF83: ;
    PUSH32(esp, 0x70726976);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x004AFF90u); RECOMP_ABI_CALL(0x004B3E43u, sub_004B3E43); /* call 0x004B3E43 */

loc_004AFF90: ;
    ecx = esi + 0xD8;
    PUSH32(esp, 0x004AFF9Bu); RECOMP_ABI_CALL(0x004DD70Au, sub_004DD70A); /* call 0x004DD70A */

loc_004AFF9B: ;
    ecx = MEM32(esi + 0xD4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004AFFAA; /* je: equal / zero */

loc_004AFFA5: ;
    PUSH32(esp, 0x004AFFAAu); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004AFFAA: ;
    ecx = MEM32(esi + 0xD0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004AFFB9; /* je: equal / zero */

loc_004AFFB4: ;
    PUSH32(esp, 0x004AFFB9u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004AFFB9: ;
    ecx = MEM32(esi + 0xCC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004AFFC8; /* je: equal / zero */

loc_004AFFC3: ;
    PUSH32(esp, 0x004AFFC8u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004AFFC8: ;
    ecx = esi + 0x74;
    PUSH32(esp, 0x004AFFD0u); RECOMP_ABI_CALL(0x004DD70Au, sub_004DD70A); /* call 0x004DD70A */

loc_004AFFD0: ;
    PUSH32(esp, 0x4AFDD6);
    PUSH32(esp, 6);
    PUSH32(esp, 4);
    eax = esi + 0x5C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004AFFE2u); RECOMP_ABI_CALL(0x00029295u, sub_00029295); /* call 0x00029295 */

loc_004AFFE2: ;
    ebx = 0x4AFDA3;
    PUSH32(esp, ebx);
    PUSH32(esp, 6);
    PUSH32(esp, 4);
    eax = esi + 0x44;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004AFFF5u); RECOMP_ABI_CALL(0x00029295u, sub_00029295); /* call 0x00029295 */

loc_004AFFF5: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 6);
    PUSH32(esp, 4);
    eax = esi + 0x2C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004B0003u); RECOMP_ABI_CALL(0x00029295u, sub_00029295); /* call 0x00029295 */

loc_004B0003: ;
    MEM32(esi + 0x28) = 0x863F20;
    MEM32(edi) = 0x863F30;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_004B971F(); return; /* tail jmp 0x004B971F */

}

/**
 * sub_004B001A
 * Original: 0x004B001A - 0x004B001D (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B001A(void)
{

loc_004B001A: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B001D
 * Original: 0x004B001D - 0x004B0025 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B001D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B001D: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x24;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004B0C08(); return; /* tail jmp 0x004B0C08 */

}

/**
 * sub_004B0025
 * Original: 0x004B0025 - 0x004B002D (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B0025(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B0025: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x28;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004B0C08(); return; /* tail jmp 0x004B0C08 */

}

/**
 * sub_004B002D
 * Original: 0x004B002D - 0x004B012C (255 bytes, 95 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004B002D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B002D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    eax = ebp + 8;
    PUSH32(esp, eax);
    ecx = esi + 0x74;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B0041u); RECOMP_ABI_CALL(0x004DD750u, sub_004DD750); /* call 0x004DD750 */

loc_004B0041: ;
    PUSH32(esp, MEM32(ebp + 8));
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B004Bu); RECOMP_ABI_CALL(0x004AFBDAu, sub_004AFBDA); /* call 0x004AFBDA */

loc_004B004B: ;
    edi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B0052u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004B0052: ;
    PUSH32(esp, eax);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x28);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B005Eu); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004B005E: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B0076; /* je: equal / zero */

loc_004B0065: ;
    ecx = MEM32(ebp + 0xC);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B0074u); RECOMP_ABI_CALL(0x004AFE48u, sub_004AFE48); /* call 0x004AFE48 */

loc_004B0074: ;
    goto loc_004B0078;

loc_004B0076: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004B0078: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B007Eu); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004B007E: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B0085u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004B0085: ;
    PUSH32(esp, eax);
    ecx = esi + edi * 4 + 0x2C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B008Fu); RECOMP_ABI_CALL(0x004AFDB5u, sub_004AFDB5); /* call 0x004AFDB5 */

loc_004B008F: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B0094u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004B0094: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x28);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B009Eu); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004B009E: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B00B6; /* je: equal / zero */

loc_004B00A5: ;
    ecx = MEM32(ebp + 0x10);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B00B4u); RECOMP_ABI_CALL(0x004AFE48u, sub_004AFE48); /* call 0x004AFE48 */

loc_004B00B4: ;
    goto loc_004B00B8;

loc_004B00B6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004B00B8: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B00BEu); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004B00BE: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B00C5u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004B00C5: ;
    PUSH32(esp, eax);
    ecx = esi + edi * 4 + 0x44;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B00CFu); RECOMP_ABI_CALL(0x004AFDB5u, sub_004AFDB5); /* call 0x004AFDB5 */

loc_004B00CF: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B00D4u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004B00D4: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x28);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B00DEu); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004B00DE: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B00F1; /* je: equal / zero */

loc_004B00E5: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 4);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B00EFu); RECOMP_ABI_CALL(0x004AFE8Au, sub_004AFE8A); /* call 0x004AFE8A */

loc_004B00EF: ;
    goto loc_004B00F3;

loc_004B00F1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004B00F3: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B00F9u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004B00F9: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B0100u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004B0100: ;
    PUSH32(esp, eax);
    ecx = esi + edi * 4 + 0x5C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B010Au); RECOMP_ABI_CALL(0x004AFDE5u, sub_004AFDE5); /* call 0x004AFDE5 */

loc_004B010A: ;
    eax = MEM32(ebp + 0xC);
    MEM32(esi + edi * 4 + 0x98) = eax;
    eax = MEM32(ebp + 0x10);
    MEM32(esi + edi * 4 + 0xB0) = eax;
    MEM8(edi + esi + 0x90) = LO8(ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004B012C
 * Original: 0x004B012C - 0x004B0172 (70 bytes, 22 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B012C(void)
{

loc_004B012C: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0xC));
    esi = ecx;
    PUSH32(esp, 0x004B0139u); RECOMP_ABI_CALL(0x004AFBDAu, sub_004AFBDA); /* call 0x004AFBDA */

loc_004B0139: ;
    edi = eax;
    PUSH32(esp, 0);
    ecx = esi + edi * 4 + 0x2C;
    PUSH32(esp, 0x004B0146u); RECOMP_ABI_CALL(0x004AFDB5u, sub_004AFDB5); /* call 0x004AFDB5 */

loc_004B0146: ;
    PUSH32(esp, 0);
    ecx = esi + edi * 4 + 0x44;
    PUSH32(esp, 0x004B0151u); RECOMP_ABI_CALL(0x004AFDB5u, sub_004AFDB5); /* call 0x004AFDB5 */

loc_004B0151: ;
    PUSH32(esp, 0);
    ecx = esi + edi * 4 + 0x5C;
    PUSH32(esp, 0x004B015Cu); RECOMP_ABI_CALL(0x004AFDE5u, sub_004AFDE5); /* call 0x004AFDE5 */

loc_004B015C: ;
    PUSH32(esp, edi);
    ecx = esi + 0x74;
    MEM8(edi + esi + 0x90) = 0;
    PUSH32(esp, 0x004B016Du); RECOMP_ABI_CALL(0x004DD7BFu, sub_004DD7BF); /* call 0x004DD7BF */

loc_004B016D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B0172
 * Original: 0x004B0172 - 0x004B01B9 (71 bytes, 28 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B0172(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B0172: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004B0181u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B017Eu); } /* indirect call */
    }

loc_004B0181: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x004B0189u); RECOMP_ABI_CALL(0x004AFBDAu, sub_004AFBDA); /* call 0x004AFBDA */

loc_004B0189: ;
    eax = MEM32(edi + eax * 4 + 0x5C);
    edi = eax + 8;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x004B0198u); RECOMP_ABI_CALL(0x004DB9F8u, sub_004DB9F8); /* call 0x004DB9F8 */

loc_004B0198: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004B01B4; /* jne: not equal / not zero */

loc_004B019C: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), 0 (32-bit) */
    ecx = edi;
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_004B01AF; /* jne: not equal / not zero */

loc_004B01A6: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004B01ADu); RECOMP_ABI_CALL(0x004DB93Cu, sub_004DB93C); /* call 0x004DB93C */

loc_004B01AD: ;
    goto loc_004B01B4;

loc_004B01AF: ;
    PUSH32(esp, 0x004B01B4u); RECOMP_ABI_CALL(0x004DB91Cu, sub_004DB91C); /* call 0x004DB91C */

loc_004B01B4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004B01B9
 * Original: 0x004B01B9 - 0x004B01E2 (41 bytes, 17 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B01B9(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B01B9: ;
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi);
    esi = ecx;
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004B01C8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B01C5u); } /* indirect call */
    }

loc_004B01C8: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x004B01D0u); RECOMP_ABI_CALL(0x004AFBDAu, sub_004AFBDA); /* call 0x004AFBDA */

loc_004B01D0: ;
    ecx = MEM32(esi + eax * 4 + 0x5C);
    PUSH32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x004B01DDu); RECOMP_ABI_CALL(0x004DBA5Au, sub_004DBA5A); /* call 0x004DBA5A */

loc_004B01DD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B01E2
 * Original: 0x004B01E2 - 0x004B0224 (66 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B01E2(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B01E2: ;
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    ecx = edi + 8;
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x004B01F2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B01EFu); } /* indirect call */
    }

loc_004B01F2: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x004B01FAu); RECOMP_ABI_CALL(0x004AFBDAu, sub_004AFBDA); /* call 0x004AFBDA */

loc_004B01FA: ;
    esi = MEM32(esi + eax * 4 + 0x44);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x004B0209u); RECOMP_ABI_CALL(0x004DB9F8u, sub_004DB9F8); /* call 0x004DB9F8 */

loc_004B0209: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004B021F; /* jne: not equal / not zero */

loc_004B020D: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x004B0215u); RECOMP_ABI_CALL(0x004DB91Cu, sub_004DB91C); /* call 0x004DB91C */

loc_004B0215: ;
    eax = MEM32(edi + 0x1C);
    MEM8(eax + 0x200) = 1;

loc_004B021F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B0224
 * Original: 0x004B0224 - 0x004B0266 (66 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B0224(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B0224: ;
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    ecx = edi + 8;
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x004B0234u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B0231u); } /* indirect call */
    }

loc_004B0234: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x004B023Cu); RECOMP_ABI_CALL(0x004AFBDAu, sub_004AFBDA); /* call 0x004AFBDA */

loc_004B023C: ;
    esi = MEM32(esi + eax * 4 + 0x2C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x004B024Bu); RECOMP_ABI_CALL(0x004DB9F8u, sub_004DB9F8); /* call 0x004DB9F8 */

loc_004B024B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004B0261; /* jne: not equal / not zero */

loc_004B024F: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x004B0257u); RECOMP_ABI_CALL(0x004DB91Cu, sub_004DB91C); /* call 0x004DB91C */

loc_004B0257: ;
    eax = MEM32(edi + 0x1C);
    MEM8(eax + 0x200) = 1;

loc_004B0261: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B0266
 * Original: 0x004B0266 - 0x004B02DE (120 bytes, 47 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004B0266(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B0266: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = ebx + 8;
    eax = MEM32(ecx);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x004B027Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B0277u); } /* indirect call */
    }

loc_004B027A: ;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B0282u); RECOMP_ABI_CALL(0x004AFBDAu, sub_004AFBDA); /* call 0x004AFBDA */

loc_004B0282: ;
    edi = MEM32(esi + eax * 4 + 0x44);
    PUSH32(esp, ebx);
    ecx = ebp + -4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B028Fu); RECOMP_ABI_CALL(0x004ABC14u, sub_004ABC14); /* call 0x004ABC14 */

loc_004B028F: ;
    PUSH32(esp, ebx);
    ecx = edi + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B0298u); RECOMP_ABI_CALL(0x004DBA5Au, sub_004DBA5A); /* call 0x004DBA5A */

loc_004B0298: ;
    edi = MEM32(esi + 0x14);
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004B02C5; /* jbe: below or equal (unsigned <=) */

loc_004B02A6: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0xC;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004B02A9: ;
    PUSH32(esp, MEM32(ebp + 8));
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B02B3u); RECOMP_ABI_CALL(0x004DD726u, sub_004DD726); /* call 0x004DD726 */

loc_004B02B3: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 6);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004B02BDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B02BAu); } /* indirect call */
    }

loc_004B02BD: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004B02A9; /* jb: below (unsigned <) */

loc_004B02C5: ;
    ecx = MEM32(ebp + -4);
    eax = MEM32(ecx + 0x1C);
    MEM8(eax + 0x200) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B02D7u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004B02D7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B02DE
 * Original: 0x004B02DE - 0x004B0358 (122 bytes, 47 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004B02DE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B02DE: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(edi);
    esi = ecx;
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x004B02F4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B02F1u); } /* indirect call */
    }

loc_004B02F4: ;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B02FCu); RECOMP_ABI_CALL(0x004AFBDAu, sub_004AFBDA); /* call 0x004AFBDA */

loc_004B02FC: ;
    PUSH32(esp, MEM32(ebp + 8));
    ebx = MEM32(esi + eax * 4 + 0x2C);
    ecx = ebp + -4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B030Bu); RECOMP_ABI_CALL(0x004ABC14u, sub_004ABC14); /* call 0x004ABC14 */

loc_004B030B: ;
    PUSH32(esp, MEM32(ebp + 8));
    ecx = ebx + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B0316u); RECOMP_ABI_CALL(0x004DBA5Au, sub_004DBA5A); /* call 0x004DBA5A */

loc_004B0316: ;
    ebx = MEM32(esi + 0x14);
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004B033F; /* jbe: below or equal (unsigned <=) */

loc_004B0324: ;
    PUSH32(esp, MEM32(ebp + 8));
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B032Eu); RECOMP_ABI_CALL(0x004DD726u, sub_004DD726); /* call 0x004DD726 */

loc_004B032E: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 6);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004B0337u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B0335u); } /* indirect call */
    }

loc_004B0337: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004B0324; /* jb: below (unsigned <) */

loc_004B033F: ;
    ecx = MEM32(ebp + -4);
    eax = MEM32(ecx + 0x1C);
    MEM8(eax + 0x200) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B0351u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004B0351: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B0358
 * Original: 0x004B0358 - 0x004B03BF (103 bytes, 43 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004B0358(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B0358: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    esi = ecx;
    ecx = edi + 8;
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x004B036Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B0368u); } /* indirect call */
    }

loc_004B036B: ;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B0373u); RECOMP_ABI_CALL(0x004AFBDAu, sub_004AFBDA); /* call 0x004AFBDA */

loc_004B0373: ;
    ecx = MEM32(esi + eax * 4 + 0x44);
    PUSH32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B0380u); RECOMP_ABI_CALL(0x004DB91Cu, sub_004DB91C); /* call 0x004DB91C */

loc_004B0380: ;
    ebx = MEM32(esi + 0x14);
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004B03AD; /* jbe: below or equal (unsigned <=) */

loc_004B038E: ;
    PUSH32(esp, MEM32(ebp + 8));
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B0398u); RECOMP_ABI_CALL(0x004DD726u, sub_004DD726); /* call 0x004DD726 */

loc_004B0398: ;
    ecx = MEM32(eax);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 8);
    eax = edi + 0xC;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004B03A5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B03A2u); } /* indirect call */
    }

loc_004B03A5: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004B038E; /* jb: below (unsigned <) */

loc_004B03AD: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = edi + 0xC;
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x004B03B8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B03B5u); } /* indirect call */
    }

loc_004B03B8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004B03BF
 * Original: 0x004B03BF - 0x004B04A6 (231 bytes, 69 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004B03BF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B03BF: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B03CEu); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004B03CE: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x280);
    ecx = ebp + -64;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B03DCu); RECOMP_ABI_CALL(0x004DCBBBu, sub_004DCBBB); /* call 0x004DCBBB */

loc_004B03DC: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B03E2u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004B03E2: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x300);
    ecx = ebp + -32;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B03F0u); RECOMP_ABI_CALL(0x004DCBBBu, sub_004DCBBB); /* call 0x004DCBBB */

loc_004B03F0: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = ebp + -64;
    PUSH32(esp, 0x830C60);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B0402u); RECOMP_ABI_CALL(0x004DCDDCu, sub_004DCDDC); /* call 0x004DCDDC */

loc_004B0402: ;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, MEM32(eax * 4 + 0x8D7C3C));
    ecx = ebp + -64;
    PUSH32(esp, 0x8638F8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B0419u); RECOMP_ABI_CALL(0x004DCD3Eu, sub_004DCD3E); /* call 0x004DCD3E */

loc_004B0419: ;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B042E; /* je: equal / zero */

loc_004B041E: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    ecx = ebp + -64;
    PUSH32(esp, 0x864258);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B042Eu); RECOMP_ABI_CALL(0x004DCD3Eu, sub_004DCD3E); /* call 0x004DCD3E */

loc_004B042E: ;
    PUSH32(esp, 0x1004020);
    PUSH32(esp, 0x864250);
    ecx = ebp + -32;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B0440u); RECOMP_ABI_CALL(0x004DD1A3u, sub_004DD1A3); /* call 0x004DD1A3 */

loc_004B0440: ;
    PUSH32(esp, MEM32(ebp + 8));
    ecx = ebp + -32;
    PUSH32(esp, 0x864248);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B0450u); RECOMP_ABI_CALL(0x004DCD3Eu, sub_004DCD3E); /* call 0x004DCD3E */

loc_004B0450: ;
    eax = ebp + -64;
    PUSH32(esp, eax);
    PUSH32(esp, 0x863900);
    ecx = ebp + -32;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B0461u); RECOMP_ABI_CALL(0x004DD12Du, sub_004DD12D); /* call 0x004DD12D */

loc_004B0461: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x28);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x1C));
    esi = MEM32(eax + 8);
    PUSH32(esp, MEM32(ebp + 0x18));
    eax = MEM32(ebp + -32);
    ecx = ebp + -32;
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x004B047Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B047Bu); } /* indirect call */
    }

loc_004B047E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x6D657367);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B048Au); RECOMP_ABI_CALL(0x005E20B0u, sub_005E20B0); /* call 0x005E20B0 */

loc_004B048A: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ebp + -32;
    esi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B0497u); RECOMP_ABI_CALL(0x004DCC7Fu, sub_004DCC7F); /* call 0x004DCC7F */

loc_004B0497: ;
    ecx = ebp + -64;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B049Fu); RECOMP_ABI_CALL(0x004DCC7Fu, sub_004DCC7F); /* call 0x004DCC7F */

loc_004B049F: ;
    eax = esi;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 28; return; /* ret 24 */

}

/**
 * sub_004B04A6
 * Original: 0x004B04A6 - 0x004B04FE (88 bytes, 40 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B04A6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B04A6: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    esi = ecx;
    ecx = edi + 8;
    eax = MEM32(ecx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x004B04BBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B04B8u); } /* indirect call */
    }

loc_004B04BB: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x004B04C3u); RECOMP_ABI_CALL(0x004AFBDAu, sub_004AFBDA); /* call 0x004AFBDA */

loc_004B04C3: ;
    eax = MEM32(esi + eax * 4 + 0x5C);
    esi = MEM32(eax + 0x14);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_004B04F5; /* jle: less or equal (signed <=) */

loc_004B04D0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x14) = eax;

loc_004B04D7: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x004B04E1u); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004B04E1: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004B04E9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B04E6u); } /* indirect call */
    }

loc_004B04E9: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004B04F5; /* jne: not equal / not zero */

loc_004B04F0: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004B04D7; /* jl: less (signed <) */

loc_004B04F5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B04FE
 * Original: 0x004B04FE - 0x004B0548 (74 bytes, 36 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004B04FE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B04FE: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(eax + 0x14);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(ebp + 0xC) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_004B053B; /* jle: less or equal (signed <=) */

loc_004B0513: ;
    ebx = eax + 8;

loc_004B0516: ;
    PUSH32(esp, edi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B051Eu); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004B051E: ;
    esi = eax;
    ecx = esi + 8;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004B0527u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B0525u); } /* indirect call */
    }

loc_004B0527: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 8));
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x004B0531u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B052Eu); } /* indirect call */
    }

loc_004B0531: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004B0544; /* jne: not equal / not zero */

loc_004B0535: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebp + 0xC) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004B0516; /* jl: less (signed <) */

loc_004B053B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004B053D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_004B0544: ;
    eax = esi;
    goto loc_004B053D;

}

/**
 * sub_004B0548
 * Original: 0x004B0548 - 0x004B0567 (31 bytes, 10 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B0548(void)
{

loc_004B0548: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0xC));
    esi = ecx;
    PUSH32(esp, 0x004B0554u); RECOMP_ABI_CALL(0x004AFBDAu, sub_004AFBDA); /* call 0x004AFBDA */

loc_004B0554: ;
    PUSH32(esp, MEM32(esi + eax * 4 + 0x2C));
    ecx = esi;
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x004B0563u); RECOMP_ABI_CALL(0x004B04FEu, sub_004B04FE); /* call 0x004B04FE */

loc_004B0563: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004B0567
 * Original: 0x004B0567 - 0x004B0586 (31 bytes, 10 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B0567(void)
{

loc_004B0567: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0xC));
    esi = ecx;
    PUSH32(esp, 0x004B0573u); RECOMP_ABI_CALL(0x004AFBDAu, sub_004AFBDA); /* call 0x004AFBDA */

loc_004B0573: ;
    PUSH32(esp, MEM32(esi + eax * 4 + 0x44));
    ecx = esi;
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x004B0582u); RECOMP_ABI_CALL(0x004B04FEu, sub_004B04FE); /* call 0x004B04FE */

loc_004B0582: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004B0586
 * Original: 0x004B0586 - 0x004B07D5 (591 bytes, 205 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004B0586(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B0586: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 8));
    ebx = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B0597u); RECOMP_ABI_CALL(0x004AFBDAu, sub_004AFBDA); /* call 0x004AFBDA */

loc_004B0597: ;
    _fa = (uint32_t)(MEM8(ebx + 0xC8)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx + 0xC8), 0 (8-bit) */
    MEM32(ebp + -12) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_004B07D0; /* jne: not equal / not zero */

loc_004B05A7: ;
    MEM8(ebx + 0xC8) = 1;
    ecx = MEM32(0x90E7AC);
    ecx = MEM32(ecx + 0x18);
    ecx = MEM32(ecx + 0x30);
    ecx = MEM32(ecx + 0xB4);
    PUSH32(esp, esi);
    MEM32(ebp + -16) = ecx;
    ecx = MEM32(ebx + eax * 4 + 0x2C);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x14);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_004B0676; /* js: sign (negative) */

loc_004B05D3: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x67616D65) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0x67616D65 (32-bit) */
    MEM8(ebp + -1) = (CMP_EQ(_fa, _fb)) ? 1 : 0; /* sete */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x766F6970) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0x766F6970 (32-bit) */
    MEM8(ebp + -2) = (CMP_EQ(_fa, _fb)) ? 1 : 0; /* sete */

loc_004B05E9: ;
    eax = MEM32(ebx + eax * 4 + 0x2C);
    PUSH32(esp, edi);
    ecx = eax + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B05F6u); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004B05F6: ;
    esi = eax;
    ecx = esi + 8;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004B05FFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B05FDu); } /* indirect call */
    }

loc_004B05FF: ;
    _fa = (uint32_t)(MEM8(ebp + -1)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -1), 0 (8-bit) */
    MEM32(ebp + -8) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_004B0612; /* je: equal / zero */

loc_004B0608: ;
    _fa = (uint32_t)(MEM8(esi + 0x15)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x15), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_004B0612; /* jne: not equal / not zero */

loc_004B060E: ;
    SET_LO8(eax, 1);
    goto loc_004B0614;

loc_004B0612: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_004B0614: ;
    _fa = (uint32_t)(MEM8(ebp + -1)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -1), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B061E; /* je: equal / zero */

loc_004B061A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B066C; /* je: equal / zero */

loc_004B061E: ;
    _fa = (uint32_t)(MEM8(ebp + -2)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -2), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B0630; /* je: equal / zero */

loc_004B0624: ;
    ecx = MEM32(ebp + -16);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x004B062Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B0629u); } /* indirect call */
    }

loc_004B062C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004B0658; /* jne: not equal / not zero */

loc_004B0630: ;
    ecx = MEM32(ebp + -8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x004B0638u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B0635u); } /* indirect call */
    }

loc_004B0638: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004B066C; /* jne: not equal / not zero */

loc_004B063C: ;
    ecx = MEM32(ebp + -8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x004B0644u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B0641u); } /* indirect call */
    }

loc_004B0644: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004B066C; /* jne: not equal / not zero */

loc_004B0648: ;
    ecx = MEM32(ebp + -8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x12C); PUSH32(esp, 0x004B0653u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B064Du); } /* indirect call */
    }

loc_004B0653: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004B066C; /* jne: not equal / not zero */

loc_004B0658: ;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), 0 (32-bit) */
    SET_LO8(ecx, MEM8(esi + 0x10));
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    { uint32_t _sv=(uint32_t)(LO8(ecx)), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        SET_LO8(ecx, _sv >> _sc);
        _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
      } }
    SET_LO8(ecx, LO8(ecx) & 3);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(eax, LO8(eax) | LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_004B0696; /* je: equal / zero */

loc_004B066C: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = MEM32(ebp + -12);
    if ((_fas >= 0)) goto loc_004B05E9; /* jns: not sign (positive) */

loc_004B0676: ;
    edi = ebx + eax * 4 + 0x44;
    eax = MEM32(edi);
    ecx = MEM32(eax + 0x14);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + -12) = ecx;
    if ((_fas < 0)) goto loc_004B07C7; /* js: sign (negative) */

loc_004B0689: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x67616D65) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0x67616D65 (32-bit) */
    MEM8(ebp + 0xB) = (CMP_EQ(_fa, _fb)) ? 1 : 0; /* sete */
    goto loc_004B06E8;

loc_004B0696: ;
    PUSH32(esp, esi);
    ecx = ebp + -12;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B069Fu); RECOMP_ABI_CALL(0x004ABC14u, sub_004ABC14); /* call 0x004ABC14 */

loc_004B069F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x004B06ADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B06AAu); } /* indirect call */
    }

loc_004B06AD: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = ebx + 8;
    eax = MEM32(edi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -16) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_004B07BB; /* jbe: below or equal (unsigned <=) */

loc_004B06C2: ;
    PUSH32(esp, MEM32(ebp + 8));
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B06CCu); RECOMP_ABI_CALL(0x004DD726u, sub_004DD726); /* call 0x004DD726 */

loc_004B06CC: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 7);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004B06D5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B06D3u); } /* indirect call */
    }

loc_004B06D5: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -16) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004B06C2; /* jb: below (unsigned <) */

loc_004B06E0: ;
    goto loc_004B07BB;

loc_004B06E5: ;
    ecx = MEM32(ebp + -12);

loc_004B06E8: ;
    eax = MEM32(edi);
    PUSH32(esp, ecx);
    ecx = eax + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B06F3u); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004B06F3: ;
    esi = eax;
    ecx = esi + 8;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004B06FCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B06FAu); } /* indirect call */
    }

loc_004B06FC: ;
    _fa = (uint32_t)(MEM8(ebp + 0xB)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0xB), 0 (8-bit) */
    MEM32(ebp + -8) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_004B070F; /* je: equal / zero */

loc_004B0705: ;
    _fa = (uint32_t)(MEM8(esi + 0x15)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x15), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_004B070F; /* jne: not equal / not zero */

loc_004B070B: ;
    SET_LO8(eax, 1);
    goto loc_004B0711;

loc_004B070F: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_004B0711: ;
    _fa = (uint32_t)(MEM8(ebp + 0xB)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0xB), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B071B; /* je: equal / zero */

loc_004B0717: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B076B; /* je: equal / zero */

loc_004B071B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B072F; /* je: equal / zero */

loc_004B071F: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B0724u); RECOMP_ABI_CALL(0x004DC9FAu, sub_004DC9FA); /* call 0x004DC9FA */

loc_004B0724: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x004B072Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B0728u); } /* indirect call */
    }

loc_004B072B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B073B; /* je: equal / zero */

loc_004B072F: ;
    ecx = MEM32(ebp + -8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x004B0737u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B0734u); } /* indirect call */
    }

loc_004B0737: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004B076B; /* jne: not equal / not zero */

loc_004B073B: ;
    ecx = MEM32(ebp + -8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x004B0743u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B0740u); } /* indirect call */
    }

loc_004B0743: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004B076B; /* jne: not equal / not zero */

loc_004B0747: ;
    ecx = MEM32(ebp + -8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x12C); PUSH32(esp, 0x004B0752u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B074Cu); } /* indirect call */
    }

loc_004B0752: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004B076B; /* jne: not equal / not zero */

loc_004B0757: ;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), 0 (32-bit) */
    SET_LO8(ecx, MEM8(esi + 0x10));
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    { uint32_t _sv=(uint32_t)(LO8(ecx)), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        SET_LO8(ecx, _sv >> _sc);
        _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
      } }
    SET_LO8(ecx, LO8(ecx) & 3);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(eax, LO8(eax) | LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_004B0776; /* je: equal / zero */

loc_004B076B: ;
    MEM32(ebp + -12) = MEM32(ebp + -12) - 1;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_004B06E5; /* jns: not sign (positive) */

loc_004B0774: ;
    goto loc_004B07C7;

loc_004B0776: ;
    PUSH32(esp, esi);
    ecx = ebp + -12;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B077Fu); RECOMP_ABI_CALL(0x004ABC14u, sub_004ABC14); /* call 0x004ABC14 */

loc_004B077F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004B078Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B0788u); } /* indirect call */
    }

loc_004B078B: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = ebx + 8;
    eax = MEM32(edi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -16) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_004B07BB; /* jbe: below or equal (unsigned <=) */

loc_004B079C: ;
    PUSH32(esp, MEM32(ebp + 8));
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B07A6u); RECOMP_ABI_CALL(0x004DD726u, sub_004DD726); /* call 0x004DD726 */

loc_004B07A6: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 7);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004B07B0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B07ADu); } /* indirect call */
    }

loc_004B07B0: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -16) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004B079C; /* jb: below (unsigned <) */

loc_004B07BB: ;
    ecx = MEM32(ebp + -12);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B07C7; /* je: equal / zero */

loc_004B07C2: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B07C7u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004B07C7: ;
    POP32(esp, edi);
    MEM8(ebx + 0xC8) = 0;
    POP32(esp, esi);

loc_004B07D0: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B07D5
 * Original: 0x004B07D5 - 0x004B07F2 (29 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B07D5(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004B07D5: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 8));
    esi = ecx;
    PUSH32(esp, 0x004B07E1u); RECOMP_ABI_CALL(0x004AFBDAu, sub_004AFBDA); /* call 0x004AFBDA */

loc_004B07E1: ;
    eax = MEM32(esi + eax * 4 + 0x2C);
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0x14) (32-bit) */
    _cf = (int)(_fa < _fb);
    POP32(esp, esi);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B07F2
 * Original: 0x004B07F2 - 0x004B080F (29 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B07F2(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004B07F2: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 8));
    esi = ecx;
    PUSH32(esp, 0x004B07FEu); RECOMP_ABI_CALL(0x004AFBDAu, sub_004AFBDA); /* call 0x004AFBDA */

loc_004B07FE: ;
    eax = MEM32(esi + eax * 4 + 0x44);
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0x14) (32-bit) */
    _cf = (int)(_fa < _fb);
    POP32(esp, esi);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B080F
 * Original: 0x004B080F - 0x004B086B (92 bytes, 39 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B080F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B080F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x10));
    esi = ecx;
    PUSH32(esp, 0x004B081Du); RECOMP_ABI_CALL(0x004AFBDAu, sub_004AFBDA); /* call 0x004AFBDA */

loc_004B081D: ;
    ebx = esi + eax * 4 + 0x44;
    eax = MEM32(ebx);
    edi = MEM32(eax + 0x14);
    goto loc_004B0862;

loc_004B0828: ;
    eax = MEM32(ebx);
    PUSH32(esp, edi);
    ecx = eax + 8;
    PUSH32(esp, 0x004B0833u); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004B0833: ;
    esi = eax;
    SET_LO8(eax, MEM8(esi + 0x10));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 3 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_004B0862; /* jne: not equal / not zero */

loc_004B083C: ;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), 0 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    { uint32_t _sv=(uint32_t)(LO8(eax)), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        SET_LO8(eax, _sv >> _sc);
        _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
      } }
    SET_LO8(eax, LO8(eax) & 3);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(ecx, LO8(ecx) | LO8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    if ((_fa != 0)) goto loc_004B0862; /* jne: not equal / not zero */

loc_004B084C: ;
    ecx = esi + 8;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x004B0854u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B0851u); } /* indirect call */
    }

loc_004B0854: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004B0862; /* jne: not equal / not zero */

loc_004B0858: ;
    ecx = esi + 0xC;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004B0862u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B085Fu); } /* indirect call */
    }

loc_004B0862: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_004B0828; /* jns: not sign (positive) */

loc_004B0865: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B086B
 * Original: 0x004B086B - 0x004B08CF (100 bytes, 43 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B086B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B086B: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x10));
    edi = ecx;
    PUSH32(esp, 0x004B0879u); RECOMP_ABI_CALL(0x004AFBDAu, sub_004AFBDA); /* call 0x004AFBDA */

loc_004B0879: ;
    ebx = eax;
    eax = MEM32(edi + ebx * 4 + 0x2C);
    esi = MEM32(eax + 0x14);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_004B08A3; /* js: sign (negative) */

loc_004B0885: ;
    PUSH32(esp, ebp);
    ebp = eax + 8;

loc_004B0889: ;
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0x004B0891u); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004B0891: ;
    _fa = (uint32_t)(MEM8(eax + 0x10)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x10), 3 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004B089F; /* je: equal / zero */

loc_004B0897: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x004B089Fu); RECOMP_ABI_CALL(0x004B02DEu, sub_004B02DE); /* call 0x004B02DE */

loc_004B089F: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_004B0889; /* jns: not sign (positive) */

loc_004B08A2: ;
    POP32(esp, ebp);

loc_004B08A3: ;
    eax = MEM32(edi + ebx * 4 + 0x44);
    esi = MEM32(eax + 0x14);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_004B08C9; /* js: sign (negative) */

loc_004B08AD: ;
    ebx = eax + 8;

loc_004B08B0: ;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x004B08B8u); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004B08B8: ;
    _fa = (uint32_t)(MEM8(eax + 0x10)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x10), 3 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004B08C6; /* je: equal / zero */

loc_004B08BE: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x004B08C6u); RECOMP_ABI_CALL(0x004B0266u, sub_004B0266); /* call 0x004B0266 */

loc_004B08C6: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_004B08B0; /* jns: not sign (positive) */

loc_004B08C9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B08CF
 * Original: 0x004B08CF - 0x004B08E3 (20 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B08CF(void)
{

loc_004B08CF: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 8));
    esi = ecx;
    PUSH32(esp, 0x004B08DBu); RECOMP_ABI_CALL(0x004AFBDAu, sub_004AFBDA); /* call 0x004AFBDA */

loc_004B08DB: ;
    eax = MEM32(esi + eax * 4 + 0x2C);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B08E3
 * Original: 0x004B08E3 - 0x004B08F7 (20 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B08E3(void)
{

loc_004B08E3: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 8));
    esi = ecx;
    PUSH32(esp, 0x004B08EFu); RECOMP_ABI_CALL(0x004AFBDAu, sub_004AFBDA); /* call 0x004AFBDA */

loc_004B08EF: ;
    eax = MEM32(esi + eax * 4 + 0x44);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B08F7
 * Original: 0x004B08F7 - 0x004B09F0 (249 bytes, 97 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B08F7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B08F7: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ebx = ecx + 0xD0;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), edi (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 8) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_004B09E0; /* jne: not equal / not zero */

loc_004B090F: ;
    PUSH32(esp, esi);
    esi = MEM32(0x90E7AC);
    PUSH32(esp, 1);
    PUSH32(esp, 0x004B091Du); RECOMP_ABI_CALL(0x004DBDC4u, sub_004DBDC4); /* call 0x004DBDC4 */

loc_004B091D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004B09DF; /* je: equal / zero */

loc_004B0926: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x004B092Cu); RECOMP_ABI_CALL(0x004DBE3Du, sub_004DBE3D); /* call 0x004DBE3D */

loc_004B092C: ;
    ecx = MEM32(esi + 0x18);
    ecx = MEM32(ecx + 0x34);
    ecx = MEM32(ecx + 0x28);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004B093Bu); RECOMP_ABI_CALL(0x004AE415u, sub_004AE415); /* call 0x004AE415 */

loc_004B093B: ;
    ebp = eax;
    PUSH32(esp, 0x004B0942u); RECOMP_ABI_CALL(0x004DBE37u, sub_004DBE37); /* call 0x004DBE37 */

loc_004B0942: ;
    ebx = eax;
    PUSH32(esp, 0x004B0949u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004B0949: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x004B0953u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004B0953: ;
    esi = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_004B096E; /* je: equal / zero */

loc_004B095C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x004B0962u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004B0962: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x40);
    ecx = esi;
    PUSH32(esp, 0x004B096Cu); RECOMP_ABI_CALL(0x004DCBBBu, sub_004DCBBB); /* call 0x004DCBBB */

loc_004B096C: ;
    goto loc_004B0970;

loc_004B096E: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004B0970: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004B0976u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004B0976: ;
    ecx = eax;
    PUSH32(esp, 0x004B097Du); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004B097D: ;
    esi = eax;
    eax = MEM32(esi);
    PUSH32(esp, 0x20);
    PUSH32(esp, ebx);
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0x004B098Du); RECOMP_ABI_CALL(0x005CC5E1u, sub_005CC5E1); /* call 0x005CC5E1 */

loc_004B098D: ;
    POP32(esp, ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(0x8D7C54));
    eax = MEM32(esp + 0x20);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004B099Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B099Bu); } /* indirect call */
    }

loc_004B099E: ;
    PUSH32(esp, 0x004B09A3u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004B09A3: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x2C);
    PUSH32(esp, 0x004B09ADu); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004B09AD: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_004B09C1; /* je: equal / zero */

loc_004B09B4: ;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    ecx = eax;
    PUSH32(esp, 0x004B09BFu); RECOMP_ABI_CALL(0x004B8CCAu, sub_004B8CCA); /* call 0x004B8CCA */

loc_004B09BF: ;
    goto loc_004B09C3;

loc_004B09C1: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004B09C3: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004B09C9u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004B09C9: ;
    ecx = eax;
    PUSH32(esp, 0x004B09D0u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004B09D0: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004B09DAu); RECOMP_ABI_CALL(0x004AFE0Cu, sub_004AFE0C); /* call 0x004AFE0C */

loc_004B09DA: ;
    ebx = MEM32(esp + 0x10);
    POP32(esp, ebp);

loc_004B09DF: ;
    POP32(esp, esi);

loc_004B09E0: ;
    eax = MEM32(ebx);
    ecx = eax + 8;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    POP32(esp, edi);
    _cf = 0; /* logical op clears CF */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, ebx);
    POP32(esp, ecx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004B09F0
 * Original: 0x004B09F0 - 0x004B0A18 (40 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B09F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B09F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esi + 0xD0;
    PUSH32(esp, 0x004B0A00u); RECOMP_ABI_CALL(0x004AFE0Cu, sub_004AFE0C); /* call 0x004AFE0C */

loc_004B0A00: ;
    PUSH32(esp, 0);
    ecx = esi + 0xD4;
    PUSH32(esp, 0x004B0A0Du); RECOMP_ABI_CALL(0x004AFE27u, sub_004AFE27); /* call 0x004AFE27 */

loc_004B0A0D: ;
    PUSH32(esp, 0x004B0A12u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004B0A12: ;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004DBE43(); return; /* tail jmp 0x004DBE43 */

}

/**
 * sub_004B0A18
 * Original: 0x004B0A18 - 0x004B0A4E (54 bytes, 16 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B0A18(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004B0A18: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 8));
    esi = ecx;
    PUSH32(esp, 0x004B0A24u); RECOMP_ABI_CALL(0x004AFBDAu, sub_004AFBDA); /* call 0x004AFBDA */

loc_004B0A24: ;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xC), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_004B0A38; /* jne: not equal / not zero */

loc_004B0A2B: ;
    ecx = MEM32(esi + eax * 4 + 0x44);
    eax = MEM32(esi + eax * 4 + 0xB0);
    goto loc_004B0A43;

loc_004B0A38: ;
    ecx = MEM32(esi + eax * 4 + 0x2C);
    eax = MEM32(esi + eax * 4 + 0x98);

loc_004B0A43: ;
    _fa = (uint32_t)(MEM32(ecx + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x14), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    POP32(esp, esi);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004B0A4E
 * Original: 0x004B0A4E - 0x004B0C08 (442 bytes, 155 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B0A4E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B0A4E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x004B0A59u); RECOMP_ABI_CALL(0x004B9703u, sub_004B9703); /* call 0x004B9703 */

loc_004B0A59: ;
    ebx = 0x4AFD9D;
    PUSH32(esp, ebx);
    PUSH32(esp, 6);
    POP32(esp, ebp);
    PUSH32(esp, ebp);
    MEM32(esi + 0x24) = 0x863F30;
    edi = esi + 0x28;
    MEM32(edi) = 0x863F20;
    PUSH32(esp, 4);
    eax = esi + 0x2C;
    PUSH32(esp, eax);
    MEM32(esi) = 0x864230;
    MEM32(esi + 0x24) = 0x864218;
    MEM32(edi) = 0x864220;
    PUSH32(esp, 0x004B0A91u); RECOMP_ABI_CALL(0x000199EEu, sub_000199EE); /* call 0x000199EE */

loc_004B0A91: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 4);
    eax = esi + 0x44;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004B0A9Eu); RECOMP_ABI_CALL(0x000199EEu, sub_000199EE); /* call 0x000199EE */

loc_004B0A9E: ;
    PUSH32(esp, 0x4AFDD0);
    PUSH32(esp, ebp);
    PUSH32(esp, 4);
    eax = esi + 0x5C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004B0AAFu); RECOMP_ABI_CALL(0x000199EEu, sub_000199EE); /* call 0x000199EE */

loc_004B0AAF: ;
    PUSH32(esp, 0x004B0AB4u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004B0AB4: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 4);
    ecx = esi + 0x74;
    PUSH32(esp, 0x004B0AC0u); RECOMP_ABI_CALL(0x004DD66Du, sub_004DD66D); /* call 0x004DD66D */

loc_004B0AC0: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esi + 0xC8) = LO8(ebx);
    ebp = esi + 0xCC;
    MEM32(ebp) = ebx;
    MEM32(esi + 0xD0) = ebx;
    MEM32(esi + 0xD4) = ebx;
    PUSH32(esp, 0x004B0AE2u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004B0AE2: ;
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    PUSH32(esp, 4);
    ecx = esi + 0xD8;
    PUSH32(esp, 0x004B0AF2u); RECOMP_ABI_CALL(0x004DD66Du, sub_004DD66D); /* call 0x004DD66D */

loc_004B0AF2: ;
    PUSH32(esp, 0x64);
    PUSH32(esp, 0x64);
    PUSH32(esp, 0x67616D65);
    ecx = esi;
    PUSH32(esp, 0x004B0B02u); RECOMP_ABI_CALL(0x004B002Du, sub_004B002D); /* call 0x004B002D */

loc_004B0B02: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x766F6970);
    ecx = esi;
    PUSH32(esp, 0x004B0B12u); RECOMP_ABI_CALL(0x004B002Du, sub_004B002D); /* call 0x004B002D */

loc_004B0B12: ;
    PUSH32(esp, 0x64);
    PUSH32(esp, 0x64);
    PUSH32(esp, 0x66726E64);
    ecx = esi;
    PUSH32(esp, 0x004B0B22u); RECOMP_ABI_CALL(0x004B002Du, sub_004B002D); /* call 0x004B002D */

loc_004B0B22: ;
    PUSH32(esp, 0x70726976);
    eax = esi + 0x24;
    PUSH32(esp, eax);
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x34);
    ecx = MEM32(eax + 0x14);
    PUSH32(esp, 0x004B0B3Eu); RECOMP_ABI_CALL(0x004B3DE6u, sub_004B3DE6); /* call 0x004B3DE6 */

loc_004B0B3E: ;
    PUSH32(esp, 0x004B0B43u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004B0B43: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 8);
    PUSH32(esp, 0x004B0B4Du); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004B0B4D: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B0B5D; /* je: equal / zero */

loc_004B0B54: ;
    ecx = eax;
    PUSH32(esp, 0x004B0B5Bu); RECOMP_ABI_CALL(0x004B997Au, sub_004B997A); /* call 0x004B997A */

loc_004B0B5B: ;
    goto loc_004B0B5F;

loc_004B0B5D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004B0B5F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004B0B66u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004B0B66: ;
    ecx = eax;
    PUSH32(esp, 0x004B0B6Du); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004B0B6D: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x004B0B75u); RECOMP_ABI_CALL(0x004B0172u, sub_004B0172); /* call 0x004B0172 */

loc_004B0B75: ;
    PUSH32(esp, 0x004B0B7Au); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004B0B7A: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 8);
    PUSH32(esp, 0x004B0B84u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004B0B84: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B0B94; /* je: equal / zero */

loc_004B0B8B: ;
    ecx = eax;
    PUSH32(esp, 0x004B0B92u); RECOMP_ABI_CALL(0x004B9807u, sub_004B9807); /* call 0x004B9807 */

loc_004B0B92: ;
    goto loc_004B0B96;

loc_004B0B94: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004B0B96: ;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004B0B9Du); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004B0B9D: ;
    ecx = eax;
    PUSH32(esp, 0x004B0BA4u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004B0BA4: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x004B0BACu); RECOMP_ABI_CALL(0x004B0172u, sub_004B0172); /* call 0x004B0172 */

loc_004B0BAC: ;
    PUSH32(esp, 0x004B0BB1u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004B0BB1: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 8);
    PUSH32(esp, 0x004B0BBBu); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004B0BBB: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B0BCB; /* je: equal / zero */

loc_004B0BC2: ;
    ecx = eax;
    PUSH32(esp, 0x004B0BC9u); RECOMP_ABI_CALL(0x004B975Eu, sub_004B975E); /* call 0x004B975E */

loc_004B0BC9: ;
    goto loc_004B0BCD;

loc_004B0BCB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004B0BCD: ;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004B0BD4u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004B0BD4: ;
    ecx = eax;
    PUSH32(esp, 0x004B0BDBu); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004B0BDB: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x004B0BE3u); RECOMP_ABI_CALL(0x004B0172u, sub_004B0172); /* call 0x004B0172 */

loc_004B0BE3: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x24);
    ecx = MEM32(eax + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004B0BF9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B0BF6u); } /* indirect call */
    }

loc_004B0BF9: ;
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x004B0C01u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004B0C01: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_004B0C08
 * Original: 0x004B0C08 - 0x004B0C24 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B0C08(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B0C08: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004B0C10u); RECOMP_ABI_CALL(0x004AFF49u, sub_004AFF49); /* call 0x004AFF49 */

loc_004B0C10: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004B0C1E; /* je: equal / zero */

loc_004B0C17: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004B0C1Du); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004B0C1D: ;
    POP32(esp, ecx);

loc_004B0C1E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B0C24
 * Original: 0x004B0C24 - 0x004B0C79 (85 bytes, 33 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B0C24(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B0C24: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0x004B0C2Du); RECOMP_ABI_CALL(0x004AFC50u, sub_004AFC50); /* call 0x004AFC50 */

loc_004B0C2D: ;
    esi = eax;
    PUSH32(esp, 0x004B0C34u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004B0C34: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x2C);
    PUSH32(esp, 0x004B0C40u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004B0C40: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B0C59; /* je: equal / zero */

loc_004B0C47: ;
    PUSH32(esp, 2);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0x18));
    ecx = eax;
    PUSH32(esp, 0x004B0C57u); RECOMP_ABI_CALL(0x004B8CCAu, sub_004B8CCA); /* call 0x004B8CCA */

loc_004B0C57: ;
    goto loc_004B0C5B;

loc_004B0C59: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004B0C5B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004B0C61u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004B0C61: ;
    ecx = eax;
    PUSH32(esp, 0x004B0C68u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004B0C68: ;
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = edi;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004B0C74u); RECOMP_ABI_CALL(0x004B0358u, sub_004B0358); /* call 0x004B0358 */

loc_004B0C74: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004B0C79
 * Original: 0x004B0C79 - 0x004B0D36 (189 bytes, 76 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004B0C79(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B0C79: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x766F6970);
    edi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B0C8Du); RECOMP_ABI_CALL(0x004AFBDAu, sub_004AFBDA); /* call 0x004AFBDA */

loc_004B0C8D: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = eax;
    eax = MEM32(edi + esi * 4 + 0x2C);
    ebx = MEM32(eax + 0x14);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004B0CC3; /* jbe: below or equal (unsigned <=) */

loc_004B0C9E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -8) = eax;

loc_004B0CA4: ;
    PUSH32(esp, MEM32(ebp + -4));
    ecx = MEM32(ebp + -8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B0CAFu); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004B0CAF: ;
    ecx = eax + 8;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x004B0CBBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B0CB8u); } /* indirect call */
    }

loc_004B0CBB: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004B0CA4; /* jb: below (unsigned <) */

loc_004B0CC3: ;
    eax = MEM32(edi + esi * 4 + 0x44);
    esi = MEM32(eax + 0x14);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004B0CEE; /* jbe: below or equal (unsigned <=) */

loc_004B0CD0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -8) = eax;

loc_004B0CD6: ;
    ecx = MEM32(ebp + -8);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B0CDFu); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004B0CDF: ;
    ecx = eax + 0xC;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004B0CE9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B0CE6u); } /* indirect call */
    }

loc_004B0CE9: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004B0CD6; /* jb: below (unsigned <) */

loc_004B0CEE: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B0CF3u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004B0CF3: ;
    PUSH32(esp, eax);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x2C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B0CFFu); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004B0CFF: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B0D15; /* je: equal / zero */

loc_004B0D06: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B0D13u); RECOMP_ABI_CALL(0x004B9CDFu, sub_004B9CDF); /* call 0x004B9CDF */

loc_004B0D13: ;
    goto loc_004B0D17;

loc_004B0D15: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004B0D17: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B0D1Du); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004B0D1D: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B0D24u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004B0D24: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = edi;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B0D2Fu); RECOMP_ABI_CALL(0x004B0358u, sub_004B0358); /* call 0x004B0358 */

loc_004B0D2F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004B0D36
 * Original: 0x004B0D36 - 0x004B0D81 (75 bytes, 28 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B0D36(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B0D36: ;
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0x004B0D3Eu); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004B0D3E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x2C);
    PUSH32(esp, 0x004B0D4Au); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004B0D4A: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B0D62; /* je: equal / zero */

loc_004B0D51: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = eax;
    PUSH32(esp, 0x004B0D60u); RECOMP_ABI_CALL(0x004BA4C4u, sub_004BA4C4); /* call 0x004BA4C4 */

loc_004B0D60: ;
    goto loc_004B0D64;

loc_004B0D62: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004B0D64: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004B0D6Au); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004B0D6A: ;
    ecx = eax;
    PUSH32(esp, 0x004B0D71u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004B0D71: ;
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = edi;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004B0D7Du); RECOMP_ABI_CALL(0x004B0358u, sub_004B0358); /* call 0x004B0358 */

loc_004B0D7D: ;
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004B0D81
 * Original: 0x004B0D81 - 0x004B0DE8 (103 bytes, 48 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004B0D81(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B0D81: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi);
    ebx = ecx;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004B0D96u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B0D93u); } /* indirect call */
    }

loc_004B0D96: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = MEM32(esi);
    ecx = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_004B0DBC; /* je: equal / zero */

loc_004B0D9E: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004B0DA1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B0D9Eu); } /* indirect call */
    }

loc_004B0DA1: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x004B0DA8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B0DA5u); } /* indirect call */
    }

loc_004B0DA8: ;
    MEM32(ebp + 8) = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004B0DB1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B0DAFu); } /* indirect call */
    }

loc_004B0DB1: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    goto loc_004B0DC6;

loc_004B0DBC: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004B0DBEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B0DBCu); } /* indirect call */
    }

loc_004B0DBE: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, 0);

loc_004B0DC6: ;
    edi = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x004B0DCFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B0DCCu); } /* indirect call */
    }

loc_004B0DCF: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(edi);
    ecx = edi;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004B0DD9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B0DD6u); } /* indirect call */
    }

loc_004B0DD9: ;
    ecx = ebx;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B0DE1u); RECOMP_ABI_CALL(0x004B03BFu, sub_004B03BF); /* call 0x004B03BF */

loc_004B0DE1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004B0DE8
 * Original: 0x004B0DE8 - 0x004B0E25 (61 bytes, 28 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B0DE8(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B0DE8: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi);
    ebx = ecx;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004B0DFAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B0DF8u); } /* indirect call */
    }

loc_004B0DFA: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 0x18));
    edi = eax;
    PUSH32(esp, MEM32(esp + 0x18));
    eax = MEM32(esi);
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x004B0E0Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B0E0Au); } /* indirect call */
    }

loc_004B0E0D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(edi);
    PUSH32(esp, 1);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004B0E17u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B0E14u); } /* indirect call */
    }

loc_004B0E17: ;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x004B0E1Fu); RECOMP_ABI_CALL(0x004B03BFu, sub_004B03BF); /* call 0x004B03BF */

loc_004B0E1F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004B0E25
 * Original: 0x004B0E25 - 0x004B0E64 (63 bytes, 28 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B0E25(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B0E25: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi);
    ebx = ecx;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004B0E37u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B0E35u); } /* indirect call */
    }

loc_004B0E37: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 0x1C));
    edi = eax;
    PUSH32(esp, MEM32(esp + 0x1C));
    eax = MEM32(esi);
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x004B0E4Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B0E47u); } /* indirect call */
    }

loc_004B0E4A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0x24));
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004B0E56u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B0E53u); } /* indirect call */
    }

loc_004B0E56: ;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x004B0E5Eu); RECOMP_ABI_CALL(0x004B03BFu, sub_004B03BF); /* call 0x004B03BF */

loc_004B0E5E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_004B0E64
 * Original: 0x004B0E64 - 0x004B0FA5 (321 bytes, 114 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004B0E64(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004B0E64: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x10));
    edi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B0E75u); RECOMP_ABI_CALL(0x004AFBDAu, sub_004AFBDA); /* call 0x004AFBDA */

loc_004B0E75: ;
    esi = 0x67616D65;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), esi (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + -4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_004B0EB7; /* je: equal / zero */

loc_004B0E82: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x766F6970) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0x766F6970 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_004B0F9E; /* jne: not equal / not zero */

loc_004B0E8F: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B0E94u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004B0E94: ;
    PUSH32(esp, eax);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x2C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B0EA0u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004B0EA0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_004B0EE0; /* je: equal / zero */

loc_004B0EA7: ;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = eax;
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B0EB5u); RECOMP_ABI_CALL(0x004B9CDFu, sub_004B9CDF); /* call 0x004B9CDF */

loc_004B0EB5: ;
    goto loc_004B0EE2;

loc_004B0EB7: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B0EBCu); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004B0EBC: ;
    PUSH32(esp, eax);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x2C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B0EC8u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004B0EC8: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_004B0EE0; /* je: equal / zero */

loc_004B0ECF: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = eax;
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B0EDEu); RECOMP_ABI_CALL(0x004B8CCAu, sub_004B8CCA); /* call 0x004B8CCA */

loc_004B0EDE: ;
    goto loc_004B0EE2;

loc_004B0EE0: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004B0EE2: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B0EE8u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004B0EE8: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B0EEFu); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004B0EEF: ;
    PUSH32(esp, eax);
    ecx = edi;
    MEM32(ebp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B0EFAu); RECOMP_ABI_CALL(0x004B04A6u, sub_004B04A6); /* call 0x004B04A6 */

loc_004B0EFA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004B0F9E; /* je: equal / zero */

loc_004B0F02: ;
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B0F0Cu); RECOMP_ABI_CALL(0x004BAB65u, sub_004BAB65); /* call 0x004BAB65 */

loc_004B0F0C: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(edi + eax * 4 + 0x2C);
    PUSH32(esp, MEM32(ebp + 0xC));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(8)) >> 32) & 1);
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B0F1Eu); RECOMP_ABI_CALL(0x004DB91Cu, sub_004DB91C); /* call 0x004DB91C */

loc_004B0F1E: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_004B0F44; /* je: equal / zero */

loc_004B0F23: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x766F6970) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0x766F6970 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_004B0F9E; /* jne: not equal / not zero */

loc_004B0F2C: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x34);
    PUSH32(esp, MEM32(ebp + 8));
    ecx = MEM32(eax + 0x10);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B0F42u); RECOMP_ABI_CALL(0x004AEE08u, sub_004AEE08); /* call 0x004AEE08 */

loc_004B0F42: ;
    goto loc_004B0F5A;

loc_004B0F44: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x34);
    PUSH32(esp, MEM32(ebp + 8));
    ecx = MEM32(eax + 0x10);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B0F5Au); RECOMP_ABI_CALL(0x004AEDDDu, sub_004AEDDD); /* call 0x004AEDDD */

loc_004B0F5A: ;
    ebx = MEM32(edi + 0x14);
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(8)) >> 32) & 1);
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_BE(_fa, _fb)) goto loc_004B0F91; /* jbe: below or equal (unsigned <=) */

loc_004B0F68: ;
    esi = MEM32(ebp + 0xC);
    eax = esi;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((esi) != 0);
    esi = (uint32_t)(-(int32_t)esi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    esi = esi & eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_004B0F76: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B0F80u); RECOMP_ABI_CALL(0x004DD726u, sub_004DD726); /* call 0x004DD726 */

loc_004B0F80: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004B0F89u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B0F87u); } /* indirect call */
    }

loc_004B0F89: ;
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_004B0F76; /* jb: below (unsigned <) */

loc_004B0F91: ;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(eax + 0x1C);
    MEM8(eax + 0x200) = 1;

loc_004B0F9E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004B0FA5
 * Original: 0x004B0FA5 - 0x004B1020 (123 bytes, 51 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004B0FA5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004B0FA5: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x10));
    esi = ecx;
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B0FB7u); RECOMP_ABI_CALL(0x004B0548u, sub_004B0548); /* call 0x004B0548 */

loc_004B0FB7: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004B101A; /* je: equal / zero */

loc_004B0FBD: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 2);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B0FC7u); RECOMP_ABI_CALL(0x004BAB65u, sub_004BAB65); /* call 0x004BAB65 */

loc_004B0FC7: ;
    PUSH32(esp, edi);
    ecx = ebp + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B0FD0u); RECOMP_ABI_CALL(0x004ABC14u, sub_004ABC14); /* call 0x004ABC14 */

loc_004B0FD0: ;
    PUSH32(esp, edi);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B0FD8u); RECOMP_ABI_CALL(0x004B02DEu, sub_004B02DE); /* call 0x004B02DE */

loc_004B0FD8: ;
    ebx = MEM32(esi + 0x14);
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(8)) >> 32) & 1);
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_BE(_fa, _fb)) goto loc_004B100D; /* jbe: below or equal (unsigned <=) */

loc_004B0FE6: ;
    edi = MEM32(ebp + 8);
    eax = edi + 8;
    _cf = (int)((edi) != 0);
    edi = (uint32_t)(-(int32_t)edi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    edi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    edi = edi & eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_004B0FF2: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B0FFCu); RECOMP_ABI_CALL(0x004DD726u, sub_004DD726); /* call 0x004DD726 */

loc_004B0FFC: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004B1005u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B1003u); } /* indirect call */
    }

loc_004B1005: ;
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_004B0FF2; /* jb: below (unsigned <) */

loc_004B100D: ;
    ecx = MEM32(ebp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_004B101A; /* je: equal / zero */

loc_004B1015: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B101Au); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004B101A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004B1020
 * Original: 0x004B1020 - 0x004B10FD (221 bytes, 88 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004B1020(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004B1020: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x10));
    esi = ecx;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B1034u); RECOMP_ABI_CALL(0x004B0567u, sub_004B0567); /* call 0x004B0567 */

loc_004B1034: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004B1098; /* je: equal / zero */

loc_004B103A: ;
    PUSH32(esp, 3);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B1043u); RECOMP_ABI_CALL(0x004BAB65u, sub_004BAB65); /* call 0x004BAB65 */

loc_004B1043: ;
    PUSH32(esp, edi);
    ecx = ebp + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B104Cu); RECOMP_ABI_CALL(0x004ABC14u, sub_004ABC14); /* call 0x004ABC14 */

loc_004B104C: ;
    PUSH32(esp, edi);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B1054u); RECOMP_ABI_CALL(0x004B0266u, sub_004B0266); /* call 0x004B0266 */

loc_004B1054: ;
    ebx = MEM32(esi + 0x14);
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(8)) >> 32) & 1);
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_BE(_fa, _fb)) goto loc_004B108A; /* jbe: below or equal (unsigned <=) */

loc_004B1062: ;
    edi = MEM32(ebp + 8);
    eax = edi + 0xC;
    _cf = (int)((edi) != 0);
    edi = (uint32_t)(-(int32_t)edi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    edi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    edi = edi & eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_004B106E: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B1078u); RECOMP_ABI_CALL(0x004DD726u, sub_004DD726); /* call 0x004DD726 */

loc_004B1078: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004B1082u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B107Fu); } /* indirect call */
    }

loc_004B1082: ;
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_004B106E; /* jb: below (unsigned <) */

loc_004B108A: ;
    ecx = MEM32(ebp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004B10F6; /* je: equal / zero */

loc_004B1091: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B1096u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004B1096: ;
    goto loc_004B10F6;

loc_004B1098: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B109Du); RECOMP_ABI_CALL(0x004DC9FAu, sub_004DC9FA); /* call 0x004DC9FA */

loc_004B109D: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x004B10A4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B10A1u); } /* indirect call */
    }

loc_004B10A4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_004B10F6; /* jne: not equal / not zero */

loc_004B10A8: ;
    esi = MEM32(esi + 0xD4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004B10F6; /* je: equal / zero */

loc_004B10B2: ;
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x004B10BAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B10B7u); } /* indirect call */
    }

loc_004B10BA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004B10F6; /* je: equal / zero */

loc_004B10BE: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B10C3u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004B10C3: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x004B10CAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B10C7u); } /* indirect call */
    }

loc_004B10CA: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x004B10D1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B10CEu); } /* indirect call */
    }

loc_004B10D1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004B10F6; /* je: equal / zero */

loc_004B10D5: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x004B10DCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B10D9u); } /* indirect call */
    }

loc_004B10DC: ;
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x14), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_004B10F6; /* jne: not equal / not zero */

loc_004B10E2: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x38);
    ecx = MEM32(eax + 0x14);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B10F6u); RECOMP_ABI_CALL(0x004BB238u, sub_004BB238); /* call 0x004BB238 */

loc_004B10F6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004B10FD
 * Original: 0x004B10FD - 0x004B11DA (221 bytes, 88 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004B10FD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004B10FD: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x10));
    esi = ecx;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B1111u); RECOMP_ABI_CALL(0x004B0567u, sub_004B0567); /* call 0x004B0567 */

loc_004B1111: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004B1175; /* je: equal / zero */

loc_004B1117: ;
    PUSH32(esp, 4);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B1120u); RECOMP_ABI_CALL(0x004BAB65u, sub_004BAB65); /* call 0x004BAB65 */

loc_004B1120: ;
    PUSH32(esp, edi);
    ecx = ebp + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B1129u); RECOMP_ABI_CALL(0x004ABC14u, sub_004ABC14); /* call 0x004ABC14 */

loc_004B1129: ;
    PUSH32(esp, edi);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B1131u); RECOMP_ABI_CALL(0x004B0266u, sub_004B0266); /* call 0x004B0266 */

loc_004B1131: ;
    ebx = MEM32(esi + 0x14);
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(8)) >> 32) & 1);
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_BE(_fa, _fb)) goto loc_004B1167; /* jbe: below or equal (unsigned <=) */

loc_004B113F: ;
    edi = MEM32(ebp + 8);
    eax = edi + 0xC;
    _cf = (int)((edi) != 0);
    edi = (uint32_t)(-(int32_t)edi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    edi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    edi = edi & eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_004B114B: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B1155u); RECOMP_ABI_CALL(0x004DD726u, sub_004DD726); /* call 0x004DD726 */

loc_004B1155: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004B115Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B115Cu); } /* indirect call */
    }

loc_004B115F: ;
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_004B114B; /* jb: below (unsigned <) */

loc_004B1167: ;
    ecx = MEM32(ebp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004B11D3; /* je: equal / zero */

loc_004B116E: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B1173u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004B1173: ;
    goto loc_004B11D3;

loc_004B1175: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B117Au); RECOMP_ABI_CALL(0x004DC9FAu, sub_004DC9FA); /* call 0x004DC9FA */

loc_004B117A: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x004B1181u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B117Eu); } /* indirect call */
    }

loc_004B1181: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_004B11D3; /* jne: not equal / not zero */

loc_004B1185: ;
    esi = MEM32(esi + 0xD4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004B11D3; /* je: equal / zero */

loc_004B118F: ;
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x004B1197u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B1194u); } /* indirect call */
    }

loc_004B1197: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004B11D3; /* je: equal / zero */

loc_004B119B: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B11A0u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004B11A0: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x004B11A7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B11A4u); } /* indirect call */
    }

loc_004B11A7: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x004B11AEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B11ABu); } /* indirect call */
    }

loc_004B11AE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004B11D3; /* je: equal / zero */

loc_004B11B2: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x004B11B9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B11B6u); } /* indirect call */
    }

loc_004B11B9: ;
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x14), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_004B11D3; /* jne: not equal / not zero */

loc_004B11BF: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x38);
    ecx = MEM32(eax + 0x14);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B11D3u); RECOMP_ABI_CALL(0x004BB238u, sub_004BB238); /* call 0x004BB238 */

loc_004B11D3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004B11DA
 * Original: 0x004B11DA - 0x004B1256 (124 bytes, 51 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004B11DA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004B11DA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x10));
    esi = ecx;
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B11ECu); RECOMP_ABI_CALL(0x004B0567u, sub_004B0567); /* call 0x004B0567 */

loc_004B11EC: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004B1250; /* je: equal / zero */

loc_004B11F2: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 5);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B11FCu); RECOMP_ABI_CALL(0x004BAB65u, sub_004BAB65); /* call 0x004BAB65 */

loc_004B11FC: ;
    PUSH32(esp, edi);
    ecx = ebp + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B1205u); RECOMP_ABI_CALL(0x004ABC14u, sub_004ABC14); /* call 0x004ABC14 */

loc_004B1205: ;
    PUSH32(esp, edi);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B120Du); RECOMP_ABI_CALL(0x004B0266u, sub_004B0266); /* call 0x004B0266 */

loc_004B120D: ;
    ebx = MEM32(esi + 0x14);
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(8)) >> 32) & 1);
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_BE(_fa, _fb)) goto loc_004B1243; /* jbe: below or equal (unsigned <=) */

loc_004B121B: ;
    edi = MEM32(ebp + 8);
    eax = edi + 0xC;
    _cf = (int)((edi) != 0);
    edi = (uint32_t)(-(int32_t)edi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    edi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    edi = edi & eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_004B1227: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B1231u); RECOMP_ABI_CALL(0x004DD726u, sub_004DD726); /* call 0x004DD726 */

loc_004B1231: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004B123Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B1238u); } /* indirect call */
    }

loc_004B123B: ;
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_004B1227; /* jb: below (unsigned <) */

loc_004B1243: ;
    ecx = MEM32(ebp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_004B1250; /* je: equal / zero */

loc_004B124B: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B1250u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004B1250: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004B1256
 * Original: 0x004B1256 - 0x004B12C9 (115 bytes, 48 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004B1256(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004B1256: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x10));
    esi = ecx;
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B1268u); RECOMP_ABI_CALL(0x004B0567u, sub_004B0567); /* call 0x004B0567 */

loc_004B1268: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004B12C3; /* je: equal / zero */

loc_004B126E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = ebp + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B1278u); RECOMP_ABI_CALL(0x004ABC14u, sub_004ABC14); /* call 0x004ABC14 */

loc_004B1278: ;
    PUSH32(esp, edi);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B1280u); RECOMP_ABI_CALL(0x004B0266u, sub_004B0266); /* call 0x004B0266 */

loc_004B1280: ;
    ebx = MEM32(esi + 0x14);
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(8)) >> 32) & 1);
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_BE(_fa, _fb)) goto loc_004B12B6; /* jbe: below or equal (unsigned <=) */

loc_004B128E: ;
    edi = MEM32(ebp + 8);
    eax = edi + 0xC;
    _cf = (int)((edi) != 0);
    edi = (uint32_t)(-(int32_t)edi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    edi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    edi = edi & eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_004B129A: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B12A4u); RECOMP_ABI_CALL(0x004DD726u, sub_004DD726); /* call 0x004DD726 */

loc_004B12A4: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 5);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004B12AEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B12ABu); } /* indirect call */
    }

loc_004B12AE: ;
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_004B129A; /* jb: below (unsigned <) */

loc_004B12B6: ;
    ecx = MEM32(ebp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_004B12C3; /* je: equal / zero */

loc_004B12BE: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B12C3u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004B12C3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004B12C9
 * Original: 0x004B12C9 - 0x004B1865 (1436 bytes, 508 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004B12C9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004B12C9: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x34));
    esp = esp - 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B12D7u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004B12D7: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x004B12DEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B12DBu); } /* indirect call */
    }

loc_004B12DE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_004B1862; /* jne: not equal / not zero */

loc_004B12E7: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x67616D65);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B12F5u); RECOMP_ABI_CALL(0x004B086Bu, sub_004B086B); /* call 0x004B086B */

loc_004B12F5: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x34);
    eax = MEM32(eax + 0x10);
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -16) = MEM32(ebp + -16) & 0;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -12) = MEM32(ebp + -12) & 0;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x70)) >> 32) & 1);
    eax = eax + 0x70;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -28) = eax;
    eax = MEM32(eax + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(ebp + -20) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_004B1736; /* jbe: below or equal (unsigned <=) */

loc_004B131F: ;
    ecx = MEM32(ebp + -28);
    PUSH32(esp, MEM32(ebp + -12));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(8)) >> 32) & 1);
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B132Du); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004B132D: ;
    ebx = 0x66726E64;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = edi;
    MEM32(ebp + -4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B133Eu); RECOMP_ABI_CALL(0x004B0548u, sub_004B0548); /* call 0x004B0548 */

loc_004B133E: ;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + -4);
    PUSH32(esp, ebx);
    ecx = edi;
    esi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B134Cu); RECOMP_ABI_CALL(0x004B0567u, sub_004B0567); /* call 0x004B0567 */

loc_004B134C: ;
    MEM32(ebp + -24) = eax;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x100); PUSH32(esp, 0x004B1359u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B1353u); } /* indirect call */
    }

loc_004B1359: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004B13F1; /* je: equal / zero */

loc_004B1361: ;
    MEM32(ebp + -16) = MEM32(ebp + -16) + 1;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_004B1426; /* jne: not equal / not zero */

loc_004B136E: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B1373u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004B1373: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x2C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B137Du); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004B137D: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_004B1392; /* je: equal / zero */

loc_004B1384: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + -4));
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B1390u); RECOMP_ABI_CALL(0x004BA4C4u, sub_004BA4C4); /* call 0x004BA4C4 */

loc_004B1390: ;
    goto loc_004B1394;

loc_004B1392: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004B1394: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B139Au); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004B139A: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B13A1u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004B13A1: ;
    esi = eax;
    PUSH32(esp, esi);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B13ABu); RECOMP_ABI_CALL(0x004B0224u, sub_004B0224); /* call 0x004B0224 */

loc_004B13AB: ;
    PUSH32(esp, esi);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B13B3u); RECOMP_ABI_CALL(0x004B04A6u, sub_004B04A6); /* call 0x004B04A6 */

loc_004B13B3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004B1426; /* je: equal / zero */

loc_004B13B7: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = edi + 8;
    eax = MEM32(ebx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(ebp + -32) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_004B1426; /* jbe: below or equal (unsigned <=) */

loc_004B13C8: ;
    eax = esi + 8;
    _cf = (int)((esi) != 0);
    esi = (uint32_t)(-(int32_t)esi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    esi = esi & eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_004B13D1: ;
    PUSH32(esp, MEM32(ebp + -8));
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B13DBu); RECOMP_ABI_CALL(0x004DD726u, sub_004DD726); /* call 0x004DD726 */

loc_004B13DB: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004B13E4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B13E2u); } /* indirect call */
    }

loc_004B13E4: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) + 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -32) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_004B13D1; /* jb: below (unsigned <) */

loc_004B13EF: ;
    goto loc_004B1426;

loc_004B13F1: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004B1426; /* je: equal / zero */

loc_004B13F5: ;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(ecx, MEM8(esi + 0x10));
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    { uint32_t _sv=(uint32_t)(LO8(ecx)), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        _cf = (int)((_sv >> (_sc - 1u)) & 1u);
        SET_LO8(ecx, _sv >> _sc);
        _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
      } }
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) & 3);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    if ((_fa != 0)) goto loc_004B1426; /* jne: not equal / not zero */

loc_004B1409: ;
    PUSH32(esp, esi);
    ecx = ebp + -36;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B1412u); RECOMP_ABI_CALL(0x004ABC14u, sub_004ABC14); /* call 0x004ABC14 */

loc_004B1412: ;
    PUSH32(esp, esi);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B141Au); RECOMP_ABI_CALL(0x004B02DEu, sub_004B02DE); /* call 0x004B02DE */

loc_004B141A: ;
    ecx = MEM32(ebp + -36);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004B1426; /* je: equal / zero */

loc_004B1421: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B1426u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004B1426: ;
    ebx = MEM32(ebp + -4);
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x114); PUSH32(esp, 0x004B1433u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B142Du); } /* indirect call */
    }

loc_004B1433: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004B147A; /* je: equal / zero */

loc_004B1437: ;
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -24), esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_004B14B2; /* jne: not equal / not zero */

loc_004B143E: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B1443u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004B1443: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x2C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B144Du); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004B144D: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_004B1461; /* je: equal / zero */

loc_004B1454: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B145Fu); RECOMP_ABI_CALL(0x004BA4C4u, sub_004BA4C4); /* call 0x004BA4C4 */

loc_004B145F: ;
    goto loc_004B1463;

loc_004B1461: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004B1463: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B1469u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004B1469: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B1470u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004B1470: ;
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B1478u); RECOMP_ABI_CALL(0x004B01E2u, sub_004B01E2); /* call 0x004B01E2 */

loc_004B1478: ;
    goto loc_004B14B2;

loc_004B147A: ;
    esi = MEM32(ebp + -24);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004B14B2; /* je: equal / zero */

loc_004B1481: ;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(ecx, MEM8(esi + 0x10));
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    { uint32_t _sv=(uint32_t)(LO8(ecx)), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        _cf = (int)((_sv >> (_sc - 1u)) & 1u);
        SET_LO8(ecx, _sv >> _sc);
        _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
      } }
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) & 3);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    if ((_fa != 0)) goto loc_004B14B2; /* jne: not equal / not zero */

loc_004B1495: ;
    PUSH32(esp, esi);
    ecx = ebp + -40;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B149Eu); RECOMP_ABI_CALL(0x004ABC14u, sub_004ABC14); /* call 0x004ABC14 */

loc_004B149E: ;
    PUSH32(esp, esi);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B14A6u); RECOMP_ABI_CALL(0x004B0266u, sub_004B0266); /* call 0x004B0266 */

loc_004B14A6: ;
    ecx = MEM32(ebp + -40);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004B14B2; /* je: equal / zero */

loc_004B14AD: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B14B2u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004B14B2: ;
    ebx = 0x67616D65;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + -4));
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B14C2u); RECOMP_ABI_CALL(0x004B0548u, sub_004B0548); /* call 0x004B0548 */

loc_004B14C2: ;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + -4));
    ecx = edi;
    esi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B14CFu); RECOMP_ABI_CALL(0x004B0567u, sub_004B0567); /* call 0x004B0567 */

loc_004B14CF: ;
    ecx = MEM32(ebp + -4);
    ebx = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xF8); PUSH32(esp, 0x004B14DCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B14D6u); } /* indirect call */
    }

loc_004B14DC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004B156F; /* je: equal / zero */

loc_004B14E4: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_004B15B3; /* jne: not equal / not zero */

loc_004B14EC: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B14F1u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004B14F1: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x2C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B14FBu); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004B14FB: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_004B1512; /* je: equal / zero */

loc_004B1502: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + -4));
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B1510u); RECOMP_ABI_CALL(0x004B8CCAu, sub_004B8CCA); /* call 0x004B8CCA */

loc_004B1510: ;
    goto loc_004B1514;

loc_004B1512: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004B1514: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B151Au); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004B151A: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B1521u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004B1521: ;
    esi = eax;
    PUSH32(esp, esi);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B152Bu); RECOMP_ABI_CALL(0x004B0224u, sub_004B0224); /* call 0x004B0224 */

loc_004B152B: ;
    PUSH32(esp, esi);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B1533u); RECOMP_ABI_CALL(0x004B04A6u, sub_004B04A6); /* call 0x004B04A6 */

loc_004B1533: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004B15B3; /* je: equal / zero */

loc_004B1537: ;
    eax = MEM32(edi + 0x14);
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(ebp + -32) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_004B15B3; /* jbe: below or equal (unsigned <=) */

loc_004B1545: ;
    eax = esi + 8;
    _cf = (int)((esi) != 0);
    esi = (uint32_t)(-(int32_t)esi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    esi = esi & eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_004B154E: ;
    PUSH32(esp, MEM32(ebp + -8));
    ecx = edi + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B1559u); RECOMP_ABI_CALL(0x004DD726u, sub_004DD726); /* call 0x004DD726 */

loc_004B1559: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004B1562u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B1560u); } /* indirect call */
    }

loc_004B1562: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) + 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -32) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_004B154E; /* jb: below (unsigned <) */

loc_004B156D: ;
    goto loc_004B15B3;

loc_004B156F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004B15B3; /* je: equal / zero */

loc_004B1573: ;
    eax = MEM32(esi + 0x14);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xF00;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x100 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_004B15B3; /* jne: not equal / not zero */

loc_004B1582: ;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(ecx, MEM8(esi + 0x10));
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    { uint32_t _sv=(uint32_t)(LO8(ecx)), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        _cf = (int)((_sv >> (_sc - 1u)) & 1u);
        SET_LO8(ecx, _sv >> _sc);
        _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
      } }
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) & 3);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    if ((_fa != 0)) goto loc_004B15B3; /* jne: not equal / not zero */

loc_004B1596: ;
    PUSH32(esp, esi);
    ecx = ebp + -44;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B159Fu); RECOMP_ABI_CALL(0x004ABC14u, sub_004ABC14); /* call 0x004ABC14 */

loc_004B159F: ;
    PUSH32(esp, esi);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B15A7u); RECOMP_ABI_CALL(0x004B02DEu, sub_004B02DE); /* call 0x004B02DE */

loc_004B15A7: ;
    ecx = MEM32(ebp + -44);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004B15B3; /* je: equal / zero */

loc_004B15AE: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B15B3u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004B15B3: ;
    esi = MEM32(ebp + -4);
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10C); PUSH32(esp, 0x004B15C0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B15BAu); } /* indirect call */
    }

loc_004B15C0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004B1699; /* je: equal / zero */

loc_004B15C8: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_004B160D; /* jne: not equal / not zero */

loc_004B15CC: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B15D1u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004B15D1: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x2C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B15DBu); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004B15DB: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_004B15F1; /* je: equal / zero */

loc_004B15E2: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B15EFu); RECOMP_ABI_CALL(0x004B8CCAu, sub_004B8CCA); /* call 0x004B8CCA */

loc_004B15EF: ;
    goto loc_004B15F3;

loc_004B15F1: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004B15F3: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B15F9u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004B15F9: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B1600u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004B1600: ;
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B1608u); RECOMP_ABI_CALL(0x004B01E2u, sub_004B01E2); /* call 0x004B01E2 */

loc_004B1608: ;
    goto loc_004B1727;

loc_004B160D: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B1614u); RECOMP_ABI_CALL(0x004AD84Cu, sub_004AD84C); /* call 0x004AD84C */

loc_004B1614: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004B1727; /* je: equal / zero */

loc_004B161C: ;
    eax = MEM32(ebx + 0x14);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 5 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_004B1679; /* je: equal / zero */

loc_004B1626: ;
    PUSH32(esp, MEM32(ebp + -4));
    ecx = edi + 0xD4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B1634u); RECOMP_ABI_CALL(0x004AFE27u, sub_004AFE27); /* call 0x004AFE27 */

loc_004B1634: ;
    PUSH32(esp, 5);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B163Du); RECOMP_ABI_CALL(0x004BAB65u, sub_004BAB65); /* call 0x004BAB65 */

loc_004B163D: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = edi + 8;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(ebp + -32) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_004B1727; /* jbe: below or equal (unsigned <=) */

loc_004B1652: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(0xC)) >> 32) & 1);
    ebx = ebx + 0xC;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004B1655: ;
    PUSH32(esp, MEM32(ebp + -8));
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B165Fu); RECOMP_ABI_CALL(0x004DD726u, sub_004DD726); /* call 0x004DD726 */

loc_004B165F: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004B1669u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B1666u); } /* indirect call */
    }

loc_004B1669: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) + 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -32) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_004B1655; /* jb: below (unsigned <) */

loc_004B1674: ;
    goto loc_004B1727;

loc_004B1679: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B1680u); RECOMP_ABI_CALL(0x004ACB7Du, sub_004ACB7D); /* call 0x004ACB7D */

loc_004B1680: ;
    PUSH32(esp, ebx);
    ecx = ebp + -48;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B1689u); RECOMP_ABI_CALL(0x004ABC14u, sub_004ABC14); /* call 0x004ABC14 */

loc_004B1689: ;
    PUSH32(esp, ebx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B1691u); RECOMP_ABI_CALL(0x004B0266u, sub_004B0266); /* call 0x004B0266 */

loc_004B1691: ;
    ecx = MEM32(ebp + -48);
    goto loc_004B171E;

loc_004B1699: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004B1727; /* je: equal / zero */

loc_004B16A1: ;
    eax = MEM32(ebx + 0x14);
    ecx = eax;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0xF00;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x100 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_004B1727; /* jne: not equal / not zero */

loc_004B16B4: ;
    _fa = (uint32_t)(MEM32(ebx + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x18), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(edx, MEM8(ebx + 0x10));
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    { uint32_t _sv=(uint32_t)(LO8(edx)), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        _cf = (int)((_sv >> (_sc - 1u)) & 1u);
        SET_LO8(edx, _sv >> _sc);
        _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
      } }
    _cf = 0; /* logical op clears CF */
    SET_LO8(edx, LO8(edx) & 3);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) | LO8(edx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    if ((_fa != 0)) goto loc_004B1727; /* jne: not equal / not zero */

loc_004B16C8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xF (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_004B170A; /* jne: not equal / not zero */

loc_004B16CC: ;
    PUSH32(esp, 3);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B16D5u); RECOMP_ABI_CALL(0x004BAB65u, sub_004BAB65); /* call 0x004BAB65 */

loc_004B16D5: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = edi + 8;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(ebp + -32) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_004B1727; /* jbe: below or equal (unsigned <=) */

loc_004B16E6: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(0xC)) >> 32) & 1);
    ebx = ebx + 0xC;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004B16E9: ;
    PUSH32(esp, MEM32(ebp + -8));
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B16F3u); RECOMP_ABI_CALL(0x004DD726u, sub_004DD726); /* call 0x004DD726 */

loc_004B16F3: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004B16FDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B16FAu); } /* indirect call */
    }

loc_004B16FD: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) + 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -32) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_004B16E9; /* jb: below (unsigned <) */

loc_004B1708: ;
    goto loc_004B1727;

loc_004B170A: ;
    PUSH32(esp, ebx);
    ecx = ebp + -52;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B1713u); RECOMP_ABI_CALL(0x004ABC14u, sub_004ABC14); /* call 0x004ABC14 */

loc_004B1713: ;
    PUSH32(esp, ebx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B171Bu); RECOMP_ABI_CALL(0x004B0266u, sub_004B0266); /* call 0x004B0266 */

loc_004B171B: ;
    ecx = MEM32(ebp + -52);

loc_004B171E: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004B1727; /* je: equal / zero */

loc_004B1722: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B1727u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004B1727: ;
    MEM32(ebp + -12) = MEM32(ebp + -12) + 1;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + -12);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -20) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_004B131F; /* jb: below (unsigned <) */

loc_004B1736: ;
    PUSH32(esp, 0x66726E64);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B1742u); RECOMP_ABI_CALL(0x004AFBDAu, sub_004AFBDA); /* call 0x004AFBDA */

loc_004B1742: ;
    eax = MEM32(edi + eax * 4 + 0x2C);
    ecx = MEM32(eax + 0x14);
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_004B17E2; /* je: equal / zero */

loc_004B1752: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + -16) = ecx;
    if ((_fas < 0)) goto loc_004B17E2; /* js: sign (negative) */

loc_004B175C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -52) = eax;

loc_004B1762: ;
    PUSH32(esp, MEM32(ebp + -16));
    ecx = MEM32(ebp + -52);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B176Du); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004B176D: ;
    esi = eax;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(ecx, MEM8(esi + 0x10));
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    { uint32_t _sv=(uint32_t)(LO8(ecx)), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        _cf = (int)((_sv >> (_sc - 1u)) & 1u);
        SET_LO8(ecx, _sv >> _sc);
        _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
      } }
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) & 3);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    if ((_fa != 0)) goto loc_004B17DD; /* jne: not equal / not zero */

loc_004B1783: ;
    ecx = esi + 8;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004B178Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B1788u); } /* indirect call */
    }

loc_004B178A: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -12) = MEM32(ebp + -12) & 0;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(ebp + -24) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_004B17C0; /* jbe: below or equal (unsigned <=) */

loc_004B1797: ;
    eax = MEM32(ebp + -24);
    ecx = MEM32(ebp + -28);
    PUSH32(esp, MEM32(ebp + -12));
    ebx = MEM32(eax);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(8)) >> 32) & 1);
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B17AAu); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004B17AA: ;
    ecx = MEM32(ebp + -24);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ebx + 0x18); PUSH32(esp, 0x004B17B1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B17AEu); } /* indirect call */
    }

loc_004B17B1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_004B17DD; /* jne: not equal / not zero */

loc_004B17B5: ;
    MEM32(ebp + -12) = MEM32(ebp + -12) + 1;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + -12);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -20) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_004B1797; /* jb: below (unsigned <) */

loc_004B17C0: ;
    PUSH32(esp, esi);
    ecx = ebp + -48;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B17C9u); RECOMP_ABI_CALL(0x004ABC14u, sub_004ABC14); /* call 0x004ABC14 */

loc_004B17C9: ;
    PUSH32(esp, esi);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B17D1u); RECOMP_ABI_CALL(0x004B02DEu, sub_004B02DE); /* call 0x004B02DE */

loc_004B17D1: ;
    ecx = MEM32(ebp + -48);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004B17DD; /* je: equal / zero */

loc_004B17D8: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B17DDu); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004B17DD: ;
    MEM32(ebp + -16) = MEM32(ebp + -16) - 1;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_004B1762; /* jns: not sign (positive) */

loc_004B17E2: ;
    PUSH32(esp, 0x67616D65);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B17EEu); RECOMP_ABI_CALL(0x004AFBDAu, sub_004AFBDA); /* call 0x004AFBDA */

loc_004B17EE: ;
    eax = MEM32(edi + eax * 4 + 0x44);
    ebx = MEM32(eax + 0x14);
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_004B1860; /* js: sign (negative) */

loc_004B17F8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -52) = eax;

loc_004B17FE: ;
    ecx = MEM32(ebp + -52);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B1807u); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004B1807: ;
    esi = eax;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(ecx, MEM8(esi + 0x10));
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    { uint32_t _sv=(uint32_t)(LO8(ecx)), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        _cf = (int)((_sv >> (_sc - 1u)) & 1u);
        SET_LO8(ecx, _sv >> _sc);
        _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
      } }
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) & 3);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    if ((_fa != 0)) goto loc_004B183E; /* jne: not equal / not zero */

loc_004B181D: ;
    eax = MEM32(esi + 0x14);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xF00;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x100 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_004B183E; /* jne: not equal / not zero */

loc_004B182C: ;
    ecx = esi + 8;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004B1833u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B1831u); } /* indirect call */
    }

loc_004B1833: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x004B183Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B1837u); } /* indirect call */
    }

loc_004B183A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004B1843; /* je: equal / zero */

loc_004B183E: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_004B17FE; /* jns: not sign (positive) */

loc_004B1841: ;
    goto loc_004B1860;

loc_004B1843: ;
    PUSH32(esp, esi);
    ecx = ebp + -52;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B184Cu); RECOMP_ABI_CALL(0x004ABC14u, sub_004ABC14); /* call 0x004ABC14 */

loc_004B184C: ;
    PUSH32(esp, esi);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B1854u); RECOMP_ABI_CALL(0x004B0266u, sub_004B0266); /* call 0x004B0266 */

loc_004B1854: ;
    ecx = MEM32(ebp + -52);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004B1860; /* je: equal / zero */

loc_004B185B: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B1860u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004B1860: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_004B1862: ;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004B1865
 * Original: 0x004B1865 - 0x004B18D8 (115 bytes, 49 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004B1865(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B1865: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 8));
    edi = ecx;
    MEM32(ebp + -4) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B1878u); RECOMP_ABI_CALL(0x004AFBDAu, sub_004AFBDA); /* call 0x004AFBDA */

loc_004B1878: ;
    edi = edi + eax * 4 + 0x2C;
    eax = MEM32(edi);
    esi = MEM32(eax + 0x14);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_004B18C7; /* js: sign (negative) */

loc_004B1884: ;
    PUSH32(esp, ebx);

loc_004B1885: ;
    eax = MEM32(edi);
    PUSH32(esp, esi);
    ecx = eax + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B1890u); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004B1890: ;
    SET_LO8(ecx, MEM8(eax + 0x10));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 3 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_004B18C3; /* jne: not equal / not zero */

loc_004B1898: ;
    _fa = (uint32_t)(MEM32(eax + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x18), 0 (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    { uint32_t _sv=(uint32_t)(LO8(ecx)), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        SET_LO8(ecx, _sv >> _sc);
        _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
      } }
    SET_LO8(ecx, LO8(ecx) & 3);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(edx, LO8(edx) | LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    if ((_fa != 0)) goto loc_004B18C3; /* jne: not equal / not zero */

loc_004B18A9: ;
    ebx = eax + 8;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x004B18B3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B18B0u); } /* indirect call */
    }

loc_004B18B3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004B18C3; /* jne: not equal / not zero */

loc_004B18B7: ;
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x004B18C3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B18C0u); } /* indirect call */
    }

loc_004B18C3: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_004B1885; /* jns: not sign (positive) */

loc_004B18C6: ;
    POP32(esp, ebx);

loc_004B18C7: ;
    PUSH32(esp, MEM32(ebp + 8));
    ecx = MEM32(ebp + -4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B18D2u); RECOMP_ABI_CALL(0x004B080Fu, sub_004B080F); /* call 0x004B080F */

loc_004B18D2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004B18D8
 * Original: 0x004B18D8 - 0x004B1939 (97 bytes, 32 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B18D8(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B18D8: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx + -40;
    ebx = 0x67616D65;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x004B18EBu); RECOMP_ABI_CALL(0x004B086Bu, sub_004B086B); /* call 0x004B086B */

loc_004B18EB: ;
    PUSH32(esp, 0x66726E64);
    ecx = esi;
    PUSH32(esp, 0x004B18F7u); RECOMP_ABI_CALL(0x004B086Bu, sub_004B086B); /* call 0x004B086B */

loc_004B18F7: ;
    edi = 0x766F6970;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x004B1904u); RECOMP_ABI_CALL(0x004B086Bu, sub_004B086B); /* call 0x004B086B */

loc_004B1904: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x004B190Cu); RECOMP_ABI_CALL(0x004B0586u, sub_004B0586); /* call 0x004B0586 */

loc_004B190C: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x004B1914u); RECOMP_ABI_CALL(0x004B0586u, sub_004B0586); /* call 0x004B0586 */

loc_004B1914: ;
    MEM32(0x90E414) = MEM32(0x90E414) + 1;
    _fa = (uint32_t)(MEM32(0x90E414)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(0x90E414)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x90E414), 0x1E (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004B1931; /* jne: not equal / not zero */

loc_004B1923: ;
    ecx = esi;
    PUSH32(esp, 0x004B192Au); RECOMP_ABI_CALL(0x004B12C9u, sub_004B12C9); /* call 0x004B12C9 */

loc_004B192A: ;
    MEM32(0x90E414) = MEM32(0x90E414) & 0;
    _fa = (uint32_t)(MEM32(0x90E414)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_004B1931: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B1939
 * Original: 0x004B1939 - 0x004B1A7F (326 bytes, 115 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004B1939(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B1939: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0x10));
    edi = ecx;
    ecx = ebp + -60;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B1951u); RECOMP_ABI_CALL(0x004DCC43u, sub_004DCC43); /* call 0x004DCC43 */

loc_004B1951: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x864268);
    ecx = ebp + -60;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B1960u); RECOMP_ABI_CALL(0x004DD187u, sub_004DD187); /* call 0x004DD187 */

loc_004B1960: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x1000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004B1A71; /* je: equal / zero */

loc_004B196B: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B1970u); RECOMP_ABI_CALL(0x004DC96Bu, sub_004DC96B); /* call 0x004DC96B */

loc_004B1970: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(0x8636D0));
    ecx = ebp + -28;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B197Fu); RECOMP_ABI_CALL(0x004DD979u, sub_004DD979); /* call 0x004DD979 */

loc_004B197F: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x864264);
    PUSH32(esp, MEM32(esi + 0x10));
    ecx = ebp + -28;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B1991u); RECOMP_ABI_CALL(0x004DDAF9u, sub_004DDAF9); /* call 0x004DDAF9 */

loc_004B1991: ;
    PUSH32(esp, 0x864260);
    ecx = ebp + -60;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B199Eu); RECOMP_ABI_CALL(0x004DD0BEu, sub_004DD0BE); /* call 0x004DD0BE */

loc_004B199E: ;
    esi = eax;
    eax = MEM32(esi);
    ecx = esi;
    _fb = (uint32_t)(0xFFFFFFDCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xFFFFFFDCu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x004B19AAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B19A7u); } /* indirect call */
    }

loc_004B19AA: ;
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B19B2u); RECOMP_ABI_CALL(0x004AFD1Cu, sub_004AFD1C); /* call 0x004AFD1C */

loc_004B19B2: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    MEM32(ebp + -8) = eax;
    eax = MEM32(esi);
    PUSH32(esp, 0x830C60);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004B19C3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B19C0u); } /* indirect call */
    }

loc_004B19C3: ;
    MEM32(ebp + 0xC) = eax;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x864258);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x4C); PUSH32(esp, 0x004B19D2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B19CFu); } /* indirect call */
    }

loc_004B19D2: ;
    MEM32(ebp + -4) = eax;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x34);
    esi = MEM32(eax + 0x28);
    eax = MEM32(ebp + -28);
    ecx = ebp + -28;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004B19ECu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B19E9u); } /* indirect call */
    }

loc_004B19EC: ;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B19F4u); RECOMP_ABI_CALL(0x004AE415u, sub_004AE415); /* call 0x004AE415 */

loc_004B19F4: ;
    ecx = MEM32(ebp + -8);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_004B1A5B; /* je: equal / zero */

loc_004B19FC: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_004B1A4B; /* je: equal / zero */

loc_004B19FF: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_004B1A3B; /* je: equal / zero */

loc_004B1A02: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_004B1A2B; /* je: equal / zero */

loc_004B1A05: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_004B1A1B; /* je: equal / zero */

loc_004B1A08: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_004B1A69; /* jne: not equal / not zero */

loc_004B1A0B: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = edi;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B1A19u); RECOMP_ABI_CALL(0x004B1256u, sub_004B1256); /* call 0x004B1256 */

loc_004B1A19: ;
    goto loc_004B1A69;

loc_004B1A1B: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = edi;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B1A29u); RECOMP_ABI_CALL(0x004B11DAu, sub_004B11DA); /* call 0x004B11DA */

loc_004B1A29: ;
    goto loc_004B1A69;

loc_004B1A2B: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = edi;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B1A39u); RECOMP_ABI_CALL(0x004B10FDu, sub_004B10FD); /* call 0x004B10FD */

loc_004B1A39: ;
    goto loc_004B1A69;

loc_004B1A3B: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = edi;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B1A49u); RECOMP_ABI_CALL(0x004B1020u, sub_004B1020); /* call 0x004B1020 */

loc_004B1A49: ;
    goto loc_004B1A69;

loc_004B1A4B: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = edi;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B1A59u); RECOMP_ABI_CALL(0x004B0FA5u, sub_004B0FA5); /* call 0x004B0FA5 */

loc_004B1A59: ;
    goto loc_004B1A69;

loc_004B1A5B: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = edi;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B1A69u); RECOMP_ABI_CALL(0x004B0E64u, sub_004B0E64); /* call 0x004B0E64 */

loc_004B1A69: ;
    ecx = ebp + -28;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B1A71u); RECOMP_ABI_CALL(0x004DDA4Fu, sub_004DDA4F); /* call 0x004DDA4F */

loc_004B1A71: ;
    ecx = ebp + -60;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B1A79u); RECOMP_ABI_CALL(0x004DCC7Fu, sub_004DCC7F); /* call 0x004DCC7F */

loc_004B1A79: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004B1A7F
 * Original: 0x004B1A7F - 0x004B1A99 (26 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B1A7F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B1A7F: ;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x38)); return; /* indirect tail jmp */

    g_seh_ebp = ebp; sub_004DD57D(); return; /* tail jmp 0x004DD57D */

    eax = ecx;
    MEM32(eax) = 0x86426C;
    esp += 4; return; /* ret */

}

/**
 * sub_004B1A99
 * Original: 0x004B1A99 - 0x004B1AB6 (29 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B1A99(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B1A99: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x86426C;
    if (TEST_Z(_fa, _fb)) goto loc_004B1AB0; /* je: equal / zero */

loc_004B1AA9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004B1AAFu); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_004B1AAF: ;
    POP32(esp, ecx);

loc_004B1AB0: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B1AB6
 * Original: 0x004B1AB6 - 0x004B1AD8 (34 bytes, 11 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B1AB6(void)
{

loc_004B1AB6: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004B1ABEu); RECOMP_ABI_CALL(0x004BB397u, sub_004BB397); /* call 0x004BB397 */

loc_004B1ABE: ;
    eax = MEM32(esp + 8);
    MEM32(esi + 8) = eax;
    eax = MEM32(esp + 0xC);
    MEM32(esi + 0xC) = eax;
    MEM32(esi) = 0x864274;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004B1AE3
 * Original: 0x004B1AE3 - 0x004B1B05 (34 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B1AE3(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B1AE3: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x864274;
    PUSH32(esp, 0x004B1AF1u); RECOMP_ABI_CALL(0x004BB3A9u, sub_004BB3A9); /* call 0x004BB3A9 */

loc_004B1AF1: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004B1AFF; /* je: equal / zero */

loc_004B1AF8: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004B1AFEu); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004B1AFE: ;
    POP32(esp, ecx);

loc_004B1AFF: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B1B05
 * Original: 0x004B1B05 - 0x004B1B17 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B1B05(void)
{

loc_004B1B05: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004B1B0Du); RECOMP_ABI_CALL(0x004E36A2u, sub_004E36A2); /* call 0x004E36A2 */

loc_004B1B0D: ;
    MEM32(esi) = 0x864278;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004B1B22
 * Original: 0x004B1B22 - 0x004B1B49 (39 bytes, 15 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B1B22(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004B1B22: ;
    eax = MEM32(esp + 8);
    edx = MEM32(eax + 8);
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 8) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_004B1B3E; /* jne: not equal / not zero */

loc_004B1B32: ;
    edx = MEM32(eax + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 0xC) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_004B1B3E; /* jne: not equal / not zero */

loc_004B1B3A: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_004B1B46;

loc_004B1B3E: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_004B1B46: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004B1B49
 * Original: 0x004B1B49 - 0x004B1B6B (34 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B1B49(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B1B49: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x864278;
    PUSH32(esp, 0x004B1B57u); RECOMP_ABI_CALL(0x004E36B4u, sub_004E36B4); /* call 0x004E36B4 */

loc_004B1B57: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004B1B65; /* je: equal / zero */

loc_004B1B5E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004B1B64u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004B1B64: ;
    POP32(esp, ecx);

loc_004B1B65: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B1B7B
 * Original: 0x004B1B7B - 0x004B1BA8 (45 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B1B7B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B1B7B: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x864280;
    if (TEST_Z(_fa, _fb)) goto loc_004B1B92; /* je: equal / zero */

loc_004B1B8B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004B1B91u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_004B1B91: ;
    POP32(esp, ecx);

loc_004B1B92: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B1BA8
 * Original: 0x004B1BA8 - 0x004B1BCD (37 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B1BA8(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B1BA8: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x864288;
    if (TEST_Z(_fa, _fb)) goto loc_004B1BBF; /* je: equal / zero */

loc_004B1BB8: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004B1BBEu); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_004B1BBE: ;
    POP32(esp, ecx);

loc_004B1BBF: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B1BCD
 * Original: 0x004B1BCD - 0x004B1C21 (84 bytes, 27 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B1BCD(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B1BCD: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0xC));
    esi = ecx;
    eax = MEM32(esi + 0x164);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x004B1BE3u); RECOMP_ABI_CALL(0x005CFF90u, sub_005CFF90); /* call 0x005CFF90 */

loc_004B1BE3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004B1BF4; /* je: equal / zero */

loc_004B1BE9: ;
    eax = MEM32(esi + 0x164);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004B1C1D; /* jne: not equal / not zero */

loc_004B1BF4: ;
    eax = MEM32(esi + 0x164);
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = MEM32(esp + 0xC);
    MEM32(eax) = ecx;
    eax = MEM32(esi + 0x164);
    PUSH32(esp, 0x7E1290);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 5);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004B1C1Au); RECOMP_ABI_CALL(0x004E3665u, sub_004E3665); /* call 0x004E3665 */

loc_004B1C1A: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004B1C1D: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004B1C21
 * Original: 0x004B1C21 - 0x004B1C4B (42 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B1C21(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B1C21: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0xC));
    esi = ecx + 0x164;
    eax = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x004B1C3Au); RECOMP_ABI_CALL(0x005CFF90u, sub_005CFF90); /* call 0x005CFF90 */

loc_004B1C3A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_004B1C44; /* jne: not equal / not zero */

loc_004B1C40: ;
    eax = MEM32(esi);
    edi = MEM32(eax);

loc_004B1C44: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B1C4B
 * Original: 0x004B1C4B - 0x004B1C5B (16 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B1C4B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B1C4B: ;
    ecx = MEM32(esp + 0xC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ecx + 0x130)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x130), eax (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

}

/**
 * sub_004B1C5B
 * Original: 0x004B1C5B - 0x004B1C76 (27 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B1C5B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B1C5B: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), 0 (32-bit) */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = MEM32(esp + 8);
    PUSH32(esp, MEM32(esp + 0x10));
    eax = MEM32(ecx);
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004B1C75u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B1C72u); } /* indirect call */
    }

loc_004B1C75: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004B1C76
 * Original: 0x004B1C76 - 0x004B1C88 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B1C76(void)
{

loc_004B1C76: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004B1C7Eu); RECOMP_ABI_CALL(0x004BB3D6u, sub_004BB3D6); /* call 0x004BB3D6 */

loc_004B1C7E: ;
    MEM32(esi) = 0x864290;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004B1C88
 * Original: 0x004B1C88 - 0x004B1C8E (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B1C88(void)
{

loc_004B1C88: ;
    eax = 0x86429C;
    esp += 4; return; /* ret */

}

/**
 * sub_004B1C8E
 * Original: 0x004B1C8E - 0x004B1CBC (46 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004B1C8E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B1C8E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fa = (uint32_t)(MEM8(ebp + 8)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 8), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B1CA3; /* je: equal / zero */

loc_004B1C97: ;
    eax = MEM32(ebp + 0x10);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0xC);
    goto loc_004B1CAD;

loc_004B1CA3: ;
    eax = MEM32(ebp + 0xC);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x10);

loc_004B1CAD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B1CB6u); RECOMP_ABI_CALL(0x005E85C0u, sub_005E85C0); /* call 0x005E85C0 */

loc_004B1CB6: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004B1CBC
 * Original: 0x004B1CBC - 0x004B1CDE (34 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B1CBC(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B1CBC: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x864290;
    PUSH32(esp, 0x004B1CCAu); RECOMP_ABI_CALL(0x004BB3E8u, sub_004BB3E8); /* call 0x004BB3E8 */

loc_004B1CCA: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004B1CD8; /* je: equal / zero */

loc_004B1CD1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004B1CD7u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004B1CD7: ;
    POP32(esp, ecx);

loc_004B1CD8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B1CDE
 * Original: 0x004B1CDE - 0x004B1CF0 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B1CDE(void)
{

loc_004B1CDE: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004B1CE6u); RECOMP_ABI_CALL(0x004BB3D6u, sub_004BB3D6); /* call 0x004BB3D6 */

loc_004B1CE6: ;
    MEM32(esi) = 0x8642A4;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004B1CF0
 * Original: 0x004B1CF0 - 0x004B1CF6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B1CF0(void)
{

loc_004B1CF0: ;
    eax = 0x8642B0;
    esp += 4; return; /* ret */

}

/**
 * sub_004B1CF6
 * Original: 0x004B1CF6 - 0x004B1D9B (165 bytes, 74 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004B1CF6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B1CF6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    esi = 0x7E0D78;
    eax = edi + 0x18;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B1D13u); RECOMP_ABI_CALL(0x005CC4B1u, sub_005CC4B1); /* call 0x005CC4B1 */

loc_004B1D13: ;
    ebx = MEM32(ebp + 0x10);
    eax = ebp + -4;
    PUSH32(esp, eax);
    eax = ebx + 0x18;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B1D24u); RECOMP_ABI_CALL(0x005CC4B1u, sub_005CC4B1); /* call 0x005CC4B1 */

loc_004B1D24: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B1D2Cu); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004B1D2C: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x004B1D33u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B1D30u); } /* indirect call */
    }

loc_004B1D33: ;
    esi = eax;
    eax = MEM32(esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x004B1D40u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B1D3Du); } /* indirect call */
    }

loc_004B1D40: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B1D46u); RECOMP_ABI_CALL(0x005E85C0u, sub_005E85C0); /* call 0x005E85C0 */

loc_004B1D46: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_004B1D53; /* jne: not equal / not zero */

loc_004B1D4C: ;
    MEM32(ebp + 0xC) = 0x1E;

loc_004B1D53: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x004B1D5Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B1D5Bu); } /* indirect call */
    }

loc_004B1D5E: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B1D64u); RECOMP_ABI_CALL(0x005E85C0u, sub_005E85C0); /* call 0x005E85C0 */

loc_004B1D64: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_004B1D72; /* jne: not equal / not zero */

loc_004B1D6A: ;
    PUSH32(esp, 0x1E);
    POP32(esp, ecx);
    MEM32(ebp + -4) = ecx;
    goto loc_004B1D75;

loc_004B1D72: ;
    ecx = MEM32(ebp + -4);

loc_004B1D75: ;
    _fa = (uint32_t)(MEM8(ebp + 8)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 8), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B1D82; /* je: equal / zero */

loc_004B1D7B: ;
    eax = MEM32(ebp + 0xC);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_004B1D87;

loc_004B1D82: ;
    _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(ebp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ecx;

loc_004B1D87: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004B1D94; /* jne: not equal / not zero */

loc_004B1D8B: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B1D92u); RECOMP_ABI_CALL(0x005E85C0u, sub_005E85C0); /* call 0x005E85C0 */

loc_004B1D92: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_004B1D94: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004B1D9B
 * Original: 0x004B1D9B - 0x004B1DBD (34 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B1D9B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B1D9B: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x8642A4;
    PUSH32(esp, 0x004B1DA9u); RECOMP_ABI_CALL(0x004BB3E8u, sub_004BB3E8); /* call 0x004BB3E8 */

loc_004B1DA9: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004B1DB7; /* je: equal / zero */

loc_004B1DB0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004B1DB6u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004B1DB6: ;
    POP32(esp, ecx);

loc_004B1DB7: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B1DBD
 * Original: 0x004B1DBD - 0x004B1DCF (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B1DBD(void)
{

loc_004B1DBD: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004B1DC5u); RECOMP_ABI_CALL(0x004BB3D6u, sub_004BB3D6); /* call 0x004BB3D6 */

loc_004B1DC5: ;
    MEM32(esi) = 0x8642B8;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004B1DCF
 * Original: 0x004B1DCF - 0x004B1DD5 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B1DCF(void)
{

loc_004B1DCF: ;
    eax = 0x8642C4;
    esp += 4; return; /* ret */

}

/**
 * sub_004B1DD5
 * Original: 0x004B1DD5 - 0x004B1E42 (109 bytes, 46 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B1DD5(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B1DD5: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 0x13C);
    edx = 0x3FF;
    PUSH32(esp, 0x63);
    ecx = ecx & edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004B1DF1; /* jbe: below or equal (unsigned <=) */

loc_004B1DED: ;
    ecx = eax;
    goto loc_004B1DF9;

loc_004B1DF1: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_004B1DF9; /* jae: above or equal (unsigned >=) */

loc_004B1DF6: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_004B1DF9: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    esi = MEM32(edi + 0x13C);
    esi = esi & edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_004B1E17; /* ja: above (unsigned >) */

loc_004B1E0B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_004B1E15; /* jae: above or equal (unsigned >=) */

loc_004B1E10: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_004B1E17;

loc_004B1E15: ;
    eax = esi;

loc_004B1E17: ;
    _fa = (uint32_t)(MEM8(esp + 0xC)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0xC), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B1E22; /* je: equal / zero */

loc_004B1E1E: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_004B1E26;

loc_004B1E22: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ecx;

loc_004B1E26: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004B1E3D; /* jne: not equal / not zero */

loc_004B1E2A: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004B1E3Bu); RECOMP_ABI_CALL(0x005E85C0u, sub_005E85C0); /* call 0x005E85C0 */

loc_004B1E3B: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_004B1E3D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004B1E42
 * Original: 0x004B1E42 - 0x004B1E64 (34 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B1E42(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B1E42: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x8642B8;
    PUSH32(esp, 0x004B1E50u); RECOMP_ABI_CALL(0x004BB3E8u, sub_004BB3E8); /* call 0x004BB3E8 */

loc_004B1E50: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004B1E5E; /* je: equal / zero */

loc_004B1E57: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004B1E5Du); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004B1E5D: ;
    POP32(esp, ecx);

loc_004B1E5E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B1E64
 * Original: 0x004B1E64 - 0x004B1E83 (31 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B1E64(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B1E64: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 8;
    MEM32(esi) = 0x8642E0;
    MEM32(ecx) = 0x8642D0;
    PUSH32(esp, 0x004B1E7Bu); RECOMP_ABI_CALL(0x004E310Cu, sub_004E310C); /* call 0x004E310C */

loc_004B1E7B: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004DD576(); return; /* tail jmp 0x004DD576 */

}

/**
 * sub_004B1E83
 * Original: 0x004B1E83 - 0x004B1EA2 (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B1E83(void)
{

loc_004B1E83: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004B1E8Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B1E8Du); } /* indirect call */
    }

loc_004B1E8F: ;
    ecx = esi + -8;
    MEM8(0x90E418) = 0;
    PUSH32(esp, 0x004B1E9Eu); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004B1E9E: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B1EA2
 * Original: 0x004B1EA2 - 0x004B1ED4 (50 bytes, 25 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B1EA2(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B1EA2: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_004B1ED0; /* je: equal / zero */

loc_004B1EAF: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_004B1EB8; /* je: equal / zero */

loc_004B1EB2: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_004B1EC1; /* jne: not equal / not zero */

loc_004B1EB5: ;
    PUSH32(esp, ebx);
    goto loc_004B1EBA;

loc_004B1EB8: ;
    PUSH32(esp, 1);

loc_004B1EBA: ;
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004B1EC1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B1EBFu); } /* indirect call */
    }

loc_004B1EC1: ;
    ecx = esi + -8;
    PUSH32(esp, 0x004B1EC9u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004B1EC9: ;
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_004B1ED0: ;
    SET_LO8(ebx, 1);
    goto loc_004B1EC9;

}

/**
 * sub_004B1EE7
 * Original: 0x004B1EE7 - 0x004B1F0B (36 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B1EE7(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B1EE7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(0x90E418)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x90E418), LO8(eax) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B1F0A; /* je: equal / zero */

loc_004B1EF1: ;
    edx = MEM32(esp + 8);
    MEM8(0x90E418) = LO8(eax);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(edx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0xC), eax (32-bit) */
    eax = MEM32(esp + 0xC);
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + 0x10) = ecx;

loc_004B1F0A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004B1F0B
 * Original: 0x004B1F0B - 0x004B1F2A (31 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B1F0B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B1F0B: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 8;
    MEM32(esi) = 0x8642F4;
    MEM32(ecx) = 0x8642E4;
    PUSH32(esp, 0x004B1F22u); RECOMP_ABI_CALL(0x004E310Cu, sub_004E310C); /* call 0x004E310C */

loc_004B1F22: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004DD576(); return; /* tail jmp 0x004DD576 */

}

/**
 * sub_004B1F2A
 * Original: 0x004B1F2A - 0x004B1F66 (60 bytes, 27 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B1F2A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B1F2A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_004B1F62; /* je: equal / zero */

loc_004B1F37: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_004B1F53; /* jne: not equal / not zero */

loc_004B1F3B: ;
    PUSH32(esp, 0x004B1F40u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004B1F40: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x004B1F47u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B1F44u); } /* indirect call */
    }

loc_004B1F47: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi + 8));
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004B1F53u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B1F50u); } /* indirect call */
    }

loc_004B1F53: ;
    ecx = esi + -8;
    PUSH32(esp, 0x004B1F5Bu); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004B1F5B: ;
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_004B1F62: ;
    SET_LO8(ebx, 1);
    goto loc_004B1F5B;

}

/**
 * sub_004B1F66
 * Original: 0x004B1F66 - 0x004B203E (216 bytes, 79 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004B1F66(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B1F66: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x004B1F70u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004B1F70: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x004B1F77u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B1F74u); } /* indirect call */
    }

loc_004B1F77: ;
    ecx = MEM32(esp + 0x10);
    edi = eax;
    eax = MEM32(ecx + 0xC);
    edx = 0x66756C6C;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_004B2025; /* jg: greater (signed >) */

loc_004B1F8F: ;
    if (CMP_EQ(_fa, _fb)) goto loc_004B2021; /* je: equal / zero */

loc_004B1F95: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B1FCD; /* je: equal / zero */

loc_004B1F99: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x61757468) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x61757468 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B1FB2; /* je: equal / zero */

loc_004B1FA0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6475706C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x6475706C (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B1FC9; /* je: equal / zero */

loc_004B1FA7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x66696C74) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x66696C74 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B2037; /* je: equal / zero */

loc_004B1FB2: ;
    PUSH32(esp, ebp);

loc_004B1FB3: ;
    ecx = MEM32(esi + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004B1FBCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B1FB9u); } /* indirect call */
    }

loc_004B1FBC: ;
    POP32(esp, edi);
    MEM32(esi + 0x14) = 1;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_004B1FC9: ;
    PUSH32(esp, 3);
    goto loc_004B1FB3;

loc_004B1FCD: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x8642F8);
    PUSH32(esp, MEM32(ecx + 0x10));
    PUSH32(esp, 0x004B1FDCu); RECOMP_ABI_CALL(0x005E3F40u, sub_005E3F40); /* call 0x005E3F40 */

loc_004B1FDC: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004B1FE4u); RECOMP_ABI_CALL(0x005E4400u, sub_005E4400); /* call 0x005E4400 */

loc_004B1FE4: ;
    ebx = eax;
    PUSH32(esp, 0x004B1FEBu); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004B1FEB: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x004B1FF5u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004B1FF5: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B2006; /* je: equal / zero */

loc_004B1FFC: ;
    PUSH32(esp, ebx);
    ecx = eax;
    PUSH32(esp, 0x004B2004u); RECOMP_ABI_CALL(0x004BB415u, sub_004BB415); /* call 0x004BB415 */

loc_004B2004: ;
    goto loc_004B2008;

loc_004B2006: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004B2008: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004B200Eu); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004B200E: ;
    ecx = eax;
    PUSH32(esp, 0x004B2015u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004B2015: ;
    ecx = MEM32(esi + 0xC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x004B201Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B201Cu); } /* indirect call */
    }

loc_004B201E: ;
    POP32(esp, ebx);
    goto loc_004B1FBC;

loc_004B2021: ;
    PUSH32(esp, 5);
    goto loc_004B1FB3;

loc_004B2025: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6D617574) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x6D617574 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B1FB2; /* je: equal / zero */

loc_004B202C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x70617373) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x70617373 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004B1FB2; /* jne: not equal / not zero */

loc_004B2037: ;
    PUSH32(esp, 4);
    goto loc_004B1FB3;

}

/**
 * sub_004B203E
 * Original: 0x004B203E - 0x004B204C (14 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B203E(void)
{

loc_004B203E: ;
    PUSH32(esp, MEM32(esp + 8));
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, 0x004B204Bu); RECOMP_ABI_CALL(0x004B1F66u, sub_004B1F66); /* call 0x004B1F66 */

loc_004B204B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004B204C
 * Original: 0x004B204C - 0x004B206B (31 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B204C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B204C: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 8;
    MEM32(esi) = 0x864310;
    MEM32(ecx) = 0x864300;
    PUSH32(esp, 0x004B2063u); RECOMP_ABI_CALL(0x004E310Cu, sub_004E310C); /* call 0x004E310C */

loc_004B2063: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004DD576(); return; /* tail jmp 0x004DD576 */

}

/**
 * sub_004B206B
 * Original: 0x004B206B - 0x004B209A (47 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B206B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B206B: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_004B2096; /* je: equal / zero */

loc_004B2078: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_004B2087; /* jne: not equal / not zero */

loc_004B207C: ;
    ecx = MEM32(esi + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi + 8));
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004B2087u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B2084u); } /* indirect call */
    }

loc_004B2087: ;
    ecx = esi + -8;
    PUSH32(esp, 0x004B208Fu); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004B208F: ;
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_004B2096: ;
    SET_LO8(ebx, 1);
    goto loc_004B208F;

}

/**
 * sub_004B209A
 * Original: 0x004B209A - 0x004B2184 (234 bytes, 81 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B209A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B209A: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx + 0xC);
    edx = 0x6B69636B;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_004B2143; /* jg: greater (signed >) */

loc_004B20B1: ;
    if (CMP_EQ(_fa, _fb)) goto loc_004B213F; /* je: equal / zero */

loc_004B20B7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B20E9; /* je: equal / zero */

loc_004B20BB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x64657465) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x64657465 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B20E2; /* je: equal / zero */

loc_004B20C2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x66756C6C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x66756C6C (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B20DB; /* je: equal / zero */

loc_004B20C9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x686F7374) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x686F7374 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004B215F; /* jne: not equal / not zero */

loc_004B20D4: ;
    PUSH32(esp, 6);
    goto loc_004B2171;

loc_004B20DB: ;
    PUSH32(esp, 5);
    goto loc_004B2171;

loc_004B20E2: ;
    PUSH32(esp, 2);
    goto loc_004B2171;

loc_004B20E9: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x8642F8);
    PUSH32(esp, MEM32(ecx + 0x10));
    PUSH32(esp, 0x004B20F9u); RECOMP_ABI_CALL(0x005E3F40u, sub_005E3F40); /* call 0x005E3F40 */

loc_004B20F9: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004B2101u); RECOMP_ABI_CALL(0x005E4400u, sub_005E4400); /* call 0x005E4400 */

loc_004B2101: ;
    edi = eax;
    PUSH32(esp, 0x004B2108u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004B2108: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x004B2114u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004B2114: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B2125; /* je: equal / zero */

loc_004B211B: ;
    PUSH32(esp, edi);
    ecx = eax;
    PUSH32(esp, 0x004B2123u); RECOMP_ABI_CALL(0x004BB415u, sub_004BB415); /* call 0x004BB415 */

loc_004B2123: ;
    goto loc_004B2127;

loc_004B2125: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004B2127: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004B212Du); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004B212D: ;
    ecx = eax;
    PUSH32(esp, 0x004B2134u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004B2134: ;
    ecx = MEM32(esi + 0xC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x004B213Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B213Au); } /* indirect call */
    }

loc_004B213C: ;
    POP32(esp, edi);
    goto loc_004B2179;

loc_004B213F: ;
    PUSH32(esp, 4);
    goto loc_004B2171;

loc_004B2143: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6D617574) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x6D617574 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B216F; /* je: equal / zero */

loc_004B214A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x70617373) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x70617373 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B216B; /* je: equal / zero */

loc_004B2151: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x72617574) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x72617574 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B2167; /* je: equal / zero */

loc_004B2158: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x75726F6D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x75726F6D (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B2163; /* je: equal / zero */

loc_004B215F: ;
    PUSH32(esp, 0);
    goto loc_004B2171;

loc_004B2163: ;
    PUSH32(esp, 3);
    goto loc_004B2171;

loc_004B2167: ;
    PUSH32(esp, 8);
    goto loc_004B2171;

loc_004B216B: ;
    PUSH32(esp, 7);
    goto loc_004B2171;

loc_004B216F: ;
    PUSH32(esp, 1);

loc_004B2171: ;
    ecx = MEM32(esi + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004B2179u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B2176u); } /* indirect call */
    }

loc_004B2179: ;
    MEM32(esi + 0x14) = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B2184
 * Original: 0x004B2184 - 0x004B2192 (14 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B2184(void)
{

loc_004B2184: ;
    PUSH32(esp, MEM32(esp + 8));
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, 0x004B2191u); RECOMP_ABI_CALL(0x004B209Au, sub_004B209A); /* call 0x004B209A */

loc_004B2191: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004B2192
 * Original: 0x004B2192 - 0x004B21C4 (50 bytes, 14 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B2192(void)
{

loc_004B2192: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004B219Au); RECOMP_ABI_CALL(0x004E31B4u, sub_004E31B4); /* call 0x004E31B4 */

loc_004B219A: ;
    PUSH32(esp, MEM32(esp + 8));
    eax = MEM32(esp + 0x10);
    PUSH32(esp, 0x6D6F7665);
    ecx = esi;
    MEM32(esi) = 0x864324;
    MEM32(esi + 8) = 0x864314;
    MEM32(esi + 0x18) = eax;
    PUSH32(esp, 0x004B21BEu); RECOMP_ABI_CALL(0x004E3221u, sub_004E3221); /* call 0x004E3221 */

loc_004B21BE: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004B21C4
 * Original: 0x004B21C4 - 0x004B21D6 (18 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B21C4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B21C4: ;
    MEM32(ecx) = 0x864324;
    MEM32(ecx + 8) = 0x864314;
    g_seh_ebp = ebp; sub_004E31F2(); return; /* tail jmp 0x004E31F2 */

}

/**
 * sub_004B21D6
 * Original: 0x004B21D6 - 0x004B21E1 (11 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B21D6(void)
{

loc_004B21D6: ;
    ecx = MEM32(ecx + 0x18);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004B21E0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B21DDu); } /* indirect call */
    }

loc_004B21E0: ;
    esp += 4; return; /* ret */

}
