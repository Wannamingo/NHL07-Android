/**
 * nhl_07_recomp - Recompiled code chunk 216
 * Functions: 250 (0x004C4143 - 0x004C7258)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_004C4143
 * Original: 0x004C4143 - 0x004C415E (27 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C4143(void)
{

loc_004C4143: ;
    PUSH32(esp, 0x004C4148u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C4148: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x866080);
    ecx = esi + -24;
    PUSH32(esp, 0x004C415Au); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C415A: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C4148
 * Original: 0x004C4148 - 0x004C415E (22 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C4148(void)
{

loc_004C4148: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x866080);
    ecx = esi + -24;
    PUSH32(esp, 0x004C415Au); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C415A: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C415E
 * Original: 0x004C415E - 0x004C4181 (35 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C415E(void)
{

loc_004C415E: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esi + 0xC;
    PUSH32(esp, 0x004C416Bu); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C416B: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x866098);
    ecx = esi + -24;
    PUSH32(esp, 0x004C417Du); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C417D: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C4181
 * Original: 0x004C4181 - 0x004C41EA (105 bytes, 34 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C4181(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C4181: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x8660C0);
    PUSH32(esp, MEM32(esp + 0x14));
    esi = ecx;
    PUSH32(esp, 0x004C4194u); RECOMP_ABI_CALL(0x004C17F2u, sub_004C17F2); /* call 0x004C17F2 */

loc_004C4194: ;
    edi = esi + 0x18;
    ecx = edi;
    PUSH32(esp, 0x004C419Eu); RECOMP_ABI_CALL(0x00607E66u, sub_00607E66); /* call 0x00607E66 */

loc_004C419E: ;
    MEM32(edi) = 0x8660B4;
    MEM32(esi) = 0x8660B0;
    edi = esi + 0x1C;
    MEM32(edi) = MEM32(edi) & 0;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = esi + 0x20;
    MEM32(ebx) = MEM32(ebx) & 0;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x24) = MEM32(esi + 0x24) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, MEM32(0x90E444));
    ecx = edi;
    PUSH32(esp, 0x004C41C7u); RECOMP_ABI_CALL(0x004AFE27u, sub_004AFE27); /* call 0x004AFE27 */

loc_004C41C7: ;
    PUSH32(esp, 0);
    ecx = 0x90E444;
    PUSH32(esp, 0x004C41D3u); RECOMP_ABI_CALL(0x004AFE27u, sub_004AFE27); /* call 0x004AFE27 */

loc_004C41D3: ;
    ecx = MEM32(edi);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x004C41DAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C41D7u); } /* indirect call */
    }

loc_004C41DA: ;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x004C41E2u); RECOMP_ABI_CALL(0x004C299Eu, sub_004C299E); /* call 0x004C299E */

loc_004C41E2: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C41EA
 * Original: 0x004C41EA - 0x004C41F2 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C41EA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C41EA: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004CD575(); return; /* tail jmp 0x004CD575 */

}

/**
 * sub_004C41F2
 * Original: 0x004C41F2 - 0x004C4245 (83 bytes, 29 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C41F2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C41F2: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = esi + 0x18;
    MEM32(esi) = 0x8660B0;
    MEM32(edi) = 0x8660B4;
    if (CMP_EQ(_fa, _fb)) goto loc_004C4211; /* je: equal / zero */

loc_004C420C: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004C4211u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C420Eu); } /* indirect call */
    }

loc_004C4211: ;
    ecx = MEM32(esi + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C421D; /* je: equal / zero */

loc_004C4218: ;
    PUSH32(esp, 0x004C421Du); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004C421D: ;
    ecx = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C4229; /* je: equal / zero */

loc_004C4224: ;
    PUSH32(esp, 0x004C4229u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004C4229: ;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C4235; /* je: equal / zero */

loc_004C4230: ;
    PUSH32(esp, 0x004C4235u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004C4235: ;
    ecx = edi;
    PUSH32(esp, 0x004C423Cu); RECOMP_ABI_CALL(0x00607E6Fu, sub_00607E6F); /* call 0x00607E6F */

loc_004C423C: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004C1837(); return; /* tail jmp 0x004C1837 */

}

/**
 * sub_004C4245
 * Original: 0x004C4245 - 0x004C4249 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C4245(void)
{

loc_004C4245: ;
    eax = MEM32(ecx + 0x1C);
    esp += 4; return; /* ret */

}

/**
 * sub_004C4249
 * Original: 0x004C4249 - 0x004C4250 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C4249(void)
{

loc_004C4249: ;
    eax = MEM32(ecx + 0x20);
    eax = MEM32(eax + 0x14);
    esp += 4; return; /* ret */

}

/**
 * sub_004C4250
 * Original: 0x004C4250 - 0x004C4271 (33 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C4250(void)
{

loc_004C4250: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 8));
    esi = ecx;
    eax = MEM32(esi + 0x20);
    ecx = eax + 8;
    PUSH32(esp, 0x004C4262u); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004C4262: ;
    esi = MEM32(esi + 0x1C);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x004C426Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C426Au); } /* indirect call */
    }

loc_004C426D: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C4271
 * Original: 0x004C4271 - 0x004C428A (25 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C4271(void)
{

loc_004C4271: ;
    eax = MEM32(ecx + 0x20);
    PUSH32(esp, MEM32(esp + 4));
    ecx = eax + 8;
    PUSH32(esp, 0x004C4280u); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004C4280: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004C4287u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C4284u); } /* indirect call */
    }

loc_004C4287: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C428A
 * Original: 0x004C428A - 0x004C4316 (140 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C428A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C428A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    MEM32(esp + 8) = ecx;
    PUSH32(esp, 0x004C4297u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004C4297: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x004C429Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C429Bu); } /* indirect call */
    }

loc_004C429E: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x004C42A5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C42A2u); } /* indirect call */
    }

loc_004C42A5: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x004C42ACu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C42A9u); } /* indirect call */
    }

loc_004C42AC: ;
    ebx = MEM32(eax + 0x14);
    _cf = 0; /* logical op clears CF */
    MEM32(esp + 4) = MEM32(esp + 4) & 0;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_BE(_fa, _fb)) goto loc_004C4311; /* jbe: below or equal (unsigned <=) */

loc_004C42B8: ;
    PUSH32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, edi);

loc_004C42C2: ;
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, 0x004C42CFu); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004C42CF: ;
    esi = eax;
    eax = MEM32(esp + 0x14);
    edi = MEM32(eax + 0x1C);
    eax = MEM32(esi);
    ebp = MEM32(edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004C42E1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C42DEu); } /* indirect call */
    }

loc_004C42E1: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebp + 0x14); PUSH32(esp, 0x004C42E7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C42E4u); } /* indirect call */
    }

loc_004C42E7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_004C42F7; /* jne: not equal / not zero */

loc_004C42EB: ;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_004C42C2; /* jb: below (unsigned <) */

loc_004C42F5: ;
    goto loc_004C430E;

loc_004C42F7: ;
    eax = MEM32(esp + 0x14);
    edx = MEM32(esi);
    ecx = eax;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x18)) >> 32) & 1);
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x004C430Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C430Bu); } /* indirect call */
    }

loc_004C430E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);

loc_004C4311: ;
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_004C4316
 * Original: 0x004C4316 - 0x004C43CF (185 bytes, 46 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C4316(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C4316: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x866140);
    PUSH32(esp, MEM32(esp + 0x14));
    esi = ecx;
    PUSH32(esp, 0x004C4329u); RECOMP_ABI_CALL(0x004C17F2u, sub_004C17F2); /* call 0x004C17F2 */

loc_004C4329: ;
    edi = esi + 0x18;
    ecx = edi;
    PUSH32(esp, 0x004C4333u); RECOMP_ABI_CALL(0x00607FCEu, sub_00607FCE); /* call 0x00607FCE */

loc_004C4333: ;
    ebx = esi + 0x1C;
    ecx = ebx;
    PUSH32(esp, 0x004C433Du); RECOMP_ABI_CALL(0x00607FA1u, sub_00607FA1); /* call 0x00607FA1 */

loc_004C433D: ;
    ecx = esi + 0x20;
    PUSH32(esp, 0x004C4345u); RECOMP_ABI_CALL(0x00607F74u, sub_00607F74); /* call 0x00607F74 */

loc_004C4345: ;
    ecx = esi + 0x24;
    PUSH32(esp, 0x004C434Du); RECOMP_ABI_CALL(0x00607F47u, sub_00607F47); /* call 0x00607F47 */

loc_004C434D: ;
    ecx = esi + 0x28;
    PUSH32(esp, 0x004C4355u); RECOMP_ABI_CALL(0x00607F1Au, sub_00607F1A); /* call 0x00607F1A */

loc_004C4355: ;
    ecx = esi + 0x2C;
    PUSH32(esp, 0x004C435Du); RECOMP_ABI_CALL(0x00607EEDu, sub_00607EED); /* call 0x00607EED */

loc_004C435D: ;
    ecx = esi + 0x30;
    PUSH32(esp, 0x004C4365u); RECOMP_ABI_CALL(0x00607EC0u, sub_00607EC0); /* call 0x00607EC0 */

loc_004C4365: ;
    ecx = esi + 0x34;
    PUSH32(esp, 0x004C436Du); RECOMP_ABI_CALL(0x00607E93u, sub_00607E93); /* call 0x00607E93 */

loc_004C436D: ;
    MEM32(esi) = 0x86613C;
    MEM32(edi) = 0x866130;
    MEM32(ebx) = 0x866124;
    MEM32(esi + 0x20) = 0x866118;
    MEM32(esi + 0x24) = 0x86610C;
    MEM32(esi + 0x28) = 0x866100;
    MEM32(esi + 0x2C) = 0x8660F4;
    MEM32(esi + 0x30) = 0x8660E8;
    MEM32(esi + 0x34) = 0x8660DC;
    MEM32(esi + 0x38) = MEM32(esi + 0x38) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x38)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, MEM32(0x90E468));
    ecx = esi + 0x3C;
    PUSH32(esp, 0x004C43BBu); RECOMP_ABI_CALL(0x004ABC3Eu, sub_004ABC3E); /* call 0x004ABC3E */

loc_004C43BB: ;
    PUSH32(esp, 0);
    ecx = 0x90E468;
    PUSH32(esp, 0x004C43C7u); RECOMP_ABI_CALL(0x004AFE27u, sub_004AFE27); /* call 0x004AFE27 */

loc_004C43C7: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C43CF
 * Original: 0x004C43CF - 0x004C43D7 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C43CF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C43CF: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004CD591(); return; /* tail jmp 0x004CD591 */

}

/**
 * sub_004C43D7
 * Original: 0x004C43D7 - 0x004C43DF (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C43D7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C43D7: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004CD591(); return; /* tail jmp 0x004CD591 */

}

/**
 * sub_004C43DF
 * Original: 0x004C43DF - 0x004C43E7 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C43DF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C43DF: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004CD591(); return; /* tail jmp 0x004CD591 */

}

/**
 * sub_004C43E7
 * Original: 0x004C43E7 - 0x004C43EF (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C43E7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C43E7: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x24;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004CD591(); return; /* tail jmp 0x004CD591 */

}

/**
 * sub_004C43EF
 * Original: 0x004C43EF - 0x004C43F7 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C43EF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C43EF: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x28;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004CD591(); return; /* tail jmp 0x004CD591 */

}

/**
 * sub_004C43F7
 * Original: 0x004C43F7 - 0x004C43FF (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C43F7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C43F7: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x2C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004CD591(); return; /* tail jmp 0x004CD591 */

}

/**
 * sub_004C43FF
 * Original: 0x004C43FF - 0x004C4407 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C43FF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C43FF: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004CD591(); return; /* tail jmp 0x004CD591 */

}

/**
 * sub_004C4407
 * Original: 0x004C4407 - 0x004C440F (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C4407(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C4407: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x34;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004CD591(); return; /* tail jmp 0x004CD591 */

}

/**
 * sub_004C440F
 * Original: 0x004C440F - 0x004C44C2 (179 bytes, 49 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C440F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C440F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x38);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = esi + 0x18;
    ebx = esi + 0x1C;
    MEM32(esi) = 0x86613C;
    MEM32(edi) = 0x866130;
    MEM32(ebx) = 0x866124;
    MEM32(esi + 0x20) = 0x866118;
    MEM32(esi + 0x24) = 0x86610C;
    MEM32(esi + 0x28) = 0x866100;
    MEM32(esi + 0x2C) = 0x8660F4;
    MEM32(esi + 0x30) = 0x8660E8;
    MEM32(esi + 0x34) = 0x8660DC;
    if (CMP_EQ(_fa, _fb)) goto loc_004C4462; /* je: equal / zero */

loc_004C445D: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004C4462u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C445Fu); } /* indirect call */
    }

loc_004C4462: ;
    ecx = MEM32(esi + 0x3C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C446E; /* je: equal / zero */

loc_004C4469: ;
    PUSH32(esp, 0x004C446Eu); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004C446E: ;
    ecx = MEM32(esi + 0x38);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C447A; /* je: equal / zero */

loc_004C4475: ;
    PUSH32(esp, 0x004C447Au); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004C447A: ;
    ecx = esi + 0x34;
    PUSH32(esp, 0x004C4482u); RECOMP_ABI_CALL(0x00607E9Cu, sub_00607E9C); /* call 0x00607E9C */

loc_004C4482: ;
    ecx = esi + 0x30;
    PUSH32(esp, 0x004C448Au); RECOMP_ABI_CALL(0x00607EC9u, sub_00607EC9); /* call 0x00607EC9 */

loc_004C448A: ;
    ecx = esi + 0x2C;
    PUSH32(esp, 0x004C4492u); RECOMP_ABI_CALL(0x00607EF6u, sub_00607EF6); /* call 0x00607EF6 */

loc_004C4492: ;
    ecx = esi + 0x28;
    PUSH32(esp, 0x004C449Au); RECOMP_ABI_CALL(0x00607F23u, sub_00607F23); /* call 0x00607F23 */

loc_004C449A: ;
    ecx = esi + 0x24;
    PUSH32(esp, 0x004C44A2u); RECOMP_ABI_CALL(0x00607F50u, sub_00607F50); /* call 0x00607F50 */

loc_004C44A2: ;
    ecx = esi + 0x20;
    PUSH32(esp, 0x004C44AAu); RECOMP_ABI_CALL(0x00607F7Du, sub_00607F7D); /* call 0x00607F7D */

loc_004C44AA: ;
    ecx = ebx;
    PUSH32(esp, 0x004C44B1u); RECOMP_ABI_CALL(0x00607FAAu, sub_00607FAA); /* call 0x00607FAA */

loc_004C44B1: ;
    ecx = edi;
    PUSH32(esp, 0x004C44B8u); RECOMP_ABI_CALL(0x00607FD7u, sub_00607FD7); /* call 0x00607FD7 */

loc_004C44B8: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_004C1837(); return; /* tail jmp 0x004C1837 */

}

/**
 * sub_004C44C2
 * Original: 0x004C44C2 - 0x004C44C6 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C44C2(void)
{

loc_004C44C2: ;
    eax = MEM32(ecx + 0x3C);
    esp += 4; return; /* ret */

}

/**
 * sub_004C44C6
 * Original: 0x004C44C6 - 0x004C44E3 (29 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C44C6(void)
{

loc_004C44C6: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x3C);
    eax = MEM32(ecx);
    edx = esi + 0x28;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0xC4); PUSH32(esp, 0x004C44D8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C44D2u); } /* indirect call */
    }

loc_004C44D8: ;
    PUSH32(esp, eax);
    ecx = esi + 0x38;
    PUSH32(esp, 0x004C44E1u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C44E1: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004C44E3
 * Original: 0x004C44E3 - 0x004C453B (88 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C44E3(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C44E3: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x3C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x90); PUSH32(esp, 0x004C44F1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C44EBu); } /* indirect call */
    }

loc_004C44F1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C450B; /* je: equal / zero */

loc_004C44F5: ;
    edx = MEM32(eax);
    ecx = esi + 0x24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x004C4500u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C44FDu); } /* indirect call */
    }

loc_004C4500: ;
    PUSH32(esp, eax);
    ecx = esi + 0x38;
    PUSH32(esp, 0x004C4509u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C4509: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_004C450B: ;
    ecx = MEM32(esi + 0x3C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x4C); PUSH32(esp, 0x004C4513u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C4510u); } /* indirect call */
    }

loc_004C4513: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C4528; /* je: equal / zero */

loc_004C4517: ;
    ecx = MEM32(esi + 0x3C);
    eax = MEM32(ecx);
    edx = esi + 0x30;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0xC8); PUSH32(esp, 0x004C4526u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C4520u); } /* indirect call */
    }

loc_004C4526: ;
    goto loc_004C4500;

loc_004C4528: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x86615C);
    ecx = esi;
    PUSH32(esp, 0x004C4539u); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C4539: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004C453B
 * Original: 0x004C453B - 0x004C4576 (59 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C453B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C453B: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x3C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x004C4549u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C4543u); } /* indirect call */
    }

loc_004C4549: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C4563; /* je: equal / zero */

loc_004C454D: ;
    edx = MEM32(eax);
    ecx = esi + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x004C4558u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C4555u); } /* indirect call */
    }

loc_004C4558: ;
    PUSH32(esp, eax);
    ecx = esi + 0x38;
    PUSH32(esp, 0x004C4561u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C4561: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_004C4563: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x866174);
    ecx = esi;
    PUSH32(esp, 0x004C4574u); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C4574: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004C4543
 * Original: 0x004C4543 - 0x004C4576 (51 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C4543(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C4543: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x004C4549u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C4543u); } /* indirect call */
    }

loc_004C4549: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C4563; /* je: equal / zero */

loc_004C454D: ;
    edx = MEM32(eax);
    ecx = esi + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x004C4558u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C4555u); } /* indirect call */
    }

loc_004C4558: ;
    PUSH32(esp, eax);
    ecx = esi + 0x38;
    PUSH32(esp, 0x004C4561u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C4561: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_004C4563: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x866174);
    ecx = esi;
    PUSH32(esp, 0x004C4574u); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C4574: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004C4553
 * Original: 0x004C4553 - 0x004C4576 (35 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C4553(void)
{

loc_004C4553: ;
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x004C4558u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C4555u); } /* indirect call */
    }

loc_004C4558: ;
    PUSH32(esp, eax);
    ecx = esi + 0x38;
    PUSH32(esp, 0x004C4561u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C4561: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004C4576
 * Original: 0x004C4576 - 0x004C45B3 (61 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C4576(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C4576: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x3C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x004C4584u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C457Eu); } /* indirect call */
    }

loc_004C4584: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C45A0; /* je: equal / zero */

loc_004C4588: ;
    edx = MEM32(eax);
    ecx = esi + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x004C4595u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C4592u); } /* indirect call */
    }

loc_004C4595: ;
    PUSH32(esp, eax);
    ecx = esi + 0x38;
    PUSH32(esp, 0x004C459Eu); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C459E: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_004C45A0: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x86618C);
    ecx = esi;
    PUSH32(esp, 0x004C45B1u); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C45B1: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004C45B3
 * Original: 0x004C45B3 - 0x004C45EC (57 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C45B3(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C45B3: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x3C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x004C45C1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C45BBu); } /* indirect call */
    }

loc_004C45C1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C45D2; /* je: equal / zero */

loc_004C45C5: ;
    edx = MEM32(eax);
    ecx = esi + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x004C45D0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C45CDu); } /* indirect call */
    }

loc_004C45D0: ;
    goto loc_004C45E1;

loc_004C45D2: ;
    ecx = MEM32(esi + 0x3C);
    eax = MEM32(ecx);
    edx = esi + 0x2C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0xCC); PUSH32(esp, 0x004C45E1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C45DBu); } /* indirect call */
    }

loc_004C45E1: ;
    ecx = esi + 0x38;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004C45EAu); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C45EA: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004C45EC
 * Original: 0x004C45EC - 0x004C4609 (29 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C45EC(void)
{

loc_004C45EC: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x3C);
    eax = MEM32(ecx);
    edx = esi + 0x30;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0xC8); PUSH32(esp, 0x004C45FEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C45F8u); } /* indirect call */
    }

loc_004C45FE: ;
    PUSH32(esp, eax);
    ecx = esi + 0x38;
    PUSH32(esp, 0x004C4607u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C4607: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004C4609
 * Original: 0x004C4609 - 0x004C4626 (29 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C4609(void)
{

loc_004C4609: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x3C);
    eax = MEM32(ecx);
    edx = esi + 0x2C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0xCC); PUSH32(esp, 0x004C461Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C4615u); } /* indirect call */
    }

loc_004C461B: ;
    PUSH32(esp, eax);
    ecx = esi + 0x38;
    PUSH32(esp, 0x004C4624u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C4624: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004C4626
 * Original: 0x004C4626 - 0x004C4643 (29 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C4626(void)
{

loc_004C4626: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x3C);
    eax = MEM32(ecx);
    edx = esi + 0x34;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0xD0); PUSH32(esp, 0x004C4638u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C4632u); } /* indirect call */
    }

loc_004C4638: ;
    PUSH32(esp, eax);
    ecx = esi + 0x38;
    PUSH32(esp, 0x004C4641u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C4641: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004C4643
 * Original: 0x004C4643 - 0x004C4664 (33 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C4643(void)
{

loc_004C4643: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esi + 0x20;
    PUSH32(esp, 0x004C4650u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C4650: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x8661A4);
    ecx = esi + -24;
    PUSH32(esp, 0x004C4662u); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C4662: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004C4664
 * Original: 0x004C4664 - 0x004C4687 (35 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C4664(void)
{

loc_004C4664: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esi + 0x20;
    PUSH32(esp, 0x004C4671u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C4671: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x8661BC);
    ecx = esi + -24;
    PUSH32(esp, 0x004C4683u); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C4683: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C4687
 * Original: 0x004C4687 - 0x004C46A8 (33 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C4687(void)
{

loc_004C4687: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esi + 0x1C;
    PUSH32(esp, 0x004C4694u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C4694: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x8661D4);
    ecx = esi + -28;
    PUSH32(esp, 0x004C46A6u); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C46A6: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004C46A8
 * Original: 0x004C46A8 - 0x004C46D9 (49 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C46A8(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C46A8: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esi + 0x1C;
    PUSH32(esp, 0x004C46B5u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C46B5: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), 3 (32-bit) */
    ecx = esi + -28;
    PUSH32(esp, 0x7B891F);
    if (CMP_EQ(_fa, _fb)) goto loc_004C46CB; /* je: equal / zero */

loc_004C46C4: ;
    PUSH32(esp, 0x8661FC);
    goto loc_004C46D0;

loc_004C46CB: ;
    PUSH32(esp, 0x8661E8);

loc_004C46D0: ;
    PUSH32(esp, 0x004C46D5u); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C46D5: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C46D9
 * Original: 0x004C46D9 - 0x004C46FA (33 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C46D9(void)
{

loc_004C46D9: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esi + 0x18;
    PUSH32(esp, 0x004C46E6u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C46E6: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x866210);
    ecx = esi + -32;
    PUSH32(esp, 0x004C46F8u); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C46F8: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004C46FA
 * Original: 0x004C46FA - 0x004C471D (35 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C46FA(void)
{

loc_004C46FA: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esi + 0x18;
    PUSH32(esp, 0x004C4707u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C4707: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x866228);
    ecx = esi + -32;
    PUSH32(esp, 0x004C4719u); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C4719: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C471D
 * Original: 0x004C471D - 0x004C473E (33 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C471D(void)
{

loc_004C471D: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esi + 0x14;
    PUSH32(esp, 0x004C472Au); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C472A: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x86615C);
    ecx = esi + -36;
    PUSH32(esp, 0x004C473Cu); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C473C: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004C473E
 * Original: 0x004C473E - 0x004C4761 (35 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C473E(void)
{

loc_004C473E: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esi + 0x14;
    PUSH32(esp, 0x004C474Bu); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C474B: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x866240);
    ecx = esi + -36;
    PUSH32(esp, 0x004C475Du); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C475D: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C4761
 * Original: 0x004C4761 - 0x004C4782 (33 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C4761(void)
{

loc_004C4761: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esi + 0x10;
    PUSH32(esp, 0x004C476Eu); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C476E: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x866258);
    ecx = esi + -40;
    PUSH32(esp, 0x004C4780u); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C4780: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004C4782
 * Original: 0x004C4782 - 0x004C47C9 (71 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C4782(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C4782: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esi + 0x10;
    PUSH32(esp, 0x004C478Fu); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C478F: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esi + -40;
    PUSH32(esp, 0x7B891F);
    if ((_fa == 0)) goto loc_004C47BB; /* je: equal / zero */

loc_004C47A0: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_004C47B4; /* je: equal / zero */

loc_004C47A3: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_004C47AD; /* je: equal / zero */

loc_004C47A6: ;
    PUSH32(esp, 0x8662B0);
    goto loc_004C47C0;

loc_004C47AD: ;
    PUSH32(esp, 0x866298);
    goto loc_004C47C0;

loc_004C47B4: ;
    PUSH32(esp, 0x866284);
    goto loc_004C47C0;

loc_004C47BB: ;
    PUSH32(esp, 0x866270);

loc_004C47C0: ;
    PUSH32(esp, 0x004C47C5u); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C47C5: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C47C9
 * Original: 0x004C47C9 - 0x004C47EA (33 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C47C9(void)
{

loc_004C47C9: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esi + 0xC;
    PUSH32(esp, 0x004C47D6u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C47D6: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x8661D4);
    ecx = esi + -44;
    PUSH32(esp, 0x004C47E8u); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C47E8: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004C47EA
 * Original: 0x004C47EA - 0x004C481B (49 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C47EA(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C47EA: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esi + 0xC;
    PUSH32(esp, 0x004C47F7u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C47F7: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), 3 (32-bit) */
    ecx = esi + -44;
    PUSH32(esp, 0x7B891F);
    if (CMP_NE(_fa, _fb)) goto loc_004C480D; /* jne: not equal / not zero */

loc_004C4806: ;
    PUSH32(esp, 0x8661E8);
    goto loc_004C4812;

loc_004C480D: ;
    PUSH32(esp, 0x8661FC);

loc_004C4812: ;
    PUSH32(esp, 0x004C4817u); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C4817: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C481B
 * Original: 0x004C481B - 0x004C483C (33 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C481B(void)
{

loc_004C481B: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esi + 8;
    PUSH32(esp, 0x004C4828u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C4828: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x8662C8);
    ecx = esi + -48;
    PUSH32(esp, 0x004C483Au); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C483A: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004C483C
 * Original: 0x004C483C - 0x004C485F (35 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C483C(void)
{

loc_004C483C: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esi + 8;
    PUSH32(esp, 0x004C4849u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C4849: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x8662E0);
    ecx = esi + -48;
    PUSH32(esp, 0x004C485Bu); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C485B: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C484E
 * Original: 0x004C484E - 0x004C485F (17 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C484E(void)
{

loc_004C484E: ;
    PUSH32(esp, 0x8662E0);
    ecx = esi + -48;
    PUSH32(esp, 0x004C485Bu); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C485B: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C485F
 * Original: 0x004C485F - 0x004C4880 (33 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C485F(void)
{

loc_004C485F: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esi + 4;
    PUSH32(esp, 0x004C486Cu); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C486C: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x8662F8);
    ecx = esi + -52;
    PUSH32(esp, 0x004C487Eu); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C487E: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004C4880
 * Original: 0x004C4880 - 0x004C48A3 (35 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C4880(void)
{

loc_004C4880: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esi + 4;
    PUSH32(esp, 0x004C488Du); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C488D: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x866310);
    ecx = esi + -52;
    PUSH32(esp, 0x004C489Fu); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C489F: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C48A3
 * Original: 0x004C48A3 - 0x004C48D2 (47 bytes, 14 insns)
 * Category: game_io
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C48A3(void)
{

loc_004C48A3: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 8));
    esi = ecx;
    ecx = esi + 4;
    PUSH32(esp, 0x004C48B2u); RECOMP_ABI_CALL(0x004C2BDBu, sub_004C2BDB); /* call 0x004C2BDB */

loc_004C48B2: ;
    PUSH32(esp, 0);
    ecx = esi + 8;
    PUSH32(esp, 0x004C48BCu); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C48BC: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x866328);
    ecx = esi + -24;
    PUSH32(esp, 0x004C48CEu); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C48CE: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C48D2
 * Original: 0x004C48D2 - 0x004C490D (59 bytes, 19 insns)
 * Category: game_io
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C48D2(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C48D2: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esi + 8;
    PUSH32(esp, 0x004C48DFu); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C48DF: ;
    PUSH32(esp, 0);
    ecx = esi + 4;
    PUSH32(esp, 0x004C48E9u); RECOMP_ABI_CALL(0x004C2BDBu, sub_004C2BDB); /* call 0x004C2BDB */

loc_004C48E9: ;
    eax = MEM32(esp + 8);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = esi + -24;
    PUSH32(esp, 0x7B891F);
    if ((_fa == 0)) goto loc_004C48FF; /* je: equal / zero */

loc_004C48F8: ;
    PUSH32(esp, 0x86634C);
    goto loc_004C4904;

loc_004C48FF: ;
    PUSH32(esp, 0x86633C);

loc_004C4904: ;
    PUSH32(esp, 0x004C4909u); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C4909: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C490D
 * Original: 0x004C490D - 0x004C497A (109 bytes, 39 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C490D(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C490D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x866370);
    PUSH32(esp, MEM32(esp + 0x18));
    esi = ecx;
    PUSH32(esp, 0x004C4920u); RECOMP_ABI_CALL(0x004C17F2u, sub_004C17F2); /* call 0x004C17F2 */

loc_004C4920: ;
    ebx = esi + 0x18;
    ecx = ebx;
    PUSH32(esp, 0x004C492Au); RECOMP_ABI_CALL(0x00607FFBu, sub_00607FFB); /* call 0x00607FFB */

loc_004C492A: ;
    MEM32(esi) = 0x86636C;
    MEM32(ebx) = 0x866360;
    edi = esi + 0x1C;
    MEM32(edi) = MEM32(edi) & 0;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x20) = MEM32(esi + 0x20) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0x004C4945u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004C4945: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x004C494Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C4949u); } /* indirect call */
    }

loc_004C494C: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x004C4953u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C4950u); } /* indirect call */
    }

loc_004C4953: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x004C495Bu); RECOMP_ABI_CALL(0x004C2BDBu, sub_004C2BDB); /* call 0x004C2BDB */

loc_004C495B: ;
    edi = MEM32(edi);
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(esp + 0x14));
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004C4969u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C4966u); } /* indirect call */
    }

loc_004C4969: ;
    PUSH32(esp, eax);
    ecx = esi + 0x20;
    PUSH32(esp, 0x004C4972u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C4972: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C497A
 * Original: 0x004C497A - 0x004C4982 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C497A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C497A: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004CD5AD(); return; /* tail jmp 0x004CD5AD */

}

/**
 * sub_004C4982
 * Original: 0x004C4982 - 0x004C49C9 (71 bytes, 25 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C4982(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C4982: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = esi + 0x18;
    MEM32(esi) = 0x86636C;
    MEM32(edi) = 0x866360;
    if (CMP_EQ(_fa, _fb)) goto loc_004C49A1; /* je: equal / zero */

loc_004C499C: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004C49A1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C499Eu); } /* indirect call */
    }

loc_004C49A1: ;
    ecx = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C49AD; /* je: equal / zero */

loc_004C49A8: ;
    PUSH32(esp, 0x004C49ADu); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004C49AD: ;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C49B9; /* je: equal / zero */

loc_004C49B4: ;
    PUSH32(esp, 0x004C49B9u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004C49B9: ;
    ecx = edi;
    PUSH32(esp, 0x004C49C0u); RECOMP_ABI_CALL(0x00608004u, sub_00608004); /* call 0x00608004 */

loc_004C49C0: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004C1837(); return; /* tail jmp 0x004C1837 */

}

/**
 * sub_004C49D1
 * Original: 0x004C49D1 - 0x004C49D9 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C49D1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C49D1: ;
    ecx = MEM32(ecx + 0x1C);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x10)); return; /* indirect tail jmp */

}

/**
 * sub_004C49E9
 * Original: 0x004C49E9 - 0x004C49F1 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C49E9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C49E9: ;
    ecx = MEM32(ecx + 0x1C);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x1C)); return; /* indirect tail jmp */

}

/**
 * sub_004C4A01
 * Original: 0x004C4A01 - 0x004C4A09 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C4A01(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C4A01: ;
    ecx = MEM32(ecx + 0x1C);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x28)); return; /* indirect tail jmp */

}

/**
 * sub_004C4A19
 * Original: 0x004C4A19 - 0x004C4A21 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C4A19(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C4A19: ;
    ecx = MEM32(ecx + 0x1C);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x34)); return; /* indirect tail jmp */

}

/**
 * sub_004C4A29
 * Original: 0x004C4A29 - 0x004C4A31 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C4A29(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C4A29: ;
    ecx = MEM32(ecx + 0x1C);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x38)); return; /* indirect tail jmp */

}

/**
 * sub_004C4A31
 * Original: 0x004C4A31 - 0x004C4A61 (48 bytes, 16 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C4A31(void)
{

loc_004C4A31: ;
    ecx = MEM32(ecx + 0x1C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, MEM32(esp + 0x14));
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x004C4A49u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C4A46u); } /* indirect call */
    }

loc_004C4A49: ;
    ecx = MEM32(0x90E420);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004C4A53u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C4A51u); } /* indirect call */
    }

loc_004C4A53: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 8));
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x004C4A5Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C4A5Bu); } /* indirect call */
    }

loc_004C4A5E: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004C4A61
 * Original: 0x004C4A61 - 0x004C4A7C (27 bytes, 9 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C4A61(void)
{

loc_004C4A61: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = MEM32(ecx + 0x1C);
    PUSH32(esp, MEM32(esp + 0xC));
    eax = MEM32(ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esp + 0x14));
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x004C4A79u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C4A76u); } /* indirect call */
    }

loc_004C4A79: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004C4A7C
 * Original: 0x004C4A7C - 0x004C4A9C (32 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C4A7C(void)
{

loc_004C4A7C: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x1C);
    eax = MEM32(ecx);
    edx = esi + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, MEM32(esp + 0xC));
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004C4A8Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C4A8Cu); } /* indirect call */
    }

loc_004C4A8F: ;
    PUSH32(esp, eax);
    ecx = esi + 0x20;
    PUSH32(esp, 0x004C4A98u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C4A98: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C4A9C
 * Original: 0x004C4A9C - 0x004C4ABF (35 bytes, 11 insns)
 * Category: game_io
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C4A9C(void)
{

loc_004C4A9C: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esi + 8;
    PUSH32(esp, 0x004C4AA9u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C4AA9: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x866328);
    ecx = esi + -24;
    PUSH32(esp, 0x004C4ABBu); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C4ABB: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C4ABF
 * Original: 0x004C4ABF - 0x004C4AF0 (49 bytes, 16 insns)
 * Category: game_io
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C4ABF(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C4ABF: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esi + 8;
    PUSH32(esp, 0x004C4ACCu); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C4ACC: ;
    eax = MEM32(esp + 8);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = esi + -24;
    PUSH32(esp, 0x7B891F);
    if ((_fa == 0)) goto loc_004C4AE2; /* je: equal / zero */

loc_004C4ADB: ;
    PUSH32(esp, 0x86634C);
    goto loc_004C4AE7;

loc_004C4AE2: ;
    PUSH32(esp, 0x86633C);

loc_004C4AE7: ;
    PUSH32(esp, 0x004C4AECu); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C4AEC: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C4AF0
 * Original: 0x004C4AF0 - 0x004C4B61 (113 bytes, 40 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C4AF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C4AF0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x86639C);
    PUSH32(esp, MEM32(esp + 0x1C));
    esi = ecx;
    PUSH32(esp, 0x004C4B03u); RECOMP_ABI_CALL(0x004C17F2u, sub_004C17F2); /* call 0x004C17F2 */

loc_004C4B03: ;
    ebx = esi + 0x18;
    ecx = ebx;
    PUSH32(esp, 0x004C4B0Du); RECOMP_ABI_CALL(0x00608028u, sub_00608028); /* call 0x00608028 */

loc_004C4B0D: ;
    MEM32(esi) = 0x866398;
    MEM32(ebx) = 0x86638C;
    edi = esi + 0x1C;
    MEM32(edi) = MEM32(edi) & 0;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x20) = MEM32(esi + 0x20) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0x004C4B28u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004C4B28: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x004C4B2Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C4B2Cu); } /* indirect call */
    }

loc_004C4B2F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 0x10));
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x004C4B3Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C4B37u); } /* indirect call */
    }

loc_004C4B3A: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x004C4B42u); RECOMP_ABI_CALL(0x004C2B44u, sub_004C2B44); /* call 0x004C2B44 */

loc_004C4B42: ;
    edi = MEM32(edi);
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(esp + 0x18));
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004C4B50u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C4B4Du); } /* indirect call */
    }

loc_004C4B50: ;
    PUSH32(esp, eax);
    ecx = esi + 0x20;
    PUSH32(esp, 0x004C4B59u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C4B59: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004C4B61
 * Original: 0x004C4B61 - 0x004C4B69 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C4B61(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C4B61: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004CD5C9(); return; /* tail jmp 0x004CD5C9 */

}

/**
 * sub_004C4B69
 * Original: 0x004C4B69 - 0x004C4BB0 (71 bytes, 25 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C4B69(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C4B69: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = esi + 0x18;
    MEM32(esi) = 0x866398;
    MEM32(edi) = 0x86638C;
    if (CMP_EQ(_fa, _fb)) goto loc_004C4B88; /* je: equal / zero */

loc_004C4B83: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004C4B88u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C4B85u); } /* indirect call */
    }

loc_004C4B88: ;
    ecx = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C4B94; /* je: equal / zero */

loc_004C4B8F: ;
    PUSH32(esp, 0x004C4B94u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004C4B94: ;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C4BA0; /* je: equal / zero */

loc_004C4B9B: ;
    PUSH32(esp, 0x004C4BA0u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004C4BA0: ;
    ecx = edi;
    PUSH32(esp, 0x004C4BA7u); RECOMP_ABI_CALL(0x00608031u, sub_00608031); /* call 0x00608031 */

loc_004C4BA7: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004C1837(); return; /* tail jmp 0x004C1837 */

}

/**
 * sub_004C4BB0
 * Original: 0x004C4BB0 - 0x004C4BB8 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C4BB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C4BB0: ;
    ecx = MEM32(ecx + 0x1C);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 8)); return; /* indirect tail jmp */

}

/**
 * sub_004C4BB8
 * Original: 0x004C4BB8 - 0x004C4BEF (55 bytes, 23 insns)
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004C4BB8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_004C4BB8: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x14));
    esi = ecx;
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = MEM32(esi + 0x1C);
    PUSH32(esp, MEM32(ebp + 8));
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x004C4BCFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C4BCCu); } /* indirect call */
    }

loc_004C4BCF: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x20));
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, MEM32(ebp + 0x1C));
    MEM32(ecx) = eax;
    ecx = MEM32(esi + 0x1C);
    PUSH32(esp, MEM32(ebp + 8));
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x004C4BE5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C4BE2u); } /* indirect call */
    }

loc_004C4BE5: ;
    ecx = MEM32(ebp + 0x18);
    MEM32(ecx) = eax;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 32; return; /* ret 28 */

}

/**
 * sub_004C4BEF
 * Original: 0x004C4BEF - 0x004C4C0F (32 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C4BEF(void)
{

loc_004C4BEF: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x1C);
    eax = MEM32(ecx);
    edx = esi + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, MEM32(esp + 0xC));
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004C4C02u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C4BFFu); } /* indirect call */
    }

loc_004C4C02: ;
    PUSH32(esp, eax);
    ecx = esi + 0x20;
    PUSH32(esp, 0x004C4C0Bu); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C4C0B: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C4C0F
 * Original: 0x004C4C0F - 0x004C4C77 (104 bytes, 33 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C4C0F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C4C0F: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x8663C4);
    PUSH32(esp, MEM32(esp + 0x14));
    esi = ecx;
    PUSH32(esp, 0x004C4C21u); RECOMP_ABI_CALL(0x004C17F2u, sub_004C17F2); /* call 0x004C17F2 */

loc_004C4C21: ;
    eax = MEM32(esp + 0xC);
    MEM32(esi) = 0x8663C0;
    MEM32(esi + 0x18) = eax;
    PUSH32(esp, MEM32(eax * 4 + 0x90E44C));
    edi = esi + 0x1C;
    ecx = edi;
    PUSH32(esp, 0x004C4C3Fu); RECOMP_ABI_CALL(0x004ABC3Eu, sub_004ABC3E); /* call 0x004ABC3E */

loc_004C4C3F: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004C4C5F; /* jne: not equal / not zero */

loc_004C4C44: ;
    PUSH32(esp, 0x004C4C49u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004C4C49: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x004C4C50u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C4C4Du); } /* indirect call */
    }

loc_004C4C50: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x68); PUSH32(esp, 0x004C4C57u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C4C54u); } /* indirect call */
    }

loc_004C4C57: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x004C4C5Fu); RECOMP_ABI_CALL(0x004AFE27u, sub_004AFE27); /* call 0x004AFE27 */

loc_004C4C5F: ;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, 0);
    ecx = ecx * 4 + 0x90E44C;
    PUSH32(esp, 0x004C4C70u); RECOMP_ABI_CALL(0x004AFE27u, sub_004AFE27); /* call 0x004AFE27 */

loc_004C4C70: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C4C77
 * Original: 0x004C4C77 - 0x004C4C94 (29 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C4C77(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C4C77: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x8663C0;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C4C8C; /* je: equal / zero */

loc_004C4C87: ;
    PUSH32(esp, 0x004C4C8Cu); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004C4C8C: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004C1837(); return; /* tail jmp 0x004C1837 */

}

/**
 * sub_004C4C94
 * Original: 0x004C4C94 - 0x004C4CBB (39 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C4C94(void)
{

loc_004C4C94: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004C4C9Cu); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004C4C9C: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x004C4CA3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C4CA0u); } /* indirect call */
    }

loc_004C4CA3: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 8));
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004C4CAEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C4CABu); } /* indirect call */
    }

loc_004C4CAE: ;
    PUSH32(esp, eax);
    ecx = esi + 0x1C;
    PUSH32(esp, 0x004C4CB7u); RECOMP_ABI_CALL(0x004AFE27u, sub_004AFE27); /* call 0x004AFE27 */

loc_004C4CB7: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C4CBB
 * Original: 0x004C4CBB - 0x004C4CF4 (57 bytes, 16 insns)
 * Category: game_io
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C4CBB(void)
{

loc_004C4CBB: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x18);
    PUSH32(esp, MEM32(eax * 4 + 0x90E44C));
    ecx = esi + 0x1C;
    PUSH32(esp, 0x004C4CD0u); RECOMP_ABI_CALL(0x004AFE27u, sub_004AFE27); /* call 0x004AFE27 */

loc_004C4CD0: ;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, 0);
    ecx = ecx * 4 + 0x90E44C;
    PUSH32(esp, 0x004C4CE1u); RECOMP_ABI_CALL(0x004AFE27u, sub_004AFE27); /* call 0x004AFE27 */

loc_004C4CE1: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x8663DC);
    ecx = esi;
    PUSH32(esp, 0x004C4CF2u); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C4CF2: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004C4CF4
 * Original: 0x004C4CF4 - 0x004C4D23 (47 bytes, 14 insns)
 * Category: game_io
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C4CF4(void)
{

loc_004C4CF4: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 8));
    esi = ecx;
    ecx = esi + 4;
    PUSH32(esp, 0x004C4D03u); RECOMP_ABI_CALL(0x004C2B14u, sub_004C2B14); /* call 0x004C2B14 */

loc_004C4D03: ;
    PUSH32(esp, 0);
    ecx = esi + 8;
    PUSH32(esp, 0x004C4D0Du); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C4D0D: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x866328);
    ecx = esi + -24;
    PUSH32(esp, 0x004C4D1Fu); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C4D1F: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C4D23
 * Original: 0x004C4D23 - 0x004C4D54 (49 bytes, 16 insns)
 * Category: game_io
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C4D23(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C4D23: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esi + 8;
    PUSH32(esp, 0x004C4D30u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C4D30: ;
    eax = MEM32(esp + 8);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = esi + -24;
    PUSH32(esp, 0x7B891F);
    if ((_fa == 0)) goto loc_004C4D46; /* je: equal / zero */

loc_004C4D3F: ;
    PUSH32(esp, 0x86634C);
    goto loc_004C4D4B;

loc_004C4D46: ;
    PUSH32(esp, 0x86633C);

loc_004C4D4B: ;
    PUSH32(esp, 0x004C4D50u); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C4D50: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C4D54
 * Original: 0x004C4D54 - 0x004C4DC5 (113 bytes, 40 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C4D54(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C4D54: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x8663FC);
    PUSH32(esp, MEM32(esp + 0x1C));
    esi = ecx;
    PUSH32(esp, 0x004C4D67u); RECOMP_ABI_CALL(0x004C17F2u, sub_004C17F2); /* call 0x004C17F2 */

loc_004C4D67: ;
    ebx = esi + 0x18;
    ecx = ebx;
    PUSH32(esp, 0x004C4D71u); RECOMP_ABI_CALL(0x00608055u, sub_00608055); /* call 0x00608055 */

loc_004C4D71: ;
    MEM32(esi) = 0x8663F8;
    MEM32(ebx) = 0x8663EC;
    edi = esi + 0x1C;
    MEM32(edi) = MEM32(edi) & 0;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x20) = MEM32(esi + 0x20) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0x004C4D8Cu); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004C4D8C: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x004C4D93u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C4D90u); } /* indirect call */
    }

loc_004C4D93: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 0x10));
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x004C4D9Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C4D9Bu); } /* indirect call */
    }

loc_004C4D9E: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x004C4DA6u); RECOMP_ABI_CALL(0x004C2B14u, sub_004C2B14); /* call 0x004C2B14 */

loc_004C4DA6: ;
    edi = MEM32(edi);
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(esp + 0x18));
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x004C4DB4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C4DB1u); } /* indirect call */
    }

loc_004C4DB4: ;
    PUSH32(esp, eax);
    ecx = esi + 0x20;
    PUSH32(esp, 0x004C4DBDu); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C4DBD: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004C4DC5
 * Original: 0x004C4DC5 - 0x004C4DCD (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C4DC5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C4DC5: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004CD601(); return; /* tail jmp 0x004CD601 */

}

/**
 * sub_004C4DCD
 * Original: 0x004C4DCD - 0x004C4E14 (71 bytes, 25 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C4DCD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C4DCD: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = esi + 0x18;
    MEM32(esi) = 0x8663F8;
    MEM32(edi) = 0x8663EC;
    if (CMP_EQ(_fa, _fb)) goto loc_004C4DEC; /* je: equal / zero */

loc_004C4DE7: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004C4DECu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C4DE9u); } /* indirect call */
    }

loc_004C4DEC: ;
    ecx = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C4DF8; /* je: equal / zero */

loc_004C4DF3: ;
    PUSH32(esp, 0x004C4DF8u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004C4DF8: ;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C4E04; /* je: equal / zero */

loc_004C4DFF: ;
    PUSH32(esp, 0x004C4E04u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004C4E04: ;
    ecx = edi;
    PUSH32(esp, 0x004C4E0Bu); RECOMP_ABI_CALL(0x0060805Eu, sub_0060805E); /* call 0x0060805E */

loc_004C4E0B: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004C1837(); return; /* tail jmp 0x004C1837 */

}

/**
 * sub_004C4E14
 * Original: 0x004C4E14 - 0x004C4E34 (32 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C4E14(void)
{

loc_004C4E14: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x1C);
    eax = MEM32(ecx);
    edx = esi + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, MEM32(esp + 0xC));
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x004C4E27u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C4E24u); } /* indirect call */
    }

loc_004C4E27: ;
    PUSH32(esp, eax);
    ecx = esi + 0x20;
    PUSH32(esp, 0x004C4E30u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C4E30: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C4E34
 * Original: 0x004C4E34 - 0x004C4E63 (47 bytes, 14 insns)
 * Category: game_io
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C4E34(void)
{

loc_004C4E34: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 8));
    esi = ecx;
    ecx = esi + 4;
    PUSH32(esp, 0x004C4E43u); RECOMP_ABI_CALL(0x004C2AE4u, sub_004C2AE4); /* call 0x004C2AE4 */

loc_004C4E43: ;
    PUSH32(esp, 0);
    ecx = esi + 8;
    PUSH32(esp, 0x004C4E4Du); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C4E4D: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x866328);
    ecx = esi + -24;
    PUSH32(esp, 0x004C4E5Fu); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C4E5F: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C4E63
 * Original: 0x004C4E63 - 0x004C4E94 (49 bytes, 16 insns)
 * Category: game_io
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C4E63(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C4E63: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esi + 8;
    PUSH32(esp, 0x004C4E70u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C4E70: ;
    eax = MEM32(esp + 8);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = esi + -24;
    PUSH32(esp, 0x7B891F);
    if ((_fa == 0)) goto loc_004C4E86; /* je: equal / zero */

loc_004C4E7F: ;
    PUSH32(esp, 0x86634C);
    goto loc_004C4E8B;

loc_004C4E86: ;
    PUSH32(esp, 0x86633C);

loc_004C4E8B: ;
    PUSH32(esp, 0x004C4E90u); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C4E90: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C4E94
 * Original: 0x004C4E94 - 0x004C4F05 (113 bytes, 40 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C4E94(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C4E94: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x866430);
    PUSH32(esp, MEM32(esp + 0x1C));
    esi = ecx;
    PUSH32(esp, 0x004C4EA7u); RECOMP_ABI_CALL(0x004C17F2u, sub_004C17F2); /* call 0x004C17F2 */

loc_004C4EA7: ;
    ebx = esi + 0x18;
    ecx = ebx;
    PUSH32(esp, 0x004C4EB1u); RECOMP_ABI_CALL(0x00608082u, sub_00608082); /* call 0x00608082 */

loc_004C4EB1: ;
    MEM32(esi) = 0x86642C;
    MEM32(ebx) = 0x866420;
    edi = esi + 0x1C;
    MEM32(edi) = MEM32(edi) & 0;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x20) = MEM32(esi + 0x20) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0x004C4ECCu); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004C4ECC: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x004C4ED3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C4ED0u); } /* indirect call */
    }

loc_004C4ED3: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 0x10));
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x004C4EDEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C4EDBu); } /* indirect call */
    }

loc_004C4EDE: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x004C4EE6u); RECOMP_ABI_CALL(0x004C2AE4u, sub_004C2AE4); /* call 0x004C2AE4 */

loc_004C4EE6: ;
    edi = MEM32(edi);
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(esp + 0x18));
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004C4EF4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C4EF1u); } /* indirect call */
    }

loc_004C4EF4: ;
    PUSH32(esp, eax);
    ecx = esi + 0x20;
    PUSH32(esp, 0x004C4EFDu); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C4EFD: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004C4F05
 * Original: 0x004C4F05 - 0x004C4F0D (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C4F05(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C4F05: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004CD61D(); return; /* tail jmp 0x004CD61D */

}

/**
 * sub_004C4F0D
 * Original: 0x004C4F0D - 0x004C4F54 (71 bytes, 25 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C4F0D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C4F0D: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = esi + 0x18;
    MEM32(esi) = 0x86642C;
    MEM32(edi) = 0x866420;
    if (CMP_EQ(_fa, _fb)) goto loc_004C4F2C; /* je: equal / zero */

loc_004C4F27: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004C4F2Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C4F29u); } /* indirect call */
    }

loc_004C4F2C: ;
    ecx = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C4F38; /* je: equal / zero */

loc_004C4F33: ;
    PUSH32(esp, 0x004C4F38u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004C4F38: ;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C4F44; /* je: equal / zero */

loc_004C4F3F: ;
    PUSH32(esp, 0x004C4F44u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004C4F44: ;
    ecx = edi;
    PUSH32(esp, 0x004C4F4Bu); RECOMP_ABI_CALL(0x0060808Bu, sub_0060808B); /* call 0x0060808B */

loc_004C4F4B: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004C1837(); return; /* tail jmp 0x004C1837 */

}

/**
 * sub_004C4F54
 * Original: 0x004C4F54 - 0x004C4F74 (32 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C4F54(void)
{

loc_004C4F54: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x1C);
    eax = MEM32(ecx);
    edx = esi + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, MEM32(esp + 0xC));
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004C4F67u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C4F64u); } /* indirect call */
    }

loc_004C4F67: ;
    PUSH32(esp, eax);
    ecx = esi + 0x20;
    PUSH32(esp, 0x004C4F70u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C4F70: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C4F74
 * Original: 0x004C4F74 - 0x004C4F95 (33 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C4F74(void)
{

loc_004C4F74: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esi + 0x24;
    PUSH32(esp, 0x004C4F81u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C4F81: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x866450);
    ecx = esi + -28;
    PUSH32(esp, 0x004C4F93u); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C4F93: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004C4F95
 * Original: 0x004C4F95 - 0x004C4FB8 (35 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C4F95(void)
{

loc_004C4F95: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esi + 0x24;
    PUSH32(esp, 0x004C4FA2u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C4FA2: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x86646C);
    ecx = esi + -28;
    PUSH32(esp, 0x004C4FB4u); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C4FB4: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C4FB8
 * Original: 0x004C4FB8 - 0x004C4FD9 (33 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C4FB8(void)
{

loc_004C4FB8: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esi + 0x1C;
    PUSH32(esp, 0x004C4FC5u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C4FC5: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x866488);
    ecx = esi + -32;
    PUSH32(esp, 0x004C4FD7u); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C4FD7: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004C4FD9
 * Original: 0x004C4FD9 - 0x004C500A (49 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C4FD9(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C4FD9: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esi + 0x1C;
    PUSH32(esp, 0x004C4FE6u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C4FE6: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), 5 (32-bit) */
    ecx = esi + -32;
    PUSH32(esp, 0x7B891F);
    if (CMP_EQ(_fa, _fb)) goto loc_004C4FFC; /* je: equal / zero */

loc_004C4FF5: ;
    PUSH32(esp, 0x8664C0);
    goto loc_004C5001;

loc_004C4FFC: ;
    PUSH32(esp, 0x8664A4);

loc_004C5001: ;
    PUSH32(esp, 0x004C5006u); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C5006: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C500A
 * Original: 0x004C500A - 0x004C503E (52 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C500A(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004C500A: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esi + 0x20;
    PUSH32(esp, 0x004C5018u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C5018: ;
    ecx = MEM32(esi + 0x10);
    eax = MEM32(ecx);
    edx = esi + -36;
    _cf = (int)((edx) != 0);
    edx = (uint32_t)(-(int32_t)edx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    edi = esi + -4;
    _cf = 0; /* logical op clears CF */
    edx = edx & edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0xBC); PUSH32(esp, 0x004C5030u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C502Au); } /* indirect call */
    }

loc_004C5030: ;
    PUSH32(esp, eax);
    ecx = esi + 0x18;
    PUSH32(esp, 0x004C5039u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C5039: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C503E
 * Original: 0x004C503E - 0x004C5061 (35 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C503E(void)
{

loc_004C503E: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esi + 0x20;
    PUSH32(esp, 0x004C504Bu); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C504B: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x8664C0);
    ecx = esi + -36;
    PUSH32(esp, 0x004C505Du); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C505D: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C5061
 * Original: 0x004C5061 - 0x004C50DC (123 bytes, 45 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C5061(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C5061: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004C506Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C506Au); } /* indirect call */
    }

loc_004C506C: ;
    ecx = MEM32(esi + 0x1C);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x004C5077u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C5074u); } /* indirect call */
    }

loc_004C5077: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C50A4; /* je: equal / zero */

loc_004C507B: ;
    eax = MEM32(esp + 0xC);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_004C5092; /* je: equal / zero */

loc_004C5082: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_004C50D0; /* je: equal / zero */

loc_004C5085: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_004C50C4; /* je: equal / zero */

loc_004C5088: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_004C50B4; /* je: equal / zero */

loc_004C508B: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_004C50A8; /* je: equal / zero */

loc_004C508E: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_004C50A4; /* jne: not equal / not zero */

loc_004C5092: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x8664A4);

loc_004C509C: ;
    ecx = esi + -24;
    PUSH32(esp, 0x004C50A4u); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C50A4: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_004C50A8: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x866524);
    goto loc_004C509C;

loc_004C50B4: ;
    PUSH32(esp, 0x7B891F);
    MEM8(esi + 0x18) = 0;
    PUSH32(esp, 0x86650C);
    goto loc_004C509C;

loc_004C50C4: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x8664F4);
    goto loc_004C509C;

loc_004C50D0: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x8664DC);
    goto loc_004C509C;

}

/**
 * sub_004C50DC
 * Original: 0x004C50DC - 0x004C5117 (59 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C50DC(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C50DC: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), 3 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_004C5113; /* jne: not equal / not zero */

loc_004C50E6: ;
    ecx = MEM32(esp + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(0x8631F8));
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004C50F5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C50F2u); } /* indirect call */
    }

loc_004C50F5: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004C50FBu); RECOMP_ABI_CALL(0x005CFF90u, sub_005CFF90); /* call 0x005CFF90 */

loc_004C50FB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_004C5113; /* jne: not equal / not zero */

loc_004C5101: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x866540);
    ecx = esi + -44;
    PUSH32(esp, 0x004C5113u); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C5113: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C5117
 * Original: 0x004C5117 - 0x004C523F (296 bytes, 91 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004C5117(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C5117: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x8665A0);
    PUSH32(esp, 1);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C512Du); RECOMP_ABI_CALL(0x004C17F2u, sub_004C17F2); /* call 0x004C17F2 */

loc_004C512D: ;
    edi = esi + 0x18;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C5137u); RECOMP_ABI_CALL(0x00608109u, sub_00608109); /* call 0x00608109 */

loc_004C5137: ;
    ecx = esi + 0x1C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C513Fu); RECOMP_ABI_CALL(0x00607F47u, sub_00607F47); /* call 0x00607F47 */

loc_004C513F: ;
    ecx = esi + 0x20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C5147u); RECOMP_ABI_CALL(0x00607F1Au, sub_00607F1A); /* call 0x00607F1A */

loc_004C5147: ;
    ecx = esi + 0x24;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C514Fu); RECOMP_ABI_CALL(0x006080DCu, sub_006080DC); /* call 0x006080DC */

loc_004C514F: ;
    ecx = esi + 0x28;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C5157u); RECOMP_ABI_CALL(0x006080AFu, sub_006080AF); /* call 0x006080AF */

loc_004C5157: ;
    ebx = esi + 0x2C;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C5161u); RECOMP_ABI_CALL(0x004AD96Au, sub_004AD96A); /* call 0x004AD96A */

loc_004C5161: ;
    MEM32(esi) = 0x86659C;
    MEM32(edi) = 0x866590;
    MEM32(esi + 0x1C) = 0x866584;
    MEM32(esi + 0x20) = 0x866578;
    MEM32(esi + 0x24) = 0x86656C;
    MEM32(esi + 0x28) = 0x866560;
    MEM32(ebx) = 0x866558;
    MEM8(esi + 0x30) = 1;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi + 0x34;
    MEM32(ecx) = eax;
    MEM32(esi + 0x38) = eax;
    MEM32(esi + 0x3C) = eax;
    MEM32(esi + 0x40) = eax;
    MEM32(esi + 0x44) = eax;
    MEM32(esi + 0x48) = eax;
    PUSH32(esp, MEM32(0x90E454));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C51B4u); RECOMP_ABI_CALL(0x004AFE27u, sub_004AFE27); /* call 0x004AFE27 */

loc_004C51B4: ;
    PUSH32(esp, 0);
    ecx = 0x90E454;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C51C0u); RECOMP_ABI_CALL(0x004AFE27u, sub_004AFE27); /* call 0x004AFE27 */

loc_004C51C0: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C51C5u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004C51C5: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x44); PUSH32(esp, 0x004C51CCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C51C9u); } /* indirect call */
    }

loc_004C51CC: ;
    ecx = ebp + -4;
    PUSH32(esp, ecx);
    ecx = eax + 8;
    MEM32(ebp + -8) = eax;
    MEM32(ebp + -4) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C51DEu); RECOMP_ABI_CALL(0x004DD750u, sub_004DD750); /* call 0x004DD750 */

loc_004C51DE: ;
    ecx = MEM32(ebp + -8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x67616D65);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004C51EBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C51E8u); } /* indirect call */
    }

loc_004C51EB: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C51F0u); RECOMP_ABI_CALL(0x004DC9FAu, sub_004DC9FA); /* call 0x004DC9FA */

loc_004C51F0: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x004C51F7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C51F4u); } /* indirect call */
    }

loc_004C51F7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004C520A; /* jne: not equal / not zero */

loc_004C51FB: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C5200u); RECOMP_ABI_CALL(0x004DC976u, sub_004DC976); /* call 0x004DC976 */

loc_004C5200: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi + 0x34));
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x004C520Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C5207u); } /* indirect call */
    }

loc_004C520A: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C520Fu); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004C520F: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x004C5216u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C5213u); } /* indirect call */
    }

loc_004C5216: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(0x8631F8));
    edx = MEM32(eax);
    PUSH32(esp, MEM32(0x8631F4));
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x004C5229u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C5226u); } /* indirect call */
    }

loc_004C5229: ;
    ecx = ebp + -8;
    PUSH32(esp, ecx);
    ecx = eax + 8;
    MEM32(ebp + -8) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C5238u); RECOMP_ABI_CALL(0x004DD750u, sub_004DD750); /* call 0x004DD750 */

loc_004C5238: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004C523F
 * Original: 0x004C523F - 0x004C5242 (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C523F(void)
{

loc_004C523F: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C5242
 * Original: 0x004C5242 - 0x004C524A (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C5242(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C5242: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004CD639(); return; /* tail jmp 0x004CD639 */

}

/**
 * sub_004C524A
 * Original: 0x004C524A - 0x004C5252 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C524A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C524A: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004CD639(); return; /* tail jmp 0x004CD639 */

}

/**
 * sub_004C5252
 * Original: 0x004C5252 - 0x004C525A (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C5252(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C5252: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004CD639(); return; /* tail jmp 0x004CD639 */

}

/**
 * sub_004C5255
 * Original: 0x004C5255 - 0x004C525A (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C5255(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C5255: ;
    g_seh_ebp = ebp; sub_004CD639(); return; /* tail jmp 0x004CD639 */

}

/**
 * sub_004C525A
 * Original: 0x004C525A - 0x004C5262 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C525A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C525A: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x24;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004CD639(); return; /* tail jmp 0x004CD639 */

}

/**
 * sub_004C5262
 * Original: 0x004C5262 - 0x004C526A (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C5262(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C5262: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x28;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004CD639(); return; /* tail jmp 0x004CD639 */

}

/**
 * sub_004C526A
 * Original: 0x004C526A - 0x004C5272 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C526A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C526A: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x2C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004CD639(); return; /* tail jmp 0x004CD639 */

}

/**
 * sub_004C5272
 * Original: 0x004C5272 - 0x004C53E3 (369 bytes, 120 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004C5272(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C5272: ;
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
    ebx = esi + 0x2C;
    MEM32(esi) = 0x86659C;
    MEM32(edi) = 0x866590;
    MEM32(esi + 0x1C) = 0x866584;
    MEM32(esi + 0x20) = 0x866578;
    MEM32(esi + 0x24) = 0x86656C;
    MEM32(esi + 0x28) = 0x866560;
    MEM32(ebx) = 0x866558;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C52B5u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004C52B5: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x44); PUSH32(esp, 0x004C52BCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C52B9u); } /* indirect call */
    }

loc_004C52BC: ;
    ecx = ebp + -4;
    PUSH32(esp, ecx);
    ecx = eax + 8;
    MEM32(ebp + -8) = eax;
    MEM32(ebp + -4) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C52CEu); RECOMP_ABI_CALL(0x004DD8B2u, sub_004DD8B2); /* call 0x004DD8B2 */

loc_004C52CE: ;
    ecx = MEM32(esi + 0x3C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C52E4; /* je: equal / zero */

loc_004C52D5: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004C52DAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C52D7u); } /* indirect call */
    }

loc_004C52DA: ;
    PUSH32(esp, 0);
    ecx = esi + 0x3C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C52E4u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C52E4: ;
    ecx = MEM32(esi + 0x40);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C52FA; /* je: equal / zero */

loc_004C52EB: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004C52F0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C52EDu); } /* indirect call */
    }

loc_004C52F0: ;
    PUSH32(esp, 0);
    ecx = esi + 0x40;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C52FAu); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C52FA: ;
    ecx = MEM32(esi + 0x44);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C5310; /* je: equal / zero */

loc_004C5301: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004C5306u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C5303u); } /* indirect call */
    }

loc_004C5306: ;
    PUSH32(esp, 0);
    ecx = esi + 0x44;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C5310u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C5310: ;
    ecx = MEM32(esi + 0x48);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C5326; /* je: equal / zero */

loc_004C5317: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004C531Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C5319u); } /* indirect call */
    }

loc_004C531C: ;
    PUSH32(esp, 0);
    ecx = esi + 0x48;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C5326u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C5326: ;
    ecx = MEM32(ebp + -8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x67616D65);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004C5333u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C5330u); } /* indirect call */
    }

loc_004C5333: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C5338u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004C5338: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x004C533Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C533Cu); } /* indirect call */
    }

loc_004C533F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(0x8631F8));
    edx = MEM32(eax);
    PUSH32(esp, MEM32(0x8631F4));
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x004C5352u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C534Fu); } /* indirect call */
    }

loc_004C5352: ;
    ecx = ebp + -8;
    PUSH32(esp, ecx);
    ecx = eax + 8;
    MEM32(ebp + -8) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C5361u); RECOMP_ABI_CALL(0x004DD8B2u, sub_004DD8B2); /* call 0x004DD8B2 */

loc_004C5361: ;
    ecx = MEM32(esi + 0x48);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C536D; /* je: equal / zero */

loc_004C5368: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C536Du); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004C536D: ;
    ecx = MEM32(esi + 0x44);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C5379; /* je: equal / zero */

loc_004C5374: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C5379u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004C5379: ;
    ecx = MEM32(esi + 0x40);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C5385; /* je: equal / zero */

loc_004C5380: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C5385u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004C5385: ;
    ecx = MEM32(esi + 0x3C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C5391; /* je: equal / zero */

loc_004C538C: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C5391u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004C5391: ;
    ecx = MEM32(esi + 0x38);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C539D; /* je: equal / zero */

loc_004C5398: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C539Du); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004C539D: ;
    ecx = MEM32(esi + 0x34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C53A9; /* je: equal / zero */

loc_004C53A4: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C53A9u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004C53A9: ;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C53B0u); RECOMP_ABI_CALL(0x004AD973u, sub_004AD973); /* call 0x004AD973 */

loc_004C53B0: ;
    ecx = esi + 0x28;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C53B8u); RECOMP_ABI_CALL(0x006080B8u, sub_006080B8); /* call 0x006080B8 */

loc_004C53B8: ;
    ecx = esi + 0x24;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C53C0u); RECOMP_ABI_CALL(0x006080E5u, sub_006080E5); /* call 0x006080E5 */

loc_004C53C0: ;
    ecx = esi + 0x20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C53C8u); RECOMP_ABI_CALL(0x00607F23u, sub_00607F23); /* call 0x00607F23 */

loc_004C53C8: ;
    ecx = esi + 0x1C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C53D0u); RECOMP_ABI_CALL(0x00607F50u, sub_00607F50); /* call 0x00607F50 */

loc_004C53D0: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C53D7u); RECOMP_ABI_CALL(0x00608112u, sub_00608112); /* call 0x00608112 */

loc_004C53D7: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C53DEu); RECOMP_ABI_CALL(0x004C1837u, sub_004C1837); /* call 0x004C1837 */

loc_004C53DE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004C534D
 * Original: 0x004C534D - 0x004C53E3 (150 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C534D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C534D: ;
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x004C5352u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C534Fu); } /* indirect call */
    }

loc_004C5352: ;
    ecx = ebp + -8;
    PUSH32(esp, ecx);
    ecx = eax + 8;
    MEM32(ebp + -8) = ebx;
    PUSH32(esp, 0x004C5361u); RECOMP_ABI_CALL(0x004DD8B2u, sub_004DD8B2); /* call 0x004DD8B2 */

loc_004C5361: ;
    ecx = MEM32(esi + 0x48);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C536D; /* je: equal / zero */

loc_004C5368: ;
    PUSH32(esp, 0x004C536Du); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004C536D: ;
    ecx = MEM32(esi + 0x44);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C5379; /* je: equal / zero */

loc_004C5374: ;
    PUSH32(esp, 0x004C5379u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004C5379: ;
    ecx = MEM32(esi + 0x40);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C5385; /* je: equal / zero */

loc_004C5380: ;
    PUSH32(esp, 0x004C5385u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004C5385: ;
    ecx = MEM32(esi + 0x3C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C5391; /* je: equal / zero */

loc_004C538C: ;
    PUSH32(esp, 0x004C5391u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004C5391: ;
    ecx = MEM32(esi + 0x38);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C539D; /* je: equal / zero */

loc_004C5398: ;
    PUSH32(esp, 0x004C539Du); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004C539D: ;
    ecx = MEM32(esi + 0x34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C53A9; /* je: equal / zero */

loc_004C53A4: ;
    PUSH32(esp, 0x004C53A9u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004C53A9: ;
    ecx = ebx;
    PUSH32(esp, 0x004C53B0u); RECOMP_ABI_CALL(0x004AD973u, sub_004AD973); /* call 0x004AD973 */

loc_004C53B0: ;
    ecx = esi + 0x28;
    PUSH32(esp, 0x004C53B8u); RECOMP_ABI_CALL(0x006080B8u, sub_006080B8); /* call 0x006080B8 */

loc_004C53B8: ;
    ecx = esi + 0x24;
    PUSH32(esp, 0x004C53C0u); RECOMP_ABI_CALL(0x006080E5u, sub_006080E5); /* call 0x006080E5 */

loc_004C53C0: ;
    ecx = esi + 0x20;
    PUSH32(esp, 0x004C53C8u); RECOMP_ABI_CALL(0x00607F23u, sub_00607F23); /* call 0x00607F23 */

loc_004C53C8: ;
    ecx = esi + 0x1C;
    PUSH32(esp, 0x004C53D0u); RECOMP_ABI_CALL(0x00607F50u, sub_00607F50); /* call 0x00607F50 */

loc_004C53D0: ;
    ecx = edi;
    PUSH32(esp, 0x004C53D7u); RECOMP_ABI_CALL(0x00608112u, sub_00608112); /* call 0x00608112 */

loc_004C53D7: ;
    ecx = esi;
    PUSH32(esp, 0x004C53DEu); RECOMP_ABI_CALL(0x004C1837u, sub_004C1837); /* call 0x004C1837 */

loc_004C53DE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004C53E3
 * Original: 0x004C53E3 - 0x004C543C (89 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C53E3(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C53E3: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004C53EBu); RECOMP_ABI_CALL(0x004DC9FAu, sub_004DC9FA); /* call 0x004DC9FA */

loc_004C53EB: ;
    _fa = (uint32_t)(MEM8(esi + 0x30)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x30), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C5429; /* je: equal / zero */

loc_004C53F1: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x004C53F8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C53F5u); } /* indirect call */
    }

loc_004C53F8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004C5429; /* jne: not equal / not zero */

loc_004C53FC: ;
    PUSH32(esp, 0x004C5401u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004C5401: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x004C5408u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C5405u); } /* indirect call */
    }

loc_004C5408: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x004C540Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C540Cu); } /* indirect call */
    }

loc_004C540F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C5429; /* je: equal / zero */

loc_004C5413: ;
    edx = MEM32(eax);
    ecx = esi + 0x28;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x004C541Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C541Bu); } /* indirect call */
    }

loc_004C541E: ;
    PUSH32(esp, eax);
    ecx = esi + 0x48;
    PUSH32(esp, 0x004C5427u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C5427: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_004C5429: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x8665C0);
    ecx = esi;
    PUSH32(esp, 0x004C543Au); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C543A: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004C543C
 * Original: 0x004C543C - 0x004C545D (33 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C543C(void)
{

loc_004C543C: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esi + 0x20;
    PUSH32(esp, 0x004C5449u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C5449: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x8665C0);
    ecx = esi + -40;
    PUSH32(esp, 0x004C545Bu); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C545B: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004C5441
 * Original: 0x004C5441 - 0x004C545D (28 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C5441(void)
{

loc_004C5441: ;
    ecx = esi + 0x20;
    PUSH32(esp, 0x004C5449u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C5449: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x8665C0);
    ecx = esi + -40;
    PUSH32(esp, 0x004C545Bu); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C545B: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004C5453
 * Original: 0x004C5453 - 0x004C545D (10 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C5453(void)
{

loc_004C5453: ;
    ecx = esi + -40;
    PUSH32(esp, 0x004C545Bu); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C545B: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004C545D
 * Original: 0x004C545D - 0x004C5480 (35 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C545D(void)
{

loc_004C545D: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esi + 0x20;
    PUSH32(esp, 0x004C546Au); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C546A: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x8665D8);
    ecx = esi + -40;
    PUSH32(esp, 0x004C547Cu); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C547C: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C5480
 * Original: 0x004C5480 - 0x004C54BB (59 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C5480(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C5480: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x34);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x88); PUSH32(esp, 0x004C548Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C5488u); } /* indirect call */
    }

loc_004C548E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C54A8; /* je: equal / zero */

loc_004C5492: ;
    edx = MEM32(eax);
    ecx = esi + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x004C549Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C549Au); } /* indirect call */
    }

loc_004C549D: ;
    PUSH32(esp, eax);
    ecx = esi + 0x40;
    PUSH32(esp, 0x004C54A6u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C54A6: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_004C54A8: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x8665F0);
    ecx = esi;
    PUSH32(esp, 0x004C54B9u); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C54B9: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004C54BB
 * Original: 0x004C54BB - 0x004C5555 (154 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C54BB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C54BB: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x004C54C6u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004C54C6: ;
    edi = eax;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x30); PUSH32(esp, 0x004C54CFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C54CCu); } /* indirect call */
    }

loc_004C54CF: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x004C54D6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C54D3u); } /* indirect call */
    }

loc_004C54D6: ;
    ebp = eax;
    PUSH32(esp, 0x004C54DDu); RECOMP_ABI_CALL(0x004DC9FAu, sub_004DC9FA); /* call 0x004DC9FA */

loc_004C54DD: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x004C54E4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C54E1u); } /* indirect call */
    }

loc_004C54E4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_004C552E; /* jne: not equal / not zero */

loc_004C54E8: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x004C54EEu); RECOMP_ABI_CALL(0x004DC981u, sub_004DC981); /* call 0x004DC981 */

loc_004C54EE: ;
    ebx = eax;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x004C54F7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C54F4u); } /* indirect call */
    }

loc_004C54F7: ;
    ecx = esi;
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    edx = esi + 0x24;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = MEM32(ebx);
    edi = eax;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebx;
    MEM32(esp + 0x14) = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004C5512u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C550Fu); } /* indirect call */
    }

loc_004C5512: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x004C5522u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C551Fu); } /* indirect call */
    }

loc_004C5522: ;
    PUSH32(esp, eax);
    ecx = esi + 0x44;
    PUSH32(esp, 0x004C552Bu); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C552B: ;
    POP32(esp, ebx);
    goto loc_004C5550;

loc_004C552E: ;
    PUSH32(esp, 0);
    ecx = esi + 0x44;
    PUSH32(esp, 0x004C5538u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C5538: ;
    ecx = MEM32(esi + 0x34);
    eax = MEM32(ecx);
    edx = esi + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0xBC); PUSH32(esp, 0x004C5547u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C5541u); } /* indirect call */
    }

loc_004C5547: ;
    PUSH32(esp, eax);
    ecx = esi + 0x3C;
    PUSH32(esp, 0x004C5550u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C5550: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004C5555
 * Original: 0x004C5555 - 0x004C5572 (29 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C5555(void)
{

loc_004C5555: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x34);
    eax = MEM32(ecx);
    edx = esi + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0xBC); PUSH32(esp, 0x004C5567u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C5561u); } /* indirect call */
    }

loc_004C5567: ;
    PUSH32(esp, eax);
    ecx = esi + 0x3C;
    PUSH32(esp, 0x004C5570u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C5570: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004C5572
 * Original: 0x004C5572 - 0x004C55BE (76 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C5572(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C5572: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(edi + 0x3C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x7C); PUSH32(esp, 0x004C557Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C557Bu); } /* indirect call */
    }

loc_004C557E: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004C559D; /* jne: not equal / not zero */

loc_004C5584: ;
    PUSH32(esp, 0x004C5589u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004C5589: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x44); PUSH32(esp, 0x004C5590u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C558Du); } /* indirect call */
    }

loc_004C5590: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x004C5597u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C5594u); } /* indirect call */
    }

loc_004C5597: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C55B9; /* je: equal / zero */

loc_004C559D: ;
    _fa = (uint32_t)(MEM32(edi + 0x64)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x64), 0 (32-bit) */
    eax = MEM32(esi);
    ecx = esi;
    if (CMP_NE(_fa, _fb)) goto loc_004C55AF; /* jne: not equal / not zero */

loc_004C55A7: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004C55AAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C55A7u); } /* indirect call */
    }

loc_004C55AA: ;
    MEM32(edi + 0x64) = eax;
    goto loc_004C55B9;

loc_004C55AF: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004C55B2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C55AFu); } /* indirect call */
    }

loc_004C55B2: ;
    _fa = (uint32_t)(MEM32(edi + 0x64)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x64), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C55B9; /* je: equal / zero */

loc_004C55B7: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004C55B9: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004C55BE
 * Original: 0x004C55BE - 0x004C56D7 (281 bytes, 84 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004C55BE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C55BE: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x866674);
    PUSH32(esp, 1);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C55D3u); RECOMP_ABI_CALL(0x004C17F2u, sub_004C17F2); /* call 0x004C17F2 */

loc_004C55D3: ;
    ebx = esi + 0x18;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C55DDu); RECOMP_ABI_CALL(0x00607FCEu, sub_00607FCE); /* call 0x00607FCE */

loc_004C55DD: ;
    ecx = esi + 0x1C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C55E5u); RECOMP_ABI_CALL(0x00607FA1u, sub_00607FA1); /* call 0x00607FA1 */

loc_004C55E5: ;
    ecx = esi + 0x20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C55EDu); RECOMP_ABI_CALL(0x00607F74u, sub_00607F74); /* call 0x00607F74 */

loc_004C55ED: ;
    ecx = esi + 0x24;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C55F5u); RECOMP_ABI_CALL(0x00608163u, sub_00608163); /* call 0x00608163 */

loc_004C55F5: ;
    ecx = esi + 0x28;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C55FDu); RECOMP_ABI_CALL(0x00608136u, sub_00608136); /* call 0x00608136 */

loc_004C55FD: ;
    edi = esi + 0x2C;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C5607u); RECOMP_ABI_CALL(0x00608109u, sub_00608109); /* call 0x00608109 */

loc_004C5607: ;
    ecx = esi + 0x30;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C560Fu); RECOMP_ABI_CALL(0x006080AFu, sub_006080AF); /* call 0x006080AF */

loc_004C560F: ;
    ecx = esi + 0x34;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C5617u); RECOMP_ABI_CALL(0x00607EEDu, sub_00607EED); /* call 0x00607EED */

loc_004C5617: ;
    MEM32(ebx) = 0x866668;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = 0x866664;
    MEM32(esi + 0x1C) = 0x866658;
    MEM32(esi + 0x20) = 0x86664C;
    MEM32(esi + 0x24) = 0x866640;
    MEM32(esi + 0x28) = 0x866634;
    MEM32(edi) = 0x866628;
    MEM32(esi + 0x30) = 0x86661C;
    MEM32(esi + 0x34) = 0x866610;
    MEM8(esi + 0x38) = LO8(ebx);
    MEM8(esi + 0x39) = LO8(ebx);
    MEM8(esi + 0x3A) = LO8(ebx);
    ecx = esi + 0x3C;
    MEM32(ecx) = ebx;
    MEM32(esi + 0x40) = ebx;
    MEM32(esi + 0x44) = ebx;
    MEM32(esi + 0x48) = ebx;
    MEM32(esi + 0x4C) = ebx;
    MEM32(esi + 0x50) = ebx;
    MEM32(esi + 0x54) = ebx;
    MEM32(esi + 0x58) = ebx;
    MEM32(esi + 0x5C) = ebx;
    MEM32(esi + 0x60) = ebx;
    MEM32(esi + 0x64) = ebx;
    PUSH32(esp, MEM32(0x90E46C));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C568Cu); RECOMP_ABI_CALL(0x004AFE27u, sub_004AFE27); /* call 0x004AFE27 */

loc_004C568C: ;
    PUSH32(esp, ebx);
    ecx = 0x90E46C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C5697u); RECOMP_ABI_CALL(0x004AFE27u, sub_004AFE27); /* call 0x004AFE27 */

loc_004C5697: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C569Cu); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004C569C: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x44); PUSH32(esp, 0x004C56A3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C56A0u); } /* indirect call */
    }

loc_004C56A3: ;
    ebx = eax;
    eax = ebp + -4;
    PUSH32(esp, eax);
    ecx = ebx + 8;
    MEM32(ebp + -4) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C56B4u); RECOMP_ABI_CALL(0x004DD750u, sub_004DD750); /* call 0x004DD750 */

loc_004C56B4: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C56B9u); RECOMP_ABI_CALL(0x004DC9FAu, sub_004DC9FA); /* call 0x004DC9FA */

loc_004C56B9: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x004C56C0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C56BDu); } /* indirect call */
    }

loc_004C56C0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004C56D0; /* jne: not equal / not zero */

loc_004C56C4: ;
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x67616D65);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004C56D0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C56CDu); } /* indirect call */
    }

loc_004C56D0: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004C56D7
 * Original: 0x004C56D7 - 0x004C56DA (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C56D7(void)
{

loc_004C56D7: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C56DA
 * Original: 0x004C56DA - 0x004C56E2 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C56DA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C56DA: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004CD655(); return; /* tail jmp 0x004CD655 */

}

/**
 * sub_004C56E2
 * Original: 0x004C56E2 - 0x004C56EA (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C56E2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C56E2: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004CD655(); return; /* tail jmp 0x004CD655 */

}

/**
 * sub_004C56EA
 * Original: 0x004C56EA - 0x004C56F2 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C56EA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C56EA: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004CD655(); return; /* tail jmp 0x004CD655 */

}

/**
 * sub_004C56F2
 * Original: 0x004C56F2 - 0x004C56FA (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C56F2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C56F2: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x24;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004CD655(); return; /* tail jmp 0x004CD655 */

}

/**
 * sub_004C56FA
 * Original: 0x004C56FA - 0x004C5702 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C56FA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C56FA: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x28;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004CD655(); return; /* tail jmp 0x004CD655 */

}

/**
 * sub_004C5702
 * Original: 0x004C5702 - 0x004C570A (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C5702(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C5702: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x2C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004CD655(); return; /* tail jmp 0x004CD655 */

}

/**
 * sub_004C570A
 * Original: 0x004C570A - 0x004C5712 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C570A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C570A: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004CD655(); return; /* tail jmp 0x004CD655 */

}

/**
 * sub_004C5712
 * Original: 0x004C5712 - 0x004C571A (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C5712(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C5712: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x34;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004CD655(); return; /* tail jmp 0x004CD655 */

}

/**
 * sub_004C571A
 * Original: 0x004C571A - 0x004C5900 (486 bytes, 159 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004C571A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C571A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x2C;
    MEM32(esi) = 0x866664;
    MEM32(esi + 0x18) = 0x866668;
    MEM32(esi + 0x1C) = 0x866658;
    MEM32(esi + 0x20) = 0x86664C;
    MEM32(esi + 0x24) = 0x866640;
    MEM32(esi + 0x28) = 0x866634;
    MEM32(edi) = 0x866628;
    MEM32(esi + 0x30) = 0x86661C;
    MEM32(esi + 0x34) = 0x866610;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C5768u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004C5768: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x44); PUSH32(esp, 0x004C576Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C576Cu); } /* indirect call */
    }

loc_004C576F: ;
    ebx = eax;
    eax = ebp + -4;
    PUSH32(esp, eax);
    ecx = ebx + 8;
    MEM32(ebp + -4) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C5780u); RECOMP_ABI_CALL(0x004DD8B2u, sub_004DD8B2); /* call 0x004DD8B2 */

loc_004C5780: ;
    ecx = MEM32(esi + 0x40);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C5796; /* je: equal / zero */

loc_004C5787: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004C578Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C5789u); } /* indirect call */
    }

loc_004C578C: ;
    PUSH32(esp, 0);
    ecx = esi + 0x40;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C5796u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C5796: ;
    ecx = MEM32(esi + 0x44);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C57AC; /* je: equal / zero */

loc_004C579D: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004C57A2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C579Fu); } /* indirect call */
    }

loc_004C57A2: ;
    PUSH32(esp, 0);
    ecx = esi + 0x44;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C57ACu); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C57AC: ;
    ecx = MEM32(esi + 0x48);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C57C2; /* je: equal / zero */

loc_004C57B3: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004C57B8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C57B5u); } /* indirect call */
    }

loc_004C57B8: ;
    PUSH32(esp, 0);
    ecx = esi + 0x48;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C57C2u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C57C2: ;
    ecx = MEM32(esi + 0x4C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C57D8; /* je: equal / zero */

loc_004C57C9: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004C57CEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C57CBu); } /* indirect call */
    }

loc_004C57CE: ;
    PUSH32(esp, 0);
    ecx = esi + 0x4C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C57D8u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C57D8: ;
    ecx = MEM32(esi + 0x50);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C57EE; /* je: equal / zero */

loc_004C57DF: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004C57E4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C57E1u); } /* indirect call */
    }

loc_004C57E4: ;
    PUSH32(esp, 0);
    ecx = esi + 0x50;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C57EEu); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C57EE: ;
    ecx = MEM32(esi + 0x54);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C5804; /* je: equal / zero */

loc_004C57F5: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004C57FAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C57F7u); } /* indirect call */
    }

loc_004C57FA: ;
    PUSH32(esp, 0);
    ecx = esi + 0x54;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C5804u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C5804: ;
    ecx = MEM32(esi + 0x58);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C581A; /* je: equal / zero */

loc_004C580B: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004C5810u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C580Du); } /* indirect call */
    }

loc_004C5810: ;
    PUSH32(esp, 0);
    ecx = esi + 0x58;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C581Au); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C581A: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C581Fu); RECOMP_ABI_CALL(0x004DC9FAu, sub_004DC9FA); /* call 0x004DC9FA */

loc_004C581F: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x004C5826u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C5823u); } /* indirect call */
    }

loc_004C5826: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004C5836; /* jne: not equal / not zero */

loc_004C582A: ;
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x67616D65);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004C5836u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C5833u); } /* indirect call */
    }

loc_004C5836: ;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004C583Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C583Au); } /* indirect call */
    }

loc_004C583D: ;
    ecx = MEM32(esi + 0x60);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C5849; /* je: equal / zero */

loc_004C5844: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C5849u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004C5849: ;
    ecx = MEM32(esi + 0x5C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C5855; /* je: equal / zero */

loc_004C5850: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C5855u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004C5855: ;
    ecx = MEM32(esi + 0x58);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C5861; /* je: equal / zero */

loc_004C585C: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C5861u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004C5861: ;
    ecx = MEM32(esi + 0x54);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C586D; /* je: equal / zero */

loc_004C5868: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C586Du); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004C586D: ;
    ecx = MEM32(esi + 0x50);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C5879; /* je: equal / zero */

loc_004C5874: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C5879u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004C5879: ;
    ecx = MEM32(esi + 0x4C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C5885; /* je: equal / zero */

loc_004C5880: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C5885u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004C5885: ;
    ecx = MEM32(esi + 0x48);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C5891; /* je: equal / zero */

loc_004C588C: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C5891u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004C5891: ;
    ecx = MEM32(esi + 0x44);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C589D; /* je: equal / zero */

loc_004C5898: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C589Du); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004C589D: ;
    ecx = MEM32(esi + 0x40);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C58A9; /* je: equal / zero */

loc_004C58A4: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C58A9u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004C58A9: ;
    ecx = MEM32(esi + 0x3C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C58B5; /* je: equal / zero */

loc_004C58B0: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C58B5u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004C58B5: ;
    ecx = esi + 0x34;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C58BDu); RECOMP_ABI_CALL(0x00607EF6u, sub_00607EF6); /* call 0x00607EF6 */

loc_004C58BD: ;
    ecx = esi + 0x30;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C58C5u); RECOMP_ABI_CALL(0x006080B8u, sub_006080B8); /* call 0x006080B8 */

loc_004C58C5: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C58CCu); RECOMP_ABI_CALL(0x00608112u, sub_00608112); /* call 0x00608112 */

loc_004C58CC: ;
    ecx = esi + 0x28;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C58D4u); RECOMP_ABI_CALL(0x0060813Fu, sub_0060813F); /* call 0x0060813F */

loc_004C58D4: ;
    ecx = esi + 0x24;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C58DCu); RECOMP_ABI_CALL(0x0060816Cu, sub_0060816C); /* call 0x0060816C */

loc_004C58DC: ;
    ecx = esi + 0x20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C58E4u); RECOMP_ABI_CALL(0x00607F7Du, sub_00607F7D); /* call 0x00607F7D */

loc_004C58E4: ;
    ecx = esi + 0x1C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C58ECu); RECOMP_ABI_CALL(0x00607FAAu, sub_00607FAA); /* call 0x00607FAA */

loc_004C58EC: ;
    ecx = esi + 0x18;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C58F4u); RECOMP_ABI_CALL(0x00607FD7u, sub_00607FD7); /* call 0x00607FD7 */

loc_004C58F4: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C58FBu); RECOMP_ABI_CALL(0x004C1837u, sub_004C1837); /* call 0x004C1837 */

loc_004C58FB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004C5900
 * Original: 0x004C5900 - 0x004C593C (60 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C5900(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C5900: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi + 0x24;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), eax (32-bit) */
    PUSH32(esp, eax);
    if (CMP_EQ(_fa, _fb)) goto loc_004C591E; /* je: equal / zero */

loc_004C590D: ;
    PUSH32(esp, 0x004C5912u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C5912: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x8665D8);
    goto loc_004C5930;

loc_004C591E: ;
    ecx = esi + 0x28;
    PUSH32(esp, 0x004C5926u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C5926: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x866698);

loc_004C5930: ;
    ecx = esi + -48;
    PUSH32(esp, 0x004C5938u); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C5938: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C593C
 * Original: 0x004C593C - 0x004C59A4 (104 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C593C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C593C: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004C5944u); RECOMP_ABI_CALL(0x004C5572u, sub_004C5572); /* call 0x004C5572 */

loc_004C5944: ;
    ecx = eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C595E; /* je: equal / zero */

loc_004C594A: ;
    _fa = (uint32_t)(MEM8(esi + 0x39)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x39), 0 (8-bit) */
    eax = MEM32(ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004C595B; /* je: equal / zero */

loc_004C5952: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x004C5959u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C5956u); } /* indirect call */
    }

loc_004C5959: ;
    goto loc_004C595E;

loc_004C595B: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x004C595Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C595Bu); } /* indirect call */
    }

loc_004C595E: ;
    _fa = (uint32_t)(MEM8(esi + 0x38)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x38), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C5991; /* je: equal / zero */

loc_004C5964: ;
    PUSH32(esp, 0x004C5969u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004C5969: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x004C5970u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C596Du); } /* indirect call */
    }

loc_004C5970: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x004C5977u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C5974u); } /* indirect call */
    }

loc_004C5977: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C5991; /* je: equal / zero */

loc_004C597B: ;
    edx = MEM32(eax);
    ecx = esi + 0x30;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x004C5986u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C5983u); } /* indirect call */
    }

loc_004C5986: ;
    PUSH32(esp, eax);
    ecx = esi + 0x54;
    PUSH32(esp, 0x004C598Fu); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C598F: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_004C5991: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x8665C0);
    ecx = esi;
    PUSH32(esp, 0x004C59A2u); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C59A2: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004C59A4
 * Original: 0x004C59A4 - 0x004C59C9 (37 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C59A4(void)
{

loc_004C59A4: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esi + 0x28;
    MEM8(esi + 0x20) = 0;
    PUSH32(esp, 0x004C59B5u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C59B5: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x8666C0);
    ecx = esi + -24;
    PUSH32(esp, 0x004C59C7u); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C59C7: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004C59C9
 * Original: 0x004C59C9 - 0x004C59EC (35 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C59C9(void)
{

loc_004C59C9: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esi + 0x28;
    PUSH32(esp, 0x004C59D6u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C59D6: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x8666DC);
    ecx = esi + -24;
    PUSH32(esp, 0x004C59E8u); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C59E8: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C59EC
 * Original: 0x004C59EC - 0x004C5A0D (33 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C59EC(void)
{

loc_004C59EC: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esi + 0x28;
    PUSH32(esp, 0x004C59F9u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C59F9: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x8666F8);
    ecx = esi + -28;
    PUSH32(esp, 0x004C5A0Bu); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C5A0B: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004C5A0D
 * Original: 0x004C5A0D - 0x004C5A3E (49 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C5A0D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C5A0D: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esi + 0x28;
    PUSH32(esp, 0x004C5A1Au); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C5A1A: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), 3 (32-bit) */
    ecx = esi + -28;
    PUSH32(esp, 0x7B891F);
    if (CMP_EQ(_fa, _fb)) goto loc_004C5A30; /* je: equal / zero */

loc_004C5A29: ;
    PUSH32(esp, 0x86672C);
    goto loc_004C5A35;

loc_004C5A30: ;
    PUSH32(esp, 0x866714);

loc_004C5A35: ;
    PUSH32(esp, 0x004C5A3Au); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C5A3A: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C5A3E
 * Original: 0x004C5A3E - 0x004C5A5F (33 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C5A3E(void)
{

loc_004C5A3E: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esi + 0x28;
    PUSH32(esp, 0x004C5A4Bu); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C5A4B: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x866748);
    ecx = esi + -32;
    PUSH32(esp, 0x004C5A5Du); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C5A5D: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004C5A5F
 * Original: 0x004C5A5F - 0x004C5A82 (35 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C5A5F(void)
{

loc_004C5A5F: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esi + 0x28;
    PUSH32(esp, 0x004C5A6Cu); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C5A6C: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x866768);
    ecx = esi + -32;
    PUSH32(esp, 0x004C5A7Eu); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C5A7E: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C5A82
 * Original: 0x004C5A82 - 0x004C5B09 (135 bytes, 50 insns)
 * Category: game_io
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C5A82(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C5A82: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    ecx = esi + 0x2C;
    PUSH32(esp, 0x004C5A91u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C5A91: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x14), ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004C5AEE; /* jbe: below or equal (unsigned <=) */

loc_004C5A9A: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = eax + 8;
    edi = esi + 0x38;
    PUSH32(esp, 0x004C5AA8u); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004C5AA8: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x004C5AB0u); RECOMP_ABI_CALL(0x004C2A36u, sub_004C2A36); /* call 0x004C2A36 */

loc_004C5AB0: ;
    ecx = MEM32(0x90E424);
    eax = MEM32(ecx);
    edi = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004C5ABDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C5ABAu); } /* indirect call */
    }

loc_004C5ABD: ;
    ebx = eax;
    ebp = MEM32(ebx);
    _fb = (uint32_t)(0xFFFFFFDCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xFFFFFFDCu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    PUSH32(esp, 0x004C5ACBu); RECOMP_ABI_CALL(0x004C1094u, sub_004C1094); /* call 0x004C1094 */

loc_004C5ACB: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x004C5AD3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C5AD0u); } /* indirect call */
    }

loc_004C5AD3: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(ebp + 4); PUSH32(esp, 0x004C5AD9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C5AD6u); } /* indirect call */
    }

loc_004C5AD9: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x86679C);
    ecx = esi;
    PUSH32(esp, 0x004C5AEAu); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C5AEA: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    goto loc_004C5B04;

loc_004C5AEE: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x866784);
    ecx = esi + -36;
    MEM8(esi + 0x15) = 1;
    PUSH32(esp, 0x004C5B04u); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C5B04: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C5B09
 * Original: 0x004C5B09 - 0x004C5B30 (39 bytes, 12 insns)
 * Category: game_io
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C5B09(void)
{

loc_004C5B09: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esi + 0x2C;
    MEM8(esi + 0x15) = 1;
    PUSH32(esp, 0x004C5B1Au); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C5B1A: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x866784);
    ecx = esi + -36;
    PUSH32(esp, 0x004C5B2Cu); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C5B2C: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C5B30
 * Original: 0x004C5B30 - 0x004C5BA3 (115 bytes, 44 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C5B30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004C5B30: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esi + 0x24;
    PUSH32(esp, 0x004C5B3Fu); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C5B3F: ;
    edi = esi + -40;
    ecx = edi;
    MEM8(esi + 0x12) = 1;
    PUSH32(esp, 0x004C5B4Du); RECOMP_ABI_CALL(0x004C5572u, sub_004C5572); /* call 0x004C5572 */

loc_004C5B4D: ;
    ecx = edi;
    ebx = eax;
    PUSH32(esp, 0x004C5B56u); RECOMP_ABI_CALL(0x004C1082u, sub_004C1082); /* call 0x004C1082 */

loc_004C5B56: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM8(esi + 0x10) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_004C5B7C; /* je: equal / zero */

loc_004C5B5D: ;
    eax = MEM32(ebx);
    ecx = esi + -40;
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    edx = esi + -16;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x004C5B71u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C5B6Eu); } /* indirect call */
    }

loc_004C5B71: ;
    PUSH32(esp, eax);
    ecx = esi + 0x18;
    PUSH32(esp, 0x004C5B7Au); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C5B7A: ;
    goto loc_004C5B9F;

loc_004C5B7C: ;
    ecx = edi;
    PUSH32(esp, 0x004C5B83u); RECOMP_ABI_CALL(0x004C1082u, sub_004C1082); /* call 0x004C1082 */

loc_004C5B83: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    ecx = edi;
    PUSH32(esp, 0x7B891F);
    if (CMP_EQ(_fa, _fb)) goto loc_004C5B95; /* je: equal / zero */

loc_004C5B8E: ;
    PUSH32(esp, 0x8667B4);
    goto loc_004C5B9A;

loc_004C5B95: ;
    PUSH32(esp, 0x8666C0);

loc_004C5B9A: ;
    PUSH32(esp, 0x004C5B9Fu); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C5B9F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_004C5BA3
 * Original: 0x004C5BA3 - 0x004C5BE5 (66 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C5BA3(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C5BA3: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esi + 0x24;
    MEM8(esi + 0x11) = 1;
    PUSH32(esp, 0x004C5BB4u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C5BB4: ;
    eax = MEM32(esp + 8);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, 0x7B891F);
    ecx = esi + -40;
    if ((_fa == 0)) goto loc_004C5BD7; /* je: equal / zero */

loc_004C5BC4: ;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_004C5BD0; /* je: equal / zero */

loc_004C5BC9: ;
    PUSH32(esp, 0x8666DC);
    goto loc_004C5BDC;

loc_004C5BD0: ;
    PUSH32(esp, 0x8667E0);
    goto loc_004C5BDC;

loc_004C5BD7: ;
    PUSH32(esp, 0x8667CC);

loc_004C5BDC: ;
    PUSH32(esp, 0x004C5BE1u); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C5BE1: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C5BE5
 * Original: 0x004C5BE5 - 0x004C5C06 (33 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C5BE5(void)
{

loc_004C5BE5: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esi + 0x10;
    PUSH32(esp, 0x004C5BF2u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C5BF2: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x8666F8);
    ecx = esi + -52;
    PUSH32(esp, 0x004C5C04u); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C5C04: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004C5C06
 * Original: 0x004C5C06 - 0x004C5C37 (49 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C5C06(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C5C06: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esi + 0x10;
    PUSH32(esp, 0x004C5C13u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C5C13: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), 3 (32-bit) */
    ecx = esi + -52;
    PUSH32(esp, 0x7B891F);
    if (CMP_NE(_fa, _fb)) goto loc_004C5C29; /* jne: not equal / not zero */

loc_004C5C22: ;
    PUSH32(esp, 0x866714);
    goto loc_004C5C2E;

loc_004C5C29: ;
    PUSH32(esp, 0x86672C);

loc_004C5C2E: ;
    PUSH32(esp, 0x004C5C33u); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C5C33: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C5C37
 * Original: 0x004C5C37 - 0x004C5C7D (70 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C5C37(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004C5C37: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004C5C3Fu); RECOMP_ABI_CALL(0x004C5572u, sub_004C5572); /* call 0x004C5572 */

loc_004C5C3F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004C5C63; /* je: equal / zero */

loc_004C5C43: ;
    edx = MEM32(eax);
    ecx = esi;
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    PUSH32(esp, edi);
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    edi = esi + 0x1C;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x004C5C57u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C5C54u); } /* indirect call */
    }

loc_004C5C57: ;
    PUSH32(esp, eax);
    ecx = esi + 0x44;
    PUSH32(esp, 0x004C5C60u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C5C60: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_004C5C63: ;
    ecx = MEM32(esi + 0x3C);
    eax = MEM32(ecx);
    edx = esi + 0x34;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0xCC); PUSH32(esp, 0x004C5C72u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C5C6Cu); } /* indirect call */
    }

loc_004C5C72: ;
    PUSH32(esp, eax);
    ecx = esi + 0x44;
    PUSH32(esp, 0x004C5C7Bu); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C5C7B: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004C5C7D
 * Original: 0x004C5C7D - 0x004C5CBC (63 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C5C7D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004C5C7D: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004C5C85u); RECOMP_ABI_CALL(0x004C5572u, sub_004C5572); /* call 0x004C5572 */

loc_004C5C85: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    ecx = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_004C5CAB; /* je: equal / zero */

loc_004C5C8B: ;
    edx = MEM32(eax);
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    PUSH32(esp, edi);
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    edi = esi + 0x20;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x004C5C9Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C5C9Cu); } /* indirect call */
    }

loc_004C5C9F: ;
    PUSH32(esp, eax);
    ecx = esi + 0x48;
    PUSH32(esp, 0x004C5CA8u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C5CA8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_004C5CAB: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x8667B4);
    PUSH32(esp, 0x004C5CBAu); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C5CBA: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004C5CBC
 * Original: 0x004C5CBC - 0x004C5CDA (30 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C5CBC(void)
{

loc_004C5CBC: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0x004C5CC6u); RECOMP_ABI_CALL(0x004DC981u, sub_004DC981); /* call 0x004DC981 */

loc_004C5CC6: ;
    esi = eax;
    ebx = MEM32(esi);
    ecx = edi;
    PUSH32(esp, 0x004C5CD1u); RECOMP_ABI_CALL(0x004C1094u, sub_004C1094); /* call 0x004C1094 */

loc_004C5CD1: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(ebx); PUSH32(esp, 0x004C5CD6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C5CD4u); } /* indirect call */
    }

loc_004C5CD6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_004C5CDA
 * Original: 0x004C5CDA - 0x004C5D4C (114 bytes, 42 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C5CDA(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C5CDA: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi);
    esi = ecx;
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x004C5CE9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C5CE6u); } /* indirect call */
    }

loc_004C5CE9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x67616D65) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x67616D65 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004C5D47; /* jne: not equal / not zero */

loc_004C5CF0: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004C5CF6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C5CF4u); } /* indirect call */
    }

loc_004C5CF6: ;
    ecx = MEM32(esi + 0x10);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x004C5D01u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C5CFEu); } /* indirect call */
    }

loc_004C5D01: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C5D47; /* je: equal / zero */

loc_004C5D05: ;
    eax = MEM32(esp + 0x10);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_004C5D1D; /* je: equal / zero */

loc_004C5D0C: ;
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_004C5D47; /* jne: not equal / not zero */

loc_004C5D11: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x8664A4);
    goto loc_004C5D3F;

loc_004C5D1D: ;
    _fa = (uint32_t)(MEM8(esi + 0xE)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0xE), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004C5D29; /* jne: not equal / not zero */

loc_004C5D23: ;
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x20), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C5D35; /* je: equal / zero */

loc_004C5D29: ;
    ecx = esi + -44;
    PUSH32(esp, 0x004C5D31u); RECOMP_ABI_CALL(0x004C1082u, sub_004C1082); /* call 0x004C1082 */

loc_004C5D31: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C5D47; /* je: equal / zero */

loc_004C5D35: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x8667B4);

loc_004C5D3F: ;
    ecx = esi + -44;
    PUSH32(esp, 0x004C5D47u); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C5D47: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C5D4C
 * Original: 0x004C5D4C - 0x004C5DA7 (91 bytes, 39 insns)
 * Category: game_io
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C5D4C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004C5D4C: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x004C5D55u); RECOMP_ABI_CALL(0x004C5572u, sub_004C5572); /* call 0x004C5572 */

loc_004C5D55: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004C5D93; /* je: equal / zero */

loc_004C5D59: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x004C5D60u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C5D5Du); } /* indirect call */
    }

loc_004C5D60: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_004C5D93; /* jl: less (signed <) */

loc_004C5D66: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x004C5D6Cu); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004C5D6C: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x004C5D73u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C5D70u); } /* indirect call */
    }

loc_004C5D73: ;
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
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x004C5D87u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C5D84u); } /* indirect call */
    }

loc_004C5D87: ;
    PUSH32(esp, eax);
    ecx = esi + 0x50;
    PUSH32(esp, 0x004C5D90u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C5D90: ;
    POP32(esp, ebx);
    goto loc_004C5DA4;

loc_004C5D93: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x866784);
    ecx = esi;
    PUSH32(esp, 0x004C5DA4u); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C5DA4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004C5DAF
 * Original: 0x004C5DAF - 0x004C5DBE (15 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C5DAF(void)
{

loc_004C5DAF: ;
    PUSH32(esp, MEM32(esp + 4));
    ecx = 0x90E46C;
    PUSH32(esp, 0x004C5DBDu); RECOMP_ABI_CALL(0x004AFE27u, sub_004AFE27); /* call 0x004AFE27 */

loc_004C5DBD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004C5DBE
 * Original: 0x004C5DBE - 0x004C5DF8 (58 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C5DBE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C5DBE: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x5C);
    eax = MEM32(ecx);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x30); PUSH32(esp, 0x004C5DCCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C5DC9u); } /* indirect call */
    }

loc_004C5DCC: ;
    ebx = eax;
    PUSH32(esp, 0x004C5DD3u); RECOMP_ABI_CALL(0x004DC981u, sub_004DC981); /* call 0x004DC981 */

loc_004C5DD3: ;
    edi = MEM32(esi + 0x5C);
    edx = MEM32(eax);
    ebp = MEM32(edi);
    ecx = esi + 0x28;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004C5DE3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C5DE0u); } /* indirect call */
    }

loc_004C5DE3: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebp + 0x3C); PUSH32(esp, 0x004C5DEAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C5DE7u); } /* indirect call */
    }

loc_004C5DEA: ;
    PUSH32(esp, eax);
    ecx = esi + 0x4C;
    PUSH32(esp, 0x004C5DF3u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C5DF3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_004C5DF8
 * Original: 0x004C5DF8 - 0x004C5E1B (35 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C5DF8(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C5DF8: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0xC) = eax;
    eax = MEM32(esp + 8);
    PUSH32(esp, 0x7B891F);
    MEM32(ecx + 8) = eax;
    PUSH32(esp, 0x866808);
    _fb = (uint32_t)(0xFFFFFFE8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFE8u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x004C5E18u); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C5E18: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C5E1B
 * Original: 0x004C5E1B - 0x004C5E60 (69 bytes, 23 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C5E1B(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C5E1B: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x86683C);
    PUSH32(esp, 1);
    esi = ecx;
    PUSH32(esp, 0x004C5E2Cu); RECOMP_ABI_CALL(0x004C17F2u, sub_004C17F2); /* call 0x004C17F2 */

loc_004C5E2C: ;
    edi = esi + 0x18;
    ecx = edi;
    PUSH32(esp, 0x004C5E36u); RECOMP_ABI_CALL(0x006081BDu, sub_006081BD); /* call 0x006081BD */

loc_004C5E36: ;
    ebx = esi + 0x1C;
    ecx = ebx;
    PUSH32(esp, 0x004C5E40u); RECOMP_ABI_CALL(0x00608190u, sub_00608190); /* call 0x00608190 */

loc_004C5E40: ;
    MEM32(esi + 0x20) = MEM32(esi + 0x20) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(edi) = 0x866830;
    MEM32(esi) = 0x86682C;
    MEM32(ebx) = 0x866820;
    MEM32(esi + 0x28) = MEM32(esi + 0x28) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_004C5E60
 * Original: 0x004C5E60 - 0x004C5E68 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C5E60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C5E60: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004CD6D6(); return; /* tail jmp 0x004CD6D6 */

}

/**
 * sub_004C5E68
 * Original: 0x004C5E68 - 0x004C5E70 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C5E68(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C5E68: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004CD6D6(); return; /* tail jmp 0x004CD6D6 */

}

/**
 * sub_004C5E70
 * Original: 0x004C5E70 - 0x004C5EB1 (65 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C5E70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C5E70: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x18;
    ebx = esi + 0x1C;
    MEM32(esi) = 0x86682C;
    MEM32(edi) = 0x866830;
    MEM32(ebx) = 0x866820;
    ecx = MEM32(esi + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C5E99; /* je: equal / zero */

loc_004C5E94: ;
    PUSH32(esp, 0x004C5E99u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004C5E99: ;
    ecx = ebx;
    PUSH32(esp, 0x004C5EA0u); RECOMP_ABI_CALL(0x00608199u, sub_00608199); /* call 0x00608199 */

loc_004C5EA0: ;
    ecx = edi;
    PUSH32(esp, 0x004C5EA7u); RECOMP_ABI_CALL(0x006081C6u, sub_006081C6); /* call 0x006081C6 */

loc_004C5EA7: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_004C1837(); return; /* tail jmp 0x004C1837 */

}

/**
 * sub_004C5EB1
 * Original: 0x004C5EB1 - 0x004C5EF7 (70 bytes, 30 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004C5EB1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004C5EB1: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C5EBCu); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004C5EBC: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x004C5EC3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C5EC0u); } /* indirect call */
    }

loc_004C5EC3: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0xC));
    edx = MEM32(eax);
    PUSH32(esp, MEM32(ebp + 8));
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004C5ED0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C5ECDu); } /* indirect call */
    }

loc_004C5ED0: ;
    ecx = esi;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x18)) >> 32) & 1);
    esi = esi + 0x18;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + 0xC) = ecx;
    ecx = ebp + 0xC;
    PUSH32(esp, ecx);
    ecx = eax;
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
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C5EF2u); RECOMP_ABI_CALL(0x004DD750u, sub_004DD750); /* call 0x004DD750 */

loc_004C5EF2: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C5EF7
 * Original: 0x004C5EF7 - 0x004C5F5C (101 bytes, 45 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004C5EF7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004C5EF7: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C5F05u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004C5F05: ;
    esi = edi + 0x28;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    ebx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_004C5F1E; /* je: equal / zero */

loc_004C5F10: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004C5F15u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C5F12u); } /* indirect call */
    }

loc_004C5F15: ;
    PUSH32(esp, 0);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C5F1Eu); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C5F1E: ;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x004C5F25u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C5F22u); } /* indirect call */
    }

loc_004C5F25: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 8));
    esi = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x004C5F31u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C5F2Eu); } /* indirect call */
    }

loc_004C5F31: ;
    ecx = ebp + -4;
    PUSH32(esp, ecx);
    ecx = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0x18)) >> 32) & 1);
    edi = edi + 0x18;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
    PUSH32(esp, 0x004C5F4Bu); RECOMP_ABI_CALL(0x004DD8B2u, sub_004DD8B2); /* call 0x004DD8B2 */

loc_004C5F4B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 8));
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004C5F55u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C5F52u); } /* indirect call */
    }

loc_004C5F55: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C5F5C
 * Original: 0x004C5F5C - 0x004C5FD6 (122 bytes, 55 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004C5F5C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C5F5C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx + 0x28;
    MEM32(ebp + -4) = ecx;
    ecx = MEM32(edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C5F7D; /* je: equal / zero */

loc_004C5F6F: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004C5F74u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C5F71u); } /* indirect call */
    }

loc_004C5F74: ;
    PUSH32(esp, 0);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C5F7Du); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C5F7D: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C5F82u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004C5F82: ;
    esi = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x004C5F8Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C5F88u); } /* indirect call */
    }

loc_004C5F8B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 8));
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x004C5F95u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C5F92u); } /* indirect call */
    }

loc_004C5F95: ;
    ecx = MEM32(ebp + 0xC);
    ebx = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C5FB5; /* je: equal / zero */

loc_004C5FA0: ;
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx), LO8(eax) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C5FB5; /* je: equal / zero */

loc_004C5FA4: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x004C5FABu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C5FA8u); } /* indirect call */
    }

loc_004C5FAB: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0xC));
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004C5FB5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C5FB2u); } /* indirect call */
    }

loc_004C5FB5: ;
    ecx = MEM32(ebp + -4);
    edx = MEM32(ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = ebx;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x004C5FC7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C5FC4u); } /* indirect call */
    }

loc_004C5FC7: ;
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C5FCFu); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C5FCF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004C5FD6
 * Original: 0x004C5FD6 - 0x004C5FF7 (33 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C5FD6(void)
{

loc_004C5FD6: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esi + 0xC;
    PUSH32(esp, 0x004C5FE3u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C5FE3: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x866858);
    ecx = esi + -28;
    PUSH32(esp, 0x004C5FF5u); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C5FF5: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004C5FF7
 * Original: 0x004C5FF7 - 0x004C601A (35 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C5FF7(void)
{

loc_004C5FF7: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esi + 0xC;
    PUSH32(esp, 0x004C6004u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C6004: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x866874);
    ecx = esi + -28;
    PUSH32(esp, 0x004C6016u); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C6016: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C601A
 * Original: 0x004C601A - 0x004C6036 (28 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C601A(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C601A: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0x7B891F);
    MEM32(ecx + 0xC) = eax;
    PUSH32(esp, 0x866890);
    _fb = (uint32_t)(0xFFFFFFE8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFE8u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x004C6033u); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C6033: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C6036
 * Original: 0x004C6036 - 0x004C6069 (51 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C6036(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C6036: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x8668AC);
    PUSH32(esp, MEM32(esp + 0x10));
    esi = ecx;
    PUSH32(esp, 0x004C6048u); RECOMP_ABI_CALL(0x004C17F2u, sub_004C17F2); /* call 0x004C17F2 */

loc_004C6048: ;
    edi = esi + 0x18;
    ecx = edi;
    PUSH32(esp, 0x004C6052u); RECOMP_ABI_CALL(0x006080DCu, sub_006080DC); /* call 0x006080DC */

loc_004C6052: ;
    MEM32(edi) = 0x8668A0;
    MEM32(esi) = 0x86689C;
    MEM32(esi + 0x1C) = MEM32(esi + 0x1C) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C6069
 * Original: 0x004C6069 - 0x004C6071 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C6069(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C6069: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004CD6F2(); return; /* tail jmp 0x004CD6F2 */

}

/**
 * sub_004C6071
 * Original: 0x004C6071 - 0x004C60B8 (71 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C6071(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C6071: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x1C;
    ecx = MEM32(edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    ebx = esi + 0x18;
    MEM32(esi) = 0x86689C;
    MEM32(ebx) = 0x8668A0;
    if (CMP_EQ(_fa, _fb)) goto loc_004C609C; /* je: equal / zero */

loc_004C608E: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004C6093u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C6090u); } /* indirect call */
    }

loc_004C6093: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x004C609Cu); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C609C: ;
    ecx = MEM32(edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C60A7; /* je: equal / zero */

loc_004C60A2: ;
    PUSH32(esp, 0x004C60A7u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004C60A7: ;
    ecx = ebx;
    PUSH32(esp, 0x004C60AEu); RECOMP_ABI_CALL(0x006080E5u, sub_006080E5); /* call 0x006080E5 */

loc_004C60AE: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_004C1837(); return; /* tail jmp 0x004C1837 */

}

/**
 * sub_004C60B8
 * Original: 0x004C60B8 - 0x004C60DB (35 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C60B8(void)
{

loc_004C60B8: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esi + 4;
    PUSH32(esp, 0x004C60C5u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C60C5: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x8668C8);
    ecx = esi + -24;
    PUSH32(esp, 0x004C60D7u); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C60D7: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C60DB
 * Original: 0x004C60DB - 0x004C60FE (35 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C60DB(void)
{

loc_004C60DB: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esi + 4;
    PUSH32(esp, 0x004C60E8u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C60E8: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x8668E4);
    ecx = esi + -24;
    PUSH32(esp, 0x004C60FAu); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C60FA: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C616E
 * Original: 0x004C616E - 0x004C6187 (25 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C616E(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C616E: ;
    MEM32(ecx + 0x14) = MEM32(ecx + 0x14) & 0;
    _fa = (uint32_t)(MEM32(ecx + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x866900);
    _fb = (uint32_t)(0xFFFFFFE8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFE8u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x004C6184u); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C6184: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C6187
 * Original: 0x004C6187 - 0x004C61DA (83 bytes, 29 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C6187(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C6187: ;
    MEM32(ecx + 0x14) = MEM32(ecx + 0x14) & 0;
    _fa = (uint32_t)(MEM32(ecx + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    _fb = (uint32_t)(0xFFFFFFE8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFE8u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = 0x7B891F;
    PUSH32(esp, esi);
    if ((_fa == 0)) goto loc_004C61B9; /* je: equal / zero */

loc_004C619E: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_004C61B2; /* je: equal / zero */

loc_004C61A1: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_004C61AB; /* je: equal / zero */

loc_004C61A4: ;
    PUSH32(esp, 0x866978);
    goto loc_004C61BE;

loc_004C61AB: ;
    PUSH32(esp, 0x866954);
    goto loc_004C61BE;

loc_004C61B2: ;
    PUSH32(esp, 0x866934);
    goto loc_004C61BE;

loc_004C61B9: ;
    PUSH32(esp, 0x866914);

loc_004C61BE: ;
    PUSH32(esp, 0x004C61C3u); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C61C3: ;
    PUSH32(esp, 0x004C61C8u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004C61C8: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x80); PUSH32(esp, 0x004C61D6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C61D0u); } /* indirect call */
    }

loc_004C61D6: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C61DA
 * Original: 0x004C61DA - 0x004C620F (53 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C61DA(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C61DA: ;
    eax = MEM32(ecx + 0x24);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_004C620B; /* je: equal / zero */

loc_004C61E2: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_004C61F4; /* je: equal / zero */

loc_004C61E5: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_004C6207; /* je: equal / zero */

loc_004C61E8: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_004C6203; /* je: equal / zero */

loc_004C61EB: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_004C61FF; /* je: equal / zero */

loc_004C61EE: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_004C61FB; /* je: equal / zero */

loc_004C61F1: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_004C61F7; /* je: equal / zero */

loc_004C61F4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_004C61F7: ;
    PUSH32(esp, 0x14);
    POP32(esp, eax);
    esp += 4; return; /* ret */

loc_004C61FB: ;
    PUSH32(esp, 0xA);
    POP32(esp, eax);
    esp += 4; return; /* ret */

loc_004C61FF: ;
    PUSH32(esp, 7);
    POP32(esp, eax);
    esp += 4; return; /* ret */

loc_004C6203: ;
    PUSH32(esp, 5);
    POP32(esp, eax);
    esp += 4; return; /* ret */

loc_004C6207: ;
    PUSH32(esp, 3);
    POP32(esp, eax);
    esp += 4; return; /* ret */

loc_004C620B: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

}

/**
 * sub_004C620F
 * Original: 0x004C620F - 0x004C6227 (24 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C620F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C620F: ;
    PUSH32(esp, 0x004C6214u); RECOMP_ABI_CALL(0x004C1202u, sub_004C1202); /* call 0x004C1202 */

loc_004C6214: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C6223; /* je: equal / zero */

loc_004C6218: ;
    if (CMP_BE(_fa, _fb)) goto loc_004C6223; /* jbe: below or equal (unsigned <=) */

loc_004C621A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x13) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x13 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_004C6223; /* ja: above (unsigned >) */

loc_004C621F: ;
    eax = eax + eax * 4;
    esp += 4; return; /* ret */

loc_004C6223: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

}

/**
 * sub_004C6227
 * Original: 0x004C6227 - 0x004C629A (115 bytes, 45 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C6227(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C6227: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x8669A0);
    PUSH32(esp, 1);
    esi = ecx;
    PUSH32(esp, 0x004C6238u); RECOMP_ABI_CALL(0x004C17F2u, sub_004C17F2); /* call 0x004C17F2 */

loc_004C6238: ;
    edi = esi + 0x18;
    ecx = edi;
    PUSH32(esp, 0x004C6242u); RECOMP_ABI_CALL(0x006081EAu, sub_006081EA); /* call 0x006081EA */

loc_004C6242: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = 0x86699C;
    MEM32(edi) = 0x866990;
    MEM32(esi + 0x1C) = ebx;
    MEM32(esi + 0x20) = ebx;
    MEM32(esi + 0x24) = ebx;
    MEM32(esi + 0x28) = ebx;
    MEM32(esi + 0x2C) = ebx;
    PUSH32(esp, 0x004C6264u); RECOMP_ABI_CALL(0x004DC96Bu, sub_004DC96B); /* call 0x004DC96B */

loc_004C6264: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    edi = eax;
    eax = MEM32(edi);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(0x90E440));
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004C6275u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C6273u); } /* indirect call */
    }

loc_004C6275: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(0x90E470));
    MEM32(esi + 0x1C) = eax;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004C6287u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C6285u); } /* indirect call */
    }

loc_004C6287: ;
    MEM32(esi + 0x20) = eax;
    eax = MEM32(esi + 0x1C);
    MEM8(eax) = LO8(ebx);
    eax = MEM32(esi + 0x20);
    MEM8(eax) = LO8(ebx);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_004C629A
 * Original: 0x004C629A - 0x004C62A2 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C629A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C629A: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004CD70E(); return; /* tail jmp 0x004CD70E */

}

/**
 * sub_004C62A2
 * Original: 0x004C62A2 - 0x004C62F2 (80 bytes, 30 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C62A2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C62A2: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ebx = esi + 0x18;
    PUSH32(esp, edi);
    MEM32(esi) = 0x86699C;
    MEM32(ebx) = 0x866990;
    PUSH32(esp, 0x004C62BBu); RECOMP_ABI_CALL(0x004DC96Bu, sub_004DC96B); /* call 0x004DC96B */

loc_004C62BB: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi + 0x1C));
    edi = eax;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004C62C7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C62C4u); } /* indirect call */
    }

loc_004C62C7: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi + 0x20));
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004C62D1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C62CEu); } /* indirect call */
    }

loc_004C62D1: ;
    ecx = MEM32(esi + 0x2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C62E1; /* je: equal / zero */

loc_004C62D8: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004C62DDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C62DAu); } /* indirect call */
    }

loc_004C62DD: ;
    MEM32(esi + 0x2C) = MEM32(esi + 0x2C) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x2C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_004C62E1: ;
    ecx = ebx;
    PUSH32(esp, 0x004C62E8u); RECOMP_ABI_CALL(0x006081F3u, sub_006081F3); /* call 0x006081F3 */

loc_004C62E8: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_004C1837(); return; /* tail jmp 0x004C1837 */

}

/**
 * sub_004C62F2
 * Original: 0x004C62F2 - 0x004C6341 (79 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C62F2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C62F2: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x004C62FDu); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004C62FD: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x004C6304u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C6301u); } /* indirect call */
    }

loc_004C6304: ;
    edi = eax;
    eax = MEM32(esi + 0x20);
    SET_LO8(ebx, MEM8(eax));
    ebp = MEM32(edi);
    _cf = (int)((LO8(ebx)) != 0);
    SET_LO8(ebx, (uint32_t)(-(int32_t)LO8(ebx)));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    ecx = esi;
    ebx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ebx = ebx & eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = esi + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x004C6320u); RECOMP_ABI_CALL(0x004C620Fu, sub_004C620F); /* call 0x004C620F */

loc_004C6320: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x004C6328u); RECOMP_ABI_CALL(0x004C61DAu, sub_004C61DA); /* call 0x004C61DA */

loc_004C6328: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8669BC);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(esi + 0x1C));
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebp + 0x1C); PUSH32(esp, 0x004C6339u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C6336u); } /* indirect call */
    }

loc_004C6339: ;
    POP32(esp, edi);
    MEM32(esi + 0x2C) = eax;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_004C6341
 * Original: 0x004C6341 - 0x004C636E (45 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C6341(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C6341: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(0x90E440));
    esi = ecx;
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, MEM32(esi + 0x1C));
    PUSH32(esp, 0x004C6356u); RECOMP_ABI_CALL(0x004E367Fu, sub_004E367F); /* call 0x004E367F */

loc_004C6356: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x8669C4);
    ecx = esi;
    PUSH32(esp, 0x004C636Au); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C636A: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C636E
 * Original: 0x004C636E - 0x004C63A9 (59 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C636E(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C636E: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(0x90E470));
    esi = ecx;
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, MEM32(esi + 0x20));
    PUSH32(esp, 0x004C6383u); RECOMP_ABI_CALL(0x004E367Fu, sub_004E367F); /* call 0x004E367F */

loc_004C6383: ;
    ecx = MEM32(0x90E470);
    eax = MEM32(esi + 0x20);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x7B891F);
    MEM8(ecx + eax + -1) = 0;
    PUSH32(esp, 0x8669C4);
    ecx = esi;
    PUSH32(esp, 0x004C63A5u); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C63A5: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C63A9
 * Original: 0x004C63A9 - 0x004C63C2 (25 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C63A9(void)
{

loc_004C63A9: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x8669C4);
    MEM32(ecx + 0x24) = eax;
    PUSH32(esp, 0x004C63BFu); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C63BF: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C63C2
 * Original: 0x004C63C2 - 0x004C63DB (25 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C63C2(void)
{

loc_004C63C2: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x8669C4);
    MEM32(ecx + 0x28) = eax;
    PUSH32(esp, 0x004C63D8u); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C63D8: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C63DB
 * Original: 0x004C63DB - 0x004C63F2 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C63DB(void)
{

loc_004C63DB: ;
    PUSH32(esp, 0x004C63E0u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004C63E0: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x004C63E7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C63E4u); } /* indirect call */
    }

loc_004C63E7: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x004C63EEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C63EBu); } /* indirect call */
    }

loc_004C63EE: ;
    eax = MEM32(eax + 0x14);
    esp += 4; return; /* ret */

}

/**
 * sub_004C63F2
 * Original: 0x004C63F2 - 0x004C641B (41 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C63F2(void)
{

loc_004C63F2: ;
    PUSH32(esp, 0x004C63F7u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004C63F7: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x004C63FEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C63FBu); } /* indirect call */
    }

loc_004C63FE: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x004C6405u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C6402u); } /* indirect call */
    }

loc_004C6405: ;
    PUSH32(esp, MEM32(esp + 4));
    ecx = eax + 8;
    PUSH32(esp, 0x004C6411u); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004C6411: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004C6418u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C6415u); } /* indirect call */
    }

loc_004C6418: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C641B
 * Original: 0x004C641B - 0x004C6446 (43 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C641B(void)
{

loc_004C641B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x8669EC);
    PUSH32(esp, MEM32(esp + 0xC));
    esi = ecx;
    PUSH32(esp, 0x004C642Cu); RECOMP_ABI_CALL(0x004C17F2u, sub_004C17F2); /* call 0x004C17F2 */

loc_004C642C: ;
    MEM32(esi + 0x18) = 0x865D58;
    MEM32(esi) = 0x8669E4;
    MEM32(esi + 0x18) = 0x8669D4;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C6446
 * Original: 0x004C6446 - 0x004C6458 (18 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C6446(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C6446: ;
    MEM32(ecx) = 0x8669E4;
    MEM32(ecx + 0x18) = 0x8669D4;
    g_seh_ebp = ebp; sub_004C1837(); return; /* tail jmp 0x004C1837 */

}

/**
 * sub_004C6458
 * Original: 0x004C6458 - 0x004C646D (21 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C6458(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C6458: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x8669C4);
    _fb = (uint32_t)(0xFFFFFFE8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFE8u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x004C646Au); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C646A: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C646D
 * Original: 0x004C646D - 0x004C64A9 (60 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C646D(void)
{

loc_004C646D: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x004C6476u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004C6476: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x004C647Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C647Au); } /* indirect call */
    }

loc_004C647D: ;
    edx = MEM32(eax);
    edi = MEM32(esi + 0x20);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004C6487u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C6484u); } /* indirect call */
    }

loc_004C6487: ;
    PUSH32(esp, edi);
    ecx = eax + 8;
    PUSH32(esp, 0x004C6490u); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004C6490: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004C6499u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C6496u); } /* indirect call */
    }

loc_004C6499: ;
    PUSH32(esp, eax);
    ecx = esi + 0x24;
    PUSH32(esp, 0x004C64A2u); RECOMP_ABI_CALL(0x004C2C72u, sub_004C2C72); /* call 0x004C2C72 */

loc_004C64A2: ;
    POP32(esp, edi);
    MEM8(esi + 0x28) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004C64A9
 * Original: 0x004C64A9 - 0x004C64BC (19 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C64A9(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C64A9: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM8(esi + 0x28)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x28), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C64B7; /* je: equal / zero */

loc_004C64B2: ;
    PUSH32(esp, 0x004C64B7u); RECOMP_ABI_CALL(0x004C646Du, sub_004C646D); /* call 0x004C646D */

loc_004C64B7: ;
    eax = MEM32(esi + 0x24);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004C64BC
 * Original: 0x004C64BC - 0x004C6513 (87 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C64BC(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C64BC: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x866A2C);
    PUSH32(esp, MEM32(esp + 0x14));
    esi = ecx;
    PUSH32(esp, 0x004C64CFu); RECOMP_ABI_CALL(0x004C17F2u, sub_004C17F2); /* call 0x004C17F2 */

loc_004C64CF: ;
    edi = esi + 0x18;
    ecx = edi;
    PUSH32(esp, 0x004C64D9u); RECOMP_ABI_CALL(0x00608244u, sub_00608244); /* call 0x00608244 */

loc_004C64D9: ;
    ebx = esi + 0x1C;
    ecx = ebx;
    PUSH32(esp, 0x004C64E3u); RECOMP_ABI_CALL(0x00608217u, sub_00608217); /* call 0x00608217 */

loc_004C64E3: ;
    MEM32(esi) = 0x866A28;
    MEM32(edi) = 0x866A14;
    MEM32(ebx) = 0x866A0C;
    MEM32(esi + 0x20) = 1;
    MEM32(esi + 0x24) = MEM32(esi + 0x24) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = esi;
    MEM8(esi + 0x28) = 1;
    PUSH32(esp, 0x004C650Bu); RECOMP_ABI_CALL(0x004C646Du, sub_004C646D); /* call 0x004C646D */

loc_004C650B: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C6513
 * Original: 0x004C6513 - 0x004C651B (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C6513(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C6513: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004CD746(); return; /* tail jmp 0x004CD746 */

}

/**
 * sub_004C651B
 * Original: 0x004C651B - 0x004C6523 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C651B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C651B: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004CD746(); return; /* tail jmp 0x004CD746 */

}

/**
 * sub_004C6523
 * Original: 0x004C6523 - 0x004C65A4 (129 bytes, 47 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004C6523(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C6523: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x18;
    ebx = esi + 0x1C;
    MEM32(esi) = 0x866A28;
    MEM32(edi) = 0x866A14;
    MEM32(ebx) = 0x866A0C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C6549u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004C6549: ;
    edx = MEM32(eax);
    ecx = eax;
    MEM32(ebp + -4) = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x004C6553u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C6550u); } /* indirect call */
    }

loc_004C6553: ;
    ecx = ebp + -4;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C6561u); RECOMP_ABI_CALL(0x004DD8B2u, sub_004DD8B2); /* call 0x004DD8B2 */

loc_004C6561: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C6566u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004C6566: ;
    edx = MEM32(eax);
    ecx = eax;
    MEM32(ebp + -4) = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x004C6570u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C656Du); } /* indirect call */
    }

loc_004C6570: ;
    ecx = ebp + -4;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C657Eu); RECOMP_ABI_CALL(0x004DD8B2u, sub_004DD8B2); /* call 0x004DD8B2 */

loc_004C657E: ;
    ecx = MEM32(esi + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C658A; /* je: equal / zero */

loc_004C6585: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C658Au); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004C658A: ;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C6591u); RECOMP_ABI_CALL(0x00608220u, sub_00608220); /* call 0x00608220 */

loc_004C6591: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C6598u); RECOMP_ABI_CALL(0x0060824Du, sub_0060824D); /* call 0x0060824D */

loc_004C6598: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C659Fu); RECOMP_ABI_CALL(0x004C1837u, sub_004C1837); /* call 0x004C1837 */

loc_004C659F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004C65A4
 * Original: 0x004C65A4 - 0x004C660F (107 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004C65A4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004C65A4: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C65B0u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004C65B0: ;
    ecx = esi;
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    edx = esi + 0x18;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = MEM32(eax);
    MEM32(ebp + -4) = ecx;
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x004C65C5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C65C2u); } /* indirect call */
    }

loc_004C65C5: ;
    ecx = ebp + -4;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C65D3u); RECOMP_ABI_CALL(0x004DD750u, sub_004DD750); /* call 0x004DD750 */

loc_004C65D3: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C65D8u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004C65D8: ;
    ecx = esi;
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    edx = esi + 0x1C;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = MEM32(eax);
    MEM32(ebp + -4) = ecx;
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x004C65EDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C65EAu); } /* indirect call */
    }

loc_004C65ED: ;
    ecx = ebp + -4;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C65FBu); RECOMP_ABI_CALL(0x004DD750u, sub_004DD750); /* call 0x004DD750 */

loc_004C65FB: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x8669C4);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C660Cu); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C660C: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004C660F
 * Original: 0x004C660F - 0x004C6623 (20 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C660F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C660F: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x20) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C6620; /* je: equal / zero */

loc_004C6618: ;
    MEM32(ecx + 0x20) = eax;
    PUSH32(esp, 0x004C6620u); RECOMP_ABI_CALL(0x004C646Du, sub_004C646D); /* call 0x004C646D */

loc_004C6620: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C6623
 * Original: 0x004C6623 - 0x004C662C (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C6623(void)
{

loc_004C6623: ;
    PUSH32(esp, 0x004C6628u); RECOMP_ABI_CALL(0x004C64A9u, sub_004C64A9); /* call 0x004C64A9 */

loc_004C6628: ;
    eax = MEM32(eax + 0x14);
    esp += 4; return; /* ret */

}

/**
 * sub_004C662C
 * Original: 0x004C662C - 0x004C665D (49 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C662C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C662C: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004C6634u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004C6634: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x004C663Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C6638u); } /* indirect call */
    }

loc_004C663B: ;
    edx = MEM32(eax);
    esi = MEM32(esi + 0x20);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004C6645u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C6642u); } /* indirect call */
    }

loc_004C6645: ;
    PUSH32(esp, esi);
    ecx = eax + 8;
    PUSH32(esp, 0x004C664Eu); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004C664E: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x004C6655u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C6652u); } /* indirect call */
    }

loc_004C6655: ;
    edx = MEM32(eax);
    ecx = eax;
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x14)); return; /* indirect tail jmp */

}

/**
 * sub_004C665D
 * Original: 0x004C665D - 0x004C6682 (37 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C665D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C665D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004C6663u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004C6663: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x004C666Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C6667u); } /* indirect call */
    }

loc_004C666A: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x004C6671u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C666Eu); } /* indirect call */
    }

loc_004C6671: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C667E; /* je: equal / zero */

loc_004C6677: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004C667Du); RECOMP_ABI_CALL(0x004C5DAFu, sub_004C5DAF); /* call 0x004C5DAF */

loc_004C667D: ;
    POP32(esp, ecx);

loc_004C667E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004C6682
 * Original: 0x004C6682 - 0x004C668F (13 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C6682(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C6682: ;
    PUSH32(esp, 0x004C6687u); RECOMP_ABI_CALL(0x004C64A9u, sub_004C64A9); /* call 0x004C64A9 */

loc_004C6687: ;
    ecx = eax + 8;
    g_seh_ebp = ebp; sub_004DB8CE(); return; /* tail jmp 0x004DB8CE */

}

/**
 * sub_004C668F
 * Original: 0x004C668F - 0x004C66AE (31 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C668F(void)
{

loc_004C668F: ;
    PUSH32(esp, 0x004C6694u); RECOMP_ABI_CALL(0x004C64A9u, sub_004C64A9); /* call 0x004C64A9 */

loc_004C6694: ;
    PUSH32(esp, MEM32(esp + 4));
    ecx = eax + 8;
    PUSH32(esp, 0x004C66A0u); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004C66A0: ;
    PUSH32(esp, eax);
    ecx = 0x90E444;
    PUSH32(esp, 0x004C66ABu); RECOMP_ABI_CALL(0x004AFE27u, sub_004AFE27); /* call 0x004AFE27 */

loc_004C66AB: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C66AE
 * Original: 0x004C66AE - 0x004C679F (241 bytes, 99 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004C66AE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C66AE: ;
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
    PUSH32(esp, 0x004C66BEu); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004C66BE: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x004C66C5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C66C2u); } /* indirect call */
    }

loc_004C66C5: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 8));
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004C66CFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C66CCu); } /* indirect call */
    }

loc_004C66CF: ;
    ecx = esi;
    MEM32(ebp + -4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C66D9u); RECOMP_ABI_CALL(0x004C64A9u, sub_004C64A9); /* call 0x004C64A9 */

loc_004C66D9: ;
    esi = MEM32(eax + 0x14);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_004C670C; /* jle: less or equal (signed <=) */

loc_004C66E2: ;
    ebx = eax + 8;

loc_004C66E5: ;
    PUSH32(esp, edi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C66EDu); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004C66ED: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004C66F4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C66F1u); } /* indirect call */
    }

loc_004C66F4: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C66FDu); RECOMP_ABI_CALL(0x004ABAD7u, sub_004ABAD7); /* call 0x004ABAD7 */

loc_004C66FD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_004C678B; /* jne: not equal / not zero */

loc_004C6707: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004C66E5; /* jl: less (signed <) */

loc_004C670C: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C6711u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004C6711: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x004C6718u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C6715u); } /* indirect call */
    }

loc_004C6718: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004C671Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C671Cu); } /* indirect call */
    }

loc_004C671F: ;
    eax = MEM32(eax + 0x14);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -12) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_004C6798; /* jle: less or equal (signed <=) */

loc_004C672B: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C6730u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004C6730: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x004C6737u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C6734u); } /* indirect call */
    }

loc_004C6737: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004C673Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C673Bu); } /* indirect call */
    }

loc_004C673E: ;
    PUSH32(esp, ebx);
    ecx = eax + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C6747u); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004C6747: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004C6750u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C674Du); } /* indirect call */
    }

loc_004C6750: ;
    esi = MEM32(eax + 0x14);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_004C6783; /* jle: less or equal (signed <=) */

loc_004C6759: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -8) = eax;

loc_004C675F: ;
    ecx = MEM32(ebp + -8);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C6768u); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004C6768: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004C676Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C676Cu); } /* indirect call */
    }

loc_004C676F: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C6778u); RECOMP_ABI_CALL(0x004ABAD7u, sub_004ABAD7); /* call 0x004ABAD7 */

loc_004C6778: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_004C678B; /* jne: not equal / not zero */

loc_004C677E: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004C675F; /* jl: less (signed <) */

loc_004C6783: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ebp + -12) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004C672B; /* jl: less (signed <) */

loc_004C6789: ;
    goto loc_004C6798;

loc_004C678B: ;
    PUSH32(esp, MEM32(ebp + -4));
    ecx = 0x90E444;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C6798u); RECOMP_ABI_CALL(0x004AFE27u, sub_004AFE27); /* call 0x004AFE27 */

loc_004C6798: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C679F
 * Original: 0x004C679F - 0x004C67EF (80 bytes, 28 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C679F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C679F: ;
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0x004C67A7u); RECOMP_ABI_CALL(0x004C64A9u, sub_004C64A9); /* call 0x004C64A9 */

loc_004C67A7: ;
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x14), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C67EB; /* je: equal / zero */

loc_004C67AD: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0xC));
    esi = eax + 8;
    ecx = esi;
    PUSH32(esp, 0x004C67BCu); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004C67BC: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x004C67C3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C67C0u); } /* indirect call */
    }

loc_004C67C3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004C67EA; /* jne: not equal / not zero */

loc_004C67C7: ;
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = esi;
    PUSH32(esp, 0x004C67D2u); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004C67D2: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x004C67D9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C67D6u); } /* indirect call */
    }

loc_004C67D9: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x8669C4);
    ecx = edi;
    PUSH32(esp, 0x004C67EAu); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C67EA: ;
    POP32(esp, esi);

loc_004C67EB: ;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C67EF
 * Original: 0x004C67EF - 0x004C6834 (69 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C67EF(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C67EF: ;
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0x004C67F7u); RECOMP_ABI_CALL(0x004C64A9u, sub_004C64A9); /* call 0x004C64A9 */

loc_004C67F7: ;
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x14), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C6830; /* je: equal / zero */

loc_004C67FD: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = eax + 8;
    PUSH32(esp, 0x004C680Au); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004C680A: ;
    esi = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x004C6813u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C6810u); } /* indirect call */
    }

loc_004C6813: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C682F; /* je: equal / zero */

loc_004C6817: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x44); PUSH32(esp, 0x004C681Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C681Bu); } /* indirect call */
    }

loc_004C681E: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x8669C4);
    ecx = edi;
    PUSH32(esp, 0x004C682Fu); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C682F: ;
    POP32(esp, esi);

loc_004C6830: ;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C6834
 * Original: 0x004C6834 - 0x004C698C (344 bytes, 139 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C6834(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C6834: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = 0x8640E0;
    PUSH32(esp, 0x004C6846u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004C6846: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x004C684Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C684Au); } /* indirect call */
    }

loc_004C684D: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x8640CC);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x004C6859u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C6856u); } /* indirect call */
    }

loc_004C6859: ;
    edx = MEM32(eax);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004C6863u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C6860u); } /* indirect call */
    }

loc_004C6863: ;
    edi = eax;
    ebx = MEM32(edi + 0x14);
    PUSH32(esp, 0x004C686Du); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004C686D: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x004C6874u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C6871u); } /* indirect call */
    }

loc_004C6874: ;
    esi = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x48); PUSH32(esp, 0x004C687Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C687Au); } /* indirect call */
    }

loc_004C687D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C68B2; /* je: equal / zero */

loc_004C6881: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004C693C; /* jbe: below or equal (unsigned <=) */

loc_004C6889: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004C688C: ;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0x004C6894u); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004C6894: ;
    esi = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xF4); PUSH32(esp, 0x004C68A0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C689Au); } /* indirect call */
    }

loc_004C68A0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004C6929; /* jne: not equal / not zero */

loc_004C68A8: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004C688C; /* jb: below (unsigned <) */

loc_004C68AD: ;
    goto loc_004C693C;

loc_004C68B2: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x4C); PUSH32(esp, 0x004C68B9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C68B6u); } /* indirect call */
    }

loc_004C68B9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C68E3; /* je: equal / zero */

loc_004C68BD: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004C693C; /* jbe: below or equal (unsigned <=) */

loc_004C68C1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004C68C4: ;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0x004C68CCu); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004C68CC: ;
    esi = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xFC); PUSH32(esp, 0x004C68D8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C68D2u); } /* indirect call */
    }

loc_004C68D8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004C6929; /* jne: not equal / not zero */

loc_004C68DC: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004C68C4; /* jb: below (unsigned <) */

loc_004C68E1: ;
    goto loc_004C693C;

loc_004C68E3: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x004C68EAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C68E7u); } /* indirect call */
    }

loc_004C68EA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C68F8; /* je: equal / zero */

loc_004C68EE: ;
    MEM32(esp + 0x10) = 0x864110;
    goto loc_004C693C;

loc_004C68F8: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x40); PUSH32(esp, 0x004C68FFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C68FCu); } /* indirect call */
    }

loc_004C68FF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C693C; /* je: equal / zero */

loc_004C6903: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004C693C; /* jbe: below or equal (unsigned <=) */

loc_004C6907: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004C690A: ;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0x004C6912u); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004C6912: ;
    esi = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xE8); PUSH32(esp, 0x004C691Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C6918u); } /* indirect call */
    }

loc_004C691E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004C6929; /* jne: not equal / not zero */

loc_004C6922: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004C690A; /* jb: below (unsigned <) */

loc_004C6927: ;
    goto loc_004C693C;

loc_004C6929: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x4C); PUSH32(esp, 0x004C6930u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C692Du); } /* indirect call */
    }

loc_004C6930: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004C693C; /* jne: not equal / not zero */

loc_004C6934: ;
    MEM32(esp + 0x10) = 0x8640F8;

loc_004C693C: ;
    PUSH32(esp, 0x004C6941u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004C6941: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x004C6948u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C6945u); } /* indirect call */
    }

loc_004C6948: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004C694Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C694Cu); } /* indirect call */
    }

loc_004C694F: ;
    esi = MEM32(eax + 0x14);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004C6984; /* jbe: below or equal (unsigned <=) */

loc_004C695A: ;
    ebx = eax + 8;

loc_004C695D: ;
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x004C6965u); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004C6965: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x004C696Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C6969u); } /* indirect call */
    }

loc_004C696C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 0x10));
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004C6977u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C6974u); } /* indirect call */
    }

loc_004C6977: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C6982; /* je: equal / zero */

loc_004C697B: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004C695D; /* jb: below (unsigned <) */

loc_004C6980: ;
    goto loc_004C6984;

loc_004C6982: ;
    ebp = edi;

loc_004C6984: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004C698C
 * Original: 0x004C698C - 0x004C699F (19 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C698C(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C698C: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x8669C4);
    _fb = (uint32_t)(0xFFFFFFE8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFE8u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x004C699Eu); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C699E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004C699F
 * Original: 0x004C699F - 0x004C69C0 (33 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C699F(void)
{

loc_004C699F: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esi + 0x14;
    PUSH32(esp, 0x004C69ACu); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C69AC: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x866A48);
    ecx = esi + -24;
    PUSH32(esp, 0x004C69BEu); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C69BE: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004C69C0
 * Original: 0x004C69C0 - 0x004C69E3 (35 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C69C0(void)
{

loc_004C69C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esi + 0x14;
    PUSH32(esp, 0x004C69CDu); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C69CD: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x866A5C);
    ecx = esi + -24;
    PUSH32(esp, 0x004C69DFu); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C69DF: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C69E3
 * Original: 0x004C69E3 - 0x004C6A5B (120 bytes, 41 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C69E3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C69E3: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x866A80);
    PUSH32(esp, MEM32(esp + 0x18));
    esi = ecx;
    PUSH32(esp, 0x004C69F7u); RECOMP_ABI_CALL(0x004C17F2u, sub_004C17F2); /* call 0x004C17F2 */

loc_004C69F7: ;
    edi = esi + 0x18;
    ecx = edi;
    PUSH32(esp, 0x004C6A01u); RECOMP_ABI_CALL(0x00608271u, sub_00608271); /* call 0x00608271 */

loc_004C6A01: ;
    MEM32(edi) = 0x866A74;
    MEM32(esi) = 0x866A70;
    PUSH32(esp, MEM32(0x90E438));
    edi = esi + 0x1C;
    ecx = edi;
    PUSH32(esp, 0x004C6A1Du); RECOMP_ABI_CALL(0x004ABC3Eu, sub_004ABC3E); /* call 0x004ABC3E */

loc_004C6A1D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x20) = eax;
    ebx = esi + 0x24;
    ebp = 0x90E438;
    MEM32(ebx) = eax;
    PUSH32(esp, eax);
    ecx = ebp;
    MEM32(esi + 0x2C) = eax;
    PUSH32(esp, 0x004C6A37u); RECOMP_ABI_CALL(0x004AFE27u, sub_004AFE27); /* call 0x004AFE27 */

loc_004C6A37: ;
    ecx = MEM32(edi);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xE4); PUSH32(esp, 0x004C6A41u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C6A3Bu); } /* indirect call */
    }

loc_004C6A41: ;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x004C6A49u); RECOMP_ABI_CALL(0x004C2A66u, sub_004C2A66); /* call 0x004C2A66 */

loc_004C6A49: ;
    PUSH32(esp, 0);
    ecx = ebp;
    PUSH32(esp, 0x004C6A52u); RECOMP_ABI_CALL(0x004AFE27u, sub_004AFE27); /* call 0x004AFE27 */

loc_004C6A52: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C6A5B
 * Original: 0x004C6A5B - 0x004C6A63 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C6A5B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C6A5B: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004CD7B9(); return; /* tail jmp 0x004CD7B9 */

}

/**
 * sub_004C6A63
 * Original: 0x004C6A63 - 0x004C6ACE (107 bytes, 39 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C6A63(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C6A63: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x2C;
    ecx = MEM32(edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    ebx = esi + 0x18;
    MEM32(esi) = 0x866A70;
    MEM32(ebx) = 0x866A74;
    if (CMP_EQ(_fa, _fb)) goto loc_004C6A8E; /* je: equal / zero */

loc_004C6A80: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004C6A85u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C6A82u); } /* indirect call */
    }

loc_004C6A85: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x004C6A8Eu); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C6A8E: ;
    ecx = MEM32(edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C6A99; /* je: equal / zero */

loc_004C6A94: ;
    PUSH32(esp, 0x004C6A99u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004C6A99: ;
    ecx = MEM32(esi + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C6AA5; /* je: equal / zero */

loc_004C6AA0: ;
    PUSH32(esp, 0x004C6AA5u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004C6AA5: ;
    ecx = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C6AB1; /* je: equal / zero */

loc_004C6AAC: ;
    PUSH32(esp, 0x004C6AB1u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004C6AB1: ;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C6ABD; /* je: equal / zero */

loc_004C6AB8: ;
    PUSH32(esp, 0x004C6ABDu); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004C6ABD: ;
    ecx = ebx;
    PUSH32(esp, 0x004C6AC4u); RECOMP_ABI_CALL(0x0060827Au, sub_0060827A); /* call 0x0060827A */

loc_004C6AC4: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_004C1837(); return; /* tail jmp 0x004C1837 */

}

/**
 * sub_004C6ACE
 * Original: 0x004C6ACE - 0x004C6AD5 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C6ACE(void)
{

loc_004C6ACE: ;
    eax = MEM32(ecx + 0x24);
    eax = MEM32(eax + 0x14);
    esp += 4; return; /* ret */

}

/**
 * sub_004C6AD5
 * Original: 0x004C6AD5 - 0x004C6B0A (53 bytes, 23 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C6AD5(void)
{

loc_004C6AD5: ;
    eax = MEM32(ecx + 0x24);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = eax + 8;
    PUSH32(esp, 0x004C6AE7u); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004C6AE7: ;
    ecx = MEM32(0x90E420);
    esi = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004C6AF3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C6AF1u); } /* indirect call */
    }

loc_004C6AF3: ;
    edi = eax;
    eax = MEM32(esi);
    ebx = MEM32(edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x004C6AFEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C6AFBu); } /* indirect call */
    }

loc_004C6AFE: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebx + 8); PUSH32(esp, 0x004C6B04u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C6B01u); } /* indirect call */
    }

loc_004C6B04: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C6B0A
 * Original: 0x004C6B0A - 0x004C6B3F (53 bytes, 23 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C6B0A(void)
{

loc_004C6B0A: ;
    eax = MEM32(ecx + 0x24);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = eax + 8;
    PUSH32(esp, 0x004C6B1Cu); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004C6B1C: ;
    ecx = MEM32(0x90E420);
    esi = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004C6B28u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C6B26u); } /* indirect call */
    }

loc_004C6B28: ;
    edi = eax;
    eax = MEM32(esi);
    ebx = MEM32(edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x004C6B33u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C6B30u); } /* indirect call */
    }

loc_004C6B33: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebx + 8); PUSH32(esp, 0x004C6B39u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C6B36u); } /* indirect call */
    }

loc_004C6B39: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C6B3F
 * Original: 0x004C6B3F - 0x004C6B7B (60 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C6B3F(void)
{

loc_004C6B3F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(esi + 0x24);
    PUSH32(esp, edi);
    MEM32(esi + 0x28) = ecx;
    PUSH32(esp, ecx);
    ecx = eax + 8;
    PUSH32(esp, 0x004C6B57u); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004C6B57: ;
    edi = MEM32(esi + 0x1C);
    edx = MEM32(eax);
    ebx = MEM32(edi);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x004C6B63u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C6B60u); } /* indirect call */
    }

loc_004C6B63: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebx + 0xE0); PUSH32(esp, 0x004C6B6Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C6B66u); } /* indirect call */
    }

loc_004C6B6C: ;
    PUSH32(esp, eax);
    ecx = esi + 0x20;
    PUSH32(esp, 0x004C6B75u); RECOMP_ABI_CALL(0x004C2A66u, sub_004C2A66); /* call 0x004C2A66 */

loc_004C6B75: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C6B7B
 * Original: 0x004C6B7B - 0x004C6B82 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C6B7B(void)
{

loc_004C6B7B: ;
    eax = MEM32(ecx + 0x20);
    eax = MEM32(eax + 0x14);
    esp += 4; return; /* ret */

}

/**
 * sub_004C6B82
 * Original: 0x004C6B82 - 0x004C6BB7 (53 bytes, 23 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C6B82(void)
{

loc_004C6B82: ;
    eax = MEM32(ecx + 0x20);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = eax + 8;
    PUSH32(esp, 0x004C6B94u); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004C6B94: ;
    ecx = MEM32(0x90E420);
    esi = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004C6BA0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C6B9Eu); } /* indirect call */
    }

loc_004C6BA0: ;
    edi = eax;
    eax = MEM32(esi);
    ebx = MEM32(edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x004C6BABu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C6BA8u); } /* indirect call */
    }

loc_004C6BAB: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebx + 8); PUSH32(esp, 0x004C6BB1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C6BAEu); } /* indirect call */
    }

loc_004C6BB1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C6BB7
 * Original: 0x004C6BB7 - 0x004C6BEC (53 bytes, 23 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C6BB7(void)
{

loc_004C6BB7: ;
    eax = MEM32(ecx + 0x20);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = eax + 8;
    PUSH32(esp, 0x004C6BC9u); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004C6BC9: ;
    ecx = MEM32(0x90E420);
    esi = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004C6BD5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C6BD3u); } /* indirect call */
    }

loc_004C6BD5: ;
    edi = eax;
    eax = MEM32(esi);
    ebx = MEM32(edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x004C6BE0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C6BDDu); } /* indirect call */
    }

loc_004C6BE0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebx + 8); PUSH32(esp, 0x004C6BE6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C6BE3u); } /* indirect call */
    }

loc_004C6BE6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C6BEC
 * Original: 0x004C6BEC - 0x004C6C21 (53 bytes, 20 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C6BEC(void)
{

loc_004C6BEC: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x20);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = eax + 8;
    PUSH32(esp, 0x004C6BFFu); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004C6BFF: ;
    ecx = MEM32(esi + 0x1C);
    edx = MEM32(ecx);
    edi = esi + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xD4); PUSH32(esp, 0x004C6C13u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C6C0Du); } /* indirect call */
    }

loc_004C6C13: ;
    PUSH32(esp, eax);
    ecx = esi + 0x2C;
    PUSH32(esp, 0x004C6C1Cu); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C6C1C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C6C21
 * Original: 0x004C6C21 - 0x004C6C3E (29 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C6C21(void)
{

loc_004C6C21: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x866AA0);
    PUSH32(esp, MEM32(esp + 0xC));
    esi = ecx;
    PUSH32(esp, 0x004C6C32u); RECOMP_ABI_CALL(0x004C17F2u, sub_004C17F2); /* call 0x004C17F2 */

loc_004C6C32: ;
    MEM32(esi) = 0x866A9C;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C6C49
 * Original: 0x004C6C49 - 0x004C6C85 (60 bytes, 23 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C6C49(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C6C49: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004C6C54u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C6C52u); } /* indirect call */
    }

loc_004C6C54: ;
    ecx = MEM32(esi + 0x1C);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x004C6C5Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C6C5Cu); } /* indirect call */
    }

loc_004C6C5F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C6C81; /* je: equal / zero */

loc_004C6C63: ;
    eax = MEM32(esp + 0xC);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_004C6C6F; /* je: equal / zero */

loc_004C6C6A: ;
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_004C6C81; /* jne: not equal / not zero */

loc_004C6C6F: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x8667B4);
    ecx = esi + -24;
    PUSH32(esp, 0x004C6C81u); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C6C81: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C6C85
 * Original: 0x004C6C85 - 0x004C6CA6 (33 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C6C85(void)
{

loc_004C6C85: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esi + 0x1C;
    PUSH32(esp, 0x004C6C92u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C6C92: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x8666C0);
    ecx = esi + -28;
    PUSH32(esp, 0x004C6CA4u); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C6CA4: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004C6CA6
 * Original: 0x004C6CA6 - 0x004C6CC9 (35 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C6CA6(void)
{

loc_004C6CA6: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esi + 0x1C;
    PUSH32(esp, 0x004C6CB3u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C6CB3: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x8666DC);
    ecx = esi + -28;
    PUSH32(esp, 0x004C6CC5u); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C6CC5: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C6CC9
 * Original: 0x004C6CC9 - 0x004C6CEA (33 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C6CC9(void)
{

loc_004C6CC9: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esi + 0x18;
    PUSH32(esp, 0x004C6CD6u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C6CD6: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x8666F8);
    ecx = esi + -32;
    PUSH32(esp, 0x004C6CE8u); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C6CE8: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004C6CEA
 * Original: 0x004C6CEA - 0x004C6D1B (49 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C6CEA(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C6CEA: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esi + 0x18;
    PUSH32(esp, 0x004C6CF7u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C6CF7: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), 3 (32-bit) */
    ecx = esi + -32;
    PUSH32(esp, 0x7B891F);
    if (CMP_EQ(_fa, _fb)) goto loc_004C6D0D; /* je: equal / zero */

loc_004C6D06: ;
    PUSH32(esp, 0x86672C);
    goto loc_004C6D12;

loc_004C6D0D: ;
    PUSH32(esp, 0x866714);

loc_004C6D12: ;
    PUSH32(esp, 0x004C6D17u); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C6D17: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C6D1B
 * Original: 0x004C6D1B - 0x004C6D3C (33 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C6D1B(void)
{

loc_004C6D1B: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esi + 0x14;
    PUSH32(esp, 0x004C6D28u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C6D28: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x866748);
    ecx = esi + -36;
    PUSH32(esp, 0x004C6D3Au); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C6D3A: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004C6D3C
 * Original: 0x004C6D3C - 0x004C6D5F (35 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C6D3C(void)
{

loc_004C6D3C: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esi + 0x14;
    PUSH32(esp, 0x004C6D49u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C6D49: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x866768);
    ecx = esi + -36;
    PUSH32(esp, 0x004C6D5Bu); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C6D5B: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C6D5F
 * Original: 0x004C6D5F - 0x004C6E0B (172 bytes, 67 insns)
 * Category: game_network
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C6D5F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C6D5F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = ecx;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    ecx = edi + 0x18;
    PUSH32(esp, 0x004C6D6Eu); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C6D6E: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x14), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_004C6DF4; /* jbe: below or equal (unsigned <=) */

loc_004C6D77: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    ecx = eax + 8;
    esi = edi + 0x1C;
    PUSH32(esp, 0x004C6D85u); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004C6D85: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x004C6D8Du); RECOMP_ABI_CALL(0x004C2A36u, sub_004C2A36); /* call 0x004C2A36 */

loc_004C6D8D: ;
    ecx = MEM32(0x90E424);
    eax = MEM32(ecx);
    ebx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004C6D9Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C6D97u); } /* indirect call */
    }

loc_004C6D9A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(0x8631F4));
    edx = MEM32(ebx);
    ebp = eax;
    eax = MEM32(ebp);
    ecx = ebx;
    MEM32(esp + 0x1C) = eax;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x004C6DB0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C6DADu); } /* indirect call */
    }

loc_004C6DB0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x20);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004C6DBAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C6DB7u); } /* indirect call */
    }

loc_004C6DBA: ;
    ecx = MEM32(esi);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x30); PUSH32(esp, 0x004C6DC1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C6DBEu); } /* indirect call */
    }

loc_004C6DC1: ;
    ebx = eax;
    PUSH32(esp, 0x004C6DC8u); RECOMP_ABI_CALL(0x004DC981u, sub_004DC981); /* call 0x004DC981 */

loc_004C6DC8: ;
    esi = MEM32(esi);
    ebp = MEM32(esi);
    ecx = edi + -40;
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    edx = edi + 4;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004C6DE0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C6DDDu); } /* indirect call */
    }

loc_004C6DE0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(ebp + 0x3C); PUSH32(esp, 0x004C6DE7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C6DE4u); } /* indirect call */
    }

loc_004C6DE7: ;
    PUSH32(esp, eax);
    ecx = edi + 0x14;
    PUSH32(esp, 0x004C6DF0u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C6DF0: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    goto loc_004C6E06;

loc_004C6DF4: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x866AB8);
    ecx = edi + -40;
    PUSH32(esp, 0x004C6E06u); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C6E06: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C6E0B
 * Original: 0x004C6E0B - 0x004C6E2E (35 bytes, 11 insns)
 * Category: game_network
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C6E0B(void)
{

loc_004C6E0B: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esi + 0x18;
    PUSH32(esp, 0x004C6E18u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C6E18: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x866AB8);
    ecx = esi + -40;
    PUSH32(esp, 0x004C6E2Au); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C6E2A: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C6E2E
 * Original: 0x004C6E2E - 0x004C6E4F (33 bytes, 11 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C6E2E(void)
{

loc_004C6E2E: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esi + 0x10;
    PUSH32(esp, 0x004C6E3Bu); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C6E3B: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x866AD4);
    ecx = esi + -44;
    PUSH32(esp, 0x004C6E4Du); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C6E4D: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004C6E4F
 * Original: 0x004C6E4F - 0x004C6E72 (35 bytes, 11 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C6E4F(void)
{

loc_004C6E4F: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esi + 0x10;
    PUSH32(esp, 0x004C6E5Cu); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C6E5C: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x866AB8);
    ecx = esi + -44;
    PUSH32(esp, 0x004C6E6Eu); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C6E6E: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C6E72
 * Original: 0x004C6E72 - 0x004C6E93 (33 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C6E72(void)
{

loc_004C6E72: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esi + 8;
    PUSH32(esp, 0x004C6E7Fu); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C6E7F: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x8666F8);
    ecx = esi + -48;
    PUSH32(esp, 0x004C6E91u); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C6E91: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004C6E93
 * Original: 0x004C6E93 - 0x004C6EC4 (49 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C6E93(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C6E93: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esi + 8;
    PUSH32(esp, 0x004C6EA0u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C6EA0: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), 3 (32-bit) */
    ecx = esi + -48;
    PUSH32(esp, 0x7B891F);
    if (CMP_NE(_fa, _fb)) goto loc_004C6EB6; /* jne: not equal / not zero */

loc_004C6EAF: ;
    PUSH32(esp, 0x866714);
    goto loc_004C6EBB;

loc_004C6EB6: ;
    PUSH32(esp, 0x86672C);

loc_004C6EBB: ;
    PUSH32(esp, 0x004C6EC0u); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C6EC0: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C6EC4
 * Original: 0x004C6EC4 - 0x004C6F97 (211 bytes, 60 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004C6EC4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C6EC4: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x866B48);
    PUSH32(esp, MEM32(ebp + 8));
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C6ED9u); RECOMP_ABI_CALL(0x004C17F2u, sub_004C17F2); /* call 0x004C17F2 */

loc_004C6ED9: ;
    edi = esi + 0x18;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C6EE3u); RECOMP_ABI_CALL(0x00608109u, sub_00608109); /* call 0x00608109 */

loc_004C6EE3: ;
    ebx = esi + 0x1C;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C6EEDu); RECOMP_ABI_CALL(0x00607FCEu, sub_00607FCE); /* call 0x00607FCE */

loc_004C6EED: ;
    ecx = esi + 0x20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C6EF5u); RECOMP_ABI_CALL(0x00607FA1u, sub_00607FA1); /* call 0x00607FA1 */

loc_004C6EF5: ;
    ecx = esi + 0x24;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C6EFDu); RECOMP_ABI_CALL(0x00607F74u, sub_00607F74); /* call 0x00607F74 */

loc_004C6EFD: ;
    ecx = esi + 0x28;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C6F05u); RECOMP_ABI_CALL(0x00608163u, sub_00608163); /* call 0x00608163 */

loc_004C6F05: ;
    ecx = esi + 0x2C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C6F0Du); RECOMP_ABI_CALL(0x00608136u, sub_00608136); /* call 0x00608136 */

loc_004C6F0D: ;
    ecx = esi + 0x30;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C6F15u); RECOMP_ABI_CALL(0x00607EEDu, sub_00607EED); /* call 0x00607EED */

loc_004C6F15: ;
    MEM32(esi) = 0x866B44;
    MEM32(edi) = 0x866B38;
    MEM32(ebx) = 0x866B2C;
    MEM32(esi + 0x20) = 0x866B20;
    MEM32(esi + 0x24) = 0x866B14;
    MEM32(esi + 0x28) = 0x866B08;
    MEM32(esi + 0x2C) = 0x866AFC;
    MEM32(esi + 0x30) = 0x866AF0;
    PUSH32(esp, MEM32(0x90E448));
    ecx = esi + 0x34;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C6F58u); RECOMP_ABI_CALL(0x004ABC3Eu, sub_004ABC3E); /* call 0x004ABC3E */

loc_004C6F58: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x38) = ebx;
    MEM32(esi + 0x3C) = ebx;
    MEM32(esi + 0x40) = ebx;
    MEM32(esi + 0x44) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C6F6Bu); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004C6F6B: ;
    edx = MEM32(eax);
    ecx = eax;
    MEM32(ebp + 8) = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x44); PUSH32(esp, 0x004C6F75u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C6F72u); } /* indirect call */
    }

loc_004C6F75: ;
    ecx = ebp + 8;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C6F83u); RECOMP_ABI_CALL(0x004DD750u, sub_004DD750); /* call 0x004DD750 */

loc_004C6F83: ;
    PUSH32(esp, ebx);
    ecx = 0x90E448;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C6F8Eu); RECOMP_ABI_CALL(0x004AFE27u, sub_004AFE27); /* call 0x004AFE27 */

loc_004C6F8E: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C6F97
 * Original: 0x004C6F97 - 0x004C6F9F (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C6F97(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C6F97: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004CD7F7(); return; /* tail jmp 0x004CD7F7 */

}

/**
 * sub_004C6F9F
 * Original: 0x004C6F9F - 0x004C6FA7 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C6F9F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C6F9F: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004CD7F7(); return; /* tail jmp 0x004CD7F7 */

}

/**
 * sub_004C6FA7
 * Original: 0x004C6FA7 - 0x004C6FAF (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C6FA7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C6FA7: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004CD7F7(); return; /* tail jmp 0x004CD7F7 */

}

/**
 * sub_004C6FAF
 * Original: 0x004C6FAF - 0x004C6FB7 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C6FAF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C6FAF: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x24;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004CD7F7(); return; /* tail jmp 0x004CD7F7 */

}

/**
 * sub_004C6FB7
 * Original: 0x004C6FB7 - 0x004C6FBF (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C6FB7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C6FB7: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x28;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004CD7F7(); return; /* tail jmp 0x004CD7F7 */

}

/**
 * sub_004C6FBF
 * Original: 0x004C6FBF - 0x004C6FC7 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C6FBF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C6FBF: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x2C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004CD7F7(); return; /* tail jmp 0x004CD7F7 */

}

/**
 * sub_004C6FC7
 * Original: 0x004C6FC7 - 0x004C6FCF (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C6FC7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C6FC7: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004CD7F7(); return; /* tail jmp 0x004CD7F7 */

}

/**
 * sub_004C6FCF
 * Original: 0x004C6FCF - 0x004C70BA (235 bytes, 73 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004C6FCF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C6FCF: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x18;
    ebx = esi + 0x1C;
    MEM32(esi) = 0x866B44;
    MEM32(edi) = 0x866B38;
    MEM32(ebx) = 0x866B2C;
    MEM32(esi + 0x20) = 0x866B20;
    MEM32(esi + 0x24) = 0x866B14;
    MEM32(esi + 0x28) = 0x866B08;
    MEM32(esi + 0x2C) = 0x866AFC;
    MEM32(esi + 0x30) = 0x866AF0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C7018u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004C7018: ;
    edx = MEM32(eax);
    ecx = eax;
    MEM32(ebp + -4) = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x44); PUSH32(esp, 0x004C7022u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C701Fu); } /* indirect call */
    }

loc_004C7022: ;
    ecx = ebp + -4;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C7030u); RECOMP_ABI_CALL(0x004DD8B2u, sub_004DD8B2); /* call 0x004DD8B2 */

loc_004C7030: ;
    ecx = MEM32(esi + 0x38);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C703C; /* je: equal / zero */

loc_004C7037: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004C703Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C7039u); } /* indirect call */
    }

loc_004C703C: ;
    ecx = MEM32(esi + 0x44);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C7048; /* je: equal / zero */

loc_004C7043: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C7048u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004C7048: ;
    ecx = MEM32(esi + 0x40);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C7054; /* je: equal / zero */

loc_004C704F: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C7054u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004C7054: ;
    ecx = MEM32(esi + 0x3C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C7060; /* je: equal / zero */

loc_004C705B: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C7060u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004C7060: ;
    ecx = MEM32(esi + 0x38);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C706C; /* je: equal / zero */

loc_004C7067: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C706Cu); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004C706C: ;
    ecx = MEM32(esi + 0x34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C7078; /* je: equal / zero */

loc_004C7073: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C7078u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004C7078: ;
    ecx = esi + 0x30;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C7080u); RECOMP_ABI_CALL(0x00607EF6u, sub_00607EF6); /* call 0x00607EF6 */

loc_004C7080: ;
    ecx = esi + 0x2C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C7088u); RECOMP_ABI_CALL(0x0060813Fu, sub_0060813F); /* call 0x0060813F */

loc_004C7088: ;
    ecx = esi + 0x28;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C7090u); RECOMP_ABI_CALL(0x0060816Cu, sub_0060816C); /* call 0x0060816C */

loc_004C7090: ;
    ecx = esi + 0x24;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C7098u); RECOMP_ABI_CALL(0x00607F7Du, sub_00607F7D); /* call 0x00607F7D */

loc_004C7098: ;
    ecx = esi + 0x20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C70A0u); RECOMP_ABI_CALL(0x00607FAAu, sub_00607FAA); /* call 0x00607FAA */

loc_004C70A0: ;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C70A7u); RECOMP_ABI_CALL(0x00607FD7u, sub_00607FD7); /* call 0x00607FD7 */

loc_004C70A7: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C70AEu); RECOMP_ABI_CALL(0x00608112u, sub_00608112); /* call 0x00608112 */

loc_004C70AE: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C70B5u); RECOMP_ABI_CALL(0x004C1837u, sub_004C1837); /* call 0x004C1837 */

loc_004C70B5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004C70BA
 * Original: 0x004C70BA - 0x004C70F2 (56 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C70BA(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C70BA: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x34);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x7C); PUSH32(esp, 0x004C70C5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C70C2u); } /* indirect call */
    }

loc_004C70C5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C70DF; /* je: equal / zero */

loc_004C70C9: ;
    edx = MEM32(eax);
    ecx = esi + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x004C70D4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C70D1u); } /* indirect call */
    }

loc_004C70D4: ;
    PUSH32(esp, eax);
    ecx = esi + 0x38;
    PUSH32(esp, 0x004C70DDu); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C70DD: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_004C70DF: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x8667B4);
    ecx = esi;
    PUSH32(esp, 0x004C70F0u); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C70F0: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004C70F2
 * Original: 0x004C70F2 - 0x004C7128 (54 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C70F2(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C70F2: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x34);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x7C); PUSH32(esp, 0x004C70FDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C70FAu); } /* indirect call */
    }

loc_004C70FD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C710E; /* je: equal / zero */

loc_004C7101: ;
    edx = MEM32(eax);
    ecx = esi + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x004C710Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C7109u); } /* indirect call */
    }

loc_004C710C: ;
    goto loc_004C711D;

loc_004C710E: ;
    ecx = MEM32(esi + 0x34);
    eax = MEM32(ecx);
    edx = esi + 0x30;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0xCC); PUSH32(esp, 0x004C711Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C7117u); } /* indirect call */
    }

loc_004C711D: ;
    ecx = esi + 0x38;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004C7126u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C7126: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004C7128
 * Original: 0x004C7128 - 0x004C7162 (58 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C7128(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C7128: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x34);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x7C); PUSH32(esp, 0x004C7133u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C7130u); } /* indirect call */
    }

loc_004C7133: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C714F; /* je: equal / zero */

loc_004C7137: ;
    edx = MEM32(eax);
    ecx = esi + 0x24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x004C7144u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C7141u); } /* indirect call */
    }

loc_004C7144: ;
    PUSH32(esp, eax);
    ecx = esi + 0x38;
    PUSH32(esp, 0x004C714Du); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C714D: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_004C714F: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x8667B4);
    ecx = esi;
    PUSH32(esp, 0x004C7160u); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C7160: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004C7162
 * Original: 0x004C7162 - 0x004C71AE (76 bytes, 32 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004C7162(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004C7162: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x7E0D78);
    PUSH32(esp, MEM32(ebp + 8));
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C717Au); RECOMP_ABI_CALL(0x005CC4B1u, sub_005CC4B1); /* call 0x005CC4B1 */

loc_004C717A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C7182u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004C7182: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x004C7189u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C7186u); } /* indirect call */
    }

loc_004C7189: ;
    edx = MEM32(eax);
    ecx = esi;
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    edi = esi + 0x28;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 8));
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x004C719Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C719Cu); } /* indirect call */
    }

loc_004C719F: ;
    PUSH32(esp, eax);
    ecx = esi + 0x40;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C71A8u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C71A8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C71AE
 * Original: 0x004C71AE - 0x004C71C3 (21 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C71AE(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C71AE: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x866B68);
    _fb = (uint32_t)(0xFFFFFFC0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFC0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x004C71C0u); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C71C0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C71C3
 * Original: 0x004C71C3 - 0x004C71D0 (13 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C71C3(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C71C3: ;
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x28;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x004C71CDu); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C71CD: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C71D0
 * Original: 0x004C71D0 - 0x004C71DD (13 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C71D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C71D0: ;
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x28;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x004C71DAu); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C71DA: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C71DD
 * Original: 0x004C71DD - 0x004C71E8 (11 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C71DD(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C71DD: ;
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x24;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x004C71E7u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C71E7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004C71E8
 * Original: 0x004C71E8 - 0x004C71F5 (13 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C71E8(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C71E8: ;
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x24;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x004C71F2u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C71F2: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C71F5
 * Original: 0x004C71F5 - 0x004C7202 (13 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C71F5(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C71F5: ;
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x004C71FFu); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C71FF: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C7202
 * Original: 0x004C7202 - 0x004C720F (13 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C7202(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C7202: ;
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x004C720Cu); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C720C: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C720F
 * Original: 0x004C720F - 0x004C721A (11 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C720F(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C720F: ;
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x004C7219u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C7219: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004C721A
 * Original: 0x004C721A - 0x004C7235 (27 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C721A(void)
{

loc_004C721A: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esi + 0x1C;
    PUSH32(esp, 0x004C7227u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C7227: ;
    ecx = esi + -20;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x004C7231u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C722Eu); } /* indirect call */
    }

loc_004C7231: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C7235
 * Original: 0x004C7235 - 0x004C7240 (11 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C7235(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C7235: ;
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x004C723Fu); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C723F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004C7240
 * Original: 0x004C7240 - 0x004C724D (13 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C7240(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C7240: ;
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x004C724Au); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C724A: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C724D
 * Original: 0x004C724D - 0x004C7258 (11 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C724D(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C724D: ;
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x004C7257u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C7257: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004C7258
 * Original: 0x004C7258 - 0x004C7265 (13 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C7258(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C7258: ;
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x004C7262u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C7262: ;
    esp += 8; return; /* ret 4 */

}
