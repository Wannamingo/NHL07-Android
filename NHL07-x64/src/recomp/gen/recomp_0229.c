/**
 * nhl_07_recomp - Recompiled code chunk 229
 * Functions: 250 (0x004EE740 - 0x004F587F)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_004EE740
 * Original: 0x004EE740 - 0x004EE752 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EE740(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004EE740: ;
    ecx = MEM32(ecx + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004EE74C; /* je: equal / zero */

loc_004EE747: ;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x4C)); return; /* indirect tail jmp */

loc_004EE74C: ;
    eax = 0x7B891F;
    esp += 4; return; /* ret */

}

/**
 * sub_004EE752
 * Original: 0x004EE752 - 0x004EE786 (52 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EE752(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EE752: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x2C;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004EE783; /* jne: not equal / not zero */

loc_004EE75E: ;
    PUSH32(esp, 0x004EE763u); RECOMP_ABI_CALL(0x004EB601u, sub_004EB601); /* call 0x004EB601 */

loc_004EE763: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004EE76Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EE767u); } /* indirect call */
    }

loc_004EE76A: ;
    edx = MEM32(eax);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x18;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(0x90E824));
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x004EE77Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EE778u); } /* indirect call */
    }

loc_004EE77B: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x004EE783u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004EE783: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004EE786
 * Original: 0x004EE786 - 0x004EE7BA (52 bytes, 22 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EE786(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EE786: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x2C;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004EE7B5; /* jne: not equal / not zero */

loc_004EE792: ;
    PUSH32(esp, 0x004EE797u); RECOMP_ABI_CALL(0x004EB601u, sub_004EB601); /* call 0x004EB601 */

loc_004EE797: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004EE79Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EE79Bu); } /* indirect call */
    }

loc_004EE79E: ;
    edx = MEM32(eax);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x18;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x004EE7ADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EE7AAu); } /* indirect call */
    }

loc_004EE7AD: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x004EE7B5u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004EE7B5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004EE7BA
 * Original: 0x004EE7BA - 0x004EE7ED (51 bytes, 18 insns)
 * Category: game_io
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EE7BA(void)
{

loc_004EE7BA: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004EE7C2u); RECOMP_ABI_CALL(0x004EB601u, sub_004EB601); /* call 0x004EB601 */

loc_004EE7C2: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004EE7C9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EE7C6u); } /* indirect call */
    }

loc_004EE7C9: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x004EE7D0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EE7CDu); } /* indirect call */
    }

loc_004EE7D0: ;
    PUSH32(esp, eax);
    ecx = esi + 8;
    PUSH32(esp, 0x004EE7D9u); RECOMP_ABI_CALL(0x004EBF07u, sub_004EBF07); /* call 0x004EBF07 */

loc_004EE7D9: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x866328);
    ecx = esi + -32;
    PUSH32(esp, 0x004EE7EBu); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004EE7EB: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004EE7ED
 * Original: 0x004EE7ED - 0x004EE810 (35 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EE7ED(void)
{

loc_004EE7ED: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esi + 0x10;
    PUSH32(esp, 0x004EE7FAu); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004EE7FA: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x866900);
    ecx = esi + -36;
    PUSH32(esp, 0x004EE80Cu); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004EE80C: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004EE810
 * Original: 0x004EE810 - 0x004EE833 (35 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EE810(void)
{

loc_004EE810: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esi + 0x10;
    PUSH32(esp, 0x004EE81Du); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004EE81D: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x86E5F0);
    ecx = esi + -36;
    PUSH32(esp, 0x004EE82Fu); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004EE82F: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004EE833
 * Original: 0x004EE833 - 0x004EE862 (47 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EE833(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004EE833: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x004EE83Cu); RECOMP_ABI_CALL(0x004EB601u, sub_004EB601); /* call 0x004EB601 */

loc_004EE83C: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004EE843u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EE840u); } /* indirect call */
    }

loc_004EE843: ;
    edx = MEM32(eax);
    ecx = esi;
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    edi = esi + 0x24;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x004EE856u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EE853u); } /* indirect call */
    }

loc_004EE856: ;
    PUSH32(esp, eax);
    ecx = esi + 0x34;
    PUSH32(esp, 0x004EE85Fu); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004EE85F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004EE862
 * Original: 0x004EE862 - 0x004EE8FE (156 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EE862(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004EE862: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    MEM32(esp + 0xC) = ecx;
    PUSH32(esp, 0x004EE86Fu); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004EE86F: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x004EE876u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EE873u); } /* indirect call */
    }

loc_004EE876: ;
    esi = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x004EE87Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EE87Cu); } /* indirect call */
    }

loc_004EE87F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004EE887; /* jne: not equal / not zero */

loc_004EE883: ;
    SET_LO8(eax, 1);
    goto loc_004EE8F5;

loc_004EE887: ;
    edx = MEM32(eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x004EE891u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EE88Eu); } /* indirect call */
    }

loc_004EE891: ;
    ebx = MEM32(eax + 0x14);
    MEM32(esp + 0x10) = MEM32(esp + 0x10) & 0;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004EE8F0; /* jbe: below or equal (unsigned <=) */

loc_004EE89D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x14) = eax;

loc_004EE8A4: ;
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, 0x004EE8B1u); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004EE8B1: ;
    ebp = MEM32(esi);
    edi = eax;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004EE8BCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EE8B9u); } /* indirect call */
    }

loc_004EE8BC: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(ebp + 0x34); PUSH32(esp, 0x004EE8C2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EE8BFu); } /* indirect call */
    }

loc_004EE8C2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004EE8E6; /* jne: not equal / not zero */

loc_004EE8C6: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(eax + 0x28);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x4C); PUSH32(esp, 0x004EE8D2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EE8CFu); } /* indirect call */
    }

loc_004EE8D2: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004EE8DAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EE8D7u); } /* indirect call */
    }

loc_004EE8DA: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004EE8E0u); RECOMP_ABI_CALL(0x004ABAD7u, sub_004ABAD7); /* call 0x004ABAD7 */

loc_004EE8E0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_004EE8FA; /* jne: not equal / not zero */

loc_004EE8E6: ;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004EE8A4; /* jb: below (unsigned <) */

loc_004EE8F0: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_004EE8F2: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_004EE8F5: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_004EE8FA: ;
    SET_LO8(eax, 1);
    goto loc_004EE8F2;

}

/**
 * sub_004EE8FE
 * Original: 0x004EE8FE - 0x004EE925 (39 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EE8FE(void)
{

loc_004EE8FE: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x28);
    PUSH32(esp, edi);
    PUSH32(esp, 0x004EE909u); RECOMP_ABI_CALL(0x004EB601u, sub_004EB601); /* call 0x004EB601 */

loc_004EE909: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004EE910u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EE90Du); } /* indirect call */
    }

loc_004EE910: ;
    edi = eax;
    eax = MEM32(esi);
    ebx = MEM32(edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x7C); PUSH32(esp, 0x004EE91Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EE918u); } /* indirect call */
    }

loc_004EE91B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebx + 0x28); PUSH32(esp, 0x004EE921u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EE91Eu); } /* indirect call */
    }

loc_004EE921: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_004EE925
 * Original: 0x004EE925 - 0x004EE9D1 (172 bytes, 56 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004EE925(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EE925: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x86E634);
    PUSH32(esp, MEM32(ebp + 8));
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EE93Au); RECOMP_ABI_CALL(0x004C17F2u, sub_004C17F2); /* call 0x004C17F2 */

loc_004EE93A: ;
    MEM32(esi + 0x18) = 0x86DC18;
    ebx = esi + 0x24;
    MEM32(esi + 0x1C) = 0x86E5AC;
    edi = esi + 0x20;
    ecx = ebx;
    MEM32(edi) = 0x86E5B8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EE95Bu); RECOMP_ABI_CALL(0x006081EAu, sub_006081EA); /* call 0x006081EA */

loc_004EE95B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = 0x86E630;
    MEM32(esi + 0x18) = 0x86E624;
    MEM32(esi + 0x1C) = 0x86E618;
    MEM32(edi) = 0x86E610;
    MEM32(ebx) = 0x86E604;
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x2C) = eax;
    MEM32(esi + 0x30) = eax;
    MEM32(esi + 0x34) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EE98Eu); RECOMP_ABI_CALL(0x004EB601u, sub_004EB601); /* call 0x004EB601 */

loc_004EE98E: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004EE995u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EE992u); } /* indirect call */
    }

loc_004EE995: ;
    ebx = eax;
    eax = ebp + 8;
    PUSH32(esp, eax);
    ecx = ebx + 8;
    MEM32(ebp + 8) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EE9A6u); RECOMP_ABI_CALL(0x004DD750u, sub_004DD750); /* call 0x004DD750 */

loc_004EE9A6: ;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x004EE9ADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EE9AAu); } /* indirect call */
    }

loc_004EE9AD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004EE9C1; /* je: equal / zero */

loc_004EE9B1: ;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x004EE9B8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EE9B5u); } /* indirect call */
    }

loc_004EE9B8: ;
    PUSH32(esp, eax);
    ecx = esi + 0x28;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EE9C1u); RECOMP_ABI_CALL(0x004EBF07u, sub_004EBF07); /* call 0x004EBF07 */

loc_004EE9C1: ;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x004EE9C8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EE9C5u); } /* indirect call */
    }

loc_004EE9C8: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004EE9D1
 * Original: 0x004EE9D1 - 0x004EE9D9 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EE9D1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004EE9D1: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004EEAE6(); return; /* tail jmp 0x004EEAE6 */

}

/**
 * sub_004EE9D9
 * Original: 0x004EE9D9 - 0x004EE9E1 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EE9D9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004EE9D9: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004EEAE6(); return; /* tail jmp 0x004EEAE6 */

}

/**
 * sub_004EE9E1
 * Original: 0x004EE9E1 - 0x004EE9E9 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EE9E1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004EE9E1: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004EEAE6(); return; /* tail jmp 0x004EEAE6 */

}

/**
 * sub_004EE9E9
 * Original: 0x004EE9E9 - 0x004EE9F1 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EE9E9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004EE9E9: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x24;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004EEAE6(); return; /* tail jmp 0x004EEAE6 */

}

/**
 * sub_004EE9F1
 * Original: 0x004EE9F1 - 0x004EE9FC (11 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EE9F1(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EE9F1: ;
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x004EE9FBu); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004EE9FB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004EE9FC
 * Original: 0x004EE9FC - 0x004EEAC9 (205 bytes, 69 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004EE9FC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EE9FC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    ebx = esi + 0x20;
    MEM32(esi) = 0x86E630;
    MEM32(esi + 0x18) = 0x86E624;
    MEM32(esi + 0x1C) = 0x86E618;
    MEM32(ebx) = 0x86E610;
    MEM32(esi + 0x24) = 0x86E604;
    if (CMP_EQ(_fa, _fb)) goto loc_004EEA34; /* je: equal / zero */

loc_004EEA2F: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004EEA34u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EEA31u); } /* indirect call */
    }

loc_004EEA34: ;
    ecx = MEM32(esi + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004EEA40; /* je: equal / zero */

loc_004EEA3B: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004EEA40u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EEA3Du); } /* indirect call */
    }

loc_004EEA40: ;
    ecx = MEM32(esi + 0x34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004EEA4C; /* je: equal / zero */

loc_004EEA47: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004EEA4Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EEA49u); } /* indirect call */
    }

loc_004EEA4C: ;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EEA52u); RECOMP_ABI_CALL(0x004EB601u, sub_004EB601); /* call 0x004EB601 */

loc_004EEA52: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004EEA59u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EEA56u); } /* indirect call */
    }

loc_004EEA59: ;
    edi = eax;
    eax = ebp + -4;
    PUSH32(esp, eax);
    ecx = edi + 8;
    MEM32(ebp + -4) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EEA6Au); RECOMP_ABI_CALL(0x004DD8B2u, sub_004DD8B2); /* call 0x004DD8B2 */

loc_004EEA6A: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x40); PUSH32(esp, 0x004EEA71u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EEA6Eu); } /* indirect call */
    }

loc_004EEA71: ;
    ecx = MEM32(esi + 0x34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_004EEA7E; /* je: equal / zero */

loc_004EEA79: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EEA7Eu); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004EEA7E: ;
    ecx = MEM32(esi + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004EEA8A; /* je: equal / zero */

loc_004EEA85: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EEA8Au); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004EEA8A: ;
    ecx = MEM32(esi + 0x2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004EEA96; /* je: equal / zero */

loc_004EEA91: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EEA96u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004EEA96: ;
    ecx = MEM32(esi + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004EEAA2; /* je: equal / zero */

loc_004EEA9D: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EEAA2u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004EEAA2: ;
    ecx = esi + 0x24;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EEAAAu); RECOMP_ABI_CALL(0x006081F3u, sub_006081F3); /* call 0x006081F3 */

loc_004EEAAA: ;
    MEM32(ebx) = 0x86E5B8;
    MEM32(esi + 0x1C) = 0x86E5AC;
    ecx = esi;
    MEM32(esi + 0x18) = 0x86DC18;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EEAC5u); RECOMP_ABI_CALL(0x004C1837u, sub_004C1837); /* call 0x004C1837 */

loc_004EEAC5: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004EEAC9
 * Original: 0x004EEAC9 - 0x004EEAE6 (29 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EEAC9(void)
{

loc_004EEAC9: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x28);
    eax = MEM32(ecx);
    edx = esi + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x80); PUSH32(esp, 0x004EEADBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EEAD5u); } /* indirect call */
    }

loc_004EEADB: ;
    PUSH32(esp, eax);
    ecx = esi + 0x30;
    PUSH32(esp, 0x004EEAE4u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004EEAE4: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004EEAE6
 * Original: 0x004EEAE6 - 0x004EEB02 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EEAE6(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EEAE6: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004EEAEEu); RECOMP_ABI_CALL(0x004EE9FCu, sub_004EE9FC); /* call 0x004EE9FC */

loc_004EEAEE: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004EEAFC; /* je: equal / zero */

loc_004EEAF5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004EEAFBu); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004EEAFB: ;
    POP32(esp, ecx);

loc_004EEAFC: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004EEB02
 * Original: 0x004EEB02 - 0x004EEB08 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EEB02(void)
{

loc_004EEB02: ;
    eax = MEM32(0x86DB9C);
    esp += 4; return; /* ret */

}

/**
 * sub_004EEB1A
 * Original: 0x004EEB1A - 0x004EEB45 (43 bytes, 14 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EEB1A(void)
{

loc_004EEB1A: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esi + 8;
    PUSH32(esp, 0x004EEB27u); RECOMP_ABI_CALL(0x004EBF07u, sub_004EBF07); /* call 0x004EBF07 */

loc_004EEB27: ;
    PUSH32(esp, 0);
    ecx = esi + 0x10;
    PUSH32(esp, 0x004EEB31u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004EEB31: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x86E5C0);
    ecx = esi + -24;
    PUSH32(esp, 0x004EEB43u); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004EEB43: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004EEB45
 * Original: 0x004EEB45 - 0x004EEB68 (35 bytes, 11 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EEB45(void)
{

loc_004EEB45: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esi + 0x10;
    PUSH32(esp, 0x004EEB52u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004EEB52: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x86E5D8);
    ecx = esi + -24;
    PUSH32(esp, 0x004EEB64u); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004EEB64: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004EEB68
 * Original: 0x004EEB68 - 0x004EEB9B (51 bytes, 18 insns)
 * Category: game_io
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EEB68(void)
{

loc_004EEB68: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004EEB70u); RECOMP_ABI_CALL(0x004EB601u, sub_004EB601); /* call 0x004EB601 */

loc_004EEB70: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004EEB77u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EEB74u); } /* indirect call */
    }

loc_004EEB77: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x004EEB7Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EEB7Bu); } /* indirect call */
    }

loc_004EEB7E: ;
    PUSH32(esp, eax);
    ecx = esi + 4;
    PUSH32(esp, 0x004EEB87u); RECOMP_ABI_CALL(0x004EBF07u, sub_004EBF07); /* call 0x004EBF07 */

loc_004EEB87: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x866328);
    ecx = esi + -28;
    PUSH32(esp, 0x004EEB99u); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004EEB99: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004EEB9B
 * Original: 0x004EEB9B - 0x004EEBFE (99 bytes, 30 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EEB9B(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EEB9B: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x86E668);
    PUSH32(esp, MEM32(esp + 0x10));
    esi = ecx;
    PUSH32(esp, 0x004EEBADu); RECOMP_ABI_CALL(0x004C17F2u, sub_004C17F2); /* call 0x004C17F2 */

loc_004EEBAD: ;
    MEM32(esi + 0x18) = 0x86E5AC;
    MEM32(esi + 0x1C) = 0x86E5B8;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = 0x86E664;
    MEM32(esi + 0x18) = 0x86E658;
    MEM32(esi + 0x1C) = 0x86E650;
    edi = esi + 0x20;
    MEM32(edi) = eax;
    MEM32(esi + 0x24) = eax;
    MEM32(esi + 0x28) = eax;
    PUSH32(esp, 0x004EEBE1u); RECOMP_ABI_CALL(0x004EB601u, sub_004EB601); /* call 0x004EB601 */

loc_004EEBE1: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004EEBE8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EEBE5u); } /* indirect call */
    }

loc_004EEBE8: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x004EEBEFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EEBECu); } /* indirect call */
    }

loc_004EEBEF: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x004EEBF7u); RECOMP_ABI_CALL(0x004EBF07u, sub_004EBF07); /* call 0x004EBF07 */

loc_004EEBF7: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004EEBFE
 * Original: 0x004EEBFE - 0x004EEC06 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EEBFE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004EEBFE: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004EECBB(); return; /* tail jmp 0x004EECBB */

}

/**
 * sub_004EEC06
 * Original: 0x004EEC06 - 0x004EEC0E (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EEC06(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004EEC06: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004EECBB(); return; /* tail jmp 0x004EECBB */

}

/**
 * sub_004EEC0E
 * Original: 0x004EEC0E - 0x004EEC6B (93 bytes, 27 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EEC0E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004EEC0E: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = 0x86E664;
    MEM32(esi + 0x18) = 0x86E658;
    MEM32(esi + 0x1C) = 0x86E650;
    if (CMP_EQ(_fa, _fb)) goto loc_004EEC31; /* je: equal / zero */

loc_004EEC2C: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004EEC31u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EEC2Eu); } /* indirect call */
    }

loc_004EEC31: ;
    ecx = MEM32(esi + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004EEC3D; /* je: equal / zero */

loc_004EEC38: ;
    PUSH32(esp, 0x004EEC3Du); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004EEC3D: ;
    ecx = MEM32(esi + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004EEC49; /* je: equal / zero */

loc_004EEC44: ;
    PUSH32(esp, 0x004EEC49u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004EEC49: ;
    ecx = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004EEC55; /* je: equal / zero */

loc_004EEC50: ;
    PUSH32(esp, 0x004EEC55u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004EEC55: ;
    MEM32(esi + 0x1C) = 0x86E5B8;
    MEM32(esi + 0x18) = 0x86E5AC;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004C1837(); return; /* tail jmp 0x004C1837 */

}

/**
 * sub_004EEC6B
 * Original: 0x004EEC6B - 0x004EEC94 (41 bytes, 17 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EEC6B(void)
{

loc_004EEC6B: ;
    ecx = MEM32(ecx + 0x24);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 8));
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x004EEC78u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EEC75u); } /* indirect call */
    }

loc_004EEC78: ;
    esi = eax;
    PUSH32(esp, 0x004EEC7Fu); RECOMP_ABI_CALL(0x004EB601u, sub_004EB601); /* call 0x004EB601 */

loc_004EEC7F: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004EEC86u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EEC83u); } /* indirect call */
    }

loc_004EEC86: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x004EEC8Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EEC8Bu); } /* indirect call */
    }

loc_004EEC8E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004EEC94
 * Original: 0x004EEC94 - 0x004EECBB (39 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EEC94(void)
{

loc_004EEC94: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x20);
    PUSH32(esp, edi);
    PUSH32(esp, 0x004EEC9Fu); RECOMP_ABI_CALL(0x004EB601u, sub_004EB601); /* call 0x004EB601 */

loc_004EEC9F: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004EECA6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EECA3u); } /* indirect call */
    }

loc_004EECA6: ;
    edi = eax;
    eax = MEM32(esi);
    ebx = MEM32(edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x7C); PUSH32(esp, 0x004EECB1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EECAEu); } /* indirect call */
    }

loc_004EECB1: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebx + 0x28); PUSH32(esp, 0x004EECB7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EECB4u); } /* indirect call */
    }

loc_004EECB7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_004EECBB
 * Original: 0x004EECBB - 0x004EECD7 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EECBB(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EECBB: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004EECC3u); RECOMP_ABI_CALL(0x004EEC0Eu, sub_004EEC0E); /* call 0x004EEC0E */

loc_004EECC3: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004EECD1; /* je: equal / zero */

loc_004EECCA: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004EECD0u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004EECD0: ;
    POP32(esp, ecx);

loc_004EECD1: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004EECD7
 * Original: 0x004EECD7 - 0x004EECF4 (29 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EECD7(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EECD7: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(0x8D7E98));
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x7B891F);
    { uint32_t _icall_target = MEM32(0x8D7E90); PUSH32(esp, 0x004EECF0u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x004EECEAu); } /* indirect call */
    }

loc_004EECF0: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_004EED00
 * Original: 0x004EED00 - 0x004EED01 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EED00(void)
{

loc_004EED00: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004EED21
 * Original: 0x004EED21 - 0x004EED2B (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EED21(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EED21: ;
    eax = ecx;
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 4) = MEM32(eax + 4) & 0;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_004EED2B
 * Original: 0x004EED2B - 0x004EED40 (21 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EED2B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EED2B: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_004EED38; /* jae: above or equal (unsigned >=) */

loc_004EED34: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_004EED3D;

loc_004EED38: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x34);
    _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004EED3D: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004EED40
 * Original: 0x004EED40 - 0x004EEDAC (108 bytes, 52 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004EED40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EED40: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_004EEDA8; /* je: equal / zero */

loc_004EED4E: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ecx);
    ecx = eax;
    edx = ecx + 1;
    esi = esi | 0xFFFFFFFFu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_004EED87; /* jle: less or equal (signed <=) */

loc_004EED5F: ;
    PUSH32(esp, ebx);

loc_004EED60: ;
    ebx = MEM32(ebp + 8);
    eax = ecx + esi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edx = eax;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x34);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + edi + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(edx + edi + 0x14) (32-bit) */
    if (CMP_BE(_fa, _fb)) ecx = eax; /* cmovbe */
    if (CMP_A(_fa, _fb)) esi = eax; /* cmova */
    eax = ecx;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_004EED60; /* jg: greater (signed >) */

loc_004EED83: ;
    eax = MEM32(ebp + -4);
    POP32(esp, ebx);

loc_004EED87: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_004EED90; /* jle: less or equal (signed <=) */

loc_004EED8C: ;
    edx = ecx;
    goto loc_004EED92;

loc_004EED90: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004EED92: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_004EEDA1; /* jge: greater or equal (signed >=) */

loc_004EED97: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_004EED9F; /* jle: less or equal (signed <=) */

loc_004EED9B: ;
    eax = ecx;
    goto loc_004EEDA1;

loc_004EED9F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004EEDA1: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x34);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);

loc_004EEDA8: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004EEDAC
 * Original: 0x004EEDAC - 0x004EEDB0 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EEDAC(void)
{

loc_004EEDAC: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_004EEDB0
 * Original: 0x004EEDB0 - 0x004EEDE0 (48 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EEDB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EEDB0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    ebx = MEM32(eax);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), esi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004EEDD2; /* jbe: below or equal (unsigned <=) */

loc_004EEDBE: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004EEDC8u); RECOMP_ABI_CALL(0x005CD8ADu, sub_005CD8AD); /* call 0x005CD8AD */

loc_004EEDC8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004EEDD2; /* je: equal / zero */

loc_004EEDCD: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edi) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004EEDBE; /* jb: below (unsigned <) */

loc_004EEDD2: ;
    ecx = MEM32(esp + 0xC);
    eax = esi + ebx;
    MEM32(ecx) = eax;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(edi) = MEM32(edi) - esi;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_004EEDE0
 * Original: 0x004EEDE0 - 0x004EEE3B (91 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004EEDE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EEDE0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), 0 (8-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_004EEE27; /* je: equal / zero */

loc_004EEDF0: ;
    eax = MEM32(ebp + 8);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = edi;
    MEM32(ebp + -8) = eax;

loc_004EEDFA: ;
    eax = MEM32(ebp + -8);
    SET_LO8(eax, MEM8(eax + esi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004EEE27; /* je: equal / zero */

loc_004EEE04: ;
    eax = SX8(LO8(eax));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EEE0Du); RECOMP_ABI_CALL(0x005CCFA4u, sub_005CCFA4); /* call 0x005CCFA4 */

loc_004EEE0D: ;
    ebx = eax;
    eax = (uint32_t)(int32_t)SMEM8(esi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EEE18u); RECOMP_ABI_CALL(0x005CCFA4u, sub_005CCFA4); /* call 0x005CCFA4 */

loc_004EEE18: ;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if ((_fa != 0)) goto loc_004EEE37; /* jne: not equal / not zero */

loc_004EEE1E: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004EEDFA; /* jne: not equal / not zero */

loc_004EEE27: ;
    ecx = MEM32(ebp + -4);
    eax = (uint32_t)(int32_t)SMEM8(ecx + edi);
    edx = MEM32(ebp + 8);
    ecx = (uint32_t)(int32_t)SMEM8(ecx + edx);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_004EEE37: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004EEE3B
 * Original: 0x004EEE3B - 0x004EEEEB (176 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004EEE3B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EEE3B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), ecx (32-bit) */
    MEM8(ebp + -1) = 9;
    if (CMP_BE(_fa, _fb)) goto loc_004EEE6B; /* jbe: below or equal (unsigned <=) */

loc_004EEE4F: ;
    SET_LO8(eax, MEM8(esi + ebx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(9) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 9 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004EEE62; /* je: equal / zero */

loc_004EEE56: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xD) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xD (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004EEE62; /* je: equal / zero */

loc_004EEE5A: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + 8) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004EEE4F; /* jb: below (unsigned <) */

loc_004EEE60: ;
    goto loc_004EEE6B;

loc_004EEE62: ;
    SET_LO8(eax, MEM8(esi + ebx));
    MEM8(ebp + -1) = LO8(eax);
    MEM8(esi + ebx) = LO8(ecx);

loc_004EEE6B: ;
    MEM32(ebp + -12) = MEM32(ebp + -12) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebp + -32) = 0x86E684;
    MEM32(ebp + -28) = 0x86E68C;
    MEM32(ebp + -24) = 0x86E690;
    MEM32(ebp + -20) = 0x86E698;
    MEM32(ebp + -16) = 0x86E6A0;
    MEM32(ebp + -52) = ecx;
    MEM32(ebp + -48) = 1;
    MEM32(ebp + -44) = 2;
    MEM32(ebp + -40) = 3;
    MEM32(ebp + -36) = 4;
    MEM32(ebp + -8) = ecx;
    PUSH32(esp, edi);

loc_004EEEB5: ;
    eax = MEM32(ebp + -8);
    edi = MEM32(ebp + eax * 4 + -32);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EEEC2u); RECOMP_ABI_CALL(0x004EEDE0u, sub_004EEDE0); /* call 0x004EEDE0 */

loc_004EEEC2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004EEED5; /* je: equal / zero */

loc_004EEEC7: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) + 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 5 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004EEEB5; /* jb: below (unsigned <) */

loc_004EEED0: ;
    eax = MEM32(ebp + -12);
    goto loc_004EEEDC;

loc_004EEED5: ;
    eax = MEM32(ebp + -8);
    eax = MEM32(ebp + eax * 4 + -52);

loc_004EEEDC: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + 8) (32-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_004EEEE8; /* je: equal / zero */

loc_004EEEE2: ;
    SET_LO8(ecx, MEM8(ebp + -1));
    MEM8(esi + ebx) = LO8(ecx);

loc_004EEEE8: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004EEEEB
 * Original: 0x004EEEEB - 0x004EEF53 (104 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004EEEEB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EEEEB: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), edi (32-bit) */
    MEM8(ebp + -1) = 9;
    if (CMP_BE(_fa, _fb)) goto loc_004EEF1B; /* jbe: below or equal (unsigned <=) */

loc_004EEEFB: ;
    eax = MEM32(ebx);

loc_004EEEFD: ;
    SET_LO8(ecx, MEM8(eax + edi));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(9) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 9 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004EEF11; /* je: equal / zero */

loc_004EEF05: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004EEF11; /* je: equal / zero */

loc_004EEF0A: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004EEEFD; /* jb: below (unsigned <) */

loc_004EEF0F: ;
    goto loc_004EEF1B;

loc_004EEF11: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ecx, MEM8(eax));
    MEM8(ebp + -1) = LO8(ecx);
    MEM8(eax) = 0;

loc_004EEF1B: ;
    PUSH32(esp, 0xA);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EEF28u); RECOMP_ABI_CALL(0x005CEBE4u, sub_005CEBE4); /* call 0x005CEBE4 */

loc_004EEF28: ;
    ecx = MEM32(ebx);
    _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(ebp + -8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi) = MEM32(esi) + ecx;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi) (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_004EEF3E; /* ja: above (unsigned >) */

loc_004EEF36: ;
    ecx = MEM32(ebx);
    SET_LO8(edx, MEM8(ebp + -1));
    MEM8(edi + ecx) = LO8(edx);

loc_004EEF3E: ;
    ecx = MEM32(ebp + -8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebx) (32-bit) */
    POP32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_004EEF4A; /* jne: not equal / not zero */

loc_004EEF46: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_004EEF4A: ;
    ecx = MEM32(ebp + 8);
    MEM32(ecx) = eax;
    SET_LO8(eax, 1);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004EEF53
 * Original: 0x004EEF53 - 0x004EEFFC (169 bytes, 75 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004EEF53(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EEF53: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(ebx);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_004EEFD5; /* je: equal / zero */

loc_004EEF6B: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EEF74u); RECOMP_ABI_CALL(0x004EEDB0u, sub_004EEDB0); /* call 0x004EEDB0 */

loc_004EEF74: ;
    POP32(esp, ecx);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), esi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004EEFD5; /* jbe: below or equal (unsigned <=) */

loc_004EEF7B: ;
    esi = MEM32(ebp + -4);

loc_004EEF7E: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004EEFCE; /* jbe: below or equal (unsigned <=) */

loc_004EEF88: ;
    edx = MEM32(ebp + 0x10);
    ebx = MEM32(ebp + -4);
    edx = MEM32(edx + ebx * 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(ebp + -8) = edx;
    if (CMP_BE(_fa, _fb)) goto loc_004EEFBB; /* jbe: below or equal (unsigned <=) */

loc_004EEF9A: ;
    edx = ecx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(edi) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_004EEFBB; /* jae: above or equal (unsigned >=) */

loc_004EEFA1: ;
    ebx = MEM32(ebp + -4);
    edx = MEM32(ebp + 0xC);
    edx = MEM32(edx + ebx * 4);
    SET_LO8(edx, MEM8(eax + edx));
    ebx = ecx + eax;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(ebx + esi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(ebx + esi) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004EEFBB; /* jne: not equal / not zero */

loc_004EEFB5: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -8) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004EEF9A; /* jb: below (unsigned <) */

loc_004EEFBB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -8) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004EEFE4; /* je: equal / zero */

loc_004EEFC0: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x14) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004EEF88; /* jb: below (unsigned <) */

loc_004EEFCB: ;
    ebx = MEM32(ebp + 8);

loc_004EEFCE: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edi) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004EEF7E; /* jb: below (unsigned <) */

loc_004EEFD3: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004EEFD5: ;
    eax = MEM32(ebp + 0x18);
    MEM32(ebx) = esi;
    MEM32(edi) = esi;
    MEM32(eax) = MEM32(eax) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_004EEFDF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_004EEFE4: ;
    edx = ecx + eax;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = MEM32(ebp + 8);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ebp + -4);
    MEM32(esi) = edx;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(edi) = MEM32(edi) - ecx;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ebp + 0x18);
    MEM32(ecx) = eax;
    goto loc_004EEFDF;

}

/**
 * sub_004EEFFC
 * Original: 0x004EEFFC - 0x004EF049 (77 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EEFFC(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EEFFC: ;
    eax = ecx;
    MEM32(eax + 0x10) = MEM32(eax + 0x10) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x14) = MEM32(eax + 0x14) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 2);
    POP32(esp, ecx);
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = 0x20;
    MEM32(eax + 4) = 0x15E;
    MEM32(eax + 8) = 0x258;
    MEM32(eax + 0xC) = 0x32;
    MEM8(eax + 0x24) = 0xFF;
    MEM8(eax + 0x25) = 0xFF;
    MEM8(eax + 0x26) = 0xFF;
    MEM8(eax + 0x27) = 0xFF;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x2C) = ecx;
    MEM32(eax + 0x30) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_004EF049
 * Original: 0x004EF049 - 0x004EF052 (9 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EF049(void)
{

loc_004EF049: ;
    eax = MEM32(esp + 4);
    MEM32(ecx) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004EF052
 * Original: 0x004EF052 - 0x004EF05C (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EF052(void)
{

loc_004EF052: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 4) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004EF05C
 * Original: 0x004EF05C - 0x004EF066 (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EF05C(void)
{

loc_004EF05C: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 8) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004EF066
 * Original: 0x004EF066 - 0x004EF070 (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EF066(void)
{

loc_004EF066: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0xC) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004EF07A
 * Original: 0x004EF07A - 0x004EF084 (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EF07A(void)
{

loc_004EF07A: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x14) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004EF0CA
 * Original: 0x004EF0CA - 0x004EF14F (133 bytes, 57 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004EF0CA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EF0CA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    eax = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x34);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EF0E2u); RECOMP_ABI_CALL(0x004EECD7u, sub_004EECD7); /* call 0x004EECD7 */

loc_004EF0E2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004EF100; /* je: equal / zero */

loc_004EF0E7: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x4EEFFC);
    PUSH32(esp, edi);
    ebx = eax + 4;
    PUSH32(esp, 0x34);
    PUSH32(esp, ebx);
    MEM32(eax) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EF0FBu); RECOMP_ABI_CALL(0x000199EEu, sub_000199EE); /* call 0x000199EE */

loc_004EF0FB: ;
    eax = ebx;
    POP32(esp, ebx);
    goto loc_004EF102;

loc_004EF100: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004EF102: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    MEM32(esi) = eax;
    MEM32(esi + 4) = edi;
    if (CMP_BE(_fa, _fb)) goto loc_004EF110; /* jbe: below or equal (unsigned <=) */

loc_004EF10D: ;
    MEM32(eax + 0x14) = ecx;

loc_004EF110: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), ecx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004EF149; /* jbe: below or equal (unsigned <=) */

loc_004EF115: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004EF117: ;
    edx = MEM32(esi);
    edi = MEM32(ebp + 0xC);
    MEM32(eax + edx) = edi;
    edx = MEM32(esi);
    edi = MEM32(ebp + 0x10);
    MEM32(eax + edx + 4) = edi;
    edx = MEM32(esi);
    edi = MEM32(ebp + 0x14);
    MEM32(eax + edx + 8) = edi;
    edx = MEM32(esi);
    edi = MEM32(ebp + 0x18);
    MEM32(eax + edx + 0xC) = edi;
    edx = MEM32(esi);
    MEM32(eax + edx + 0x10) = ecx;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x34;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004EF117; /* jb: below (unsigned <) */

loc_004EF149: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_004EF14F
 * Original: 0x004EF14F - 0x004EF89A (1867 bytes, 648 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004EF14F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EF14F: ;
    PUSH32(esp, ebp);
    ebp = esp + -112;
    _fb = (uint32_t)(0xC8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = esi | 0xFFFFFFFFu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, edi);
    ebx = ecx;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + 0x5C) = ebx;
    MEM32(ebp + 0x58) = esi;
    MEM32(ebp + 0x50) = edi;
    MEM32(ebp + 0x14) = esi;
    MEM32(ebp + 0x20) = esi;
    MEM32(ebp + 0x18) = esi;
    MEM32(ebp + 0x40) = esi;
    MEM32(ebp + 0x34) = esi;
    MEM32(ebp + 0x1C) = esi;
    MEM32(ebp + 0x2C) = esi;
    MEM32(ebp + 0x10) = esi;
    MEM32(ebp + 0x24) = esi;
    MEM32(ebp + 0x3C) = esi;
    MEM32(ebp + 0x38) = esi;
    MEM32(ebp + 0x30) = esi;
    MEM32(ebp + 0x28) = esi;
    MEM32(ebp + -36) = 0x86E6A8;
    MEM32(ebp + -32) = 0x86E6B0;
    MEM32(ebp + -28) = 0x86E6BC;
    MEM32(ebp + -24) = 0x86E6C0;
    MEM32(ebp + -20) = 0x86E6C4;
    MEM32(ebp + -16) = 0x86E6CC;
    MEM32(ebp + -12) = 0x86E6D4;
    MEM32(ebp + -8) = 0x86E6E0;
    MEM32(ebp + -4) = 0x86E6EC;
    MEM32(ebp) = 0x86E6F4;
    MEM32(ebp + 4) = 0x86E6F8;
    MEM32(ebp + 8) = 0x86E6FC;
    MEM32(ebp + 0xC) = 0x86E700;

loc_004EF1EF: ;
    eax = MEM32(ebp + edi + -36);
    edx = eax + 1;

loc_004EF1F6: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004EF1F6; /* jne: not equal / not zero */

loc_004EF1FD: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + edi + -88) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x34) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x34 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004EF1EF; /* jb: below (unsigned <) */

loc_004EF20B: ;
    MEM32(ebp + 0x64) = MEM32(ebp + 0x64) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x64)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(ebp + 0x7C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x7C), 0 (32-bit) */
    MEM8(ebp + 0x6F) = 1;
    MEM8(ebp + 0x47) = LO8(ecx);
    if (CMP_BE(_fa, _fb)) goto loc_004EF289; /* jbe: below or equal (unsigned <=) */

loc_004EF21C: ;
    eax = MEM32(ebp + 0x78);
    ecx = MEM32(ebp + 0x64);
    edi = ecx + eax;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(9) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), 9 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004EF230; /* je: equal / zero */

loc_004EF22A: ;
    _fa = (uint32_t)(MEM8(ebp + 0x6F)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x6F), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004EF26D; /* jne: not equal / not zero */

loc_004EF230: ;
    _fa = (uint32_t)(MEM32(ebp + 0x58)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x58), esi (32-bit) */
    MEM8(ebp + 0x6F) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_004EF26D; /* jne: not equal / not zero */

loc_004EF239: ;
    eax = MEM32(ebp + 0x7C);
    _fb = (uint32_t)(MEM32(ebp + 0x64)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + 0x64);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + 0x68) = edi;
    MEM32(ebp + 0x60) = eax;
    eax = ebp + 0x54;
    PUSH32(esp, eax);
    PUSH32(esp, 0xD);
    eax = ebp + -88;
    PUSH32(esp, eax);
    eax = ebp + -36;
    PUSH32(esp, eax);
    eax = ebp + 0x68;
    PUSH32(esp, eax);
    eax = ebp + 0x60;
    PUSH32(esp, 0x004EF25Fu); RECOMP_ABI_CALL(0x004EEF53u, sub_004EEF53); /* call 0x004EEF53 */

loc_004EF25F: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + 0x54)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x54), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004EF26D; /* je: equal / zero */

loc_004EF267: ;
    eax = MEM32(ebp + 0x50);
    MEM32(ebp + 0x58) = eax;

loc_004EF26D: ;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), 0xA (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004EF279; /* jne: not equal / not zero */

loc_004EF272: ;
    MEM32(ebp + 0x50) = MEM32(ebp + 0x50) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x50)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(ebp + 0x6F) = 1;

loc_004EF279: ;
    MEM32(ebp + 0x64) = MEM32(ebp + 0x64) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x64)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + 0x64);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x7C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x7C) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004EF21C; /* jb: below (unsigned <) */

loc_004EF284: ;
    _fa = (uint32_t)(MEM32(ebp + 0x58)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x58), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004EF295; /* jne: not equal / not zero */

loc_004EF289: ;
    MEM32(ebx) = MEM32(ebx) & 0;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebx + 4) = MEM32(ebx + 4) & 0;
    _fa = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_004EF890;

loc_004EF295: ;
    edi = MEM32(ebp + 0x50);
    eax = esi;
    _fb = (uint32_t)(MEM32(ebp + 0x58)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + 0x58);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x34);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x004EF2ADu); RECOMP_ABI_CALL(0x004EECD7u, sub_004EECD7); /* call 0x004EECD7 */

loc_004EF2AD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004EF2CD; /* je: equal / zero */

loc_004EF2B2: ;
    PUSH32(esp, 0x4EEFFC);
    PUSH32(esp, edi);
    MEM32(eax) = edi;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x34);
    PUSH32(esp, eax);
    MEM32(ebp + 0x68) = eax;
    PUSH32(esp, 0x004EF2C8u); RECOMP_ABI_CALL(0x000199EEu, sub_000199EE); /* call 0x000199EE */

loc_004EF2C8: ;
    eax = MEM32(ebp + 0x68);
    goto loc_004EF2CF;

loc_004EF2CD: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004EF2CF: ;
    ecx = MEM32(ebp + 0x78);
    MEM32(ebx + 4) = edi;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebx) = eax;
    MEM32(ebp + 0x60) = edi;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + 0x64) = edi;

loc_004EF2E1: ;
    _fa = (uint32_t)(MEM8(edi + ecx)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + ecx), 0xA (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004EF2E8; /* jne: not equal / not zero */

loc_004EF2E7: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_004EF2E8: ;
    _fa = (uint32_t)(MEM32(ebp + 0x58)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x58), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004EF2F6; /* je: equal / zero */

loc_004EF2ED: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x7C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebp + 0x7C) (32-bit) */
    MEM32(ebp + 0x64) = edi;
    if (CMP_B(_fa, _fb)) goto loc_004EF2E1; /* jb: below (unsigned <) */

loc_004EF2F6: ;
    MEM8(ebp + 0x6F) = 1;
    goto loc_004EF3C4;

loc_004EF2FF: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(9) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), 9 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004EF310; /* je: equal / zero */

loc_004EF306: ;
    _fa = (uint32_t)(MEM8(ebp + 0x6F)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x6F), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004EF3B8; /* jne: not equal / not zero */

loc_004EF310: ;
    eax = MEM32(ebp + 0x7C);
    _fb = (uint32_t)(MEM32(ebp + 0x64)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + 0x64);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM8(ebp + 0x6F) = 0;
    MEM32(ebp + 0x58) = eax;
    eax = ebp + 0x54;
    PUSH32(esp, eax);
    PUSH32(esp, 0xD);
    eax = ebp + -88;
    PUSH32(esp, eax);
    eax = ebp + -36;
    PUSH32(esp, eax);
    eax = ebp + 0x68;
    PUSH32(esp, eax);
    eax = ebp + 0x58;
    MEM32(ebp + 0x68) = edi;
    PUSH32(esp, 0x004EF33Au); RECOMP_ABI_CALL(0x004EEF53u, sub_004EEF53); /* call 0x004EEF53 */

loc_004EF33A: ;
    eax = MEM32(ebp + 0x54);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_004EF3B2; /* ja: above (unsigned >) */

loc_004EF345: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x4EF89A); /* switch: 13 entries, 13 targets */
    if (_jt == 0x004EF34Cu) goto loc_004EF34C;
    if (_jt == 0x004EF354u) goto loc_004EF354;
    if (_jt == 0x004EF35Cu) goto loc_004EF35C;
    if (_jt == 0x004EF364u) goto loc_004EF364;
    if (_jt == 0x004EF36Cu) goto loc_004EF36C;
    if (_jt == 0x004EF374u) goto loc_004EF374;
    if (_jt == 0x004EF37Cu) goto loc_004EF37C;
    if (_jt == 0x004EF384u) goto loc_004EF384;
    if (_jt == 0x004EF38Cu) goto loc_004EF38C;
    if (_jt == 0x004EF394u) goto loc_004EF394;
    if (_jt == 0x004EF39Cu) goto loc_004EF39C;
    if (_jt == 0x004EF3A4u) goto loc_004EF3A4;
    if (_jt == 0x004EF3ACu) goto loc_004EF3AC;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_004EF34C: ;
    eax = MEM32(ebp + 0x60);
    MEM32(ebp + 0x14) = eax;
    goto loc_004EF3B2;

loc_004EF354: ;
    eax = MEM32(ebp + 0x60);
    MEM32(ebp + 0x20) = eax;
    goto loc_004EF3B2;

loc_004EF35C: ;
    eax = MEM32(ebp + 0x60);
    MEM32(ebp + 0x10) = eax;
    goto loc_004EF3B2;

loc_004EF364: ;
    eax = MEM32(ebp + 0x60);
    MEM32(ebp + 0x24) = eax;
    goto loc_004EF3B2;

loc_004EF36C: ;
    eax = MEM32(ebp + 0x60);
    MEM32(ebp + 0x18) = eax;
    goto loc_004EF3B2;

loc_004EF374: ;
    eax = MEM32(ebp + 0x60);
    MEM32(ebp + 0x40) = eax;
    goto loc_004EF3B2;

loc_004EF37C: ;
    eax = MEM32(ebp + 0x60);
    MEM32(ebp + 0x34) = eax;
    goto loc_004EF3B2;

loc_004EF384: ;
    eax = MEM32(ebp + 0x60);
    MEM32(ebp + 0x1C) = eax;
    goto loc_004EF3B2;

loc_004EF38C: ;
    eax = MEM32(ebp + 0x60);
    MEM32(ebp + 0x2C) = eax;
    goto loc_004EF3B2;

loc_004EF394: ;
    eax = MEM32(ebp + 0x60);
    MEM32(ebp + 0x3C) = eax;
    goto loc_004EF3B2;

loc_004EF39C: ;
    eax = MEM32(ebp + 0x60);
    MEM32(ebp + 0x38) = eax;
    goto loc_004EF3B2;

loc_004EF3A4: ;
    eax = MEM32(ebp + 0x60);
    MEM32(ebp + 0x30) = eax;
    goto loc_004EF3B2;

loc_004EF3AC: ;
    eax = MEM32(ebp + 0x60);
    MEM32(ebp + 0x28) = eax;

loc_004EF3B2: ;
    MEM32(ebp + 0x60) = MEM32(ebp + 0x60) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x60)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = MEM32(ebp + 0x78);

loc_004EF3B8: ;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), 0xA (8-bit) */
    edi = MEM32(ebp + 0x64);
    if (CMP_EQ(_fa, _fb)) goto loc_004EF3CF; /* je: equal / zero */

loc_004EF3C0: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 0x64) = edi;

loc_004EF3C4: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x7C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebp + 0x7C) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004EF2FF; /* jb: below (unsigned <) */

loc_004EF3CD: ;
    goto loc_004EF3D7;

loc_004EF3CF: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(ebp + 0x6F) = 1;
    MEM32(ebp + 0x64) = edi;

loc_004EF3D7: ;
    MEM32(ebp + 0x60) = MEM32(ebp + 0x60) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x60)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x7C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebp + 0x7C) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_004EF890; /* jae: above or equal (unsigned >=) */

loc_004EF3E4: ;
    MEM32(ebp + 0x54) = MEM32(ebp + 0x54) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x54)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x58) = esi;
    MEM32(ebp + 0x50) = edi;

loc_004EF3F0: ;
    esi = MEM32(ebp + 0x50);
    SET_LO8(eax, MEM8(esi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(9) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 9 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004EF43F; /* je: equal / zero */

loc_004EF3F9: ;
    _fa = (uint32_t)(MEM8(ebp + 0x6F)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x6F), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004EF44C; /* je: equal / zero */

loc_004EF3FF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004EF434; /* jne: not equal / not zero */

loc_004EF403: ;
    MEM32(ebp + 0x60) = MEM32(ebp + 0x60) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x60)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + 0x58) = MEM32(ebp + 0x58) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x58)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0x54) = MEM32(ebp + 0x54) + 0x34;
    _fa = (uint32_t)(MEM32(ebp + 0x54)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ebx + 4);
    ecx = MEM32(ebp + 0x58);
    edx = MEM32(ebx);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) eax = ecx; /* cmovb */
    ecx = MEM32(ebp + 0x54);
    edi = eax;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x34);
    esi = edx + ecx + -52;
    PUSH32(esp, 0xD);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ecx);
    MEM8(ebp + 0x6F) = 1;
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

loc_004EF434: ;
    MEM32(ebp + 0x64) = MEM32(ebp + 0x64) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x64)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 0x50) = MEM32(ebp + 0x50) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x50)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_004EF884;

loc_004EF43F: ;
    _fa = (uint32_t)(MEM8(ebp + 0x6F)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x6F), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004EF44C; /* je: equal / zero */

loc_004EF445: ;
    MEM32(ebp + 0x64) = MEM32(ebp + 0x64) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x64)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 0x50) = esi;

loc_004EF44C: ;
    ecx = MEM32(ebp + 0x64);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x7C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + 0x7C) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_004EF46C; /* jae: above or equal (unsigned >=) */

loc_004EF456: ;
    edx = ecx;

loc_004EF458: ;
    SET_LO8(ecx, MEM8(esi + eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(9) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 9 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004EF46C; /* je: equal / zero */

loc_004EF460: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004EF46C; /* je: equal / zero */

loc_004EF465: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x7C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebp + 0x7C) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004EF458; /* jb: below (unsigned <) */

loc_004EF46C: ;
    ecx = MEM32(ebp + 0x64);
    edi = eax + ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x7C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebp + 0x7C) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004EF484; /* je: equal / zero */

loc_004EF477: ;
    eax = MEM32(ebp + 0x78);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ecx, MEM8(eax));
    MEM8(ebp + 0x47) = LO8(ecx);
    MEM8(eax) = 0;

loc_004EF484: ;
    esi = MEM32(ebp + 0x60);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + 0x14) (32-bit) */
    MEM8(ebp + 0x6F) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_004EF4D8; /* jne: not equal / not zero */

loc_004EF490: ;
    eax = MEM32(ebp + 0x7C);
    _fb = (uint32_t)(MEM32(ebp + 0x64)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + 0x64);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + 0x48) = eax;
    eax = MEM32(ebp + 0x50);
    MEM32(ebp + 0x4C) = eax;
    eax = MEM32(ebp + 0x58);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_004EF4A8; /* jg: greater (signed >) */

loc_004EF4A6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004EF4A8: ;
    ecx = MEM32(ebx);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x34);
    eax = MEM32(eax + ecx + 0x14);
    MEM32(ebp + 0x68) = eax;
    eax = ebp + 0x68;
    PUSH32(esp, eax);
    esi = ebp + 0x48;
    ebx = ebp + 0x4C;
    PUSH32(esp, 0x004EF4C3u); RECOMP_ABI_CALL(0x004EEEEBu, sub_004EEEEB); /* call 0x004EEEEB */

loc_004EF4C3: ;
    eax = MEM32(ebp + 0x5C);
    eax = MEM32(eax);
    edx = MEM32(ebp + 0x54);
    POP32(esp, ecx);
    ecx = MEM32(ebp + 0x68);
    MEM32(edx + eax + 0x14) = ecx;
    goto loc_004EF86C;

loc_004EF4D8: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + 0x20) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004EF525; /* jne: not equal / not zero */

loc_004EF4DD: ;
    eax = MEM32(ebp + 0x7C);
    _fb = (uint32_t)(MEM32(ebp + 0x64)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + 0x64);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + 0x4C) = eax;
    eax = MEM32(ebp + 0x50);
    MEM32(ebp + 0x48) = eax;
    eax = MEM32(ebp + 0x58);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_004EF4F5; /* jg: greater (signed >) */

loc_004EF4F3: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004EF4F5: ;
    ecx = MEM32(ebx);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x34);
    eax = MEM32(eax + ecx + 0x10);
    MEM32(ebp + 0x68) = eax;
    eax = ebp + 0x68;
    PUSH32(esp, eax);
    esi = ebp + 0x4C;
    ebx = ebp + 0x48;
    PUSH32(esp, 0x004EF510u); RECOMP_ABI_CALL(0x004EEEEBu, sub_004EEEEB); /* call 0x004EEEEB */

loc_004EF510: ;
    eax = MEM32(ebp + 0x5C);
    eax = MEM32(eax);
    edx = MEM32(ebp + 0x54);
    POP32(esp, ecx);
    ecx = MEM32(ebp + 0x68);
    MEM32(edx + eax + 0x10) = ecx;
    goto loc_004EF86C;

loc_004EF525: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + 0x18) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004EF572; /* jne: not equal / not zero */

loc_004EF52A: ;
    eax = MEM32(ebp + 0x7C);
    _fb = (uint32_t)(MEM32(ebp + 0x64)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + 0x64);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + 0x4C) = eax;
    eax = MEM32(ebp + 0x50);
    MEM32(ebp + 0x48) = eax;
    eax = MEM32(ebp + 0x58);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_004EF542; /* jg: greater (signed >) */

loc_004EF540: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004EF542: ;
    ecx = MEM32(ebx);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x34);
    eax = MEM32(eax + ecx + 8);
    MEM32(ebp + 0x68) = eax;
    eax = ebp + 0x68;
    PUSH32(esp, eax);
    esi = ebp + 0x4C;
    ebx = ebp + 0x48;
    PUSH32(esp, 0x004EF55Du); RECOMP_ABI_CALL(0x004EEEEBu, sub_004EEEEB); /* call 0x004EEEEB */

loc_004EF55D: ;
    eax = MEM32(ebp + 0x5C);
    eax = MEM32(eax);
    edx = MEM32(ebp + 0x54);
    POP32(esp, ecx);
    ecx = MEM32(ebp + 0x68);
    MEM32(edx + eax + 8) = ecx;
    goto loc_004EF86C;

loc_004EF572: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + 0x40) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004EF5BF; /* jne: not equal / not zero */

loc_004EF577: ;
    eax = MEM32(ebp + 0x7C);
    _fb = (uint32_t)(MEM32(ebp + 0x64)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + 0x64);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + 0x4C) = eax;
    eax = MEM32(ebp + 0x50);
    MEM32(ebp + 0x48) = eax;
    eax = MEM32(ebp + 0x58);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_004EF58F; /* jg: greater (signed >) */

loc_004EF58D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004EF58F: ;
    ecx = MEM32(ebx);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x34);
    eax = MEM32(eax + ecx + 0xC);
    MEM32(ebp + 0x68) = eax;
    eax = ebp + 0x68;
    PUSH32(esp, eax);
    esi = ebp + 0x4C;
    ebx = ebp + 0x48;
    PUSH32(esp, 0x004EF5AAu); RECOMP_ABI_CALL(0x004EEEEBu, sub_004EEEEB); /* call 0x004EEEEB */

loc_004EF5AA: ;
    eax = MEM32(ebp + 0x5C);
    eax = MEM32(eax);
    edx = MEM32(ebp + 0x54);
    POP32(esp, ecx);
    ecx = MEM32(ebp + 0x68);
    MEM32(edx + eax + 0xC) = ecx;
    goto loc_004EF86C;

loc_004EF5BF: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x34)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + 0x34) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004EF60B; /* jne: not equal / not zero */

loc_004EF5C4: ;
    eax = MEM32(ebp + 0x7C);
    _fb = (uint32_t)(MEM32(ebp + 0x64)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + 0x64);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx = MEM32(ebp + 0x50);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004EF5D3u); RECOMP_ABI_CALL(0x004EEE3Bu, sub_004EEE3B); /* call 0x004EEE3B */

loc_004EF5D3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004EF5EA; /* je: equal / zero */

loc_004EF5D9: ;
    ecx = MEM32(ebp + 0x5C);
    ecx = MEM32(ecx);
    edx = MEM32(ebp + 0x54);
    MEM32(edx + ecx + 0x18) = eax;
    goto loc_004EF86F;

loc_004EF5EA: ;
    eax = MEM32(ebp + 0x58);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_004EF5F3; /* jg: greater (signed >) */

loc_004EF5F1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004EF5F3: ;
    ecx = MEM32(ebp + 0x5C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x34);
    ecx = MEM32(ecx);
    eax = MEM32(eax + ecx + 0x18);
    edx = MEM32(ebp + 0x54);
    MEM32(ecx + edx + 0x18) = eax;
    goto loc_004EF86F;

loc_004EF60B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + 0x1C) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004EF657; /* jne: not equal / not zero */

loc_004EF610: ;
    eax = MEM32(ebp + 0x7C);
    _fb = (uint32_t)(MEM32(ebp + 0x64)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + 0x64);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx = MEM32(ebp + 0x50);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004EF61Fu); RECOMP_ABI_CALL(0x004EEE3Bu, sub_004EEE3B); /* call 0x004EEE3B */

loc_004EF61F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004EF636; /* je: equal / zero */

loc_004EF625: ;
    ecx = MEM32(ebp + 0x5C);
    ecx = MEM32(ecx);
    edx = MEM32(ebp + 0x54);
    MEM32(edx + ecx + 0x1C) = eax;
    goto loc_004EF86F;

loc_004EF636: ;
    eax = MEM32(ebp + 0x58);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_004EF63F; /* jg: greater (signed >) */

loc_004EF63D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004EF63F: ;
    ecx = MEM32(ebp + 0x5C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x34);
    ecx = MEM32(ecx);
    eax = MEM32(eax + ecx + 0x1C);
    edx = MEM32(ebp + 0x54);
    MEM32(ecx + edx + 0x1C) = eax;
    goto loc_004EF86F;

loc_004EF657: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x2C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + 0x2C) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004EF6A4; /* jne: not equal / not zero */

loc_004EF65C: ;
    eax = MEM32(ebp + 0x7C);
    _fb = (uint32_t)(MEM32(ebp + 0x64)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + 0x64);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + 0x4C) = eax;
    eax = MEM32(ebp + 0x50);
    MEM32(ebp + 0x48) = eax;
    eax = MEM32(ebp + 0x58);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_004EF674; /* jg: greater (signed >) */

loc_004EF672: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004EF674: ;
    ecx = MEM32(ebx);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x34);
    eax = MEM32(eax + ecx + 0x20);
    MEM32(ebp + 0x68) = eax;
    eax = ebp + 0x68;
    PUSH32(esp, eax);
    esi = ebp + 0x4C;
    ebx = ebp + 0x48;
    PUSH32(esp, 0x004EF68Fu); RECOMP_ABI_CALL(0x004EEEEBu, sub_004EEEEB); /* call 0x004EEEEB */

loc_004EF68F: ;
    eax = MEM32(ebp + 0x5C);
    eax = MEM32(eax);
    edx = MEM32(ebp + 0x54);
    POP32(esp, ecx);
    ecx = MEM32(ebp + 0x68);
    MEM32(edx + eax + 0x20) = ecx;
    goto loc_004EF86C;

loc_004EF6A4: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + 0x10) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004EF6EF; /* jne: not equal / not zero */

loc_004EF6A9: ;
    eax = MEM32(ebp + 0x7C);
    _fb = (uint32_t)(MEM32(ebp + 0x64)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + 0x64);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + 0x4C) = eax;
    eax = MEM32(ebp + 0x50);
    MEM32(ebp + 0x48) = eax;
    eax = MEM32(ebp + 0x58);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_004EF6C1; /* jg: greater (signed >) */

loc_004EF6BF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004EF6C1: ;
    ecx = MEM32(ebx);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x34);
    eax = MEM32(eax + ecx);
    MEM32(ebp + 0x68) = eax;
    eax = ebp + 0x68;
    PUSH32(esp, eax);
    esi = ebp + 0x4C;
    ebx = ebp + 0x48;
    PUSH32(esp, 0x004EF6DBu); RECOMP_ABI_CALL(0x004EEEEBu, sub_004EEEEB); /* call 0x004EEEEB */

loc_004EF6DB: ;
    eax = MEM32(ebp + 0x5C);
    eax = MEM32(eax);
    edx = MEM32(ebp + 0x54);
    POP32(esp, ecx);
    ecx = MEM32(ebp + 0x68);
    MEM32(edx + eax) = ecx;
    goto loc_004EF86C;

loc_004EF6EF: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + 0x24) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004EF73C; /* jne: not equal / not zero */

loc_004EF6F4: ;
    eax = MEM32(ebp + 0x7C);
    _fb = (uint32_t)(MEM32(ebp + 0x64)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + 0x64);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + 0x4C) = eax;
    eax = MEM32(ebp + 0x50);
    MEM32(ebp + 0x48) = eax;
    eax = MEM32(ebp + 0x58);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_004EF70C; /* jg: greater (signed >) */

loc_004EF70A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004EF70C: ;
    ecx = MEM32(ebx);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x34);
    eax = MEM32(eax + ecx + 4);
    MEM32(ebp + 0x68) = eax;
    eax = ebp + 0x68;
    PUSH32(esp, eax);
    esi = ebp + 0x4C;
    ebx = ebp + 0x48;
    PUSH32(esp, 0x004EF727u); RECOMP_ABI_CALL(0x004EEEEBu, sub_004EEEEB); /* call 0x004EEEEB */

loc_004EF727: ;
    eax = MEM32(ebp + 0x5C);
    eax = MEM32(eax);
    edx = MEM32(ebp + 0x54);
    POP32(esp, ecx);
    ecx = MEM32(ebp + 0x68);
    MEM32(edx + eax + 4) = ecx;
    goto loc_004EF86C;

loc_004EF73C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x3C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + 0x3C) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004EF78A; /* jne: not equal / not zero */

loc_004EF741: ;
    eax = MEM32(ebp + 0x7C);
    _fb = (uint32_t)(MEM32(ebp + 0x64)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + 0x64);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + 0x4C) = eax;
    eax = MEM32(ebp + 0x50);
    MEM32(ebp + 0x48) = eax;
    eax = MEM32(ebp + 0x58);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_004EF759; /* jg: greater (signed >) */

loc_004EF757: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004EF759: ;
    ecx = MEM32(ebx);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x34);
    eax = ZX8(MEM8(eax + ecx + 0x24));
    MEM32(ebp + 0x68) = eax;
    eax = ebp + 0x68;
    PUSH32(esp, eax);
    esi = ebp + 0x4C;
    ebx = ebp + 0x48;
    PUSH32(esp, 0x004EF775u); RECOMP_ABI_CALL(0x004EEEEBu, sub_004EEEEB); /* call 0x004EEEEB */

loc_004EF775: ;
    eax = MEM32(ebp + 0x5C);
    eax = MEM32(eax);
    edx = MEM32(ebp + 0x54);
    POP32(esp, ecx);
    SET_LO8(ecx, MEM8(ebp + 0x68));
    MEM8(edx + eax + 0x24) = LO8(ecx);
    goto loc_004EF86C;

loc_004EF78A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x38)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + 0x38) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004EF7D8; /* jne: not equal / not zero */

loc_004EF78F: ;
    eax = MEM32(ebp + 0x7C);
    _fb = (uint32_t)(MEM32(ebp + 0x64)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + 0x64);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + 0x4C) = eax;
    eax = MEM32(ebp + 0x50);
    MEM32(ebp + 0x48) = eax;
    eax = MEM32(ebp + 0x58);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_004EF7A7; /* jg: greater (signed >) */

loc_004EF7A5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004EF7A7: ;
    ecx = MEM32(ebx);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x34);
    eax = ZX8(MEM8(eax + ecx + 0x25));
    MEM32(ebp + 0x68) = eax;
    eax = ebp + 0x68;
    PUSH32(esp, eax);
    esi = ebp + 0x4C;
    ebx = ebp + 0x48;
    PUSH32(esp, 0x004EF7C3u); RECOMP_ABI_CALL(0x004EEEEBu, sub_004EEEEB); /* call 0x004EEEEB */

loc_004EF7C3: ;
    eax = MEM32(ebp + 0x5C);
    eax = MEM32(eax);
    edx = MEM32(ebp + 0x54);
    POP32(esp, ecx);
    SET_LO8(ecx, MEM8(ebp + 0x68));
    MEM8(edx + eax + 0x25) = LO8(ecx);
    goto loc_004EF86C;

loc_004EF7D8: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x30)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + 0x30) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004EF823; /* jne: not equal / not zero */

loc_004EF7DD: ;
    eax = MEM32(ebp + 0x7C);
    _fb = (uint32_t)(MEM32(ebp + 0x64)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + 0x64);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + 0x4C) = eax;
    eax = MEM32(ebp + 0x50);
    MEM32(ebp + 0x48) = eax;
    eax = MEM32(ebp + 0x58);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_004EF7F5; /* jg: greater (signed >) */

loc_004EF7F3: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004EF7F5: ;
    ecx = MEM32(ebx);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x34);
    eax = ZX8(MEM8(eax + ecx + 0x26));
    MEM32(ebp + 0x68) = eax;
    eax = ebp + 0x68;
    PUSH32(esp, eax);
    esi = ebp + 0x4C;
    ebx = ebp + 0x48;
    PUSH32(esp, 0x004EF811u); RECOMP_ABI_CALL(0x004EEEEBu, sub_004EEEEB); /* call 0x004EEEEB */

loc_004EF811: ;
    eax = MEM32(ebp + 0x5C);
    eax = MEM32(eax);
    edx = MEM32(ebp + 0x54);
    POP32(esp, ecx);
    SET_LO8(ecx, MEM8(ebp + 0x68));
    MEM8(edx + eax + 0x26) = LO8(ecx);
    goto loc_004EF86C;

loc_004EF823: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + 0x28) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004EF872; /* jne: not equal / not zero */

loc_004EF828: ;
    eax = MEM32(ebp + 0x7C);
    _fb = (uint32_t)(MEM32(ebp + 0x64)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + 0x64);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + 0x4C) = eax;
    eax = MEM32(ebp + 0x50);
    MEM32(ebp + 0x48) = eax;
    eax = MEM32(ebp + 0x58);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_004EF840; /* jg: greater (signed >) */

loc_004EF83E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004EF840: ;
    ecx = MEM32(ebx);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x34);
    eax = ZX8(MEM8(eax + ecx + 0x27));
    MEM32(ebp + 0x68) = eax;
    eax = ebp + 0x68;
    PUSH32(esp, eax);
    esi = ebp + 0x4C;
    ebx = ebp + 0x48;
    PUSH32(esp, 0x004EF85Cu); RECOMP_ABI_CALL(0x004EEEEBu, sub_004EEEEB); /* call 0x004EEEEB */

loc_004EF85C: ;
    eax = MEM32(ebp + 0x5C);
    eax = MEM32(eax);
    edx = MEM32(ebp + 0x54);
    POP32(esp, ecx);
    SET_LO8(ecx, MEM8(ebp + 0x68));
    MEM8(edx + eax + 0x27) = LO8(ecx);

loc_004EF86C: ;
    esi = MEM32(ebp + 0x60);

loc_004EF86F: ;
    ebx = MEM32(ebp + 0x5C);

loc_004EF872: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x7C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebp + 0x7C) (32-bit) */
    MEM32(ebp + 0x60) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_004EF884; /* je: equal / zero */

loc_004EF87B: ;
    SET_LO8(eax, MEM8(ebp + 0x47));
    ecx = MEM32(ebp + 0x78);
    MEM8(edi + ecx) = LO8(eax);

loc_004EF884: ;
    eax = MEM32(ebp + 0x7C);
    _fa = (uint32_t)(MEM32(ebp + 0x64)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x64), eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004EF3F0; /* jb: below (unsigned <) */

loc_004EF890: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x70;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004EF8CE
 * Original: 0x004EF8CE - 0x004EF8E7 (25 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EF8CE(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EF8CE: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004EF8E1; /* je: equal / zero */

loc_004EF8D7: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x004EF8DEu); RECOMP_ABI_CALL(0x004EF8E7u, sub_004EF8E7); /* call 0x004EF8E7 */

loc_004EF8DE: ;
    MEM32(esi) = MEM32(esi) & 0;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_004EF8E1: ;
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004EF8E7
 * Original: 0x004EF8E7 - 0x004EF92D (70 bytes, 30 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EF8E7(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EF8E7: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 2 (8-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_004EF919; /* je: equal / zero */

loc_004EF8F4: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x4EED00);
    esi = edi + -4;
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x34);
    PUSH32(esp, edi);
    PUSH32(esp, 0x004EF907u); RECOMP_ABI_CALL(0x00029295u, sub_00029295); /* call 0x00029295 */

loc_004EF907: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004EF914; /* je: equal / zero */

loc_004EF90C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x8D7E94); PUSH32(esp, 0x004EF913u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EF90Du); } /* indirect call */
    }

loc_004EF913: ;
    POP32(esp, ecx);

loc_004EF914: ;
    eax = esi;
    POP32(esp, esi);
    goto loc_004EF928;

loc_004EF919: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004EF926; /* je: equal / zero */

loc_004EF91E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x8D7E94); PUSH32(esp, 0x004EF925u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EF91Fu); } /* indirect call */
    }

loc_004EF925: ;
    POP32(esp, ecx);

loc_004EF926: ;
    eax = edi;

loc_004EF928: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004EF93B
 * Original: 0x004EF93B - 0x004EF957 (28 bytes, 11 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004EF93B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EF93B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(ecx + 4); PUSH32(esp, 0x004EF950u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x004EF94Du); } /* indirect call */
    }

loc_004EF950: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_004EF957
 * Original: 0x004EF957 - 0x004EF958 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EF957(void)
{

loc_004EF957: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004EF991
 * Original: 0x004EF991 - 0x004EF9AE (29 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EF991(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EF991: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(0x8D7E98));
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x7B891F);
    { uint32_t _icall_target = MEM32(0x8D7E90); PUSH32(esp, 0x004EF9AAu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x004EF9A4u); } /* indirect call */
    }

loc_004EF9AA: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_004EF9B7
 * Original: 0x004EF9B7 - 0x004EF9D4 (29 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EF9B7(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EF9B7: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(0x8D7E98));
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x7B891F);
    { uint32_t _icall_target = MEM32(0x8D7E90); PUSH32(esp, 0x004EF9D0u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x004EF9CAu); } /* indirect call */
    }

loc_004EF9D0: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_004EF9E2
 * Original: 0x004EF9E2 - 0x004EFA44 (98 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004EF9E2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EF9E2: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004EF9F5; /* jne: not equal / not zero */

loc_004EF9ED: ;
    eax = MEM32(ebp + 8);
    eax = ZX8(MEM8(eax));
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_004EF9F5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004EFA08; /* jne: not equal / not zero */

loc_004EF9FA: ;
    eax = MEM32(ebp + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(ecx, MEM8(eax));
    SET_LO8(ecx, MEM8(eax + 1));
    eax = ecx;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_004EFA08: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004EFA1D; /* jne: not equal / not zero */

loc_004EFA0D: ;
    eax = MEM32(ebp + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(ecx, MEM8(eax));
    SET_LO8(ecx, MEM8(eax + 1));
    eax = ZX8(MEM8(eax + 2));
    goto loc_004EFA39;

loc_004EFA1D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004EFA40; /* jne: not equal / not zero */

loc_004EFA22: ;
    eax = MEM32(ebp + 8);
    edx = ZX8(MEM8(eax + 2));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(ecx, MEM8(eax));
    SET_LO8(ecx, MEM8(eax + 1));
    eax = ZX8(MEM8(eax + 3));
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_004EFA39: ;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_004EFA40: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_004EFA44
 * Original: 0x004EFA44 - 0x004EFA85 (65 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004EFA44(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EFA44: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004EFA57; /* jne: not equal / not zero */

loc_004EFA4F: ;
    eax = MEM32(ebp + 8);
    eax = ZX8(MEM8(eax));
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_004EFA57: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004EFA64; /* jne: not equal / not zero */

loc_004EFA5C: ;
    eax = MEM32(ebp + 8);
    eax = ZX16(MEM16(eax));
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_004EFA64: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004EFA75; /* jne: not equal / not zero */

loc_004EFA69: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax);
    eax = eax & 0xFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_004EFA75: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004EFA81; /* jne: not equal / not zero */

loc_004EFA7A: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_004EFA81: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_004EFA85
 * Original: 0x004EFA85 - 0x004EFAAB (38 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004EFA85(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EFA85: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ebp + -80;
    PUSH32(esp, eax);
    MEM32(ebp + -80) = 0x50;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EFA9Bu); RECOMP_ABI_CALL(0x00598D5Du, sub_00598D5D); /* call 0x00598D5D */

loc_004EFA9B: ;
    POP32(esp, ecx);
    ecx = MEM32(ebp + -76);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004EFAA9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EFAA6u); } /* indirect call */
    }

loc_004EFAA9: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004EFAAB
 * Original: 0x004EFAAB - 0x004EFD6C (705 bytes, 238 insns)
 * Category: game_audio
 * CC: cdecl, 10 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004EFAAB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EFAAB: ;
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
    PUSH32(esp, 0x004EFAB8u); RECOMP_ABI_CALL(0x00589D40u, sub_00589D40); /* call 0x00589D40 */

loc_004EFAB8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004EFAC3; /* jne: not equal / not zero */

loc_004EFABC: ;
    MEM32(ebp + 0x2C) = 1;

loc_004EFAC3: ;
    edi = 0x98;
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EFAD2u); RECOMP_ABI_CALL(0x0059E9C2u, sub_0059E9C2); /* call 0x0059E9C2 */

loc_004EFAD2: ;
    eax = MEM32(ebp + 0x28);
    MEM32(esi + 0x18) = eax;
    eax = MEM32(ebp + 0x2C);
    MEM32(esi + 0x1C) = eax;
    eax = MEM32(ebp + 8);
    MEM32(esi + 0xC) = eax;
    eax = MEM32(ebp + 0x18);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x20) = ebx;
    MEM32(esi + 0x28) = ebx;
    MEM32(esi + 0x24) = ebx;
    MEM32(esi + 0x2C) = ebx;
    MEM32(esi + 0x44) = ebx;
    MEM32(esi + 0x60) = ebx;
    MEM32(esi + 0x68) = ebx;
    MEM32(esi) = ebx;
    MEM32(esi + 0x74) = ebx;
    MEM32(esi + 0x78) = ebx;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x94) = ebx;
    _fa = (uint32_t)(MEM32(0x8D7E90)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8D7E90), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004EFB20; /* je: equal / zero */

loc_004EFB18: ;
    _fa = (uint32_t)(MEM32(0x8D7E94)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8D7E94), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004EFB2A; /* jne: not equal / not zero */

loc_004EFB20: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EFB25u); RECOMP_ABI_CALL(0x0059F28Cu, sub_0059F28C); /* call 0x0059F28C */

loc_004EFB25: ;
    goto loc_004EFD65;

loc_004EFB2A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004EFC86; /* je: equal / zero */

loc_004EFB32: ;
    MEM8(esi + 0x14) = 1;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(0x8D7E98));
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, 0x86E704);
    { uint32_t _icall_target = MEM32(0x8D7E90); PUSH32(esp, 0x004EFB4Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EFB46u); } /* indirect call */
    }

loc_004EFB4C: ;
    MEM32(esi + 4) = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(0x8D7E98));
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, 0x86E71C);
    { uint32_t _icall_target = MEM32(0x8D7E90); PUSH32(esp, 0x004EFB65u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EFB5Fu); } /* indirect call */
    }

loc_004EFB65: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    MEM32(esi + 8) = eax;
    PUSH32(esp, MEM32(esi + 4));
    PUSH32(esp, 1);
    PUSH32(esp, 2);
    PUSH32(esp, 2);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EFB79u); RECOMP_ABI_CALL(0x0059B905u, sub_0059B905); /* call 0x0059B905 */

loc_004EFB79: ;
    PUSH32(esp, MEM32(ebp + 0x20));
    MEM32(esi + 0x30) = eax;
    PUSH32(esp, MEM32(esi + 8));
    PUSH32(esp, 1);
    PUSH32(esp, 2);
    PUSH32(esp, 2);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EFB8Du); RECOMP_ABI_CALL(0x0059B905u, sub_0059B905); /* call 0x0059B905 */

loc_004EFB8D: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x34);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    MEM32(esi + 0x34) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EFB9Cu); RECOMP_ABI_CALL(0x0059BB35u, sub_0059BB35); /* call 0x0059BB35 */

loc_004EFB9C: ;
    PUSH32(esp, 0x34);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0x30));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EFBA7u); RECOMP_ABI_CALL(0x0059BB35u, sub_0059BB35); /* call 0x0059BB35 */

loc_004EFBA7: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    PUSH32(esp, 0x4D);
    PUSH32(esp, 0xFF);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0x30));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EFBBBu); RECOMP_ABI_CALL(0x0059BAC7u, sub_0059BAC7); /* call 0x0059BAC7 */

loc_004EFBBB: ;
    PUSH32(esp, 0xFFFFFFFEu);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 2);
    PUSH32(esp, MEM32(esi + 0x30));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EFBC9u); RECOMP_ABI_CALL(0x0059BAC7u, sub_0059BAC7); /* call 0x0059BAC7 */

loc_004EFBC9: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1C), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004EFBD4; /* jne: not equal / not zero */

loc_004EFBD1: ;
    PUSH32(esp, edi);
    goto loc_004EFBD6;

loc_004EFBD4: ;
    PUSH32(esp, 0xFFFFFFFFu);

loc_004EFBD6: ;
    PUSH32(esp, 0x4353);
    PUSH32(esp, 0xFFFF);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0x34));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EFBE9u); RECOMP_ABI_CALL(0x0059BAC7u, sub_0059BAC7); /* call 0x0059BAC7 */

loc_004EFBE9: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0xFFFFFFFEu);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 2);
    PUSH32(esp, MEM32(esi + 0x34));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EFBFAu); RECOMP_ABI_CALL(0x0059BAC7u, sub_0059BAC7); /* call 0x0059BAC7 */

loc_004EFBFA: ;
    eax = MEM32(esi + 0x18);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004EFC2B; /* jne: not equal / not zero */

loc_004EFC04: ;
    PUSH32(esp, MEM32(0x8D7E98));
    PUSH32(esp, MEM32(ebp + 0x18));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EFC12u); RECOMP_ABI_CALL(0x0059927Cu, sub_0059927C); /* call 0x0059927C */

loc_004EFC12: ;
    MEM32(esi + 0x2C) = eax;
    PUSH32(esp, MEM32(0x8D7E98));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EFC23u); RECOMP_ABI_CALL(0x0059927Cu, sub_0059927C); /* call 0x0059927C */

loc_004EFC23: ;
    MEM32(esi + 0x24) = eax;
    goto loc_004EFD62;

loc_004EFC2B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    PUSH32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_004EFC5B; /* jne: not equal / not zero */

loc_004EFC30: ;
    PUSH32(esp, MEM32(ebp + 0x24));
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(esi + 0x34));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EFC3Eu); RECOMP_ABI_CALL(0x0059BBFBu, sub_0059BBFB); /* call 0x0059BBFB */

loc_004EFC3E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x14));
    MEM32(esi + 0x3C) = eax;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, MEM32(esi + 0x30));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EFC50u); RECOMP_ABI_CALL(0x0059BBFBu, sub_0059BBFB); /* call 0x0059BBFB */

loc_004EFC50: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x38) = eax;
    goto loc_004EFD65;

loc_004EFC5B: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(esi + 0xC));
    PUSH32(esp, MEM32(esi + 0x30));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EFC69u); RECOMP_ABI_CALL(0x0059BC9Du, sub_0059BC9D); /* call 0x0059BC9D */

loc_004EFC69: ;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x1C));
    MEM32(esi + 0x38) = eax;
    PUSH32(esp, MEM32(esi + 0x10));
    PUSH32(esp, MEM32(esi + 0x34));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EFC7Bu); RECOMP_ABI_CALL(0x0059BC9Du, sub_0059BC9D); /* call 0x0059BC9D */

loc_004EFC7B: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x3C) = eax;
    goto loc_004EFD65;

loc_004EFC86: ;
    MEM8(esi + 0x14) = LO8(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(0x8D7E98));
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, 0x86E734);
    { uint32_t _icall_target = MEM32(0x8D7E90); PUSH32(esp, 0x004EFC9Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EFC99u); } /* indirect call */
    }

loc_004EFC9F: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    MEM32(esi + 4) = eax;
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    PUSH32(esp, 3);
    PUSH32(esp, 2);
    MEM32(esi + 8) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EFCB4u); RECOMP_ABI_CALL(0x0059B905u, sub_0059B905); /* call 0x0059B905 */

loc_004EFCB4: ;
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    MEM32(esi + 0x30) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EFCBFu); RECOMP_ABI_CALL(0x0059BB9Du, sub_0059BB9D); /* call 0x0059BB9D */

loc_004EFCBF: ;
    PUSH32(esp, 0x34);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    MEM32(esi + 0x34) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EFCCBu); RECOMP_ABI_CALL(0x0059BB35u, sub_0059BB35); /* call 0x0059BB35 */

loc_004EFCCB: ;
    PUSH32(esp, 0x34);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0x30));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EFCD6u); RECOMP_ABI_CALL(0x0059BB35u, sub_0059BB35); /* call 0x0059BB35 */

loc_004EFCD6: ;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    PUSH32(esp, 0x4D);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(esi + 0x30));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EFCECu); RECOMP_ABI_CALL(0x0059BAC7u, sub_0059BAC7); /* call 0x0059BAC7 */

loc_004EFCEC: ;
    PUSH32(esp, 0xFFFFFFFEu);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 3);
    PUSH32(esp, MEM32(esi + 0x30));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EFCFAu); RECOMP_ABI_CALL(0x0059BAC7u, sub_0059BAC7); /* call 0x0059BAC7 */

loc_004EFCFA: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1C), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004EFD06; /* jne: not equal / not zero */

loc_004EFD02: ;
    PUSH32(esp, 2);
    goto loc_004EFD08;

loc_004EFD06: ;
    PUSH32(esp, 0xFFFFFFFFu);

loc_004EFD08: ;
    PUSH32(esp, 0x4353);
    PUSH32(esp, 0xFFFF);
    PUSH32(esp, 2);
    PUSH32(esp, MEM32(esi + 0x30));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EFD1Cu); RECOMP_ABI_CALL(0x0059BAC7u, sub_0059BAC7); /* call 0x0059BAC7 */

loc_004EFD1C: ;
    eax = MEM32(esi + 0x18);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004EFD3C; /* jne: not equal / not zero */

loc_004EFD27: ;
    PUSH32(esp, MEM32(0x8D7E98));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EFD35u); RECOMP_ABI_CALL(0x0059927Cu, sub_0059927C); /* call 0x0059927C */

loc_004EFD35: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi + 0x24) = eax;
    goto loc_004EFD65;

loc_004EFD3C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    PUSH32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_004EFD51; /* jne: not equal / not zero */

loc_004EFD41: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, MEM32(esi + 0x30));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EFD4Fu); RECOMP_ABI_CALL(0x0059BBFBu, sub_0059BBFB); /* call 0x0059BBFB */

loc_004EFD4F: ;
    goto loc_004EFD5F;

loc_004EFD51: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(esi + 0xC));
    PUSH32(esp, MEM32(esi + 0x30));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EFD5Fu); RECOMP_ABI_CALL(0x0059BC9Du, sub_0059BC9D); /* call 0x0059BC9D */

loc_004EFD5F: ;
    MEM32(esi + 0x38) = eax;

loc_004EFD62: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004EFD65: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 44; return; /* ret 40 */

}

/**
 * sub_004EFD6C
 * Original: 0x004EFD6C - 0x004EFD76 (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EFD6C(void)
{

loc_004EFD6C: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x74) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004EFD76
 * Original: 0x004EFD76 - 0x004EFDAB (53 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EFD76(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_004EFD76: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    fp_push(MEMF(esp + 4)); /* fld float */
    PUSH32(esp, esi);
    esi = ecx;
    MEMF(esi + 0x48) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x004EFD8Du); RECOMP_ABI_CALL(0x005CBF44u, sub_005CBF44); /* call 0x005CBF44 */

loc_004EFD8D: ;
    { extern void nhl07_trace_movie_request(uint32_t,uint32_t,uint32_t); nhl07_trace_movie_request(1,esi,eax); }
    ecx = MEM32(esi + 0x68);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004EFD96u); RECOMP_ABI_CALL(0x004F06F0u, sub_004F06F0); /* call 0x004F06F0 */

loc_004EFD96: ;
    { extern void nhl07_trace_movie_request(uint32_t,uint32_t,uint32_t); nhl07_trace_movie_request(2,esi,eax); }
    ecx = MEM32(esi + 0x68);
    MEM32(esi + 0x78) = eax;
    PUSH32(esp, 0x004EFDA1u); RECOMP_ABI_CALL(0x004F06CAu, sub_004F06CA); /* call 0x004F06CA */

loc_004EFDA1: ;
    MEM32(esi + 0x44) = eax;
    eax = MEM32(esi + 0x78);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_004EFDAB
 * Original: 0x004EFDAB - 0x004EFDD4 (41 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EFDAB(void)
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

loc_004EFDAB: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x74);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004EFDD0; /* je: equal / zero */

loc_004EFDB3: ;
    _fa = (uint32_t)(MEM32(ecx + 0x78)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x78), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004EFDBE; /* je: equal / zero */

loc_004EFDB9: ;
    PUSH32(esp, MEM32(ecx + 0x44));
    goto loc_004EFDC7;

loc_004EFDBE: ;
    fp_push(MEMF(ecx + 0x48)); /* fld float */
    PUSH32(esp, 0x004EFDC6u); RECOMP_ABI_CALL(0x005CBF44u, sub_005CBF44); /* call 0x005CBF44 */

loc_004EFDC6: ;
    PUSH32(esp, eax);

loc_004EFDC7: ;
    ecx = esi;
    PUSH32(esp, 0x004EFDCEu); RECOMP_ABI_CALL(0x004EED40u, sub_004EED40); /* call 0x004EED40 */

loc_004EFDCE: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_004EFDD0: ;
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
 * sub_004EFDD4
 * Original: 0x004EFDD4 - 0x004EFDE2 (14 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EFDD4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004EFDD4: ;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004EFDDF; /* je: equal / zero */

loc_004EFDDA: ;
    g_seh_ebp = ebp; sub_004F0613(); return; /* tail jmp 0x004F0613 */

loc_004EFDDF: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_004EFDE2
 * Original: 0x004EFDE2 - 0x004EFE14 (50 bytes, 20 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EFDE2(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EFDE2: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = 0x4000;
    esi = ecx;
    ecx = MEM32(esi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_A(_fa, _fb)) edi = eax; /* cmova */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004EFE00; /* je: equal / zero */

loc_004EFDFA: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x004EFE00u); RECOMP_ABI_CALL(0x004F0575u, sub_004F0575); /* call 0x004F0575 */

loc_004EFE00: ;
    esi = MEM32(esi + 0x60);
    ecx = esi;
    PUSH32(esp, 0x004EFE0Au); RECOMP_ABI_CALL(0x004F042Du, sub_004F042D); /* call 0x004F042D */

loc_004EFE0A: ;
    MEM32(esi + 0x10) = edi;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004EFE14
 * Original: 0x004EFE14 - 0x004EFE1C (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EFE14(void)
{

loc_004EFE14: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004EFE1Bu); RECOMP_ABI_CALL(0x004EFDE2u, sub_004EFDE2); /* call 0x004EFDE2 */

loc_004EFE1B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004EFE1C
 * Original: 0x004EFE1C - 0x004EFE27 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EFE1C(void)
{

loc_004EFE1C: ;
    PUSH32(esp, 0x1000);
    PUSH32(esp, 0x004EFE26u); RECOMP_ABI_CALL(0x004EFDE2u, sub_004EFDE2); /* call 0x004EFDE2 */

loc_004EFE26: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004EFE27
 * Original: 0x004EFE27 - 0x004EFE37 (16 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EFE27(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004EFE27: ;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004EFE32; /* jne: not equal / not zero */

loc_004EFE2D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

loc_004EFE32: ;
    g_seh_ebp = ebp; sub_004F05CB(); return; /* tail jmp 0x004F05CB */

}

/**
 * sub_004EFE37
 * Original: 0x004EFE37 - 0x004EFF59 (290 bytes, 110 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004EFE37(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EFE37: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x30);
    MEM32(ebx) = MEM32(ebx) & 0;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edi);
    MEM32(ebp + -8) = eax;

loc_004EFE51: ;
    PUSH32(esp, MEM32(ebp + -8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EFE59u); RECOMP_ABI_CALL(0x0059BD49u, sub_0059BD49); /* call 0x0059BD49 */

loc_004EFE59: ;
    POP32(esp, ecx);
    edi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EFE61u); RECOMP_ABI_CALL(0x0059E351u, sub_0059E351); /* call 0x0059E351 */

loc_004EFE61: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004EFEBF; /* je: equal / zero */

loc_004EFE65: ;
    PUSH32(esp, 4);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EFE6Du); RECOMP_ABI_CALL(0x004EF9E2u, sub_004EF9E2); /* call 0x004EF9E2 */

loc_004EFE6D: ;
    PUSH32(esp, eax);
    MEM32(ebp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EFE76u); RECOMP_ABI_CALL(0x004F15E2u, sub_004F15E2); /* call 0x004F15E2 */

loc_004EFE76: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004EFE84; /* je: equal / zero */

loc_004EFE7D: ;
    MEM32(ebp + -4) = 2;

loc_004EFE84: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EFE8Cu); RECOMP_ABI_CALL(0x004F15C8u, sub_004F15C8); /* call 0x004F15C8 */

loc_004EFE8C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004EFE98; /* je: equal / zero */

loc_004EFE91: ;
    MEM32(ebp + -4) = 5;

loc_004EFE98: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EFEA0u); RECOMP_ABI_CALL(0x004F15BCu, sub_004F15BC); /* call 0x004F15BC */

loc_004EFEA0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004EFEAD; /* je: equal / zero */

loc_004EFEA5: ;
    PUSH32(esp, 4);
    POP32(esp, ecx);
    MEM32(ebp + -4) = ecx;
    goto loc_004EFEB0;

loc_004EFEAD: ;
    ecx = MEM32(ebp + -4);

loc_004EFEB0: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004EFED3; /* jne: not equal / not zero */

loc_004EFEB4: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + -8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EFEBDu); RECOMP_ABI_CALL(0x0059C20Fu, sub_0059C20F); /* call 0x0059C20F */

loc_004EFEBD: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_004EFEBF: ;
    PUSH32(esp, MEM32(ebp + -8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EFEC7u); RECOMP_ABI_CALL(0x0059BE2Fu, sub_0059BE2F); /* call 0x0059BE2F */

loc_004EFEC7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004EFE51; /* je: equal / zero */

loc_004EFECC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

loc_004EFED3: ;
    eax = esi + 0x94;
    MEM32(eax) = MEM32(eax) + 1;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004EFEE3; /* jl: less (signed <) */

loc_004EFEE0: ;
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_004EFEE3: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    eax = MEM32(eax);
    eax = eax + eax * 2;
    esi = esi + eax * 4 + 0x7C;
    MEM32(ebx) = esi;
    MEM32(esi) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_004EFF07; /* je: equal / zero */

loc_004EFEF5: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004EFF07; /* je: equal / zero */

loc_004EFEFA: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004EFF07; /* je: equal / zero */

loc_004EFEFF: ;
    eax = MEM32(edi + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_004EFF0A;

loc_004EFF07: ;
    eax = MEM32(edi + 4);

loc_004EFF0A: ;
    MEM32(esi + 4) = edi;
    edi = MEM32(ebp + 8);
    MEM32(esi + 8) = eax;
    _fa = (uint32_t)(MEM32(edi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x18), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004EFECC; /* jne: not equal / not zero */

loc_004EFF19: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004EFF25; /* jne: not equal / not zero */

loc_004EFF1E: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EFF23u); RECOMP_ABI_CALL(0x004F14AEu, sub_004F14AE); /* call 0x004F14AE */

loc_004EFF23: ;
    goto loc_004EFF2F;

loc_004EFF25: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004EFECC; /* jne: not equal / not zero */

loc_004EFF2A: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EFF2Fu); RECOMP_ABI_CALL(0x004F0C73u, sub_004F0C73); /* call 0x004F0C73 */

loc_004EFF2F: ;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EFF38u); RECOMP_ABI_CALL(0x004F0698u, sub_004F0698); /* call 0x004F0698 */

loc_004EFF38: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004EFECC; /* je: equal / zero */

loc_004EFF3D: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EFF44u); RECOMP_ABI_CALL(0x004F06B4u, sub_004F06B4); /* call 0x004F06B4 */

loc_004EFF44: ;
    /* int3: debug-trap slide byte, stepped over */
    PUSH32(esp, MEM32(esp + 0xC));
    eax = MEM32(esp + 0xC);
    PUSH32(esp, MEM32(esp + 8));
    ecx = MEM32(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EFF58u); RECOMP_ABI_CALL(0x004EFE37u, sub_004EFE37); /* call 0x004EFE37 */

loc_004EFF58: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004EFF59
 * Original: 0x004EFF59 - 0x004EFF6C (19 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EFF59(void)
{

loc_004EFF59: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(eax));
    PUSH32(esp, MEM32(ecx + 0x30));
    PUSH32(esp, 0x004EFF67u); RECOMP_ABI_CALL(0x0059C20Fu, sub_0059C20F); /* call 0x0059C20F */

loc_004EFF67: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004EFF6C
 * Original: 0x004EFF6C - 0x004EFF7C (16 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EFF6C(void)
{

loc_004EFF6C: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = MEM32(eax);
    PUSH32(esp, 0x004EFF7Bu); RECOMP_ABI_CALL(0x004EFF59u, sub_004EFF59); /* call 0x004EFF59 */

loc_004EFF7B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004EFF7C
 * Original: 0x004EFF7C - 0x004EFFBB (63 bytes, 27 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EFF7C(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EFF7C: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x4F075E);
    esi = ecx;
    PUSH32(esp, 2);
    PUSH32(esp, 0xC);
    eax = esi + 0x7C;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    MEM32(esi + 0x64) = edi;
    PUSH32(esp, 0x004EFF97u); RECOMP_ABI_CALL(0x000199EEu, sub_000199EE); /* call 0x000199EE */

loc_004EFF97: ;
    PUSH32(esp, MEM32(esp + 0x18));
    ecx = esi;
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x2C));
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x30));
    PUSH32(esp, 0x004EFFB4u); RECOMP_ABI_CALL(0x004EFAABu, sub_004EFAAB); /* call 0x004EFAAB */

loc_004EFFB4: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_004EFFBB
 * Original: 0x004EFFBB - 0x004EFFFE (67 bytes, 30 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004EFFBB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EFFBB: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x4F075E);
    esi = ecx;
    PUSH32(esp, 2);
    PUSH32(esp, 0xC);
    eax = esi + 0x7C;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    MEM32(esi + 0x64) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EFFD9u); RECOMP_ABI_CALL(0x000199EEu, sub_000199EE); /* call 0x000199EE */

loc_004EFFD9: ;
    PUSH32(esp, MEM32(ebp + 0x1C));
    ecx = esi;
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EFFF6u); RECOMP_ABI_CALL(0x004EFAABu, sub_004EFAAB); /* call 0x004EFAAB */

loc_004EFFF6: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_004EFFFE
 * Original: 0x004EFFFE - 0x004F0044 (70 bytes, 27 insns)
 * CC: cdecl, 8 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004EFFFE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EFFFE: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    PUSH32(esp, 0x4F075E);
    esi = ecx;
    MEM32(esi + 0x64) = MEM32(esi + 0x64) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x64)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 2);
    PUSH32(esp, 0xC);
    eax = esi + 0x7C;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F001Au); RECOMP_ABI_CALL(0x000199EEu, sub_000199EE); /* call 0x000199EE */

loc_004F001A: ;
    PUSH32(esp, MEM32(ebp + 0x24));
    ecx = esi;
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F003Du); RECOMP_ABI_CALL(0x004EFAABu, sub_004EFAAB); /* call 0x004EFAAB */

loc_004F003D: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 36; return; /* ret 32 */

}

/**
 * sub_004F0044
 * Original: 0x004F0044 - 0x004F008A (70 bytes, 27 insns)
 * CC: cdecl, 8 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004F0044(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004F0044: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    PUSH32(esp, 0x4F075E);
    esi = ecx;
    MEM32(esi + 0x64) = MEM32(esi + 0x64) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x64)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 2);
    PUSH32(esp, 0xC);
    eax = esi + 0x7C;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F0060u); RECOMP_ABI_CALL(0x000199EEu, sub_000199EE); /* call 0x000199EE */

loc_004F0060: ;
    PUSH32(esp, MEM32(ebp + 0x24));
    ecx = esi;
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F0083u); RECOMP_ABI_CALL(0x004EFAABu, sub_004EFAAB); /* call 0x004EFAAB */

loc_004F0083: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 36; return; /* ret 32 */

}

/**
 * sub_004F0045
 * Original: 0x004F0045 - 0x004F008A (69 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 8 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004F0045(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004F0045: ;
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    PUSH32(esp, 0x4F075E);
    esi = ecx;
    MEM32(esi + 0x64) = MEM32(esi + 0x64) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x64)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 2);
    PUSH32(esp, 0xC);
    eax = esi + 0x7C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004F0060u); RECOMP_ABI_CALL(0x000199EEu, sub_000199EE); /* call 0x000199EE */

loc_004F0060: ;
    PUSH32(esp, MEM32(ebp + 0x24));
    ecx = esi;
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0x004F0083u); RECOMP_ABI_CALL(0x004EFAABu, sub_004EFAAB); /* call 0x004EFAAB */

loc_004F0083: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 36; return; /* ret 32 */

}

/**
 * sub_004F004D
 * Original: 0x004F004D - 0x004F008A (61 bytes, 23 insns)
 * Category: game_vtable
 * CC: thiscall, 8 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004F004D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004F004D: ;
    esi = ecx;
    MEM32(esi + 0x64) = MEM32(esi + 0x64) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x64)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 2);
    PUSH32(esp, 0xC);
    eax = esi + 0x7C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004F0060u); RECOMP_ABI_CALL(0x000199EEu, sub_000199EE); /* call 0x000199EE */

loc_004F0060: ;
    PUSH32(esp, MEM32(ebp + 0x24));
    ecx = esi;
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0x004F0083u); RECOMP_ABI_CALL(0x004EFAABu, sub_004EFAAB); /* call 0x004EFAAB */

loc_004F0083: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 36; return; /* ret 32 */

}

/**
 * sub_004F004F
 * Original: 0x004F004F - 0x004F008A (59 bytes, 22 insns)
 * CC: cdecl, 8 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004F004F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004F004F: ;
    MEM32(esi + 0x64) = MEM32(esi + 0x64) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x64)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 2);
    PUSH32(esp, 0xC);
    eax = esi + 0x7C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004F0060u); RECOMP_ABI_CALL(0x000199EEu, sub_000199EE); /* call 0x000199EE */

loc_004F0060: ;
    PUSH32(esp, MEM32(ebp + 0x24));
    ecx = esi;
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0x004F0083u); RECOMP_ABI_CALL(0x004EFAABu, sub_004EFAAB); /* call 0x004EFAAB */

loc_004F0083: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 36; return; /* ret 32 */

}

/**
 * sub_004F0075
 * Original: 0x004F0075 - 0x004F008A (21 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 8 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004F0075(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004F0075: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0x004F0083u); RECOMP_ABI_CALL(0x004EFAABu, sub_004EFAAB); /* call 0x004EFAAB */

loc_004F0083: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 36; return; /* ret 32 */

}

/**
 * sub_004F008A
 * Original: 0x004F008A - 0x004F00CF (69 bytes, 27 insns)
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004F008A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004F008A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    PUSH32(esp, 0x4F075E);
    esi = ecx;
    MEM32(esi + 0x64) = MEM32(esi + 0x64) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x64)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 2);
    PUSH32(esp, 0xC);
    eax = esi + 0x7C;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F00A6u); RECOMP_ABI_CALL(0x000199EEu, sub_000199EE); /* call 0x000199EE */

loc_004F00A6: ;
    PUSH32(esp, MEM32(ebp + 0x20));
    ecx = esi;
    PUSH32(esp, 2);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F00C8u); RECOMP_ABI_CALL(0x004EFAABu, sub_004EFAAB); /* call 0x004EFAAB */

loc_004F00C8: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 32; return; /* ret 28 */

}

/**
 * sub_004F00CF
 * Original: 0x004F00CF - 0x004F0188 (185 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004F00CF(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004F00CF: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x68);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004F00E5; /* je: equal / zero */

loc_004F00DC: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004F00E2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004F00E0u); } /* indirect call */
    }

loc_004F00E2: ;
    MEM32(esi + 0x68) = ebx;

loc_004F00E5: ;
    PUSH32(esp, edi);
    edi = MEM32(esi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004F00FD; /* je: equal / zero */

loc_004F00EC: ;
    ecx = edi;
    PUSH32(esp, 0x004F00F3u); RECOMP_ABI_CALL(0x004F0553u, sub_004F0553); /* call 0x004F0553 */

loc_004F00F3: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x8D7E94); PUSH32(esp, 0x004F00FAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004F00F4u); } /* indirect call */
    }

loc_004F00FA: ;
    POP32(esp, ecx);
    MEM32(esi) = ebx;

loc_004F00FD: ;
    eax = MEM32(esi + 0x60);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_004F0110; /* je: equal / zero */

loc_004F0105: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x8D7E94); PUSH32(esp, 0x004F010Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004F0106u); } /* indirect call */
    }

loc_004F010C: ;
    POP32(esp, ecx);
    MEM32(esi + 0x60) = ebx;

loc_004F0110: ;
    PUSH32(esp, MEM32(esi + 0x30));
    PUSH32(esp, 0x004F0118u); RECOMP_ABI_CALL(0x0059C521u, sub_0059C521); /* call 0x0059C521 */

loc_004F0118: ;
    _fa = (uint32_t)(MEM8(esi + 0x14)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x14), LO8(ebx) (8-bit) */
    POP32(esp, ecx);
    MEM32(esi + 0x30) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_004F012D; /* je: equal / zero */

loc_004F0121: ;
    PUSH32(esp, MEM32(esi + 0x34));
    PUSH32(esp, 0x004F0129u); RECOMP_ABI_CALL(0x0059C521u, sub_0059C521); /* call 0x0059C521 */

loc_004F0129: ;
    POP32(esp, ecx);
    MEM32(esi + 0x34) = ebx;

loc_004F012D: ;
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004F013E; /* je: equal / zero */

loc_004F0134: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004F013Au); RECOMP_ABI_CALL(0x004EFA85u, sub_004EFA85); /* call 0x004EFA85 */

loc_004F013A: ;
    POP32(esp, ecx);
    MEM32(esi + 0x20) = ebx;

loc_004F013E: ;
    eax = MEM32(esi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004F014F; /* je: equal / zero */

loc_004F0145: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004F014Bu); RECOMP_ABI_CALL(0x004EFA85u, sub_004EFA85); /* call 0x004EFA85 */

loc_004F014B: ;
    POP32(esp, ecx);
    MEM32(esi + 0x28) = ebx;

loc_004F014F: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004F0161; /* je: equal / zero */

loc_004F0156: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x8D7E94); PUSH32(esp, 0x004F015Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004F0157u); } /* indirect call */
    }

loc_004F015D: ;
    POP32(esp, ecx);
    MEM32(esi + 4) = ebx;

loc_004F0161: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004F0173; /* je: equal / zero */

loc_004F0168: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x8D7E94); PUSH32(esp, 0x004F016Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004F0169u); } /* indirect call */
    }

loc_004F016F: ;
    POP32(esp, ecx);
    MEM32(esi + 8) = ebx;

loc_004F0173: ;
    PUSH32(esp, 0x4EF957);
    PUSH32(esp, 2);
    PUSH32(esp, 0xC);
    _fb = (uint32_t)(0x7C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x7C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x004F0185u); RECOMP_ABI_CALL(0x00029295u, sub_00029295); /* call 0x00029295 */

loc_004F0185: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_004F0188
 * Original: 0x004F0188 - 0x004F02F2 (362 bytes, 135 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004F0188(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004F0188: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x33);
    edi = 0x97;
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0x34));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F01A3u); RECOMP_ABI_CALL(0x0059BB35u, sub_0059BB35); /* call 0x0059BB35 */

loc_004F01A3: ;
    PUSH32(esp, 0x33);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0x30));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F01AEu); RECOMP_ABI_CALL(0x0059BB35u, sub_0059BB35); /* call 0x0059BB35 */

loc_004F01AE: ;
    eax = MEM32(esi + 0x24);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004F01DC; /* je: equal / zero */

loc_004F01BA: ;
    ecx = ebp + -4;
    PUSH32(esp, ecx);
    edi = esi + 0x20;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F01C8u); RECOMP_ABI_CALL(0x00599446u, sub_00599446); /* call 0x00599446 */

loc_004F01C8: ;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, MEM32(edi));
    PUSH32(esp, MEM32(esi + 0x30));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F01D6u); RECOMP_ABI_CALL(0x0059BC9Du, sub_0059BC9D); /* call 0x0059BC9D */

loc_004F01D6: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x38) = eax;

loc_004F01DC: ;
    eax = MEM32(esi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004F0205; /* je: equal / zero */

loc_004F01E3: ;
    ecx = ebp + -4;
    PUSH32(esp, ecx);
    edi = esi + 0x28;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F01F1u); RECOMP_ABI_CALL(0x00599446u, sub_00599446); /* call 0x00599446 */

loc_004F01F1: ;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, MEM32(edi));
    PUSH32(esp, MEM32(esi + 0x34));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F01FFu); RECOMP_ABI_CALL(0x0059BC9Du, sub_0059BC9D); /* call 0x0059BC9D */

loc_004F01FF: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x3C) = eax;

loc_004F0205: ;
    _fa = (uint32_t)(MEM8(esi + 0x14)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x14), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004F0210; /* jne: not equal / not zero */

loc_004F020A: ;
    eax = MEM32(esi + 0x38);
    MEM32(esi + 0x3C) = eax;

loc_004F0210: ;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1C), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004F0243; /* jne: not equal / not zero */

loc_004F0215: ;
    PUSH32(esp, 0x14);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F021Cu); RECOMP_ABI_CALL(0x004EF9B7u, sub_004EF9B7); /* call 0x004EF9B7 */

loc_004F021C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004F0230; /* je: equal / zero */

loc_004F0221: ;
    PUSH32(esp, MEM32(esi + 0x3C));
    ecx = eax;
    PUSH32(esp, MEM32(esi + 0x34));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F022Eu); RECOMP_ABI_CALL(0x004F04C6u, sub_004F04C6); /* call 0x004F04C6 */

loc_004F022E: ;
    goto loc_004F0232;

loc_004F0230: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004F0232: ;
    MEM32(esi) = eax;
    eax = MEM32(eax + 0xC);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    SET_LO8(ecx, (CMP_GE(_fas, _fbs)) ? 1 : 0); /* setge */
    MEM32(esi + 0x58) = ecx;
    goto loc_004F0246;

loc_004F0243: ;
    MEM32(esi + 0x58) = ebx;

loc_004F0246: ;
    MEM32(esi + 0x68) = ebx;
    _fa = (uint32_t)(MEM32(0x8D7E90)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8D7E90), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004F0292; /* je: equal / zero */

loc_004F0251: ;
    _fa = (uint32_t)(MEM32(0x8D7E94)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8D7E94), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004F0292; /* je: equal / zero */

loc_004F0259: ;
    PUSH32(esp, MEM32(ebp + 8));
    eax = esi + 0x64;
    PUSH32(esp, 0x4EFF6C);
    PUSH32(esp, 0x4EFF45);
    PUSH32(esp, eax);
    ecx = ebp + -20;
    MEM32(eax) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F0274u); RECOMP_ABI_CALL(0x004F077Fu, sub_004F077F); /* call 0x004F077F */

loc_004F0274: ;
    PUSH32(esp, 0x1C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F027Bu); RECOMP_ABI_CALL(0x004EF991u, sub_004EF991); /* call 0x004EF991 */

loc_004F027B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004F028D; /* je: equal / zero */

loc_004F0280: ;
    ecx = ebp + -20;
    PUSH32(esp, ecx);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F028Bu); RECOMP_ABI_CALL(0x004F079Fu, sub_004F079F); /* call 0x004F079F */

loc_004F028B: ;
    goto loc_004F028F;

loc_004F028D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004F028F: ;
    MEM32(esi + 0x68) = eax;

loc_004F0292: ;
    ecx = MEM32(esi + 0x68);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F029Bu); RECOMP_ABI_CALL(0x004F06F0u, sub_004F06F0); /* call 0x004F06F0 */

loc_004F029B: ;
    PUSH32(esp, 0x18);
    MEM32(esi + 0x78) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F02A5u); RECOMP_ABI_CALL(0x004F03ECu, sub_004F03EC); /* call 0x004F03EC */

loc_004F02A5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004F02B3; /* je: equal / zero */

loc_004F02AA: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F02B1u); RECOMP_ABI_CALL(0x004F040Fu, sub_004F040F); /* call 0x004F040F */

loc_004F02B1: ;
    goto loc_004F02B5;

loc_004F02B3: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004F02B5: ;
    ecx = eax;
    MEM32(esi + 0x60) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F02BFu); RECOMP_ABI_CALL(0x004F04A8u, sub_004F04A8); /* call 0x004F04A8 */

loc_004F02BF: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    MEM32(esi + 0x4C) = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(esi + 0x50) = ebx;
    MEM32(esi + 0x54) = ebx;
    MEM32(esi + 0x5C) = ebx;
    MEM32(esi + 0x40) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_004F02DC; /* je: equal / zero */

loc_004F02D7: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F02DCu); RECOMP_ABI_CALL(0x004F05A2u, sub_004F05A2); /* call 0x004F05A2 */

loc_004F02DC: ;
    PUSH32(esp, 0x1000);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F02E8u); RECOMP_ABI_CALL(0x004EFDE2u, sub_004EFDE2); /* call 0x004EFDE2 */

loc_004F02E8: ;
    eax = MEM32(esi + 0x78);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004F02F2
 * Original: 0x004F02F2 - 0x004F0392 (160 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004F02F2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004F02F2: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x60);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F0304u); RECOMP_ABI_CALL(0x004F04A8u, sub_004F04A8); /* call 0x004F04A8 */

loc_004F0304: ;
    ebx = eax;
    MEM32(ebp + -8) = ebx;
    _fb = (uint32_t)(MEM32(esi + 0x4C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - MEM32(esi + 0x4C);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM32(esi + 0x58)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x58), 0 (32-bit) */
    MEM32(ebp + -4) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_004F038C; /* je: equal / zero */

loc_004F0315: ;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F031Bu); RECOMP_ABI_CALL(0x005878F6u, sub_005878F6); /* call 0x005878F6 */

loc_004F031B: ;
    eax = ebp + -20;
    PUSH32(esp, eax);
    eax = MEM32(esi);
    PUSH32(esp, MEM32(eax + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F0329u); RECOMP_ABI_CALL(0x00588B2Eu, sub_00588B2E); /* call 0x00588B2E */

loc_004F0329: ;
    eax = ebp + -36;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -16));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F0335u); RECOMP_ABI_CALL(0x00588A30u, sub_00588A30); /* call 0x00588A30 */

loc_004F0335: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F033Du); RECOMP_ABI_CALL(0x00587904u, sub_00587904); /* call 0x00587904 */

loc_004F033D: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F0342u); RECOMP_ABI_CALL(0x00589EDFu, sub_00589EDF); /* call 0x00589EDF */

loc_004F0342: ;
    edi = MEM32(ebp + -32);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x54)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0x54) (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_004F038B; /* jle: less or equal (signed <=) */

loc_004F034C: ;
    ecx = MEM32(esi + 0x5C);
    eax = ecx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, 8);
    POP32(esp, ebx);
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    ebx = MEM32(ebp + -4);
    MEM32(esi + 0x54) = edi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ecx + edi;
    ecx = eax;
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_G(_fas, _fbs)) ecx = eax; /* cmovg */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x108) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x108 (32-bit) */
    MEM32(esi + 0x5C) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_004F038B; /* jle: less or equal (signed <=) */

loc_004F0378: ;
    PUSH32(esp, 0xFFFFFFF8u);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    POP32(esp, ecx);
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ebx = MEM32(ebp + -8);
    MEM32(esi + 0x5C) = MEM32(esi + 0x5C) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x5C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + 0x4C) = MEM32(esi + 0x4C) + eax;
    _fa = (uint32_t)(MEM32(esi + 0x4C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(esi + 0x4C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - MEM32(esi + 0x4C);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_004F038B: ;
    POP32(esp, edi);

loc_004F038C: ;
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004F0392
 * Original: 0x004F0392 - 0x004F03EC (90 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004F0392(void)
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

loc_004F0392: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x004F039Cu); RECOMP_ABI_CALL(0x004F02F2u, sub_004F02F2); /* call 0x004F02F2 */

loc_004F039C: ;
    ecx = MEM32(esi + 0x68);
    edi = eax;
    PUSH32(esp, 0x004F03A6u); RECOMP_ABI_CALL(0x004F06DBu, sub_004F06DB); /* call 0x004F06DB */

loc_004F03A6: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7AD340)); /* fmul dword ptr [0x7ad340] */
    eax = MEM32(esi + 0x40);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 8) = eax;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_004F03C3; /* jge: greater or equal (signed >=) */

loc_004F03BD: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7B8E10)); /* fadd dword ptr [0x7b8e10] */

loc_004F03C3: ;
    eax = MEM32(esi + 0x44);
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEMF(esi + 0x48) = (float)fp_top(); /* fst */
    fp_push((double)SMEM32(esi + 0x44)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_004F03D8; /* jge: greater or equal (signed >=) */

loc_004F03D2: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7B8E10)); /* fadd dword ptr [0x7b8e10] */

loc_004F03D8: ;
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    { extern void nhl07_trace_movie_clock(uint32_t,uint32_t); nhl07_trace_movie_clock(esi,g_fp_cmp==1); }
    fp_st1() = fp_top(); fp_pop(); /* fstp st(1) */
    POP32(esp, edi);
    fp_pop(); /* fstp st(0) */
    POP32(esp, esi);
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_004F03E8; /* jbe: below or equal (unsigned <=) */

loc_004F03E4: ;
    SET_LO8(eax, 1);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_004F03E8: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_004F03EC
 * Original: 0x004F03EC - 0x004F0409 (29 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004F03EC(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004F03EC: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(0x8D7E98));
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x7B891F);
    { uint32_t _icall_target = MEM32(0x8D7E90); PUSH32(esp, 0x004F0405u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x004F03FFu); } /* indirect call */
    }

loc_004F0405: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_004F040F
 * Original: 0x004F040F - 0x004F042C (29 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004F040F(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004F040F: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0x004F041Fu); RECOMP_ABI_CALL(0x0059E3B6u, sub_0059E3B6); /* call 0x0059E3B6 */

loc_004F041F: ;
    MEM32(esi) = eax;
    MEM32(esi + 0x10) = 0x1000;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004F042D
 * Original: 0x004F042D - 0x004F0460 (51 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004F042D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004F042D: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004F0435u); RECOMP_ABI_CALL(0x0059E3B6u, sub_0059E3B6); /* call 0x0059E3B6 */

loc_004F0435: ;
    edx = MEM32(esi + 0x10);
    ecx = eax;
    _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(esi)));
    eax = eax - MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x1000 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_004F044D; /* jne: not equal / not zero */

loc_004F0444: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(esi + 8)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(esi + 8) = MEM32(esi + 8) + eax;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(MEM32(esi + 0xC)) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(esi + 0xC) = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    goto loc_004F045C;

loc_004F044D: ;
    { uint64_t _r = (uint64_t)eax * (uint64_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    { uint32_t _c = (uint32_t)(0xC) & 31u; if (_c && _c < 32u) { eax = (eax >> _c) | (edx << (32 - _c)); _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shrd result */ } }  /* shrd */
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(0xC) & 31u;
      if (_sc) {
        _cf = (int)((_sv >> (_sc - 1u)) & 1u);
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(esi + 8)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(esi + 8) = MEM32(esi + 8) + eax;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(MEM32(esi + 0xC)) + (uint64_t)(edx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(esi + 0xC) = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */

loc_004F045C: ;
    MEM32(esi) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004F0460
 * Original: 0x004F0460 - 0x004F0473 (19 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004F0460(void)
{

loc_004F0460: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004F0468u); RECOMP_ABI_CALL(0x004F042Du, sub_004F042D); /* call 0x004F042D */

loc_004F0468: ;
    eax = MEM32(esp + 8);
    MEM32(esi + 0x10) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004F0473
 * Original: 0x004F0473 - 0x004F0490 (29 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004F0473(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004F0473: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004F047Bu); RECOMP_ABI_CALL(0x004F0553u, sub_004F0553); /* call 0x004F0553 */

loc_004F047B: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004F048A; /* je: equal / zero */

loc_004F0482: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x8D7E94); PUSH32(esp, 0x004F0489u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004F0483u); } /* indirect call */
    }

loc_004F0489: ;
    POP32(esp, ecx);

loc_004F048A: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004F04A8
 * Original: 0x004F04A8 - 0x004F04C6 (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004F04A8(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004F04A8: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004F04B0u); RECOMP_ABI_CALL(0x004F042Du, sub_004F042D); /* call 0x004F042D */

loc_004F04B0: ;
    PUSH32(esp, 0x004F04B5u); RECOMP_ABI_CALL(0x0059E42Fu, sub_0059E42F); /* call 0x0059E42F */

loc_004F04B5: ;
    ecx = eax;
    eax = MEM32(esi + 8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3E8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004F04C6
 * Original: 0x004F04C6 - 0x004F0553 (141 bytes, 50 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004F04C6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004F04C6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F04D4u); RECOMP_ABI_CALL(0x00589D40u, sub_00589D40); /* call 0x00589D40 */

loc_004F04D4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004F04DF; /* jne: not equal / not zero */

loc_004F04D8: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F04DDu); RECOMP_ABI_CALL(0x0059F28Cu, sub_0059F28C); /* call 0x0059F28C */

loc_004F04DD: ;
    goto loc_004F054C;

loc_004F04DF: ;
    MEM32(esi + 0x10) = MEM32(esi + 0x10) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0xC) = MEM32(esi + 0xC) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = ebp + -24;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F04F5u); RECOMP_ABI_CALL(0x005889D9u, sub_005889D9); /* call 0x005889D9 */

loc_004F04F5: ;
    PUSH32(esp, 0x1E);
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F04FEu); RECOMP_ABI_CALL(0x00587B0Bu, sub_00587B0B); /* call 0x00587B0B */

loc_004F04FE: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(0x8D7E98));
    edi = eax;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x86E74C);
    { uint32_t _icall_target = MEM32(0x8D7E90); PUSH32(esp, 0x004F0516u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004F0510u); } /* indirect call */
    }

loc_004F0516: ;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x1E);
    MEM32(esi + 4) = eax;
    PUSH32(esp, 1);
    eax = ebp + -24;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F052Bu); RECOMP_ABI_CALL(0x00589F09u, sub_00589F09); /* call 0x00589F09 */

loc_004F052B: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    MEM32(esi + 0xC) = eax;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F0539u); RECOMP_ABI_CALL(0x00589EF0u, sub_00589EF0); /* call 0x00589EF0 */

loc_004F0539: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x10) = eax;
    MEMF(esi) = xmm0.f[0]; /* movss */
    POP32(esp, edi);

loc_004F054C: ;
    eax = esi;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004F0553
 * Original: 0x004F0553 - 0x004F0575 (34 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004F0553(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004F0553: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004F0573; /* je: equal / zero */

loc_004F055C: ;
    PUSH32(esp, MEM32(esi + 0xC));
    PUSH32(esp, 0x004F0564u); RECOMP_ABI_CALL(0x005886F7u, sub_005886F7); /* call 0x005886F7 */

loc_004F0564: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi + 4));
    { uint32_t _icall_target = MEM32(0x8D7E94); PUSH32(esp, 0x004F056Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004F0567u); } /* indirect call */
    }

loc_004F056D: ;
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_004F0573: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004F0575
 * Original: 0x004F0575 - 0x004F05A2 (45 bytes, 17 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004F0575(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004F0575: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004F059C; /* je: equal / zero */

loc_004F057E: ;
    PUSH32(esp, 0x004F0583u); RECOMP_ABI_CALL(0x005878F6u, sub_005878F6); /* call 0x005878F6 */

loc_004F0583: ;
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, MEM32(esi + 0xC));
    PUSH32(esp, 0x004F058Fu); RECOMP_ABI_CALL(0x00588BC7u, sub_00588BC7); /* call 0x00588BC7 */

loc_004F058F: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    esi = eax;
    PUSH32(esp, 0x004F0598u); RECOMP_ABI_CALL(0x00587904u, sub_00587904); /* call 0x00587904 */

loc_004F0598: ;
    eax = esi;
    goto loc_004F059E;

loc_004F059C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004F059E: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004F05A2
 * Original: 0x004F05A2 - 0x004F05CB (41 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004F05A2(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004F05A2: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004F05C7; /* je: equal / zero */

loc_004F05AB: ;
    PUSH32(esp, 0x004F05B0u); RECOMP_ABI_CALL(0x005878F6u, sub_005878F6); /* call 0x005878F6 */

loc_004F05B0: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esi + 0x10));
    PUSH32(esp, 0x004F05BAu); RECOMP_ABI_CALL(0x00589F2Au, sub_00589F2A); /* call 0x00589F2A */

loc_004F05BA: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    esi = eax;
    PUSH32(esp, 0x004F05C3u); RECOMP_ABI_CALL(0x00587904u, sub_00587904); /* call 0x00587904 */

loc_004F05C3: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_004F05C7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004F05CB
 * Original: 0x004F05CB - 0x004F0613 (72 bytes, 24 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004F05CB(void)
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

loc_004F05CB: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004F060D; /* je: equal / zero */

loc_004F05D4: ;
    PUSH32(esp, 0x004F05D9u); RECOMP_ABI_CALL(0x005878F6u, sub_005878F6); /* call 0x005878F6 */

loc_004F05D9: ;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_004F05EB; /* jge: greater or equal (signed >=) */

loc_004F05E5: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7B8E10)); /* fadd dword ptr [0x7b8e10] */

loc_004F05EB: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7DADA4)); /* fmul dword ptr [0x7dada4] */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, MEM32(esi + 0xC));
    PUSH32(esp, 0x004F05FFu); RECOMP_ABI_CALL(0x00589F82u, sub_00589F82); /* call 0x00589F82 */

loc_004F05FF: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    PUSH32(esp, 0x004F0609u); RECOMP_ABI_CALL(0x00587904u, sub_00587904); /* call 0x00587904 */

loc_004F0609: ;
    eax = esi;
    goto loc_004F060F;

loc_004F060D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004F060F: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_004F0613
 * Original: 0x004F0613 - 0x004F065F (76 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004F0613(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004F0613: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F0621u); RECOMP_ABI_CALL(0x005878F6u, sub_005878F6); /* call 0x005878F6 */

loc_004F0621: ;
    esi = MEM32(esi + 0xC);
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F062Eu); RECOMP_ABI_CALL(0x00588B2Eu, sub_00588B2E); /* call 0x00588B2E */

loc_004F062E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    POP32(esp, esi);
    if (CMP_L(_fas, _fbs)) goto loc_004F0647; /* jl: less (signed <) */

loc_004F0635: ;
    eax = ebp + -28;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F0641u); RECOMP_ABI_CALL(0x00588A30u, sub_00588A30); /* call 0x00588A30 */

loc_004F0641: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_GE(_fas, _fbs)) goto loc_004F0650; /* jge: greater or equal (signed >=) */

loc_004F0647: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F064Cu); RECOMP_ABI_CALL(0x00587904u, sub_00587904); /* call 0x00587904 */

loc_004F064C: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_004F0650: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F0655u); RECOMP_ABI_CALL(0x00587904u, sub_00587904); /* call 0x00587904 */

loc_004F0655: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), eax (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004F0666
 * Original: 0x004F0666 - 0x004F0698 (50 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004F0666(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004F0666: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x86E75C;
    if (TEST_Z(_fa, _fb)) goto loc_004F067D; /* je: equal / zero */

loc_004F0676: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004F067Cu); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_004F067C: ;
    POP32(esp, ecx);

loc_004F067D: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004F0698
 * Original: 0x004F0698 - 0x004F06B4 (28 bytes, 12 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004F0698(void)
{

loc_004F0698: ;
    edx = MEM32(esp + 8);
    eax = ecx;
    ecx = MEM32(esp + 4);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 4) = edx;
    esi = MEM32(ecx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(esi + 4); PUSH32(esp, 0x004F06B0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004F06ADu); } /* indirect call */
    }

loc_004F06B0: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004F06B4
 * Original: 0x004F06B4 - 0x004F06CA (22 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004F06B4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004F06B4: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004F06C8; /* je: equal / zero */

loc_004F06BE: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004F06C4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004F06C2u); } /* indirect call */
    }

loc_004F06C4: ;
    MEM32(esi + 0x18) = MEM32(esi + 0x18) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_004F06C8: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004F06CA
 * Original: 0x004F06CA - 0x004F06DB (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004F06CA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004F06CA: ;
    _fa = (uint32_t)(MEM32(ecx + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x18), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004F06D3; /* jne: not equal / not zero */

loc_004F06D0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_004F06D3: ;
    ecx = MEM32(ecx + 0x18);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0xC)); return; /* indirect tail jmp */

}

/**
 * sub_004F06DB
 * Original: 0x004F06DB - 0x004F06F0 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004F06DB(void)
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

loc_004F06DB: ;
    _fa = (uint32_t)(MEM32(ecx + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x18), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004F06E8; /* jne: not equal / not zero */

loc_004F06E1: ;
    fp_push(MEMF(0x7AA840)); /* fld float */
    esp += 4; return; /* ret */

loc_004F06E8: ;
    ecx = MEM32(ecx + 0x18);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x10)); return; /* indirect tail jmp */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_004F06F0
 * Original: 0x004F06F0 - 0x004F0721 (49 bytes, 21 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004F06F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004F06F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004F0718; /* jne: not equal / not zero */

loc_004F06F9: ;
    eax = esi + 4;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004F070C; /* jne: not equal / not zero */

loc_004F0701: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 8));
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(esi + 0xC); PUSH32(esp, 0x004F0709u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x004F0706u); } /* indirect call */
    }

loc_004F0709: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004F070C: ;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004F0718; /* jne: not equal / not zero */

loc_004F0712: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_004F0718: ;
    ecx = MEM32(esi + 0x18);
    eax = MEM32(ecx);
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 8)); return; /* indirect tail jmp */

}

/**
 * sub_004F0721
 * Original: 0x004F0721 - 0x004F0729 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004F0721(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004F0721: ;
    ecx = MEM32(ecx + 0x18);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x14)); return; /* indirect tail jmp */

}

/**
 * sub_004F0729
 * Original: 0x004F0729 - 0x004F074D (36 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004F0729(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004F0729: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004F073A; /* je: equal / zero */

loc_004F0734: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) & 0;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_004F073A: ;
    eax = ebp + -4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ecx + 8));
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(ecx + 0xC); PUSH32(esp, 0x004F0745u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004F0742u); } /* indirect call */
    }

loc_004F0745: ;
    eax = MEM32(ebp + -4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004F074D
 * Original: 0x004F074D - 0x004F075E (17 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004F074D(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004F074D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 4));
    PUSH32(esp, MEM32(ecx + 8));
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(ecx + 0x10); PUSH32(esp, 0x004F0758u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x004F0755u); } /* indirect call */
    }

loc_004F0758: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004F075E
 * Original: 0x004F075E - 0x004F076B (13 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004F075E(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004F075E: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_004F077F
 * Original: 0x004F077F - 0x004F079F (32 bytes, 10 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004F077F(void)
{

loc_004F077F: ;
    eax = ecx;
    ecx = MEM32(esp + 0x10);
    MEM32(eax + 0xC) = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 8);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 8) = ecx;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_004F079F
 * Original: 0x004F079F - 0x004F07D0 (49 bytes, 20 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004F079F(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004F079F: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    eax = ecx;
    MEM32(eax) = 0x86E760;
    edi = eax + 8;
    MEM32(edi + 0xC) = 2;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi) = ecx;
    MEM32(edi + 4) = ecx;
    MEM32(edi + 8) = ecx;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    POP32(esp, edi);
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 4) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004F07DB
 * Original: 0x004F07DB - 0x004F0814 (57 bytes, 18 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004F07DB(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004F07DB: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x86E760;
    PUSH32(esp, 0x004F07E9u); RECOMP_ABI_CALL(0x004F06B4u, sub_004F06B4); /* call 0x004F06B4 */

loc_004F07E9: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004F07F8; /* je: equal / zero */

loc_004F07F0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x8D7E94); PUSH32(esp, 0x004F07F7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004F07F1u); } /* indirect call */
    }

loc_004F07F7: ;
    POP32(esp, ecx);

loc_004F07F8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004F0814
 * Original: 0x004F0814 - 0x004F0833 (31 bytes, 11 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004F0814(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004F0814: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004F0824; /* jne: not equal / not zero */

loc_004F081C: ;
    MEM32(ecx + 8) = MEM32(ecx + 8) & eax;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx + 0xC) = MEM32(ecx + 0xC) & eax;
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_004F0830;

loc_004F0824: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ecx + 8) = eax;
    eax = MEM32(esp + 8);
    MEM32(ecx + 0xC) = eax;

loc_004F0830: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004F0833
 * Original: 0x004F0833 - 0x004F0845 (18 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004F0833(void)
{

loc_004F0833: ;
    PUSH32(esp, esi);
    esi = ZX16(MEM16(esp + 8));
    PUSH32(esp, 0x004F083Eu); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_004F083E: ;
    MEM32(eax + 0x18) = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004F0845
 * Original: 0x004F0845 - 0x004F0857 (18 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004F0845(void)
{

loc_004F0845: ;
    PUSH32(esp, esi);
    esi = ZX16(MEM16(esp + 8));
    PUSH32(esp, 0x004F0850u); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_004F0850: ;
    MEM32(eax + 0x1C) = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004F0916
 * Original: 0x004F0916 - 0x004F0934 (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004F0916(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004F0916: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x86E7D0;
    if (TEST_Z(_fa, _fb)) goto loc_004F092E; /* je: equal / zero */

loc_004F0926: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x8D7E94); PUSH32(esp, 0x004F092Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004F0927u); } /* indirect call */
    }

loc_004F092D: ;
    POP32(esp, ecx);

loc_004F092E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004F0934
 * Original: 0x004F0934 - 0x004F0951 (29 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004F0934(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004F0934: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(0x8D7E98));
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x7B891F);
    { uint32_t _icall_target = MEM32(0x8D7E90); PUSH32(esp, 0x004F094Du); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x004F0947u); } /* indirect call */
    }

loc_004F094D: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_004F0957
 * Original: 0x004F0957 - 0x004F0974 (29 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004F0957(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004F0957: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(0x8D7E98));
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x7B891F);
    { uint32_t _icall_target = MEM32(0x8D7E90); PUSH32(esp, 0x004F0970u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x004F096Au); } /* indirect call */
    }

loc_004F0970: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_004F0974
 * Original: 0x004F0974 - 0x004F098B (23 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004F0974(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004F0974: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004F0985; /* je: equal / zero */

loc_004F0978: ;
    PUSH32(esp, 4);
    PUSH32(esp, MEM32(eax + 4));
    PUSH32(esp, 0x004F0982u); RECOMP_ABI_CALL(0x004EF9E2u, sub_004EF9E2); /* call 0x004EF9E2 */

loc_004F0982: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_004F0985: ;
    eax = 0x4D56304B;
    esp += 4; return; /* ret */

}

/**
 * sub_004F098B
 * Original: 0x004F098B - 0x004F099C (17 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004F098B(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004F098B: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x20) = MEM32(ecx + 0x20) & 0;
    _fa = (uint32_t)(MEM32(ecx + 0x20)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 2);
    MEM32(ecx + 0x34) = eax;
    POP32(esp, eax);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004F099C
 * Original: 0x004F099C - 0x004F09A0 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004F099C(void)
{

loc_004F099C: ;
    eax = MEM32(ecx + 0x20);
    esp += 4; return; /* ret */

}

/**
 * sub_004F09A0
 * Original: 0x004F09A0 - 0x004F09A4 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004F09A0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_004F09A0: ;
    fp_push(MEMF(ecx + 0x18)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_004F09A4
 * Original: 0x004F09A4 - 0x004F09BC (24 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004F09A4(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004F09A4: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x34);
    PUSH32(esp, 0x004F09AFu); RECOMP_ABI_CALL(0x004F0729u, sub_004F0729); /* call 0x004F0729 */

loc_004F09AF: ;
    ecx = MEM32(esp + 8);
    MEM32(ecx) = eax;
    MEM32(esi + 0x20) = MEM32(esi + 0x20) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004F09BC
 * Original: 0x004F09BC - 0x004F09CE (18 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004F09BC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004F09BC: ;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004F09CB; /* je: equal / zero */

loc_004F09C3: ;
    ecx = MEM32(ecx + 0x34);
    g_seh_ebp = ebp; sub_004F074D(); return; /* tail jmp 0x004F074D */

loc_004F09CB: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004F09CE
 * Original: 0x004F09CE - 0x004F0A32 (100 bytes, 32 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004F09CE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004F09CE: ;
    PUSH32(esp, ebp);
    ebp = esp + -112;
    _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 3);
    POP32(esp, eax);
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x10) = MEM32(esi + 0x10) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ebp + -80;
    MEM32(esi) = eax;
    PUSH32(esp, 0x004F09F3u); RECOMP_ABI_CALL(0x005A72F5u, sub_005A72F5); /* call 0x005A72F5 */

loc_004F09F3: ;
    eax = MEM32(ebp + 0x78);
    PUSH32(esp, MEM32(0x8D7E98));
    MEM32(ebp + -56) = eax;
    eax = MEM32(ebp + 0x7C);
    MEM32(ebp + -52) = eax;
    eax = ebp + -80;
    PUSH32(esp, eax);
    MEM32(ebp + -76) = 2;
    MEM32(ebp + -60) = 0x6C;
    MEM32(ebp) = 1;
    PUSH32(esp, 0x004F0A23u); RECOMP_ABI_CALL(0x005A7D96u, sub_005A7D96); /* call 0x005A7D96 */

loc_004F0A23: ;
    POP32(esp, ecx);
    MEM32(esi + 4) = eax;
    POP32(esp, ecx);
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x70;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004F0A32
 * Original: 0x004F0A32 - 0x004F0A52 (32 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004F0A32(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004F0A32: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004F0A47; /* je: equal / zero */

loc_004F0A3C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004F0A42u); RECOMP_ABI_CALL(0x005A1E5Eu, sub_005A1E5E); /* call 0x005A1E5E */

loc_004F0A42: ;
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, ecx);

loc_004F0A47: ;
    PUSH32(esp, 7);
    POP32(esp, eax);
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004F0A52
 * Original: 0x004F0A52 - 0x004F0A89 (55 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004F0A52(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004F0A52: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 0x10) = MEM32(eax + 0x10) - 1;
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x10), 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_004F0A86; /* jg: greater (signed >) */

loc_004F0A5F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(eax);
    PUSH32(esp, esi);
    esi = MEM32(eax + 4);
    MEM32(esi) = edx;
    MEM32(edx + 4) = esi;
    PUSH32(esp, 0xB);
    POP32(esp, edx);
    MEM32(eax) = edx;
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx + 0x30);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x2C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(eax + 4) = edx;
    MEM32(eax) = ecx;
    POP32(esp, esi);

loc_004F0A86: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004F0A89
 * Original: 0x004F0A89 - 0x004F0ADA (81 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_004F0A89(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004F0A89: ;
    eax = ecx + 0x2C;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_004F0ACC; /* je: equal / zero */

loc_004F0A90: ;
    eax = MEM32(eax);
    edx = MEM32(eax);
    PUSH32(esp, esi);
    esi = MEM32(eax + 4);
    MEM32(esi) = edx;
    MEM32(edx + 4) = esi;
    PUSH32(esp, 0xB);
    POP32(esp, edx);
    MEM32(eax) = edx;
    MEM32(eax + 4) = edx;
    _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFF8u)) >> 32) & 1);
    eax = eax + 0xFFFFFFF8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = eax;
    _cf = (int)((edx) != 0);
    edx = (uint32_t)(-(int32_t)edx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esi = eax + 8;
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    edx = edx & esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = MEM32(ecx + 0x28);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x24)) >> 32) & 1);
    ecx = ecx + 0x24;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = edx;
    MEM32(ecx + 4) = edx;
    MEM32(edx + 4) = esi;
    MEM32(edx) = ecx;
    MEM32(eax + 0x10) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_004F0ACC: ;
    PUSH32(esp, 0x86E768);
    PUSH32(esp, 0x004F0AD6u); RECOMP_ABI_CALL(0x0059F28Eu, sub_0059F28E); /* call 0x0059F28E */

loc_004F0AD6: ;
    POP32(esp, ecx);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_004F0ADA
 * Original: 0x004F0ADA - 0x004F0B33 (89 bytes, 27 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004F0ADA(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004F0ADA: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x86E7FC;
    eax = esi + 0x24;
    MEM32(eax) = eax;
    MEM32(eax + 4) = eax;
    eax = esi + 0x2C;
    MEM32(eax) = eax;
    MEM32(eax + 4) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x1C) = 1;
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x14) = eax;
    MEMF(esi + 0x18) = xmm0.f[0]; /* movss */
    MEM32(esi + 4) = eax;
    MEM32(0x90E82C) = MEM32(0x90E82C) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(0x90E82C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x8D7E9C);
    MEM32(0x90E828) = eax;
    PUSH32(esp, 0x004F0B29u); RECOMP_ABI_CALL(0x004F4C24u, sub_004F4C24); /* call 0x004F4C24 */

loc_004F0B29: ;
    POP32(esp, ecx);
    PUSH32(esp, 0x004F0B2Fu); RECOMP_ABI_CALL(0x004F4BD9u, sub_004F4BD9); /* call 0x004F4BD9 */

loc_004F0B2F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004F0B33
 * Original: 0x004F0B33 - 0x004F0BE0 (173 bytes, 72 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004F0B33(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004F0B33: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx + 0x24;
    MEM32(ecx) = 0x86E7FC;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    PUSH32(esp, 0xB);
    MEM32(ebp + -4) = ecx;
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_004F0B7E; /* je: equal / zero */

loc_004F0B50: ;
    eax = MEM32(edi);
    ebx = MEM32(eax + 4);
    edx = MEM32(eax);
    MEM32(ebx) = edx;
    MEM32(edx + 4) = ebx;
    ebx = eax + -8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(eax) = esi;
    MEM32(eax + 4) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_004F0B7A; /* je: equal / zero */

loc_004F0B68: ;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F0B6Fu); RECOMP_ABI_CALL(0x004F0A32u, sub_004F0A32); /* call 0x004F0A32 */

loc_004F0B6F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(0x8D7E94); PUSH32(esp, 0x004F0B76u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004F0B70u); } /* indirect call */
    }

loc_004F0B76: ;
    POP32(esp, ecx);
    ecx = MEM32(ebp + -4);

loc_004F0B7A: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004F0B50; /* jne: not equal / not zero */

loc_004F0B7E: ;
    ebx = ecx + 0x2C;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004F0BB6; /* je: equal / zero */

loc_004F0B85: ;
    eax = MEM32(ebx);
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    MEM32(edx) = ecx;
    MEM32(ecx + 4) = edx;
    MEM32(eax) = esi;
    MEM32(eax + 4) = esi;
    _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFF8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -8) = eax;
    if ((_fa == 0)) goto loc_004F0BAF; /* je: equal / zero */

loc_004F0B9E: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F0BA5u); RECOMP_ABI_CALL(0x004F0A32u, sub_004F0A32); /* call 0x004F0A32 */

loc_004F0BA5: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -8));
    { uint32_t _icall_target = MEM32(0x8D7E94); PUSH32(esp, 0x004F0BAEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004F0BA8u); } /* indirect call */
    }

loc_004F0BAE: ;
    POP32(esp, ecx);

loc_004F0BAF: ;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004F0B85; /* jne: not equal / not zero */

loc_004F0BB3: ;
    ecx = MEM32(ebp + -4);

loc_004F0BB6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F0BBFu); RECOMP_ABI_CALL(0x004F542Cu, sub_004F542C); /* call 0x004F542C */

loc_004F0BBF: ;
    POP32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F0BC5u); RECOMP_ABI_CALL(0x004F4C23u, sub_004F4C23); /* call 0x004F4C23 */

loc_004F0BC5: ;
    PUSH32(esp, 7);
    POP32(esp, eax);
    MEM32(ebx) = eax;
    MEM32(ebx + 4) = eax;
    MEM32(edi) = eax;
    MEM32(edi + 4) = eax;
    eax = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax) = 0x86E7D0;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004F0BE0
 * Original: 0x004F0BE0 - 0x004F0C73 (147 bytes, 55 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004F0BE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004F0BE0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F0BF0u); RECOMP_ABI_CALL(0x004F0A89u, sub_004F0A89); /* call 0x004F0A89 */

loc_004F0BF0: ;
    edi = MEM32(eax + 4);
    PUSH32(esp, MEM32(esi + 0xC));
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 4);
    PUSH32(esp, MEM32(esi + 8));
    eax = MEM32(eax + 8);
    _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFF8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(esi + 4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F0C15u); RECOMP_ABI_CALL(0x004F5417u, sub_004F5417); /* call 0x004F5417 */

loc_004F0C15: ;
    eax = ebp + -44;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F0C21u); RECOMP_ABI_CALL(0x004F4F79u, sub_004F4F79); /* call 0x004F4F79 */

loc_004F0C21: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(esi + 8);
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x60;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x60;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    eax = eax + eax * 2;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -8));
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F0C46u); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_004F0C46: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F0C4Du); RECOMP_ABI_CALL(0x004F0814u, sub_004F0814); /* call 0x004F0814 */

loc_004F0C4D: ;
    ebx = ZX16(MEM16(esi + 8));
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F0C58u); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_004F0C58: ;
    MEM32(eax + 0x18) = ebx;
    esi = ZX16(MEM16(esi + 0xC));
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F0C66u); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_004F0C66: ;
    POP32(esp, edi);
    MEM32(eax + 0x1C) = esi;
    eax = MEM32(ebp + -4);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004F0C73
 * Original: 0x004F0C73 - 0x004F0C89 (22 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_004F0C73(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004F0C73: ;
    PUSH32(esp, 0x38);
    PUSH32(esp, 0x004F0C7Au); RECOMP_ABI_CALL(0x004F0957u, sub_004F0957); /* call 0x004F0957 */

loc_004F0C7A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004F0C86; /* je: equal / zero */

loc_004F0C7F: ;
    ecx = eax;
    g_seh_ebp = ebp; sub_004F0ADA(); return; /* tail jmp 0x004F0ADA */

loc_004F0C86: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_004F0C89
 * Original: 0x004F0C89 - 0x004F0DFE (373 bytes, 133 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004F0C89(void)
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

loc_004F0C89: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = ebp + -4;
    PUSH32(esp, eax);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F0C9Au); RECOMP_ABI_CALL(0x004F09A4u, sub_004F09A4); /* call 0x004F09A4 */

loc_004F0C9A: ;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1C), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004F0D48; /* je: equal / zero */

loc_004F0CA4: ;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + -4);
    ecx = MEM32(ebx + 4);
    edx = ZX16(MEM16(ecx + 0xC));
    MEM32(esi + 8) = edx;
    eax = ZX16(MEM16(ecx + 0xE));
    MEM32(esi + 0xC) = eax;
    edi = MEM32(ecx + 0x18);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    ecx = ZX16(MEM16(ecx + 0x1C));
    MEM32(ebp + 8) = edi;
    fp_push((double)SMEM32(ebp + 8)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_004F0CD0; /* jge: greater or equal (signed >=) */

loc_004F0CCA: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7B8E10)); /* fadd dword ptr [0x7b8e10] */

loc_004F0CD0: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(ebp + 8) = ecx;
    fp_push((double)SMEM32(ebp + 8)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_004F0CE0; /* jge: greater or equal (signed >=) */

loc_004F0CDA: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7B8E10)); /* fadd dword ptr [0x7b8e10] */

loc_004F0CE0: ;
    fp_st1() = RECOMP_FP_PC(fp_st1() / fp_top()); fp_pop(); /* fdivp st(1) */
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    MEM32(esi + 0x10) = eax;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(esi + 0x14) = eax;
    eax = MEM32(esi + 0x34);
    MEMF(esi + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(eax + 0x14);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_004F0D0E; /* jle: less or equal (signed <=) */

loc_004F0CFC: ;
    edi = eax;

loc_004F0CFE: ;
    PUSH32(esp, MEM32(esi + 0xC));
    ecx = esi;
    PUSH32(esp, MEM32(esi + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F0D0Bu); RECOMP_ABI_CALL(0x004F0EADu, sub_004F0EAD); /* call 0x004F0EAD */

loc_004F0D0B: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_004F0CFE; /* jne: not equal / not zero */

loc_004F0D0E: ;
    PUSH32(esp, MEM32(esi + 0xC));
    MEM32(esi + 0x1C) = MEM32(esi + 0x1C) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, MEM32(esi + 8));
    edi = esi + 4;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F0D21u); RECOMP_ABI_CALL(0x004F4C88u, sub_004F4C88); /* call 0x004F4C88 */

loc_004F0D21: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(edi));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F0D2Cu); RECOMP_ABI_CALL(0x004F4D42u, sub_004F4D42); /* call 0x004F4D42 */

loc_004F0D2C: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F0D37u); RECOMP_ABI_CALL(0x004F09BCu, sub_004F09BC); /* call 0x004F09BC */

loc_004F0D37: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F0D42u); RECOMP_ABI_CALL(0x004F09A4u, sub_004F09A4); /* call 0x004F09A4 */

loc_004F0D42: ;
    POP32(esp, ebx);
    goto loc_004F0DD6;

loc_004F0D48: ;
    eax = MEM32(ebp + 8);
    _fb = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_004F0D87; /* jle: less or equal (signed <=) */

loc_004F0D53: ;
    MEM32(0x90E828) = MEM32(0x90E828) + 1;
    _fa = (uint32_t)(MEM32(0x90E828)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(esi + 0x20);
    MEM32(0x90E82C) = eax;

loc_004F0D61: ;
    PUSH32(esp, MEM32(ebp + -4));
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F0D6Bu); RECOMP_ABI_CALL(0x004F09BCu, sub_004F09BC); /* call 0x004F09BC */

loc_004F0D6B: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F0D76u); RECOMP_ABI_CALL(0x004F09A4u, sub_004F09A4); /* call 0x004F09A4 */

loc_004F0D76: ;
    eax = MEM32(ebp + -4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F0D7Eu); RECOMP_ABI_CALL(0x004F0974u, sub_004F0974); /* call 0x004F0974 */

loc_004F0D7E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4D56304B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x4D56304B (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004F0D61; /* jne: not equal / not zero */

loc_004F0D85: ;
    goto loc_004F0DD6;

loc_004F0D87: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_004F0DD6; /* jle: less or equal (signed <=) */

loc_004F0D8B: ;
    edi = MEM32(ebp + -4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004F0DF6; /* je: equal / zero */

loc_004F0D92: ;
    eax = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F0D99u); RECOMP_ABI_CALL(0x004F0974u, sub_004F0974); /* call 0x004F0974 */

loc_004F0D99: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F0D9Fu); RECOMP_ABI_CALL(0x004F15C8u, sub_004F15C8); /* call 0x004F15C8 */

loc_004F0D9F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004F0DD6; /* je: equal / zero */

loc_004F0DA4: ;
    PUSH32(esp, MEM32(esi + 0xC));
    eax = MEM32(edi + 4);
    PUSH32(esp, MEM32(esi + 8));
    ecx = eax + 8;
    eax = MEM32(edi + 8);
    _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFF8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(esi + 4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F0DC0u); RECOMP_ABI_CALL(0x004F5417u, sub_004F5417); /* call 0x004F5417 */

loc_004F0DC0: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F0DCBu); RECOMP_ABI_CALL(0x004F09BCu, sub_004F09BC); /* call 0x004F09BC */

loc_004F0DCB: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F0DD6u); RECOMP_ABI_CALL(0x004F09A4u, sub_004F09A4); /* call 0x004F09A4 */

loc_004F0DD6: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004F0DF6; /* je: equal / zero */

loc_004F0DDC: ;
    PUSH32(esp, MEM32(ebp + -4));
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F0DE6u); RECOMP_ABI_CALL(0x004F0BE0u, sub_004F0BE0); /* call 0x004F0BE0 */

loc_004F0DE6: ;
    PUSH32(esp, MEM32(ebp + -4));
    ecx = esi;
    edi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F0DF2u); RECOMP_ABI_CALL(0x004F09BCu, sub_004F09BC); /* call 0x004F09BC */

loc_004F0DF2: ;
    eax = edi;
    goto loc_004F0DF8;

loc_004F0DF6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004F0DF8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_004F0E90
 * Original: 0x004F0E90 - 0x004F0EAD (29 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004F0E90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004F0E90: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004F0E98u); RECOMP_ABI_CALL(0x004F0A32u, sub_004F0A32); /* call 0x004F0A32 */

loc_004F0E98: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004F0EA7; /* je: equal / zero */

loc_004F0E9F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x8D7E94); PUSH32(esp, 0x004F0EA6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004F0EA0u); } /* indirect call */
    }

loc_004F0EA6: ;
    POP32(esp, ecx);

loc_004F0EA7: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004F0EAD
 * Original: 0x004F0EAD - 0x004F0EEB (62 bytes, 25 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004F0EAD(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004F0EAD: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x14);
    esi = ecx;
    PUSH32(esp, 0x004F0EB7u); RECOMP_ABI_CALL(0x004F0934u, sub_004F0934); /* call 0x004F0934 */

loc_004F0EB7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004F0ECD; /* je: equal / zero */

loc_004F0EBC: ;
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = eax;
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x004F0ECBu); RECOMP_ABI_CALL(0x004F09CEu, sub_004F09CE); /* call 0x004F09CE */

loc_004F0ECB: ;
    goto loc_004F0ECF;

loc_004F0ECD: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004F0ECF: ;
    ecx = eax + 8;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = esi + 0x2C;
    edx = MEM32(ecx);
    MEM32(ecx) = eax;
    MEM32(edx + 4) = eax;
    MEM32(eax + 4) = ecx;
    MEM32(eax) = edx;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004F0EEB
 * Original: 0x004F0EEB - 0x004F0F08 (29 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004F0EEB(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004F0EEB: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004F0EF3u); RECOMP_ABI_CALL(0x004F0B33u, sub_004F0B33); /* call 0x004F0B33 */

loc_004F0EF3: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004F0F02; /* je: equal / zero */

loc_004F0EFA: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x8D7E94); PUSH32(esp, 0x004F0F01u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004F0EFBu); } /* indirect call */
    }

loc_004F0F01: ;
    POP32(esp, ecx);

loc_004F0F02: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004F0F13
 * Original: 0x004F0F13 - 0x004F0F30 (29 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004F0F13(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004F0F13: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(0x8D7E98));
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x7B891F);
    { uint32_t _icall_target = MEM32(0x8D7E90); PUSH32(esp, 0x004F0F2Cu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x004F0F26u); } /* indirect call */
    }

loc_004F0F2C: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_004F0F36
 * Original: 0x004F0F36 - 0x004F0F53 (29 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004F0F36(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004F0F36: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(0x8D7E98));
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x7B891F);
    { uint32_t _icall_target = MEM32(0x8D7E90); PUSH32(esp, 0x004F0F4Fu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x004F0F49u); } /* indirect call */
    }

loc_004F0F4F: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_004F0F53
 * Original: 0x004F0F53 - 0x004F0F6A (23 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004F0F53(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004F0F53: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004F0F64; /* je: equal / zero */

loc_004F0F57: ;
    PUSH32(esp, 4);
    PUSH32(esp, MEM32(eax + 4));
    PUSH32(esp, 0x004F0F61u); RECOMP_ABI_CALL(0x004EF9E2u, sub_004EF9E2); /* call 0x004EF9E2 */

loc_004F0F61: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_004F0F64: ;
    eax = 0x4D41446B;
    esp += 4; return; /* ret */

}

/**
 * sub_004F0F6A
 * Original: 0x004F0F6A - 0x004F0F7F (21 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004F0F6A(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004F0F6A: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x1C) = MEM32(ecx + 0x1C) & 0;
    _fa = (uint32_t)(MEM32(ecx + 0x1C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx + 0x18) = MEM32(ecx + 0x18) & 0;
    _fa = (uint32_t)(MEM32(ecx + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 2);
    MEM32(ecx + 0x30) = eax;
    POP32(esp, eax);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004F0F7F
 * Original: 0x004F0F7F - 0x004F0F83 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004F0F7F(void)
{

loc_004F0F7F: ;
    eax = MEM32(ecx + 0x1C);
    esp += 4; return; /* ret */

}

/**
 * sub_004F0F83
 * Original: 0x004F0F83 - 0x004F0F87 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004F0F83(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_004F0F83: ;
    fp_push(MEMF(ecx + 4)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_004F0F87
 * Original: 0x004F0F87 - 0x004F0F9F (24 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004F0F87(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004F0F87: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x30);
    PUSH32(esp, 0x004F0F92u); RECOMP_ABI_CALL(0x004F0729u, sub_004F0729); /* call 0x004F0729 */

loc_004F0F92: ;
    ecx = MEM32(esp + 8);
    MEM32(ecx) = eax;
    MEM32(esi + 0x1C) = MEM32(esi + 0x1C) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004F0F9F
 * Original: 0x004F0F9F - 0x004F0FB1 (18 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004F0F9F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004F0F9F: ;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004F0FAE; /* je: equal / zero */

loc_004F0FA6: ;
    ecx = MEM32(ecx + 0x30);
    g_seh_ebp = ebp; sub_004F074D(); return; /* tail jmp 0x004F074D */

loc_004F0FAE: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004F0FB1
 * Original: 0x004F0FB1 - 0x004F1012 (97 bytes, 31 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004F0FB1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004F0FB1: ;
    PUSH32(esp, ebp);
    ebp = esp + -112;
    _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 3);
    POP32(esp, eax);
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x10) = MEM32(esi + 0x10) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ebp + -80;
    MEM32(esi) = 1;
    PUSH32(esp, 0x004F0FDAu); RECOMP_ABI_CALL(0x005A72F5u, sub_005A72F5); /* call 0x005A72F5 */

loc_004F0FDA: ;
    eax = MEM32(ebp + 0x78);
    PUSH32(esp, MEM32(0x8D7E98));
    MEM32(ebp + -56) = eax;
    eax = MEM32(ebp + 0x7C);
    MEM32(ebp + -52) = eax;
    eax = ebp + -80;
    PUSH32(esp, eax);
    MEM32(ebp + -76) = 2;
    MEM32(ebp + -60) = 0x6C;
    PUSH32(esp, 0x004F1003u); RECOMP_ABI_CALL(0x005A7D96u, sub_005A7D96); /* call 0x005A7D96 */

loc_004F1003: ;
    POP32(esp, ecx);
    MEM32(esi + 4) = eax;
    POP32(esp, ecx);
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x70;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004F1012
 * Original: 0x004F1012 - 0x004F1032 (32 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004F1012(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004F1012: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004F1027; /* je: equal / zero */

loc_004F101C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004F1022u); RECOMP_ABI_CALL(0x005A1E5Eu, sub_005A1E5E); /* call 0x005A1E5E */

loc_004F1022: ;
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, ecx);

loc_004F1027: ;
    PUSH32(esp, 7);
    POP32(esp, eax);
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004F1032
 * Original: 0x004F1032 - 0x004F106D (59 bytes, 26 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004F1032(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004F1032: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    edx = esi + 8;
    eax = MEM32(edx);
    PUSH32(esp, edi);
    edi = MEM32(edx + 4);
    MEM32(edi) = eax;
    MEM32(eax + 4) = edi;
    PUSH32(esp, 0xB);
    POP32(esp, eax);
    MEM32(edx) = eax;
    MEM32(edx + 4) = eax;
    eax = esi;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = MEM32(ecx + 0x24);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x20)) >> 32) & 1);
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(eax + 4) = edx;
    MEM32(eax) = ecx;
    MEM32(esi + 0x10) = MEM32(esi + 0x10) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004F106D
 * Original: 0x004F106D - 0x004F10BE (81 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_004F106D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004F106D: ;
    eax = ecx + 0x28;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_004F10B0; /* je: equal / zero */

loc_004F1074: ;
    eax = MEM32(eax);
    edx = MEM32(eax);
    PUSH32(esp, esi);
    esi = MEM32(eax + 4);
    MEM32(esi) = edx;
    MEM32(edx + 4) = esi;
    PUSH32(esp, 0xB);
    POP32(esp, edx);
    MEM32(eax) = edx;
    MEM32(eax + 4) = edx;
    _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFF8u)) >> 32) & 1);
    eax = eax + 0xFFFFFFF8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = eax;
    _cf = (int)((edx) != 0);
    edx = (uint32_t)(-(int32_t)edx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esi = eax + 8;
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    edx = edx & esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = MEM32(ecx + 0x24);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x20)) >> 32) & 1);
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = edx;
    MEM32(ecx + 4) = edx;
    MEM32(edx + 4) = esi;
    MEM32(edx) = ecx;
    MEM32(eax + 0x10) = 2;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_004F10B0: ;
    PUSH32(esp, 0x86E818);
    PUSH32(esp, 0x004F10BAu); RECOMP_ABI_CALL(0x0059F28Eu, sub_0059F28E); /* call 0x0059F28E */

loc_004F10BA: ;
    POP32(esp, ecx);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_004F10BE
 * Original: 0x004F10BE - 0x004F110F (81 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_004F10BE(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004F10BE: ;
    eax = ecx + 0x28;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_004F1101; /* je: equal / zero */

loc_004F10C5: ;
    eax = MEM32(eax);
    edx = MEM32(eax);
    PUSH32(esp, esi);
    esi = MEM32(eax + 4);
    MEM32(esi) = edx;
    MEM32(edx + 4) = esi;
    PUSH32(esp, 0xB);
    POP32(esp, edx);
    MEM32(eax) = edx;
    MEM32(eax + 4) = edx;
    _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFF8u)) >> 32) & 1);
    eax = eax + 0xFFFFFFF8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = eax;
    _cf = (int)((edx) != 0);
    edx = (uint32_t)(-(int32_t)edx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esi = eax + 8;
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    edx = edx & esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = MEM32(ecx + 0x24);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x20)) >> 32) & 1);
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = edx;
    MEM32(ecx + 4) = edx;
    MEM32(edx + 4) = esi;
    MEM32(edx) = ecx;
    MEM32(eax + 0x10) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_004F1101: ;
    PUSH32(esp, 0x86E880);
    PUSH32(esp, 0x004F110Bu); RECOMP_ABI_CALL(0x0059F28Eu, sub_0059F28E); /* call 0x0059F28E */

loc_004F110B: ;
    POP32(esp, ecx);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_004F110F
 * Original: 0x004F110F - 0x004F1146 (55 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004F110F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004F110F: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 0x10) = MEM32(eax + 0x10) - 1;
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x10), 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_004F1143; /* jg: greater (signed >) */

loc_004F111C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(eax);
    PUSH32(esp, esi);
    esi = MEM32(eax + 4);
    MEM32(esi) = edx;
    MEM32(edx + 4) = esi;
    PUSH32(esp, 0xB);
    POP32(esp, edx);
    MEM32(eax) = edx;
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx + 0x2C);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x28;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(eax + 4) = edx;
    MEM32(eax) = ecx;
    POP32(esp, esi);

loc_004F1143: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004F1146
 * Original: 0x004F1146 - 0x004F1166 (32 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004F1146(void)
{

loc_004F1146: ;
    eax = ecx;
    MEM32(eax) = 0x86E8E0;
    ecx = eax + 0x20;
    MEM32(ecx) = ecx;
    MEM32(ecx + 4) = ecx;
    ecx = eax + 0x28;
    MEM32(ecx) = ecx;
    MEM32(ecx + 4) = ecx;
    MEM32(eax + 0xC) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_004F1166
 * Original: 0x004F1166 - 0x004F11FD (151 bytes, 64 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004F1166(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004F1166: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0xB);
    MEM32(ebp + -4) = ecx;
    MEM32(ecx) = 0x86E8E0;
    edi = ecx + 0x20;
    POP32(esp, esi);
    goto loc_004F11A9;

loc_004F117F: ;
    eax = MEM32(edi);
    ebx = MEM32(eax + 4);
    edx = MEM32(eax);
    MEM32(ebx) = edx;
    MEM32(edx + 4) = ebx;
    ebx = eax + -8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(eax) = esi;
    MEM32(eax + 4) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_004F11A9; /* je: equal / zero */

loc_004F1197: ;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F119Eu); RECOMP_ABI_CALL(0x004F1012u, sub_004F1012); /* call 0x004F1012 */

loc_004F119E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(0x8D7E94); PUSH32(esp, 0x004F11A5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004F119Fu); } /* indirect call */
    }

loc_004F11A5: ;
    POP32(esp, ecx);
    ecx = MEM32(ebp + -4);

loc_004F11A9: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004F117F; /* jne: not equal / not zero */

loc_004F11AD: ;
    ebx = ecx + 0x28;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004F11E5; /* je: equal / zero */

loc_004F11B4: ;
    eax = MEM32(ebx);
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    MEM32(edx) = ecx;
    MEM32(ecx + 4) = edx;
    MEM32(eax) = esi;
    MEM32(eax + 4) = esi;
    _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFF8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -8) = eax;
    if ((_fa == 0)) goto loc_004F11DE; /* je: equal / zero */

loc_004F11CD: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F11D4u); RECOMP_ABI_CALL(0x004F1012u, sub_004F1012); /* call 0x004F1012 */

loc_004F11D4: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -8));
    { uint32_t _icall_target = MEM32(0x8D7E94); PUSH32(esp, 0x004F11DDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004F11D7u); } /* indirect call */
    }

loc_004F11DD: ;
    POP32(esp, ecx);

loc_004F11DE: ;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004F11B4; /* jne: not equal / not zero */

loc_004F11E2: ;
    ecx = MEM32(ebp + -4);

loc_004F11E5: ;
    PUSH32(esp, 7);
    POP32(esp, eax);
    MEM32(ebx) = eax;
    MEM32(ebx + 4) = eax;
    MEM32(edi) = eax;
    MEM32(edi + 4) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ecx) = 0x86E7D0;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004F11FD
 * Original: 0x004F11FD - 0x004F13FE (513 bytes, 194 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004F11FD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004F11FD: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 4);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x18);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(ebp + -8) = edi;
    MEM32(ebp + -24) = edi;
    MEM32(ebp + -20) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_004F1257; /* je: equal / zero */

loc_004F1220: ;
    ecx = MEM32(eax + 4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F1228u); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_004F1228: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004F1234; /* jne: not equal / not zero */

loc_004F122F: ;
    MEM32(ebp + -8) = edi;
    goto loc_004F1239;

loc_004F1234: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -8) = ecx;

loc_004F1239: ;
    eax = MEM32(esi + 0x14);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esi + 0x10));
    ecx = MEM32(ebp + -8);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax + eax * 4;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, 4);
    MEM32(ebp + -24) = ecx;
    POP32(esp, ecx);
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -20) = eax;

loc_004F1257: ;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004F12AF; /* je: equal / zero */

loc_004F125C: ;
    eax = MEM32(ebx + 0xC);
    xmm1 = XMM_SCALAR(MEMF(0x7C3A80)); /* movss */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7DE364); /* mulss */
    MEM32(esi + 8) = eax;
    xmm1.f[0] = xmm1.f[0] / xmm0.f[0]; /* divss */
    MEMF(esi + 4) = xmm1.f[0]; /* movss */
    eax = ZX16(MEM16(ebx + 0x10));
    MEM32(esi + 0x10) = eax;
    eax = ZX16(MEM16(ebx + 0x12));
    MEM32(esi + 0x14) = eax;
    eax = MEM32(esi + 0x30);
    eax = MEM32(eax + 0x14);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_004F12AC; /* jle: less or equal (signed <=) */

loc_004F1298: ;
    edi = eax;

loc_004F129A: ;
    PUSH32(esp, MEM32(esi + 0x14));
    ecx = esi;
    PUSH32(esp, MEM32(esi + 0x10));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F12A7u); RECOMP_ABI_CALL(0x004F1561u, sub_004F1561); /* call 0x004F1561 */

loc_004F12A7: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_004F129A; /* jne: not equal / not zero */

loc_004F12AA: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004F12AC: ;
    MEM32(esi + 0xC) = edi;

loc_004F12AF: ;
    eax = MEM32(ebp + 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F12B7u); RECOMP_ABI_CALL(0x004F0F53u, sub_004F0F53); /* call 0x004F0F53 */

loc_004F12B7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4D41446B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x4D41446B (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004F12E2; /* jne: not equal / not zero */

loc_004F12BE: ;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004F12CD; /* je: equal / zero */

loc_004F12C5: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x004F12CDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004F12CAu); } /* indirect call */
    }

loc_004F12CD: ;
    ecx = esi;
    MEM32(esi + 0x18) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F12D7u); RECOMP_ABI_CALL(0x004F106Du, sub_004F106D); /* call 0x004F106D */

loc_004F12D7: ;
    MEM32(ebp + -4) = eax;
    eax = (uint32_t)(int32_t)SMEM8(ebx + 0x15);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    goto loc_004F1309;

loc_004F12E2: ;
    eax = MEM32(ebp + 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F12EAu); RECOMP_ABI_CALL(0x004F0F53u, sub_004F0F53); /* call 0x004F0F53 */

loc_004F12EA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4D41446D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x4D41446D (32-bit) */
    ecx = esi;
    if (CMP_NE(_fa, _fb)) goto loc_004F12FA; /* jne: not equal / not zero */

loc_004F12F3: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F12F8u); RECOMP_ABI_CALL(0x004F106Du, sub_004F106D); /* call 0x004F106D */

loc_004F12F8: ;
    goto loc_004F12FF;

loc_004F12FA: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F12FFu); RECOMP_ABI_CALL(0x004F10BEu, sub_004F10BE); /* call 0x004F10BE */

loc_004F12FF: ;
    MEM32(ebp + -4) = eax;
    eax = (uint32_t)(int32_t)SMEM8(ebx + 0x15);
    PUSH32(esp, eax);
    PUSH32(esp, 1);

loc_004F1309: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x18;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F1312u); RECOMP_ABI_CALL(0x004F1B39u, sub_004F1B39); /* call 0x004F1B39 */

loc_004F1312: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax + 4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F1320u); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_004F1320: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004F132C; /* jne: not equal / not zero */

loc_004F1327: ;
    MEM32(ebp + -12) = edi;
    goto loc_004F1331;

loc_004F132C: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -12) = ecx;

loc_004F1331: ;
    ecx = MEM32(esi + 0x14);
    eax = MEM32(esi + 0x10);
    edx = MEM32(ebp + -12);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax + eax * 4;
    MEM32(ebp + -32) = edx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, 4);
    POP32(esp, ebx);
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    MEM32(ebp + -16) = edi;
    _fb = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ebp + -12);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    MEM32(ebp + -28) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_004F13BF; /* jle: less or equal (signed <=) */

loc_004F1358: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_004F13B3; /* jle: less or equal (signed <=) */

loc_004F135F: ;
    eax = MEM32(esi + 0x10);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + -16));
    edi = eax + ebx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, 4);
    POP32(esp, ecx);
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    PUSH32(esp, MEM32(esi + 0x10));
    ecx = eax;
    eax = ebx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ebp + -28);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    eax = MEM32(ebp + -32);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    eax = MEM32(ebp + -12);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    eax = MEM32(ebp + -20);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    eax = MEM32(ebp + -24);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ebp + -8);
    PUSH32(esp, ecx);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F13A6u); RECOMP_ABI_CALL(0x004F1BD2u, sub_004F1BD2); /* call 0x004F1BD2 */

loc_004F13A6: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esi + 0x10) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004F135F; /* jl: less (signed <) */

loc_004F13B1: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004F13B3: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -16) = MEM32(ebp + -16) + 0x10;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ebp + -16);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x14) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004F1358; /* jl: less (signed <) */

loc_004F13BF: ;
    eax = MEM32(ebp + 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F13C7u); RECOMP_ABI_CALL(0x004F0F53u, sub_004F0F53); /* call 0x004F0F53 */

loc_004F13C7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4D41446D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x4D41446D (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004F13DF; /* jne: not equal / not zero */

loc_004F13CE: ;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004F13EE; /* je: equal / zero */

loc_004F13D5: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x004F13DDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004F13DAu); } /* indirect call */
    }

loc_004F13DD: ;
    goto loc_004F13EE;

loc_004F13DF: ;
    eax = MEM32(ebp + 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F13E7u); RECOMP_ABI_CALL(0x004F0F53u, sub_004F0F53); /* call 0x004F0F53 */

loc_004F13E7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4D41446B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x4D41446B (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004F13F4; /* jne: not equal / not zero */

loc_004F13EE: ;
    eax = MEM32(ebp + -4);
    MEM32(esi + 0x18) = eax;

loc_004F13F4: ;
    eax = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004F13FE
 * Original: 0x004F13FE - 0x004F14AE (176 bytes, 67 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004F13FE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004F13FE: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = ebp + -4;
    PUSH32(esp, eax);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F140Fu); RECOMP_ABI_CALL(0x004F0F87u, sub_004F0F87); /* call 0x004F0F87 */

loc_004F140F: ;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004F1473; /* jne: not equal / not zero */

loc_004F1415: ;
    eax = MEM32(ebp + 8);
    _fb = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_004F1446; /* jle: less or equal (signed <=) */

loc_004F1420: ;
    PUSH32(esp, MEM32(ebp + -4));
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F142Au); RECOMP_ABI_CALL(0x004F0F9Fu, sub_004F0F9F); /* call 0x004F0F9F */

loc_004F142A: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F1435u); RECOMP_ABI_CALL(0x004F0F87u, sub_004F0F87); /* call 0x004F0F87 */

loc_004F1435: ;
    eax = MEM32(ebp + -4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F143Du); RECOMP_ABI_CALL(0x004F0F53u, sub_004F0F53); /* call 0x004F0F53 */

loc_004F143D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4D41446B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x4D41446B (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004F1420; /* jne: not equal / not zero */

loc_004F1444: ;
    goto loc_004F1473;

loc_004F1446: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_004F1473; /* jle: less or equal (signed <=) */

loc_004F144A: ;
    edi = eax;

loc_004F144C: ;
    eax = MEM32(ebp + -4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F1454u); RECOMP_ABI_CALL(0x004F0F53u, sub_004F0F53); /* call 0x004F0F53 */

loc_004F1454: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4D414465) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x4D414465 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004F1470; /* jne: not equal / not zero */

loc_004F145B: ;
    PUSH32(esp, MEM32(ebp + -4));
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F1465u); RECOMP_ABI_CALL(0x004F0F9Fu, sub_004F0F9F); /* call 0x004F0F9F */

loc_004F1465: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F1470u); RECOMP_ABI_CALL(0x004F0F87u, sub_004F0F87); /* call 0x004F0F87 */

loc_004F1470: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_004F144C; /* jne: not equal / not zero */

loc_004F1473: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004F1493; /* je: equal / zero */

loc_004F1479: ;
    PUSH32(esp, MEM32(ebp + -4));
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F1483u); RECOMP_ABI_CALL(0x004F11FDu, sub_004F11FD); /* call 0x004F11FD */

loc_004F1483: ;
    PUSH32(esp, MEM32(ebp + -4));
    ecx = esi;
    edi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F148Fu); RECOMP_ABI_CALL(0x004F0F9Fu, sub_004F0F9F); /* call 0x004F0F9F */

loc_004F148F: ;
    eax = edi;
    goto loc_004F14A8;

loc_004F1493: ;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004F14A6; /* je: equal / zero */

loc_004F149A: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x004F14A2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004F149Fu); } /* indirect call */
    }

loc_004F14A2: ;
    MEM32(esi + 0x18) = MEM32(esi + 0x18) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_004F14A6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004F14A8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004F14AE
 * Original: 0x004F14AE - 0x004F14C4 (22 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_004F14AE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004F14AE: ;
    PUSH32(esp, 0x34);
    PUSH32(esp, 0x004F14B5u); RECOMP_ABI_CALL(0x004F0F36u, sub_004F0F36); /* call 0x004F0F36 */

loc_004F14B5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004F14C1; /* je: equal / zero */

loc_004F14BA: ;
    ecx = eax;
    g_seh_ebp = ebp; sub_004F1146(); return; /* tail jmp 0x004F1146 */

loc_004F14C1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_004F1544
 * Original: 0x004F1544 - 0x004F1561 (29 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004F1544(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004F1544: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004F154Cu); RECOMP_ABI_CALL(0x004F1012u, sub_004F1012); /* call 0x004F1012 */

loc_004F154C: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004F155B; /* je: equal / zero */

loc_004F1553: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x8D7E94); PUSH32(esp, 0x004F155Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004F1554u); } /* indirect call */
    }

loc_004F155A: ;
    POP32(esp, ecx);

loc_004F155B: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004F1561
 * Original: 0x004F1561 - 0x004F159F (62 bytes, 25 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004F1561(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004F1561: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x14);
    esi = ecx;
    PUSH32(esp, 0x004F156Bu); RECOMP_ABI_CALL(0x004F0F13u, sub_004F0F13); /* call 0x004F0F13 */

loc_004F156B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004F1581; /* je: equal / zero */

loc_004F1570: ;
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = eax;
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x004F157Fu); RECOMP_ABI_CALL(0x004F0FB1u, sub_004F0FB1); /* call 0x004F0FB1 */

loc_004F157F: ;
    goto loc_004F1583;

loc_004F1581: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004F1583: ;
    ecx = eax + 8;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = esi + 0x28;
    edx = MEM32(ecx);
    MEM32(ecx) = eax;
    MEM32(edx + 4) = eax;
    MEM32(eax + 4) = ecx;
    MEM32(eax) = edx;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004F159F
 * Original: 0x004F159F - 0x004F15BC (29 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004F159F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004F159F: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004F15A7u); RECOMP_ABI_CALL(0x004F1166u, sub_004F1166); /* call 0x004F1166 */

loc_004F15A7: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004F15B6; /* je: equal / zero */

loc_004F15AE: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x8D7E94); PUSH32(esp, 0x004F15B5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004F15AFu); } /* indirect call */
    }

loc_004F15B5: ;
    POP32(esp, ecx);

loc_004F15B6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004F15BC
 * Original: 0x004F15BC - 0x004F15C8 (12 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004F15BC(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004F15BC: ;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4D566864) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 4), 0x4D566864 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

}

/**
 * sub_004F15C8
 * Original: 0x004F15C8 - 0x004F15E2 (26 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004F15C8(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004F15C8: ;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4D563046) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 4), 0x4D563046 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004F15DF; /* je: equal / zero */

loc_004F15D2: ;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4D56304B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 4), 0x4D56304B (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004F15DF; /* je: equal / zero */

loc_004F15DC: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_004F15DF: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_004F15E2
 * Original: 0x004F15E2 - 0x004F15FE (28 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004F15E2(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004F15E2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004F15E4: ;
    ecx = MEM32(eax + 0x86E8F8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esp + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004F15FB; /* je: equal / zero */

loc_004F15F0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004F15E4; /* jb: below (unsigned <) */

loc_004F15F8: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_004F15FB: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_004F160F
 * Original: 0x004F160F - 0x004F17D5 (454 bytes, 162 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004F160F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004F160F: ;
    PUSH32(esp, ecx);
    ecx = 0xFFFFFF00u;

loc_004F1615: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFF80u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFF80u (32-bit) */
    eax = ecx;
    if (CMP_GE(_fas, _fbs)) goto loc_004F1620; /* jge: greater or equal (signed >=) */

loc_004F161C: ;
    PUSH32(esp, 0xFFFFFF80u);
    goto loc_004F1627;

loc_004F1620: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x7F (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_004F1628; /* jle: less or equal (signed <=) */

loc_004F1625: ;
    PUSH32(esp, 0x7F);

loc_004F1627: ;
    POP32(esp, eax);

loc_004F1628: ;
    edx = ecx;
    _fb = (uint32_t)(0x80) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 0x80);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    edx = edx & 0x1FF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFF (32-bit) */
    MEM8(edx + 0x910048) = LO8(eax);
    if (CMP_L(_fas, _fbs)) goto loc_004F1615; /* jl: less (signed <) */

loc_004F1641: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 7);
    POP32(esp, ecx);
    PUSH32(esp, 0x1F);
    POP32(esp, eax);
    PUSH32(esp, 8);
    MEM32(0x90F440) = 0xF;
    edi = 0x90F444;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, ecx);
    PUSH32(esp, 0x2F);
    POP32(esp, eax);
    edi = 0x90F460;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    PUSH32(esp, 0x3F);
    ecx = 0x80;
    POP32(esp, eax);
    edi = 0x90F840;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ebp = 0x86E91C;
    ebx = 0xFC00;

loc_004F1682: ;
    eax = MEM32(ebp + 8);
    edi = MEM32(ebp + -4);
    edx = MEM32(ebp);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004F16BF; /* je: equal / zero */

loc_004F1692: ;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((7) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 9);
    eax = edx;
    eax = eax & ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, ecx);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(0x10) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(LO8(ecx)) & 31u;
      if (_sc) {
        esi = _sv << _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax | edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_004F16F1; /* jle: less or equal (signed <=) */

loc_004F16B2: ;
    edi = MEM32(esp + 0x10);
    edi = edi * 4 + 0x90F440;
    goto loc_004F16ED;

loc_004F16BF: ;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0xE);
    eax = edx;
    eax = eax & ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, ecx);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(0x10) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(LO8(ecx)) & 31u;
      if (_sc) {
        esi = _sv << _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(0xFFFFFFFAu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xFFFFFFFAu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax | edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_004F16F1; /* jle: less or equal (signed <=) */

loc_004F16E2: ;
    edi = MEM32(esp + 0x10);
    edi = edi * 4 + 0x90FC48;

loc_004F16ED: ;
    ecx = esi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */

loc_004F16F1: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x10;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x86EEFC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x86EEFC (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004F1682; /* jl: less (signed <) */

loc_004F16FC: ;
    ebp = 0x86EEFC;

loc_004F1701: ;
    esi = MEM32(ebp + -4);
    eax = MEM32(ebp + 8);
    edx = MEM32(ebp);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp HI8(eax), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fas) - (uint8_t)(_fbs)) >> 7) != 0)) goto loc_004F1744; /* js: sign (negative) */

loc_004F1714: ;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((7) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x11);
    eax = edx;
    eax = eax & ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, ecx);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(0x10) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    { uint32_t _sv=(uint32_t)(edi), _sc=(uint32_t)(LO8(ecx)) & 31u;
      if (_sc) {
        edi = _sv << _sc;
        _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(0xFFFFFFF7u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xFFFFFFF7u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax | esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_004F1778; /* jle: less or equal (signed <=) */

loc_004F1737: ;
    edx = MEM32(esp + 0x10);
    edx = edx * 4 + 0x90EF38;
    goto loc_004F1772;

loc_004F1744: ;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0xA) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0xE);
    eax = edx;
    eax = eax & ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, ecx);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(0x10) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    { uint32_t _sv=(uint32_t)(edi), _sc=(uint32_t)(LO8(ecx)) & 31u;
      if (_sc) {
        edi = _sv << _sc;
        _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(0xFFFFFFFAu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xFFFFFFFAu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax | esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_004F1778; /* jle: less or equal (signed <=) */

loc_004F1767: ;
    edx = MEM32(esp + 0x10);
    edx = edx * 4 + 0x90FC48;

loc_004F1772: ;
    ecx = edi;
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */

loc_004F1778: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x10;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x86F6FC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x86F6FC (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004F1701; /* jl: less (signed <) */

loc_004F1787: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0x90F338;
    POP32(esp, ebx);

loc_004F1790: ;
    MEM32(eax) = 1;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x90F3B8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x90F3B8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004F1790; /* jl: less (signed <) */

loc_004F17A0: ;
    ecx = 0x90F3F8;
    eax = 0xFC000000u;

loc_004F17AA: ;
    edx = eax + 0x4400000;
    edx = edx | 6;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx + -64) = edx;
    edx = eax;
    edx = edx | 6;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx) = edx;
    _fb = (uint32_t)(0x400000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x400000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004F17AA; /* jl: less (signed <) */

loc_004F17C9: ;
    MEM32(0x90FC40) = 1;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004F17D5
 * Original: 0x004F17D5 - 0x004F1812 (61 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004F17D5(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004F17D5: ;
    { uint32_t _sv=(uint32_t)(MEM32(0x90F438)), _sc=(uint32_t)(LO8(ecx)) & 31u;
      if (_sc) {
        MEM32(0x90F438) = _sv << _sc;
        _fa = (uint32_t)(MEM32(0x90F438)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(0x90E830) = MEM32(0x90E830) - ecx;
    _fa = (uint32_t)(MEM32(0x90E830)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM32(0x90E830)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x90E830), 0x10 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_004F1811; /* jge: greater or equal (signed >=) */

loc_004F17EA: ;
    eax = MEM32(0x910248);
    eax = ZX16(MEM16(eax));
    PUSH32(esp, 0x10);
    POP32(esp, ecx);
    _fb = (uint32_t)(MEM32(0x90E830)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(0x90E830);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(0x90E830) = MEM32(0x90E830) + 0x10;
    _fa = (uint32_t)(MEM32(0x90E830)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(LO8(ecx)) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM32(0x90F438) = MEM32(0x90F438) | eax;
    _fa = (uint32_t)(MEM32(0x90F438)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(0x910248) = MEM32(0x910248) + 2;
    _fa = (uint32_t)(MEM32(0x910248)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004F1811: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004F1812
 * Original: 0x004F1812 - 0x004F1834 (34 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004F1812(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004F1812: ;
    eax = MEM32(0x90F438);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x1A) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = MEM32(eax * 4 + 0x90F338);
    ecx = edx;
    ecx = ecx & 0xFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0x004F182Eu); RECOMP_ABI_CALL(0x004F17D5u, sub_004F17D5); /* call 0x004F17D5 */

loc_004F182E: ;
    eax = edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0x16) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esp += 4; return; /* ret */

}

/**
 * sub_004F1834
 * Original: 0x004F1834 - 0x004F1889 (85 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004F1834(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004F1834: ;
    PUSH32(esp, 8);
    POP32(esp, edx);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, esi);

loc_004F183B: ;
    esi = MEM32(0x910350);
    MEM32(eax) = esi;
    esi = MEM32(0x910350);
    MEM32(eax + 4) = esi;
    esi = MEM32(0x910350);
    MEM32(eax + 8) = esi;
    esi = MEM32(0x910350);
    MEM32(eax + 0xC) = esi;
    esi = MEM32(0x910350);
    MEM32(eax + 0x10) = esi;
    esi = MEM32(0x910350);
    MEM32(eax + 0x14) = esi;
    esi = MEM32(0x910350);
    MEM32(eax + 0x18) = esi;
    esi = MEM32(0x910350);
    MEM32(eax + 0x1C) = esi;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_004F183B; /* jne: not equal / not zero */

loc_004F1887: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004F1889
 * Original: 0x004F1889 - 0x004F18F9 (112 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004F1889(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004F1889: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 8);
    POP32(esp, esi);

loc_004F188E: ;
    edi = ZX8(MEM8(eax));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _sv=(uint32_t)(edi), _sc=(uint32_t)(0x10) & 31u;
      if (_sc) {
        edi = _sv << _sc;
        _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM32(ecx) = edi;
    edi = ZX8(MEM8(eax + 1));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _sv=(uint32_t)(edi), _sc=(uint32_t)(0x10) & 31u;
      if (_sc) {
        edi = _sv << _sc;
        _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM32(ecx + 4) = edi;
    edi = ZX8(MEM8(eax + 2));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _sv=(uint32_t)(edi), _sc=(uint32_t)(0x10) & 31u;
      if (_sc) {
        edi = _sv << _sc;
        _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM32(ecx + 8) = edi;
    edi = ZX8(MEM8(eax + 3));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _sv=(uint32_t)(edi), _sc=(uint32_t)(0x10) & 31u;
      if (_sc) {
        edi = _sv << _sc;
        _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM32(ecx + 0xC) = edi;
    edi = ZX8(MEM8(eax + 4));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _sv=(uint32_t)(edi), _sc=(uint32_t)(0x10) & 31u;
      if (_sc) {
        edi = _sv << _sc;
        _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM32(ecx + 0x10) = edi;
    edi = ZX8(MEM8(eax + 5));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _sv=(uint32_t)(edi), _sc=(uint32_t)(0x10) & 31u;
      if (_sc) {
        edi = _sv << _sc;
        _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM32(ecx + 0x14) = edi;
    edi = ZX8(MEM8(eax + 6));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _sv=(uint32_t)(edi), _sc=(uint32_t)(0x10) & 31u;
      if (_sc) {
        edi = _sv << _sc;
        _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM32(ecx + 0x18) = edi;
    edi = ZX8(MEM8(eax + 7));
    _fb = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _sv=(uint32_t)(edi), _sc=(uint32_t)(0x10) & 31u;
      if (_sc) {
        edi = _sv << _sc;
        _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM32(ecx + 0x1C) = edi;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x40;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_004F188E; /* jne: not equal / not zero */

loc_004F18F6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004F18F9
 * Original: 0x004F18F9 - 0x004F1969 (112 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004F18F9(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004F18F9: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 8);
    POP32(esp, esi);

loc_004F18FE: ;
    edi = ZX8(MEM8(eax));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _sv=(uint32_t)(edi), _sc=(uint32_t)(0x10) & 31u;
      if (_sc) {
        edi = _sv << _sc;
        _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM32(ecx) = edi;
    edi = ZX8(MEM8(eax + 1));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _sv=(uint32_t)(edi), _sc=(uint32_t)(0x10) & 31u;
      if (_sc) {
        edi = _sv << _sc;
        _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM32(ecx + 4) = edi;
    edi = ZX8(MEM8(eax + 2));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _sv=(uint32_t)(edi), _sc=(uint32_t)(0x10) & 31u;
      if (_sc) {
        edi = _sv << _sc;
        _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM32(ecx + 8) = edi;
    edi = ZX8(MEM8(eax + 3));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _sv=(uint32_t)(edi), _sc=(uint32_t)(0x10) & 31u;
      if (_sc) {
        edi = _sv << _sc;
        _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM32(ecx + 0xC) = edi;
    edi = ZX8(MEM8(eax + 4));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _sv=(uint32_t)(edi), _sc=(uint32_t)(0x10) & 31u;
      if (_sc) {
        edi = _sv << _sc;
        _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM32(ecx + 0x10) = edi;
    edi = ZX8(MEM8(eax + 5));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _sv=(uint32_t)(edi), _sc=(uint32_t)(0x10) & 31u;
      if (_sc) {
        edi = _sv << _sc;
        _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM32(ecx + 0x14) = edi;
    edi = ZX8(MEM8(eax + 6));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _sv=(uint32_t)(edi), _sc=(uint32_t)(0x10) & 31u;
      if (_sc) {
        edi = _sv << _sc;
        _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM32(ecx + 0x18) = edi;
    edi = ZX8(MEM8(eax + 7));
    _fb = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _sv=(uint32_t)(edi), _sc=(uint32_t)(0x10) & 31u;
      if (_sc) {
        edi = _sv << _sc;
        _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM32(ecx + 0x1C) = edi;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_004F18FE; /* jne: not equal / not zero */

loc_004F1966: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004F1969
 * Original: 0x004F1969 - 0x004F1A95 (300 bytes, 93 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004F1969(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004F1969: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x10);
    esi = eax;
    POP32(esp, edi);
    eax = 0x1FF;

loc_004F1975: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(ecx + 2));
    edx = edx & eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO8(edx, MEM8(edx + 0x910048));
    MEM8(esi) = LO8(edx);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(ecx + 6));
    edx = edx & eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO8(edx, MEM8(edx + 0x910048));
    MEM8(esi + 1) = LO8(edx);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(ecx + 0xA));
    edx = edx & eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO8(edx, MEM8(edx + 0x910048));
    MEM8(esi + 2) = LO8(edx);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(ecx + 0xE));
    edx = edx & eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO8(edx, MEM8(edx + 0x910048));
    MEM8(esi + 3) = LO8(edx);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(ecx + 0x12));
    edx = edx & eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO8(edx, MEM8(edx + 0x910048));
    MEM8(esi + 4) = LO8(edx);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(ecx + 0x16));
    edx = edx & eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO8(edx, MEM8(edx + 0x910048));
    MEM8(esi + 5) = LO8(edx);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(ecx + 0x1A));
    edx = edx & eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO8(edx, MEM8(edx + 0x910048));
    MEM8(esi + 6) = LO8(edx);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(ecx + 0x1E));
    edx = edx & eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO8(edx, MEM8(edx + 0x910048));
    MEM8(esi + 7) = LO8(edx);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(ecx + 0x22));
    edx = edx & eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO8(edx, MEM8(edx + 0x910048));
    MEM8(esi + 8) = LO8(edx);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(ecx + 0x26));
    edx = edx & eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO8(edx, MEM8(edx + 0x910048));
    MEM8(esi + 9) = LO8(edx);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(ecx + 0x2A));
    edx = edx & eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO8(edx, MEM8(edx + 0x910048));
    MEM8(esi + 0xA) = LO8(edx);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(ecx + 0x2E));
    edx = edx & eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO8(edx, MEM8(edx + 0x910048));
    MEM8(esi + 0xB) = LO8(edx);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(ecx + 0x32));
    edx = edx & eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO8(edx, MEM8(edx + 0x910048));
    MEM8(esi + 0xC) = LO8(edx);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(ecx + 0x36));
    edx = edx & eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO8(edx, MEM8(edx + 0x910048));
    MEM8(esi + 0xD) = LO8(edx);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(ecx + 0x3A));
    edx = edx & eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO8(edx, MEM8(edx + 0x910048));
    MEM8(esi + 0xE) = LO8(edx);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(ecx + 0x3E));
    edx = edx & eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO8(edx, MEM8(edx + 0x910048));
    MEM8(esi + 0xF) = LO8(edx);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x40;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(esp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_004F1975; /* jne: not equal / not zero */

loc_004F1A92: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004F1A95
 * Original: 0x004F1A95 - 0x004F1B39 (164 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004F1A95(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004F1A95: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 8);
    esi = eax;
    POP32(esp, edi);
    eax = 0x1FF;

loc_004F1AA1: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(ecx + 2));
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = edx & eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO8(edx, MEM8(edx + 0x910048));
    MEM8(esi) = LO8(edx);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(ecx + -26));
    edx = edx & eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO8(edx, MEM8(edx + 0x910048));
    MEM8(esi + 1) = LO8(edx);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(ecx + -22));
    edx = edx & eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO8(edx, MEM8(edx + 0x910048));
    MEM8(esi + 2) = LO8(edx);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(ecx + -18));
    edx = edx & eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO8(edx, MEM8(edx + 0x910048));
    MEM8(esi + 3) = LO8(edx);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(ecx + -14));
    edx = edx & eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO8(edx, MEM8(edx + 0x910048));
    MEM8(esi + 4) = LO8(edx);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(ecx + -10));
    edx = edx & eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO8(edx, MEM8(edx + 0x910048));
    MEM8(esi + 5) = LO8(edx);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(ecx + -6));
    edx = edx & eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO8(edx, MEM8(edx + 0x910048));
    MEM8(esi + 6) = LO8(edx);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(ecx + -2));
    edx = edx & eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO8(edx, MEM8(edx + 0x910048));
    MEM8(esi + 7) = LO8(edx);
    _fb = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(esp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_004F1AA1; /* jne: not equal / not zero */

loc_004F1B36: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004F1B39
 * Original: 0x004F1B39 - 0x004F1BD2 (153 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004F1B39(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004F1B39: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fa = (uint32_t)(MEM32(0x90FC40)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x90FC40), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_004F1B4A; /* jne: not equal / not zero */

loc_004F1B45: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F1B4Au); RECOMP_ABI_CALL(0x004F160Fu, sub_004F160F); /* call 0x004F160F */

loc_004F1B4A: ;
    eax = MEM32(ebp + 8);
    ecx = ZX16(MEM16(eax));
    edx = ZX16(MEM16(eax + 2));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(4)) >> 32) & 1);
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(0x10) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM32(0x910248) = eax;
    eax = MEM32(ebp + 0xC);
    _cf = 0; /* logical op clears CF */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x90F438) = ecx;
    MEM32(0x90E830) = 0x20;
    MEM32(0x90FC44) = eax;
    MEM32(ebp + 8) = 0x80000;
    eax = MEM32(ebp + 8);
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)MEM32(0x8D7EB0);
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(0x10) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x10) & 31u;
      if (_sc) {
        _cf = (int)((_sv >> (_sc - 1u)) & 1u);
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(edx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    MEM32(0x90EC38) = eax;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004F1B98: ;
    eax = MEM32(ecx + 0x8D7EB4);
    MEM32(ebp + 8) = eax;
    eax = MEM32(ecx + 0x86F6FC);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x10));
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0xD) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM32(ebp + 0xC) = eax;
    eax = MEM32(ebp + 0xC);
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)MEM32(ebp + 8);
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(0x10) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x10) & 31u;
      if (_sc) {
        _cf = (int)((_sv >> (_sc - 1u)) & 1u);
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(edx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    MEM32(ecx + 0x90EC3C) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(4)) >> 32) & 1);
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFC (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_004F1B98; /* jl: less (signed <) */

loc_004F1BD0: ;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_004F1BD2
 * Original: 0x004F1BD2 - 0x004F1E29 (599 bytes, 197 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004F1BD2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004F1BD2: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x20);
    eax = esi;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(0x90FC44)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x90FC44), ecx (32-bit) */
    PUSH32(esp, edi);
    MEM32(ebp + -8) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_004F1BF5; /* jne: not equal / not zero */

loc_004F1BED: ;
    MEM32(ebp + -4) = ecx;

loc_004F1BF0: ;
    edi = MEM32(ebp + 8);
    goto loc_004F1C5C;

loc_004F1BF5: ;
    eax = MEM32(0x90F438);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC0000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xC0000000u (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_004F1C0E; /* jne: not equal / not zero */

loc_004F1C01: ;
    MEM32(ebp + -4) = ecx;
    PUSH32(esp, 2);
    POP32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F1C0Cu); RECOMP_ABI_CALL(0x004F17D5u, sub_004F17D5); /* call 0x004F17D5 */

loc_004F1C0C: ;
    goto loc_004F1BF0;

loc_004F1C0E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fa) - (uint32_t)(_fb)) >> 31) == 0)) goto loc_004F1C1E; /* jns: not sign (positive) */

loc_004F1C12: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + -4) = 0x3FF;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_004F1C2B;

loc_004F1C1E: ;
    eax = ZX8(MEM8(0x90F43B));
    PUSH32(esp, 8);
    MEM32(ebp + -4) = eax;
    POP32(esp, ecx);

loc_004F1C2B: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F1C30u); RECOMP_ABI_CALL(0x004F17D5u, sub_004F17D5); /* call 0x004F17D5 */

loc_004F1C30: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F1C35u); RECOMP_ABI_CALL(0x004F1812u, sub_004F1812); /* call 0x004F1812 */

loc_004F1C35: ;
    esi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F1C3Cu); RECOMP_ABI_CALL(0x004F1812u, sub_004F1812); /* call 0x004F1812 */

loc_004F1C3C: ;
    edi = MEM32(ebp + 8);
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebp + 0x20));
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + -8));
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((1) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + eax;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = MEM32(ebp + 0x20);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + eax;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004F1C5C: ;
    _fa = (uint32_t)(MEM8(ebp + -4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -4), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_004F1C88; /* jne: not equal / not zero */

loc_004F1C62: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F1C67u); RECOMP_ABI_CALL(0x004F2219u, sub_004F2219); /* call 0x004F2219 */

loc_004F1C67: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    PUSH32(esp, 0x10);
    if (CMP_NE(_fa, _fb)) goto loc_004F1C7B; /* jne: not equal / not zero */

loc_004F1C6E: ;
    POP32(esp, ecx);
    eax = 0x90E838;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F1C79u); RECOMP_ABI_CALL(0x004F1834u, sub_004F1834); /* call 0x004F1834 */

loc_004F1C79: ;
    goto loc_004F1C9F;

loc_004F1C7B: ;
    PUSH32(esp, 0x90E838);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F1C85u); RECOMP_ABI_CALL(0x004F20DEu, sub_004F20DE); /* call 0x004F20DE */

loc_004F1C85: ;
    POP32(esp, ecx);
    goto loc_004F1C9E;

loc_004F1C88: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F1C8Du); RECOMP_ABI_CALL(0x004F1812u, sub_004F1812); /* call 0x004F1812 */

loc_004F1C8D: ;
    edx = eax + eax + -128;
    PUSH32(esp, esi);
    ecx = 0x90E838;
    eax = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F1C9Eu); RECOMP_ABI_CALL(0x004F1889u, sub_004F1889); /* call 0x004F1889 */

loc_004F1C9E: ;
    POP32(esp, ecx);

loc_004F1C9F: ;
    _fa = (uint32_t)(MEM8(ebp + -4)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -4), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_004F1CCB; /* jne: not equal / not zero */

loc_004F1CA5: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F1CAAu); RECOMP_ABI_CALL(0x004F2219u, sub_004F2219); /* call 0x004F2219 */

loc_004F1CAA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    PUSH32(esp, 0x10);
    if (CMP_NE(_fa, _fb)) goto loc_004F1CBE; /* jne: not equal / not zero */

loc_004F1CB1: ;
    POP32(esp, ecx);
    eax = 0x90E858;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F1CBCu); RECOMP_ABI_CALL(0x004F1834u, sub_004F1834); /* call 0x004F1834 */

loc_004F1CBC: ;
    goto loc_004F1CE3;

loc_004F1CBE: ;
    PUSH32(esp, 0x90E858);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F1CC8u); RECOMP_ABI_CALL(0x004F20DEu, sub_004F20DE); /* call 0x004F20DE */

loc_004F1CC8: ;
    POP32(esp, ecx);
    goto loc_004F1CE2;

loc_004F1CCB: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F1CD0u); RECOMP_ABI_CALL(0x004F1812u, sub_004F1812); /* call 0x004F1812 */

loc_004F1CD0: ;
    edx = eax + eax + -128;
    PUSH32(esp, esi);
    eax = edi + 8;
    ecx = 0x90E858;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F1CE2u); RECOMP_ABI_CALL(0x004F1889u, sub_004F1889); /* call 0x004F1889 */

loc_004F1CE2: ;
    POP32(esp, ecx);

loc_004F1CE3: ;
    _fa = (uint32_t)(MEM8(ebp + -4)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -4), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_004F1D0F; /* jne: not equal / not zero */

loc_004F1CE9: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F1CEEu); RECOMP_ABI_CALL(0x004F2219u, sub_004F2219); /* call 0x004F2219 */

loc_004F1CEE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    PUSH32(esp, 0x10);
    if (CMP_NE(_fa, _fb)) goto loc_004F1D02; /* jne: not equal / not zero */

loc_004F1CF5: ;
    POP32(esp, ecx);
    eax = 0x90EA38;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F1D00u); RECOMP_ABI_CALL(0x004F1834u, sub_004F1834); /* call 0x004F1834 */

loc_004F1D00: ;
    goto loc_004F1D27;

loc_004F1D02: ;
    PUSH32(esp, 0x90EA38);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F1D0Cu); RECOMP_ABI_CALL(0x004F20DEu, sub_004F20DE); /* call 0x004F20DE */

loc_004F1D0C: ;
    POP32(esp, ecx);
    goto loc_004F1D26;

loc_004F1D0F: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F1D14u); RECOMP_ABI_CALL(0x004F1812u, sub_004F1812); /* call 0x004F1812 */

loc_004F1D14: ;
    edx = eax + eax + -128;
    PUSH32(esp, esi);
    eax = edi + esi * 8;
    ecx = 0x90EA38;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F1D26u); RECOMP_ABI_CALL(0x004F1889u, sub_004F1889); /* call 0x004F1889 */

loc_004F1D26: ;
    POP32(esp, ecx);

loc_004F1D27: ;
    _fa = (uint32_t)(MEM8(ebp + -4)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -4), 8 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_004F1D53; /* jne: not equal / not zero */

loc_004F1D2D: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F1D32u); RECOMP_ABI_CALL(0x004F2219u, sub_004F2219); /* call 0x004F2219 */

loc_004F1D32: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    PUSH32(esp, 0x10);
    if (CMP_NE(_fa, _fb)) goto loc_004F1D46; /* jne: not equal / not zero */

loc_004F1D39: ;
    POP32(esp, ecx);
    eax = 0x90EA58;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F1D44u); RECOMP_ABI_CALL(0x004F1834u, sub_004F1834); /* call 0x004F1834 */

loc_004F1D44: ;
    goto loc_004F1D6C;

loc_004F1D46: ;
    PUSH32(esp, 0x90EA58);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F1D50u); RECOMP_ABI_CALL(0x004F20DEu, sub_004F20DE); /* call 0x004F20DE */

loc_004F1D50: ;
    POP32(esp, ecx);
    goto loc_004F1D6B;

loc_004F1D53: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F1D58u); RECOMP_ABI_CALL(0x004F1812u, sub_004F1812); /* call 0x004F1812 */

loc_004F1D58: ;
    edx = eax + eax + -128;
    PUSH32(esp, esi);
    eax = edi + esi * 8 + 8;
    ecx = 0x90EA58;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F1D6Bu); RECOMP_ABI_CALL(0x004F1889u, sub_004F1889); /* call 0x004F1889 */

loc_004F1D6B: ;
    POP32(esp, ecx);

loc_004F1D6C: ;
    _fa = (uint32_t)(MEM8(ebp + -4)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -4), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_004F1D96; /* jne: not equal / not zero */

loc_004F1D72: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F1D77u); RECOMP_ABI_CALL(0x004F2219u, sub_004F2219); /* call 0x004F2219 */

loc_004F1D77: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    edi = 0x90ED38;
    PUSH32(esp, 8);
    if (CMP_NE(_fa, _fb)) goto loc_004F1D8D; /* jne: not equal / not zero */

loc_004F1D83: ;
    POP32(esp, ecx);
    eax = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F1D8Bu); RECOMP_ABI_CALL(0x004F1834u, sub_004F1834); /* call 0x004F1834 */

loc_004F1D8B: ;
    goto loc_004F1DB2;

loc_004F1D8D: ;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F1D93u); RECOMP_ABI_CALL(0x004F20DEu, sub_004F20DE); /* call 0x004F20DE */

loc_004F1D93: ;
    POP32(esp, ecx);
    goto loc_004F1DB1;

loc_004F1D96: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F1D9Bu); RECOMP_ABI_CALL(0x004F1812u, sub_004F1812); /* call 0x004F1812 */

loc_004F1D9B: ;
    PUSH32(esp, MEM32(ebp + -8));
    edx = eax + eax + -128;
    eax = MEM32(ebp + 0xC);
    edi = 0x90ED38;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F1DB1u); RECOMP_ABI_CALL(0x004F18F9u, sub_004F18F9); /* call 0x004F18F9 */

loc_004F1DB1: ;
    POP32(esp, ecx);

loc_004F1DB2: ;
    _fa = (uint32_t)(MEM8(ebp + -4)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -4), 0x20 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_004F1DDC; /* jne: not equal / not zero */

loc_004F1DB8: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F1DBDu); RECOMP_ABI_CALL(0x004F2219u, sub_004F2219); /* call 0x004F2219 */

loc_004F1DBD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    esi = 0x90EE38;
    PUSH32(esp, 8);
    if (CMP_NE(_fa, _fb)) goto loc_004F1DD3; /* jne: not equal / not zero */

loc_004F1DC9: ;
    POP32(esp, ecx);
    eax = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F1DD1u); RECOMP_ABI_CALL(0x004F1834u, sub_004F1834); /* call 0x004F1834 */

loc_004F1DD1: ;
    goto loc_004F1DF8;

loc_004F1DD3: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F1DD9u); RECOMP_ABI_CALL(0x004F20DEu, sub_004F20DE); /* call 0x004F20DE */

loc_004F1DD9: ;
    POP32(esp, ecx);
    goto loc_004F1DF7;

loc_004F1DDC: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F1DE1u); RECOMP_ABI_CALL(0x004F1812u, sub_004F1812); /* call 0x004F1812 */

loc_004F1DE1: ;
    PUSH32(esp, MEM32(ebp + -8));
    edx = eax + eax + -128;
    eax = MEM32(ebp + 0x10);
    esi = 0x90EE38;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F1DF7u); RECOMP_ABI_CALL(0x004F18F9u, sub_004F18F9); /* call 0x004F18F9 */

loc_004F1DF7: ;
    POP32(esp, ecx);

loc_004F1DF8: ;
    PUSH32(esp, MEM32(ebp + 0x20));
    eax = MEM32(ebp + 0x14);
    ecx = 0x90E838;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F1E08u); RECOMP_ABI_CALL(0x004F1969u, sub_004F1969); /* call 0x004F1969 */

loc_004F1E08: ;
    PUSH32(esp, MEM32(ebp + -8));
    eax = MEM32(ebp + 0x18);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F1E15u); RECOMP_ABI_CALL(0x004F1A95u, sub_004F1A95); /* call 0x004F1A95 */

loc_004F1E15: ;
    PUSH32(esp, MEM32(ebp + -8));
    eax = MEM32(ebp + 0x1C);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F1E22u); RECOMP_ABI_CALL(0x004F1A95u, sub_004F1A95); /* call 0x004F1A95 */

loc_004F1E22: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004F1E3A
 * Original: 0x004F1E3A - 0x004F1FB8 (382 bytes, 132 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004F1E3A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004F1E3A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x18));
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ecx + 0x14);
    _cf = 0; /* logical op clears CF */
    eax = eax | MEM32(ecx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _cf = 0; /* logical op clears CF */
    eax = eax | MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _cf = 0; /* logical op clears CF */
    eax = eax | MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _cf = 0; /* logical op clears CF */
    eax = eax | MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _cf = 0; /* logical op clears CF */
    eax = eax | MEM32(ecx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _cf = 0; /* logical op clears CF */
    eax = eax | MEM32(ecx + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa != 0)) goto loc_004F1E8C; /* jne: not equal / not zero */

loc_004F1E57: ;
    eax = MEM32(ecx);
    MEM32(esi) = eax;
    eax = MEM32(ecx);
    MEM32(esi + 0x20) = eax;
    eax = MEM32(ecx);
    MEM32(esi + 0x40) = eax;
    eax = MEM32(ecx);
    MEM32(esi + 0x60) = eax;
    eax = MEM32(ecx);
    MEM32(esi + 0x80) = eax;
    eax = MEM32(ecx);
    MEM32(esi + 0xA0) = eax;
    eax = MEM32(ecx);
    MEM32(esi + 0xC0) = eax;
    eax = MEM32(ecx);
    MEM32(esi + 0xE0) = eax;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_004F1E8C: ;
    eax = MEM32(ecx + 0xC);
    PUSH32(esp, ebx);
    ebx = MEM32(ecx + 0x1C);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x14);
    edx = edi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(eax));
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ecx + 4);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(eax)) >> 32) & 1);
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(ecx + 0x1C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(ecx + 0x1C)));
    eax = eax - MEM32(ecx + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -16) = ebx;
    ebx = MEM32(ecx + 0xC);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(ebx)) >> 32) & 1);
    edi = edi + ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = MEM32(ebp + -16);
    MEM32(ebp + -4) = eax;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ebx) < (uint32_t)(edi));
    ebx = ebx - edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(MEM32(ebp + -16))) >> 32) & 1);
    edi = edi + MEM32(ebp + -16);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(edx)) >> 32) & 1);
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -12) = edx;
    MEM32(ebp + -8) = ebx;
    MEM32(ebp + -16) = 0x61F8;
    MEM32(ebp + -20) = eax;
    eax = MEM32(ebp + -20);
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)MEM32(ebp + -16);
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(0x10) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x10) & 31u;
      if (_sc) {
        _cf = (int)((_sv >> (_sc - 1u)) & 1u);
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(edx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    ebx = eax;
    MEM32(ebp + -20) = 0x8A8C;
    eax = MEM32(ebp + -12);
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)MEM32(ebp + -20);
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(0x10) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x10) & 31u;
      if (_sc) {
        _cf = (int)((_sv >> (_sc - 1u)) & 1u);
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(edx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ebx)) >> 32) & 1);
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -12) = eax;
    MEM32(ebp + -20) = 0xB505;
    eax = MEM32(ebp + -8);
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)MEM32(ebp + -20);
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(0x10) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x10) & 31u;
      if (_sc) {
        _cf = (int)((_sv >> (_sc - 1u)) & 1u);
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(edx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    MEM32(ebp + -8) = eax;
    MEM32(ebp + -20) = 0x14E7B;
    eax = MEM32(ebp + -4);
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)MEM32(ebp + -20);
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(0x10) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x10) & 31u;
      if (_sc) {
        _cf = (int)((_sv >> (_sc - 1u)) & 1u);
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(edx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ebx));
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx = MEM32(ecx);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(eax)) >> 32) & 1);
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + -8);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ebp + -4)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(ebp + -4) = MEM32(ebp + -4) + eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(ebp + -12))) >> 32) & 1);
    eax = eax + MEM32(ebp + -12);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -16) = edi;
    MEM32(ebp + -8) = eax;
    eax = MEM32(ecx + 0x10);
    edi = eax + ebx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ebx) < (uint32_t)(eax));
    ebx = ebx - eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ecx + 8);
    _fb = (uint32_t)(MEM32(ecx + 0x18)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(ecx + 0x18)));
    eax = eax - MEM32(ecx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -20) = 0xB505;
    MEM32(ebp + -24) = eax;
    eax = MEM32(ebp + -24);
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)MEM32(ebp + -20);
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(0x10) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x10) & 31u;
      if (_sc) {
        _cf = (int)((_sv >> (_sc - 1u)) & 1u);
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(edx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    edx = MEM32(ecx + 8);
    _fb = (uint32_t)(MEM32(ecx + 0x18)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(MEM32(ecx + 0x18))) >> 32) & 1);
    edx = edx + MEM32(ecx + 0x18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(eax)) >> 32) & 1);
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(edx));
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(edx)) >> 32) & 1);
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ebx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(eax)) >> 32) & 1);
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(eax));
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + -16);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(edi)) >> 32) & 1);
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    eax = MEM32(ebp + -4);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ebx)) >> 32) & 1);
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ebx) < (uint32_t)(MEM32(ebp + -4)));
    ebx = ebx - MEM32(ebp + -4);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esi + 0x20) = eax;
    eax = MEM32(ebp + -8);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(edx)) >> 32) & 1);
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(MEM32(ebp + -8)));
    edx = edx - MEM32(ebp + -8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esi + 0x40) = eax;
    eax = MEM32(ebp + -12);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(MEM32(ebp + -12)));
    ecx = ecx - MEM32(ebp + -12);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edi) < (uint32_t)(MEM32(ebp + -16)));
    edi = edi - MEM32(ebp + -16);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esi + 0xC0) = ebx;
    MEM32(esi + 0xE0) = edi;
    POP32(esp, edi);
    MEM32(esi + 0x60) = eax;
    MEM32(esi + 0x80) = ecx;
    MEM32(esi + 0xA0) = edx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004F1FB8
 * Original: 0x004F1FB8 - 0x004F20DE (294 bytes, 106 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004F1FB8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004F1FB8: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x18));
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ecx + 0xC);
    PUSH32(esp, ebx);
    ebx = MEM32(ecx + 0x1C);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x14);
    edx = edi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(eax));
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ecx + 4);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(eax)) >> 32) & 1);
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(ecx + 0x1C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(ecx + 0x1C)));
    eax = eax - MEM32(ecx + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -16) = ebx;
    ebx = MEM32(ecx + 0xC);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(ebx)) >> 32) & 1);
    edi = edi + ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = MEM32(ebp + -16);
    MEM32(ebp + -4) = eax;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ebx) < (uint32_t)(edi));
    ebx = ebx - edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(MEM32(ebp + -16))) >> 32) & 1);
    edi = edi + MEM32(ebp + -16);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(edx)) >> 32) & 1);
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -12) = edx;
    MEM32(ebp + -8) = ebx;
    MEM32(ebp + -16) = 0x61F8;
    MEM32(ebp + -20) = eax;
    eax = MEM32(ebp + -20);
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)MEM32(ebp + -16);
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(0x10) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x10) & 31u;
      if (_sc) {
        _cf = (int)((_sv >> (_sc - 1u)) & 1u);
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(edx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    ebx = eax;
    MEM32(ebp + -20) = 0x8A8C;
    eax = MEM32(ebp + -12);
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)MEM32(ebp + -20);
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(0x10) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x10) & 31u;
      if (_sc) {
        _cf = (int)((_sv >> (_sc - 1u)) & 1u);
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(edx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ebx)) >> 32) & 1);
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -12) = eax;
    MEM32(ebp + -20) = 0xB505;
    eax = MEM32(ebp + -8);
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)MEM32(ebp + -20);
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(0x10) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x10) & 31u;
      if (_sc) {
        _cf = (int)((_sv >> (_sc - 1u)) & 1u);
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(edx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    MEM32(ebp + -8) = eax;
    MEM32(ebp + -20) = 0x14E7B;
    eax = MEM32(ebp + -4);
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)MEM32(ebp + -20);
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(0x10) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x10) & 31u;
      if (_sc) {
        _cf = (int)((_sv >> (_sc - 1u)) & 1u);
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(edx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ebx));
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx = MEM32(ecx);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(eax)) >> 32) & 1);
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + -8);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ebp + -4)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(ebp + -4) = MEM32(ebp + -4) + eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(ebp + -12))) >> 32) & 1);
    eax = eax + MEM32(ebp + -12);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -16) = edi;
    MEM32(ebp + -8) = eax;
    eax = MEM32(ecx + 0x10);
    edi = ebx + eax;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ebx) < (uint32_t)(eax));
    ebx = ebx - eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ecx + 8);
    _fb = (uint32_t)(MEM32(ecx + 0x18)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(ecx + 0x18)));
    eax = eax - MEM32(ecx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -20) = 0xB505;
    MEM32(ebp + -24) = eax;
    eax = MEM32(ebp + -24);
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)MEM32(ebp + -20);
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(0x10) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x10) & 31u;
      if (_sc) {
        _cf = (int)((_sv >> (_sc - 1u)) & 1u);
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(edx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    edx = MEM32(ecx + 0x18);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(eax)) >> 32) & 1);
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(MEM32(ecx + 8))) >> 32) & 1);
    edx = edx + MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edi;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(edx));
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(edx)) >> 32) & 1);
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ebx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(eax)) >> 32) & 1);
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(eax));
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + -16);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(edi)) >> 32) & 1);
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    eax = MEM32(ebp + -4);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ebx)) >> 32) & 1);
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ebx) < (uint32_t)(MEM32(ebp + -4)));
    ebx = ebx - MEM32(ebp + -4);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esi + 4) = eax;
    eax = MEM32(ebp + -8);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(edx)) >> 32) & 1);
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(MEM32(ebp + -8)));
    edx = edx - MEM32(ebp + -8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esi + 8) = eax;
    eax = MEM32(ebp + -12);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(MEM32(ebp + -12)));
    ecx = ecx - MEM32(ebp + -12);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edi) < (uint32_t)(MEM32(ebp + -16)));
    edi = edi - MEM32(ebp + -16);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esi + 0x18) = ebx;
    MEM32(esi + 0x1C) = edi;
    POP32(esp, edi);
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0x14) = edx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004F20DE
 * Original: 0x004F20DE - 0x004F21DC (254 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004F20DE(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004F20DE: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0x910250;
    esi = edi;
    ecx = 0x910350;
    PUSH32(esp, 0x004F20F2u); RECOMP_ABI_CALL(0x004F1E3Au, sub_004F1E3A); /* call 0x004F1E3A */

loc_004F20F2: ;
    esi = 0x910254;
    ecx = 0x910370;
    PUSH32(esp, 0x004F2101u); RECOMP_ABI_CALL(0x004F1E3Au, sub_004F1E3A); /* call 0x004F1E3A */

loc_004F2101: ;
    esi = 0x910258;
    ecx = 0x910390;
    PUSH32(esp, 0x004F2110u); RECOMP_ABI_CALL(0x004F1E3Au, sub_004F1E3A); /* call 0x004F1E3A */

loc_004F2110: ;
    esi = 0x91025C;
    ecx = 0x9103B0;
    PUSH32(esp, 0x004F211Fu); RECOMP_ABI_CALL(0x004F1E3Au, sub_004F1E3A); /* call 0x004F1E3A */

loc_004F211F: ;
    esi = 0x910260;
    ecx = 0x9103D0;
    PUSH32(esp, 0x004F212Eu); RECOMP_ABI_CALL(0x004F1E3Au, sub_004F1E3A); /* call 0x004F1E3A */

loc_004F212E: ;
    esi = 0x910264;
    ecx = 0x9103F0;
    PUSH32(esp, 0x004F213Du); RECOMP_ABI_CALL(0x004F1E3Au, sub_004F1E3A); /* call 0x004F1E3A */

loc_004F213D: ;
    esi = 0x910268;
    ecx = 0x910410;
    PUSH32(esp, 0x004F214Cu); RECOMP_ABI_CALL(0x004F1E3Au, sub_004F1E3A); /* call 0x004F1E3A */

loc_004F214C: ;
    esi = 0x91026C;
    ecx = 0x910430;
    PUSH32(esp, 0x004F215Bu); RECOMP_ABI_CALL(0x004F1E3Au, sub_004F1E3A); /* call 0x004F1E3A */

loc_004F215B: ;
    ebx = MEM32(esp + 0x10);
    esi = ebx;
    ecx = edi;
    PUSH32(esp, 0x004F2168u); RECOMP_ABI_CALL(0x004F1FB8u, sub_004F1FB8); /* call 0x004F1FB8 */

loc_004F2168: ;
    edi = MEM32(esp + 0x14);
    esi = ebx + edi * 4;
    ecx = 0x910270;
    PUSH32(esp, 0x004F2179u); RECOMP_ABI_CALL(0x004F1FB8u, sub_004F1FB8); /* call 0x004F1FB8 */

loc_004F2179: ;
    esi = ebx + edi * 8;
    ecx = 0x910290;
    PUSH32(esp, 0x004F2186u); RECOMP_ABI_CALL(0x004F1FB8u, sub_004F1FB8); /* call 0x004F1FB8 */

loc_004F2186: ;
    eax = edi + edi * 2;
    esi = ebx + eax * 4;
    ecx = 0x9102B0;
    PUSH32(esp, 0x004F2196u); RECOMP_ABI_CALL(0x004F1FB8u, sub_004F1FB8); /* call 0x004F1FB8 */

loc_004F2196: ;
    esi = edi;
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        esi = _sv << _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x9102D0;
    PUSH32(esp, 0x004F21A7u); RECOMP_ABI_CALL(0x004F1FB8u, sub_004F1FB8); /* call 0x004F1FB8 */

loc_004F21A7: ;
    eax = edi + edi * 4;
    esi = ebx + eax * 4;
    ecx = 0x9102F0;
    PUSH32(esp, 0x004F21B7u); RECOMP_ABI_CALL(0x004F1FB8u, sub_004F1FB8); /* call 0x004F1FB8 */

loc_004F21B7: ;
    eax = edi + edi * 2;
    esi = ebx + eax * 8;
    ecx = 0x910310;
    PUSH32(esp, 0x004F21C7u); RECOMP_ABI_CALL(0x004F1FB8u, sub_004F1FB8); /* call 0x004F1FB8 */

loc_004F21C7: ;
    esi = edi;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x1C);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x910330;
    PUSH32(esp, 0x004F21D8u); RECOMP_ABI_CALL(0x004F1FB8u, sub_004F1FB8); /* call 0x004F1FB8 */

loc_004F21D8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_004F21DC
 * Original: 0x004F21DC - 0x004F2219 (61 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004F21DC(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004F21DC: ;
    { uint32_t _sv=(uint32_t)(MEM32(0x90F438)), _sc=(uint32_t)(LO8(ecx)) & 31u;
      if (_sc) {
        MEM32(0x90F438) = _sv << _sc;
        _fa = (uint32_t)(MEM32(0x90F438)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(0x90E830) = MEM32(0x90E830) - ecx;
    _fa = (uint32_t)(MEM32(0x90E830)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM32(0x90E830)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x90E830), 0x10 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_004F2218; /* jge: greater or equal (signed >=) */

loc_004F21F1: ;
    eax = MEM32(0x910248);
    eax = ZX16(MEM16(eax));
    PUSH32(esp, 0x10);
    POP32(esp, ecx);
    _fb = (uint32_t)(MEM32(0x90E830)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(0x90E830);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(0x90E830) = MEM32(0x90E830) + 0x10;
    _fa = (uint32_t)(MEM32(0x90E830)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(LO8(ecx)) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM32(0x90F438) = MEM32(0x90F438) | eax;
    _fa = (uint32_t)(MEM32(0x90F438)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(0x910248) = MEM32(0x910248) + 2;
    _fa = (uint32_t)(MEM32(0x910248)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004F2218: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004F2219
 * Original: 0x004F2219 - 0x004F230A (241 bytes, 77 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004F2219(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004F2219: ;
    eax = (uint32_t)(int32_t)SMEM8(0x90F43B);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(0x90EC38));
    PUSH32(esp, 8);
    POP32(esp, ecx);
    MEM32(0x910350) = eax;
    PUSH32(esp, 0x004F2234u); RECOMP_ABI_CALL(0x004F21DCu, sub_004F21DC); /* call 0x004F21DC */

loc_004F2234: ;
    PUSH32(esp, 9);
    eax = 0x91035C;
    POP32(esp, edx);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004F223E: ;
    MEM32(eax + -8) = ecx;
    MEM32(eax + -4) = ecx;
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_004F223E; /* jne: not equal / not zero */

loc_004F2258: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = 0xFF;

loc_004F2262: ;
    eax = MEM32(0x90F438);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x17) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = MEM32(eax * 4 + 0x90F440);
    ecx = edx;
    ecx = ecx & esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 9 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_004F22CE; /* jle: less or equal (signed <=) */

loc_004F227A: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0x20 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_004F22B8; /* jne: not equal / not zero */

loc_004F227F: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_004F22A0; /* jne: not equal / not zero */

loc_004F2284: ;
    PUSH32(esp, 9);
    POP32(esp, ecx);
    PUSH32(esp, 0x004F228Cu); RECOMP_ABI_CALL(0x004F21DCu, sub_004F21DC); /* call 0x004F21DC */

loc_004F228C: ;
    eax = ZX8(MEM8(0x90F43B));
    edx = MEM32(eax * 4 + 0x90EF38);

loc_004F229A: ;
    ecx = edx;
    ecx = ecx & esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_004F22CE;

loc_004F22A0: ;
    PUSH32(esp, 6);
    POP32(esp, ecx);
    PUSH32(esp, 0x004F22A8u); RECOMP_ABI_CALL(0x004F21DCu, sub_004F21DC); /* call 0x004F21DC */

loc_004F22A8: ;
    eax = ZX8(MEM8(0x90F43B));
    edx = MEM32(eax * 4 + 0x90FC48);
    goto loc_004F229A;

loc_004F22B8: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_004F22FD; /* jne: not equal / not zero */

loc_004F22BD: ;
    PUSH32(esp, 6);
    POP32(esp, ecx);
    PUSH32(esp, 0x004F22C5u); RECOMP_ABI_CALL(0x004F21DCu, sub_004F21DC); /* call 0x004F21DC */

loc_004F22C5: ;
    edx = MEM32(0x90F438);
    PUSH32(esp, 0x10);
    POP32(esp, ecx);

loc_004F22CE: ;
    PUSH32(esp, 0x004F22D3u); RECOMP_ABI_CALL(0x004F21DCu, sub_004F21DC); /* call 0x004F21DC */

loc_004F22D3: ;
    eax = edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0x10) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = eax & 0x3F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(edi * 4 + 0x86F7F8);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((0x16) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(eax + 0x90EC38));
    MEM32(eax + 0x910350) = edx;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_004F2262;

loc_004F22FD: ;
    PUSH32(esp, 2);
    POP32(esp, ecx);
    PUSH32(esp, 0x004F2305u); RECOMP_ABI_CALL(0x004F21DCu, sub_004F21DC); /* call 0x004F21DC */

loc_004F2305: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004F2341
 * Original: 0x004F2341 - 0x004F234C (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004F2341(void)
{

loc_004F2341: ;
    PUSH32(esp, MEM32(esp + 4));
    PUSH32(esp, 0x004F234Au); RECOMP_ABI_CALL(0x005A1E5Eu, sub_005A1E5E); /* call 0x005A1E5E */

loc_004F234A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004F234C
 * Original: 0x004F234C - 0x004F23E7 (155 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004F234C(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004F234C: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = ecx;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x80) = edx;
    PUSH32(esp, edi);
    PUSH32(esp, 0x10);
    MEMF(eax) = xmm0.f[0]; /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    POP32(esp, ecx);
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEM32(eax + 0x10) = edx;
    MEM32(eax + 0x14) = edx;
    MEM32(eax + 0x18) = edx;
    MEM32(eax + 0x1C) = edx;
    MEM8(eax + 0x28) = LO8(edx);
    MEM32(eax + 0x20) = edx;
    MEM32(eax + 0x24) = edx;
    MEM32(eax + 0xD0) = edx;
    ebx = 0x87DB50;
    PUSH32(esp, 0x10);
    esi = ebx;
    edi = eax + 0xE0;
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
    MEM32(eax + 0x120) = edx;
    MEM32(eax + 0x34) = edx;
    MEM32(eax + 0x38) = edx;
    MEM32(eax + 0x2C) = edx;
    POP32(esp, ecx);
    esi = ebx;
    edi = eax + 0x40;
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
    MEM8(eax + 0x3F) = 0xFF;
    MEM8(eax + 0x3E) = 0xFF;
    MEM8(eax + 0x3D) = 0xFF;
    MEM8(eax + 0x3C) = 0xFF;
    POP32(esp, esi);
    MEM32(eax + 0x80) = edx;
    MEM32(eax + 0xC8) = 0x200;
    MEM8(eax + 0xCC) = LO8(edx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_004F23E7
 * Original: 0x004F23E7 - 0x004F242D (70 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004F23E7(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004F23E7: ;
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(edi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004F242B; /* je: equal / zero */

loc_004F23F1: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x004F23F9u); RECOMP_ABI_CALL(0x004EEDACu, sub_004EEDAC); /* call 0x004EEDAC */

loc_004F23F9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004F242A; /* jbe: below or equal (unsigned <=) */

loc_004F23FD: ;
    PUSH32(esp, esi);

loc_004F23FE: ;
    ecx = MEM32(edi + 0x1C);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x004F2407u); RECOMP_ABI_CALL(0x004EED2Bu, sub_004EED2B); /* call 0x004EED2B */

loc_004F2407: ;
    esi = eax;
    eax = MEM32(esi + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004F241C; /* je: equal / zero */

loc_004F2410: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x8D7E94); PUSH32(esp, 0x004F2417u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004F2411u); } /* indirect call */
    }

loc_004F2417: ;
    MEM32(esi + 0x30) = MEM32(esi + 0x30) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x30)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, ecx);

loc_004F241C: ;
    ecx = MEM32(edi + 0x1C);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x004F2425u); RECOMP_ABI_CALL(0x004EEDACu, sub_004EEDAC); /* call 0x004EEDAC */

loc_004F2425: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004F23FE; /* jb: below (unsigned <) */

loc_004F2429: ;
    POP32(esp, esi);

loc_004F242A: ;
    POP32(esp, ebx);

loc_004F242B: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_004F242D
 * Original: 0x004F242D - 0x004F25A1 (372 bytes, 139 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004F242D(void)
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

loc_004F242D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x1C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F2442u); RECOMP_ABI_CALL(0x004EEDACu, sub_004EEDAC); /* call 0x004EEDAC */

loc_004F2442: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004F259E; /* jbe: below or equal (unsigned <=) */

loc_004F244A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);

loc_004F244C: ;
    PUSH32(esp, MEM32(ebp + -8));
    ecx = MEM32(esi + 0x1C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F2457u); RECOMP_ABI_CALL(0x004EED2Bu, sub_004EED2B); /* call 0x004EED2B */

loc_004F2457: ;
    edi = eax;
    eax = MEM32(edi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x24) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_004F246C; /* jae: above or equal (unsigned >=) */

loc_004F2461: ;
    ecx = MEM32(esi + 0x20);
    eax = MEM32(ecx + eax * 4);
    MEM32(edi + 0x28) = eax;
    goto loc_004F2470;

loc_004F246C: ;
    MEM32(edi + 0x28) = MEM32(edi + 0x28) & 0;
    _fa = (uint32_t)(MEM32(edi + 0x28)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_004F2470: ;
    eax = MEM32(edi + 8);
    fp_push((double)SMEM32(edi + 8)); /* fild */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_004F2480; /* jge: greater or equal (signed >=) */

loc_004F247A: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7B8E10)); /* fadd dword ptr [0x7b8e10] */

loc_004F2480: ;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), 0 (32-bit) */
    MEMF(ebp + -12) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_EQ(_fa, _fb)) goto loc_004F24EF; /* je: equal / zero */

loc_004F2489: ;
    ecx = MEM32(edi + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004F24EF; /* je: equal / zero */

loc_004F2490: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F2495u); RECOMP_ABI_CALL(0x005A2411u, sub_005A2411); /* call 0x005A2411 */

loc_004F2495: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004F24EF; /* je: equal / zero */

loc_004F249B: ;
    _fa = (uint32_t)(MEM32(ebx + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x1C), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004F24EF; /* jne: not equal / not zero */

loc_004F24A1: ;
    eax = MEM32(ebx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004F24AA; /* je: equal / zero */

loc_004F24A8: ;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004F24AA: ;
    eax = MEM32(eax);
    PUSH32(esp, 0);
    ecx = ebx;
    MEM32(ebp + -16) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F24B8u); RECOMP_ABI_CALL(0x0001776Bu, sub_0001776B); /* call 0x0001776B */

loc_004F24B8: ;
    MEM32(ebp + -20) = eax;
    eax = MEM32(ebx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004F24C4; /* je: equal / zero */

loc_004F24C2: ;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004F24C4: ;
    ecx = MEM32(ebx + 0x18);
    eax = MEM32(eax + ecx * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -16) (32-bit) */
    MEM32(ebp + -24) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_004F24EF; /* jle: less or equal (signed <=) */

loc_004F24D2: ;
    PUSH32(esp, 1);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F24DBu); RECOMP_ABI_CALL(0x0001776Bu, sub_0001776B); /* call 0x0001776B */

loc_004F24DB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -20) (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_004F24EF; /* jle: less or equal (signed <=) */

loc_004F24E0: ;
    eax = MEM32(ebp + -24);
    _fb = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + -16);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(ebp + -12) = xmm0.f[0]; /* movss */

loc_004F24EF: ;
    MEM32(ebp + -24) = MEM32(ebp + -24) & 0;
    _fa = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -16) = MEM32(ebp + -16) & 0;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM8(esi + 0x28)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x28), 0 (8-bit) */
    ebx = MEM32(edi + 0x10);
    PUSH32(esp, 2);
    PUSH32(esp, MEM32(esi + 0x10));
    MEM8(ebp + -1) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_004F2548; /* je: equal / zero */

loc_004F2509: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F250Eu); RECOMP_ABI_CALL(0x0059ED4Du, sub_0059ED4D); /* call 0x0059ED4D */

loc_004F250E: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_AE(_fa, _fb)) goto loc_004F257C; /* jae: above or equal (unsigned >=) */

loc_004F2514: ;
    PUSH32(esp, MEM32(edi + 0x10));
    PUSH32(esp, MEM32(esi + 0x10));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F251Fu); RECOMP_ABI_CALL(0x0059EE28u, sub_0059EE28); /* call 0x0059EE28 */

loc_004F251F: ;
    fp_push(MEMF(ebp + -12)); /* fld float */
    POP32(esp, ecx);
    POP32(esp, ecx);
    ebx = eax;
    eax = ebp + -1;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, MEM32(esi + 0x14));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F253Bu); RECOMP_ABI_CALL(0x004F3C9Bu, sub_004F3C9B); /* call 0x004F3C9B */

loc_004F253B: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM8(ebp + -1)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -1), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004F257F; /* jne: not equal / not zero */

loc_004F2544: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_004F2582;

loc_004F2548: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F254Du); RECOMP_ABI_CALL(0x0059ED4Du, sub_0059ED4D); /* call 0x0059ED4D */

loc_004F254D: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_AE(_fa, _fb)) goto loc_004F257C; /* jae: above or equal (unsigned >=) */

loc_004F2553: ;
    PUSH32(esp, MEM32(edi + 0x10));
    PUSH32(esp, MEM32(esi + 0x10));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F255Eu); RECOMP_ABI_CALL(0x0059EDE2u, sub_0059EDE2); /* call 0x0059EDE2 */

loc_004F255E: ;
    fp_push(MEMF(ebp + -12)); /* fld float */
    POP32(esp, ecx);
    POP32(esp, ecx);
    ebx = eax;
    eax = ebp + -1;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, MEM32(esi + 0x14));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F257Au); RECOMP_ABI_CALL(0x004F3C7Bu, sub_004F3C7B); /* call 0x004F3C7B */

loc_004F257A: ;
    goto loc_004F253B;

loc_004F257C: ;
    ebx = MEM32(ebp + -24);

loc_004F257F: ;
    eax = MEM32(ebp + -16);

loc_004F2582: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) + 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edi + 0x2C) = ebx;
    MEM32(edi + 0x30) = eax;
    ecx = MEM32(esi + 0x1C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F2593u); RECOMP_ABI_CALL(0x004EEDACu, sub_004EEDAC); /* call 0x004EEDAC */

loc_004F2593: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004F244C; /* jb: below (unsigned <) */

loc_004F259C: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_004F259E: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_004F25FB
 * Original: 0x004F25FB - 0x004F2648 (77 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004F25FB(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004F25FB: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x20), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004F2644; /* je: equal / zero */

loc_004F2607: ;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x24), ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004F2634; /* jbe: below or equal (unsigned <=) */

loc_004F260F: ;
    eax = MEM32(esi + 0x20);
    eax = eax + edi * 4;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004F262E; /* je: equal / zero */

loc_004F2619: ;
    ecx = MEM32(esi + 0x30);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x4F2341);
    PUSH32(esp, MEM32(eax));
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004F262Eu); RECOMP_ABI_CALL(0x00018161u, sub_00018161); /* call 0x00018161 */

loc_004F262E: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0x24) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004F260F; /* jb: below (unsigned <) */

loc_004F2634: ;
    PUSH32(esp, MEM32(esi + 0x20));
    PUSH32(esp, 0x004F263Cu); RECOMP_ABI_CALL(0x0001D00Du, sub_0001D00D); /* call 0x0001D00D */

loc_004F263C: ;
    POP32(esp, ecx);
    MEM32(esi + 0x24) = ebx;
    MEM32(esi + 0x20) = ebx;
    POP32(esp, edi);

loc_004F2644: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004F2648
 * Original: 0x004F2648 - 0x004F26DD (149 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004F2648(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004F2648: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004F26DA; /* je: equal / zero */

loc_004F2657: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x004F265Du); RECOMP_ABI_CALL(0x005A2986u, sub_005A2986); /* call 0x005A2986 */

loc_004F265D: ;
    MEM32(esi + 0x24) = eax;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, eax);
    PUSH32(esp, 0x004F2669u); RECOMP_ABI_CALL(0x0001A0C9u, sub_0001A0C9); /* call 0x0001A0C9 */

loc_004F2669: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x24), edi (32-bit) */
    POP32(esp, ecx);
    MEM32(esi + 0x20) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_004F26D9; /* jbe: below or equal (unsigned <=) */

loc_004F2674: ;
    PUSH32(esp, ebx);
    ebx = 0x100;

loc_004F267A: ;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, edi);
    PUSH32(esp, 0x004F2683u); RECOMP_ABI_CALL(0x000196DDu, sub_000196DD); /* call 0x000196DD */

loc_004F2683: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004F26CB; /* je: equal / zero */

loc_004F2687: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax), ebx (32-bit) */
    PUSH32(esp, ebx);
    if (TEST_NZ(_fa, _fb)) goto loc_004F2696; /* jne: not equal / not zero */

loc_004F268C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004F2692u); RECOMP_ABI_CALL(0x005A7DE2u, sub_005A7DE2); /* call 0x005A7DE2 */

loc_004F2692: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_004F269D;

loc_004F2696: ;
    ecx = eax;
    PUSH32(esp, 0x004F269Du); RECOMP_ABI_CALL(0x005A612Au, sub_005A612A); /* call 0x005A612A */

loc_004F269D: ;
    ecx = MEM32(esi + 0x20);
    MEM32(ecx + edi * 4) = eax;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(eax + edi * 4);
    PUSH32(esp, 0x004F26AEu); RECOMP_ABI_CALL(0x005A24EFu, sub_005A24EF); /* call 0x005A24EF */

loc_004F26AE: ;
    ecx = MEM32(esi + 0x20);
    ecx = ecx + edi * 4;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004F26D2; /* je: equal / zero */

loc_004F26B9: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ecx));
    ecx = MEM32(esi + 0x30);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004F26C9u); RECOMP_ABI_CALL(0x00022F12u, sub_00022F12); /* call 0x00022F12 */

loc_004F26C9: ;
    goto loc_004F26D2;

loc_004F26CB: ;
    eax = MEM32(esi + 0x20);
    MEM32(eax + edi * 4) = MEM32(eax + edi * 4) & 0;
    _fa = (uint32_t)(MEM32(eax + edi * 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_004F26D2: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0x24) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004F267A; /* jb: below (unsigned <) */

loc_004F26D8: ;
    POP32(esp, ebx);

loc_004F26D9: ;
    POP32(esp, edi);

loc_004F26DA: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004F26DD
 * Original: 0x004F26DD - 0x004F2C4B (1390 bytes, 432 insns)
 * Category: game_render
 * CC: cdecl, 10 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004F26DD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004F26DD: ;
    PUSH32(esp, ebp);
    ebp = esp + -80;
    _fb = (uint32_t)(0x134) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x134;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x004F26F2u); RECOMP_ABI_CALL(0x004F25FBu, sub_004F25FB); /* call 0x004F25FB */

loc_004F26F2: ;
    ecx = esi;
    PUSH32(esp, 0x004F26F9u); RECOMP_ABI_CALL(0x004F23E7u, sub_004F23E7); /* call 0x004F23E7 */

loc_004F26F9: ;
    SET_LO8(eax, MEM8(ebp + 0x5C));
    MEM8(esi + 0x28) = LO8(eax);
    eax = MEM32(ebp + 0x58);
    MEM32(esi + 0x10) = eax;
    eax = MEM32(ebp + 0x60);
    MEM32(esi + 0x14) = eax;
    eax = MEM32(ebp + 0x68);
    MEM32(esi + 0x1C) = eax;
    eax = MEM32(ebp + 0x64);
    MEM32(esi + 0x18) = eax;
    eax = MEM32(ebp + 0x6C);
    MEM32(esi + 0x2C) = eax;
    eax = MEM32(ebp + 0x70);
    MEM32(esi + 0x30) = eax;
    eax = MEM32(ebp + 0x78);
    ecx = esi;
    MEM32(esi + 0x34) = eax;
    PUSH32(esp, 0x004F2730u); RECOMP_ABI_CALL(0x004F2648u, sub_004F2648); /* call 0x004F2648 */

loc_004F2730: ;
    ecx = esi;
    PUSH32(esp, 0x004F2737u); RECOMP_ABI_CALL(0x004F242Du, sub_004F242D); /* call 0x004F242D */

loc_004F2737: ;
    eax = MEM32(esi + 0x20);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004F2760; /* je: equal / zero */

loc_004F2740: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004F2760; /* je: equal / zero */

loc_004F2744: ;
    ecx = MEM32(esi + 0x2C);
    ebx = esi + 0xD0;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(eax));
    eax = ebp + 0x5C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004F275Au); RECOMP_ABI_CALL(0x0055D9F6u, sub_0055D9F6); /* call 0x0055D9F6 */

loc_004F275A: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), edi (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_004F2760; /* jg: greater (signed >) */

loc_004F275E: ;
    MEM32(ebx) = edi;

loc_004F2760: ;
    _fa = (uint32_t)(MEM32(esi + 0xD0)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xD0), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004F2B02; /* je: equal / zero */

loc_004F276C: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEM32(ebp + 0x68) = MEM32(ebp + 0x68) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + 0x68)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 2);
    POP32(esp, ebx);
    PUSH32(esp, 3);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 0x28) = ecx;
    MEM32(ebp + 0x10) = ecx;
    ecx = ebp + -228;
    MEMF(ebp + -104) = xmm0.f[0]; /* movss */
    MEMF(ebp + -100) = xmm0.f[0]; /* movss */
    MEMF(ebp + -96) = xmm0.f[0]; /* movss */
    MEMF(ebp + -92) = xmm0.f[0]; /* movss */
    MEMF(ebp + -88) = xmm1.f[0]; /* movss */
    MEMF(ebp + -84) = xmm0.f[0]; /* movss */
    MEMF(ebp + -80) = xmm1.f[0]; /* movss */
    MEMF(ebp + -76) = xmm0.f[0]; /* movss */
    MEMF(ebp + -72) = xmm0.f[0]; /* movss */
    MEMF(ebp + -68) = xmm1.f[0]; /* movss */
    MEMF(ebp + -64) = xmm1.f[0]; /* movss */
    MEMF(ebp + -60) = xmm0.f[0]; /* movss */
    MEMF(ebp + -56) = xmm0.f[0]; /* movss */
    MEMF(ebp + -52) = xmm0.f[0]; /* movss */
    MEMF(ebp + -48) = xmm0.f[0]; /* movss */
    MEMF(ebp + -44) = xmm1.f[0]; /* movss */
    MEMF(ebp + -40) = xmm1.f[0]; /* movss */
    MEMF(ebp + -36) = xmm0.f[0]; /* movss */
    MEMF(ebp + -32) = xmm1.f[0]; /* movss */
    MEMF(ebp + -28) = xmm1.f[0]; /* movss */
    MEM32(ebp + 0x18) = edi;
    MEM32(ebp + 0x1C) = eax;
    MEM32(ebp + 0x20) = ebx;
    MEM32(ebp + 0x24) = eax;
    MEM32(ebp + 0x2C) = ebx;
    MEM32(ebp) = edi;
    MEM32(ebp + 4) = eax;
    MEM32(ebp + 8) = ebx;
    MEM32(ebp + 0xC) = eax;
    MEM32(ebp + 0x14) = ebx;
    MEM32(ebp + -24) = edi;
    MEM32(ebp + -20) = edi;
    MEM32(ebp + -16) = edi;
    MEM32(ebp + -12) = edi;
    MEM32(ebp + -8) = edi;
    MEM32(ebp + -4) = edi;
    MEM32(ebp + 0x64) = 6;
    MEM32(ebp + 0x6C) = 4;
    PUSH32(esp, 0x004F2837u); RECOMP_ABI_CALL(0x0056A600u, sub_0056A600); /* call 0x0056A600 */

loc_004F2837: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0x86F964);
    PUSH32(esp, 0x004F2844u); RECOMP_ABI_CALL(0x005725B8u, sub_005725B8); /* call 0x005725B8 */

loc_004F2844: ;
    eax = ebp + 0x70;
    PUSH32(esp, eax);
    ecx = ebp + -228;
    PUSH32(esp, 0x004F2853u); RECOMP_ABI_CALL(0x0056798Eu, sub_0056798E); /* call 0x0056798E */

loc_004F2853: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x30);
    eax = ebp + -104;
    PUSH32(esp, eax);
    PUSH32(esp, 0x86F96C);
    eax = ebp + 0x70;
    PUSH32(esp, eax);
    ecx = ebp + -228;
    PUSH32(esp, 0x004F286Eu); RECOMP_ABI_CALL(0x00568296u, sub_00568296); /* call 0x00568296 */

loc_004F286E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x20);
    eax = ebp + -56;
    PUSH32(esp, eax);
    PUSH32(esp, 0x86F974);
    eax = ebp + 0x70;
    PUSH32(esp, eax);
    ecx = ebp + -228;
    PUSH32(esp, 0x004F2889u); RECOMP_ABI_CALL(0x00568296u, sub_00568296); /* call 0x00568296 */

loc_004F2889: ;
    PUSH32(esp, edi);
    PUSH32(esp, 4);
    eax = ebp + 0x68;
    PUSH32(esp, eax);
    PUSH32(esp, 0x86F978);
    eax = ebp + 0x70;
    PUSH32(esp, eax);
    ecx = ebp + -228;
    PUSH32(esp, 0x004F28A4u); RECOMP_ABI_CALL(0x00568296u, sub_00568296); /* call 0x00568296 */

loc_004F28A4: ;
    PUSH32(esp, MEM32(ebp + 0x7C));
    eax = ebp + 0x70;
    PUSH32(esp, eax);
    ecx = ebp + -228;
    PUSH32(esp, 0x004F28B6u); RECOMP_ABI_CALL(0x0056A770u, sub_0056A770); /* call 0x0056A770 */

loc_004F28B6: ;
    PUSH32(esp, 0x18);
    eax = ebp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x86F980);
    eax = ebp + 0x70;
    PUSH32(esp, eax);
    ecx = ebp + -228;
    PUSH32(esp, 0x004F28D0u); RECOMP_ABI_CALL(0x0056A304u, sub_0056A304); /* call 0x0056A304 */

loc_004F28D0: ;
    PUSH32(esp, 0x18);
    eax = ebp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x86F990);
    eax = ebp + 0x70;
    PUSH32(esp, eax);
    ecx = ebp + -228;
    PUSH32(esp, 0x004F28EAu); RECOMP_ABI_CALL(0x0056A304u, sub_0056A304); /* call 0x0056A304 */

loc_004F28EA: ;
    PUSH32(esp, 0x18);
    eax = ebp + -24;
    PUSH32(esp, eax);
    PUSH32(esp, 0x86F99C);
    eax = ebp + 0x70;
    PUSH32(esp, eax);
    ecx = ebp + -228;
    PUSH32(esp, 0x004F2904u); RECOMP_ABI_CALL(0x0056A304u, sub_0056A304); /* call 0x0056A304 */

loc_004F2904: ;
    PUSH32(esp, 4);
    eax = ebp + 0x64;
    PUSH32(esp, eax);
    PUSH32(esp, 0x86F9AC);
    eax = ebp + 0x70;
    PUSH32(esp, eax);
    ecx = ebp + -228;
    PUSH32(esp, 0x004F291Eu); RECOMP_ABI_CALL(0x005682CDu, sub_005682CD); /* call 0x005682CD */

loc_004F291E: ;
    PUSH32(esp, 4);
    eax = ebp + 0x6C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x86F9B4);
    eax = ebp + 0x70;
    PUSH32(esp, eax);
    ecx = ebp + -228;
    PUSH32(esp, 0x004F2938u); RECOMP_ABI_CALL(0x005682CDu, sub_005682CD); /* call 0x005682CD */

loc_004F2938: ;
    PUSH32(esp, 0x86F9C0);
    PUSH32(esp, 0x86F9CC);
    eax = ebp + 0x70;
    PUSH32(esp, eax);
    ecx = ebp + -228;
    PUSH32(esp, 0x004F2951u); RECOMP_ABI_CALL(0x0056A352u, sub_0056A352); /* call 0x0056A352 */

loc_004F2951: ;
    eax = ebp + 0x70;
    PUSH32(esp, eax);
    ecx = ebp + -228;
    PUSH32(esp, 0x004F2960u); RECOMP_ABI_CALL(0x005679BBu, sub_005679BB); /* call 0x005679BB */

loc_004F2960: ;
    ebx = esi + 0x120;
    PUSH32(esp, ebx);
    eax = ebp + 0x70;
    PUSH32(esp, eax);
    ecx = ebp + -228;
    PUSH32(esp, 0x004F2976u); RECOMP_ABI_CALL(0x0056973Eu, sub_0056973E); /* call 0x0056973E */

loc_004F2976: ;
    eax = ebp + 0x58;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x74));
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0x86F9D8);
    PUSH32(esp, 0x004F298Bu); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_004F298B: ;
    eax = ebp + 0x70;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004F2994u); RECOMP_ABI_CALL(0x00572F47u, sub_00572F47); /* call 0x00572F47 */

loc_004F2994: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm2 = XMM_SCALAR(MEMF(0x86FA68)); /* movss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm3 = xmm0; /* movaps */
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    xmm1 = XMM_SCALAR(MEMF(0x86FA64)); /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_004F2A11; /* je: equal / zero */

loc_004F29B4: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004F2A11; /* je: equal / zero */

loc_004F29BA: ;
    ecx = eax;
    PUSH32(esp, 0x004F29C1u); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_004F29C1: ;
    xmm0.f[0] = (float)(int32_t)MEM32(eax + 0x10); /* cvtsi2ss */
    eax = MEM32(esi + 0x20);
    ecx = MEM32(eax);
    MEMF(ebp + 0x7C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x004F29D5u); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_004F29D5: ;
    xmm0.f[0] = (float)(int32_t)MEM32(eax + 0x14); /* cvtsi2ss */
    eax = MEM32(esi + 0x20);
    ecx = MEM32(eax);
    MEMF(ebp + 0x78) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x004F29E9u); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_004F29E9: ;
    xmm0.f[0] = (float)(int32_t)MEM32(eax + 0x18); /* cvtsi2ss */
    eax = MEM32(esi + 0x20);
    ecx = MEM32(eax);
    MEMF(ebp + 0x70) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x004F29FDu); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_004F29FD: ;
    xmm1.f[0] = (float)(int32_t)MEM32(eax + 0x1C); /* cvtsi2ss */
    xmm2 = XMM_SCALAR(MEMF(ebp + 0x70)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x78)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(ebp + 0x7C)); /* movss */

loc_004F2A11: ;
    eax = esi + 0xE0;
    PUSH32(esp, eax);
    eax = ebp + 0x3C;
    PUSH32(esp, eax);
    eax = ebp + 0x30;
    MEMF(ebp + 0x34) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(ebp + 0x40) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AA820)); /* movss */
    PUSH32(esp, eax);
    MEMF(ebp + 0x30) = xmm2.f[0]; /* movss */
    MEMF(ebp + 0x38) = xmm1.f[0]; /* movss */
    MEMF(ebp + 0x3C) = xmm3.f[0]; /* movss */
    MEMF(ebp + 0x44) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x004F2A53u); RECOMP_ABI_CALL(0x00018AF8u, sub_00018AF8); /* call 0x00018AF8 */

loc_004F2A53: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ebp + 0x4C;
    PUSH32(esp, eax);
    eax = esi + 0xE0;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, edi);
    MEM32(eax) = edi;
    PUSH32(esp, 0x86F9E4);
    MEM32(eax) = edi;
    PUSH32(esp, 0x004F2A76u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_004F2A76: ;
    ecx = MEM32(ebp + 0x58);
    eax = ebp + 0x70;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004F2A82u); RECOMP_ABI_CALL(0x0001841Du, sub_0001841D); /* call 0x0001841D */

loc_004F2A82: ;
    eax = ebp + 0x4C;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx));
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, edi);
    MEM32(eax) = edi;
    PUSH32(esp, 0x86F9F0);
    MEM32(eax) = edi;
    PUSH32(esp, 0x004F2A9Du); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_004F2A9D: ;
    ecx = MEM32(ebp + 0x58);
    eax = ebp + 0x70;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004F2AA9u); RECOMP_ABI_CALL(0x00028D5Eu, sub_00028D5E); /* call 0x00028D5E */

loc_004F2AA9: ;
    PUSH32(esp, 0x86F9F8);
    ecx = ebp + 0x5C;
    PUSH32(esp, 0x004F2AB6u); RECOMP_ABI_CALL(0x005725B8u, sub_005725B8); /* call 0x005725B8 */

loc_004F2AB6: ;
    eax = ebp + 0x4C;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0xD0));
    eax = ebp + 0x5C;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004F2ACCu); RECOMP_ABI_CALL(0x0002D9EEu, sub_0002D9EE); /* call 0x0002D9EE */

loc_004F2ACC: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0x86FA04);
    PUSH32(esp, 0x004F2ADAu); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_004F2ADA: ;
    ecx = MEM32(ebp + 0x74);
    eax = ebp + 0x70;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004F2AE6u); RECOMP_ABI_CALL(0x00023F34u, sub_00023F34); /* call 0x00023F34 */

loc_004F2AE6: ;
    _fa = (uint32_t)(MEM8(ebp + 0x5C)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x5C), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004F2AEF; /* je: equal / zero */

loc_004F2AEC: ;
    MEM32(ebp + 0x5C) = edi;

loc_004F2AEF: ;
    ecx = ebp + 0x5C;
    PUSH32(esp, 0x004F2AF7u); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_004F2AF7: ;
    ecx = ebp + -228;
    PUSH32(esp, 0x004F2B02u); RECOMP_ABI_CALL(0x0056A677u, sub_0056A677); /* call 0x0056A677 */

loc_004F2B02: ;
    ecx = MEM32(esi + 0x2C);
    ebx = esi + 0x38;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x60));
    eax = ebp + 0x5C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004F2B16u); RECOMP_ABI_CALL(0x0055DB00u, sub_0055DB00); /* call 0x0055DB00 */

loc_004F2B16: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), edi (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_004F2B1E; /* jg: greater (signed >) */

loc_004F2B1A: ;
    MEM32(ebx) = edi;
    goto loc_004F2B53;

loc_004F2B1E: ;
    PUSH32(esp, MEM32(esi + 0xC8));
    ecx = MEM32(ebx);
    PUSH32(esp, 0x004F2B2Bu); RECOMP_ABI_CALL(0x0055FB52u, sub_0055FB52); /* call 0x0055FB52 */

loc_004F2B2B: ;
    ecx = MEM32(ebx);
    PUSH32(esp, edi);
    eax = ebp + 0x5C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004F2B37u); RECOMP_ABI_CALL(0x0055FB5Fu, sub_0055FB5F); /* call 0x0055FB5F */

loc_004F2B37: ;
    PUSH32(esp, 0x86FA0C);
    eax = esi + 0x80;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    eax = ebp + 0x5C;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx));
    PUSH32(esp, 0x004F2B50u); RECOMP_ABI_CALL(0x0055FC15u, sub_0055FC15); /* call 0x0055FC15 */

loc_004F2B50: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004F2B53: ;
    eax = ebp + 0x48;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x74));
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0x86FA24);
    PUSH32(esp, 0x004F2B68u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_004F2B68: ;
    eax = ebp + 0x5C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004F2B71u); RECOMP_ABI_CALL(0x00572F47u, sub_00572F47); /* call 0x00572F47 */

loc_004F2B71: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    eax = esi + 0x40;
    PUSH32(esp, eax);
    MEMF(ebp + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(ebp + 0x40) = xmm0.f[0]; /* movss */
    MEMF(ebp + 0x44) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x86FA60)); /* movss */
    eax = ebp + 0x30;
    MEMF(ebp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7B04A0)); /* movss */
    PUSH32(esp, eax);
    eax = ebp + 0x3C;
    MEMF(ebp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7C40B8)); /* movss */
    PUSH32(esp, eax);
    MEMF(ebp + 0x38) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x004F2BC0u); RECOMP_ABI_CALL(0x00018AF8u, sub_00018AF8); /* call 0x00018AF8 */

loc_004F2BC0: ;
    ebx = MEM32(ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004F2C41; /* je: equal / zero */

loc_004F2BC9: ;
    eax = ebp + 0x4C;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, edi);
    MEM32(eax) = edi;
    PUSH32(esp, 0x86FA34);
    MEM32(eax) = edi;
    PUSH32(esp, 0x004F2BE3u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_004F2BE3: ;
    ecx = MEM32(ebp + 0x48);
    eax = ebp + 0x5C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004F2BEFu); RECOMP_ABI_CALL(0x000139AEu, sub_000139AE); /* call 0x000139AE */

loc_004F2BEF: ;
    eax = ebp + 0x4C;
    PUSH32(esp, eax);
    eax = esi + 0x40;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, edi);
    MEM32(eax) = edi;
    PUSH32(esp, 0x86FA48);
    MEM32(eax) = edi;
    PUSH32(esp, 0x004F2C0Cu); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_004F2C0C: ;
    ecx = MEM32(ebp + 0x48);
    eax = ebp + 0x5C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004F2C18u); RECOMP_ABI_CALL(0x0001841Du, sub_0001841D); /* call 0x0001841D */

loc_004F2C18: ;
    eax = ebp + 0x4C;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x3C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, edi);
    MEM32(eax) = edi;
    PUSH32(esp, 0x86FA54);
    MEM32(eax) = edi;
    PUSH32(esp, 0x004F2C35u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_004F2C35: ;
    ecx = MEM32(ebp + 0x48);
    eax = ebp + 0x5C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004F2C41u); RECOMP_ABI_CALL(0x0002B90Au, sub_0002B90A); /* call 0x0002B90A */

loc_004F2C41: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x50;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 44; return; /* ret 40 */

}

/**
 * sub_004F2C4B
 * Original: 0x004F2C4B - 0x004F2DF9 (430 bytes, 142 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004F2C4B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004F2C4B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004F2DF2; /* je: equal / zero */

loc_004F2C63: ;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004F2DF2; /* je: equal / zero */

loc_004F2C6C: ;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004F2DF2; /* je: equal / zero */

loc_004F2C75: ;
    _fa = (uint32_t)(MEM32(edi + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x2C), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004F2DF2; /* je: equal / zero */

loc_004F2C7E: ;
    _fa = (uint32_t)(MEM8(esi + 0xCC)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0xCC), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004F2CC5; /* jne: not equal / not zero */

loc_004F2C86: ;
    ecx = MEM32(esi + 0x34);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F2C8Eu); RECOMP_ABI_CALL(0x00558A33u, sub_00558A33); /* call 0x00558A33 */

loc_004F2C8E: ;
    ebx = eax;
    eax = MEM32(esi + 0x120);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004F2CAA; /* je: equal / zero */

loc_004F2C9A: ;
    ecx = ebp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = ebp + -12;
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F2CAAu); RECOMP_ABI_CALL(0x0055A6ACu, sub_0055A6AC); /* call 0x0055A6AC */

loc_004F2CAA: ;
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x38));
    eax = ebp + -12;
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F2CBCu); RECOMP_ABI_CALL(0x0055A7C0u, sub_0055A7C0); /* call 0x0055A7C0 */

loc_004F2CBC: ;
    MEM8(esi + 0xCC) = 1;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004F2CC5: ;
    _fa = (uint32_t)(MEM8(esi + 0x28)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x28), 0 (8-bit) */
    eax = MEM32(edi + 0x2C);
    MEM32(ebp + 8) = ebx;
    MEM32(ebp + -4) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_004F2CEC; /* je: equal / zero */

loc_004F2CD4: ;
    MEM32(ebp + 8) = eax;
    eax = MEM32(edi + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004F2CE1; /* je: equal / zero */

loc_004F2CDE: ;
    MEM32(ebp + 8) = eax;

loc_004F2CE1: ;
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F2CE9u); RECOMP_ABI_CALL(0x005CD07Au, sub_005CD07A); /* call 0x005CD07A */

loc_004F2CE9: ;
    POP32(esp, ecx);
    goto loc_004F2D08;

loc_004F2CEC: ;
    MEM32(ebp + -4) = eax;
    eax = MEM32(edi + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004F2CF9; /* je: equal / zero */

loc_004F2CF6: ;
    MEM32(ebp + -4) = eax;

loc_004F2CF9: ;
    eax = MEM32(ebp + -4);
    edx = eax + 1;

loc_004F2CFF: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004F2CFF; /* jne: not equal / not zero */

loc_004F2D06: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_004F2D08: ;
    xmm0.f[0] = (float)(int32_t)MEM32(edi); /* cvtsi2ss */
    xmm1.f[0] = (float)(int32_t)MEM32(edi + 4); /* cvtsi2ss */
    xmm2 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi); /* addss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esi + 4); /* addss */
    MEM32(ebp + -12) = eax;
    eax = MEM32(edi + 0x18);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -8) = 1;
    if ((_fa == 0)) goto loc_004F2D41; /* je: equal / zero */

loc_004F2D35: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_004F2D41; /* je: equal / zero */

loc_004F2D39: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_004F2D49; /* jne: not equal / not zero */

loc_004F2D3C: ;
    MEM32(ebp + -8) = ebx;
    goto loc_004F2D49;

loc_004F2D41: ;
    xmm0 = XMM_SCALAR(MEMF(0x86FA60)); /* movss */

loc_004F2D49: ;
    SET_LO8(eax, MEM8(edi + 0x27));
    SET_LO8(ecx, MEM8(edi + 0x26));
    SET_LO8(edx, MEM8(edi + 0x25));
    SET_LO8(ebx, MEM8(edi + 0x24));
    MEM8(esi + 0x3C) = LO8(eax);
    eax = esi + 0x40;
    PUSH32(esp, eax);
    eax = ebp + -24;
    PUSH32(esp, eax);
    eax = ebp + -36;
    MEMF(ebp + -36) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(ebp + -24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7C40B8)); /* movss */
    PUSH32(esp, eax);
    MEM8(esi + 0x3F) = LO8(ebx);
    MEM8(esi + 0x3E) = LO8(edx);
    MEM8(esi + 0x3D) = LO8(ecx);
    MEMF(ebp + -32) = xmm3.f[0]; /* movss */
    MEMF(ebp + -28) = xmm2.f[0]; /* movss */
    MEMF(ebp + -20) = xmm1.f[0]; /* movss */
    MEMF(ebp + -16) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F2DA0u); RECOMP_ABI_CALL(0x00018AF8u, sub_00018AF8); /* call 0x00018AF8 */

loc_004F2DA0: ;
    ecx = MEM32(ebp + -12);
    eax = esi + 0xC8;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax) (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_004F2DBB; /* jle: less or equal (signed <=) */

loc_004F2DB0: ;
    MEM32(eax) = ecx;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x38);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F2DBBu); RECOMP_ABI_CALL(0x0055FB52u, sub_0055FB52); /* call 0x0055FB52 */

loc_004F2DBB: ;
    _fa = (uint32_t)(MEM8(esi + 0x28)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x28), 0 (8-bit) */
    eax = esi + 0x80;
    if (CMP_EQ(_fa, _fb)) goto loc_004F2DDC; /* je: equal / zero */

loc_004F2DC7: ;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -8));
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x38));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F2DDAu); RECOMP_ABI_CALL(0x0055FC68u, sub_0055FC68); /* call 0x0055FC68 */

loc_004F2DDA: ;
    goto loc_004F2DEF;

loc_004F2DDC: ;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -8));
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x38));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F2DEFu); RECOMP_ABI_CALL(0x0055FC15u, sub_0055FC15); /* call 0x0055FC15 */

loc_004F2DEF: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004F2DF2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004F2DF9
 * Original: 0x004F2DF9 - 0x004F2E63 (106 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004F2DF9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004F2DF9: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_004F2E19; /* je: equal / zero */

loc_004F2E08: ;
    ecx = MEM32(esi + 0x2C);
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F2E15u); RECOMP_ABI_CALL(0x0055E398u, sub_0055E398); /* call 0x0055E398 */

loc_004F2E15: ;
    MEM32(esi + 0x38) = MEM32(esi + 0x38) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x38)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_004F2E19: ;
    edi = esi + 0x120;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004F2E35; /* je: equal / zero */

loc_004F2E25: ;
    ecx = MEM32(esi + 0x2C);
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F2E32u); RECOMP_ABI_CALL(0x0055D5A6u, sub_0055D5A6); /* call 0x0055D5A6 */

loc_004F2E32: ;
    MEM32(edi) = MEM32(edi) & 0;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_004F2E35: ;
    edi = esi + 0xD0;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004F2E51; /* je: equal / zero */

loc_004F2E41: ;
    ecx = MEM32(esi + 0x2C);
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F2E4Eu); RECOMP_ABI_CALL(0x0055DAC8u, sub_0055DAC8); /* call 0x0055DAC8 */

loc_004F2E4E: ;
    MEM32(edi) = MEM32(edi) & 0;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_004F2E51: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F2E58u); RECOMP_ABI_CALL(0x004F25FBu, sub_004F25FB); /* call 0x004F25FB */

loc_004F2E58: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F2E5Fu); RECOMP_ABI_CALL(0x004F23E7u, sub_004F23E7); /* call 0x004F23E7 */

loc_004F2E5F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004F2E63
 * Original: 0x004F2E63 - 0x004F2E8C (41 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004F2E63(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004F2E63: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x1C);
    PUSH32(esp, 0x004F2E6Eu); RECOMP_ABI_CALL(0x004EEDACu, sub_004EEDAC); /* call 0x004EEDAC */

loc_004F2E6E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 8) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004F2E88; /* jbe: below or equal (unsigned <=) */

loc_004F2E74: ;
    PUSH32(esp, MEM32(esp + 8));
    ecx = MEM32(esi + 0x1C);
    PUSH32(esp, 0x004F2E80u); RECOMP_ABI_CALL(0x004EED2Bu, sub_004EED2B); /* call 0x004EED2B */

loc_004F2E80: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x004F2E88u); RECOMP_ABI_CALL(0x004F2C4Bu, sub_004F2C4B); /* call 0x004F2C4B */

loc_004F2E88: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004F2E8C
 * Original: 0x004F2E8C - 0x004F3026 (410 bytes, 112 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004F2E8C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004F2E8C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    esi = ecx;
    ecx = MEM32(esi + 0x1C);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F2EA2u); RECOMP_ABI_CALL(0x004EEDACu, sub_004EEDAC); /* call 0x004EEDAC */

loc_004F2EA2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004F3020; /* jbe: below or equal (unsigned <=) */

loc_004F2EAA: ;
    ecx = MEM32(esi + 0x1C);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F2EB4u); RECOMP_ABI_CALL(0x004EED2Bu, sub_004EED2B); /* call 0x004EED2B */

loc_004F2EB4: ;
    edi = eax;
    ecx = MEM32(edi + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004F2F59; /* jne: not equal / not zero */

loc_004F2EC1: ;
    eax = MEM32(edi);
    ecx = MEM32(edi + 4);
    MEM32(ebp + 8) = eax;
    eax = 0x260;
    _fb = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xF0 (32-bit) */
    MEM32(ebp + -4) = ecx;
    if (CMP_GE(_fas, _fbs)) goto loc_004F2EE6; /* jge: greater or equal (signed >=) */

loc_004F2EDC: ;
    ebx = 0x1C0;
    _fb = (uint32_t)(MEM32(edi + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - MEM32(edi + 0xC);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_004F2EE9;

loc_004F2EE6: ;
    PUSH32(esp, 0x20);
    POP32(esp, ebx);

loc_004F2EE9: ;
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F2EF1u); RECOMP_ABI_CALL(0x004EF049u, sub_004EF049); /* call 0x004EF049 */

loc_004F2EF1: ;
    PUSH32(esp, ebx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F2EF9u); RECOMP_ABI_CALL(0x004EF052u, sub_004EF052); /* call 0x004EF052 */

loc_004F2EF9: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    PUSH32(esp, MEM32(ebp + 0xC));
    MEMF(ebp + -8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    MEMF(ebp + -12) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AD404)); /* movss */
    ecx = edi;
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xC) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F2F29u); RECOMP_ABI_CALL(0x004EF07Au, sub_004EF07A); /* call 0x004EF07A */

loc_004F2F29: ;
    PUSH32(esp, edi);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F2F31u); RECOMP_ABI_CALL(0x004F2C4Bu, sub_004F2C4B); /* call 0x004F2C4B */

loc_004F2F31: ;
    PUSH32(esp, MEM32(ebp + 8));
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F2F3Bu); RECOMP_ABI_CALL(0x004EF049u, sub_004EF049); /* call 0x004EF049 */

loc_004F2F3B: ;
    PUSH32(esp, MEM32(ebp + -4));
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F2F45u); RECOMP_ABI_CALL(0x004EF052u, sub_004EF052); /* call 0x004EF052 */

loc_004F2F45: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -8)); /* movss */
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -12)); /* movss */
    goto loc_004F301A;

loc_004F2F59: ;
    xmm0 = XMM_SCALAR(MEMF(esi)); /* movss */
    MEMF(ebp + -12) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    eax = ebp + 8;
    MEMF(ebp + -8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    PUSH32(esp, eax);
    eax = ebp + -20;
    MEMF(ebp + -4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    PUSH32(esp, eax);
    MEMF(ebp + -16) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F2F8Du); RECOMP_ABI_CALL(0x00564D86u, sub_00564D86); /* call 0x00564D86 */

loc_004F2F8D: ;
    ecx = MEM32(ebp + 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F2F95u); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_004F2F95: ;
    ecx = MEM32(ebp + 8);
    ebx = MEM32(eax + 0x10);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F2FA0u); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_004F2FA0: ;
    eax = MEM32(eax + 0x14);
    xmm1 = XMM_SCALAR(MEMF(0x86FA68)); /* movss */
    PUSH32(esp, MEM32(ebp + 0xC));
    xmm0.f[0] = (float)(int32_t)ebx; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] - MEMF(0x7A99C0); /* subss */
    MEMF(esi) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x7AD318)); /* movss */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm0 = XMM_SCALAR(MEMF(0x7AD370)); /* movss */
    ecx = edi;
    MEMF(esi + 4) = xmm1.f[0]; /* movss */
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xC) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F2FF0u); RECOMP_ABI_CALL(0x004EF07Au, sub_004EF07A); /* call 0x004EF07A */

loc_004F2FF0: ;
    PUSH32(esp, edi);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F2FF8u); RECOMP_ABI_CALL(0x004F2C4Bu, sub_004F2C4B); /* call 0x004F2C4B */

loc_004F2FF8: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -12)); /* movss */
    MEMF(esi) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -8)); /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -4)); /* movss */
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -16)); /* movss */

loc_004F301A: ;
    MEMF(esi + 0xC) = xmm0.f[0]; /* movss */
    POP32(esp, ebx);

loc_004F3020: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004F307F
 * Original: 0x004F307F - 0x004F3080 (1 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004F307F(void)
{

loc_004F307F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004F3080
 * Original: 0x004F3080 - 0x004F309D (29 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004F3080(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004F3080: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x86FBA8;
    if (TEST_Z(_fa, _fb)) goto loc_004F3097; /* je: equal / zero */

loc_004F3090: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004F3096u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_004F3096: ;
    POP32(esp, ecx);

loc_004F3097: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004F309D
 * Original: 0x004F309D - 0x004F30A8 (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004F309D(void)
{

loc_004F309D: ;
    PUSH32(esp, MEM32(esp + 4));
    PUSH32(esp, 0x004F30A6u); RECOMP_ABI_CALL(0x005A1E5Eu, sub_005A1E5E); /* call 0x005A1E5E */

loc_004F30A6: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004F30A8
 * Original: 0x004F30A8 - 0x004F32C1 (537 bytes, 182 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004F30A8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004F30A8: ;
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
    ecx = MEM32(ebp + 8);
    ebx = MEM32(ecx + 4);
    eax = MEM32(ebx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    MEM32(ebp + -4) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_004F30C8; /* jne: not equal / not zero */

loc_004F30C3: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) & eax;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_004F30CD;

loc_004F30C8: ;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 8) = eax;

loc_004F30CD: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 3 (32-bit) */
    ecx = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_004F31D8; /* jne: not equal / not zero */

loc_004F30D8: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F30DDu); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_004F30DD: ;
    eax = MEM32(eax + 0x18);
    ecx = ebx;
    MEM32(ebp + -8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F30EAu); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_004F30EA: ;
    edi = MEM32(eax + 0x1C);
    eax = MEM32(ebp + -8);
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x60;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x60;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = (uint32_t)((int32_t)edi * (int32_t)eax);
    _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + MEM32(ebp + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F3103u); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_004F3103: ;
    eax = MEM32(eax + 0x18);
    ecx = ebx;
    MEM32(ebp + -8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F3110u); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_004F3110: ;
    eax = MEM32(eax + 0x1C);
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x60;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = MEM32(ebp + -4);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx = eax;
    eax = MEM32(ebp + -8);
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x60;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((1) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)eax);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F3135u); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_004F3135: ;
    eax = MEM32(eax + 0x18);
    ecx = MEM32(ebp + -4);
    eax = eax + eax * 2 + 0x123;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 8) = MEM32(ebp + 8) + eax;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F314Du); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_004F314D: ;
    eax = MEM32(eax + 0x18);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(0x31) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x31;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax + eax * 2;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(3) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi + 0x10);
    ecx = MEM32(esi + eax * 4 + 0x14);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F316Eu); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_004F316E: ;
    eax = MEM32(eax + 0x18);
    MEM32(ebp + -12) = eax;
    eax = MEM32(esi + 0x10);
    eax = MEM32(esi + eax * 4 + 0x14);
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004F3187; /* jne: not equal / not zero */

loc_004F3182: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) & ecx;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_004F318C;

loc_004F3187: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -8) = ecx;

loc_004F318C: ;
    ecx = MEM32(ebp + -4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F3194u); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_004F3194: ;
    eax = MEM32(eax + 0x1C);
    ecx = MEM32(ebp + -4);
    MEM32(ebp + -16) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F31A2u); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_004F31A2: ;
    eax = MEM32(eax + 0x18);
    ecx = MEM32(ebp + -4);
    MEM32(ebp + -20) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F31B0u); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_004F31B0: ;
    ecx = MEM32(esi + 0xA4);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebp + -12));
    PUSH32(esp, MEM32(esi + 0xA8));
    eax = MEM32(eax + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + -8));
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x60;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, MEM32(ebp + -16));
    PUSH32(esp, MEM32(ebp + -20));
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    goto loc_004F328C;

loc_004F31D8: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F31DDu); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_004F31DD: ;
    edi = MEM32(eax + 0x18);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F31E7u); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_004F31E7: ;
    eax = MEM32(eax + 0x1C);
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ebx;
    MEM32(ebp + -4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F31FAu); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_004F31FA: ;
    eax = MEM32(eax + 0x18);
    ecx = ebx;
    MEM32(ebp + -20) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F3207u); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_004F3207: ;
    eax = MEM32(eax + 0x1C);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = eax;
    eax = MEM32(ebp + -20);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edi = (uint32_t)(((int32_t)(int32_t)(edi)) >> ((1) & 31u));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edi = (uint32_t)((int32_t)edi * (int32_t)eax);
    eax = MEM32(esi + 0x10);
    ecx = MEM32(esi + eax * 4 + 0x14);
    _fb = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + MEM32(ebp + -4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F322Bu); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_004F322B: ;
    eax = MEM32(eax + 0x18);
    MEM32(ebp + -20) = eax;
    eax = MEM32(esi + 0x10);
    eax = MEM32(esi + eax * 4 + 0x14);
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004F3244; /* jne: not equal / not zero */

loc_004F323F: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) & ecx;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_004F3249;

loc_004F3244: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -8) = ecx;

loc_004F3249: ;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F3250u); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_004F3250: ;
    eax = MEM32(eax + 0x1C);
    ecx = ebx;
    MEM32(ebp + -16) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F325Du); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_004F325D: ;
    eax = MEM32(eax + 0x18);
    ecx = ebx;
    MEM32(ebp + -12) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F326Au); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_004F326A: ;
    ecx = MEM32(esi + 0xA4);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebp + -20));
    PUSH32(esp, MEM32(esi + 0xA8));
    eax = MEM32(eax + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, MEM32(ebp + -16));
    PUSH32(esp, MEM32(ebp + -12));
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + -4));

loc_004F328C: ;
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F3294u); RECOMP_ABI_CALL(0x004F4563u, sub_004F4563); /* call 0x004F4563 */

loc_004F3294: ;
    eax = MEM32(esi + 0x10);
    ecx = MEM32(esi + 0x98);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, MEM32(esi + eax * 4 + 0x14));
    eax = ebp + 8;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F32ADu); RECOMP_ABI_CALL(0x00564995u, sub_00564995); /* call 0x00564995 */

loc_004F32AD: ;
    MEM32(esi + 0x10) = MEM32(esi + 0x10) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), 2 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004F32BA; /* jb: below (unsigned <) */

loc_004F32B6: ;
    MEM32(esi + 0x10) = MEM32(esi + 0x10) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_004F32BA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004F32C1
 * Original: 0x004F32C1 - 0x004F3326 (101 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004F32C1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004F32C1: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 0x2C); /* mulss */
    MEMF(ebp + -24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 0x30); /* mulss */
    MEMF(ebp + -20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(ebp + -16) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x20)); /* movss */
    MEMF(ebp + -12) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x24)); /* movss */
    MEMF(ebp + -8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x28)); /* movss */
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x50;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    eax = ebp + -12;
    PUSH32(esp, eax);
    eax = ebp + -24;
    PUSH32(esp, eax);
    MEMF(ebp + -4) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F3321u); RECOMP_ABI_CALL(0x00018AF8u, sub_00018AF8); /* call 0x00018AF8 */

loc_004F3321: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004F3326
 * Original: 0x004F3326 - 0x004F3348 (34 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004F3326(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004F3326: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x86FBC0;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004F333C; /* je: equal / zero */

loc_004F3336: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004F333Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004F333Au); } /* indirect call */
    }

loc_004F333C: ;
    MEM32(esi + 0x10) = MEM32(esi + 0x10) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi) = 0x86FBA8;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004F3348
 * Original: 0x004F3348 - 0x004F3386 (62 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004F3348(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004F3348: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 8) = MEM32(esi + 8) + 1;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), 1 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004F3358; /* jl: less (signed <) */

loc_004F3354: ;
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_004F3358: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, MEM32(esp + 8));
    ecx = MEM32(esi + eax * 4 + 0x10);
    PUSH32(esp, 0x004F3368u); RECOMP_ABI_CALL(0x004F30A8u, sub_004F30A8); /* call 0x004F30A8 */

loc_004F3368: ;
    { extern void nhl07_publish_movie_frame(void); nhl07_publish_movie_frame(); } /* audited CPU movie-texture publication */
    PUSH32(esp, MEM32(esp + 8));
    ecx = MEM32(esi + 4);
    PUSH32(esp, 0x004F3376u); RECOMP_ABI_CALL(0x004F0721u, sub_004F0721); /* call 0x004F0721 */

loc_004F3376: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(esi + eax * 4 + 0x10);
    PUSH32(esp, 0x004F3382u); RECOMP_ABI_CALL(0x004F32C1u, sub_004F32C1); /* call 0x004F32C1 */

loc_004F3382: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004F3386
 * Original: 0x004F3386 - 0x004F3392 (12 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004F3386(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004F3386: ;
    eax = MEM32(ecx + 8);
    ecx = MEM32(ecx + eax * 4 + 0x10);
    g_seh_ebp = ebp; sub_004F32C1(); return; /* tail jmp 0x004F32C1 */

}

/**
 * sub_004F3392
 * Original: 0x004F3392 - 0x004F33B9 (39 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004F3392(void)
{

loc_004F3392: ;
    eax = MEM32(ecx + 0x10);
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004F33B9
 * Original: 0x004F33B9 - 0x004F33D5 (28 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004F33B9(void)
{

loc_004F33B9: ;
    eax = MEM32(ecx + 0x10);
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(eax + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(eax + 0x30) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004F33D5
 * Original: 0x004F33D5 - 0x004F3482 (173 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004F33D5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004F33D5: ;
    PUSH32(esp, ebp);
    ebp = esp + -100;
    _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x6C);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x74);
    { uint32_t _sv=(uint32_t)(edi), _sc=(uint32_t)(3) & 31u;
      if (_sc) {
        edi = _sv >> _sc;
        _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)esi);
    PUSH32(esp, 0x40);
    POP32(esp, ebx);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = ebx;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(ebp + 0x6C) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_004F340C; /* je: equal / zero */

loc_004F3400: ;
    eax = ebx;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + 0x6C) = eax;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004F340C: ;
    ecx = ebp + -92;
    PUSH32(esp, 0x004F3414u); RECOMP_ABI_CALL(0x005A72F5u, sub_005A72F5); /* call 0x005A72F5 */

loc_004F3414: ;
    PUSH32(esp, MEM32(ebp + 0x74));
    MEM32(ebp + -88) = 2;
    PUSH32(esp, 0x004F3423u); RECOMP_ABI_CALL(0x005A8788u, sub_005A8788); /* call 0x005A8788 */

loc_004F3423: ;
    MEM32(ebp + -52) = MEM32(ebp + -52) & 0;
    _fa = (uint32_t)(MEM32(ebp + -52)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM8(ebp + -88) = MEM8(ebp + -88) | 0x80;
    _fa = (uint32_t)(MEM8(ebp + -88)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM32(ebp + -72) = eax;
    eax = MEM32(ebp + 0x70);
    MEM32(ebp + -64) = eax;
    eax = ebp + -92;
    PUSH32(esp, eax);
    MEM32(ebp + -68) = esi;
    MEM32(ebp + 0x28) = ebx;
    PUSH32(esp, 0x004F3443u); RECOMP_ABI_CALL(0x005A753Du, sub_005A753D); /* call 0x005A753D */

loc_004F3443: ;
    ecx = MEM32(ebp + 0x7C);
    MEM32(ecx) = eax;
    eax = MEM32(ebp + 0x78);
    eax = eax | 0x400;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, eax);
    eax = ebp + -92;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004F345Au); RECOMP_ABI_CALL(0x005A7D96u, sub_005A7D96); /* call 0x005A7D96 */

loc_004F345A: ;
    ebx = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004F347A; /* je: equal / zero */

loc_004F3463: ;
    eax = MEM32(ebp + 0x6C);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    ecx = ebx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = ZX16(LO16(esi));
    PUSH32(esp, 0x004F3475u); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_004F3475: ;
    MEM32(eax + 0x18) = esi;
    eax = ebx;

loc_004F347A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x64;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004F3482
 * Original: 0x004F3482 - 0x004F39AA (1320 bytes, 384 insns)
 * Category: game_render
 * CC: cdecl, 9 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004F3482(void)
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

loc_004F3482: ;
    PUSH32(esp, ebp);
    ebp = esp + -84;
    _fb = (uint32_t)(0xAC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xAC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0x60);
    edx = MEM32(ebp + 0x7C);
    PUSH32(esp, ebx);
    ebx = ecx;
    MEM32(ebx + 0x3C) = eax;
    eax = MEM32(ebp + 0x64);
    PUSH32(esp, esi);
    MEM32(ebx + 0x40) = eax;
    eax = MEM32(ebp + 0x68);
    PUSH32(esp, edi);
    MEM32(ebx + 0x44) = eax;
    eax = MEM32(ebp + 0x6C);
    MEM32(ebx + 0x48) = eax;
    eax = MEM32(ebp + 0x5C);
    PUSH32(esp, 0x10);
    MEM32(ebx) = 0x86FBD8;
    edi = ebx + 0x50;
    POP32(esp, ecx);
    esi = 0x87DB50;
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
    ecx = MEM32(eax + 4);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ebx + 0x9C;
    MEM32(edi) = esi;
    MEM32(ebx + 0x90) = esi;
    MEM32(ebx + 0x10) = esi;
    MEM32(ebx + 0xA0) = edx;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    MEM32(ebp + 0x60) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_004F34EF; /* jne: not equal / not zero */

loc_004F34E9: ;
    MEM8(ebx + 0x1C) = 1;
    goto loc_004F34F3;

loc_004F34EF: ;
    MEM8(ebx + 0x1C) = 0;

loc_004F34F3: ;
    PUSH32(esp, 0x004F34F8u); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_004F34F8: ;
    eax = MEM32(eax + 0x18);
    ecx = MEM32(ebp + 0x60);
    MEM32(ebp + 0x48) = eax;
    PUSH32(esp, 0x004F3506u); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_004F3506: ;
    eax = MEM32(eax + 0x1C);
    ecx = MEM32(ebx + 0x3C);
    MEM32(ebp + 0x5C) = eax;
    eax = ebp + 0x6C;
    PUSH32(esp, eax);
    eax = ebp + 0x60;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004F351Cu); RECOMP_ABI_CALL(0x0055D4AAu, sub_0055D4AA); /* call 0x0055D4AA */

loc_004F351C: ;
    ecx = MEM32(ebp + 0x6C);
    PUSH32(esp, 0x004F3524u); RECOMP_ABI_CALL(0x00561417u, sub_00561417); /* call 0x00561417 */

loc_004F3524: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + 0x60) = eax;
    fp_push((double)SMEM32(ebp + 0x60)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_004F3534; /* jge: greater or equal (signed >=) */

loc_004F352E: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7B8E10)); /* fadd dword ptr [0x7b8e10] */

loc_004F3534: ;
    ecx = MEM32(ebp + 0x6C);
    MEMF(ebp + 0x60) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x004F353Fu); RECOMP_ABI_CALL(0x0056141Bu, sub_0056141B); /* call 0x0056141B */

loc_004F353F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + 0x68) = eax;
    fp_push((double)SMEM32(ebp + 0x68)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_004F354F; /* jge: greater or equal (signed >=) */

loc_004F3549: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7B8E10)); /* fadd dword ptr [0x7b8e10] */

loc_004F354F: ;
    xmm1.f[0] = (float)(int32_t)MEM32(ebp + 0x48); /* cvtsi2ss */
    MEMF(ebp + 0x68) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(0x7AA820)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(ebp + 0x60)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(ebp + 0x68)); /* movss */
    eax = MEM32(ebp + 0x7C);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ebx + 0x20) = xmm2.f[0]; /* movss */
    xmm2.f[0] = (float)(int32_t)MEM32(ebp + 0x5C); /* cvtsi2ss */
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(ebx + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(ebp + 0x40) = xmm1.f[0]; /* movss */
    MEMF(ebp + 0x50) = xmm2.f[0]; /* movss */
    MEMF(ebx + 0x24) = xmm3.f[0]; /* movss */
    MEMF(ebx + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(ebx + 0x30) = xmm0.f[0]; /* movss */
    MEMF(ebx + 0x34) = xmm1.f[0]; /* movss */
    MEMF(ebx + 0x38) = xmm2.f[0]; /* movss */
    if ((_fa == 0)) goto loc_004F3600; /* je: equal / zero */

loc_004F35BC: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_004F35E8; /* je: equal / zero */

loc_004F35BF: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebx + 0xA4) = 2;
    MEM32(ebp + 0x60) = 0x10;
    if ((_fa == 0)) goto loc_004F35DC; /* je: equal / zero */

loc_004F35D3: ;
    MEM32(ebx + 0xA8) = esi;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_004F361B;

loc_004F35DC: ;
    MEM32(ebx + 0xA8) = 3;
    goto loc_004F361B;

loc_004F35E8: ;
    PUSH32(esp, 2);
    POP32(esp, eax);
    MEM32(ebp + 0x60) = 0xF;
    MEM32(ebx + 0xA4) = eax;
    MEM32(ebx + 0xA8) = eax;
    goto loc_004F361B;

loc_004F3600: ;
    MEM32(ebp + 0x60) = 0x20;
    MEM32(ebx + 0xA4) = 4;
    MEM32(ebx + 0xA8) = 1;

loc_004F361B: ;
    MEM32(ebp + 0x44) = esi;
    MEM32(ebp + 0x68) = 0x14;

loc_004F3625: ;
    eax = ebp + 0x44;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(0x8D7E98));
    PUSH32(esp, MEM32(ebp + 0x60));
    PUSH32(esp, MEM32(ebp + 0x5C));
    PUSH32(esp, MEM32(ebp + 0x48));
    PUSH32(esp, 0x004F363Du); RECOMP_ABI_CALL(0x004F33D5u, sub_004F33D5); /* call 0x004F33D5 */

loc_004F363D: ;
    ecx = MEM32(ebp + 0x68);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0x68) = MEM32(ebp + 0x68) + 4;
    _fa = (uint32_t)(MEM32(ebp + 0x68)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + 0x68)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x68), 0x1C (32-bit) */
    MEM32(ecx + ebx) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_004F3625; /* jl: less (signed <) */

loc_004F3650: ;
    _fa = (uint32_t)(MEM32(ebp + 0x7C)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x7C), 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004F367B; /* jne: not equal / not zero */

loc_004F3656: ;
    eax = ebx + 0x14;
    MEM32(ebp + 0x7C) = eax;
    MEM32(ebp + 0x60) = 2;

loc_004F3663: ;
    eax = MEM32(ebp + 0x7C);
    ecx = MEM32(eax);
    PUSH32(esp, 2);
    PUSH32(esp, 0x004F366Fu); RECOMP_ABI_CALL(0x005A1F7Au, sub_005A1F7A); /* call 0x005A1F7A */

loc_004F366F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0x7C) = MEM32(ebp + 0x7C) + 4;
    _fa = (uint32_t)(MEM32(ebp + 0x7C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x60) = MEM32(ebp + 0x60) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0x60)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM8(eax) = 0x68;
    if ((_fa != 0)) goto loc_004F3663; /* jne: not equal / not zero */

loc_004F367B: ;
    ecx = ebp + -88;
    PUSH32(esp, 0x004F3683u); RECOMP_ABI_CALL(0x0056A600u, sub_0056A600); /* call 0x0056A600 */

loc_004F3683: ;
    _fa = (uint32_t)(MEM8(ebx + 0x1C)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx + 0x1C), 0 (8-bit) */
    xmm3 = XMM_SCALAR(MEMF(ebp + 0x40)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004F369B; /* je: equal / zero */

loc_004F3691: ;
    xmm1 = XMM_SCALAR(MEMF(ebp + 0x50)); /* movss */
    xmm2 = xmm0; /* movaps */
    goto loc_004F36A3;

loc_004F369B: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm2 = XMM_SCALAR(MEMF(ebp + 0x50)); /* movss */

loc_004F36A3: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0x86FADC);
    MEMF(0x910468) = xmm0.f[0]; /* movss */
    MEMF(0x91046C) = xmm1.f[0]; /* movss */
    MEMF(0x910470) = xmm0.f[0]; /* movss */
    MEMF(0x910474) = xmm2.f[0]; /* movss */
    MEMF(0x910478) = xmm3.f[0]; /* movss */
    MEMF(0x91047C) = xmm1.f[0]; /* movss */
    MEMF(0x910480) = xmm3.f[0]; /* movss */
    MEMF(0x910484) = xmm2.f[0]; /* movss */
    PUSH32(esp, 0x004F36F0u); RECOMP_ABI_CALL(0x005725B8u, sub_005725B8); /* call 0x005725B8 */

loc_004F36F0: ;
    eax = ebp + 0x7C;
    PUSH32(esp, eax);
    ecx = ebp + -88;
    PUSH32(esp, 0x004F36FCu); RECOMP_ABI_CALL(0x0056798Eu, sub_0056798E); /* call 0x0056798E */

loc_004F36FC: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x30);
    PUSH32(esp, 0x8D7FB8);
    PUSH32(esp, 0x86FAE8);
    eax = ebp + 0x7C;
    PUSH32(esp, eax);
    ecx = ebp + -88;
    PUSH32(esp, 0x004F3716u); RECOMP_ABI_CALL(0x00568296u, sub_00568296); /* call 0x00568296 */

loc_004F3716: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x910468);
    PUSH32(esp, 0x86FAF0);
    eax = ebp + 0x7C;
    PUSH32(esp, eax);
    ecx = ebp + -88;
    PUSH32(esp, 0x004F372Fu); RECOMP_ABI_CALL(0x00568296u, sub_00568296); /* call 0x00568296 */

loc_004F372F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 4);
    PUSH32(esp, 0x8D7FE8);
    PUSH32(esp, 0x86FAF4);
    eax = ebp + 0x7C;
    PUSH32(esp, eax);
    ecx = ebp + -88;
    PUSH32(esp, 0x004F3748u); RECOMP_ABI_CALL(0x00568296u, sub_00568296); /* call 0x00568296 */

loc_004F3748: ;
    PUSH32(esp, MEM32(ebp + 0x70));
    eax = ebp + 0x7C;
    PUSH32(esp, eax);
    ecx = ebp + -88;
    PUSH32(esp, 0x004F3757u); RECOMP_ABI_CALL(0x0056A770u, sub_0056A770); /* call 0x0056A770 */

loc_004F3757: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x8D7FEC);
    PUSH32(esp, 0x86FAFC);
    eax = ebp + 0x7C;
    PUSH32(esp, eax);
    ecx = ebp + -88;
    PUSH32(esp, 0x004F376Fu); RECOMP_ABI_CALL(0x0056A304u, sub_0056A304); /* call 0x0056A304 */

loc_004F376F: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x8D8004);
    PUSH32(esp, 0x86FB0C);
    eax = ebp + 0x7C;
    PUSH32(esp, eax);
    ecx = ebp + -88;
    PUSH32(esp, 0x004F3787u); RECOMP_ABI_CALL(0x0056A304u, sub_0056A304); /* call 0x0056A304 */

loc_004F3787: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x910450);
    PUSH32(esp, 0x86FB18);
    eax = ebp + 0x7C;
    PUSH32(esp, eax);
    ecx = ebp + -88;
    PUSH32(esp, 0x004F379Fu); RECOMP_ABI_CALL(0x0056A304u, sub_0056A304); /* call 0x0056A304 */

loc_004F379F: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x8D801C);
    PUSH32(esp, 0x86FB28);
    eax = ebp + 0x7C;
    PUSH32(esp, eax);
    ecx = ebp + -88;
    PUSH32(esp, 0x004F37B7u); RECOMP_ABI_CALL(0x005682CDu, sub_005682CD); /* call 0x005682CD */

loc_004F37B7: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x8D8020);
    PUSH32(esp, 0x86FB30);
    eax = ebp + 0x7C;
    PUSH32(esp, eax);
    ecx = ebp + -88;
    PUSH32(esp, 0x004F37CFu); RECOMP_ABI_CALL(0x005682CDu, sub_005682CD); /* call 0x005682CD */

loc_004F37CF: ;
    PUSH32(esp, 0x86FB3C);
    PUSH32(esp, 0x86FB50);
    eax = ebp + 0x7C;
    PUSH32(esp, eax);
    ecx = ebp + -88;
    PUSH32(esp, 0x004F37E5u); RECOMP_ABI_CALL(0x0056A352u, sub_0056A352); /* call 0x0056A352 */

loc_004F37E5: ;
    eax = ebp + 0x7C;
    PUSH32(esp, eax);
    ecx = ebp + -88;
    PUSH32(esp, 0x004F37F1u); RECOMP_ABI_CALL(0x005679BBu, sub_005679BB); /* call 0x005679BB */

loc_004F37F1: ;
    PUSH32(esp, edi);
    eax = ebp + 0x7C;
    PUSH32(esp, eax);
    ecx = ebp + -88;
    PUSH32(esp, 0x004F37FEu); RECOMP_ABI_CALL(0x0056973Eu, sub_0056973E); /* call 0x0056973E */

loc_004F37FE: ;
    eax = ebp + 0x4C;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx + 0x44));
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0x86FB5C);
    PUSH32(esp, 0x004F3813u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_004F3813: ;
    eax = ebp + 0x7C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004F381Cu); RECOMP_ABI_CALL(0x00572F47u, sub_00572F47); /* call 0x00572F47 */

loc_004F381C: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebx + 0x2C); /* mulss */
    MEMF(ebp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebx + 0x30); /* mulss */
    MEMF(ebp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    eax = ebx + 0x50;
    PUSH32(esp, eax);
    MEMF(ebp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x20)); /* movss */
    eax = ebp + 0x30;
    MEMF(ebp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x24)); /* movss */
    PUSH32(esp, eax);
    eax = ebp + 0x24;
    MEMF(ebp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x28)); /* movss */
    PUSH32(esp, eax);
    MEMF(ebp + 0x38) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x004F3876u); RECOMP_ABI_CALL(0x00018AF8u, sub_00018AF8); /* call 0x00018AF8 */

loc_004F3876: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ebp + 0x3C;
    PUSH32(esp, eax);
    eax = ebx + 0x50;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, esi);
    MEM32(eax) = esi;
    PUSH32(esp, 0x86FB68);
    MEM32(eax) = esi;
    PUSH32(esp, 0x004F3896u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_004F3896: ;
    ecx = MEM32(ebp + 0x4C);
    eax = ebp + 0x7C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004F38A2u); RECOMP_ABI_CALL(0x0001841Du, sub_0001841D); /* call 0x0001841D */

loc_004F38A2: ;
    eax = ebp + 0x3C;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(edi));
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, esi);
    MEM32(eax) = esi;
    PUSH32(esp, 0x86FB74);
    MEM32(eax) = esi;
    PUSH32(esp, 0x004F38BDu); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_004F38BD: ;
    ecx = MEM32(ebp + 0x4C);
    eax = ebp + 0x7C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004F38C9u); RECOMP_ABI_CALL(0x00028D5Eu, sub_00028D5E); /* call 0x00028D5E */

loc_004F38C9: ;
    eax = ebx + 0x14;
    MEM32(ebp + 0x7C) = eax;
    MEM32(ebp + 0x60) = 2;

loc_004F38D6: ;
    eax = MEM32(ebp + 0x7C);
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004F38EF; /* je: equal / zero */

loc_004F38DF: ;
    PUSH32(esp, MEM32(ebp + 0x44));
    ecx = MEM32(ebp + 0x64);
    PUSH32(esp, eax);
    eax = ebp + 0x68;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004F38EFu); RECOMP_ABI_CALL(0x00022F12u, sub_00022F12); /* call 0x00022F12 */

loc_004F38EF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0x7C) = MEM32(ebp + 0x7C) + 4;
    _fa = (uint32_t)(MEM32(ebp + 0x7C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x60) = MEM32(ebp + 0x60) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0x60)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_004F38D6; /* jne: not equal / not zero */

loc_004F38F8: ;
    ecx = MEM32(ebx + 0x3C);
    eax = ebx + 0x98;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebx + 0x14));
    eax = ebp + 0x7C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004F390Fu); RECOMP_ABI_CALL(0x0055D9F6u, sub_0055D9F6); /* call 0x0055D9F6 */

loc_004F390F: ;
    _fa = (uint32_t)(MEM32(ebx + 0x98)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x98), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004F3968; /* je: equal / zero */

loc_004F3917: ;
    PUSH32(esp, 0x86FB80);
    ecx = ebp + 0x7C;
    PUSH32(esp, 0x004F3924u); RECOMP_ABI_CALL(0x005725B8u, sub_005725B8); /* call 0x005725B8 */

loc_004F3924: ;
    eax = ebx + 0x90;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx + 0x98));
    eax = ebp + 0x7C;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004F393Du); RECOMP_ABI_CALL(0x0002D9EEu, sub_0002D9EE); /* call 0x0002D9EE */

loc_004F393D: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0x86FB94);
    PUSH32(esp, 0x004F394Bu); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_004F394B: ;
    ecx = MEM32(ebx + 0x44);
    eax = ebp + 0x64;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004F3957u); RECOMP_ABI_CALL(0x00023F34u, sub_00023F34); /* call 0x00023F34 */

loc_004F3957: ;
    _fa = (uint32_t)(MEM8(ebp + 0x7C)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x7C), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004F3960; /* je: equal / zero */

loc_004F395D: ;
    MEM32(ebp + 0x7C) = esi;

loc_004F3960: ;
    ecx = ebp + 0x7C;
    PUSH32(esp, 0x004F3968u); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_004F3968: ;
    ecx = MEM32(ebx + 0x48);
    PUSH32(esp, 0x004F3970u); RECOMP_ABI_CALL(0x00558A33u, sub_00558A33); /* call 0x00558A33 */

loc_004F3970: ;
    ecx = ebx + 0x94;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(edi));
    ecx = ebp + 0x7C;
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x004F3984u); RECOMP_ABI_CALL(0x0055A6ACu, sub_0055A6AC); /* call 0x0055A6AC */

loc_004F3984: ;
    eax = MEM32(ebx + 0x98);
    ecx = MEM32(ebp + 0x74);
    MEM32(ecx) = eax;
    eax = MEM32(edi);
    ecx = MEM32(ebp + 0x78);
    MEM32(ecx) = eax;
    ecx = ebp + -88;
    PUSH32(esp, 0x004F399Eu); RECOMP_ABI_CALL(0x0056A677u, sub_0056A677); /* call 0x0056A677 */

loc_004F399E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x54;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 40; return; /* ret 36 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_004F39AA
 * Original: 0x004F39AA - 0x004F3A36 (140 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004F39AA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004F39AA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esi) = 0x86FBD8;
    edi = esi + 0x14;
    MEM32(ebp + -4) = 2;

loc_004F39C3: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004F39E0; /* je: equal / zero */

loc_004F39C9: ;
    ecx = MEM32(esi + 0x40);
    PUSH32(esp, 0);
    PUSH32(esp, 0x4F309D);
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F39DDu); RECOMP_ABI_CALL(0x00018161u, sub_00018161); /* call 0x00018161 */

loc_004F39DD: ;
    MEM32(edi) = MEM32(edi) & 0;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_004F39E0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -4) = MEM32(ebp + -4) - 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_004F39C3; /* jne: not equal / not zero */

loc_004F39E8: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x86FB9C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F39F7u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_004F39F7: ;
    ecx = MEM32(esi + 0x44);
    eax = ebp + -8;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F3A03u); RECOMP_ABI_CALL(0x00572BEEu, sub_00572BEE); /* call 0x00572BEE */

loc_004F3A03: ;
    eax = MEM32(esi + 0x90);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004F3A19; /* je: equal / zero */

loc_004F3A0D: ;
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F3A17u); RECOMP_ABI_CALL(0x005737B4u, sub_005737B4); /* call 0x005737B4 */

loc_004F3A17: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_004F3A19: ;
    ecx = MEM32(esi + 0x48);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F3A21u); RECOMP_ABI_CALL(0x00558A33u, sub_00558A33); /* call 0x00558A33 */

loc_004F3A21: ;
    PUSH32(esp, MEM32(esi + 0x94));
    ecx = ebp + -8;
    PUSH32(esp, ecx);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F3A32u); RECOMP_ABI_CALL(0x005599F1u, sub_005599F1); /* call 0x005599F1 */

loc_004F3A32: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004F3A36
 * Original: 0x004F3A36 - 0x004F3AAB (117 bytes, 45 insns)
 * CC: cdecl, 10 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004F3A36(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004F3A36: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    MEM32(esi + 4) = eax;
    MEM32(esi) = 0x86FBC0;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004F3A58; /* jne: not equal / not zero */

loc_004F3A53: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F3A58u); RECOMP_ABI_CALL(0x004F48F3u, sub_004F48F3); /* call 0x004F48F3 */

loc_004F3A58: ;
    eax = MEM32(ebp + 0x2C);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_004F3A62; /* je: equal / zero */

loc_004F3A5E: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_004F3A62; /* je: equal / zero */

loc_004F3A61: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_004F3A62: ;
    PUSH32(esp, 0xB0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F3A6Cu); RECOMP_ABI_CALL(0x004F3AE5u, sub_004F3AE5); /* call 0x004F3AE5 */

loc_004F3A6C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004F3A93; /* je: equal / zero */

loc_004F3A71: ;
    PUSH32(esp, MEM32(ebp + 0x2C));
    ecx = eax;
    PUSH32(esp, MEM32(ebp + 0x28));
    PUSH32(esp, MEM32(ebp + 0x24));
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F3A91u); RECOMP_ABI_CALL(0x004F3482u, sub_004F3482); /* call 0x004F3482 */

loc_004F3A91: ;
    goto loc_004F3A95;

loc_004F3A93: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004F3A95: ;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, edi);
    MEM32(esi + 0xC) = 1;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 44; return; /* ret 40 */

}

/**
 * sub_004F3AAB
 * Original: 0x004F3AAB - 0x004F3AE5 (58 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004F3AAB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004F3AAB: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x14);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F3AB5u); RECOMP_ABI_CALL(0x004F3B3Fu, sub_004F3B3F); /* call 0x004F3B3F */

loc_004F3AB5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004F3AE1; /* je: equal / zero */

loc_004F3ABA: ;
    PUSH32(esp, MEM32(ebp + 0x2C));
    ecx = eax;
    PUSH32(esp, MEM32(ebp + 0x28));
    PUSH32(esp, MEM32(ebp + 0x24));
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F3ADFu); RECOMP_ABI_CALL(0x004F3A36u, sub_004F3A36); /* call 0x004F3A36 */

loc_004F3ADF: ;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_004F3AE1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_004F3AE5
 * Original: 0x004F3AE5 - 0x004F3B02 (29 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004F3AE5(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004F3AE5: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(0x8D7E98));
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x7B891F);
    { uint32_t _icall_target = MEM32(0x8D7E90); PUSH32(esp, 0x004F3AFEu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x004F3AF8u); } /* indirect call */
    }

loc_004F3AFE: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_004F3B3F
 * Original: 0x004F3B3F - 0x004F3B5C (29 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004F3B3F(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004F3B3F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(0x8D7E98));
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x7B891F);
    { uint32_t _icall_target = MEM32(0x8D7E90); PUSH32(esp, 0x004F3B58u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x004F3B52u); } /* indirect call */
    }

loc_004F3B58: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_004F3B5C
 * Original: 0x004F3B5C - 0x004F3B79 (29 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004F3B5C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004F3B5C: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004F3B64u); RECOMP_ABI_CALL(0x004F3326u, sub_004F3326); /* call 0x004F3326 */

loc_004F3B64: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004F3B73; /* je: equal / zero */

loc_004F3B6B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x8D7E94); PUSH32(esp, 0x004F3B72u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004F3B6Cu); } /* indirect call */
    }

loc_004F3B72: ;
    POP32(esp, ecx);

loc_004F3B73: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004F3B79
 * Original: 0x004F3B79 - 0x004F3B96 (29 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004F3B79(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004F3B79: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004F3B81u); RECOMP_ABI_CALL(0x004F39AAu, sub_004F39AA); /* call 0x004F39AA */

loc_004F3B81: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004F3B90; /* je: equal / zero */

loc_004F3B88: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x8D7E94); PUSH32(esp, 0x004F3B8Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004F3B89u); } /* indirect call */
    }

loc_004F3B8F: ;
    POP32(esp, ecx);

loc_004F3B90: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004F3BA8
 * Original: 0x004F3BA8 - 0x004F3C13 (107 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004F3BA8(void)
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

loc_004F3BA8: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x94) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x94;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0x10);
    MEM32(ebp + -72) = MEM32(ebp + -72) & 0;
    _fa = (uint32_t)(MEM32(ebp + -72)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = eax + 1;

loc_004F3BBB: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004F3BBB; /* jne: not equal / not zero */

loc_004F3BC2: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = eax;
    if ((_fa == 0)) goto loc_004F3C0B; /* je: equal / zero */

loc_004F3BC8: ;
    PUSH32(esp, edi);
    fp_push(1.0); /* fld1 */
    PUSH32(esp, 0x13);
    POP32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 0x10));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + -72) = MEM32(ebp + -72) & eax;
    _fa = (uint32_t)(MEM32(ebp + -72)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = ebp + -148;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 8);
    eax = ebp + -72;
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(1.0); /* fld1 */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    eax = ebp + -148;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F3BFFu); RECOMP_ABI_CALL(0x005B3857u, sub_005B3857); /* call 0x005B3857 */

loc_004F3BFF: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ebp + -128); /* comiss */
    POP32(esp, edi);
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_004F3C0F; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ebp + -128)) */

loc_004F3C0B: ;
    SET_LO8(eax, 1);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_004F3C0F: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_004F3C13
 * Original: 0x004F3C13 - 0x004F3C7B (104 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004F3C13(void)
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

loc_004F3C13: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x94) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x94;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, MEM32(ebp + 0x10));
    MEM32(ebp + -72) = MEM32(ebp + -72) & 0;
    _fa = (uint32_t)(MEM32(ebp + -72)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F3C28u); RECOMP_ABI_CALL(0x005CD07Au, sub_005CD07A); /* call 0x005CD07A */

loc_004F3C28: ;
    edx = eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004F3C73; /* je: equal / zero */

loc_004F3C2F: ;
    PUSH32(esp, edi);
    fp_push(1.0); /* fld1 */
    PUSH32(esp, 0x13);
    MEM32(ebp + -72) = MEM32(ebp + -72) & 0;
    _fa = (uint32_t)(MEM32(ebp + -72)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 0x10));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ebp + -148;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 8);
    eax = ebp + -72;
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(1.0); /* fld1 */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    eax = ebp + -148;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F3C67u); RECOMP_ABI_CALL(0x005B388Au, sub_005B388A); /* call 0x005B388A */

loc_004F3C67: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ebp + -128); /* comiss */
    POP32(esp, edi);
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_004F3C77; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ebp + -128)) */

loc_004F3C73: ;
    SET_LO8(eax, 1);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_004F3C77: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_004F3C7B
 * Original: 0x004F3C7B - 0x004F3C9B (32 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004F3C7B(void)
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

loc_004F3C7B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, MEM32(ebp + 0x18));
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F3C96u); RECOMP_ABI_CALL(0x004F3D2Fu, sub_004F3D2F); /* call 0x004F3D2F */

loc_004F3C96: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_004F3C9B
 * Original: 0x004F3C9B - 0x004F3CBB (32 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004F3C9B(void)
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

loc_004F3C9B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, MEM32(ebp + 0x18));
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F3CB6u); RECOMP_ABI_CALL(0x004F3F14u, sub_004F3F14); /* call 0x004F3F14 */

loc_004F3CB6: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_004F3CBB
 * Original: 0x004F3CBB - 0x004F3CD2 (23 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004F3CBB(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004F3CBB: ;
    edx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004F3CC1: ;
    SET_LO8(ecx, MEM8(edx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(MEM8(esp + 8)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), MEM8(esp + 8) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004F3CCA; /* jne: not equal / not zero */

loc_004F3CC9: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_004F3CCA: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004F3CD1; /* je: equal / zero */

loc_004F3CCE: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_004F3CC1;

loc_004F3CD1: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004F3CD2
 * Original: 0x004F3CD2 - 0x004F3CF1 (31 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004F3CD2(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004F3CD2: ;
    ecx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004F3CD8: ;
    SET_LO8(edx, MEM8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(esp + 8)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(esp + 8) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004F3CE8; /* jne: not equal / not zero */

loc_004F3CE0: ;
    edx = MEM32(esp + 0xC);
    MEM32(edx + eax * 4) = ecx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_004F3CE8: ;
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004F3CF0; /* je: equal / zero */

loc_004F3CED: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_004F3CD8;

loc_004F3CF0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004F3CF1
 * Original: 0x004F3CF1 - 0x004F3D0C (27 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004F3CF1(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004F3CF1: ;
    edx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004F3CF7: ;
    SET_LO16(ecx, MEM16(edx));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(esp + 8)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), MEM16(esp + 8) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004F3D02; /* jne: not equal / not zero */

loc_004F3D01: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_004F3D02: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004F3D0B; /* je: equal / zero */

loc_004F3D07: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_004F3CF7;

loc_004F3D0B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004F3D0C
 * Original: 0x004F3D0C - 0x004F3D2F (35 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004F3D0C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004F3D0C: ;
    ecx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004F3D12: ;
    SET_LO16(edx, MEM16(ecx));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(esp + 8)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), MEM16(esp + 8) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004F3D24; /* jne: not equal / not zero */

loc_004F3D1C: ;
    edx = MEM32(esp + 0xC);
    MEM32(edx + eax * 4) = ecx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_004F3D24: ;
    _fa = (uint32_t)(MEM16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004F3D2E; /* je: equal / zero */

loc_004F3D2A: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_004F3D12;

loc_004F3D2E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004F3D2F
 * Original: 0x004F3D2F - 0x004F3F14 (485 bytes, 187 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004F3D2F(void)
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

loc_004F3D2F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x10);
    eax = edi;
    edx = eax + 1;

loc_004F3D40: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004F3D40; /* jne: not equal / not zero */

loc_004F3D47: ;
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, MEM32(ebp + 8));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = eax + 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F3D5Cu); RECOMP_ABI_CALL(0x004F3BA8u, sub_004F3BA8); /* call 0x004F3BA8 */

loc_004F3D5C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004F3D73; /* je: equal / zero */

loc_004F3D63: ;
    eax = MEM32(ebp + 0x14);
    MEM32(eax) = edi;
    eax = MEM32(ebp + 0x18);
    MEM8(eax) = 0;
    goto loc_004F3F0C;

loc_004F3D73: ;
    eax = esi + esi;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F3D81u); RECOMP_ABI_CALL(0x005CC470u, sub_005CC470); /* call 0x005CC470 */

loc_004F3D81: ;
    ebx = esp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    MEM32(ebp + -28) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F3D8Eu); RECOMP_ABI_CALL(0x0059EADCu, sub_0059EADC); /* call 0x0059EADC */

loc_004F3D8E: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F3D96u); RECOMP_ABI_CALL(0x004F3CBBu, sub_004F3CBB); /* call 0x004F3CBB */

loc_004F3D96: ;
    MEM32(ebp + -8) = eax;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F3DAAu); RECOMP_ABI_CALL(0x005CC470u, sub_005CC470); /* call 0x005CC470 */

loc_004F3DAA: ;
    esi = esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0x20);
    PUSH32(esp, ebx);
    MEM32(ebp + -20) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F3DB8u); RECOMP_ABI_CALL(0x004F3CD2u, sub_004F3CD2); /* call 0x004F3CD2 */

loc_004F3DB8: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + -16) = edi;

loc_004F3DC0: ;
    MEM32(ebp + -12) = edi;
    goto loc_004F3DCB;

loc_004F3DC5: ;
    edi = MEM32(ebp + -12);
    esi = MEM32(ebp + -20);

loc_004F3DCB: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebp + -8) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_004F3DD6; /* jae: above or equal (unsigned >=) */

loc_004F3DD0: ;
    eax = MEM32(esi + edi * 4);
    MEM8(eax) = 0;

loc_004F3DD6: ;
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    MEM32(ebp + -16) = MEM32(ebp + -16) + 1;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F3DE9u); RECOMP_ABI_CALL(0x004F3BA8u, sub_004F3BA8); /* call 0x004F3BA8 */

loc_004F3DE9: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004F3E02; /* je: equal / zero */

loc_004F3DF0: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebp + -8) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_004F3ECC; /* jae: above or equal (unsigned >=) */

loc_004F3DF9: ;
    eax = MEM32(esi + edi * 4);
    MEM8(eax) = 0x20;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_004F3DC0;

loc_004F3E02: ;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004F3EAC; /* jne: not equal / not zero */

loc_004F3E0C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebp + -8) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_004F3E17; /* jae: above or equal (unsigned >=) */

loc_004F3E11: ;
    eax = MEM32(esi + edi * 4);
    MEM8(eax) = 0x20;

loc_004F3E17: ;
    eax = ebx;
    edx = eax + 1;

loc_004F3E1C: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004F3E1C; /* jne: not equal / not zero */

loc_004F3E23: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = eax + 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    MEM32(ebp + -24) = edi;
    if (CMP_BE(_fa, _fb)) goto loc_004F3DC5; /* jbe: below or equal (unsigned <=) */

loc_004F3E32: ;
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    SET_LO8(eax, MEM8(edi + ebx));
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, MEM32(ebp + 8));
    MEM8(ebp + -1) = LO8(eax);
    MEM8(edi + ebx) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F3E4Cu); RECOMP_ABI_CALL(0x004F3BA8u, sub_004F3BA8); /* call 0x004F3BA8 */

loc_004F3E4C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    SET_LO8(eax, MEM8(ebp + -1));
    if (CMP_EQ(_fa, _fb)) goto loc_004F3E66; /* je: equal / zero */

loc_004F3E56: ;
    MEM8(edi + ebx) = LO8(eax);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    MEM32(ebp + -24) = edi;
    if (CMP_B(_fa, _fb)) goto loc_004F3E32; /* jb: below (unsigned <) */

loc_004F3E61: ;
    goto loc_004F3DC5;

loc_004F3E66: ;
    _fb = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - MEM32(ebp + -24);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(edi) = LO8(eax);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = edi + -1;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F3E79u); RECOMP_ABI_CALL(0x0059EAA4u, sub_0059EAA4); /* call 0x0059EAA4 */

loc_004F3E79: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -24), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004F3E8A; /* jne: not equal / not zero */

loc_004F3E82: ;
    MEM8(ebx + 1) = 0xA;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_004F3E90;

loc_004F3E8A: ;
    MEM8(edi + -1) = 0xA;
    ebx = edi;

loc_004F3E90: ;
    ecx = MEM32(ebp + -12);
    goto loc_004F3E9E;

loc_004F3E95: ;
    eax = MEM32(ebp + -20);
    eax = eax + ecx * 4;
    MEM32(eax) = MEM32(eax) + 1;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_004F3E9E: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + -8) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004F3E95; /* jb: below (unsigned <) */

loc_004F3EA3: ;
    MEM32(ebp + -16) = MEM32(ebp + -16) & 0;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_004F3DC5;

loc_004F3EAC: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebp + -8) (32-bit) */
    eax = esi + edi * 4 + -4;
    ecx = MEM32(eax);
    MEM8(ecx) = 0xA;
    if (CMP_AE(_fa, _fb)) goto loc_004F3EC0; /* jae: above or equal (unsigned >=) */

loc_004F3EBA: ;
    ecx = MEM32(esi + edi * 4);
    MEM8(ecx) = 0x20;

loc_004F3EC0: ;
    ebx = MEM32(eax);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -16) = MEM32(ebp + -16) & 0;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_004F3DCB;

loc_004F3ECC: ;
    eax = MEM32(ebp + -28);
    ecx = eax + 1;

loc_004F3ED2: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004F3ED2; /* jne: not equal / not zero */

loc_004F3ED9: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(0x8D7E98));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0);
    esi = eax + 1;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x86FBDC);
    { uint32_t _icall_target = MEM32(0x8D7E90); PUSH32(esp, 0x004F3EF4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004F3EEEu); } /* indirect call */
    }

loc_004F3EF4: ;
    ecx = MEM32(ebp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + -28));
    MEM32(ecx) = eax;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F3F03u); RECOMP_ABI_CALL(0x0059EADCu, sub_0059EADC); /* call 0x0059EADC */

loc_004F3F03: ;
    eax = MEM32(ebp + 0x18);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(eax) = 1;

loc_004F3F0C: ;
    esp = ebp + -40;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_004F3F14
 * Original: 0x004F3F14 - 0x004F4113 (511 bytes, 183 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004F3F14(void)
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

loc_004F3F14: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F3F26u); RECOMP_ABI_CALL(0x005CD07Au, sub_005CD07A); /* call 0x005CD07A */

loc_004F3F26: ;
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    POP32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, MEM32(ebp + 8));
    esi = eax;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F3F3Au); RECOMP_ABI_CALL(0x004F3C13u, sub_004F3C13); /* call 0x004F3C13 */

loc_004F3F3A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004F3F51; /* je: equal / zero */

loc_004F3F41: ;
    eax = MEM32(ebp + 0x14);
    MEM32(eax) = ebx;
    eax = MEM32(ebp + 0x18);
    MEM8(eax) = 0;
    goto loc_004F410B;

loc_004F3F51: ;
    eax = esi;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F3F61u); RECOMP_ABI_CALL(0x005CC470u, sub_005CC470); /* call 0x005CC470 */

loc_004F3F61: ;
    edi = esp;
    eax = esi + esi;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    MEM32(ebp + -28) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F3F71u); RECOMP_ABI_CALL(0x0059EADCu, sub_0059EADC); /* call 0x0059EADC */

loc_004F3F71: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F3F79u); RECOMP_ABI_CALL(0x004F3CF1u, sub_004F3CF1); /* call 0x004F3CF1 */

loc_004F3F79: ;
    MEM32(ebp + -8) = eax;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F3F8Du); RECOMP_ABI_CALL(0x005CC470u, sub_005CC470); /* call 0x005CC470 */

loc_004F3F8D: ;
    ebx = esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x20);
    PUSH32(esp, edi);
    MEM32(ebp + -24) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F3F9Bu); RECOMP_ABI_CALL(0x004F3D0Cu, sub_004F3D0C); /* call 0x004F3D0C */

loc_004F3F9B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + -16) = esi;

loc_004F3FA3: ;
    MEM32(ebp + -12) = esi;
    goto loc_004F3FAB;

loc_004F3FA8: ;
    esi = MEM32(ebp + -12);

loc_004F3FAB: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + -8) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_004F3FB7; /* jae: above or equal (unsigned >=) */

loc_004F3FB0: ;
    eax = MEM32(ebx + esi * 4);
    MEM16(eax) = MEM16(eax) & 0;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */

loc_004F3FB7: ;
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    MEM32(ebp + -16) = MEM32(ebp + -16) + 1;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F3FCAu); RECOMP_ABI_CALL(0x004F3C13u, sub_004F3C13); /* call 0x004F3C13 */

loc_004F3FCA: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004F3FE5; /* je: equal / zero */

loc_004F3FD1: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + -8) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_004F40D1; /* jae: above or equal (unsigned >=) */

loc_004F3FDA: ;
    eax = MEM32(ebx + esi * 4);
    MEM16(eax) = 0x20;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_004F3FA3;

loc_004F3FE5: ;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004F40AC; /* jne: not equal / not zero */

loc_004F3FEF: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + -8) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_004F3FFC; /* jae: above or equal (unsigned >=) */

loc_004F3FF4: ;
    eax = MEM32(ebx + esi * 4);
    MEM16(eax) = 0x20;

loc_004F3FFC: ;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F4002u); RECOMP_ABI_CALL(0x005CD07Au, sub_005CD07A); /* call 0x005CD07A */

loc_004F4002: ;
    esi = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    POP32(esp, ecx);
    MEM32(ebp + -4) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_004F3FA8; /* jbe: below or equal (unsigned <=) */

loc_004F4010: ;
    goto loc_004F4015;

loc_004F4012: ;
    eax = MEM32(ebp + -4);

loc_004F4015: ;
    SET_LO16(ecx, MEM16(edi + eax * 2));
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    MEM16(edi + eax * 2) = MEM16(edi + eax * 2) & 0;
    _fa = (uint32_t)(MEM16(edi + eax * 2)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    PUSH32(esp, edi);
    MEM16(ebp + -20) = LO16(ecx);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F4032u); RECOMP_ABI_CALL(0x004F3C13u, sub_004F3C13); /* call 0x004F3C13 */

loc_004F4032: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004F4051; /* je: equal / zero */

loc_004F4039: ;
    ecx = MEM32(ebp + -4);
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), esi (32-bit) */
    SET_LO16(eax, MEM16(ebp + -20));
    MEM16(edi + ecx * 2) = LO16(eax);
    if (CMP_B(_fa, _fb)) goto loc_004F4012; /* jb: below (unsigned <) */

loc_004F404C: ;
    goto loc_004F3FA8;

loc_004F4051: ;
    eax = MEM32(ebp + -4);
    _fb = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - MEM32(ebp + -4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx = edi + eax * 2;
    SET_LO16(eax, MEM16(ebp + -20));
    ecx = esi + esi + 2;
    MEM16(ebx) = LO16(eax);
    PUSH32(esp, ecx);
    eax = ebx + -2;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F4070u); RECOMP_ABI_CALL(0x0059EAA4u, sub_0059EAA4); /* call 0x0059EAA4 */

loc_004F4070: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004F4084; /* jne: not equal / not zero */

loc_004F4079: ;
    MEM16(edi + 2) = 0xA;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_004F408C;

loc_004F4084: ;
    MEM16(ebx + -2) = 0xA;
    edi = ebx;

loc_004F408C: ;
    ecx = MEM32(ebp + -12);
    goto loc_004F409B;

loc_004F4091: ;
    eax = MEM32(ebp + -24);
    eax = eax + ecx * 4;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax) = MEM32(eax) + 2;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_004F409B: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + -8) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004F4091; /* jb: below (unsigned <) */

loc_004F40A0: ;
    MEM32(ebp + -16) = MEM32(ebp + -16) & 0;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = MEM32(ebp + -24);
    goto loc_004F3FA8;

loc_004F40AC: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + -8) (32-bit) */
    eax = ebx + esi * 4 + -4;
    ecx = MEM32(eax);
    MEM16(ecx) = 0xA;
    if (CMP_AE(_fa, _fb)) goto loc_004F40C4; /* jae: above or equal (unsigned >=) */

loc_004F40BC: ;
    ecx = MEM32(ebx + esi * 4);
    MEM16(ecx) = 0x20;

loc_004F40C4: ;
    edi = MEM32(eax);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -16) = MEM32(ebp + -16) & 0;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_004F3FAB;

loc_004F40D1: ;
    PUSH32(esp, MEM32(ebp + -28));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F40D9u); RECOMP_ABI_CALL(0x005CD07Au, sub_005CD07A); /* call 0x005CD07A */

loc_004F40D9: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(0x8D7E98));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0);
    esi = eax + eax;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x86FBF4);
    { uint32_t _icall_target = MEM32(0x8D7E90); PUSH32(esp, 0x004F40F3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004F40EDu); } /* indirect call */
    }

loc_004F40F3: ;
    ecx = MEM32(ebp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + -28));
    MEM32(ecx) = eax;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F4102u); RECOMP_ABI_CALL(0x0059EADCu, sub_0059EADC); /* call 0x0059EADC */

loc_004F4102: ;
    eax = MEM32(ebp + 0x18);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(eax) = 1;

loc_004F410B: ;
    esp = ebp + -40;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_004F4116
 * Original: 0x004F4116 - 0x004F4160 (74 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004F4116(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004F4116: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x18);
    edi = MEM32(esp + 0x1C);
    ebp = MEM32(esp + 0x20);

loc_004F412A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(edi));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    SET_LO8(ebx, MEM8(ecx + 1));
    esi = eax;
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        esi = _sv << _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    SET_LO8(eax, MEM8(edx));
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        esi = _sv << _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    SET_LO8(ebx, MEM8(ecx));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        esi = _sv << _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = MEM32(esp + 0x24);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp) = esi;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004F412A; /* jne: not equal / not zero */

loc_004F415B: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_004F4160
 * Original: 0x004F4160 - 0x004F41CA (106 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004F4160(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004F4160: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x18);
    edi = MEM32(esp + 0x1C);
    ebp = MEM32(esp + 0x20);
    esi = MEM32(esp + 0x24);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004F417C: ;
    SET_LO8(eax, MEM8(edx));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    SET_LO8(ebx, MEM8(edi));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    mm2 = MMX_MEM(eax * 8 + 0x8D8830); /* movq */
    mm3 = MMX_MEM(ebx * 8 + 0x8D9030); /* movq */
    SET_LO8(eax, MEM8(ecx));
    mm2 = MMX_PADDW(mm2, mm3); /* paddw */
    SET_LO8(ebx, MEM8(ecx + 1));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    mm0 = MMX_MEM(eax * 8 + 0x8D8030); /* movq */
    mm1 = MMX_MEM(ebx * 8 + 0x8D8030); /* movq */
    mm0 = MMX_PADDW(mm0, mm2); /* paddw */
    mm1 = MMX_PADDW(mm1, mm2); /* paddw */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 8;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    mm0 = MMX_PACKUSWB(mm0, mm1); /* packuswb */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, esi (32-bit) */
    MMX_STORE(ebp + -8, mm0); /* movq */
    if (CMP_NE(_fa, _fb)) goto loc_004F417C; /* jne: not equal / not zero */

loc_004F41C5: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_004F41CA
 * Original: 0x004F41CA - 0x004F4270 (166 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004F41CA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004F41CA: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x18);
    edi = MEM32(esp + 0x1C);
    ebp = MEM32(esp + 0x20);
    esi = MEM32(esp + 0x24);
    mm4 = MMX_MEM(0x9114B0); /* movq */
    mm5 = MMX_MEM(0x910488); /* movq */
    mm6 = MMX_MEM(0x910490); /* movq */
    mm7 = MMX_MEM(0x9114A8); /* movq */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004F4202: ;
    SET_LO8(eax, MEM8(edx));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    SET_LO8(ebx, MEM8(edi));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    mm2 = MMX_MEM(eax * 8 + 0x8D8830); /* movq */
    mm3 = MMX_MEM(ebx * 8 + 0x8D9030); /* movq */
    SET_LO8(eax, MEM8(ecx));
    mm2 = MMX_PADDW(mm2, mm3); /* paddw */
    SET_LO8(ebx, MEM8(ecx + 1));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    mm0 = MMX_MEM(eax * 8 + 0x8D8030); /* movq */
    mm1 = MMX_MEM(ebx * 8 + 0x8D8030); /* movq */
    mm0 = MMX_PADDW(mm0, mm2); /* paddw */
    mm1 = MMX_PADDW(mm1, mm2); /* paddw */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    mm0 = MMX_PACKUSWB(mm0, mm1); /* packuswb */
    mm0 = MMX_PADDUSB(mm0, mm4); /* paddusb */
    mm1 = mm0; /* movq */
    mm0 = MMX_PAND(mm0, mm5); /* pand */
    mm0 = MMX_PMADDWD(mm0, mm6); /* pmaddwd */
    mm1 = MMX_PAND(mm1, mm7); /* pand */
    mm1 = MMX_PSRLD(mm1, 11u); /* psrld */
    mm0 = MMX_POR(mm0, mm1); /* por */
    mm1 = mm0; /* movq */
    mm0 = MMX_PSRLQ(mm0, 16u); /* psrlq */
    mm0 = MMX_POR(mm0, mm1); /* por */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, esi (32-bit) */
    MEM32(ebp + -4) = mm0.ud[0]; /* movd */
    if (CMP_NE(_fa, _fb)) goto loc_004F4202; /* jne: not equal / not zero */

loc_004F426B: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_004F4270
 * Original: 0x004F4270 - 0x004F4341 (209 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004F4270(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004F4270: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x18);
    edi = MEM32(esp + 0x1C);
    ebp = MEM32(esp + 0x20);
    esi = MEM32(esp + 0x24);
    mm4 = MMX_MEM(0x9114B0); /* movq */
    mm5 = MMX_MEM(0x910488); /* movq */
    mm6 = MMX_MEM(0x910490); /* movq */
    mm7 = MMX_MEM(0x9114A8); /* movq */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004F42A8: ;
    SET_LO8(eax, MEM8(edx));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    SET_LO8(ebx, MEM8(edi));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    mm2 = MMX_MEM(eax * 8 + 0x8D8830); /* movq */
    mm3 = MMX_MEM(ebx * 8 + 0x8D9030); /* movq */
    SET_LO8(eax, MEM8(ecx));
    mm2 = MMX_PADDW(mm2, mm3); /* paddw */
    SET_LO8(ebx, MEM8(ecx + 1));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    mm0 = MMX_MEM(eax * 8 + 0x8D8030); /* movq */
    mm1 = MMX_MEM(ebx * 8 + 0x8D8030); /* movq */
    mm0 = MMX_PADDW(mm0, mm2); /* paddw */
    mm1 = MMX_PADDW(mm1, mm2); /* paddw */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 8;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    mm0 = MMX_PACKUSWB(mm0, mm0); /* packuswb */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    mm1 = MMX_PACKUSWB(mm1, mm1); /* packuswb */
    mm0 = MMX_PADDUSB(mm0, mm4); /* paddusb */
    mm1 = MMX_PADDUSB(mm1, mm4); /* paddusb */
    mm2 = mm0; /* movq */
    mm3 = mm1; /* movq */
    mm0 = MMX_PAND(mm0, mm5); /* pand */
    mm1 = MMX_PAND(mm1, mm5); /* pand */
    mm0 = MMX_PMADDWD(mm0, mm6); /* pmaddwd */
    mm1 = MMX_PMADDWD(mm1, mm6); /* pmaddwd */
    mm2 = MMX_PAND(mm2, mm7); /* pand */
    mm3 = MMX_PAND(mm3, mm7); /* pand */
    mm2 = MMX_PSRLD(mm2, 11u); /* psrld */
    mm3 = MMX_PSRLD(mm3, 11u); /* psrld */
    mm0 = MMX_POR(mm0, mm2); /* por */
    mm1 = MMX_POR(mm1, mm3); /* por */
    mm2 = mm0; /* movq */
    mm3 = mm1; /* movq */
    mm0 = MMX_PSRLQ(mm0, 16u); /* psrlq */
    mm1 = MMX_PSRLQ(mm1, 16u); /* psrlq */
    mm0 = MMX_POR(mm0, mm2); /* por */
    mm1 = MMX_POR(mm1, mm3); /* por */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + -8) = mm0.ud[0]; /* movd */
    MEM32(ebp + -4) = mm1.ud[0]; /* movd */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004F42A8; /* jne: not equal / not zero */

loc_004F433C: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_004F4341
 * Original: 0x004F4341 - 0x004F43C3 (130 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004F4341(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004F4341: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    mm3 = MMX_MEM(0x8D9830); /* movq */
    mm4 = MMX_MEM(0x9114B0); /* movq */
    mm5 = MMX_MEM(0x910488); /* movq */
    mm6 = MMX_MEM(0x910490); /* movq */
    mm7 = MMX_MEM(0x9114A8); /* movq */
    mm0 = MMX_FROM32(MEM32(eax)); /* movd */
    mm0 = MMX_PSRLD(mm0, 1u); /* psrld */
    mm0 = MMX_PAND(mm0, mm3); /* pand */

loc_004F437A: ;
    mm2 = MMX_FROM32(MEM32(eax)); /* movd */
    mm1 = mm2; /* movq */
    mm2 = MMX_PSRLD(mm2, 1u); /* psrld */
    mm2 = MMX_PAND(mm2, mm3); /* pand */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    mm0 = MMX_PADDB(mm0, mm2); /* paddb */
    mm1 = MMX_PSLLQ(mm1, 32u); /* psllq */
    mm0 = MMX_PADDD(mm0, mm1); /* paddd */
    mm0 = MMX_PADDUSB(mm0, mm4); /* paddusb */
    mm1 = mm0; /* movq */
    mm0 = MMX_PAND(mm0, mm5); /* pand */
    mm0 = MMX_PMADDWD(mm0, mm6); /* pmaddwd */
    mm1 = MMX_PAND(mm1, mm7); /* pand */
    mm1 = MMX_PSRLD(mm1, 11u); /* psrld */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    mm0 = MMX_POR(mm0, mm1); /* por */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    mm1 = mm0; /* movq */
    mm0 = MMX_PSRLQ(mm0, 16u); /* psrlq */
    mm1 = MMX_POR(mm1, mm0); /* por */
    mm0 = mm2; /* movq */
    MEM32(ecx + -4) = mm1.ud[0]; /* movd */
    if (CMP_NE(_fa, _fb)) goto loc_004F437A; /* jne: not equal / not zero */

loc_004F43C2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004F43C3
 * Original: 0x004F43C3 - 0x004F446F (172 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004F43C3(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004F43C3: ;
    PUSH32(esp, ebx);
    eax = MEM32(esp + 8);
    ebx = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x14);
    mm3 = MMX_MEM(0x8D9830); /* movq */
    mm4 = MMX_MEM(0x9114B0); /* movq */
    mm5 = MMX_MEM(0x910488); /* movq */
    mm6 = MMX_MEM(0x910490); /* movq */
    mm7 = MMX_MEM(0x9114A8); /* movq */
    mm0 = MMX_FROM32(MEM32(eax)); /* movd */
    mm1 = MMX_FROM32(MEM32(ebx)); /* movd */
    mm0 = MMX_PSRLD(mm0, 1u); /* psrld */
    mm1 = MMX_PSRLD(mm1, 1u); /* psrld */
    mm0 = MMX_PAND(mm0, mm3); /* pand */
    mm1 = MMX_PAND(mm1, mm3); /* pand */
    mm0 = MMX_PADDB(mm0, mm1); /* paddb */

loc_004F440E: ;
    mm1 = MMX_FROM32(MEM32(eax)); /* movd */
    mm2 = MMX_FROM32(MEM32(ebx)); /* movd */
    mm1 = MMX_PSRLD(mm1, 1u); /* psrld */
    mm2 = MMX_PSRLD(mm2, 1u); /* psrld */
    mm1 = MMX_PAND(mm1, mm3); /* pand */
    mm2 = MMX_PAND(mm2, mm3); /* pand */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    mm2 = MMX_PADDB(mm2, mm1); /* paddb */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    mm1 = mm2; /* movq */
    mm2 = MMX_PSRLD(mm2, 1u); /* psrld */
    mm2 = MMX_PAND(mm2, mm3); /* pand */
    mm0 = MMX_PADDB(mm0, mm2); /* paddb */
    mm1 = MMX_PSLLQ(mm1, 32u); /* psllq */
    mm0 = MMX_PADDD(mm0, mm1); /* paddd */
    mm0 = MMX_PADDUSB(mm0, mm4); /* paddusb */
    mm1 = mm0; /* movq */
    mm0 = MMX_PAND(mm0, mm5); /* pand */
    mm0 = MMX_PMADDWD(mm0, mm6); /* pmaddwd */
    mm1 = MMX_PAND(mm1, mm7); /* pand */
    mm1 = MMX_PSRLD(mm1, 11u); /* psrld */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    mm0 = MMX_POR(mm0, mm1); /* por */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    mm1 = mm0; /* movq */
    mm0 = MMX_PSRLQ(mm0, 16u); /* psrlq */
    mm1 = MMX_POR(mm1, mm0); /* por */
    mm0 = mm2; /* movq */
    MEM32(ecx + -4) = mm1.ud[0]; /* movd */
    if (CMP_NE(_fa, _fb)) goto loc_004F440E; /* jne: not equal / not zero */

loc_004F446D: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_004F446F
 * Original: 0x004F446F - 0x004F44D6 (103 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004F446F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004F446F: ;
    _fa = (uint32_t)(MEM32(0x9124C0)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x9124C0), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004F44D5; /* je: equal / zero */

loc_004F4477: ;
    PUSH32(esp, ebx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);

loc_004F447B: ;
    ecx = eax + 0x8D8030;
    SET_LO16(esi, MEM16(ecx));
    edx = eax + 0x8D8032;
    SET_LO16(ebx, MEM16(edx));
    MEM16(ecx) = LO16(ebx);
    MEM16(edx) = LO16(esi);
    ecx = eax + 0x8D8830;
    SET_LO16(esi, MEM16(ecx));
    edx = eax + 0x8D8832;
    SET_LO16(ebx, MEM16(edx));
    MEM16(ecx) = LO16(ebx);
    MEM16(edx) = LO16(esi);
    ecx = eax + 0x8D9030;
    SET_LO16(esi, MEM16(ecx));
    edx = eax + 0x8D9032;
    SET_LO16(ebx, MEM16(edx));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7F8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7F8 (32-bit) */
    MEM16(ecx) = LO16(ebx);
    MEM16(edx) = LO16(esi);
    if (CMP_L(_fas, _fbs)) goto loc_004F447B; /* jl: less (signed <) */

loc_004F44CD: ;
    POP32(esp, esi);
    MEM32(0x9124C0) = edi;
    POP32(esp, ebx);

loc_004F44D5: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004F44D6
 * Original: 0x004F44D6 - 0x004F4563 (141 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004F44D6(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004F44D6: ;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x004F44DFu); RECOMP_ABI_CALL(0x004F446Fu, sub_004F446F); /* call 0x004F446F */

loc_004F44DF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), eax (32-bit) */
    POP32(esp, edi);
    MEM32(0x9114B4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_004F451C; /* je: equal / zero */

loc_004F44ED: ;
    eax = 0x60603;
    MEM32(0x9114A0) = eax;
    MEM32(0x9114A4) = eax;
    eax = 0xF800FC;
    MEM32(0x910488) = eax;
    MEM32(0x91048C) = eax;
    MEM32(0x9114B0) = 0x40402;
    eax = 0x1000008;
    goto loc_004F4549;

loc_004F451C: ;
    eax = 0x60606;
    MEM32(0x9114A0) = eax;
    MEM32(0x9114A4) = eax;
    eax = 0x1F800F8;
    MEM32(0x910488) = eax;
    MEM32(0x91048C) = eax;
    MEM32(0x9114B0) = 0x40404;
    eax = 0x800004;

loc_004F4549: ;
    MEM32(0x910494) = eax;
    MEM32(0x910490) = eax;
    eax = 0xF800;
    MEM32(0x9114A8) = eax;
    MEM32(0x9114AC) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_004F4563
 * Original: 0x004F4563 - 0x004F48AC (841 bytes, 296 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004F4563(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004F4563: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ebp + 0x28);
    PUSH32(esp, 7);
    POP32(esp, eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004F4578; /* jbe: below or equal (unsigned <=) */

loc_004F4573: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_004F4578: ;
    _fa = (uint32_t)(MEM8(ebp + 0x14)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x14), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004F4583; /* je: equal / zero */

loc_004F457E: ;
    PUSH32(esp, 2);
    POP32(esp, eax);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_004F4583: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_004F45AA; /* jne: not equal / not zero */

loc_004F458A: ;
    _fa = (uint32_t)(MEM8(ebp + 0x24)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x24), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004F4593; /* je: equal / zero */

loc_004F458F: ;
    PUSH32(esp, 3);
    goto loc_004F45DC;

loc_004F4593: ;
    edx = MEM32(ebp + 0x20);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(edx) (8-bit) */
    esi = edx;
    if (TEST_Z(_fa, _fb)) goto loc_004F45C8; /* je: equal / zero */

loc_004F459C: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 3 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004F45A5; /* je: equal / zero */

loc_004F45A1: ;
    PUSH32(esp, 4);
    goto loc_004F45DC;

loc_004F45A5: ;
    esi = edx + 4;
    goto loc_004F45C2;

loc_004F45AA: ;
    _fa = (uint32_t)(MEM8(ebp + 0x24)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x24), 3 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_004F458F; /* jne: not equal / not zero */

loc_004F45B0: ;
    edx = MEM32(ebp + 0x20);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 3 (8-bit) */
    esi = edx;
    if (TEST_Z(_fa, _fb)) goto loc_004F45C8; /* je: equal / zero */

loc_004F45BA: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_004F45A1; /* jne: not equal / not zero */

loc_004F45BF: ;
    esi = edx + 2;

loc_004F45C2: ;
    ebx = MEM32(ebp + 0x18);
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_004F45CB;

loc_004F45C8: ;
    ebx = MEM32(ebp + 0x18);

loc_004F45CB: ;
    ebx = ebx & 0xFFFFFFFEu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004F45E2; /* jne: not equal / not zero */

loc_004F45D2: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x400 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_004F45E2; /* jle: less or equal (signed <=) */

loc_004F45DA: ;
    PUSH32(esp, 5);

loc_004F45DC: ;
    POP32(esp, eax);
    goto loc_004F48A8;

loc_004F45E2: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004F48A6; /* jl: less (signed <) */

loc_004F45EB: ;
    _fa = (uint32_t)(MEM32(ebp + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x1C), 1 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004F48A6; /* jl: less (signed <) */

loc_004F45F5: ;
    edx = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((1) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(ebp + -24) = edi;
    MEM32(ebp + -4) = eax;
    MEM32(ebp + -16) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_004F461D; /* je: equal / zero */

loc_004F460E: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004F461D; /* je: equal / zero */

loc_004F4613: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004F461D; /* je: equal / zero */

loc_004F4618: ;
    { uint32_t _sv=(uint32_t)(ebx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        ebx = _sv << _sc;
        _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    goto loc_004F461F;

loc_004F461D: ;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ebx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004F461F: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x4F48AC); /* switch: 8 entries, 5 targets */
    if (_jt == 0x004F4626u) goto loc_004F4626;
    if (_jt == 0x004F4679u) goto loc_004F4679;
    if (_jt == 0x004F46D5u) goto loc_004F46D5;
    if (_jt == 0x004F4746u) goto loc_004F4746;
    if (_jt == 0x004F47B7u) goto loc_004F47B7;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_004F4626: ;
    MEM32(ebp + 0x28) = MEM32(ebp + 0x28) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x28)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(ebp + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x1C), 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_004F48A5; /* jle: less or equal (signed <=) */

loc_004F4634: ;
    eax = MEM32(ebp + 0x10);
    _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -8) = eax;
    goto loc_004F4642;

loc_004F463F: ;
    eax = MEM32(ebp + -8);

loc_004F4642: ;
    ecx = ebx + esi;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -4);
    PUSH32(esp, esi);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F4654u); RECOMP_ABI_CALL(0x004F4116u, sub_004F4116); /* call 0x004F4116 */

loc_004F4654: ;
    _fb = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + MEM32(ebp + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM8(ebp + 0x28)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x28), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004F4666; /* je: equal / zero */

loc_004F4660: ;
    eax = MEM32(ebp + -16);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -4) = MEM32(ebp + -4) + eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004F4666: ;
    _fb = (uint32_t)(MEM32(ebp + 0x24)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(ebp + 0x24);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x28) = MEM32(ebp + 0x28) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x1C) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004F463F; /* jl: less (signed <) */

loc_004F4674: ;
    goto loc_004F48A5;

loc_004F4679: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F4680u); RECOMP_ABI_CALL(0x004F446Fu, sub_004F446F); /* call 0x004F446F */

loc_004F4680: ;
    MEM32(ebp + 0x28) = MEM32(ebp + 0x28) & edi;
    _fa = (uint32_t)(MEM32(ebp + 0x28)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(ebp + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x1C), edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_004F46CE; /* jle: less or equal (signed <=) */

loc_004F4688: ;
    eax = MEM32(ebp + 0x10);
    _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -8) = eax;
    goto loc_004F4696;

loc_004F4693: ;
    eax = MEM32(ebp + -8);

loc_004F4696: ;
    edi = MEM32(ebp + -24);
    ecx = ebx + esi;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -4);
    PUSH32(esp, esi);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F46ABu); RECOMP_ABI_CALL(0x004F4160u, sub_004F4160); /* call 0x004F4160 */

loc_004F46AB: ;
    _fb = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + MEM32(ebp + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM8(ebp + 0x28)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x28), 1 (8-bit) */
    MEM32(ebp + -24) = edi;
    if (TEST_Z(_fa, _fb)) goto loc_004F46C0; /* je: equal / zero */

loc_004F46BA: ;
    eax = MEM32(ebp + -16);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -4) = MEM32(ebp + -4) + eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004F46C0: ;
    _fb = (uint32_t)(MEM32(ebp + 0x24)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(ebp + 0x24);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x28) = MEM32(ebp + 0x28) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x1C) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004F4693; /* jl: less (signed <) */

loc_004F46CE: ;
    (void)0; /* emms - empty MMX state */
    goto loc_004F48A5;

loc_004F46D5: ;
    ecx = ecx & 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F46DEu); RECOMP_ABI_CALL(0x004F44D6u, sub_004F44D6); /* call 0x004F44D6 */

loc_004F46DE: ;
    MEM32(ebp + 0x28) = MEM32(ebp + 0x28) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x28)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(ebp + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x1C), 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_LE(_fas, _fbs)) goto loc_004F473F; /* jle: less or equal (signed <=) */

loc_004F46E9: ;
    eax = MEM32(ebp + 0x10);
    _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -8) = eax;
    goto loc_004F46F7;

loc_004F46F4: ;
    eax = MEM32(ebp + -8);

loc_004F46F7: ;
    ecx = ebx + esi;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -4);
    PUSH32(esp, esi);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F4709u); RECOMP_ABI_CALL(0x004F41CAu, sub_004F41CA); /* call 0x004F41CA */

loc_004F4709: ;
    _fb = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + MEM32(ebp + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM8(ebp + 0x28)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x28), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004F471B; /* je: equal / zero */

loc_004F4715: ;
    eax = MEM32(ebp + -16);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -4) = MEM32(ebp + -4) + eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004F471B: ;
    eax = MEM32(0x9114A0);
    MEM32(0x9114B0) = MEM32(0x9114B0) ^ eax;
    _fa = (uint32_t)(MEM32(0x9114B0)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = MEM32(0x9114A4);
    MEM32(0x9114B4) = MEM32(0x9114B4) ^ eax;
    _fa = (uint32_t)(MEM32(0x9114B4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(MEM32(ebp + 0x24)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(ebp + 0x24);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x28) = MEM32(ebp + 0x28) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x1C) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004F46F4; /* jl: less (signed <) */

loc_004F473F: ;
    (void)0; /* emms - empty MMX state */
    goto loc_004F48A5;

loc_004F4746: ;
    ecx = ecx & 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F474Fu); RECOMP_ABI_CALL(0x004F44D6u, sub_004F44D6); /* call 0x004F44D6 */

loc_004F474F: ;
    MEM32(ebp + 0x28) = MEM32(ebp + 0x28) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x28)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(ebp + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x1C), 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_LE(_fas, _fbs)) goto loc_004F47B0; /* jle: less or equal (signed <=) */

loc_004F475A: ;
    eax = MEM32(ebp + 0x10);
    _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -8) = eax;
    goto loc_004F4768;

loc_004F4765: ;
    eax = MEM32(ebp + -8);

loc_004F4768: ;
    ecx = ebx + esi;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -4);
    PUSH32(esp, esi);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F477Au); RECOMP_ABI_CALL(0x004F4270u, sub_004F4270); /* call 0x004F4270 */

loc_004F477A: ;
    _fb = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + MEM32(ebp + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM8(ebp + 0x28)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x28), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004F478C; /* je: equal / zero */

loc_004F4786: ;
    eax = MEM32(ebp + -16);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -4) = MEM32(ebp + -4) + eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004F478C: ;
    eax = MEM32(0x9114A0);
    MEM32(0x9114B0) = MEM32(0x9114B0) ^ eax;
    _fa = (uint32_t)(MEM32(0x9114B0)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = MEM32(0x9114A4);
    MEM32(0x9114B4) = MEM32(0x9114B4) ^ eax;
    _fa = (uint32_t)(MEM32(0x9114B4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(MEM32(ebp + 0x24)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(ebp + 0x24);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x28) = MEM32(ebp + 0x28) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x1C) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004F4765; /* jl: less (signed <) */

loc_004F47B0: ;
    (void)0; /* emms - empty MMX state */
    goto loc_004F48A5;

loc_004F47B7: ;
    ecx = ecx & 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F47C0u); RECOMP_ABI_CALL(0x004F44D6u, sub_004F44D6); /* call 0x004F44D6 */

loc_004F47C0: ;
    ecx = ebx + 0x910498;
    PUSH32(esp, ecx);
    eax = 0x910498;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x10));
    MEM32(ebp + -20) = eax;
    PUSH32(esp, MEM32(ebp + 0xC));
    MEM32(ebp + -24) = 0x9114B8;
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F47E5u); RECOMP_ABI_CALL(0x004F4160u, sub_004F4160); /* call 0x004F4160 */

loc_004F47E5: ;
    MEM32(ebp + 0x28) = MEM32(ebp + 0x28) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x28)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x1C), 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_004F48A3; /* jle: less or equal (signed <=) */

loc_004F47F6: ;
    eax = ebx + esi;
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + 0x10);
    _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -8) = eax;
    goto loc_004F480A;

loc_004F4807: ;
    eax = MEM32(ebp + -8);

loc_004F480A: ;
    ecx = MEM32(ebp + -24);
    edx = ecx + ebx;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -4);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F481Fu); RECOMP_ABI_CALL(0x004F4160u, sub_004F4160); /* call 0x004F4160 */

loc_004F481F: ;
    PUSH32(esp, MEM32(ebp + -12));
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + -20));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F482Bu); RECOMP_ABI_CALL(0x004F4341u, sub_004F4341); /* call 0x004F4341 */

loc_004F482B: ;
    eax = MEM32(ebp + 0x24);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -12) = MEM32(ebp + -12) + eax;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, MEM32(ebp + -12));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(0x9114A0);
    MEM32(0x9114B0) = MEM32(0x9114B0) ^ eax;
    _fa = (uint32_t)(MEM32(0x9114B0)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = MEM32(0x9114A4);
    MEM32(0x9114B4) = MEM32(0x9114B4) ^ eax;
    _fa = (uint32_t)(MEM32(0x9114B4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + -24));
    PUSH32(esp, MEM32(ebp + -20));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F4858u); RECOMP_ABI_CALL(0x004F43C3u, sub_004F43C3); /* call 0x004F43C3 */

loc_004F4858: ;
    eax = MEM32(ebp + 0x24);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -12) = MEM32(ebp + -12) + eax;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + MEM32(ebp + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(0x9114A0);
    MEM32(0x9114B0) = MEM32(0x9114B0) ^ eax;
    _fa = (uint32_t)(MEM32(0x9114B0)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = MEM32(0x9114A4);
    MEM32(0x9114B4) = MEM32(0x9114B4) ^ eax;
    _fa = (uint32_t)(MEM32(0x9114B4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM8(ebp + 0x28)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x28), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004F4888; /* je: equal / zero */

loc_004F4882: ;
    eax = MEM32(ebp + -16);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -4) = MEM32(ebp + -4) + eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004F4888: ;
    eax = MEM32(ebp + -20);
    ecx = MEM32(ebp + -24);
    MEM32(ebp + 0x28) = MEM32(ebp + 0x28) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -24) = eax;
    eax = MEM32(ebp + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x1C) (32-bit) */
    MEM32(ebp + -20) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_004F4807; /* jl: less (signed <) */

loc_004F48A3: ;
    (void)0; /* emms - empty MMX state */

loc_004F48A5: ;
    POP32(esp, edi);

loc_004F48A6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004F48A8: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004F464E
 * Original: 0x004F464E - 0x004F48AC (606 bytes, 202 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004F464E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004F464E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x004F4654u); RECOMP_ABI_CALL(0x004F4116u, sub_004F4116); /* call 0x004F4116 */

loc_004F4654: ;
    _fb = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + MEM32(ebp + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM8(ebp + 0x28)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x28), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004F4666; /* je: equal / zero */

loc_004F4660: ;
    eax = MEM32(ebp + -16);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -4) = MEM32(ebp + -4) + eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004F4666: ;
    _fb = (uint32_t)(MEM32(ebp + 0x24)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(ebp + 0x24);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x28) = MEM32(ebp + 0x28) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x1C) (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_004F463F(); return; } /* jl: less (signed <) */

loc_004F4674: ;
    goto loc_004F48A5;

    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x004F4680u); RECOMP_ABI_CALL(0x004F446Fu, sub_004F446F); /* call 0x004F446F */

loc_004F4680: ;
    MEM32(ebp + 0x28) = MEM32(ebp + 0x28) & edi;
    _fa = (uint32_t)(MEM32(ebp + 0x28)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(ebp + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x1C), edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_004F46CE; /* jle: less or equal (signed <=) */

loc_004F4688: ;
    eax = MEM32(ebp + 0x10);
    _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -8) = eax;
    goto loc_004F4696;

loc_004F4693: ;
    eax = MEM32(ebp + -8);

loc_004F4696: ;
    edi = MEM32(ebp + -24);
    ecx = ebx + esi;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -4);
    PUSH32(esp, esi);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x004F46ABu); RECOMP_ABI_CALL(0x004F4160u, sub_004F4160); /* call 0x004F4160 */

loc_004F46AB: ;
    _fb = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + MEM32(ebp + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM8(ebp + 0x28)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x28), 1 (8-bit) */
    MEM32(ebp + -24) = edi;
    if (TEST_Z(_fa, _fb)) goto loc_004F46C0; /* je: equal / zero */

loc_004F46BA: ;
    eax = MEM32(ebp + -16);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -4) = MEM32(ebp + -4) + eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004F46C0: ;
    _fb = (uint32_t)(MEM32(ebp + 0x24)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(ebp + 0x24);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x28) = MEM32(ebp + 0x28) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x1C) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004F4693; /* jl: less (signed <) */

loc_004F46CE: ;
    (void)0; /* emms - empty MMX state */
    goto loc_004F48A5;

    ecx = ecx & 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x004F46DEu); RECOMP_ABI_CALL(0x004F44D6u, sub_004F44D6); /* call 0x004F44D6 */

loc_004F46DE: ;
    MEM32(ebp + 0x28) = MEM32(ebp + 0x28) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x28)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(ebp + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x1C), 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_LE(_fas, _fbs)) goto loc_004F473F; /* jle: less or equal (signed <=) */

loc_004F46E9: ;
    eax = MEM32(ebp + 0x10);
    _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -8) = eax;
    goto loc_004F46F7;

loc_004F46F4: ;
    eax = MEM32(ebp + -8);

loc_004F46F7: ;
    ecx = ebx + esi;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -4);
    PUSH32(esp, esi);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x004F4709u); RECOMP_ABI_CALL(0x004F41CAu, sub_004F41CA); /* call 0x004F41CA */

loc_004F4709: ;
    _fb = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + MEM32(ebp + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM8(ebp + 0x28)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x28), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004F471B; /* je: equal / zero */

loc_004F4715: ;
    eax = MEM32(ebp + -16);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -4) = MEM32(ebp + -4) + eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004F471B: ;
    eax = MEM32(0x9114A0);
    MEM32(0x9114B0) = MEM32(0x9114B0) ^ eax;
    _fa = (uint32_t)(MEM32(0x9114B0)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = MEM32(0x9114A4);
    MEM32(0x9114B4) = MEM32(0x9114B4) ^ eax;
    _fa = (uint32_t)(MEM32(0x9114B4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(MEM32(ebp + 0x24)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(ebp + 0x24);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x28) = MEM32(ebp + 0x28) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x1C) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004F46F4; /* jl: less (signed <) */

loc_004F473F: ;
    (void)0; /* emms - empty MMX state */
    goto loc_004F48A5;

    ecx = ecx & 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x004F474Fu); RECOMP_ABI_CALL(0x004F44D6u, sub_004F44D6); /* call 0x004F44D6 */

loc_004F474F: ;
    MEM32(ebp + 0x28) = MEM32(ebp + 0x28) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x28)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(ebp + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x1C), 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_LE(_fas, _fbs)) goto loc_004F47B0; /* jle: less or equal (signed <=) */

loc_004F475A: ;
    eax = MEM32(ebp + 0x10);
    _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -8) = eax;
    goto loc_004F4768;

loc_004F4765: ;
    eax = MEM32(ebp + -8);

loc_004F4768: ;
    ecx = ebx + esi;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -4);
    PUSH32(esp, esi);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x004F477Au); RECOMP_ABI_CALL(0x004F4270u, sub_004F4270); /* call 0x004F4270 */

loc_004F477A: ;
    _fb = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + MEM32(ebp + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM8(ebp + 0x28)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x28), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004F478C; /* je: equal / zero */

loc_004F4786: ;
    eax = MEM32(ebp + -16);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -4) = MEM32(ebp + -4) + eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004F478C: ;
    eax = MEM32(0x9114A0);
    MEM32(0x9114B0) = MEM32(0x9114B0) ^ eax;
    _fa = (uint32_t)(MEM32(0x9114B0)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = MEM32(0x9114A4);
    MEM32(0x9114B4) = MEM32(0x9114B4) ^ eax;
    _fa = (uint32_t)(MEM32(0x9114B4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(MEM32(ebp + 0x24)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(ebp + 0x24);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x28) = MEM32(ebp + 0x28) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x1C) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004F4765; /* jl: less (signed <) */

loc_004F47B0: ;
    (void)0; /* emms - empty MMX state */
    goto loc_004F48A5;

    ecx = ecx & 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x004F47C0u); RECOMP_ABI_CALL(0x004F44D6u, sub_004F44D6); /* call 0x004F44D6 */

loc_004F47C0: ;
    ecx = ebx + 0x910498;
    PUSH32(esp, ecx);
    eax = 0x910498;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x10));
    MEM32(ebp + -20) = eax;
    PUSH32(esp, MEM32(ebp + 0xC));
    MEM32(ebp + -24) = 0x9114B8;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0x004F47E5u); RECOMP_ABI_CALL(0x004F4160u, sub_004F4160); /* call 0x004F4160 */

loc_004F47E5: ;
    MEM32(ebp + 0x28) = MEM32(ebp + 0x28) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x28)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x1C), 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_004F48A3; /* jle: less or equal (signed <=) */

loc_004F47F6: ;
    eax = ebx + esi;
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + 0x10);
    _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -8) = eax;
    goto loc_004F480A;

loc_004F4807: ;
    eax = MEM32(ebp + -8);

loc_004F480A: ;
    ecx = MEM32(ebp + -24);
    edx = ecx + ebx;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -4);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x004F481Fu); RECOMP_ABI_CALL(0x004F4160u, sub_004F4160); /* call 0x004F4160 */

loc_004F481F: ;
    PUSH32(esp, MEM32(ebp + -12));
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + -20));
    PUSH32(esp, 0x004F482Bu); RECOMP_ABI_CALL(0x004F4341u, sub_004F4341); /* call 0x004F4341 */

loc_004F482B: ;
    eax = MEM32(ebp + 0x24);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -12) = MEM32(ebp + -12) + eax;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, MEM32(ebp + -12));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(0x9114A0);
    MEM32(0x9114B0) = MEM32(0x9114B0) ^ eax;
    _fa = (uint32_t)(MEM32(0x9114B0)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = MEM32(0x9114A4);
    MEM32(0x9114B4) = MEM32(0x9114B4) ^ eax;
    _fa = (uint32_t)(MEM32(0x9114B4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + -24));
    PUSH32(esp, MEM32(ebp + -20));
    PUSH32(esp, 0x004F4858u); RECOMP_ABI_CALL(0x004F43C3u, sub_004F43C3); /* call 0x004F43C3 */

loc_004F4858: ;
    eax = MEM32(ebp + 0x24);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -12) = MEM32(ebp + -12) + eax;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + MEM32(ebp + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(0x9114A0);
    MEM32(0x9114B0) = MEM32(0x9114B0) ^ eax;
    _fa = (uint32_t)(MEM32(0x9114B0)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = MEM32(0x9114A4);
    MEM32(0x9114B4) = MEM32(0x9114B4) ^ eax;
    _fa = (uint32_t)(MEM32(0x9114B4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM8(ebp + 0x28)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x28), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004F4888; /* je: equal / zero */

loc_004F4882: ;
    eax = MEM32(ebp + -16);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -4) = MEM32(ebp + -4) + eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004F4888: ;
    eax = MEM32(ebp + -20);
    ecx = MEM32(ebp + -24);
    MEM32(ebp + 0x28) = MEM32(ebp + 0x28) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -24) = eax;
    eax = MEM32(ebp + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x1C) (32-bit) */
    MEM32(ebp + -20) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_004F4807; /* jl: less (signed <) */

loc_004F48A3: ;
    (void)0; /* emms - empty MMX state */

loc_004F48A5: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004F48CC
 * Original: 0x004F48CC - 0x004F48F3 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_004F48CC(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_004F48CC: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_004F48E1; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_004F48D4: ;
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7AA820); /* addss */

loc_004F48DC: ;
    eax = (int32_t)xmm0.f[0]; /* cvttss2si */
    esp += 4; return; /* ret */

loc_004F48E1: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_004F48F0; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_004F48E6: ;
    xmm0.f[0] = xmm0.f[0] - MEMF(0x7AA820); /* subss */
    goto loc_004F48DC;

loc_004F48F0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_004F48F3
 * Original: 0x004F48F3 - 0x004F49AA (183 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004F48F3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004F48F3: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 2);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x8D8030;
    edx = 0x8D8830;
    esi = 0x8D9030;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);

loc_004F490D: ;
    MEM16(ecx) = LO16(edi);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(ecx) = LO16(edi);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(ecx) = LO16(edi);
    eax = edi + -128;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm2.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x86FC18); /* mulss */
    MEM16(ecx) = 0xFF;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x004F493Au); RECOMP_ABI_CALL(0x004F48CCu, sub_004F48CC); /* call 0x004F48CC */

loc_004F493A: ;
    MEM16(edx) = LO16(eax);
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x86FC14); /* mulss */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x004F494Fu); RECOMP_ABI_CALL(0x004F48CCu, sub_004F48CC); /* call 0x004F48CC */

loc_004F494F: ;
    MEM16(edx) = LO16(eax);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(edx) = LO16(ebp);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x86FC10); /* mulss */
    MEM16(edx) = LO16(ebp);
    MEM16(esi) = LO16(ebp);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x004F4973u); RECOMP_ABI_CALL(0x004F48CCu, sub_004F48CC); /* call 0x004F48CC */

loc_004F4973: ;
    MEM16(esi) = LO16(eax);
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x86FC0C); /* mulss */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x004F4988u); RECOMP_ABI_CALL(0x004F48CCu, sub_004F48CC); /* call 0x004F48CC */

loc_004F4988: ;
    MEM16(esi) = LO16(eax);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(esi) = LO16(ebp);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x100 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004F490D; /* jl: less (signed <) */

loc_004F499F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(0x9124C0) = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_004F4952
 * Original: 0x004F4952 - 0x004F49AA (88 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004F4952(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004F4952: ;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(edx) = LO16(ebp);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x86FC10); /* mulss */
    MEM16(edx) = LO16(ebp);
    MEM16(esi) = LO16(ebp);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x004F4973u); RECOMP_ABI_CALL(0x004F48CCu, sub_004F48CC); /* call 0x004F48CC */

loc_004F4973: ;
    MEM16(esi) = LO16(eax);
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x86FC0C); /* mulss */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x004F4988u); RECOMP_ABI_CALL(0x004F48CCu, sub_004F48CC); /* call 0x004F48CC */

loc_004F4988: ;
    MEM16(esi) = LO16(eax);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(esi) = LO16(ebp);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x100 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_004F490D(); return; } /* jl: less (signed <) */

loc_004F499F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(0x9124C0) = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_004F49AA
 * Original: 0x004F49AA - 0x004F4A46 (156 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004F49AA(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004F49AA: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x274);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004F49C3; /* je: equal / zero */

loc_004F49BC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004F49C2u); RECOMP_ABI_CALL(0x004F54A8u, sub_004F54A8); /* call 0x004F54A8 */

loc_004F49C2: ;
    POP32(esp, ecx);

loc_004F49C3: ;
    eax = MEM32(esi + 0x28C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004F49D4; /* je: equal / zero */

loc_004F49CD: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004F49D3u); RECOMP_ABI_CALL(0x004F54A8u, sub_004F54A8); /* call 0x004F54A8 */

loc_004F49D3: ;
    POP32(esp, ecx);

loc_004F49D4: ;
    eax = MEM32(esi + 0x288);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004F49E5; /* je: equal / zero */

loc_004F49DE: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004F49E4u); RECOMP_ABI_CALL(0x004F54A8u, sub_004F54A8); /* call 0x004F54A8 */

loc_004F49E4: ;
    POP32(esp, ecx);

loc_004F49E5: ;
    eax = MEM32(esi + 0x280);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004F49F6; /* je: equal / zero */

loc_004F49EF: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004F49F5u); RECOMP_ABI_CALL(0x004F54A8u, sub_004F54A8); /* call 0x004F54A8 */

loc_004F49F5: ;
    POP32(esp, ecx);

loc_004F49F6: ;
    eax = MEM32(esi + 0x268);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004F4A07; /* je: equal / zero */

loc_004F4A00: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004F4A06u); RECOMP_ABI_CALL(0x004F54A8u, sub_004F54A8); /* call 0x004F54A8 */

loc_004F4A06: ;
    POP32(esp, ecx);

loc_004F4A07: ;
    MEM32(esi + 0x274) = edi;
    MEM32(esi + 0x28C) = edi;
    MEM32(esi + 0x288) = edi;
    MEM32(esi + 0x280) = edi;
    MEM32(esi + 0x268) = edi;
    MEM32(esi + 0x270) = edi;
    MEM32(esi + 0x290) = edi;
    MEM32(esi + 0x284) = edi;
    MEM32(esi + 0x27C) = edi;
    MEM32(esi + 0x264) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004F4A46
 * Original: 0x004F4A46 - 0x004F4AED (167 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004F4A46(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004F4A46: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004F4A52u); RECOMP_ABI_CALL(0x004F49AAu, sub_004F49AA); /* call 0x004F49AA */

loc_004F4A52: ;
    PUSH32(esp, 0);
    edi = 0xA0;
    PUSH32(esp, edi);
    PUSH32(esp, 0x004F4A5Fu); RECOMP_ABI_CALL(0x004F549Du, sub_004F549D); /* call 0x004F549D */

loc_004F4A5F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x274) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_004F4AD0; /* je: equal / zero */

loc_004F4A6C: ;
    _fb = (uint32_t)(0x1F) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0xFFFFFFE0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    MEM32(esi + 0x270) = eax;
    PUSH32(esp, 0x004F4A80u); RECOMP_ABI_CALL(0x004F549Du, sub_004F549D); /* call 0x004F549D */

loc_004F4A80: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi + 0x288) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_004F4AD0; /* je: equal / zero */

loc_004F4A8C: ;
    _fb = (uint32_t)(0x1F) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0xFFFFFFE0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0);
    PUSH32(esp, 0x120);
    MEM32(esi + 0x284) = eax;
    PUSH32(esp, 0x004F4AA4u); RECOMP_ABI_CALL(0x004F549Du, sub_004F549D); /* call 0x004F549D */

loc_004F4AA4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi + 0x28C) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_004F4AD0; /* je: equal / zero */

loc_004F4AB0: ;
    _fb = (uint32_t)(0x1F) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0xFFFFFFE0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    MEM32(esi + 0x290) = eax;
    PUSH32(esp, 0x004F4AC4u); RECOMP_ABI_CALL(0x004F549Du, sub_004F549D); /* call 0x004F549D */

loc_004F4AC4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi + 0x280) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_004F4ADB; /* jne: not equal / not zero */

loc_004F4AD0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004F4AD6u); RECOMP_ABI_CALL(0x004F49AAu, sub_004F49AA); /* call 0x004F49AA */

loc_004F4AD6: ;
    POP32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_004F4AEA;

loc_004F4ADB: ;
    _fb = (uint32_t)(0x1F) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0xFFFFFFE0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x27C) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_004F4AEA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004F4AED
 * Original: 0x004F4AED - 0x004F4B28 (59 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004F4AED(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004F4AED: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004F4B1B; /* je: equal / zero */

loc_004F4AF8: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004F4AFEu); RECOMP_ABI_CALL(0x004F49AAu, sub_004F49AA); /* call 0x004F49AA */

loc_004F4AFE: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(0x13C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x13C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x004F4B0Bu); RECOMP_ABI_CALL(0x004F6333u, sub_004F6333); /* call 0x004F6333 */

loc_004F4B0B: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(0x298) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x298;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x004F4B18u); RECOMP_ABI_CALL(0x004F58B9u, sub_004F58B9); /* call 0x004F58B9 */

loc_004F4B18: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004F4B1B: ;
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x004F4B22u); RECOMP_ABI_CALL(0x004F54A8u, sub_004F54A8); /* call 0x004F54A8 */

loc_004F4B22: ;
    MEM32(esi) = MEM32(esi) & 0;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, ecx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004F4B28
 * Original: 0x004F4B28 - 0x004F4BD9 (177 bytes, 71 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004F4B28(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004F4B28: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 8);
    POP32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x4954);
    MEM32(ebp + -56) = esi;
    MEM32(ebp + -52) = esi;
    MEM32(ebp + -48) = esi;
    MEM32(ebp + -44) = esi;
    MEM32(ebp + -40) = eax;
    MEM32(ebp + -36) = eax;
    MEM32(ebp + -32) = esi;
    MEM32(ebp + -28) = esi;
    MEM32(ebp + -24) = esi;
    MEM32(ebp + -20) = esi;
    MEM32(ebp + -16) = esi;
    MEM32(ebp + -12) = esi;
    MEM32(ebp + -8) = esi;
    MEM32(ebp + -4) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F4B6Au); RECOMP_ABI_CALL(0x004F549Du, sub_004F549D); /* call 0x004F549D */

loc_004F4B6A: ;
    ebx = eax;
    POP32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004F4BD5; /* je: equal / zero */

loc_004F4B74: ;
    PUSH32(esp, edi);
    ecx = 0x1255;
    edi = ebx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    PUSH32(esp, 0xE);
    POP32(esp, ecx);
    edi = ebx + 0x1B0;
    esi = ebp + -56;
    PUSH32(esp, ebx);
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
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F4B92u); RECOMP_ABI_CALL(0x004F4A46u, sub_004F4A46); /* call 0x004F4A46 */

loc_004F4B92: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_004F4BA2; /* jne: not equal / not zero */

loc_004F4B97: ;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F4B9Du); RECOMP_ABI_CALL(0x004F54A8u, sub_004F54A8); /* call 0x004F54A8 */

loc_004F4B9D: ;
    POP32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_004F4BD4;

loc_004F4BA2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebx + 0x1A8) = 0x46;
    MEM32(ebx + 0x294) = 0x9237A0;
    edi = ebx + 0x3A0;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    PUSH32(esp, 0x63);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ecx);
    edi = ebx + 0x3B6;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = ebx;

loc_004F4BD4: ;
    POP32(esp, edi);

loc_004F4BD5: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004F4BD9
 * Original: 0x004F4BD9 - 0x004F4C23 (74 bytes, 29 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004F4BD9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004F4BD9: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x004F4BE0u); RECOMP_ABI_CALL(0x004F6BFFu, sub_004F6BFF); /* call 0x004F6BFF */

loc_004F4BE0: ;
    MEM32(0x923E20) = eax;
    PUSH32(esp, 0x004F4BEAu); RECOMP_ABI_CALL(0x004F6C05u, sub_004F6C05); /* call 0x004F6C05 */

loc_004F4BEA: ;
    edi = 0x9124C8;
    esi = edi;
    ecx = 0x870250;

loc_004F4BF6: ;
    eax = (uint32_t)(int32_t)SMEM16(ecx);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi) = eax;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8702D0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x8702D0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004F4BF6; /* jl: less (signed <) */

loc_004F4C0F: ;
    PUSH32(esp, 7);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x004F4C19u); RECOMP_ABI_CALL(0x004F555Du, sub_004F555D); /* call 0x004F555D */

loc_004F4C19: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004F65EE(); return; /* tail jmp 0x004F65EE */

}

/**
 * sub_004F4C23
 * Original: 0x004F4C23 - 0x004F4C24 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004F4C23(void)
{

loc_004F4C23: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004F4C24
 * Original: 0x004F4C24 - 0x004F4C2E (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004F4C24(void)
{

loc_004F4C24: ;
    eax = MEM32(esp + 4);
    MEM32(0x9125C8) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_004F4C34
 * Original: 0x004F4C34 - 0x004F4C67 (51 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004F4C34(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004F4C34: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(0x9125C8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004F4C5C; /* je: equal / zero */

loc_004F4C46: ;
    edx = ebp + -12;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, MEM32(ebp + 8));
    MEM32(ebp + -12) = eax;
    MEM32(ebp + -8) = eax;
    MEM32(ebp + -4) = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004F4C5Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004F4C58u); } /* indirect call */
    }

loc_004F4C5A: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_004F4C5C: ;
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F4C64u); RECOMP_ABI_CALL(0x005CF4E3u, sub_005CF4E3); /* call 0x005CF4E3 */

loc_004F4C64: ;
    POP32(esp, ecx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004F4C67
 * Original: 0x004F4C67 - 0x004F4C82 (27 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004F4C67(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004F4C67: ;
    ecx = MEM32(0x9125C8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004F4C7D; /* je: equal / zero */

loc_004F4C71: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esp + 8));
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004F4C7Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004F4C79u); } /* indirect call */
    }

loc_004F4C7C: ;
    esp += 4; return; /* ret */

loc_004F4C7D: ;
    g_seh_ebp = ebp; sub_005CF5E2(); return; /* tail jmp 0x005CF5E2 */

}

/**
 * sub_004F4C88
 * Original: 0x004F4C88 - 0x004F4D2A (162 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004F4C88(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004F4C88: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004F4C8Eu); RECOMP_ABI_CALL(0x004F4B28u, sub_004F4B28); /* call 0x004F4B28 */

loc_004F4C8E: ;
    esi = MEM32(esp + 8);
    ecx = MEM32(esp + 0xC);
    MEM32(esi) = eax;
    MEM32(eax + 0x234) = ecx;
    edx = MEM32(esi);
    eax = MEM32(esp + 0x10);
    MEM32(edx + 0x238) = eax;
    edx = MEM32(esi);
    MEM32(edx + 0x23C) = ecx;
    edx = MEM32(esi);
    MEM32(edx + 0x240) = eax;
    edx = MEM32(esi);
    MEM32(edx + 0x1B0) = ecx;
    ecx = MEM32(esi);
    MEM32(ecx + 0x1B4) = eax;
    eax = MEM32(esi);
    _fb = (uint32_t)(0x1B0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1B0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x004F4CD7u); RECOMP_ABI_CALL(0x004F587Fu, sub_004F587F); /* call 0x004F587F */

loc_004F4CD7: ;
    ecx = MEM32(esi);
    MEM32(ecx + 0x298) = eax;
    PUSH32(esp, 0x004F4CE4u); RECOMP_ABI_CALL(0x004F6352u, sub_004F6352); /* call 0x004F6352 */

loc_004F4CE4: ;
    ecx = MEM32(esi);
    MEM32(ecx + 0x13C) = eax;
    eax = MEM32(esi);
    ecx = MEM32(0x923E20);
    MEM32(eax + 0x1A4) = ecx;
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x004F4D01u); RECOMP_ABI_CALL(0x004F6FCFu, sub_004F6FCF); /* call 0x004F6FCF */

loc_004F4D01: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_004F4D11; /* jne: not equal / not zero */

loc_004F4D07: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004F4D0Du); RECOMP_ABI_CALL(0x004F4AEDu, sub_004F4AED); /* call 0x004F4AED */

loc_004F4D0D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_004F4D27;

loc_004F4D11: ;
    eax = MEM32(esi);
    eax = MEM32(eax + 0x13C);
    MEM32(eax + 0x38) = MEM32(eax + 0x38) & 0;
    _fa = (uint32_t)(MEM32(eax + 0x38)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x004F4D24u); RECOMP_ABI_CALL(0x004F71B4u, sub_004F71B4); /* call 0x004F71B4 */

loc_004F4D24: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_004F4D27: ;
    POP32(esp, ecx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004F4D42
 * Original: 0x004F4D42 - 0x004F4E0A (200 bytes, 69 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004F4D42(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004F4D42: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x10);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004F4D4B: ;
    eax = MEM32(ebp + 0xC);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_004F4D67; /* jne: not equal / not zero */

loc_004F4D52: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 9 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004F4DF8; /* jne: not equal / not zero */

loc_004F4D5B: ;
    PUSH32(esp, 0x46);
    POP32(esp, esi);
    MEM32(ebp + 0xC) = 1;
    goto loc_004F4D4B;

loc_004F4D67: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_004F4DE7; /* je: equal / zero */

loc_004F4D6A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_004F4DDC; /* je: equal / zero */

loc_004F4D6F: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_004F4DD1; /* je: equal / zero */

loc_004F4D72: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_004F4DA3; /* je: equal / zero */

loc_004F4D75: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_004F4D98; /* je: equal / zero */

loc_004F4D78: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_004F4E07; /* jne: not equal / not zero */

loc_004F4D7F: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(eax + 0x298));
    MEM32(eax + 0x4948) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F4D94u); RECOMP_ABI_CALL(0x004F58F3u, sub_004F58F3); /* call 0x004F58F3 */

loc_004F4D94: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_004F4E07;

loc_004F4D98: ;
    eax = MEM32(ebp + 8);
    MEM32(eax + 0x4944) = esi;
    goto loc_004F4E07;

loc_004F4DA3: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    PUSH32(esp, MEM32(edi + 0x254));
    ebx = edi + 0x298;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebx));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F4DBCu); RECOMP_ABI_CALL(0x004F7520u, sub_004F7520); /* call 0x004F7520 */

loc_004F4DBC: ;
    PUSH32(esp, MEM32(edi + 0x24C));
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebx));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F4DCAu); RECOMP_ABI_CALL(0x004F7520u, sub_004F7520); /* call 0x004F7520 */

loc_004F4DCA: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebx);
    goto loc_004F4E07;

loc_004F4DD1: ;
    eax = MEM32(ebp + 8);
    MEM32(eax + 0x4940) = esi;
    goto loc_004F4E07;

loc_004F4DDC: ;
    eax = MEM32(ebp + 8);
    MEM32(eax + 0x493C) = esi;
    goto loc_004F4E07;

loc_004F4DE7: ;
    eax = MEM32(ebp + 8);
    MEM32(eax + 0x1A8) = esi;
    MEM32(eax + 0x1A0) = ecx;
    goto loc_004F4E07;

loc_004F4DF8: ;
    eax = MEM32(ebp + 8);
    MEM32(eax + 0x1A8) = ecx;
    MEM32(eax + 0x1A0) = esi;

loc_004F4E07: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_004F4E0A
 * Original: 0x004F4E0A - 0x004F4F79 (367 bytes, 119 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004F4E0A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004F4E0A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 8);
    edx = MEM32(ecx + 0x1A0);
    eax = MEM32(ecx + 0x940);
    PUSH32(esp, ebx);
    ebx = MEM32(ecx + 0x938);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x914);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x910);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(ebx)) >> 32) & 1);
    edi = edi + ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -4) = edx;
    edx = MEM32(ecx + edx * 4 + 0x918);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(eax)) >> 32) & 1);
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(edi)) >> 32) & 1);
    edx = edx + edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 8) = edx;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(eax)) >> 32) & 1);
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ecx + 0x930)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x930), edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_004F4E5B; /* jne: not equal / not zero */

loc_004F4E51: ;
    eax = esi;
    if (((1) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(eax)) >> ((((1) & 31u)) - 1)) & 1);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(ecx + 0x930) = eax;

loc_004F4E5B: ;
    _fa = (uint32_t)(MEM32(ecx + 0x92C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x92C), edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_004F4E6D; /* jne: not equal / not zero */

loc_004F4E63: ;
    eax = esi;
    if (((1) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(eax)) >> ((((1) & 31u)) - 1)) & 1);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(ecx + 0x92C) = eax;

loc_004F4E6D: ;
    _fa = (uint32_t)(MEM32(ecx + 0x928)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x928), edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_004F4E80; /* jne: not equal / not zero */

loc_004F4E75: ;
    eax = esi;
    if (((2) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(eax)) >> ((((2) & 31u)) - 1)) & 1);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(ecx + 0x928) = eax;

loc_004F4E80: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_004F4E8F; /* jne: not equal / not zero */

loc_004F4E84: ;
    eax = esi;
    if (((3) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(eax)) >> ((((3) & 31u)) - 1)) & 1);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((3) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(ecx + 0x938) = eax;

loc_004F4E8F: ;
    eax = MEM32(ecx + 0x1A8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_004F4EA1; /* jne: not equal / not zero */

loc_004F4E99: ;
    eax = MEM32(ebp + -4);
    goto loc_004F4F74;

loc_004F4EA1: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x7918);
    PUSH32(esp, 0x64);
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ebx);
      edx = (uint32_t)(_dividend % (uint32_t)ebx); }
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_004F4EF5; /* jle: less or equal (signed <=) */

loc_004F4EB3: ;
    edx = MEM32(ecx + 0x910);
    MEM32(ecx + 0x914) = edx;
    edx = MEM32(ecx + 0x930);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(edi)) >> 32) & 1);
    edx = edx + edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_004F4ED3; /* jae: above or equal (unsigned >=) */

loc_004F4ECB: ;
    PUSH32(esp, 6);

loc_004F4ECD: ;
    POP32(esp, eax);
    goto loc_004F4F74;

loc_004F4ED3: ;
    edx = MEM32(ecx + 0x92C);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(edi)) >> 32) & 1);
    edx = edx + edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_004F4F4B; /* jb: below (unsigned <) */

loc_004F4EDF: ;
    edx = MEM32(ecx + 0x928);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(edi)) >> 32) & 1);
    edx = edx + edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_004F4F5E; /* jb: below (unsigned <) */

loc_004F4EEB: ;
    ecx = MEM32(ecx + 0x938);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(edi)) >> 32) & 1);
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_004F4F6D;

loc_004F4EF5: ;
    edi = MEM32(ecx + 0x1A8);
    eax = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x7530);
    PUSH32(esp, 0x64);
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ebx);
      edx = (uint32_t)(_dividend % (uint32_t)ebx); }
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_004F4F24; /* jge: greater or equal (signed >=) */

loc_004F4F0F: ;
    eax = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D60);
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ebx);
      edx = (uint32_t)(_dividend % (uint32_t)ebx); }
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_004F4E99; /* jg: greater (signed >) */

loc_004F4F24: ;
    eax = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D60);
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x64);
    POP32(esp, edi);
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)edi);
      edx = (uint32_t)(_dividend % (uint32_t)edi); }
    edx = MEM32(ecx + 0x930);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(esi)) >> 32) & 1);
    edx = edx + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_004F4ECB; /* jb: below (unsigned <) */

loc_004F4F3F: ;
    edx = MEM32(ecx + 0x92C);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(esi)) >> 32) & 1);
    edx = edx + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_004F4F52; /* jae: above or equal (unsigned >=) */

loc_004F4F4B: ;
    PUSH32(esp, 5);
    goto loc_004F4ECD;

loc_004F4F52: ;
    edx = MEM32(ecx + 0x928);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(esi)) >> 32) & 1);
    edx = edx + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_004F4F65; /* jae: above or equal (unsigned >=) */

loc_004F4F5E: ;
    PUSH32(esp, 4);
    goto loc_004F4ECD;

loc_004F4F65: ;
    ecx = MEM32(ecx + 0x938);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(esi)) >> 32) & 1);
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004F4F6D: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_004F4F74: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004F4E24
 * Original: 0x004F4E24 - 0x004F4F79 (341 bytes, 111 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004F4E24(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004F4E24: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x914);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x910);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(ebx)) >> 32) & 1);
    edi = edi + ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -4) = edx;
    edx = MEM32(ecx + edx * 4 + 0x918);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(eax)) >> 32) & 1);
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(edi)) >> 32) & 1);
    edx = edx + edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 8) = edx;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(eax)) >> 32) & 1);
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ecx + 0x930)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x930), edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_004F4E5B; /* jne: not equal / not zero */

loc_004F4E51: ;
    eax = esi;
    if (((1) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(eax)) >> ((((1) & 31u)) - 1)) & 1);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(ecx + 0x930) = eax;

loc_004F4E5B: ;
    _fa = (uint32_t)(MEM32(ecx + 0x92C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x92C), edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_004F4E6D; /* jne: not equal / not zero */

loc_004F4E63: ;
    eax = esi;
    if (((1) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(eax)) >> ((((1) & 31u)) - 1)) & 1);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(ecx + 0x92C) = eax;

loc_004F4E6D: ;
    _fa = (uint32_t)(MEM32(ecx + 0x928)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x928), edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_004F4E80; /* jne: not equal / not zero */

loc_004F4E75: ;
    eax = esi;
    if (((2) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(eax)) >> ((((2) & 31u)) - 1)) & 1);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(ecx + 0x928) = eax;

loc_004F4E80: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_004F4E8F; /* jne: not equal / not zero */

loc_004F4E84: ;
    eax = esi;
    if (((3) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(eax)) >> ((((3) & 31u)) - 1)) & 1);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((3) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(ecx + 0x938) = eax;

loc_004F4E8F: ;
    eax = MEM32(ecx + 0x1A8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_004F4EA1; /* jne: not equal / not zero */

loc_004F4E99: ;
    eax = MEM32(ebp + -4);
    goto loc_004F4F74;

loc_004F4EA1: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x7918);
    PUSH32(esp, 0x64);
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ebx);
      edx = (uint32_t)(_dividend % (uint32_t)ebx); }
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_004F4EF5; /* jle: less or equal (signed <=) */

loc_004F4EB3: ;
    edx = MEM32(ecx + 0x910);
    MEM32(ecx + 0x914) = edx;
    edx = MEM32(ecx + 0x930);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(edi)) >> 32) & 1);
    edx = edx + edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_004F4ED3; /* jae: above or equal (unsigned >=) */

loc_004F4ECB: ;
    PUSH32(esp, 6);

loc_004F4ECD: ;
    POP32(esp, eax);
    goto loc_004F4F74;

loc_004F4ED3: ;
    edx = MEM32(ecx + 0x92C);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(edi)) >> 32) & 1);
    edx = edx + edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_004F4F4B; /* jb: below (unsigned <) */

loc_004F4EDF: ;
    edx = MEM32(ecx + 0x928);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(edi)) >> 32) & 1);
    edx = edx + edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_004F4F5E; /* jb: below (unsigned <) */

loc_004F4EEB: ;
    ecx = MEM32(ecx + 0x938);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(edi)) >> 32) & 1);
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_004F4F6D;

loc_004F4EF5: ;
    edi = MEM32(ecx + 0x1A8);
    eax = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x7530);
    PUSH32(esp, 0x64);
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ebx);
      edx = (uint32_t)(_dividend % (uint32_t)ebx); }
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_004F4F24; /* jge: greater or equal (signed >=) */

loc_004F4F0F: ;
    eax = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D60);
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ebx);
      edx = (uint32_t)(_dividend % (uint32_t)ebx); }
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_004F4E99; /* jg: greater (signed >) */

loc_004F4F24: ;
    eax = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D60);
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x64);
    POP32(esp, edi);
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)edi);
      edx = (uint32_t)(_dividend % (uint32_t)edi); }
    edx = MEM32(ecx + 0x930);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(esi)) >> 32) & 1);
    edx = edx + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_004F4ECB; /* jb: below (unsigned <) */

loc_004F4F3F: ;
    edx = MEM32(ecx + 0x92C);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(esi)) >> 32) & 1);
    edx = edx + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_004F4F52; /* jae: above or equal (unsigned >=) */

loc_004F4F4B: ;
    PUSH32(esp, 5);
    goto loc_004F4ECD;

loc_004F4F52: ;
    edx = MEM32(ecx + 0x928);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(esi)) >> 32) & 1);
    edx = edx + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_004F4F65; /* jae: above or equal (unsigned >=) */

loc_004F4F5E: ;
    PUSH32(esp, 4);
    goto loc_004F4ECD;

loc_004F4F65: ;
    ecx = MEM32(ecx + 0x938);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(esi)) >> 32) & 1);
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004F4F6D: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_004F4F74: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004F4F79
 * Original: 0x004F4F79 - 0x004F52B8 (831 bytes, 225 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004F4F79(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004F4F79: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 0x1A0)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1A0), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004F4FA3; /* jne: not equal / not zero */

loc_004F4F8B: ;
    _fa = (uint32_t)(MEM32(esi + 0x1DC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1DC), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004F5050; /* je: equal / zero */

loc_004F4F97: ;
    _fa = (uint32_t)(MEM32(esi + 0x4944)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x4944), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004F5050; /* je: equal / zero */

loc_004F4FA3: ;
    _fa = (uint32_t)(MEM32(esi + 0x25C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x25C), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004F4FE8; /* jne: not equal / not zero */

loc_004F4FAB: ;
    eax = MEM32(esi + 0x20C);
    ecx = MEM32(esi + 0x208);
    eax = ecx + eax * 2 + 0x20;
    _fb = (uint32_t)(MEM32(esi + 0x1B8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(esi + 0x1B8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F4FC8u); RECOMP_ABI_CALL(0x004F549Du, sub_004F549D); /* call 0x004F549D */

loc_004F4FC8: ;
    PUSH32(esp, MEM32(esi + 0x298));
    MEM32(esi + 0x260) = eax;
    _fb = (uint32_t)(0x1F) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0xFFFFFFE0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x25C) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F4FE5u); RECOMP_ABI_CALL(0x004F56B0u, sub_004F56B0); /* call 0x004F56B0 */

loc_004F4FE5: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004F4FE8: ;
    eax = ZX8(MEM8(esi + 0x1AC));
    PUSH32(esp, 1);
    PUSH32(esp, 4);
    PUSH32(esp, MEM32(esi + 0x148));
    PUSH32(esp, MEM32(esi + 0x25C));
    PUSH32(esp, MEM32(esi + 0x254));
    PUSH32(esp, MEM32(esi + 0x6A0));
    PUSH32(esp, MEM32(esi + 0x1A0));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + 0x19C));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x298));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F5025u); RECOMP_ABI_CALL(0x004F5AECu, sub_004F5AEC); /* call 0x004F5AEC */

loc_004F5025: ;
    ecx = MEM32(esi + 0x493C);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004F5050; /* je: equal / zero */

loc_004F5032: ;
    eax = MEM32(esi + 0x25C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x4940));
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(esi + 0x298));
    { uint32_t _icall_target = MEM32(0x923AEC); PUSH32(esp, 0x004F504Du); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x004F5047u); } /* indirect call */
    }

loc_004F504D: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004F5050: ;
    ecx = MEM32(esi + 0x1B0);
    eax = MEM32(esi + 0x23C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004F518E; /* jb: below (unsigned <) */

loc_004F5064: ;
    edx = MEM32(esi + 0x1B4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x240)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi + 0x240) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004F518E; /* jb: below (unsigned <) */

loc_004F5076: ;
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = ecx;
    ecx = MEM32(esi + 0x1B4);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(esi + 0x1B8);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esi + 0x1B0);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM32(eax + 0xC) = ecx;
    ecx = MEM32(esi + 0x1B4);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM32(eax + 0x10) = ecx;
    ecx = MEM32(esi + 0x1BC);
    MEM32(eax + 0x14) = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x1A0)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1A0), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004F512C; /* jne: not equal / not zero */

loc_004F50B4: ;
    _fa = (uint32_t)(MEM32(esi + 0x1DC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1DC), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004F50C4; /* je: equal / zero */

loc_004F50BC: ;
    _fa = (uint32_t)(MEM32(esi + 0x4944)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x4944), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004F512C; /* jne: not equal / not zero */

loc_004F50C4: ;
    ecx = MEM32(esi + 0x1B8);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx + ecx * 2;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(MEM32(esi + 0x21C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(esi + 0x21C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(esi + 0x254)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(esi + 0x254);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0x18) = ecx;
    ecx = MEM32(esi + 0x1BC);
    edx = MEM32(esi + 0x220);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx + ecx * 2;
    ecx = edx + ecx * 8;
    _fb = (uint32_t)(MEM32(esi + 0x254)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(esi + 0x254);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0x1C) = ecx;
    ecx = MEM32(esi + 0x1BC);
    edx = MEM32(esi + 0x224);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx + ecx * 2;
    ecx = edx + ecx * 8;
    _fb = (uint32_t)(MEM32(esi + 0x254)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(esi + 0x254);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0x20) = ecx;
    ecx = MEM32(esi + 0x21C);
    _fb = (uint32_t)(MEM32(esi + 0x254)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(esi + 0x254);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004F5124: ;
    MEM32(eax + 0x24) = ecx;
    goto loc_004F52B4;

loc_004F512C: ;
    ecx = MEM32(esi + 0x1B8);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx + ecx * 2;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(MEM32(esi + 0x21C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(esi + 0x21C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(esi + 0x25C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(esi + 0x25C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0x18) = ecx;
    ecx = MEM32(esi + 0x1BC);
    edx = MEM32(esi + 0x220);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx + ecx * 2;
    ecx = edx + ecx * 8;
    _fb = (uint32_t)(MEM32(esi + 0x25C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(esi + 0x25C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0x1C) = ecx;
    ecx = MEM32(esi + 0x1BC);
    edx = MEM32(esi + 0x224);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx + ecx * 2;
    ecx = edx + ecx * 8;
    _fb = (uint32_t)(MEM32(esi + 0x25C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(esi + 0x25C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0x20) = ecx;
    ecx = MEM32(esi + 0x21C);
    _fb = (uint32_t)(MEM32(esi + 0x25C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(esi + 0x25C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_004F5124;

loc_004F518E: ;
    edi = MEM32(ebp + 0xC);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = eax;
    eax = MEM32(esi + 0x240);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 4) = eax;
    PUSH32(esp, ebx);
    ebx = MEM32(edi);
    eax = ebx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax;
    eax = MEM32(edi + 4);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(edi + 0x10) = eax;
    MEM32(edi + 8) = ebx;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((1) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(edi + 0xC) = ecx;
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    MEM32(edi + 0x14) = ecx;
    edx = MEM32(esi + 0x264);
    MEM32(edi + 0x18) = edx;
    edx = MEM32(edi + 4);
    edx = (uint32_t)((int32_t)edx * (int32_t)ebx);
    ebx = MEM32(esi + 0x264);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0x1C) = ebx;
    _fb = (uint32_t)(MEM32(esi + 0x264)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(esi + 0x264);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    MEM32(edi + 0x20) = eax;
    eax = MEM32(esi + 0x264);
    MEM32(edi + 0x24) = eax;
    _fa = (uint32_t)(MEM32(esi + 0x1A0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1A0), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004F5205; /* je: equal / zero */

loc_004F51FD: ;
    PUSH32(esp, MEM32(esi + 0x25C));
    goto loc_004F520B;

loc_004F5205: ;
    PUSH32(esp, MEM32(esi + 0x254));

loc_004F520B: ;
    PUSH32(esp, MEM32(esi + 0x298));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F5216u); RECOMP_ABI_CALL(0x004F8917u, sub_004F8917); /* call 0x004F8917 */

loc_004F5216: ;
    eax = MEM32(edi + 4);
    _fb = (uint32_t)(MEM32(esi + 0x240)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esi + 0x240);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(edi);
    _fb = (uint32_t)(MEM32(esi + 0x23C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(esi + 0x23C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(edi + 0xC);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(edi + 8));
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(edi + 0x18) = MEM32(edi + 0x18) + eax;
    _fa = (uint32_t)(MEM32(edi + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi + 0x23C);
    ecx = MEM32(edi + 0x14);
    MEM32(edi) = eax;
    eax = MEM32(esi + 0x240);
    MEM32(edi + 4) = eax;
    eax = MEM32(edi + 0x10);
    MEM32(ebp + 8) = edx;
    edx = MEM32(esi + 0x240);
    ebx = eax;
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(ebp + 8);
    { uint32_t _sv=(uint32_t)(ebx), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        ebx = _sv >> _sc;
        _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ebx = (uint32_t)((int32_t)ebx * (int32_t)ecx);
    ecx = MEM32(esi + 0x23C);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(edi + 0x1C) = MEM32(edi + 0x1C) + ebx;
    _fa = (uint32_t)(MEM32(edi + 0x1C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esi + 0x240);
    edx = MEM32(esi + 0x23C);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ebp + 8);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(edi + 0x14));
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(edi + 0x20) = MEM32(edi + 0x20) + eax;
    _fa = (uint32_t)(MEM32(edi + 0x20)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi + 0x23C);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM32(edi + 0xC) = eax;
    eax = MEM32(esi + 0x240);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM32(edi + 0x10) = eax;
    POP32(esp, ebx);

loc_004F52B4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_004F52B8
 * Original: 0x004F52B8 - 0x004F5417 (351 bytes, 96 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004F52B8(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004F52B8: ;
    PUSH32(esp, MEM32(esp + 4));
    MEM32(ebx + 0x1E8) = eax;
    eax = ebx + 0x450C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004F52CEu); RECOMP_ABI_CALL(0x004F9B4Fu, sub_004F9B4F); /* call 0x004F9B4F */

loc_004F52CE: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x004F52D4u); RECOMP_ABI_CALL(0x004FA0C4u, sub_004FA0C4); /* call 0x004FA0C4 */

loc_004F52D4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004F52DF; /* jne: not equal / not zero */

loc_004F52DB: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

loc_004F52DF: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebx + 0x944)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x944), esi (32-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_004F52F4; /* jne: not equal / not zero */

loc_004F52EB: ;
    _fa = (uint32_t)(MEM8(ebx + 0x19D)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx + 0x19D), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004F5329; /* jne: not equal / not zero */

loc_004F52F4: ;
    eax = MEM32(ebx + 0x451C);
    _fb = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebx + 0x4520)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x4520), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004F531A; /* je: equal / zero */

loc_004F5306: ;
    MEM32(ebx + 0x190) = esi;
    MEM32(ebx + 0x194) = esi;
    MEM32(ebx + 0x198) = eax;
    goto loc_004F5329;

loc_004F531A: ;
    PUSH32(esp, eax);
    eax = ebx + 0x170;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004F5327u); RECOMP_ABI_CALL(0x004F9ADCu, sub_004F9ADC); /* call 0x004F9ADC */

loc_004F5327: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_004F5329: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x004F532Fu); RECOMP_ABI_CALL(0x004F96CFu, sub_004F96CF); /* call 0x004F96CF */

loc_004F532F: ;
    ecx = MEM32(ebx + 0x254);
    eax = ebx + 0x244;
    edx = MEM32(eax);
    PUSH32(esp, edx);
    PUSH32(esp, MEM32(ebx + 0x298));
    MEM32(ebx + 0x254) = edx;
    MEM32(eax) = ecx;
    PUSH32(esp, 0x004F5351u); RECOMP_ABI_CALL(0x004F71C8u, sub_004F71C8); /* call 0x004F71C8 */

loc_004F5351: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM8(ebx + 0x1AC)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx + 0x1AC), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004F5365; /* je: equal / zero */

loc_004F535D: ;
    _fa = (uint32_t)(MEM32(ebx + 0x698)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x698), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004F538E; /* je: equal / zero */

loc_004F5365: ;
    eax = MEM32(ebx + 0x20C);
    ecx = MEM32(ebx + 0x208);
    esi = MEM32(ebx + 0x254);
    edi = MEM32(ebx + 0x24C);
    ecx = ecx + eax * 2;
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

loc_004F538E: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x923770); PUSH32(esp, 0x004F5394u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004F538Eu); } /* indirect call */
    }

loc_004F5394: ;
    _fa = (uint32_t)(MEM8(ebx + 0x1AC)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx + 0x1AC), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004F53AD; /* jne: not equal / not zero */

loc_004F539D: ;
    eax = MEM32(ebx + 0x13C);
    eax = MEM32(eax);
    MEM32(ebx + 0x6A0) = eax;
    goto loc_004F53C9;

loc_004F53AD: ;
    edx = MEM32(ebx + 0x13C);
    edx = MEM32(edx);
    eax = ebx + 0x6A0;
    ecx = MEM32(eax);
    ecx = ecx + ecx * 2;
    ecx = edx + ecx + 2;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM32(eax) = ecx;

loc_004F53C9: ;
    esi = ebx + 0x160;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x1E8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx + 0x1E8) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004F540C; /* jbe: below or equal (unsigned <=) */

loc_004F53D9: ;
    PUSH32(esp, 0x8D9860);
    PUSH32(esp, 0x8D9864);
    PUSH32(esp, 0x004F53E8u); RECOMP_ABI_CALL(0x005CF316u, sub_005CF316); /* call 0x005CF316 */

loc_004F53E8: ;
    PUSH32(esp, MEM32(ebx + 0x1E8));
    edi = eax;
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, MEM32(0x9125CC));
    PUSH32(esp, 0x8D9874);
    PUSH32(esp, edi);
    PUSH32(esp, 0x004F5403u); RECOMP_ABI_CALL(0x005D01A8u, sub_005D01A8); /* call 0x005D01A8 */

loc_004F5403: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x004F5409u); RECOMP_ABI_CALL(0x005CF269u, sub_005CF269); /* call 0x005CF269 */

loc_004F5409: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004F540C: ;
    MEM32(0x9125CC) = MEM32(0x9125CC) + 1;
    _fa = (uint32_t)(MEM32(0x9125CC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004F5417
 * Original: 0x004F5417 - 0x004F542C (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004F5417(void)
{

loc_004F5417: ;
    { extern void nhl07_trace_vp6_decode(uint32_t); nhl07_trace_vp6_decode(0); }
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(esp + 0xC));
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, 0x004F5429u); RECOMP_ABI_CALL(0x004F52B8u, sub_004F52B8); /* call 0x004F52B8 */

loc_004F5429: ;
    { extern void nhl07_trace_vp6_decode(uint32_t); nhl07_trace_vp6_decode(1); }
    POP32(esp, ecx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_004F542C
 * Original: 0x004F542C - 0x004F546B (63 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004F542C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004F542C: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004F5466; /* je: equal / zero */

loc_004F5437: ;
    _fb = (uint32_t)(0x13C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x13C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x004F5442u); RECOMP_ABI_CALL(0x004F6333u, sub_004F6333); /* call 0x004F6333 */

loc_004F5442: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(0x298) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x298;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x004F544Fu); RECOMP_ABI_CALL(0x004F58B9u, sub_004F58B9); /* call 0x004F58B9 */

loc_004F544F: ;
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x004F5456u); RECOMP_ABI_CALL(0x004F6C53u, sub_004F6C53); /* call 0x004F6C53 */

loc_004F5456: ;
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x004F545Du); RECOMP_ABI_CALL(0x004F6EB6u, sub_004F6EB6); /* call 0x004F6EB6 */

loc_004F545D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004F5463u); RECOMP_ABI_CALL(0x004F4AEDu, sub_004F4AED); /* call 0x004F4AED */

loc_004F5463: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004F5466: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004F549D
 * Original: 0x004F549D - 0x004F54A8 (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004F549D(void)
{

loc_004F549D: ;
    PUSH32(esp, MEM32(esp + 4));
    PUSH32(esp, 0x004F54A6u); RECOMP_ABI_CALL(0x004F4C34u, sub_004F4C34); /* call 0x004F4C34 */

loc_004F54A6: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004F54A8
 * Original: 0x004F54A8 - 0x004F54AD (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004F54A8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004F54A8: ;
    g_seh_ebp = ebp; sub_004F4C67(); return; /* tail jmp 0x004F4C67 */

}

/**
 * sub_004F54AD
 * Original: 0x004F54AD - 0x004F54DE (49 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004F54AD(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004F54AD: ;
    SET_LO8(eax, MEM8(esp + 8));
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    SET_LO8(ebx, LO8(eax));
    SET_HI8(ebx, LO8(ebx));
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    edx = ecx;
    esi = edi;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = ebx;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x10) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    SET_LO16(eax, LO16(ebx));
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_004F54DE
 * Original: 0x004F54DE - 0x004F5507 (41 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004F54DE(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004F54DE: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(esp + 0xC));
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004F54EFu); RECOMP_ABI_CALL(0x004F4C34u, sub_004F4C34); /* call 0x004F4C34 */

loc_004F54EF: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004F5502; /* je: equal / zero */

loc_004F54F6: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x004F54FFu); RECOMP_ABI_CALL(0x004F54ADu, sub_004F54AD); /* call 0x004F54AD */

loc_004F54FF: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004F5502: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004F555D
 * Original: 0x004F555D - 0x004F560F (178 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004F555D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004F555D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    ecx = 0xFFFFFF00u;
    edx = 0xFF;

loc_004F556A: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_004F5572; /* jge: greater or equal (signed >=) */

loc_004F556E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_004F557A;

loc_004F5572: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    eax = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_004F557A; /* jle: less or equal (signed <=) */

loc_004F5578: ;
    eax = edx;

loc_004F557A: ;
    MEM8(ecx + 0x923C20) = LO8(eax);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x200 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004F556A; /* jl: less (signed <) */

loc_004F5589: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0x10);
    MEM32(0x9236E0) = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(0x9236D8) = eax;
    eax = 0x923580;
    MEM32(0x9236C8) = ecx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_004F55A9: ;
    edx = MEM32(ecx + eax);
    MEM32(eax) = edx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x923680) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x923680 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004F55A9; /* jl: less (signed <) */

loc_004F55B8: ;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), 6 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004F55D4; /* jb: below (unsigned <) */

loc_004F55BE: ;
    MEM32(0x9236BC) = 0x8D9F48;
    MEM32(0x9236DC) = 0x8D9B48;
    goto loc_004F5604;

loc_004F55D4: ;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), 5 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004F55F0; /* jb: below (unsigned <) */

loc_004F55DA: ;
    MEM32(0x9236BC) = 0x8D9E48;
    MEM32(0x9236DC) = 0x8D9A48;
    goto loc_004F5604;

loc_004F55F0: ;
    MEM32(0x9236BC) = 0x8D9D48;
    MEM32(0x9236DC) = 0x8D9948;

loc_004F5604: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004F560Cu); RECOMP_ABI_CALL(0x004FA0F7u, sub_004FA0F7); /* call 0x004FA0F7 */

loc_004F560C: ;
    POP32(esp, ecx);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_004F5610
 * Original: 0x004F5610 - 0x004F56B0 (160 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004F5610(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004F5610: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = esi + 0xB8;
    eax = MEM32(edi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004F562C; /* je: equal / zero */

loc_004F5625: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004F562Bu); RECOMP_ABI_CALL(0x004F54A8u, sub_004F54A8); /* call 0x004F54A8 */

loc_004F562B: ;
    POP32(esp, ecx);

loc_004F562C: ;
    MEM32(edi) = ebx;
    edi = esi + 0xA0;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esi + 0xBC) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_004F5647; /* je: equal / zero */

loc_004F5640: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004F5646u); RECOMP_ABI_CALL(0x004F54A8u, sub_004F54A8); /* call 0x004F54A8 */

loc_004F5646: ;
    POP32(esp, ecx);

loc_004F5647: ;
    MEM32(edi) = ebx;
    edi = esi + 0xA4;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esi + 0x34) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_004F565F; /* je: equal / zero */

loc_004F5658: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004F565Eu); RECOMP_ABI_CALL(0x004F54A8u, sub_004F54A8); /* call 0x004F54A8 */

loc_004F565E: ;
    POP32(esp, ecx);

loc_004F565F: ;
    MEM32(edi) = ebx;
    edi = esi + 0xA8;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esi + 0x3C) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_004F5677; /* je: equal / zero */

loc_004F5670: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004F5676u); RECOMP_ABI_CALL(0x004F54A8u, sub_004F54A8); /* call 0x004F54A8 */

loc_004F5676: ;
    POP32(esp, ecx);

loc_004F5677: ;
    MEM32(edi) = ebx;
    edi = esi + 0xAC;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esi + 0x24) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_004F568F; /* je: equal / zero */

loc_004F5688: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004F568Eu); RECOMP_ABI_CALL(0x004F54A8u, sub_004F54A8); /* call 0x004F54A8 */

loc_004F568E: ;
    POP32(esp, ecx);

loc_004F568F: ;
    MEM32(edi) = ebx;
    edi = esi + 0xB0;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esi + 0x28) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_004F56A7; /* je: equal / zero */

loc_004F56A0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004F56A6u); RECOMP_ABI_CALL(0x004F54A8u, sub_004F54A8); /* call 0x004F54A8 */

loc_004F56A6: ;
    POP32(esp, ecx);

loc_004F56A7: ;
    MEM32(edi) = ebx;
    POP32(esp, edi);
    MEM32(esi + 0x2C) = ebx;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_004F56B0
 * Original: 0x004F56B0 - 0x004F57D1 (289 bytes, 106 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004F56B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004F56B0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004F56BCu); RECOMP_ABI_CALL(0x004F5610u, sub_004F5610); /* call 0x004F5610 */

loc_004F56BC: ;
    eax = MEM32(esi + 0xB4);
    ecx = MEM32(esi + 0x44);
    eax = ecx + eax * 2;
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esi + 0x98));
    eax = eax + eax * 2;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004F56E0u); RECOMP_ABI_CALL(0x004F549Du, sub_004F549D); /* call 0x004F549D */

loc_004F56E0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esi + 0xB8) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_004F56FB; /* jne: not equal / not zero */

loc_004F56ED: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004F56F3u); RECOMP_ABI_CALL(0x004F5610u, sub_004F5610); /* call 0x004F5610 */

loc_004F56F3: ;
    POP32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_004F57CE;

loc_004F56FB: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0xFFFFFFE0u);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x1F) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    edi = 0x820;
    PUSH32(esp, edi);
    MEM32(esi + 0xBC) = eax;
    PUSH32(esp, 0x004F5717u); RECOMP_ABI_CALL(0x004F549Du, sub_004F549D); /* call 0x004F549D */

loc_004F5717: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi + 0xA0) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_004F57B6; /* je: equal / zero */

loc_004F5727: ;
    _fb = (uint32_t)(0x1F) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    MEM32(esi + 0x34) = eax;
    PUSH32(esp, 0x004F5736u); RECOMP_ABI_CALL(0x004F549Du, sub_004F549D); /* call 0x004F549D */

loc_004F5736: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi + 0xA4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_004F57B6; /* je: equal / zero */

loc_004F5742: ;
    _fb = (uint32_t)(0x1F) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x3C) = eax;
    eax = MEM32(esi + 0x8C);
    eax = eax * 4 + 0x20;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004F575Eu); RECOMP_ABI_CALL(0x004F549Du, sub_004F549D); /* call 0x004F549D */

loc_004F575E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi + 0xA8) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_004F57B6; /* je: equal / zero */

loc_004F576A: ;
    _fb = (uint32_t)(0x1F) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x24) = eax;
    eax = MEM32(esi + 0x8C);
    eax = eax * 4 + 0x20;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004F5786u); RECOMP_ABI_CALL(0x004F549Du, sub_004F549D); /* call 0x004F549D */

loc_004F5786: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi + 0xAC) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_004F57B6; /* je: equal / zero */

loc_004F5792: ;
    _fb = (uint32_t)(0x1F) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x28) = eax;
    eax = MEM32(esi + 0x8C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004F57AAu); RECOMP_ABI_CALL(0x004F549Du, sub_004F549D); /* call 0x004F549D */

loc_004F57AA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi + 0xB0) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_004F57C1; /* jne: not equal / not zero */

loc_004F57B6: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004F57BCu); RECOMP_ABI_CALL(0x004F5610u, sub_004F5610); /* call 0x004F5610 */

loc_004F57BC: ;
    POP32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_004F57CC;

loc_004F57C1: ;
    _fb = (uint32_t)(0x1F) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x2C) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_004F57CC: ;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_004F57CE: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_004F57D1
 * Original: 0x004F57D1 - 0x004F587F (174 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004F57D1(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004F57D1: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, 0xE);
    edx = eax + 0x40;
    edi = edx;
    POP32(esp, ecx);
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
    esi = MEM32(edx);
    ecx = MEM32(eax + 0x44);
    ebx = MEM32(eax + 0x4C);
    edi = MEM32(eax + 0x48);
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(3) & 31u;
      if (_sc) {
        esi = _sv >> _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = ecx;
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(3) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM32(eax + 0x94) = edx;
    edx = (uint32_t)((int32_t)edx * (int32_t)esi);
    MEM32(eax + 0x9C) = ebx;
    ebx = edx;
    MEM32(eax + 0x84) = edx;
    { uint32_t _sv=(uint32_t)(ebx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        ebx = _sv >> _sc;
        _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = edx + ebx * 2;
    MEM32(eax + 0x8C) = edx;
    edx = esi;
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(3) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM32(eax + 0x90) = esi;
    esi = edx;
    edx = edi;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = edi + 1;
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    esi = (uint32_t)((int32_t)esi * (int32_t)edx);
    MEM32(eax + 0x98) = edi;
    MEM32(eax + 0x78) = esi;
    esi = ecx + edx * 2;
    esi = (uint32_t)((int32_t)esi * (int32_t)edi);
    edi = MEM32(eax + 0x4C);
    MEM32(eax + 0x88) = ebx;
    ebx = edx;
    { uint32_t _sv=(uint32_t)(ebx), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        ebx = _sv >> _sc;
        _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = (uint32_t)((int32_t)edi * (int32_t)ebx);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM32(eax + 0x7C) = edi;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0xB4) = edx;
    edx = MEM32(eax + 0x4C);
    edi = ebx;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx);
    edi = (uint32_t)((int32_t)edi * (int32_t)edx);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0x80) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_004F587F
 * Original: 0x004F587F - 0x004F58B9 (58 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004F587F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004F587F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0xC8);
    PUSH32(esp, 0x004F588Cu); RECOMP_ABI_CALL(0x004F549Du, sub_004F549D); /* call 0x004F549D */

loc_004F588C: ;
    esi = eax;
    POP32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004F58B7; /* je: equal / zero */

loc_004F5896: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x32);
    POP32(esp, ecx);
    PUSH32(esp, MEM32(esp + 0xC));
    edi = esi;
    PUSH32(esp, esi);
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    PUSH32(esp, 0x004F58A8u); RECOMP_ABI_CALL(0x004F57D1u, sub_004F57D1); /* call 0x004F57D1 */

loc_004F58A8: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi + 0xC4) = 1;
    eax = esi;
    POP32(esp, edi);

loc_004F58B7: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
