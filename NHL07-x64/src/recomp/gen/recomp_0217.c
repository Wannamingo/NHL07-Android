/**
 * nhl_07_recomp - Recompiled code chunk 217
 * Functions: 250 (0x004C7265 - 0x004CA9B5)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_004C7265
 * Original: 0x004C7265 - 0x004C7270 (11 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C7265(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C7265: ;
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x004C726Fu); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C726F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004C7270
 * Original: 0x004C7270 - 0x004C727D (13 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C7270(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C7270: ;
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x004C727Au); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C727A: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C727D
 * Original: 0x004C727D - 0x004C72E7 (106 bytes, 37 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C727D(void)
{

loc_004C727D: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004C728Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C7287u); } /* indirect call */
    }

loc_004C728A: ;
    PUSH32(esp, eax);
    ecx = esi + 0x38;
    PUSH32(esp, 0x004C7293u); RECOMP_ABI_CALL(0x004C2CD2u, sub_004C2CD2); /* call 0x004C2CD2 */

loc_004C7293: ;
    PUSH32(esp, 0x004C7298u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004C7298: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x004C729Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C729Cu); } /* indirect call */
    }

loc_004C729F: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x004C72A6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C72A3u); } /* indirect call */
    }

loc_004C72A6: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x004C72ADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C72AAu); } /* indirect call */
    }

loc_004C72AD: ;
    MEM8(esi + 0x3D) = 1;
    ecx = MEM32(0x90E424);
    edi = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004C72BEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C72BBu); } /* indirect call */
    }

loc_004C72BE: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(0x8631F4));
    edx = MEM32(eax);
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004C72CCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C72C9u); } /* indirect call */
    }

loc_004C72CC: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x866B84);
    ecx = esi + -28;
    MEM8(esi + 0x3D) = 0;
    PUSH32(esp, 0x004C72E2u); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C72E2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C72E7
 * Original: 0x004C72E7 - 0x004C730C (37 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C72E7(void)
{

loc_004C72E7: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0xC));
    esi = ecx;
    ecx = esi + 0x2C;
    PUSH32(esp, 0x004C72F6u); RECOMP_ABI_CALL(0x004C2CA2u, sub_004C2CA2); /* call 0x004C2CA2 */

loc_004C72F6: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x866B9C);
    ecx = esi + -28;
    PUSH32(esp, 0x004C7308u); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C7308: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C730C
 * Original: 0x004C730C - 0x004C7321 (21 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C730C(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C730C: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x866BB4);
    _fb = (uint32_t)(0xFFFFFFE4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFE4u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x004C731Eu); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C731E: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C7321
 * Original: 0x004C7321 - 0x004C734C (43 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C7321(void)
{

loc_004C7321: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004C732Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C732Au); } /* indirect call */
    }

loc_004C732D: ;
    PUSH32(esp, eax);
    ecx = esi + 0x38;
    PUSH32(esp, 0x004C7336u); RECOMP_ABI_CALL(0x004C2CD2u, sub_004C2CD2); /* call 0x004C2CD2 */

loc_004C7336: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x866BD8);
    ecx = esi + -28;
    PUSH32(esp, 0x004C7348u); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C7348: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C734C
 * Original: 0x004C734C - 0x004C736A (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C734C(void)
{

loc_004C734C: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004C7358u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C7355u); } /* indirect call */
    }

loc_004C7358: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x866BEC);
    ecx = esi + -28;
    PUSH32(esp, 0x004C7366u); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C7366: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C736A
 * Original: 0x004C736A - 0x004C739D (51 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C736A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C736A: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C737D; /* je: equal / zero */

loc_004C7375: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004C737Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C7377u); } /* indirect call */
    }

loc_004C737A: ;
    PUSH32(esp, eax);
    goto loc_004C737F;

loc_004C737D: ;
    PUSH32(esp, 0);

loc_004C737F: ;
    ecx = esi + 0x38;
    PUSH32(esp, 0x004C7387u); RECOMP_ABI_CALL(0x004C2CD2u, sub_004C2CD2); /* call 0x004C2CD2 */

loc_004C7387: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x866C00);
    ecx = esi + -28;
    PUSH32(esp, 0x004C7399u); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C7399: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C739D
 * Original: 0x004C739D - 0x004C7543 (422 bytes, 163 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004C739D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004C739D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_004C753E; /* jne: not equal / not zero */

loc_004C73AE: ;
    _fa = (uint32_t)(MEM8(esi + 0x39)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x39), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_004C753E; /* jne: not equal / not zero */

loc_004C73B8: ;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    eax = MEM32(ebx);
    PUSH32(esp, edi);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x004C73C4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C73C1u); } /* indirect call */
    }

loc_004C73C4: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(0x8631F4));
    edi = eax;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004C73D3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C73D0u); } /* indirect call */
    }

loc_004C73D3: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C73D9u); RECOMP_ABI_CALL(0x005CFF90u, sub_005CFF90); /* call 0x005CFF90 */

loc_004C73D9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_004C745A; /* jne: not equal / not zero */

loc_004C73DF: ;
    ecx = esi + -32;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C73E7u); RECOMP_ABI_CALL(0x004C1380u, sub_004C1380); /* call 0x004C1380 */

loc_004C73E7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004C753C; /* je: equal / zero */

loc_004C73EF: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C73F4u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004C73F4: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x004C73FBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C73F8u); } /* indirect call */
    }

loc_004C73FB: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x004C7402u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C73FFu); } /* indirect call */
    }

loc_004C7402: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x004C7409u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C7406u); } /* indirect call */
    }

loc_004C7409: ;
    ecx = MEM32(0x90E424);
    ebx = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004C7416u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C7413u); } /* indirect call */
    }

loc_004C7416: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x004C741Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C741Bu); } /* indirect call */
    }

loc_004C741D: ;
    edi = esi + 0x2C;
    ecx = MEM32(edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004C742B; /* je: equal / zero */

loc_004C7426: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004C742Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C7428u); } /* indirect call */
    }

loc_004C742B: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C7430u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004C7430: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x004C7437u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C7434u); } /* indirect call */
    }

loc_004C7437: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x004C743Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C743Bu); } /* indirect call */
    }

loc_004C743E: ;
    edx = MEM32(eax);
    ecx = esi + -32;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x14)) >> 32) & 1);
    esi = esi + 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x004C7453u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C7450u); } /* indirect call */
    }

loc_004C7453: ;
    ecx = edi;
    goto loc_004C7536;

loc_004C745A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(0x8631FC));
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004C7467u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C7464u); } /* indirect call */
    }

loc_004C7467: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C746Du); RECOMP_ABI_CALL(0x005CFF90u, sub_005CFF90); /* call 0x005CFF90 */

loc_004C746D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_004C753C; /* jne: not equal / not zero */

loc_004C7477: ;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004C747Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C747Bu); } /* indirect call */
    }

loc_004C747E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_004C753C; /* jne: not equal / not zero */

loc_004C7487: ;
    MEM8(ebp + 8) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C7490u); RECOMP_ABI_CALL(0x004DC981u, sub_004DC981); /* call 0x004DC981 */

loc_004C7490: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x004C7497u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C7494u); } /* indirect call */
    }

loc_004C7497: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_004C74DF; /* jne: not equal / not zero */

loc_004C749B: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) & eax;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = esi + -32;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C74A8u); RECOMP_ABI_CALL(0x004C1393u, sub_004C1393); /* call 0x004C1393 */

loc_004C74A8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_BE(_fa, _fb)) goto loc_004C74DF; /* jbe: below or equal (unsigned <=) */

loc_004C74AC: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C74B6u); RECOMP_ABI_CALL(0x004C13A5u, sub_004C13A5); /* call 0x004C13A5 */

loc_004C74B6: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004C74BEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C74BBu); } /* indirect call */
    }

loc_004C74BE: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C74C4u); RECOMP_ABI_CALL(0x005CFF90u, sub_005CFF90); /* call 0x005CFF90 */

loc_004C74C4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004C74DB; /* je: equal / zero */

loc_004C74CA: ;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C74D4u); RECOMP_ABI_CALL(0x004C1393u, sub_004C1393); /* call 0x004C1393 */

loc_004C74D4: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_004C74AC; /* jb: below (unsigned <) */

loc_004C74D9: ;
    goto loc_004C74DF;

loc_004C74DB: ;
    MEM8(ebp + 8) = 1;

loc_004C74DF: ;
    eax = esi + 0x2C;
    MEM32(ebp + -4) = eax;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004C74F2; /* je: equal / zero */

loc_004C74EB: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004C74F2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C74EFu); } /* indirect call */
    }

loc_004C74F2: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C74F7u); RECOMP_ABI_CALL(0x004DC981u, sub_004DC981); /* call 0x004DC981 */

loc_004C74F7: ;
    edi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C74FEu); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004C74FE: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x004C7505u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C7502u); } /* indirect call */
    }

loc_004C7505: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x004C750Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C7509u); } /* indirect call */
    }

loc_004C750C: ;
    edx = MEM32(edi);
    ecx = esi + -32;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0xC)) >> 32) & 1);
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 8));
    ebx = eax;
    eax = MEM32(ebx);
    ecx = edi;
    MEM32(ebp + 0xC) = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004C752Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C7527u); } /* indirect call */
    }

loc_004C752A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0xC);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x004C7533u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C7530u); } /* indirect call */
    }

loc_004C7533: ;
    ecx = MEM32(ebp + -4);

loc_004C7536: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C753Cu); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C753C: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_004C753E: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C7543
 * Original: 0x004C7543 - 0x004C7621 (222 bytes, 57 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C7543(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C7543: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x866CB4);
    PUSH32(esp, 1);
    esi = ecx;
    PUSH32(esp, 0x004C7554u); RECOMP_ABI_CALL(0x004C17F2u, sub_004C17F2); /* call 0x004C17F2 */

loc_004C7554: ;
    edi = esi + 0x18;
    ecx = edi;
    PUSH32(esp, 0x004C755Eu); RECOMP_ABI_CALL(0x0060837Fu, sub_0060837F); /* call 0x0060837F */

loc_004C755E: ;
    ebx = esi + 0x1C;
    ecx = ebx;
    PUSH32(esp, 0x004C7568u); RECOMP_ABI_CALL(0x00608352u, sub_00608352); /* call 0x00608352 */

loc_004C7568: ;
    ecx = esi + 0x20;
    PUSH32(esp, 0x004C7570u); RECOMP_ABI_CALL(0x004AD96Au, sub_004AD96A); /* call 0x004AD96A */

loc_004C7570: ;
    ecx = esi + 0x24;
    PUSH32(esp, 0x004C7578u); RECOMP_ABI_CALL(0x00607E66u, sub_00607E66); /* call 0x00607E66 */

loc_004C7578: ;
    ecx = esi + 0x28;
    PUSH32(esp, 0x004C7580u); RECOMP_ABI_CALL(0x00608325u, sub_00608325); /* call 0x00608325 */

loc_004C7580: ;
    ecx = esi + 0x2C;
    PUSH32(esp, 0x004C7588u); RECOMP_ABI_CALL(0x006082F8u, sub_006082F8); /* call 0x006082F8 */

loc_004C7588: ;
    ecx = esi + 0x30;
    PUSH32(esp, 0x004C7590u); RECOMP_ABI_CALL(0x006080AFu, sub_006080AF); /* call 0x006080AF */

loc_004C7590: ;
    ecx = esi + 0x34;
    PUSH32(esp, 0x004C7598u); RECOMP_ABI_CALL(0x004E596Fu, sub_004E596F); /* call 0x004E596F */

loc_004C7598: ;
    ecx = esi + 0x38;
    PUSH32(esp, 0x004C75A0u); RECOMP_ABI_CALL(0x006082CBu, sub_006082CB); /* call 0x006082CB */

loc_004C75A0: ;
    ecx = esi + 0x3C;
    PUSH32(esp, 0x004C75A8u); RECOMP_ABI_CALL(0x0060829Eu, sub_0060829E); /* call 0x0060829E */

loc_004C75A8: ;
    ecx = esi + 0x40;
    PUSH32(esp, 0x004C75B0u); RECOMP_ABI_CALL(0x00608217u, sub_00608217); /* call 0x00608217 */

loc_004C75B0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = 0x866CB0;
    MEM32(edi) = 0x866CA4;
    MEM32(ebx) = 0x866C7C;
    MEM32(esi + 0x20) = 0x866C74;
    MEM32(esi + 0x24) = 0x866C68;
    MEM32(esi + 0x28) = 0x866C5C;
    MEM32(esi + 0x2C) = 0x866C50;
    MEM32(esi + 0x30) = 0x866C44;
    MEM32(esi + 0x34) = 0x866C38;
    MEM32(esi + 0x38) = 0x866C2C;
    MEM32(esi + 0x3C) = 0x866C20;
    MEM32(esi + 0x40) = 0x866C18;
    MEM32(esi + 0x44) = eax;
    MEM32(esi + 0x48) = eax;
    MEM32(esi + 0x4C) = eax;
    MEM32(esi + 0x50) = eax;
    MEM32(esi + 0x54) = eax;
    MEM8(esi + 0x58) = LO8(eax);
    MEM8(esi + 0x59) = LO8(eax);
    MEM8(esi + 0x60) = LO8(eax);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_004C7621
 * Original: 0x004C7621 - 0x004C7622 (1 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C7621(void)
{

loc_004C7621: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004C7622
 * Original: 0x004C7622 - 0x004C7625 (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C7622(void)
{

loc_004C7622: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C7625
 * Original: 0x004C7625 - 0x004C7628 (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C7625(void)
{

loc_004C7625: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C7628
 * Original: 0x004C7628 - 0x004C7630 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C7628(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C7628: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004CD843(); return; /* tail jmp 0x004CD843 */

}

/**
 * sub_004C7630
 * Original: 0x004C7630 - 0x004C7638 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C7630(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C7630: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004CD843(); return; /* tail jmp 0x004CD843 */

}

/**
 * sub_004C7638
 * Original: 0x004C7638 - 0x004C7640 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C7638(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C7638: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004CD843(); return; /* tail jmp 0x004CD843 */

}

/**
 * sub_004C7640
 * Original: 0x004C7640 - 0x004C7648 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C7640(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C7640: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x24;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004CD843(); return; /* tail jmp 0x004CD843 */

}

/**
 * sub_004C7648
 * Original: 0x004C7648 - 0x004C7650 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C7648(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C7648: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x28;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004CD843(); return; /* tail jmp 0x004CD843 */

}

/**
 * sub_004C7650
 * Original: 0x004C7650 - 0x004C7658 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C7650(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C7650: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x2C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004CD843(); return; /* tail jmp 0x004CD843 */

}

/**
 * sub_004C7658
 * Original: 0x004C7658 - 0x004C7660 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C7658(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C7658: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004CD843(); return; /* tail jmp 0x004CD843 */

}

/**
 * sub_004C7660
 * Original: 0x004C7660 - 0x004C7668 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C7660(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C7660: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x34;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004CD843(); return; /* tail jmp 0x004CD843 */

}

/**
 * sub_004C7668
 * Original: 0x004C7668 - 0x004C7670 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C7668(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C7668: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x38;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004CD843(); return; /* tail jmp 0x004CD843 */

}

/**
 * sub_004C7670
 * Original: 0x004C7670 - 0x004C7678 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C7670(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C7670: ;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x3C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004CD843(); return; /* tail jmp 0x004CD843 */

}

/**
 * sub_004C7678
 * Original: 0x004C7678 - 0x004C7680 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C7678(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C7678: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x40;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004CD843(); return; /* tail jmp 0x004CD843 */

}

/**
 * sub_004C7680
 * Original: 0x004C7680 - 0x004C7790 (272 bytes, 75 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C7680(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C7680: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x4C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = esi + 0x18;
    ebx = esi + 0x1C;
    MEM32(esi) = 0x866CB0;
    MEM32(edi) = 0x866CA4;
    MEM32(ebx) = 0x866C7C;
    MEM32(esi + 0x20) = 0x866C74;
    MEM32(esi + 0x24) = 0x866C68;
    MEM32(esi + 0x28) = 0x866C5C;
    MEM32(esi + 0x2C) = 0x866C50;
    MEM32(esi + 0x30) = 0x866C44;
    MEM32(esi + 0x34) = 0x866C38;
    MEM32(esi + 0x38) = 0x866C2C;
    MEM32(esi + 0x3C) = 0x866C20;
    MEM32(esi + 0x40) = 0x866C18;
    if (CMP_EQ(_fa, _fb)) goto loc_004C76E8; /* je: equal / zero */

loc_004C76E3: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004C76E8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C76E5u); } /* indirect call */
    }

loc_004C76E8: ;
    ecx = MEM32(esi + 0x50);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C76F4; /* je: equal / zero */

loc_004C76EF: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004C76F4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C76F1u); } /* indirect call */
    }

loc_004C76F4: ;
    ecx = MEM32(esi + 0x54);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C7700; /* je: equal / zero */

loc_004C76FB: ;
    PUSH32(esp, 0x004C7700u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004C7700: ;
    ecx = MEM32(esi + 0x50);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C770C; /* je: equal / zero */

loc_004C7707: ;
    PUSH32(esp, 0x004C770Cu); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004C770C: ;
    ecx = MEM32(esi + 0x4C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C7718; /* je: equal / zero */

loc_004C7713: ;
    PUSH32(esp, 0x004C7718u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004C7718: ;
    ecx = MEM32(esi + 0x48);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C7724; /* je: equal / zero */

loc_004C771F: ;
    PUSH32(esp, 0x004C7724u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004C7724: ;
    ecx = MEM32(esi + 0x44);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C7730; /* je: equal / zero */

loc_004C772B: ;
    PUSH32(esp, 0x004C7730u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004C7730: ;
    ecx = esi + 0x40;
    PUSH32(esp, 0x004C7738u); RECOMP_ABI_CALL(0x00608220u, sub_00608220); /* call 0x00608220 */

loc_004C7738: ;
    ecx = esi + 0x3C;
    PUSH32(esp, 0x004C7740u); RECOMP_ABI_CALL(0x006082A7u, sub_006082A7); /* call 0x006082A7 */

loc_004C7740: ;
    ecx = esi + 0x38;
    PUSH32(esp, 0x004C7748u); RECOMP_ABI_CALL(0x006082D4u, sub_006082D4); /* call 0x006082D4 */

loc_004C7748: ;
    ecx = esi + 0x34;
    PUSH32(esp, 0x004C7750u); RECOMP_ABI_CALL(0x004E5978u, sub_004E5978); /* call 0x004E5978 */

loc_004C7750: ;
    ecx = esi + 0x30;
    PUSH32(esp, 0x004C7758u); RECOMP_ABI_CALL(0x006080B8u, sub_006080B8); /* call 0x006080B8 */

loc_004C7758: ;
    ecx = esi + 0x2C;
    PUSH32(esp, 0x004C7760u); RECOMP_ABI_CALL(0x00608301u, sub_00608301); /* call 0x00608301 */

loc_004C7760: ;
    ecx = esi + 0x28;
    PUSH32(esp, 0x004C7768u); RECOMP_ABI_CALL(0x0060832Eu, sub_0060832E); /* call 0x0060832E */

loc_004C7768: ;
    ecx = esi + 0x24;
    PUSH32(esp, 0x004C7770u); RECOMP_ABI_CALL(0x00607E6Fu, sub_00607E6F); /* call 0x00607E6F */

loc_004C7770: ;
    ecx = esi + 0x20;
    PUSH32(esp, 0x004C7778u); RECOMP_ABI_CALL(0x004AD973u, sub_004AD973); /* call 0x004AD973 */

loc_004C7778: ;
    ecx = ebx;
    PUSH32(esp, 0x004C777Fu); RECOMP_ABI_CALL(0x0060835Bu, sub_0060835B); /* call 0x0060835B */

loc_004C777F: ;
    ecx = edi;
    PUSH32(esp, 0x004C7786u); RECOMP_ABI_CALL(0x00608388u, sub_00608388); /* call 0x00608388 */

loc_004C7786: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_004C1837(); return; /* tail jmp 0x004C1837 */

}

/**
 * sub_004C7790
 * Original: 0x004C7790 - 0x004C7794 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C7790(void)
{

loc_004C7790: ;
    eax = MEM32(ecx + 0x48);
    esp += 4; return; /* ret */

}

/**
 * sub_004C7794
 * Original: 0x004C7794 - 0x004C78D4 (320 bytes, 116 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004C7794(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004C7794: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C77A0u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004C77A0: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x004C77A7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C77A4u); } /* indirect call */
    }

loc_004C77A7: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x004C77AEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C77ABu); } /* indirect call */
    }

loc_004C77AE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_004C77C8; /* jne: not equal / not zero */

loc_004C77B2: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x866CD0);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C77C3u); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C77C3: ;
    goto loc_004C78D1;

loc_004C77C8: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x004C77D0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C77CDu); } /* indirect call */
    }

loc_004C77D0: ;
    ecx = MEM32(0x90E424);
    esi = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004C77DDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C77DAu); } /* indirect call */
    }

loc_004C77DD: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(0x8631F4));
    edx = MEM32(eax);
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004C77EBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C77E8u); } /* indirect call */
    }

loc_004C77EB: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C77F0u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004C77F0: ;
    ecx = edi;
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    edx = edi + 0x1C;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = MEM32(eax);
    MEM32(ebp + -4) = ecx;
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x004C7805u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C7802u); } /* indirect call */
    }

loc_004C7805: ;
    ecx = ebp + -4;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C7813u); RECOMP_ABI_CALL(0x004DD750u, sub_004DD750); /* call 0x004DD750 */

loc_004C7813: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C7818u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004C7818: ;
    ecx = edi;
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    edx = edi + 0x40;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = MEM32(eax);
    MEM32(ebp + -4) = ecx;
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x004C782Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C782Au); } /* indirect call */
    }

loc_004C782D: ;
    ecx = ebp + -4;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C783Bu); RECOMP_ABI_CALL(0x004DD750u, sub_004DD750); /* call 0x004DD750 */

loc_004C783B: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C7840u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004C7840: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x004C7847u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C7844u); } /* indirect call */
    }

loc_004C7847: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x004C784Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C784Bu); } /* indirect call */
    }

loc_004C784E: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C7853u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004C7853: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x004C785Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C7857u); } /* indirect call */
    }

loc_004C785A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(0x8631F4));
    edx = MEM32(eax);
    esi = edi;
    _cf = (int)((esi) != 0);
    esi = (uint32_t)(-(int32_t)esi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = edi + 0x20;
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    esi = esi & ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = eax;
    MEM32(ebp + -4) = esi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x004C7875u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C7872u); } /* indirect call */
    }

loc_004C7875: ;
    ecx = ebp + -4;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C7883u); RECOMP_ABI_CALL(0x004DD750u, sub_004DD750); /* call 0x004DD750 */

loc_004C7883: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C7888u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004C7888: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x004C788Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C788Cu); } /* indirect call */
    }

loc_004C788F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(0x8631FC));
    edx = MEM32(eax);
    ecx = eax;
    MEM32(ebp + -4) = esi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x004C789Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C789Cu); } /* indirect call */
    }

loc_004C789F: ;
    ecx = ebp + -4;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C78ADu); RECOMP_ABI_CALL(0x004DD750u, sub_004DD750); /* call 0x004DD750 */

loc_004C78AD: ;
    esi = 0x7B891F;
    PUSH32(esp, esi);
    PUSH32(esp, 0x866B84);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C78BFu); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C78BF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x866B68);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C78CCu); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C78CC: ;
    MEM8(edi + 0x58) = 1;
    POP32(esp, esi);

loc_004C78D1: ;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004C78D4
 * Original: 0x004C78D4 - 0x004C7998 (196 bytes, 71 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004C78D4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C78D4: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM8(esi + 0x58)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x58), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C7995; /* je: equal / zero */

loc_004C78E5: ;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C78EBu); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004C78EB: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x004C78F2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C78EFu); } /* indirect call */
    }

loc_004C78F2: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(0x8631FC));
    edx = MEM32(eax);
    edi = esi + 0x20;
    ecx = eax;
    MEM32(ebp + -4) = edi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x004C7905u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C7902u); } /* indirect call */
    }

loc_004C7905: ;
    ecx = ebp + -4;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C7913u); RECOMP_ABI_CALL(0x004DD8B2u, sub_004DD8B2); /* call 0x004DD8B2 */

loc_004C7913: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C7918u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004C7918: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x004C791Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C791Cu); } /* indirect call */
    }

loc_004C791F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(0x8631F4));
    edx = MEM32(eax);
    ecx = eax;
    MEM32(ebp + -4) = edi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x004C792Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C792Cu); } /* indirect call */
    }

loc_004C792F: ;
    ecx = ebp + -4;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C793Du); RECOMP_ABI_CALL(0x004DD8B2u, sub_004DD8B2); /* call 0x004DD8B2 */

loc_004C793D: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C7942u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004C7942: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x004C7949u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C7946u); } /* indirect call */
    }

loc_004C7949: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x004C7950u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C794Du); } /* indirect call */
    }

loc_004C7950: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C7955u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004C7955: ;
    edx = MEM32(eax);
    ecx = esi + 0x1C;
    MEM32(ebp + -4) = ecx;
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x004C7962u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C795Fu); } /* indirect call */
    }

loc_004C7962: ;
    ecx = ebp + -4;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C7970u); RECOMP_ABI_CALL(0x004DD8B2u, sub_004DD8B2); /* call 0x004DD8B2 */

loc_004C7970: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C7975u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004C7975: ;
    edx = MEM32(eax);
    ecx = esi + 0x40;
    MEM32(ebp + -4) = ecx;
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x004C7982u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C797Fu); } /* indirect call */
    }

loc_004C7982: ;
    ecx = ebp + -4;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C7990u); RECOMP_ABI_CALL(0x004DD8B2u, sub_004DD8B2); /* call 0x004DD8B2 */

loc_004C7990: ;
    MEM8(esi + 0x58) = 0;
    POP32(esp, edi);

loc_004C7995: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004C7998
 * Original: 0x004C7998 - 0x004C79B3 (27 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C7998(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C7998: ;
    eax = MEM32(ecx + 0x54);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004C79B2; /* jne: not equal / not zero */

loc_004C799F: ;
    PUSH32(esp, 0x004C79A4u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004C79A4: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x004C79ABu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C79A8u); } /* indirect call */
    }

loc_004C79AB: ;
    edx = MEM32(eax);
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 4)); return; /* indirect tail jmp */

loc_004C79B2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004C79B3
 * Original: 0x004C79B3 - 0x004C7A3F (140 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C79B3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C79B3: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0x004C79BDu); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004C79BD: ;
    esi = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x004C79C9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C79C3u); } /* indirect call */
    }

loc_004C79C9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C7A01; /* je: equal / zero */

loc_004C79CD: ;
    eax = MEM32(esi);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x30); PUSH32(esp, 0x004C79D5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C79D2u); } /* indirect call */
    }

loc_004C79D5: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x004C79DCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C79D9u); } /* indirect call */
    }

loc_004C79DC: ;
    ebx = edi + 0x4C;
    ecx = MEM32(ebx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    ebp = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_004C79EC; /* je: equal / zero */

loc_004C79E7: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004C79ECu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C79E9u); } /* indirect call */
    }

loc_004C79EC: ;
    eax = MEM32(ebp);
    ecx = edi + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x004C79F8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C79F5u); } /* indirect call */
    }

loc_004C79F8: ;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x004C7A00u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C7A00: ;
    POP32(esp, ebp);

loc_004C7A01: ;
    ecx = edi;
    PUSH32(esp, 0x004C7A08u); RECOMP_ABI_CALL(0x004C1380u, sub_004C1380); /* call 0x004C1380 */

loc_004C7A08: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C7A3B; /* je: equal / zero */

loc_004C7A0C: ;
    ebx = edi + 0x4C;
    ecx = MEM32(ebx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C7A1A; /* je: equal / zero */

loc_004C7A15: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004C7A1Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C7A17u); } /* indirect call */
    }

loc_004C7A1A: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x60); PUSH32(esp, 0x004C7A21u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C7A1Eu); } /* indirect call */
    }

loc_004C7A21: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x004C7A28u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C7A25u); } /* indirect call */
    }

loc_004C7A28: ;
    edx = MEM32(eax);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x28;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x004C7A33u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C7A30u); } /* indirect call */
    }

loc_004C7A33: ;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x004C7A3Bu); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C7A3B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_004C7A3F
 * Original: 0x004C7A3F - 0x004C7A7A (59 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C7A3F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C7A3F: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x4C;
    ecx = MEM32(edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C7A51; /* je: equal / zero */

loc_004C7A4C: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004C7A51u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C7A4Eu); } /* indirect call */
    }

loc_004C7A51: ;
    PUSH32(esp, 0x004C7A56u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004C7A56: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x004C7A5Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C7A5Au); } /* indirect call */
    }

loc_004C7A5D: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x004C7A64u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C7A61u); } /* indirect call */
    }

loc_004C7A64: ;
    edx = MEM32(eax);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x30;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x004C7A6Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C7A6Cu); } /* indirect call */
    }

loc_004C7A6F: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x004C7A77u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C7A77: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004C7A7A
 * Original: 0x004C7A7A - 0x004C7AA6 (44 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C7A7A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C7A7A: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    PUSH32(esp, 0x004C7A82u); RECOMP_ABI_CALL(0x004C1380u, sub_004C1380); /* call 0x004C1380 */

loc_004C7A82: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C7AA2; /* je: equal / zero */

loc_004C7A86: ;
    PUSH32(esp, 0x004C7A8Bu); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004C7A8B: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x004C7A92u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C7A8Fu); } /* indirect call */
    }

loc_004C7A92: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x004C7A99u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C7A96u); } /* indirect call */
    }

loc_004C7A99: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x004C7AA0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C7A9Du); } /* indirect call */
    }

loc_004C7AA0: ;
    SET_LO8(ebx, LO8(eax));

loc_004C7AA2: ;
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_004C7AA6
 * Original: 0x004C7AA6 - 0x004C7AE7 (65 bytes, 28 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C7AA6(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C7AA6: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x4C;
    ecx = MEM32(edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C7AB8; /* je: equal / zero */

loc_004C7AB3: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004C7AB8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C7AB5u); } /* indirect call */
    }

loc_004C7AB8: ;
    PUSH32(esp, 0x004C7ABDu); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004C7ABD: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x004C7AC4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C7AC1u); } /* indirect call */
    }

loc_004C7AC4: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x004C7ACBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C7AC8u); } /* indirect call */
    }

loc_004C7ACB: ;
    edx = MEM32(eax);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x2C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x004C7ADAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C7AD7u); } /* indirect call */
    }

loc_004C7ADA: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x004C7AE2u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C7AE2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C7AE7
 * Original: 0x004C7AE7 - 0x004C7B47 (96 bytes, 41 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C7AE7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C7AE7: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004C7AEFu); RECOMP_ABI_CALL(0x004C1380u, sub_004C1380); /* call 0x004C1380 */

loc_004C7AEF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C7B43; /* je: equal / zero */

loc_004C7AF3: ;
    PUSH32(esp, ebx);
    ebx = esi + 0x4C;
    ecx = MEM32(ebx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_004C7B04; /* je: equal / zero */

loc_004C7AFF: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004C7B04u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C7B01u); } /* indirect call */
    }

loc_004C7B04: ;
    PUSH32(esp, 0x004C7B09u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004C7B09: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x004C7B10u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C7B0Du); } /* indirect call */
    }

loc_004C7B10: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x004C7B17u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C7B14u); } /* indirect call */
    }

loc_004C7B17: ;
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x004C7B20u); RECOMP_ABI_CALL(0x004C7998u, sub_004C7998); /* call 0x004C7998 */

loc_004C7B20: ;
    ebp = MEM32(edi);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x24;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0x18));
    ecx = eax + 8;
    PUSH32(esp, 0x004C7B32u); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004C7B32: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebp + 0x10); PUSH32(esp, 0x004C7B38u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C7B35u); } /* indirect call */
    }

loc_004C7B38: ;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x004C7B40u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C7B40: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_004C7B43: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C7B47
 * Original: 0x004C7B47 - 0x004C7BAC (101 bytes, 43 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C7B47(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C7B47: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004C7B4Du); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004C7B4D: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x004C7B54u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C7B51u); } /* indirect call */
    }

loc_004C7B54: ;
    esi = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x004C7B5Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C7B5Au); } /* indirect call */
    }

loc_004C7B5D: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004C7B64u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C7B61u); } /* indirect call */
    }

loc_004C7B64: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004C7B6C; /* jne: not equal / not zero */

loc_004C7B68: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_004C7BA8;

loc_004C7B6C: ;
    edx = MEM32(eax);
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004C7B74u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C7B71u); } /* indirect call */
    }

loc_004C7B74: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x004C7B7Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C7B78u); } /* indirect call */
    }

loc_004C7B7B: ;
    edi = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004C7B84u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C7B81u); } /* indirect call */
    }

loc_004C7B84: ;
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = eax + 8;
    PUSH32(esp, 0x004C7B90u); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004C7B90: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004C7B97u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C7B94u); } /* indirect call */
    }

loc_004C7B97: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x004C7B9Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C7B9Bu); } /* indirect call */
    }

loc_004C7B9E: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(eax, LO8(ecx));
    POP32(esp, edi);

loc_004C7BA8: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C7BAC
 * Original: 0x004C7BAC - 0x004C7C32 (134 bytes, 46 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C7BAC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C7BAC: ;
    PUSH32(esp, esi);
    esi = 0x7B891F;
    PUSH32(esp, 0x004C7BB7u); RECOMP_ABI_CALL(0x004C7998u, sub_004C7998); /* call 0x004C7998 */

loc_004C7BB7: ;
    PUSH32(esp, MEM32(esp + 8));
    ecx = eax + 8;
    PUSH32(esp, 0x004C7BC3u); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004C7BC3: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x004C7BCAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C7BC7u); } /* indirect call */
    }

loc_004C7BCA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_004C7C0C; /* ja: above (unsigned >) */

loc_004C7BCF: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x4C7C12); /* switch: 8 entries, 8 targets */
    if (_jt == 0x004C7BD6u) goto loc_004C7BD6;
    if (_jt == 0x004C7BDDu) goto loc_004C7BDD;
    if (_jt == 0x004C7BE4u) goto loc_004C7BE4;
    if (_jt == 0x004C7BEBu) goto loc_004C7BEB;
    if (_jt == 0x004C7BF2u) goto loc_004C7BF2;
    if (_jt == 0x004C7BF9u) goto loc_004C7BF9;
    if (_jt == 0x004C7C00u) goto loc_004C7C00;
    if (_jt == 0x004C7C07u) goto loc_004C7C07;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_004C7BD6: ;
    esi = 0x866D20;
    goto loc_004C7C0C;

loc_004C7BDD: ;
    esi = 0x866D18;
    goto loc_004C7C0C;

loc_004C7BE4: ;
    esi = 0x866D10;
    goto loc_004C7C0C;

loc_004C7BEB: ;
    esi = 0x866D08;
    goto loc_004C7C0C;

loc_004C7BF2: ;
    esi = 0x866D00;
    goto loc_004C7C0C;

loc_004C7BF9: ;
    esi = 0x866CF8;
    goto loc_004C7C0C;

loc_004C7C00: ;
    esi = 0x866CF0;
    goto loc_004C7C0C;

loc_004C7C07: ;
    esi = 0x866CE8;

loc_004C7C0C: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_HI8(ecx, HI8(ecx) + LO8(ebx));
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    if (_flags /* jnp: not parity */) { g_seh_ebp = ebp; sub_004C7C65(); return; }

loc_004C7C19: ;
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_HI8(eax, HI8(eax) + HI8(eax));
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    if (_flags /* jnp: not parity */) { g_seh_ebp = ebp; sub_004C7C69(); return; }

loc_004C7C1D: ;
    _fb = (uint32_t)(HI8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(ebx, LO8(ebx) + HI8(ecx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    if (_flags /* jnp: not parity */) { g_seh_ebp = ebp; sub_004C7C6D(); return; }

loc_004C7C21: ;
    _fb = (uint32_t)(HI8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + HI8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    if (_flags /* jnp: not parity */) { g_seh_ebp = ebp; sub_004C7C71(); return; }

loc_004C7C25: ;
    _fb = (uint32_t)(HI8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(ecx, LO8(ecx) + HI8(ebx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    if (_flags /* jnp: not parity */) { g_seh_ebp = ebp; sub_004C7C75(); return; }

loc_004C7C29: ;
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    if ((_fas < 0)) { g_seh_ebp = ebp; sub_004C7C79(); return; } /* jl: less (signed <) */

loc_004C7C2D: ;
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(edi) = MEM8(edi) + LO8(eax);
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    if ((_fas < 0)) { g_seh_ebp = ebp; sub_004C7C7D(); return; } /* jl: less (signed <) */

    g_seh_ebp = ebp; sub_004C7C32(); return; /* fallthrough 0x004C7C32 */

}

/**
 * sub_004C7C32
 * Original: 0x004C7C32 - 0x004C7C60 (46 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C7C32(void)
{

loc_004C7C32: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004C7C3Au); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004C7C3A: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x004C7C41u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C7C3Eu); } /* indirect call */
    }

loc_004C7C41: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(0x8631FC));
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x004C7C4Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C7C4Bu); } /* indirect call */
    }

loc_004C7C4E: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x004C7C55u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C7C52u); } /* indirect call */
    }

loc_004C7C55: ;
    PUSH32(esp, eax);
    ecx = esi + 0x44;
    PUSH32(esp, 0x004C7C5Eu); RECOMP_ABI_CALL(0x004BFEADu, sub_004BFEAD); /* call 0x004BFEAD */

loc_004C7C5E: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004C7C60
 * Original: 0x004C7C60 - 0x004C7C9E (62 bytes, 26 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C7C60(void)
{

loc_004C7C60: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x004C7C68u); RECOMP_ABI_CALL(0x004C7998u, sub_004C7998); /* call 0x004C7998 */

loc_004C7C68: ;
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = eax + 8;
    PUSH32(esp, 0x004C7C74u); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004C7C74: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004C7C7Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C7C78u); } /* indirect call */
    }

loc_004C7C7B: ;
    ecx = MEM32(0x90E424);
    esi = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x004C7C88u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C7C85u); } /* indirect call */
    }

loc_004C7C88: ;
    edi = eax;
    eax = MEM32(esi);
    ebx = MEM32(edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004C7C93u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C7C90u); } /* indirect call */
    }

loc_004C7C93: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebx); PUSH32(esp, 0x004C7C98u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C7C96u); } /* indirect call */
    }

loc_004C7C98: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C7C9E
 * Original: 0x004C7C9E - 0x004C7CF1 (83 bytes, 34 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C7C9E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C7C9E: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004C7CA6u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004C7CA6: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x004C7CADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C7CAAu); } /* indirect call */
    }

loc_004C7CAD: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x004C7CB4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C7CB1u); } /* indirect call */
    }

loc_004C7CB4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C7CED; /* je: equal / zero */

loc_004C7CB8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 8), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C7CC4; /* je: equal / zero */

loc_004C7CBF: ;
    esi = MEM32(esi + 0x44);
    goto loc_004C7CDB;

loc_004C7CC4: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004C7CCBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C7CC8u); } /* indirect call */
    }

loc_004C7CCB: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004C7CD2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C7CCFu); } /* indirect call */
    }

loc_004C7CD2: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x004C7CD9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C7CD6u); } /* indirect call */
    }

loc_004C7CD9: ;
    esi = eax;

loc_004C7CDB: ;
    ecx = MEM32(0x90E424);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x004C7CE6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C7CE3u); } /* indirect call */
    }

loc_004C7CE6: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x004C7CEDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C7CEBu); } /* indirect call */
    }

loc_004C7CED: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C7CF1
 * Original: 0x004C7CF1 - 0x004C7D3A (73 bytes, 32 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C7CF1(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C7CF1: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = edi + 0x4C;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C7D03; /* je: equal / zero */

loc_004C7CFE: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004C7D03u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C7D00u); } /* indirect call */
    }

loc_004C7D03: ;
    PUSH32(esp, 0x004C7D08u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004C7D08: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x004C7D0Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C7D0Cu); } /* indirect call */
    }

loc_004C7D0F: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x004C7D16u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C7D13u); } /* indirect call */
    }

loc_004C7D16: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C7D2C; /* je: equal / zero */

loc_004C7D1A: ;
    edx = MEM32(eax);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x2C;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x004C7D29u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C7D26u); } /* indirect call */
    }

loc_004C7D29: ;
    PUSH32(esp, eax);
    goto loc_004C7D2E;

loc_004C7D2C: ;
    PUSH32(esp, 0);

loc_004C7D2E: ;
    ecx = esi;
    PUSH32(esp, 0x004C7D35u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C7D35: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C7D3A
 * Original: 0x004C7D3A - 0x004C7D7C (66 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C7D3A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C7D3A: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x004C7D42u); RECOMP_ABI_CALL(0x004C7998u, sub_004C7998); /* call 0x004C7998 */

loc_004C7D42: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C7D76; /* je: equal / zero */

loc_004C7D46: ;
    PUSH32(esp, MEM32(esp + 8));
    ecx = eax + 8;
    PUSH32(esp, 0x004C7D52u); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004C7D52: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004C7D59u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C7D56u); } /* indirect call */
    }

loc_004C7D59: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x004C7D60u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C7D5Du); } /* indirect call */
    }

loc_004C7D60: ;
    esi = eax;
    PUSH32(esp, esi);
    ecx = 0x90E444;
    PUSH32(esp, 0x004C7D6Du); RECOMP_ABI_CALL(0x004AFE27u, sub_004AFE27); /* call 0x004AFE27 */

loc_004C7D6D: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004C7D74u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C7D71u); } /* indirect call */
    }

loc_004C7D74: ;
    esi = eax;

loc_004C7D76: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C7D7C
 * Original: 0x004C7D7C - 0x004C7DF7 (123 bytes, 54 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004C7D7C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C7D7C: ;
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
    MEM32(ebp + -4) = ecx;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C7D8Fu); RECOMP_ABI_CALL(0x004C7998u, sub_004C7998); /* call 0x004C7998 */

loc_004C7D8F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C7DDD; /* je: equal / zero */

loc_004C7D93: ;
    ecx = MEM32(eax + 0x14);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(ebp + -12) = ecx;
    if (CMP_BE(_fa, _fb)) goto loc_004C7DDD; /* jbe: below or equal (unsigned <=) */

loc_004C7D9F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -8) = eax;

loc_004C7DA5: ;
    ecx = MEM32(ebp + -8);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C7DAEu); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004C7DAE: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004C7DB5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C7DB2u); } /* indirect call */
    }

loc_004C7DB5: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x004C7DBCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C7DB9u); } /* indirect call */
    }

loc_004C7DBC: ;
    esi = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004C7DC5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C7DC2u); } /* indirect call */
    }

loc_004C7DC5: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C7DCEu); RECOMP_ABI_CALL(0x004ABAD7u, sub_004ABAD7); /* call 0x004ABAD7 */

loc_004C7DCE: ;
    SET_LO8(ebx, LO8(eax));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 1 (8-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004C7DED; /* je: equal / zero */

loc_004C7DD7: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebp + -12) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004C7DA5; /* jb: below (unsigned <) */

loc_004C7DDD: ;
    eax = MEM32(ebp + -4);
    MEM32(eax + 0x5C) = MEM32(eax + 0x5C) & 0;
    _fa = (uint32_t)(MEM32(eax + 0x5C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO8(eax, LO8(ebx));

loc_004C7DE6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

loc_004C7DED: ;
    eax = MEM32(ebp + -4);
    MEM32(eax + 0x5C) = esi;
    SET_LO8(eax, 1);
    goto loc_004C7DE6;

}

/**
 * sub_004C7DF7
 * Original: 0x004C7DF7 - 0x004C7E53 (92 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C7DF7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C7DF7: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 0x5C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x5C), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004C7E07; /* jne: not equal / not zero */

loc_004C7E02: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_004C7E4C;

loc_004C7E07: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x004C7E10u); RECOMP_ABI_CALL(0x004C7998u, sub_004C7998); /* call 0x004C7998 */

loc_004C7E10: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C7E47; /* je: equal / zero */

loc_004C7E14: ;
    ebx = MEM32(eax + 0x14);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004C7E47; /* jbe: below or equal (unsigned <=) */

loc_004C7E1B: ;
    ebp = eax + 8;

loc_004C7E1E: ;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0x004C7E26u); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004C7E26: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004C7E2Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C7E2Au); } /* indirect call */
    }

loc_004C7E2D: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x004C7E34u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C7E31u); } /* indirect call */
    }

loc_004C7E34: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi + 0x5C));
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x004C7E3Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C7E3Bu); } /* indirect call */
    }

loc_004C7E3E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004C7E4F; /* jne: not equal / not zero */

loc_004C7E42: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004C7E1E; /* jb: below (unsigned <) */

loc_004C7E47: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_004C7E4A: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_004C7E4C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_004C7E4F: ;
    eax = edi;
    goto loc_004C7E4A;

}

/**
 * sub_004C7E53
 * Original: 0x004C7E53 - 0x004C7EA1 (78 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C7E53(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C7E53: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    PUSH32(esp, 0x004C7E5Cu); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004C7E5C: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x004C7E63u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C7E60u); } /* indirect call */
    }

loc_004C7E63: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x004C7E6Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C7E67u); } /* indirect call */
    }

loc_004C7E6A: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C7E9E; /* je: equal / zero */

loc_004C7E70: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x004C7E77u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C7E74u); } /* indirect call */
    }

loc_004C7E77: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004C7E9E; /* jne: not equal / not zero */

loc_004C7E7B: ;
    PUSH32(esp, edi);
    edi = ebx + 0x50;
    ecx = MEM32(edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C7E8A; /* je: equal / zero */

loc_004C7E85: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004C7E8Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C7E87u); } /* indirect call */
    }

loc_004C7E8A: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x38;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x4C); PUSH32(esp, 0x004C7E95u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C7E92u); } /* indirect call */
    }

loc_004C7E95: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x004C7E9Du); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C7E9D: ;
    POP32(esp, edi);

loc_004C7E9E: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_004C7EA1
 * Original: 0x004C7EA1 - 0x004C7EEF (78 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C7EA1(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C7EA1: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    PUSH32(esp, 0x004C7EAAu); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004C7EAA: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x004C7EB1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C7EAEu); } /* indirect call */
    }

loc_004C7EB1: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x004C7EB8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C7EB5u); } /* indirect call */
    }

loc_004C7EB8: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C7EEC; /* je: equal / zero */

loc_004C7EBE: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x004C7EC5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C7EC2u); } /* indirect call */
    }

loc_004C7EC5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004C7EEC; /* jne: not equal / not zero */

loc_004C7EC9: ;
    PUSH32(esp, edi);
    edi = ebx + 0x50;
    ecx = MEM32(edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C7ED8; /* je: equal / zero */

loc_004C7ED3: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004C7ED8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C7ED5u); } /* indirect call */
    }

loc_004C7ED8: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x3C;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x004C7EE3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C7EE0u); } /* indirect call */
    }

loc_004C7EE3: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x004C7EEBu); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C7EEB: ;
    POP32(esp, edi);

loc_004C7EEC: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_004C7EEF
 * Original: 0x004C7EEF - 0x004C7F39 (74 bytes, 24 insns)
 * Category: game_io
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C7EEF(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C7EEF: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esi + 4;
    PUSH32(esp, 0x004C7EFCu); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C7EFC: ;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_004C7F23; /* je: equal / zero */

loc_004C7F05: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_004C7F17; /* je: equal / zero */

loc_004C7F08: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_004C7F35; /* jne: not equal / not zero */

loc_004C7F0B: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x866D58);
    goto loc_004C7F2D;

loc_004C7F17: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x866D44);
    goto loc_004C7F2D;

loc_004C7F23: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x866D30);

loc_004C7F2D: ;
    ecx = esi + -24;
    PUSH32(esp, 0x004C7F35u); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C7F35: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C7F39
 * Original: 0x004C7F39 - 0x004C7F6C (51 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C7F39(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C7F39: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x866D78);
    PUSH32(esp, MEM32(esp + 0x10));
    esi = ecx;
    PUSH32(esp, 0x004C7F4Bu); RECOMP_ABI_CALL(0x004C17F2u, sub_004C17F2); /* call 0x004C17F2 */

loc_004C7F4B: ;
    edi = esi + 0x18;
    ecx = edi;
    PUSH32(esp, 0x004C7F55u); RECOMP_ABI_CALL(0x004BDFA5u, sub_004BDFA5); /* call 0x004BDFA5 */

loc_004C7F55: ;
    MEM32(edi) = 0x866D70;
    MEM32(esi) = 0x866D6C;
    MEM32(esi + 0x1C) = MEM32(esi + 0x1C) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C7F6C
 * Original: 0x004C7F6C - 0x004C7F74 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C7F6C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C7F6C: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004CD85F(); return; /* tail jmp 0x004CD85F */

}

/**
 * sub_004C7F74
 * Original: 0x004C7F74 - 0x004C7FBB (71 bytes, 27 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C7F74(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C7F74: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x1C;
    ecx = MEM32(edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    ebx = esi + 0x18;
    MEM32(esi) = 0x866D6C;
    MEM32(ebx) = 0x866D70;
    if (CMP_EQ(_fa, _fb)) goto loc_004C7F9F; /* je: equal / zero */

loc_004C7F91: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004C7F96u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C7F93u); } /* indirect call */
    }

loc_004C7F96: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x004C7F9Fu); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C7F9F: ;
    ecx = MEM32(edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C7FAA; /* je: equal / zero */

loc_004C7FA5: ;
    PUSH32(esp, 0x004C7FAAu); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004C7FAA: ;
    ecx = ebx;
    PUSH32(esp, 0x004C7FB1u); RECOMP_ABI_CALL(0x004BDFAEu, sub_004BDFAE); /* call 0x004BDFAE */

loc_004C7FB1: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_004C1837(); return; /* tail jmp 0x004C1837 */

}

/**
 * sub_004C7FBB
 * Original: 0x004C7FBB - 0x004C7FEA (47 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C7FBB(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004C7FBB: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x004C7FC4u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004C7FC4: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x004C7FCBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C7FC8u); } /* indirect call */
    }

loc_004C7FCB: ;
    edx = MEM32(eax);
    ecx = esi;
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    edi = esi + 0x18;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x004C7FDEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C7FDBu); } /* indirect call */
    }

loc_004C7FDE: ;
    PUSH32(esp, eax);
    ecx = esi + 0x1C;
    PUSH32(esp, 0x004C7FE7u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C7FE7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004C7FEA
 * Original: 0x004C7FEA - 0x004C801F (53 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C7FEA(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C7FEA: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004C7FF2u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004C7FF2: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x004C7FF9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C7FF6u); } /* indirect call */
    }

loc_004C7FF9: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x004C8000u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C7FFDu); } /* indirect call */
    }

loc_004C8000: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ecx = esi + -24;
    PUSH32(esp, 0x7B891F);
    if (CMP_EQ(_fa, _fb)) goto loc_004C8013; /* je: equal / zero */

loc_004C800C: ;
    PUSH32(esp, 0x866DB8);
    goto loc_004C8018;

loc_004C8013: ;
    PUSH32(esp, 0x866D98);

loc_004C8018: ;
    PUSH32(esp, 0x004C801Du); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C801D: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004C801F
 * Original: 0x004C801F - 0x004C80DE (191 bytes, 72 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C801F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C801F: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), 0 (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    eax = MEM32(edi);
    esi = ecx;
    ecx = edi;
    SET_LO8(ebx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x004C8038u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C8035u); } /* indirect call */
    }

loc_004C8038: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x66726E64) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x66726E64 (32-bit) */
    ebp = 0x7B891F;
    if (CMP_EQ(_fa, _fb)) goto loc_004C80B0; /* je: equal / zero */

loc_004C8044: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x67616D65) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x67616D65 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C8068; /* je: equal / zero */

loc_004C804B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x766F6970) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x766F6970 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004C80C9; /* jne: not equal / not zero */

loc_004C8052: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    ecx = esi + -28;
    PUSH32(esp, ebp);
    if (CMP_EQ(_fa, _fb)) goto loc_004C8061; /* je: equal / zero */

loc_004C805A: ;
    PUSH32(esp, 0x866EC4);
    goto loc_004C80C4;

loc_004C8061: ;
    PUSH32(esp, 0x866EA0);
    goto loc_004C80C4;

loc_004C8068: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004C806Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C806Cu); } /* indirect call */
    }

loc_004C806E: ;
    edi = eax;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xF8); PUSH32(esp, 0x004C807Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C8074u); } /* indirect call */
    }

loc_004C807A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004C808D; /* jne: not equal / not zero */

loc_004C807E: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x004C8085u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C8082u); } /* indirect call */
    }

loc_004C8085: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004C808D; /* jne: not equal / not zero */

loc_004C8089: ;
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    goto loc_004C808F;

loc_004C808D: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_004C808F: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    PUSH32(esp, ebp);
    ecx = esi + -28;
    if (CMP_EQ(_fa, _fb)) goto loc_004C80A9; /* je: equal / zero */

loc_004C8097: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C80A2; /* je: equal / zero */

loc_004C809B: ;
    PUSH32(esp, 0x866E7C);
    goto loc_004C80C4;

loc_004C80A2: ;
    PUSH32(esp, 0x866E5C);
    goto loc_004C80C4;

loc_004C80A9: ;
    PUSH32(esp, 0x866E38);
    goto loc_004C80C4;

loc_004C80B0: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    ecx = esi + -28;
    PUSH32(esp, ebp);
    if (CMP_EQ(_fa, _fb)) goto loc_004C80BF; /* je: equal / zero */

loc_004C80B8: ;
    PUSH32(esp, 0x866E14);
    goto loc_004C80C4;

loc_004C80BF: ;
    PUSH32(esp, 0x866DF0);

loc_004C80C4: ;
    PUSH32(esp, 0x004C80C9u); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C80C9: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x866DD8);
    ecx = esi + -28;
    PUSH32(esp, 0x004C80D7u); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C80D7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C80DE
 * Original: 0x004C80DE - 0x004C80F3 (21 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C80DE(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C80DE: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x866DD8);
    _fb = (uint32_t)(0xFFFFFFE4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFE4u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x004C80F0u); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C80F0: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C80F3
 * Original: 0x004C80F3 - 0x004C8169 (118 bytes, 44 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C80F3(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C80F3: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0x004C80FCu); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004C80FC: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x004C8103u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C8100u); } /* indirect call */
    }

loc_004C8103: ;
    esi = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x48); PUSH32(esp, 0x004C810Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C8109u); } /* indirect call */
    }

loc_004C810C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C811C; /* je: equal / zero */

loc_004C8110: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x866E5C);
    goto loc_004C815F;

loc_004C811C: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x4C); PUSH32(esp, 0x004C8123u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C8120u); } /* indirect call */
    }

loc_004C8123: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C8133; /* je: equal / zero */

loc_004C8127: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x866EC4);
    goto loc_004C815F;

loc_004C8133: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x004C813Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C8137u); } /* indirect call */
    }

loc_004C813A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C814A; /* je: equal / zero */

loc_004C813E: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x866E14);
    goto loc_004C815F;

loc_004C814A: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x40); PUSH32(esp, 0x004C8151u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C814Eu); } /* indirect call */
    }

loc_004C8151: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C8166; /* je: equal / zero */

loc_004C8155: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x866DB8);

loc_004C815F: ;
    ecx = edi;
    PUSH32(esp, 0x004C8166u); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C8166: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004C8169
 * Original: 0x004C8169 - 0x004C823F (214 bytes, 75 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004C8169(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004C8169: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x866F18);
    PUSH32(esp, 1);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C817Eu); RECOMP_ABI_CALL(0x004C17F2u, sub_004C17F2); /* call 0x004C17F2 */

loc_004C817E: ;
    ebx = esi + 0x18;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C8188u); RECOMP_ABI_CALL(0x00608244u, sub_00608244); /* call 0x00608244 */

loc_004C8188: ;
    edi = esi + 0x1C;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C8192u); RECOMP_ABI_CALL(0x00608109u, sub_00608109); /* call 0x00608109 */

loc_004C8192: ;
    ecx = esi + 0x20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C819Au); RECOMP_ABI_CALL(0x00608217u, sub_00608217); /* call 0x00608217 */

loc_004C819A: ;
    ecx = esi + 0x24;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C81A2u); RECOMP_ABI_CALL(0x004E599Cu, sub_004E599C); /* call 0x004E599C */

loc_004C81A2: ;
    MEM32(esi) = 0x866F14;
    MEM32(ebx) = 0x866F00;
    MEM32(edi) = 0x866EF4;
    MEM32(esi + 0x20) = 0x866EEC;
    MEM32(esi + 0x24) = 0x866EE4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C81C7u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004C81C7: ;
    edi = eax;
    eax = MEM32(edi);
    ecx = edi;
    MEM32(ebp + -4) = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x004C81D3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C81D0u); } /* indirect call */
    }

loc_004C81D3: ;
    ecx = ebp + -4;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C81E1u); RECOMP_ABI_CALL(0x004DD750u, sub_004DD750); /* call 0x004DD750 */

loc_004C81E1: ;
    eax = esi + 0x1C;
    MEM32(ebp + -4) = eax;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x44); PUSH32(esp, 0x004C81EEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C81EBu); } /* indirect call */
    }

loc_004C81EE: ;
    ecx = ebp + -4;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C81FCu); RECOMP_ABI_CALL(0x004DD750u, sub_004DD750); /* call 0x004DD750 */

loc_004C81FC: ;
    eax = esi + 0x20;
    MEM32(ebp + -4) = eax;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x004C8209u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C8206u); } /* indirect call */
    }

loc_004C8209: ;
    ecx = ebp + -4;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C8217u); RECOMP_ABI_CALL(0x004DD750u, sub_004DD750); /* call 0x004DD750 */

loc_004C8217: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x004C821Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C821Bu); } /* indirect call */
    }

loc_004C821E: ;
    ecx = ebp + -4;
    PUSH32(esp, ecx);
    ecx = eax;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x24)) >> 32) & 1);
    eax = eax + 0x24;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    edx = esi + 0x24;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -4) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C8238u); RECOMP_ABI_CALL(0x004DD750u, sub_004DD750); /* call 0x004DD750 */

loc_004C8238: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004C823F
 * Original: 0x004C823F - 0x004C8242 (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C823F(void)
{

loc_004C823F: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C8242
 * Original: 0x004C8242 - 0x004C8243 (1 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C8242(void)
{

loc_004C8242: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004C8243
 * Original: 0x004C8243 - 0x004C824B (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C8243(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C8243: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004CD87B(); return; /* tail jmp 0x004CD87B */

}

/**
 * sub_004C824B
 * Original: 0x004C824B - 0x004C8253 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C824B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C824B: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004CD87B(); return; /* tail jmp 0x004CD87B */

}

/**
 * sub_004C8253
 * Original: 0x004C8253 - 0x004C825B (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C8253(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C8253: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004CD87B(); return; /* tail jmp 0x004CD87B */

}

/**
 * sub_004C825B
 * Original: 0x004C825B - 0x004C8263 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C825B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C825B: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x24;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004CD87B(); return; /* tail jmp 0x004CD87B */

}

/**
 * sub_004C8263
 * Original: 0x004C8263 - 0x004C8331 (206 bytes, 72 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004C8263(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004C8263: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ebx = esi + 0x18;
    PUSH32(esp, edi);
    MEM32(esi) = 0x866F14;
    MEM32(ebx) = 0x866F00;
    MEM32(esi + 0x1C) = 0x866EF4;
    MEM32(esi + 0x20) = 0x866EEC;
    MEM32(esi + 0x24) = 0x866EE4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C8295u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004C8295: ;
    edi = eax;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x004C829Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C829Bu); } /* indirect call */
    }

loc_004C829E: ;
    ecx = ebp + -4;
    PUSH32(esp, ecx);
    ecx = eax;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x24)) >> 32) & 1);
    eax = eax + 0x24;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    edx = esi + 0x24;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -4) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C82B8u); RECOMP_ABI_CALL(0x004DD8B2u, sub_004DD8B2); /* call 0x004DD8B2 */

loc_004C82B8: ;
    eax = esi + 0x20;
    MEM32(ebp + -4) = eax;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x004C82C5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C82C2u); } /* indirect call */
    }

loc_004C82C5: ;
    ecx = ebp + -4;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C82D3u); RECOMP_ABI_CALL(0x004DD8B2u, sub_004DD8B2); /* call 0x004DD8B2 */

loc_004C82D3: ;
    eax = MEM32(edi);
    ecx = edi;
    MEM32(ebp + -4) = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x004C82DDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C82DAu); } /* indirect call */
    }

loc_004C82DD: ;
    ecx = ebp + -4;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C82EBu); RECOMP_ABI_CALL(0x004DD8B2u, sub_004DD8B2); /* call 0x004DD8B2 */

loc_004C82EB: ;
    eax = esi + 0x1C;
    MEM32(ebp + -4) = eax;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x44); PUSH32(esp, 0x004C82F8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C82F5u); } /* indirect call */
    }

loc_004C82F8: ;
    ecx = ebp + -4;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C8306u); RECOMP_ABI_CALL(0x004DD8B2u, sub_004DD8B2); /* call 0x004DD8B2 */

loc_004C8306: ;
    ecx = esi + 0x24;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C830Eu); RECOMP_ABI_CALL(0x004E59A5u, sub_004E59A5); /* call 0x004E59A5 */

loc_004C830E: ;
    ecx = esi + 0x20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C8316u); RECOMP_ABI_CALL(0x00608220u, sub_00608220); /* call 0x00608220 */

loc_004C8316: ;
    ecx = esi + 0x1C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C831Eu); RECOMP_ABI_CALL(0x00608112u, sub_00608112); /* call 0x00608112 */

loc_004C831E: ;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C8325u); RECOMP_ABI_CALL(0x0060824Du, sub_0060824D); /* call 0x0060824D */

loc_004C8325: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C832Cu); RECOMP_ABI_CALL(0x004C1837u, sub_004C1837); /* call 0x004C1837 */

loc_004C832C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004C8331
 * Original: 0x004C8331 - 0x004C83CB (154 bytes, 68 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C8331(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C8331: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = ecx;
    PUSH32(esp, 0x004C833Cu); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004C833C: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x004C8343u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C8340u); } /* indirect call */
    }

loc_004C8343: ;
    esi = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004C834Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C8349u); } /* indirect call */
    }

loc_004C834C: ;
    edi = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x004C8355u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C8352u); } /* indirect call */
    }

loc_004C8355: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004C83AD; /* jne: not equal / not zero */

loc_004C835B: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(edi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x14), ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004C83AB; /* jbe: below or equal (unsigned <=) */

loc_004C8361: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x004C836Du); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004C836D: ;
    esi = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004C8376u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C8373u); } /* indirect call */
    }

loc_004C8376: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x004C837Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C837Au); } /* indirect call */
    }

loc_004C837D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C838C; /* je: equal / zero */

loc_004C8381: ;
    PUSH32(esp, 1);
    ecx = edi;
    PUSH32(esp, 0x004C838Au); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004C838A: ;
    esi = eax;

loc_004C838C: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x004C8393u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C8390u); } /* indirect call */
    }

loc_004C8393: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C839C; /* je: equal / zero */

loc_004C8397: ;
    PUSH32(esp, 3);

loc_004C8399: ;
    POP32(esp, ebx);
    goto loc_004C83AD;

loc_004C839C: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x004C83A3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C83A0u); } /* indirect call */
    }

loc_004C83A3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C83AD; /* je: equal / zero */

loc_004C83A7: ;
    PUSH32(esp, 2);
    goto loc_004C8399;

loc_004C83AB: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004C83AD: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ebp + 0x28) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C83C6; /* je: equal / zero */

loc_004C83B2: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x866F34);
    ecx = ebp;
    MEM32(ebp + 0x28) = ebx;
    PUSH32(esp, 0x004C83C6u); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C83C6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_004C83CB
 * Original: 0x004C83CB - 0x004C83EE (35 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C83CB(void)
{

loc_004C83CB: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004C83D3u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004C83D3: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x004C83DAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C83D7u); } /* indirect call */
    }

loc_004C83DA: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x004C83E1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C83DEu); } /* indirect call */
    }

loc_004C83E1: ;
    PUSH32(esp, MEM32(esi + 0x28));
    ecx = eax + 8;
    PUSH32(esp, 0x004C83ECu); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004C83EC: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004C83EE
 * Original: 0x004C83EE - 0x004C841F (49 bytes, 15 insns)
 * Category: game_io
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C83EE(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C83EE: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esi + 0xC;
    PUSH32(esp, 0x004C83FBu); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C83FB: ;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xC), 5 (32-bit) */
    ecx = esi + -24;
    PUSH32(esp, 0x7B891F);
    if (CMP_NE(_fa, _fb)) goto loc_004C8411; /* jne: not equal / not zero */

loc_004C840A: ;
    PUSH32(esp, 0x866F68);
    goto loc_004C8416;

loc_004C8411: ;
    PUSH32(esp, 0x866F50);

loc_004C8416: ;
    PUSH32(esp, 0x004C841Bu); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C841B: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C841F
 * Original: 0x004C841F - 0x004C842B (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C841F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C841F: ;
    PUSH32(esp, 0x004C8424u); RECOMP_ABI_CALL(0x004C83CBu, sub_004C83CB); /* call 0x004C83CB */

loc_004C8424: ;
    edx = MEM32(eax);
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 4)); return; /* indirect tail jmp */

}

/**
 * sub_004C842B
 * Original: 0x004C842B - 0x004C843B (16 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C842B(void)
{

loc_004C842B: ;
    PUSH32(esp, 0x004C8430u); RECOMP_ABI_CALL(0x004C83CBu, sub_004C83CB); /* call 0x004C83CB */

loc_004C8430: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x004C8437u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C8434u); } /* indirect call */
    }

loc_004C8437: ;
    eax = MEM32(eax + 0x14);
    esp += 4; return; /* ret */

}

/**
 * sub_004C843B
 * Original: 0x004C843B - 0x004C845D (34 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C843B(void)
{

loc_004C843B: ;
    PUSH32(esp, 0x004C8440u); RECOMP_ABI_CALL(0x004C83CBu, sub_004C83CB); /* call 0x004C83CB */

loc_004C8440: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x004C8447u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C8444u); } /* indirect call */
    }

loc_004C8447: ;
    PUSH32(esp, MEM32(esp + 4));
    ecx = eax + 8;
    PUSH32(esp, 0x004C8453u); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004C8453: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004C845Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C8457u); } /* indirect call */
    }

loc_004C845A: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C845D
 * Original: 0x004C845D - 0x004C8482 (37 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C845D(void)
{

loc_004C845D: ;
    PUSH32(esp, 0x004C8462u); RECOMP_ABI_CALL(0x004C83CBu, sub_004C83CB); /* call 0x004C83CB */

loc_004C8462: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x004C8469u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C8466u); } /* indirect call */
    }

loc_004C8469: ;
    PUSH32(esp, MEM32(esp + 4));
    ecx = eax + 8;
    PUSH32(esp, 0x004C8475u); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004C8475: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x004C847Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C8479u); } /* indirect call */
    }

loc_004C847C: ;
    eax = MEM32(eax + 0x14);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C8482
 * Original: 0x004C8482 - 0x004C84B7 (53 bytes, 17 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C8482(void)
{

loc_004C8482: ;
    PUSH32(esp, 0x004C8487u); RECOMP_ABI_CALL(0x004C83CBu, sub_004C83CB); /* call 0x004C83CB */

loc_004C8487: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x004C848Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C848Bu); } /* indirect call */
    }

loc_004C848E: ;
    PUSH32(esp, MEM32(esp + 4));
    ecx = eax + 8;
    PUSH32(esp, 0x004C849Au); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004C849A: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x004C84A1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C849Eu); } /* indirect call */
    }

loc_004C84A1: ;
    PUSH32(esp, MEM32(esp + 8));
    ecx = eax + 8;
    PUSH32(esp, 0x004C84ADu); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004C84AD: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004C84B4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C84B1u); } /* indirect call */
    }

loc_004C84B4: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C84B7
 * Original: 0x004C84B7 - 0x004C851A (99 bytes, 36 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C84B7(void)
{

loc_004C84B7: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esi + 0x20;
    PUSH32(esp, 0x004C84C5u); RECOMP_ABI_CALL(0x004C2D83u, sub_004C2D83); /* call 0x004C2D83 */

loc_004C84C5: ;
    ecx = esi;
    PUSH32(esp, 0x004C84CCu); RECOMP_ABI_CALL(0x004C83CBu, sub_004C83CB); /* call 0x004C83CB */

loc_004C84CC: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x004C84D3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C84D0u); } /* indirect call */
    }

loc_004C84D3: ;
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = eax + 8;
    PUSH32(esp, 0x004C84DFu); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004C84DF: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x004C84E6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C84E3u); } /* indirect call */
    }

loc_004C84E6: ;
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = eax + 8;
    edi = esi + 0x1C;
    PUSH32(esp, 0x004C84F5u); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004C84F5: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x004C84FDu); RECOMP_ABI_CALL(0x004C2D50u, sub_004C2D50); /* call 0x004C2D50 */

loc_004C84FD: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 0x14));
    ecx = MEM32(edi);
    eax = MEM32(ecx);
    edx = esi + 0x18;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x004C850Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C8509u); } /* indirect call */
    }

loc_004C850C: ;
    PUSH32(esp, eax);
    ecx = esi + 0x24;
    PUSH32(esp, 0x004C8515u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C8515: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004C851A
 * Original: 0x004C851A - 0x004C8642 (296 bytes, 113 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004C851A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C851A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esi + 0x20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C852Du); RECOMP_ABI_CALL(0x004C2D83u, sub_004C2D83); /* call 0x004C2D83 */

loc_004C852D: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C8534u); RECOMP_ABI_CALL(0x004C83CBu, sub_004C83CB); /* call 0x004C83CB */

loc_004C8534: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x004C853Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C8538u); } /* indirect call */
    }

loc_004C853B: ;
    PUSH32(esp, MEM32(ebp + 8));
    ecx = eax + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C8546u); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004C8546: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x004C854Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C854Au); } /* indirect call */
    }

loc_004C854D: ;
    ebx = MEM32(ebp + 0xC);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    eax = MEM32(eax + 0x14);
    MEM32(ebp + -4) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_004C85EE; /* jne: not equal / not zero */

loc_004C855F: ;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_004C85C5; /* jle: less or equal (signed <=) */

loc_004C8567: ;
    edi = esi + 0x1C;

loc_004C856A: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C8571u); RECOMP_ABI_CALL(0x004C83CBu, sub_004C83CB); /* call 0x004C83CB */

loc_004C8571: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x004C8578u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C8575u); } /* indirect call */
    }

loc_004C8578: ;
    PUSH32(esp, MEM32(ebp + 8));
    ecx = eax + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C8583u); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004C8583: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x004C858Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C8587u); } /* indirect call */
    }

loc_004C858A: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = eax + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C8595u); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004C8595: ;
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C859Du); RECOMP_ABI_CALL(0x004C2D50u, sub_004C2D50); /* call 0x004C2D50 */

loc_004C859D: ;
    ebx = MEM32(edi);
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x004C85A6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C85A3u); } /* indirect call */
    }

loc_004C85A6: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004C85AEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C85ABu); } /* indirect call */
    }

loc_004C85AE: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C85B4u); RECOMP_ABI_CALL(0x005CFF90u, sub_005CFF90); /* call 0x005CFF90 */

loc_004C85B4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004C85E9; /* je: equal / zero */

loc_004C85BA: ;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -4) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004C856A; /* jl: less (signed <) */

loc_004C85C5: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C85CCu); RECOMP_ABI_CALL(0x004C83CBu, sub_004C83CB); /* call 0x004C83CB */

loc_004C85CC: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x004C85D3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C85D0u); } /* indirect call */
    }

loc_004C85D3: ;
    PUSH32(esp, MEM32(ebp + 8));
    ecx = eax + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C85DEu); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004C85DE: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x004C85E5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C85E2u); } /* indirect call */
    }

loc_004C85E5: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_004C860E;

loc_004C85E9: ;
    ebx = MEM32(ebp + 0xC);
    goto loc_004C8622;

loc_004C85EE: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C85F5u); RECOMP_ABI_CALL(0x004C83CBu, sub_004C83CB); /* call 0x004C83CB */

loc_004C85F5: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x004C85FCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C85F9u); } /* indirect call */
    }

loc_004C85FC: ;
    PUSH32(esp, MEM32(ebp + 8));
    ecx = eax + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C8607u); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004C8607: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x004C860Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C860Bu); } /* indirect call */
    }

loc_004C860E: ;
    ecx = eax + 8;
    PUSH32(esp, ebx);
    edi = esi + 0x1C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C861Au); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004C861A: ;
    ecx = edi;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C8622u); RECOMP_ABI_CALL(0x004C2D50u, sub_004C2D50); /* call 0x004C2D50 */

loc_004C8622: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = MEM32(edi);
    eax = MEM32(ecx);
    edx = esi + 0x18;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x004C8630u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C862Du); } /* indirect call */
    }

loc_004C8630: ;
    PUSH32(esp, eax);
    ecx = esi + 0x24;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C8639u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C8639: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004C8642
 * Original: 0x004C8642 - 0x004C8651 (15 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C8642(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C8642: ;
    ecx = MEM32(ecx + 0x20);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C8650; /* je: equal / zero */

loc_004C864B: ;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0xC)); return; /* indirect tail jmp */

loc_004C8650: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004C8651
 * Original: 0x004C8651 - 0x004C8659 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C8651(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C8651: ;
    ecx = MEM32(ecx + 0x20);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x10)); return; /* indirect tail jmp */

}

/**
 * sub_004C8659
 * Original: 0x004C8659 - 0x004C8676 (29 bytes, 11 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C8659(void)
{

loc_004C8659: ;
    edx = MEM32(ecx + 0x20);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0xC));
    esi = MEM32(edx);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x004C866Cu); RECOMP_ABI_CALL(0x004C1487u, sub_004C1487); /* call 0x004C1487 */

loc_004C866C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edx;
    { uint32_t _icall_target = MEM32(esi + 4); PUSH32(esp, 0x004C8672u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C866Fu); } /* indirect call */
    }

loc_004C8672: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C8676
 * Original: 0x004C8676 - 0x004C8693 (29 bytes, 11 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C8676(void)
{

loc_004C8676: ;
    edx = MEM32(ecx + 0x20);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0xC));
    esi = MEM32(edx);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x004C8689u); RECOMP_ABI_CALL(0x004C1487u, sub_004C1487); /* call 0x004C1487 */

loc_004C8689: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edx;
    { uint32_t _icall_target = MEM32(esi + 8); PUSH32(esp, 0x004C868Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C868Cu); } /* indirect call */
    }

loc_004C868F: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C8693
 * Original: 0x004C8693 - 0x004C86BB (40 bytes, 17 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004C8693(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C8693: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ecx + 0x20);
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 8));
    edx = ebp + -20;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004C86A9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C86A6u); } /* indirect call */
    }

loc_004C86A9: ;
    esi = MEM32(eax + 8);
    ecx = ebp + -20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C86B4u); RECOMP_ABI_CALL(0x006083D3u, sub_006083D3); /* call 0x006083D3 */

loc_004C86B4: ;
    eax = esi;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C86BB
 * Original: 0x004C86BB - 0x004C86E3 (40 bytes, 17 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004C86BB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C86BB: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ecx + 0x20);
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 8));
    edx = ebp + -20;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004C86D1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C86CEu); } /* indirect call */
    }

loc_004C86D1: ;
    esi = MEM32(eax + 0xC);
    ecx = ebp + -20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C86DCu); RECOMP_ABI_CALL(0x006083D3u, sub_006083D3); /* call 0x006083D3 */

loc_004C86DC: ;
    eax = esi;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C86E3
 * Original: 0x004C86E3 - 0x004C870B (40 bytes, 17 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004C86E3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C86E3: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ecx + 0x20);
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 8));
    edx = ebp + -20;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004C86F9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C86F6u); } /* indirect call */
    }

loc_004C86F9: ;
    esi = MEM32(eax + 0x10);
    ecx = ebp + -20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C8704u); RECOMP_ABI_CALL(0x006083D3u, sub_006083D3); /* call 0x006083D3 */

loc_004C8704: ;
    eax = esi;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C870B
 * Original: 0x004C870B - 0x004C8733 (40 bytes, 17 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004C870B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C870B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ecx + 0x20);
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 8));
    edx = ebp + -20;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004C8721u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C871Eu); } /* indirect call */
    }

loc_004C8721: ;
    esi = MEM32(eax + 4);
    ecx = ebp + -20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C872Cu); RECOMP_ABI_CALL(0x006083D3u, sub_006083D3); /* call 0x006083D3 */

loc_004C872C: ;
    eax = esi;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C8733
 * Original: 0x004C8733 - 0x004C8747 (20 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C8733(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C8733: ;
    ecx = MEM32(ecx + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C873F; /* je: equal / zero */

loc_004C873A: ;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x18)); return; /* indirect tail jmp */

loc_004C873F: ;
    eax = 0x7B891F;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C8747
 * Original: 0x004C8747 - 0x004C875B (20 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C8747(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C8747: ;
    ecx = MEM32(ecx + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C8753; /* je: equal / zero */

loc_004C874E: ;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x1C)); return; /* indirect tail jmp */

loc_004C8753: ;
    eax = 0x7B891F;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C875B
 * Original: 0x004C875B - 0x004C8774 (25 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C875B(void)
{

loc_004C875B: ;
    edx = MEM32(ecx + 0x20);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 8));
    esi = MEM32(edx);
    PUSH32(esp, 0x004C876Au); RECOMP_ABI_CALL(0x004C1487u, sub_004C1487); /* call 0x004C1487 */

loc_004C876A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edx;
    { uint32_t _icall_target = MEM32(esi + 0x20); PUSH32(esp, 0x004C8770u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C876Du); } /* indirect call */
    }

loc_004C8770: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C8774
 * Original: 0x004C8774 - 0x004C8904 (400 bytes, 141 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004C8774(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C8774: ;
    PUSH32(esp, ebp);
    ebp = esp + -156;
    _fb = (uint32_t)(0x11C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x11C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8E19F0);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + 0x98) = eax;
    esi = ecx;
    PUSH32(esp, 0x004C8796u); RECOMP_ABI_CALL(0x004C8642u, sub_004C8642); /* call 0x004C8642 */

loc_004C8796: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(ebp + -112) = edi;
    if (CMP_BE(_fa, _fb)) goto loc_004C88EF; /* jbe: below or equal (unsigned <=) */

loc_004C87A3: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x004C87A9u); RECOMP_ABI_CALL(0x004DC9EFu, sub_004DC9EF); /* call 0x004DC9EF */

loc_004C87A9: ;
    PUSH32(esp, MEM32(esi + 0x2C));
    ecx = esi;
    ebx = eax;
    MEM32(ebp + -116) = 0x4AB833;
    PUSH32(esp, 0x004C87BCu); RECOMP_ABI_CALL(0x004C86E3u, sub_004C86E3); /* call 0x004C86E3 */

loc_004C87BC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C87CD; /* je: equal / zero */

loc_004C87C0: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x004C87C8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C87C5u); } /* indirect call */
    }

loc_004C87C8: ;
    MEM32(ebp + -116) = eax;
    goto loc_004C87E3;

loc_004C87CD: ;
    PUSH32(esp, MEM32(esi + 0x2C));
    ecx = esi;
    PUSH32(esp, 0x004C87D7u); RECOMP_ABI_CALL(0x004C86BBu, sub_004C86BB); /* call 0x004C86BB */

loc_004C87D7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004C87E3; /* jne: not equal / not zero */

loc_004C87DC: ;
    MEM32(ebp + -116) = 0x4AB7ED;

loc_004C87E3: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004C87F6; /* jbe: below or equal (unsigned <=) */

loc_004C87E9: ;
    ecx = esi + 0x34;

loc_004C87EC: ;
    MEM32(ecx) = eax;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004C87EC; /* jb: below (unsigned <) */

loc_004C87F6: ;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x004C87FDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C87FAu); } /* indirect call */
    }

loc_004C87FD: ;
    MEM32(ebp + -128) = eax;
    eax = edi + -1;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004C88EE; /* jbe: below or equal (unsigned <=) */

loc_004C880D: ;
    edi = esi + 0x34;

loc_004C8810: ;
    ecx = MEM32(esi + 0x20);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x80);
    PUSH32(esp, MEM32(esi + 0x2C));
    MEM32(ebp + -124) = ebx;
    PUSH32(esp, MEM32(edi));
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004C8825u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C8822u); } /* indirect call */
    }

loc_004C8825: ;
    PUSH32(esp, eax);
    eax = ebp + -104;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004C882Fu); RECOMP_ABI_CALL(0x004E367Fu, sub_004E367F); /* call 0x004E367F */

loc_004C882F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -112)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ebp + -112) (32-bit) */
    MEM32(ebp + -108) = ebx;
    if (CMP_AE(_fa, _fb)) goto loc_004C88D0; /* jae: above or equal (unsigned >=) */

loc_004C883F: ;
    eax = edi + 4;
    MEM32(ebp + -120) = eax;

loc_004C8845: ;
    edx = MEM32(ebp + -120);
    ecx = MEM32(esi + 0x20);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x80);
    PUSH32(esp, MEM32(esi + 0x2C));
    PUSH32(esp, MEM32(edx));
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004C885Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C8857u); } /* indirect call */
    }

loc_004C885A: ;
    PUSH32(esp, eax);
    eax = ebp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004C8864u); RECOMP_ABI_CALL(0x004E367Fu, sub_004E367F); /* call 0x004E367F */

loc_004C8864: ;
    PUSH32(esp, MEM32(ebp + -128));
    eax = ebp + -104;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004C8870u); RECOMP_ABI_CALL(0x005CFF90u, sub_005CFF90); /* call 0x005CFF90 */

loc_004C8870: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C88A2; /* je: equal / zero */

loc_004C8877: ;
    PUSH32(esp, MEM32(ebp + -128));
    eax = ebp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004C8883u); RECOMP_ABI_CALL(0x005CFF90u, sub_005CFF90); /* call 0x005CFF90 */

loc_004C8883: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004C88BD; /* je: equal / zero */

loc_004C8889: ;
    eax = ebp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = ebp + -104;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ebp + -116); PUSH32(esp, 0x004C8894u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C8891u); } /* indirect call */
    }

loc_004C8894: ;
    _fa = (uint32_t)(MEM8(esi + 0x30)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x30), 0 (8-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004C889E; /* je: equal / zero */

loc_004C889C: ;
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_004C889E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_004C88BD; /* jle: less or equal (signed <=) */

loc_004C88A2: ;
    eax = MEM32(ebp + -108);
    MEM32(ebp + -124) = eax;
    PUSH32(esp, 0x80);
    eax = ebp + 0x18;
    PUSH32(esp, eax);
    eax = ebp + -104;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004C88BAu); RECOMP_ABI_CALL(0x004E367Fu, sub_004E367F); /* call 0x004E367F */

loc_004C88BA: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004C88BD: ;
    MEM32(ebp + -108) = MEM32(ebp + -108) + 1;
    _fa = (uint32_t)(MEM32(ebp + -108)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + -108);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -120) = MEM32(ebp + -120) + 4;
    _fa = (uint32_t)(MEM32(ebp + -120)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -112)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -112) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004C8845; /* jb: below (unsigned <) */

loc_004C88D0: ;
    eax = MEM32(ebp + -124);
    edx = MEM32(edi);
    eax = esi + eax * 4 + 0x34;
    ecx = MEM32(eax);
    MEM32(eax) = edx;
    eax = MEM32(ebp + -112);
    MEM32(edi) = ecx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004C8810; /* jb: below (unsigned <) */

loc_004C88EE: ;
    POP32(esp, ebx);

loc_004C88EF: ;
    ecx = MEM32(ebp + 0x98);
    POP32(esp, edi);
    POP32(esp, esi);
    PUSH32(esp, 0x004C88FCu); RECOMP_ABI_CALL(0x005CFF80u, sub_005CFF80); /* call 0x005CFF80 */

loc_004C88FC: ;
    _fb = (uint32_t)(0x9C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x9C;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004C8904
 * Original: 0x004C8904 - 0x004C8928 (36 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C8904(void)
{

loc_004C8904: ;
    edx = MEM32(ecx + 0x20);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 8));
    esi = MEM32(edx);
    PUSH32(esp, 0x004C8913u); RECOMP_ABI_CALL(0x004C1487u, sub_004C1487); /* call 0x004C1487 */

loc_004C8913: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edx;
    { uint32_t _icall_target = MEM32(esi + 0x24); PUSH32(esp, 0x004C8919u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C8916u); } /* indirect call */
    }

loc_004C8919: ;
    PUSH32(esp, eax);
    ecx = 0x90E444;
    PUSH32(esp, 0x004C8924u); RECOMP_ABI_CALL(0x004AFE27u, sub_004AFE27); /* call 0x004AFE27 */

loc_004C8924: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C8928
 * Original: 0x004C8928 - 0x004C896D (69 bytes, 23 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C8928(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C8928: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x866F94);
    PUSH32(esp, 0xA);
    esi = ecx;
    PUSH32(esp, 0x004C8938u); RECOMP_ABI_CALL(0x004C17F2u, sub_004C17F2); /* call 0x004C17F2 */

loc_004C8938: ;
    edi = esi + 0x18;
    ecx = edi;
    PUSH32(esp, 0x004C8942u); RECOMP_ABI_CALL(0x006083F7u, sub_006083F7); /* call 0x006083F7 */

loc_004C8942: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = 0x866F90;
    MEM32(edi) = 0x866F84;
    MEM32(esi + 0x1C) = eax;
    MEM32(esi + 0x20) = eax;
    MEM32(esi + 0x24) = eax;
    ecx = MEM32(0x90E41C);
    MEM32(esi + 0x2C) = eax;
    MEM8(esi + 0x30) = LO8(eax);
    POP32(esp, edi);
    MEM32(esi + 0x28) = ecx;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004C896D
 * Original: 0x004C896D - 0x004C8975 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C896D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C896D: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004CD91A(); return; /* tail jmp 0x004CD91A */

}

/**
 * sub_004C8975
 * Original: 0x004C8975 - 0x004C89D4 (95 bytes, 35 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C8975(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C8975: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x24;
    ecx = MEM32(edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    ebx = esi + 0x18;
    MEM32(esi) = 0x866F90;
    MEM32(ebx) = 0x866F84;
    if (CMP_EQ(_fa, _fb)) goto loc_004C89A0; /* je: equal / zero */

loc_004C8992: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004C8997u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C8994u); } /* indirect call */
    }

loc_004C8997: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x004C89A0u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C89A0: ;
    ecx = MEM32(edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C89AB; /* je: equal / zero */

loc_004C89A6: ;
    PUSH32(esp, 0x004C89ABu); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004C89AB: ;
    ecx = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C89B7; /* je: equal / zero */

loc_004C89B2: ;
    PUSH32(esp, 0x004C89B7u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004C89B7: ;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C89C3; /* je: equal / zero */

loc_004C89BE: ;
    PUSH32(esp, 0x004C89C3u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004C89C3: ;
    ecx = ebx;
    PUSH32(esp, 0x004C89CAu); RECOMP_ABI_CALL(0x00608400u, sub_00608400); /* call 0x00608400 */

loc_004C89CA: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_004C1837(); return; /* tail jmp 0x004C1837 */

}

/**
 * sub_004C89D4
 * Original: 0x004C89D4 - 0x004C8A07 (51 bytes, 16 insns)
 * Category: game_io
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C89D4(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C89D4: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x866FC0);
    PUSH32(esp, MEM32(esp + 0x10));
    esi = ecx;
    PUSH32(esp, 0x004C89E6u); RECOMP_ABI_CALL(0x004C17F2u, sub_004C17F2); /* call 0x004C17F2 */

loc_004C89E6: ;
    edi = esi + 0x18;
    ecx = edi;
    PUSH32(esp, 0x004C89F0u); RECOMP_ABI_CALL(0x00608424u, sub_00608424); /* call 0x00608424 */

loc_004C89F0: ;
    MEM32(edi) = 0x866FB4;
    MEM32(esi) = 0x866FB0;
    MEM32(esi + 0x1C) = MEM32(esi + 0x1C) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C8A07
 * Original: 0x004C8A07 - 0x004C8A0F (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C8A07(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C8A07: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004CD936(); return; /* tail jmp 0x004CD936 */

}

/**
 * sub_004C8A0F
 * Original: 0x004C8A0F - 0x004C8A4A (59 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C8A0F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C8A0F: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = esi + 0x18;
    MEM32(esi) = 0x866FB0;
    MEM32(edi) = 0x866FB4;
    if (CMP_EQ(_fa, _fb)) goto loc_004C8A2E; /* je: equal / zero */

loc_004C8A29: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004C8A2Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C8A2Bu); } /* indirect call */
    }

loc_004C8A2E: ;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C8A3A; /* je: equal / zero */

loc_004C8A35: ;
    PUSH32(esp, 0x004C8A3Au); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004C8A3A: ;
    ecx = edi;
    PUSH32(esp, 0x004C8A41u); RECOMP_ABI_CALL(0x0060842Du, sub_0060842D); /* call 0x0060842D */

loc_004C8A41: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004C1837(); return; /* tail jmp 0x004C1837 */

}

/**
 * sub_004C8A4A
 * Original: 0x004C8A4A - 0x004C8A7E (52 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C8A4A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C8A4A: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x1C;
    ecx = MEM32(edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C8A5C; /* je: equal / zero */

loc_004C8A57: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004C8A5Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C8A59u); } /* indirect call */
    }

loc_004C8A5C: ;
    PUSH32(esp, 0x004C8A61u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004C8A61: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x004C8A68u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C8A65u); } /* indirect call */
    }

loc_004C8A68: ;
    edx = MEM32(eax);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x18;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x004C8A73u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C8A70u); } /* indirect call */
    }

loc_004C8A73: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x004C8A7Bu); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C8A7B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004C8A7E
 * Original: 0x004C8A7E - 0x004C8AA1 (35 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C8A7E(void)
{

loc_004C8A7E: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esi + 4;
    PUSH32(esp, 0x004C8A8Bu); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C8A8B: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x866FE0);
    ecx = esi + -24;
    PUSH32(esp, 0x004C8A9Du); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C8A9D: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C8AA1
 * Original: 0x004C8AA1 - 0x004C8ADB (58 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C8AA1(void)
{

loc_004C8AA1: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esi + 4;
    PUSH32(esp, 0x004C8AAFu); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C8AAF: ;
    PUSH32(esp, 0x004C8AB4u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004C8AB4: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    edi = 0x7B891F;
    PUSH32(esp, edi);
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x80); PUSH32(esp, 0x004C8AC8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C8AC2u); } /* indirect call */
    }

loc_004C8AC8: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x866FF4);
    ecx = esi + -24;
    PUSH32(esp, 0x004C8AD6u); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C8AD6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C8ADB
 * Original: 0x004C8ADB - 0x004C8AEB (16 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C8ADB(void)
{

loc_004C8ADB: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x867008);
    PUSH32(esp, 0x004C8AEAu); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C8AEA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004C8AEB
 * Original: 0x004C8AEB - 0x004C8B7A (143 bytes, 47 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004C8AEB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C8AEB: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8E19F0);
    PUSH32(esp, ebx);
    MEM32(ebp + -4) = eax;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    eax = MEM32(esi + 8);
    eax = MEM32(eax + 4);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = eax + esi + 8;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004C8B12u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C8B10u); } /* indirect call */
    }

loc_004C8B12: ;
    ebx = eax;
    eax = MEM32(esi + 8);
    eax = MEM32(eax + 4);
    ecx = eax + esi + 8;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004C8B23u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C8B20u); } /* indirect call */
    }

loc_004C8B23: ;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x867030);
    eax = ebp + -1028;
    PUSH32(esp, 0x400);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C8B3Bu); RECOMP_ABI_CALL(0x004E3665u, sub_004E3665); /* call 0x004E3665 */

loc_004C8B3B: ;
    eax = ebp + -1028;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C8B47u); RECOMP_ABI_CALL(0x005D0020u, sub_005D0020); /* call 0x005D0020 */

loc_004C8B47: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ebp + -1028;
    PUSH32(esp, eax);
    ecx = edi + 0x1C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C8B59u); RECOMP_ABI_CALL(0x004C0B33u, sub_004C0B33); /* call 0x004C0B33 */

loc_004C8B59: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x86701C);
    ecx = edi + -24;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C8B6Bu); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C8B6B: ;
    ecx = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C8B76u); RECOMP_ABI_CALL(0x005CFF80u, sub_005CFF80); /* call 0x005CFF80 */

loc_004C8B76: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C8B7A
 * Original: 0x004C8B7A - 0x004C8B93 (25 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C8B7A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C8B7A: ;
    _fa = (uint32_t)(MEM32(ecx + 0x44)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x44), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004C8B92; /* jne: not equal / not zero */

loc_004C8B80: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x867038);
    _fb = (uint32_t)(0xFFFFFFE8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFE8u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x004C8B92u); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C8B92: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004C8B93
 * Original: 0x004C8B93 - 0x004C8BB6 (35 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C8B93(void)
{

loc_004C8B93: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esi + 0x40;
    PUSH32(esp, 0x004C8BA0u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C8BA0: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x86704C);
    ecx = esi + -28;
    PUSH32(esp, 0x004C8BB2u); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C8BB2: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C8BB6
 * Original: 0x004C8BB6 - 0x004C8BFB (69 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C8BB6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C8BB6: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x004C8BC1u); RECOMP_ABI_CALL(0x004C154Cu, sub_004C154C); /* call 0x004C154C */

loc_004C8BC1: ;
    edi = esi + 0x68;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), ebx (32-bit) */
    ebp = eax;
    if (CMP_NE(_fa, _fb)) goto loc_004C8BF6; /* jne: not equal / not zero */

loc_004C8BCC: ;
    MEM8(esi + 0x6C) = LO8(ebx);
    PUSH32(esp, 0x004C8BD4u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004C8BD4: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x004C8BDBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C8BD8u); } /* indirect call */
    }

loc_004C8BDB: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x24;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x004C8BEEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C8BEBu); } /* indirect call */
    }

loc_004C8BEE: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x004C8BF6u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C8BF6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_004C8BFB
 * Original: 0x004C8BFB - 0x004C8C97 (156 bytes, 58 insns)
 * Category: game_ui
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C8BFB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C8BFB: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x40);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_004C8C68; /* je: equal / zero */

loc_004C8C0E: ;
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x14), ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004C8C68; /* jbe: below or equal (unsigned <=) */

loc_004C8C13: ;
    PUSH32(esp, MEM32(esi + 0x3C));
    ecx = eax + 8;
    PUSH32(esp, 0x004C8C1Eu); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004C8C1E: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x004C8C25u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C8C22u); } /* indirect call */
    }

loc_004C8C25: ;
    edi = MEM32(ebp + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esp + 0x18) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_004C8C4B; /* jbe: below or equal (unsigned <=) */

loc_004C8C30: ;
    PUSH32(esp, ebx);
    ecx = ebp + 8;
    PUSH32(esp, 0x004C8C39u); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004C8C39: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x004C8C40u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C8C3Du); } /* indirect call */
    }

loc_004C8C40: ;
    _fa = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x18), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C8C68; /* je: equal / zero */

loc_004C8C46: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004C8C30; /* jb: below (unsigned <) */

loc_004C8C4B: ;
    _fa = (uint32_t)(MEM32(esi + 0x3C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x3C), edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004C8C54; /* jb: below (unsigned <) */

loc_004C8C50: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x3C) = edi;

loc_004C8C54: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x867078);
    ecx = esi + -36;
    PUSH32(esp, 0x004C8C66u); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C8C66: ;
    goto loc_004C8C6B;

loc_004C8C68: ;
    MEM32(esi + 0x3C) = ebx;

loc_004C8C6B: ;
    PUSH32(esp, ebp);
    ecx = esi + 0x40;
    PUSH32(esp, 0x004C8C74u); RECOMP_ABI_CALL(0x004C2DE0u, sub_004C2DE0); /* call 0x004C2DE0 */

loc_004C8C74: ;
    PUSH32(esp, 0);
    ecx = esi + 0x44;
    PUSH32(esp, 0x004C8C7Eu); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C8C7E: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x867064);
    ecx = esi + -36;
    PUSH32(esp, 0x004C8C90u); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C8C90: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C8C97
 * Original: 0x004C8C97 - 0x004C8CB7 (32 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C8C97(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C8C97: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esi + 0x44;
    PUSH32(esp, 0x004C8CA4u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C8CA4: ;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xC), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C8CB3; /* je: equal / zero */

loc_004C8CAB: ;
    ecx = esi + -36;
    PUSH32(esp, 0x004C8CB3u); RECOMP_ABI_CALL(0x004C8BB6u, sub_004C8BB6); /* call 0x004C8BB6 */

loc_004C8CB3: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C8CB7
 * Original: 0x004C8CB7 - 0x004C8CD8 (33 bytes, 11 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C8CB7(void)
{

loc_004C8CB7: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esi + 0x48;
    PUSH32(esp, 0x004C8CC4u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C8CC4: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x86709C);
    ecx = esi + -40;
    PUSH32(esp, 0x004C8CD6u); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C8CD6: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004C8CD8
 * Original: 0x004C8CD8 - 0x004C8D15 (61 bytes, 20 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C8CD8(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C8CD8: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esi + 0x48;
    PUSH32(esp, 0x004C8CE5u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C8CE5: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x7B891F);
    ecx = esi + -40;
    if ((_fa == 0)) goto loc_004C8D07; /* je: equal / zero */

loc_004C8CF6: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_004C8D00; /* je: equal / zero */

loc_004C8CF9: ;
    PUSH32(esp, 0x8670F0);
    goto loc_004C8D0C;

loc_004C8D00: ;
    PUSH32(esp, 0x8670D4);
    goto loc_004C8D0C;

loc_004C8D07: ;
    PUSH32(esp, 0x8670AC);

loc_004C8D0C: ;
    PUSH32(esp, 0x004C8D11u); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C8D11: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C8D15
 * Original: 0x004C8D15 - 0x004C8D97 (130 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004C8D15(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004C8D15: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C8D22u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004C8D22: ;
    _fa = (uint32_t)(MEM8(esi + 0x74)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x74), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_004C8D93; /* je: equal / zero */

loc_004C8D2A: ;
    MEM8(esi + 0x74) = 0;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x30); PUSH32(esp, 0x004C8D35u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C8D32u); } /* indirect call */
    }

loc_004C8D35: ;
    edx = MEM32(eax);
    ecx = esi + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x004C8D40u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C8D3Du); } /* indirect call */
    }

loc_004C8D40: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x004C8D47u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C8D44u); } /* indirect call */
    }

loc_004C8D47: ;
    ecx = esi + 0x2C;
    MEM32(ebp + -4) = ecx;
    ecx = ebp + -4;
    PUSH32(esp, ecx);
    ecx = eax + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C8D59u); RECOMP_ABI_CALL(0x004DD8B2u, sub_004DD8B2); /* call 0x004DD8B2 */

loc_004C8D59: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x004C8D60u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C8D5Du); } /* indirect call */
    }

loc_004C8D60: ;
    ecx = esi + 0x30;
    MEM32(ebp + -4) = ecx;
    ecx = ebp + -4;
    PUSH32(esp, ecx);
    ecx = eax + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C8D72u); RECOMP_ABI_CALL(0x004DD8B2u, sub_004DD8B2); /* call 0x004DD8B2 */

loc_004C8D72: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x004C8D79u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C8D76u); } /* indirect call */
    }

loc_004C8D79: ;
    ecx = ebp + -4;
    PUSH32(esp, ecx);
    ecx = eax;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x18)) >> 32) & 1);
    esi = esi + 0x18;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x40)) >> 32) & 1);
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -4) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C8D93u); RECOMP_ABI_CALL(0x004DD8B2u, sub_004DD8B2); /* call 0x004DD8B2 */

loc_004C8D93: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004C8D97
 * Original: 0x004C8D97 - 0x004C8F13 (380 bytes, 123 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004C8D97(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004C8D97: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x867180);
    PUSH32(esp, MEM32(ebp + 8));
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C8DADu); RECOMP_ABI_CALL(0x004C17F2u, sub_004C17F2); /* call 0x004C17F2 */

loc_004C8DAD: ;
    edi = esi + 0x18;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C8DB7u); RECOMP_ABI_CALL(0x00608451u, sub_00608451); /* call 0x00608451 */

loc_004C8DB7: ;
    ebx = esi + 0x1C;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C8DC1u); RECOMP_ABI_CALL(0x0060837Fu, sub_0060837F); /* call 0x0060837F */

loc_004C8DC1: ;
    ecx = esi + 0x20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C8DC9u); RECOMP_ABI_CALL(0x004E36E1u, sub_004E36E1); /* call 0x004E36E1 */

loc_004C8DC9: ;
    ecx = esi + 0x24;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C8DD1u); RECOMP_ABI_CALL(0x00608163u, sub_00608163); /* call 0x00608163 */

loc_004C8DD1: ;
    ecx = esi + 0x28;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C8DD9u); RECOMP_ABI_CALL(0x00608136u, sub_00608136); /* call 0x00608136 */

loc_004C8DD9: ;
    ecx = esi + 0x2C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C8DE1u); RECOMP_ABI_CALL(0x00608217u, sub_00608217); /* call 0x00608217 */

loc_004C8DE1: ;
    ecx = esi + 0x30;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C8DE9u); RECOMP_ABI_CALL(0x00608244u, sub_00608244); /* call 0x00608244 */

loc_004C8DE9: ;
    PUSH32(esp, 0x400);
    ecx = esi + 0x34;
    MEM32(esi) = 0x867178;
    MEM32(edi) = 0x867168;
    MEM32(ebx) = 0x86715C;
    MEM32(esi + 0x20) = 0x86713C;
    MEM32(esi + 0x24) = 0x867130;
    MEM32(esi + 0x28) = 0x867124;
    MEM32(esi + 0x2C) = 0x86711C;
    MEM32(esi + 0x30) = 0x867108;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C8E2Bu); RECOMP_ABI_CALL(0x004C0A82u, sub_004C0A82); /* call 0x004C0A82 */

loc_004C8E2B: ;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x44) = ebx;
    MEM32(esi + 0x4C) = ebx;
    MEM32(esi + 0x50) = ebx;
    MEM8(esi + 0x54) = LO8(ebx);
    MEM32(esi + 0x58) = ebx;
    MEM32(esi + 0x5C) = ebx;
    MEM32(esi + 0x60) = ebx;
    MEM32(esi + 0x64) = ebx;
    MEM32(esi + 0x68) = ebx;
    MEM8(esi + 0x6C) = 1;
    MEM32(esi + 0x70) = ebx;
    MEM8(esi + 0x74) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C8E58u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004C8E58: ;
    edi = eax;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x004C8E61u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C8E5Eu); } /* indirect call */
    }

loc_004C8E61: ;
    ecx = ebp + 8;
    PUSH32(esp, ecx);
    ecx = eax;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x40)) >> 32) & 1);
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    edx = esi + 0x18;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + 8) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C8E7Bu); RECOMP_ABI_CALL(0x004DD750u, sub_004DD750); /* call 0x004DD750 */

loc_004C8E7B: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x30); PUSH32(esp, 0x004C8E82u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C8E7Fu); } /* indirect call */
    }

loc_004C8E82: ;
    ecx = esi;
    MEM32(ebp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C8E8Cu); RECOMP_ABI_CALL(0x004C154Cu, sub_004C154C); /* call 0x004C154C */

loc_004C8E8C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004C8EA7; /* je: equal / zero */

loc_004C8E90: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C8E97u); RECOMP_ABI_CALL(0x004C154Cu, sub_004C154C); /* call 0x004C154C */

loc_004C8E97: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x004C8E9Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C8E9Bu); } /* indirect call */
    }

loc_004C8E9E: ;
    PUSH32(esp, eax);
    ecx = esi + 0x58;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C8EA7u); RECOMP_ABI_CALL(0x004C2C72u, sub_004C2C72); /* call 0x004C2C72 */

loc_004C8EA7: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x004C8EAEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C8EABu); } /* indirect call */
    }

loc_004C8EAE: ;
    MEM32(ebp + -4) = eax;
    eax = MEM32(esi + 0x58);
    MEM32(esi + 0x50) = ebx;
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x14), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, ebx);
    if (CMP_BE(_fa, _fb)) goto loc_004C8EC6; /* jbe: below or equal (unsigned <=) */

loc_004C8EBD: ;
    ecx = eax + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C8EC5u); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004C8EC5: ;
    PUSH32(esp, eax);

loc_004C8EC6: ;
    ecx = esi + 0x4C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C8ECEu); RECOMP_ABI_CALL(0x004AFE27u, sub_004AFE27); /* call 0x004AFE27 */

loc_004C8ECE: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x004C8ED5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C8ED2u); } /* indirect call */
    }

loc_004C8ED5: ;
    ecx = MEM32(ebp + 8);
    edx = MEM32(ecx);
    edi = eax;
    eax = esi + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x004C8EE3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C8EE0u); } /* indirect call */
    }

loc_004C8EE3: ;
    ecx = MEM32(ebp + -4);
    eax = esi + 0x2C;
    MEM32(ebp + 8) = eax;
    eax = ebp + 8;
    PUSH32(esp, eax);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(8)) >> 32) & 1);
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C8EF8u); RECOMP_ABI_CALL(0x004DD750u, sub_004DD750); /* call 0x004DD750 */

loc_004C8EF8: ;
    eax = esi + 0x30;
    MEM32(ebp + 8) = eax;
    eax = ebp + 8;
    PUSH32(esp, eax);
    ecx = edi + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C8F0Au); RECOMP_ABI_CALL(0x004DD750u, sub_004DD750); /* call 0x004DD750 */

loc_004C8F0A: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C8F13
 * Original: 0x004C8F13 - 0x004C8F1A (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C8F13(void)
{

loc_004C8F13: ;
    MEM8(ecx + 0x4C) = 1;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C8F1A
 * Original: 0x004C8F1A - 0x004C8F21 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C8F1A(void)
{

loc_004C8F1A: ;
    MEM8(ecx + 0x4C) = 1;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C8F21
 * Original: 0x004C8F21 - 0x004C8F28 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C8F21(void)
{

loc_004C8F21: ;
    MEM8(ecx + 0x4C) = 1;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C8F28
 * Original: 0x004C8F28 - 0x004C8F2B (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C8F28(void)
{

loc_004C8F28: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C8F2B
 * Original: 0x004C8F2B - 0x004C8F2E (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C8F2B(void)
{

loc_004C8F2B: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C8F2E
 * Original: 0x004C8F2E - 0x004C8F31 (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C8F2E(void)
{

loc_004C8F2E: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C8F31
 * Original: 0x004C8F31 - 0x004C8F34 (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C8F31(void)
{

loc_004C8F31: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C8F34
 * Original: 0x004C8F34 - 0x004C8F35 (1 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C8F34(void)
{

loc_004C8F34: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004C8F35
 * Original: 0x004C8F35 - 0x004C8F38 (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C8F35(void)
{

loc_004C8F35: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C8F38
 * Original: 0x004C8F38 - 0x004C8F39 (1 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C8F38(void)
{

loc_004C8F38: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004C8F39
 * Original: 0x004C8F39 - 0x004C8F41 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C8F39(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C8F39: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004CD97E(); return; /* tail jmp 0x004CD97E */

}

/**
 * sub_004C8F41
 * Original: 0x004C8F41 - 0x004C8F49 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C8F41(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C8F41: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004CD97E(); return; /* tail jmp 0x004CD97E */

}

/**
 * sub_004C8F49
 * Original: 0x004C8F49 - 0x004C8F51 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C8F49(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C8F49: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004CD97E(); return; /* tail jmp 0x004CD97E */

}

/**
 * sub_004C8F51
 * Original: 0x004C8F51 - 0x004C8F59 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C8F51(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C8F51: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x24;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004CD97E(); return; /* tail jmp 0x004CD97E */

}

/**
 * sub_004C8F59
 * Original: 0x004C8F59 - 0x004C8F61 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C8F59(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C8F59: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x28;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004CD97E(); return; /* tail jmp 0x004CD97E */

}

/**
 * sub_004C8F61
 * Original: 0x004C8F61 - 0x004C8F69 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C8F61(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C8F61: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x2C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004CD97E(); return; /* tail jmp 0x004CD97E */

}

/**
 * sub_004C8F69
 * Original: 0x004C8F69 - 0x004C8F71 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C8F69(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C8F69: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004CD97E(); return; /* tail jmp 0x004CD97E */

}

/**
 * sub_004C8F71
 * Original: 0x004C8F71 - 0x004C9075 (260 bytes, 78 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C8F71(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C8F71: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x5C;
    ecx = MEM32(edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    ebx = esi + 0x18;
    MEM32(esi) = 0x867178;
    MEM32(ebx) = 0x867168;
    MEM32(esi + 0x1C) = 0x86715C;
    MEM32(esi + 0x20) = 0x86713C;
    MEM32(esi + 0x24) = 0x867130;
    MEM32(esi + 0x28) = 0x867124;
    MEM32(esi + 0x2C) = 0x86711C;
    MEM32(esi + 0x30) = 0x867108;
    if (CMP_EQ(_fa, _fb)) goto loc_004C8FC6; /* je: equal / zero */

loc_004C8FB8: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004C8FBDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C8FBAu); } /* indirect call */
    }

loc_004C8FBD: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x004C8FC6u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C8FC6: ;
    ecx = MEM32(esi + 0x68);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C8FDC; /* je: equal / zero */

loc_004C8FCD: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004C8FD2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C8FCFu); } /* indirect call */
    }

loc_004C8FD2: ;
    PUSH32(esp, 0);
    ecx = esi + 0x68;
    PUSH32(esp, 0x004C8FDCu); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C8FDC: ;
    ecx = esi;
    PUSH32(esp, 0x004C8FE3u); RECOMP_ABI_CALL(0x004C8D15u, sub_004C8D15); /* call 0x004C8D15 */

loc_004C8FE3: ;
    ecx = MEM32(esi + 0x70);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C8FEF; /* je: equal / zero */

loc_004C8FEA: ;
    PUSH32(esp, 0x004C8FEFu); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004C8FEF: ;
    ecx = MEM32(esi + 0x68);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C8FFB; /* je: equal / zero */

loc_004C8FF6: ;
    PUSH32(esp, 0x004C8FFBu); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004C8FFB: ;
    ecx = MEM32(esi + 0x64);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C9007; /* je: equal / zero */

loc_004C9002: ;
    PUSH32(esp, 0x004C9007u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004C9007: ;
    edi = MEM32(edi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C9014; /* je: equal / zero */

loc_004C900D: ;
    ecx = edi;
    PUSH32(esp, 0x004C9014u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004C9014: ;
    ecx = MEM32(esi + 0x58);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C9020; /* je: equal / zero */

loc_004C901B: ;
    PUSH32(esp, 0x004C9020u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004C9020: ;
    ecx = MEM32(esi + 0x4C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C902C; /* je: equal / zero */

loc_004C9027: ;
    PUSH32(esp, 0x004C902Cu); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004C902C: ;
    ecx = esi + 0x34;
    PUSH32(esp, 0x004C9034u); RECOMP_ABI_CALL(0x004C0AB9u, sub_004C0AB9); /* call 0x004C0AB9 */

loc_004C9034: ;
    ecx = esi + 0x30;
    PUSH32(esp, 0x004C903Cu); RECOMP_ABI_CALL(0x0060824Du, sub_0060824D); /* call 0x0060824D */

loc_004C903C: ;
    ecx = esi + 0x2C;
    PUSH32(esp, 0x004C9044u); RECOMP_ABI_CALL(0x00608220u, sub_00608220); /* call 0x00608220 */

loc_004C9044: ;
    ecx = esi + 0x28;
    PUSH32(esp, 0x004C904Cu); RECOMP_ABI_CALL(0x0060813Fu, sub_0060813F); /* call 0x0060813F */

loc_004C904C: ;
    ecx = esi + 0x24;
    PUSH32(esp, 0x004C9054u); RECOMP_ABI_CALL(0x0060816Cu, sub_0060816C); /* call 0x0060816C */

loc_004C9054: ;
    ecx = esi + 0x20;
    PUSH32(esp, 0x004C905Cu); RECOMP_ABI_CALL(0x004E36EAu, sub_004E36EA); /* call 0x004E36EA */

loc_004C905C: ;
    ecx = esi + 0x1C;
    PUSH32(esp, 0x004C9064u); RECOMP_ABI_CALL(0x00608388u, sub_00608388); /* call 0x00608388 */

loc_004C9064: ;
    ecx = ebx;
    PUSH32(esp, 0x004C906Bu); RECOMP_ABI_CALL(0x0060845Au, sub_0060845A); /* call 0x0060845A */

loc_004C906B: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_004C1837(); return; /* tail jmp 0x004C1837 */

}

/**
 * sub_004C9075
 * Original: 0x004C9075 - 0x004C909B (38 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C9075(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C9075: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004C907Du); RECOMP_ABI_CALL(0x004C154Cu, sub_004C154C); /* call 0x004C154C */

loc_004C907D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esi + 0x54) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_004C9099; /* je: equal / zero */

loc_004C9085: ;
    edx = MEM32(eax);
    ecx = esi + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x004C9090u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C908Du); } /* indirect call */
    }

loc_004C9090: ;
    PUSH32(esp, eax);
    ecx = esi + 0x5C;
    PUSH32(esp, 0x004C9099u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C9099: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004C909B
 * Original: 0x004C909B - 0x004C90BB (32 bytes, 10 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C909B(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C909B: ;
    PUSH32(esp, 0x004C90A0u); RECOMP_ABI_CALL(0x004C154Cu, sub_004C154C); /* call 0x004C154C */

loc_004C90A0: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x004C90A7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C90A4u); } /* indirect call */
    }

loc_004C90A7: ;
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x004C90B5u); RECOMP_ABI_CALL(0x004E367Fu, sub_004E367F); /* call 0x004E367F */

loc_004C90B5: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C90BB
 * Original: 0x004C90BB - 0x004C90D5 (26 bytes, 10 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C90BB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C90BB: ;
    PUSH32(esp, 0x004C90C0u); RECOMP_ABI_CALL(0x004C154Cu, sub_004C154C); /* call 0x004C154C */

loc_004C90C0: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x004C90C7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C90C4u); } /* indirect call */
    }

loc_004C90C7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C90D2; /* je: equal / zero */

loc_004C90CB: ;
    edx = MEM32(eax);
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x24)); return; /* indirect tail jmp */

loc_004C90D2: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C90D5
 * Original: 0x004C90D5 - 0x004C90EA (21 bytes, 7 insns)
 * Category: game_ui
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C90D5(void)
{

loc_004C90D5: ;
    PUSH32(esp, 0x004C90DAu); RECOMP_ABI_CALL(0x004C154Cu, sub_004C154C); /* call 0x004C154C */

loc_004C90DA: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esp + 8));
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x004C90E7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C90E4u); } /* indirect call */
    }

loc_004C90E7: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C9140
 * Original: 0x004C9140 - 0x004C9180 (64 bytes, 27 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C9140(void)
{

loc_004C9140: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x64);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0x60));
    ecx = eax + 8;
    PUSH32(esp, 0x004C9153u); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004C9153: ;
    edi = eax;
    PUSH32(esp, 0x004C915Au); RECOMP_ABI_CALL(0x004DC981u, sub_004DC981); /* call 0x004DC981 */

loc_004C915A: ;
    edx = MEM32(eax);
    ebx = MEM32(edi);
    ecx = esi + 0x28;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004C9167u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C9164u); } /* indirect call */
    }

loc_004C9167: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0x18));
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebx + 0x3C); PUSH32(esp, 0x004C9171u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C916Eu); } /* indirect call */
    }

loc_004C9171: ;
    PUSH32(esp, eax);
    ecx = esi + 0x70;
    PUSH32(esp, 0x004C917Au); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C917A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C91A5
 * Original: 0x004C91A5 - 0x004C9265 (192 bytes, 77 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004C91A5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C91A5: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C91B5u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004C91B5: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x004C91BCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C91B9u); } /* indirect call */
    }

loc_004C91BC: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C91C3u); RECOMP_ABI_CALL(0x004C154Cu, sub_004C154C); /* call 0x004C154C */

loc_004C91C3: ;
    edx = MEM32(eax);
    ecx = eax;
    edi = esi + 0x58;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x004C91CDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C91CAu); } /* indirect call */
    }

loc_004C91CD: ;
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C91D5u); RECOMP_ABI_CALL(0x004C2C72u, sub_004C2C72); /* call 0x004C2C72 */

loc_004C91D5: ;
    eax = MEM32(edi);
    eax = MEM32(eax + 0x14);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(ebp + -12) = eax;
    MEM8(ebp + -1) = 0;
    if (CMP_BE(_fa, _fb)) goto loc_004C9254; /* jbe: below or equal (unsigned <=) */

loc_004C91E7: ;
    ebx = esi + 0x4C;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C9239; /* je: equal / zero */

loc_004C91EE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(ebp + -8) = ecx;
    if (CMP_BE(_fa, _fb)) goto loc_004C9239; /* jbe: below or equal (unsigned <=) */

loc_004C91F5: ;
    eax = MEM32(edi);
    PUSH32(esp, MEM32(ebp + -8));
    ecx = eax + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C9202u); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004C9202: ;
    ecx = MEM32(ebx);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEM32(ebp + -16) = eax;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x004C920Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C920Au); } /* indirect call */
    }

loc_004C920D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C9225; /* je: equal / zero */

loc_004C9211: ;
    PUSH32(esp, MEM32(ebp + -16));
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C921Bu); RECOMP_ABI_CALL(0x004AFE27u, sub_004AFE27); /* call 0x004AFE27 */

loc_004C921B: ;
    eax = MEM32(ebp + -8);
    MEM32(esi + 0x50) = eax;
    MEM8(ebp + -1) = 1;

loc_004C9225: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) + 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -12) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004C91F5; /* jb: below (unsigned <) */

loc_004C9230: ;
    _fa = (uint32_t)(MEM8(ebp + -1)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -1), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004C9260; /* jne: not equal / not zero */

loc_004C9236: ;
    eax = MEM32(ebp + -12);

loc_004C9239: ;
    _fa = (uint32_t)(MEM32(esi + 0x50)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x50), eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004C9242; /* jb: below (unsigned <) */

loc_004C923E: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x50) = eax;

loc_004C9242: ;
    edi = MEM32(edi);
    PUSH32(esp, MEM32(esi + 0x50));
    ecx = edi + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C924Fu); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004C924F: ;
    PUSH32(esp, eax);
    ecx = ebx;
    goto loc_004C925B;

loc_004C9254: ;
    MEM32(esi + 0x50) = ecx;
    PUSH32(esp, ecx);
    ecx = esi + 0x4C;

loc_004C925B: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C9260u); RECOMP_ABI_CALL(0x004AFE27u, sub_004AFE27); /* call 0x004AFE27 */

loc_004C9260: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004C9265
 * Original: 0x004C9265 - 0x004C92C0 (91 bytes, 42 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004C9265(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C9265: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    eax = MEM32(edi + 0x14);
    MEM32(ebp + 8) = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004C927Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C927Bu); } /* indirect call */
    }

loc_004C927E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C92B2; /* je: equal / zero */

loc_004C9282: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004C92B2; /* jbe: below or equal (unsigned <=) */

loc_004C9289: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0xC) = edi;

loc_004C928F: ;
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C9298u); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004C9298: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x004C929Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C929Cu); } /* indirect call */
    }

loc_004C929F: ;
    edi = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004C92A8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C92A5u); } /* indirect call */
    }

loc_004C92A8: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C92BC; /* je: equal / zero */

loc_004C92AC: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ebp + 8) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004C928F; /* jb: below (unsigned <) */

loc_004C92B2: ;
    eax = MEM32(ebp + 8);

loc_004C92B5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_004C92BC: ;
    eax = ebx;
    goto loc_004C92B5;

}

/**
 * sub_004C92C0
 * Original: 0x004C92C0 - 0x004C92D9 (25 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C92C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C92C0: ;
    eax = MEM32(ecx + 0x2C);
    edx = MEM32(esp + 4);
    eax = MEM32(eax + edx * 4);
    ecx = MEM32(ecx + 0x24);
    PUSH32(esp, eax);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x004C92D6u); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004C92D6: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C92D9
 * Original: 0x004C92D9 - 0x004C92F8 (31 bytes, 9 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C92D9(void)
{

loc_004C92D9: ;
    eax = MEM32(ecx + 0x2C);
    edx = MEM32(esp + 4);
    ecx = MEM32(ecx + 0x28);
    eax = MEM32(eax + edx * 4);
    eax = MEM32(ecx + eax * 4);
    PUSH32(esp, MEM32(esp + 8));
    ecx = eax + 8;
    PUSH32(esp, 0x004C92F5u); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004C92F5: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C92F8
 * Original: 0x004C92F8 - 0x004C9354 (92 bytes, 33 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C92F8(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C92F8: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x2C);
    ecx = MEM32(esp + 0xC);
    eax = MEM32(eax + ecx * 4);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(esi + 0x28);
    { uint32_t _sv=(uint32_t)(edi), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        edi = _sv << _sc;
        _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ebx = MEM32(edi + eax);
    eax = MEM32(esi + 0x30);
    PUSH32(esp, MEM32(edi + eax));
    ecx = esi;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x004C9320u); RECOMP_ABI_CALL(0x004C9265u, sub_004C9265); /* call 0x004C9265 */

loc_004C9320: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0x14) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C934E; /* je: equal / zero */

loc_004C9326: ;
    PUSH32(esp, MEM32(esp + 0x14));
    ecx = ebx + 8;
    PUSH32(esp, 0x004C9332u); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004C9332: ;
    ecx = MEM32(esi + 0x30);
    PUSH32(esp, eax);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x004C933Du); RECOMP_ABI_CALL(0x004C2EA0u, sub_004C2EA0); /* call 0x004C2EA0 */

loc_004C933D: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x8669C4);
    ecx = esi;
    PUSH32(esp, 0x004C934Eu); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C934E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C9354
 * Original: 0x004C9354 - 0x004C93A3 (79 bytes, 34 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C9354(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C9354: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 2 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_004C9385; /* je: equal / zero */

loc_004C9361: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x4C2E4F);
    edi = esi + -4;
    PUSH32(esp, MEM32(edi));
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004C9374u); RECOMP_ABI_CALL(0x00029295u, sub_00029295); /* call 0x00029295 */

loc_004C9374: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004C9380; /* je: equal / zero */

loc_004C9379: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x004C937Fu); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_004C937F: ;
    POP32(esp, ecx);

loc_004C9380: ;
    eax = edi;
    POP32(esp, edi);
    goto loc_004C939E;

loc_004C9385: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C9390; /* je: equal / zero */

loc_004C938B: ;
    PUSH32(esp, 0x004C9390u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004C9390: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004C939C; /* je: equal / zero */

loc_004C9395: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004C939Bu); RECOMP_ABI_CALL(0x004C320Au, sub_004C320A); /* call 0x004C320A */

loc_004C939B: ;
    POP32(esp, ecx);

loc_004C939C: ;
    eax = esi;

loc_004C939E: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C93A3
 * Original: 0x004C93A3 - 0x004C93F2 (79 bytes, 34 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C93A3(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C93A3: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 2 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_004C93D4; /* je: equal / zero */

loc_004C93B0: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x4C2E8E);
    edi = esi + -4;
    PUSH32(esp, MEM32(edi));
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004C93C3u); RECOMP_ABI_CALL(0x00029295u, sub_00029295); /* call 0x00029295 */

loc_004C93C3: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004C93CF; /* je: equal / zero */

loc_004C93C8: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x004C93CEu); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_004C93CE: ;
    POP32(esp, ecx);

loc_004C93CF: ;
    eax = edi;
    POP32(esp, edi);
    goto loc_004C93ED;

loc_004C93D4: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C93DF; /* je: equal / zero */

loc_004C93DA: ;
    PUSH32(esp, 0x004C93DFu); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004C93DF: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004C93EB; /* je: equal / zero */

loc_004C93E4: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004C93EAu); RECOMP_ABI_CALL(0x004C321Bu, sub_004C321B); /* call 0x004C321B */

loc_004C93EA: ;
    POP32(esp, ecx);

loc_004C93EB: ;
    eax = esi;

loc_004C93ED: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C93F2
 * Original: 0x004C93F2 - 0x004C94D3 (225 bytes, 80 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004C93F2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004C93F2: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ebx = esi + 0x18;
    PUSH32(esp, edi);
    MEM32(esi) = 0x8671C0;
    MEM32(ebx) = 0x8671B4;
    MEM32(esi + 0x1C) = 0x8671A8;
    MEM32(esi + 0x20) = 0x8671A0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C941Du); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004C941D: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x004C9424u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C9421u); } /* indirect call */
    }

loc_004C9424: ;
    ecx = MEM32(esi + 0x3C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_004C943C; /* je: equal / zero */

loc_004C942D: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004C9432u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C942Fu); } /* indirect call */
    }

loc_004C9432: ;
    PUSH32(esp, 0);
    ecx = esi + 0x3C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C943Cu); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C943C: ;
    eax = esi + 0x20;
    MEM32(ebp + -4) = eax;
    eax = ebp + -4;
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
    PUSH32(esp, 0x004C9456u); RECOMP_ABI_CALL(0x004DD8B2u, sub_004DD8B2); /* call 0x004DD8B2 */

loc_004C9456: ;
    ecx = edi;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0x24)) >> 32) & 1);
    edi = edi + 0x24;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = ebp + -4;
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    PUSH32(esp, eax);
    _cf = 0; /* logical op clears CF */
    ecx = ecx & edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -4) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C946Du); RECOMP_ABI_CALL(0x004DD8B2u, sub_004DD8B2); /* call 0x004DD8B2 */

loc_004C946D: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C9472u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004C9472: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi + 0x2C));
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004C947Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C9479u); } /* indirect call */
    }

loc_004C947C: ;
    ecx = MEM32(esi + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004C948A; /* je: equal / zero */

loc_004C9483: ;
    PUSH32(esp, 3);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C948Au); RECOMP_ABI_CALL(0x004C93A3u, sub_004C93A3); /* call 0x004C93A3 */

loc_004C948A: ;
    ecx = MEM32(esi + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004C9498; /* je: equal / zero */

loc_004C9491: ;
    PUSH32(esp, 3);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C9498u); RECOMP_ABI_CALL(0x004C9354u, sub_004C9354); /* call 0x004C9354 */

loc_004C9498: ;
    ecx = MEM32(esi + 0x3C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004C94A4; /* je: equal / zero */

loc_004C949F: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C94A4u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004C94A4: ;
    ecx = MEM32(esi + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004C94B0; /* je: equal / zero */

loc_004C94AB: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C94B0u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004C94B0: ;
    ecx = esi + 0x20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C94B8u); RECOMP_ABI_CALL(0x006084B4u, sub_006084B4); /* call 0x006084B4 */

loc_004C94B8: ;
    ecx = esi + 0x1C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C94C0u); RECOMP_ABI_CALL(0x0060842Du, sub_0060842D); /* call 0x0060842D */

loc_004C94C0: ;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C94C7u); RECOMP_ABI_CALL(0x00608487u, sub_00608487); /* call 0x00608487 */

loc_004C94C7: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C94CEu); RECOMP_ABI_CALL(0x004C1837u, sub_004C1837); /* call 0x004C1837 */

loc_004C94CE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004C94D3
 * Original: 0x004C94D3 - 0x004C94DB (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C94D3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C94D3: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004CDD70(); return; /* tail jmp 0x004CDD70 */

}

/**
 * sub_004C94DB
 * Original: 0x004C94DB - 0x004C94E3 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C94DB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C94DB: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004CDD70(); return; /* tail jmp 0x004CDD70 */

}

/**
 * sub_004C94E3
 * Original: 0x004C94E3 - 0x004C94EB (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C94E3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C94E3: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004CDD70(); return; /* tail jmp 0x004CDD70 */

}

/**
 * sub_004C94EB
 * Original: 0x004C94EB - 0x004C950F (36 bytes, 11 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C94EB(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C94EB: ;
    PUSH32(esp, MEM32(esp + 4));
    PUSH32(esp, 0x004C94F4u); RECOMP_ABI_CALL(0x004C92C0u, sub_004C92C0); /* call 0x004C92C0 */

loc_004C94F4: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 0xC));
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x004C94FFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C94FCu); } /* indirect call */
    }

loc_004C94FF: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x004C9509u); RECOMP_ABI_CALL(0x004E367Fu, sub_004E367F); /* call 0x004E367F */

loc_004C9509: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004C950F
 * Original: 0x004C950F - 0x004C9537 (40 bytes, 12 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C950F(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C950F: ;
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0x004C951Cu); RECOMP_ABI_CALL(0x004C92D9u, sub_004C92D9); /* call 0x004C92D9 */

loc_004C951C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 0x10));
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x004C9527u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C9524u); } /* indirect call */
    }

loc_004C9527: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, 0x004C9531u); RECOMP_ABI_CALL(0x004E367Fu, sub_004E367F); /* call 0x004E367F */

loc_004C9531: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_004C9537
 * Original: 0x004C9537 - 0x004C9562 (43 bytes, 15 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C9537(void)
{

loc_004C9537: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0xC));
    esi = ecx;
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x004C9547u); RECOMP_ABI_CALL(0x004C92D9u, sub_004C92D9); /* call 0x004C92D9 */

loc_004C9547: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 0x14));
    edx = MEM32(eax);
    PUSH32(esp, MEM32(esp + 0x14));
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x004C9556u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C9553u); } /* indirect call */
    }

loc_004C9556: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x004C955Eu); RECOMP_ABI_CALL(0x004C18C2u, sub_004C18C2); /* call 0x004C18C2 */

loc_004C955E: ;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_004C9562
 * Original: 0x004C9562 - 0x004C9586 (36 bytes, 11 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C9562(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C9562: ;
    PUSH32(esp, MEM32(esp + 4));
    PUSH32(esp, 0x004C956Bu); RECOMP_ABI_CALL(0x004C92C0u, sub_004C92C0); /* call 0x004C92C0 */

loc_004C956B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 0xC));
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x004C9576u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C9573u); } /* indirect call */
    }

loc_004C9576: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x004C9580u); RECOMP_ABI_CALL(0x004E367Fu, sub_004E367F); /* call 0x004E367F */

loc_004C9580: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004C9586
 * Original: 0x004C9586 - 0x004C961D (151 bytes, 53 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004C9586(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C9586: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 0xC));
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, MEM32(ebp + 8));
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C959Eu); RECOMP_ABI_CALL(0x004C92D9u, sub_004C92D9); /* call 0x004C92D9 */

loc_004C959E: ;
    edx = MEM32(eax);
    ecx = ebp + -4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebp + -8;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x004C95ADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C95AAu); } /* indirect call */
    }

loc_004C95AD: ;
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004C95F6; /* jbe: below or equal (unsigned <=) */

loc_004C95B4: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004C95EE; /* jbe: below or equal (unsigned <=) */

loc_004C95BA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004C95D5; /* jne: not equal / not zero */

loc_004C95BF: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x7E0D78);

loc_004C95C5: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C95D0u); RECOMP_ABI_CALL(0x004E3665u, sub_004E3665); /* call 0x004E3665 */

loc_004C95D0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_004C9619;

loc_004C95D5: ;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, eax);
    PUSH32(esp, 0x7E7DC4);
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C95E9u); RECOMP_ABI_CALL(0x004E3665u, sub_004E3665); /* call 0x004E3665 */

loc_004C95E9: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_004C9619;

loc_004C95EE: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8671CC);
    goto loc_004C95C5;

loc_004C95F6: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004C9606; /* jbe: below or equal (unsigned <=) */

loc_004C95FC: ;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0x8671C4);
    goto loc_004C95C5;

loc_004C9606: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, MEM32(ebp + 0x10));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C9616u); RECOMP_ABI_CALL(0x004E367Fu, sub_004E367F); /* call 0x004E367F */

loc_004C9616: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004C9619: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_004C961D
 * Original: 0x004C961D - 0x004C9666 (73 bytes, 28 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004C961D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C961D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0xC));
    esi = ecx;
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C962Eu); RECOMP_ABI_CALL(0x004C92D9u, sub_004C92D9); /* call 0x004C92D9 */

loc_004C962E: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x004C9635u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C9632u); } /* indirect call */
    }

loc_004C9635: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x64) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x64 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_004C964E; /* jae: above or equal (unsigned >=) */

loc_004C963A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004C964E; /* jbe: below or equal (unsigned <=) */

loc_004C963E: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    ecx = esi;
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C964Cu); RECOMP_ABI_CALL(0x004C18DEu, sub_004C18DE); /* call 0x004C18DE */

loc_004C964C: ;
    goto loc_004C9661;

loc_004C964E: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, MEM32(ebp + 0x10));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C965Eu); RECOMP_ABI_CALL(0x004E367Fu, sub_004E367F); /* call 0x004E367F */

loc_004C965E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004C9661: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_004C9666
 * Original: 0x004C9666 - 0x004C96A1 (59 bytes, 22 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C9666(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C9666: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004C966Eu); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004C966E: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x004C9675u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C9672u); } /* indirect call */
    }

loc_004C9675: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C9692; /* je: equal / zero */

loc_004C9679: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 0xC));
    edx = MEM32(eax);
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004C9688u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C9685u); } /* indirect call */
    }

loc_004C9688: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x004C9690u); RECOMP_ABI_CALL(0x004C18C2u, sub_004C18C2); /* call 0x004C18C2 */

loc_004C9690: ;
    goto loc_004C969D;

loc_004C9692: ;
    eax = MEM32(esp + 8);
    MEM8(eax) = 0x30;
    MEM8(eax + 1) = 0;

loc_004C969D: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C96A1
 * Original: 0x004C96A1 - 0x004C96B8 (23 bytes, 7 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C96A1(void)
{

loc_004C96A1: ;
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0x004C96AEu); RECOMP_ABI_CALL(0x004C92D9u, sub_004C92D9); /* call 0x004C92D9 */

loc_004C96AE: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x004C96B5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C96B2u); } /* indirect call */
    }

loc_004C96B5: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C96B8
 * Original: 0x004C96B8 - 0x004C96DB (35 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C96B8(void)
{

loc_004C96B8: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esi + 0x20;
    PUSH32(esp, 0x004C96C5u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C96C5: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x8671D4);
    ecx = esi + -28;
    PUSH32(esp, 0x004C96D7u); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C96D7: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C96DB
 * Original: 0x004C96DB - 0x004C973A (95 bytes, 35 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C96DB(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C96DB: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esi + 0x20;
    PUSH32(esp, 0x004C96E9u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C96E9: ;
    PUSH32(esp, 0x004C96EEu); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004C96EE: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    edi = 0x7B891F;
    PUSH32(esp, edi);
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x80); PUSH32(esp, 0x004C9702u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C96FCu); } /* indirect call */
    }

loc_004C9702: ;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esi + -28;
    PUSH32(esp, edi);
    if ((_fa == 0)) goto loc_004C972B; /* je: equal / zero */

loc_004C970F: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_004C9724; /* je: equal / zero */

loc_004C9713: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_004C971D; /* je: equal / zero */

loc_004C9716: ;
    PUSH32(esp, 0x867264);
    goto loc_004C9730;

loc_004C971D: ;
    PUSH32(esp, 0x86723C);
    goto loc_004C9730;

loc_004C9724: ;
    PUSH32(esp, 0x867210);
    goto loc_004C9730;

loc_004C972B: ;
    PUSH32(esp, 0x8671EC);

loc_004C9730: ;
    PUSH32(esp, 0x004C9735u); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C9735: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C973A
 * Original: 0x004C973A - 0x004C975E (36 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C973A(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C973A: ;
    eax = MEM32(ecx + 0x2C);
    edx = MEM32(esp + 4);
    eax = MEM32(eax + edx * 4);
    edx = MEM32(ecx + 0x28);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x30);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, MEM32(eax + esi));
    edx = MEM32(eax + edx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x004C975Au); RECOMP_ABI_CALL(0x004C9265u, sub_004C9265); /* call 0x004C9265 */

loc_004C975A: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C975E
 * Original: 0x004C975E - 0x004C979E (64 bytes, 25 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004C975E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C975E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0xC));
    esi = ecx;
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C976Fu); RECOMP_ABI_CALL(0x004C92D9u, sub_004C92D9); /* call 0x004C92D9 */

loc_004C976F: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x004C9776u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C9773u); } /* indirect call */
    }

loc_004C9776: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    PUSH32(esp, MEM32(ebp + 0x14));
    if (CMP_NE(_fa, _fb)) goto loc_004C978D; /* jne: not equal / not zero */

loc_004C977E: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = esi;
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C978Bu); RECOMP_ABI_CALL(0x004C9562u, sub_004C9562); /* call 0x004C9562 */

loc_004C978B: ;
    goto loc_004C9799;

loc_004C978D: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x10));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C9796u); RECOMP_ABI_CALL(0x004E367Fu, sub_004E367F); /* call 0x004E367F */

loc_004C9796: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004C9799: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_004C979E
 * Original: 0x004C979E - 0x004C97B5 (23 bytes, 7 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C979E(void)
{

loc_004C979E: ;
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0x004C97ABu); RECOMP_ABI_CALL(0x004C92D9u, sub_004C92D9); /* call 0x004C92D9 */

loc_004C97AB: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x004C97B2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C97AFu); } /* indirect call */
    }

loc_004C97B2: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C97B5
 * Original: 0x004C97B5 - 0x004C97CB (22 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C97B5(void)
{

loc_004C97B5: ;
    eax = MEM32(ecx + 0x2C);
    edx = MEM32(esp + 4);
    eax = MEM32(eax + edx * 4);
    ecx = MEM32(ecx + 0x28);
    eax = MEM32(ecx + eax * 4);
    eax = MEM32(eax + 0x14);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C97CB
 * Original: 0x004C97CB - 0x004C97E9 (30 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C97CB(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C97CB: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(MEM32(ecx + 0x38)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x38), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C97E6; /* je: equal / zero */

loc_004C97D4: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x8669C4);
    MEM32(ecx + 0x38) = eax;
    PUSH32(esp, 0x004C97E6u); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C97E6: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C97E9
 * Original: 0x004C97E9 - 0x004C9804 (27 bytes, 8 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C97E9(void)
{

loc_004C97E9: ;
    PUSH32(esp, MEM32(esp + 4));
    PUSH32(esp, 0x004C97F2u); RECOMP_ABI_CALL(0x004C92C0u, sub_004C92C0); /* call 0x004C92C0 */

loc_004C97F2: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 0xC));
    edx = MEM32(eax);
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x004C9801u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C97FEu); } /* indirect call */
    }

loc_004C9801: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004C9804
 * Original: 0x004C9804 - 0x004C9818 (20 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C9804(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C9804: ;
    PUSH32(esp, MEM32(esp + 4));
    _fb = (uint32_t)(0xFFFFFFE0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFE0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x867284);
    PUSH32(esp, 0x004C9815u); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C9815: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C9818
 * Original: 0x004C9818 - 0x004C9882 (106 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C9818(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C9818: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x8672F8);
    PUSH32(esp, 1);
    esi = ecx;
    PUSH32(esp, 0x004C982Au); RECOMP_ABI_CALL(0x004C17F2u, sub_004C17F2); /* call 0x004C17F2 */

loc_004C982A: ;
    edi = esi + 0x18;
    ecx = edi;
    PUSH32(esp, 0x004C9834u); RECOMP_ABI_CALL(0x004AD92Bu, sub_004AD92B); /* call 0x004AD92B */

loc_004C9834: ;
    ebx = esi + 0x1C;
    ecx = ebx;
    PUSH32(esp, 0x004C983Eu); RECOMP_ABI_CALL(0x00608505u, sub_00608505); /* call 0x00608505 */

loc_004C983E: ;
    ebp = esi + 0x20;
    ecx = ebp;
    PUSH32(esp, 0x004C9848u); RECOMP_ABI_CALL(0x006084D8u, sub_006084D8); /* call 0x006084D8 */

loc_004C9848: ;
    ecx = esi + 0x24;
    PUSH32(esp, 0x004C9850u); RECOMP_ABI_CALL(0x004DCA26u, sub_004DCA26); /* call 0x004DCA26 */

loc_004C9850: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x28) = eax;
    MEM32(esi) = 0x8672F0;
    MEM32(edi) = 0x8672D0;
    MEM32(ebx) = 0x8672B4;
    MEM32(ebp) = 0x8672A8;
    MEM32(esi + 0x24) = 0x86729C;
    MEM32(esi + 0x2C) = eax;
    POP32(esp, edi);
    MEM32(esi + 0x30) = eax;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_004C9882
 * Original: 0x004C9882 - 0x004C988A (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C9882(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C9882: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004CE8DE(); return; /* tail jmp 0x004CE8DE */

}

/**
 * sub_004C988A
 * Original: 0x004C988A - 0x004C9892 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C988A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C988A: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004CE8DE(); return; /* tail jmp 0x004CE8DE */

}

/**
 * sub_004C9892
 * Original: 0x004C9892 - 0x004C989A (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C9892(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C9892: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004CE8DE(); return; /* tail jmp 0x004CE8DE */

}

/**
 * sub_004C989A
 * Original: 0x004C989A - 0x004C98A2 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C989A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C989A: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x24;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004CE8DE(); return; /* tail jmp 0x004CE8DE */

}

/**
 * sub_004C98A2
 * Original: 0x004C98A2 - 0x004C9902 (96 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004C98A2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C98A2: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x28), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C98FF; /* je: equal / zero */

loc_004C98AF: ;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C98B5u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004C98B5: ;
    edi = eax;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x004C98BEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C98BBu); } /* indirect call */
    }

loc_004C98BE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C98CC; /* je: equal / zero */

loc_004C98C2: ;
    ecx = MEM32(eax + 0x24);
    ecx = MEM32(ecx + 4);
    eax = ecx + eax + 0x24;

loc_004C98CC: ;
    _fa = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x28), eax (32-bit) */
    eax = MEM32(edi);
    ecx = edi;
    if (CMP_NE(_fa, _fb)) goto loc_004C98DD; /* jne: not equal / not zero */

loc_004C98D5: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x004C98D8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C98D5u); } /* indirect call */
    }

loc_004C98D8: ;
    ecx = esi + 0x18;
    goto loc_004C98E3;

loc_004C98DD: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x004C98E0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C98DDu); } /* indirect call */
    }

loc_004C98E0: ;
    ecx = esi + 0x1C;

loc_004C98E3: ;
    MEM32(ebp + -4) = ecx;
    ecx = ebp + -4;
    PUSH32(esp, ecx);
    ecx = eax + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C98F2u); RECOMP_ABI_CALL(0x004DD8B2u, sub_004DD8B2); /* call 0x004DD8B2 */

loc_004C98F2: ;
    ecx = MEM32(esi + 0x28);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004C98FAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C98F7u); } /* indirect call */
    }

loc_004C98FA: ;
    MEM32(esi + 0x28) = MEM32(esi + 0x28) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, edi);

loc_004C98FF: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004C9902
 * Original: 0x004C9902 - 0x004C9914 (18 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C9902(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C9902: ;
    eax = MEM32(esp + 8);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_004C9911; /* jne: not equal / not zero */

loc_004C9909: ;
    _fb = (uint32_t)(0xFFFFFFDCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFDCu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x004C9911u); RECOMP_ABI_CALL(0x004C98A2u, sub_004C98A2); /* call 0x004C98A2 */

loc_004C9911: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C9914
 * Original: 0x004C9914 - 0x004C99E5 (209 bytes, 78 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004C9914(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004C9914: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C9920u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004C9920: ;
    edi = eax;
    eax = MEM32(ebp + 0xC);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_004C997A; /* je: equal / zero */

loc_004C9929: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_004C995D; /* je: equal / zero */

loc_004C992C: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_004C99DF; /* jne: not equal / not zero */

loc_004C9933: ;
    ecx = esi + -36;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C993Bu); RECOMP_ABI_CALL(0x004C98A2u, sub_004C98A2); /* call 0x004C98A2 */

loc_004C993B: ;
    eax = MEM32(edi);
    ecx = esi + -36;
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    edx = esi + -4;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x6C); PUSH32(esp, 0x004C994Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C994Cu); } /* indirect call */
    }

loc_004C994F: ;
    PUSH32(esp, eax);
    ecx = esi + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C9958u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C9958: ;
    goto loc_004C99DF;

loc_004C995D: ;
    _fb = (uint32_t)(0xFFFFFFDCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0xFFFFFFDCu)) >> 32) & 1);
    esi = esi + 0xFFFFFFDCu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C9967u); RECOMP_ABI_CALL(0x004C98A2u, sub_004C98A2); /* call 0x004C98A2 */

loc_004C9967: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x867330);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C9978u); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C9978: ;
    goto loc_004C99DF;

loc_004C997A: ;
    eax = MEM32(edi);
    PUSH32(esp, ebx);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x004C9982u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C997Fu); } /* indirect call */
    }

loc_004C9982: ;
    ebx = esi + -36;
    ecx = ebx;
    edi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C998Eu); RECOMP_ABI_CALL(0x004C98A2u, sub_004C98A2); /* call 0x004C98A2 */

loc_004C998E: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_004C9996; /* jne: not equal / not zero */

loc_004C9992: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_004C99A0;

loc_004C9996: ;
    eax = MEM32(edi + 0x24);
    eax = MEM32(eax + 4);
    eax = eax + edi + 0x24;

loc_004C99A0: ;
    MEM32(esi + 4) = eax;
    eax = esi + -36;
    _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0xFFFFFFF8u)) >> 32) & 1);
    esi = esi + 0xFFFFFFF8u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + 0xC) = eax;
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    ecx = edi + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C99BEu); RECOMP_ABI_CALL(0x004DD750u, sub_004DD750); /* call 0x004DD750 */

loc_004C99BE: ;
    eax = MEM32(edi + 0x24);
    eax = MEM32(eax + 4);
    ecx = eax + edi + 0x24;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004C99CDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C99CAu); } /* indirect call */
    }

loc_004C99CD: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x867310);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C99DEu); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C99DE: ;
    POP32(esp, ebx);

loc_004C99DF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C99E5
 * Original: 0x004C99E5 - 0x004C9A06 (33 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C99E5(void)
{

loc_004C99E5: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esi + 0xC;
    PUSH32(esp, 0x004C99F2u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C99F2: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x867358);
    ecx = esi + -32;
    PUSH32(esp, 0x004C9A04u); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C9A04: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004C9A06
 * Original: 0x004C9A06 - 0x004C9A27 (33 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C9A06(void)
{

loc_004C9A06: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esi + 0xC;
    PUSH32(esp, 0x004C9A13u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C9A13: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x867374);
    ecx = esi + -32;
    PUSH32(esp, 0x004C9A25u); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C9A25: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004C9A27
 * Original: 0x004C9A27 - 0x004C9A3C (21 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C9A27(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C9A27: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x86738C);
    _fb = (uint32_t)(0xFFFFFFE8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFE8u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x004C9A39u); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C9A39: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C9A3C
 * Original: 0x004C9A3C - 0x004C9A51 (21 bytes, 5 insns)
 * Category: game_io
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C9A3C(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C9A3C: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x8673A8);
    _fb = (uint32_t)(0xFFFFFFE8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFE8u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x004C9A4Eu); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C9A4E: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C9A51
 * Original: 0x004C9A51 - 0x004C9A7B (42 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C9A51(void)
{

loc_004C9A51: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004C9A5Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C9A5Au); } /* indirect call */
    }

loc_004C9A5C: ;
    PUSH32(esp, eax);
    ecx = esi + 0x18;
    PUSH32(esp, 0x004C9A65u); RECOMP_ABI_CALL(0x004C2F04u, sub_004C2F04); /* call 0x004C2F04 */

loc_004C9A65: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x866B9C);
    ecx = esi + -24;
    PUSH32(esp, 0x004C9A77u); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C9A77: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C9A7B
 * Original: 0x004C9A7B - 0x004C9A90 (21 bytes, 5 insns)
 * Category: game_io
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C9A7B(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C9A7B: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x8673C4);
    _fb = (uint32_t)(0xFFFFFFE8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFE8u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x004C9A8Du); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C9A8D: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C9A90
 * Original: 0x004C9A90 - 0x004C9AA5 (21 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C9A90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C9A90: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x8673E4);
    _fb = (uint32_t)(0xFFFFFFE4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFE4u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x004C9AA2u); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C9AA2: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C9AA5
 * Original: 0x004C9AA5 - 0x004C9ABA (21 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C9AA5(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C9AA5: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x8673FC);
    _fb = (uint32_t)(0xFFFFFFE4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFE4u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x004C9AB7u); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C9AB7: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C9ABA
 * Original: 0x004C9ABA - 0x004C9ACF (21 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C9ABA(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C9ABA: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x867410);
    _fb = (uint32_t)(0xFFFFFFE4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFE4u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x004C9ACCu); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C9ACC: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C9ACF
 * Original: 0x004C9ACF - 0x004C9AE4 (21 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C9ACF(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C9ACF: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x867430);
    _fb = (uint32_t)(0xFFFFFFE4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFE4u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x004C9AE1u); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C9AE1: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C9AE4
 * Original: 0x004C9AE4 - 0x004C9AE8 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C9AE4(void)
{

loc_004C9AE4: ;
    eax = MEM32(ecx + 0x30);
    esp += 4; return; /* ret */

}

/**
 * sub_004C9AE8
 * Original: 0x004C9AE8 - 0x004C9B16 (46 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C9AE8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C9AE8: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x28), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C9B01; /* je: equal / zero */

loc_004C9AF1: ;
    ecx = MEM32(esi + 0x28);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x004C9AF9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C9AF6u); } /* indirect call */
    }

loc_004C9AF9: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004C98A2(); return; /* tail jmp 0x004C98A2 */

loc_004C9B01: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x2C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esi);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004C9B0Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C9B08u); } /* indirect call */
    }

loc_004C9B0B: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x004C9B14u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C9B14: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004C9B16
 * Original: 0x004C9B16 - 0x004C9BD9 (195 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004C9B16(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004C9B16: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C9B23u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004C9B23: ;
    edi = eax;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x70); PUSH32(esp, 0x004C9B2Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C9B29u); } /* indirect call */
    }

loc_004C9B2C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004C9B5F; /* je: equal / zero */

loc_004C9B30: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x867330);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C9B41u); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C9B41: ;
    eax = MEM32(edi);
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
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x6C); PUSH32(esp, 0x004C9B54u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C9B51u); } /* indirect call */
    }

loc_004C9B54: ;
    PUSH32(esp, eax);
    ecx = esi + 0x2C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C9B5Du); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C9B5D: ;
    goto loc_004C9BD5;

loc_004C9B5F: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x74); PUSH32(esp, 0x004C9B66u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C9B63u); } /* indirect call */
    }

loc_004C9B66: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004C9B9A; /* je: equal / zero */

loc_004C9B6A: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x867310);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C9B7Bu); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C9B7B: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x004C9B82u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C9B7Fu); } /* indirect call */
    }

loc_004C9B82: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004C9B92; /* je: equal / zero */

loc_004C9B88: ;
    eax = MEM32(edi + 0x24);
    eax = MEM32(eax + 4);
    eax = eax + edi + 0x24;

loc_004C9B92: ;
    MEM32(esi + 0x28) = eax;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x1C)) >> 32) & 1);
    esi = esi + 0x1C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_004C9BB7;

loc_004C9B9A: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x004C9BA1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C9B9Eu); } /* indirect call */
    }

loc_004C9BA1: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004C9BB1; /* je: equal / zero */

loc_004C9BA7: ;
    eax = MEM32(edi + 0x24);
    eax = MEM32(eax + 4);
    eax = eax + edi + 0x24;

loc_004C9BB1: ;
    MEM32(esi + 0x28) = eax;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x18)) >> 32) & 1);
    esi = esi + 0x18;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004C9BB7: ;
    eax = ebp + -4;
    ecx = edi + 8;
    PUSH32(esp, eax);
    MEM32(ebp + -4) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C9BC6u); RECOMP_ABI_CALL(0x004DD750u, sub_004DD750); /* call 0x004DD750 */

loc_004C9BC6: ;
    eax = MEM32(edi + 0x24);
    eax = MEM32(eax + 4);
    ecx = eax + edi + 0x24;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004C9BD5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C9BD2u); } /* indirect call */
    }

loc_004C9BD5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004C9BD9
 * Original: 0x004C9BD9 - 0x004C9C2E (85 bytes, 31 insns)
 * Category: game_ui
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004C9BD9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004C9BD9: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x867454);
    PUSH32(esp, MEM32(ebp + 8));
    edi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C9BEDu); RECOMP_ABI_CALL(0x004C17F2u, sub_004C17F2); /* call 0x004C17F2 */

loc_004C9BED: ;
    esi = edi + 0x18;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C9BF7u); RECOMP_ABI_CALL(0x006084ABu, sub_006084AB); /* call 0x006084AB */

loc_004C9BF7: ;
    MEM32(edi) = 0x867450;
    MEM32(esi) = 0x867448;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C9C08u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004C9C08: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x004C9C0Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C9C0Cu); } /* indirect call */
    }

loc_004C9C0F: ;
    ecx = ebp + 8;
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
    MEM32(ebp + 8) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C9C26u); RECOMP_ABI_CALL(0x004DD750u, sub_004DD750); /* call 0x004DD750 */

loc_004C9C26: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C9C2E
 * Original: 0x004C9C2E - 0x004C9C36 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C9C2E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C9C2E: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004CDE7A(); return; /* tail jmp 0x004CDE7A */

}

/**
 * sub_004C9C36
 * Original: 0x004C9C36 - 0x004C9C82 (76 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004C9C36(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004C9C36: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = edi + 0x18;
    MEM32(edi) = 0x867450;
    MEM32(esi) = 0x867448;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C9C52u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004C9C52: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x004C9C59u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C9C56u); } /* indirect call */
    }

loc_004C9C59: ;
    ecx = ebp + -4;
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
    MEM32(ebp + -4) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C9C70u); RECOMP_ABI_CALL(0x004DD8B2u, sub_004DD8B2); /* call 0x004DD8B2 */

loc_004C9C70: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C9C77u); RECOMP_ABI_CALL(0x006084B4u, sub_006084B4); /* call 0x006084B4 */

loc_004C9C77: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C9C7Eu); RECOMP_ABI_CALL(0x004C1837u, sub_004C1837); /* call 0x004C1837 */

loc_004C9C7E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004C9C82
 * Original: 0x004C9C82 - 0x004C9C96 (20 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C9C82(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C9C82: ;
    PUSH32(esp, MEM32(esp + 4));
    _fb = (uint32_t)(0xFFFFFFE8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFE8u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x867284);
    PUSH32(esp, 0x004C9C93u); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004C9C93: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C9C96
 * Original: 0x004C9C96 - 0x004C9CB7 (33 bytes, 10 insns)
 * Category: game_ui
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C9C96(void)
{

loc_004C9C96: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x867474);
    PUSH32(esp, MEM32(esp + 0xC));
    esi = ecx;
    PUSH32(esp, 0x004C9CA7u); RECOMP_ABI_CALL(0x004C17F2u, sub_004C17F2); /* call 0x004C17F2 */

loc_004C9CA7: ;
    MEM32(esi) = 0x867470;
    MEM8(esi + 0x18) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C9CC2
 * Original: 0x004C9CC2 - 0x004C9CDE (28 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C9CC2(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C9CC2: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004C9CCAu); RECOMP_ABI_CALL(0x004C1837u, sub_004C1837); /* call 0x004C1837 */

loc_004C9CCA: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004C9CD8; /* je: equal / zero */

loc_004C9CD1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004C9CD7u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004C9CD7: ;
    POP32(esp, ecx);

loc_004C9CD8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C9CDE
 * Original: 0x004C9CDE - 0x004C9CFA (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C9CDE(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C9CDE: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004C9CE6u); RECOMP_ABI_CALL(0x004E36B4u, sub_004E36B4); /* call 0x004E36B4 */

loc_004C9CE6: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004C9CF4; /* je: equal / zero */

loc_004C9CED: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004C9CF3u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004C9CF3: ;
    POP32(esp, ecx);

loc_004C9CF4: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C9CFA
 * Original: 0x004C9CFA - 0x004C9D16 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C9CFA(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C9CFA: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004C9D02u); RECOMP_ABI_CALL(0x004E36B4u, sub_004E36B4); /* call 0x004E36B4 */

loc_004C9D02: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004C9D10; /* je: equal / zero */

loc_004C9D09: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004C9D0Fu); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004C9D0F: ;
    POP32(esp, ecx);

loc_004C9D10: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C9D16
 * Original: 0x004C9D16 - 0x004C9D86 (112 bytes, 36 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C9D16(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C9D16: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x8674D4);
    PUSH32(esp, 1);
    esi = ecx;
    PUSH32(esp, 0x004C9D28u); RECOMP_ABI_CALL(0x004C17F2u, sub_004C17F2); /* call 0x004C17F2 */

loc_004C9D28: ;
    edi = esi + 0x18;
    ecx = edi;
    PUSH32(esp, 0x004C9D32u); RECOMP_ABI_CALL(0x006080DCu, sub_006080DC); /* call 0x006080DC */

loc_004C9D32: ;
    ebx = esi + 0x1C;
    ecx = ebx;
    PUSH32(esp, 0x004C9D3Cu); RECOMP_ABI_CALL(0x00608163u, sub_00608163); /* call 0x00608163 */

loc_004C9D3C: ;
    ebp = esi + 0x20;
    ecx = ebp;
    PUSH32(esp, 0x004C9D46u); RECOMP_ABI_CALL(0x00608136u, sub_00608136); /* call 0x00608136 */

loc_004C9D46: ;
    ecx = esi + 0x24;
    PUSH32(esp, 0x004C9D4Eu); RECOMP_ABI_CALL(0x004E36E1u, sub_004E36E1); /* call 0x004E36E1 */

loc_004C9D4E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = 0x8674D0;
    MEM32(edi) = 0x8674C4;
    MEM32(ebx) = 0x8674B8;
    MEM32(ebp) = 0x8674AC;
    MEM32(esi + 0x24) = 0x86748C;
    MEM32(esi + 0x30) = eax;
    MEM32(esi + 0x34) = eax;
    MEM32(esi + 0x38) = eax;
    MEM32(esi + 0x3C) = eax;
    POP32(esp, edi);
    MEM32(esi + 0x40) = eax;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_004C9D86
 * Original: 0x004C9D86 - 0x004C9D8D (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C9D86(void)
{

loc_004C9D86: ;
    MEM8(ecx + 8) = 1;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C9D8D
 * Original: 0x004C9D8D - 0x004C9D94 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C9D8D(void)
{

loc_004C9D8D: ;
    MEM8(ecx + 8) = 1;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C9D94
 * Original: 0x004C9D94 - 0x004C9D9B (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C9D94(void)
{

loc_004C9D94: ;
    MEM8(ecx + 8) = 1;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C9D9B
 * Original: 0x004C9D9B - 0x004C9D9E (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C9D9B(void)
{

loc_004C9D9B: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C9D9E
 * Original: 0x004C9D9E - 0x004C9DA1 (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C9D9E(void)
{

loc_004C9D9E: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C9DA1
 * Original: 0x004C9DA1 - 0x004C9DA4 (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C9DA1(void)
{

loc_004C9DA1: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C9DA4
 * Original: 0x004C9DA4 - 0x004C9DA7 (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C9DA4(void)
{

loc_004C9DA4: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C9DA7
 * Original: 0x004C9DA7 - 0x004C9DAF (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C9DA7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C9DA7: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004CDEB8(); return; /* tail jmp 0x004CDEB8 */

}

/**
 * sub_004C9DAF
 * Original: 0x004C9DAF - 0x004C9DB7 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C9DAF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C9DAF: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004CDEB8(); return; /* tail jmp 0x004CDEB8 */

}

/**
 * sub_004C9DB7
 * Original: 0x004C9DB7 - 0x004C9DBF (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C9DB7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C9DB7: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004CDEB8(); return; /* tail jmp 0x004CDEB8 */

}

/**
 * sub_004C9DBF
 * Original: 0x004C9DBF - 0x004C9DC7 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C9DBF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C9DBF: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x24;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004CDEB8(); return; /* tail jmp 0x004CDEB8 */

}

/**
 * sub_004C9DC7
 * Original: 0x004C9DC7 - 0x004C9E9B (212 bytes, 71 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C9DC7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C9DC7: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x34;
    ecx = MEM32(edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = 0x8674D0;
    MEM32(esi + 0x18) = 0x8674C4;
    MEM32(esi + 0x1C) = 0x8674B8;
    MEM32(esi + 0x20) = 0x8674AC;
    MEM32(esi + 0x24) = 0x86748C;
    if (CMP_EQ(_fa, _fb)) goto loc_004C9E04; /* je: equal / zero */

loc_004C9DF6: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004C9DFBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C9DF8u); } /* indirect call */
    }

loc_004C9DFB: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x004C9E04u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C9E04: ;
    PUSH32(esp, ebx);
    ebx = esi + 0x38;
    ecx = MEM32(ebx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C9E1C; /* je: equal / zero */

loc_004C9E0E: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004C9E13u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C9E10u); } /* indirect call */
    }

loc_004C9E13: ;
    PUSH32(esp, 0);
    ecx = ebx;
    PUSH32(esp, 0x004C9E1Cu); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C9E1C: ;
    ebx = esi + 0x3C;
    ecx = MEM32(ebx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C9E33; /* je: equal / zero */

loc_004C9E25: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004C9E2Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C9E27u); } /* indirect call */
    }

loc_004C9E2A: ;
    PUSH32(esp, 0);
    ecx = ebx;
    PUSH32(esp, 0x004C9E33u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C9E33: ;
    ecx = MEM32(esi + 0x40);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C9E3F; /* je: equal / zero */

loc_004C9E3A: ;
    PUSH32(esp, 0x004C9E3Fu); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004C9E3F: ;
    ebx = MEM32(ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C9E4C; /* je: equal / zero */

loc_004C9E45: ;
    ecx = ebx;
    PUSH32(esp, 0x004C9E4Cu); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004C9E4C: ;
    ecx = MEM32(esi + 0x38);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_004C9E59; /* je: equal / zero */

loc_004C9E54: ;
    PUSH32(esp, 0x004C9E59u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004C9E59: ;
    edi = MEM32(edi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C9E66; /* je: equal / zero */

loc_004C9E5F: ;
    ecx = edi;
    PUSH32(esp, 0x004C9E66u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004C9E66: ;
    ecx = MEM32(esi + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C9E72; /* je: equal / zero */

loc_004C9E6D: ;
    PUSH32(esp, 0x004C9E72u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004C9E72: ;
    ecx = esi + 0x24;
    PUSH32(esp, 0x004C9E7Au); RECOMP_ABI_CALL(0x004E36EAu, sub_004E36EA); /* call 0x004E36EA */

loc_004C9E7A: ;
    ecx = esi + 0x20;
    PUSH32(esp, 0x004C9E82u); RECOMP_ABI_CALL(0x0060813Fu, sub_0060813F); /* call 0x0060813F */

loc_004C9E82: ;
    ecx = esi + 0x1C;
    PUSH32(esp, 0x004C9E8Au); RECOMP_ABI_CALL(0x0060816Cu, sub_0060816C); /* call 0x0060816C */

loc_004C9E8A: ;
    ecx = esi + 0x18;
    PUSH32(esp, 0x004C9E92u); RECOMP_ABI_CALL(0x006080E5u, sub_006080E5); /* call 0x006080E5 */

loc_004C9E92: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004C1837(); return; /* tail jmp 0x004C1837 */

}

/**
 * sub_004C9E9B
 * Original: 0x004C9E9B - 0x004C9EA9 (14 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_004C9E9B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C9E9B: ;
    eax = MEM32(ecx + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C9EA6; /* je: equal / zero */

loc_004C9EA2: ;
    eax = MEM32(eax + 0xC);
    esp += 4; return; /* ret */

loc_004C9EA6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_004C9EA9
 * Original: 0x004C9EA9 - 0x004C9F38 (143 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004C9EA9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C9EA9: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x34;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004C9F33; /* jne: not equal / not zero */

loc_004C9EBD: ;
    MEM8(esi + 0x2C) = LO8(ebx);
    MEM8(ebp + -1) = LO8(ebx);
    MEM32(ebp + -24) = ebx;
    MEM32(ebp + -20) = ebx;
    MEM32(ebp + -16) = ebx;
    MEM32(ebp + -12) = ebx;
    MEM32(ebp + -8) = ebx;
    MEM32(ebp + -28) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C9EDAu); RECOMP_ABI_CALL(0x004DC976u, sub_004DC976); /* call 0x004DC976 */

loc_004C9EDA: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x8674EC);
    ecx = ebp + -8;
    PUSH32(esp, ecx);
    ecx = ebp + -28;
    PUSH32(esp, ecx);
    ecx = ebp + -12;
    PUSH32(esp, ecx);
    ecx = ebp + -16;
    PUSH32(esp, ecx);
    ecx = ebp + -20;
    PUSH32(esp, ecx);
    ecx = ebp + -24;
    PUSH32(esp, ecx);
    ecx = ebp + -1;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x004C9F02u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C9EFFu); } /* indirect call */
    }

loc_004C9F02: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C9F07u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004C9F07: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x004C9F0Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C9F0Bu); } /* indirect call */
    }

loc_004C9F0E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -8));
    edx = MEM32(eax);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x1C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + -12));
    ecx = eax;
    PUSH32(esp, MEM32(ebp + -16));
    PUSH32(esp, MEM32(ebp + -20));
    PUSH32(esp, MEM32(ebp + -24));
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x004C9F2Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C9F28u); } /* indirect call */
    }

loc_004C9F2B: ;
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C9F33u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C9F33: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004C9F38
 * Original: 0x004C9F38 - 0x004C9FDF (167 bytes, 71 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004C9F38(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C9F38: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C9F48u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004C9F48: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x004C9F4Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C9F4Cu); } /* indirect call */
    }

loc_004C9F4F: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x004C9F56u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C9F53u); } /* indirect call */
    }

loc_004C9F56: ;
    edi = esi + 0x34;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), ebx (32-bit) */
    MEM32(ebp + -32) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_004C9FDA; /* jne: not equal / not zero */

loc_004C9F62: ;
    MEM8(esi + 0x2C) = LO8(ebx);
    MEM8(ebp + -1) = LO8(ebx);
    MEM32(ebp + -24) = ebx;
    MEM32(ebp + -20) = ebx;
    MEM32(ebp + -16) = ebx;
    MEM32(ebp + -12) = ebx;
    MEM32(ebp + -8) = ebx;
    MEM32(ebp + -28) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C9F7Fu); RECOMP_ABI_CALL(0x004DC976u, sub_004DC976); /* call 0x004DC976 */

loc_004C9F7F: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x867504);
    ecx = ebp + -8;
    PUSH32(esp, ecx);
    ecx = ebp + -28;
    PUSH32(esp, ecx);
    ecx = ebp + -12;
    PUSH32(esp, ecx);
    ecx = ebp + -16;
    PUSH32(esp, ecx);
    ecx = ebp + -20;
    PUSH32(esp, ecx);
    ecx = ebp + -24;
    PUSH32(esp, ecx);
    ecx = ebp + -1;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x004C9FA7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C9FA4u); } /* indirect call */
    }

loc_004C9FA7: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C9FACu); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004C9FAC: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x004C9FB3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C9FB0u); } /* indirect call */
    }

loc_004C9FB3: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -8));
    edx = MEM32(eax);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x1C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + -32));
    ecx = eax;
    PUSH32(esp, MEM32(ebp + -12));
    PUSH32(esp, MEM32(ebp + -16));
    PUSH32(esp, MEM32(ebp + -20));
    PUSH32(esp, MEM32(ebp + -24));
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x004C9FD2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C9FCFu); } /* indirect call */
    }

loc_004C9FD2: ;
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C9FDAu); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C9FDA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004C9FDF
 * Original: 0x004C9FDF - 0x004C9FEC (13 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C9FDF(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C9FDF: ;
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x004C9FE9u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C9FE9: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C9FEC
 * Original: 0x004C9FEC - 0x004CA00D (33 bytes, 11 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C9FEC(void)
{

loc_004C9FEC: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esi + 0x18;
    PUSH32(esp, 0x004C9FF9u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004C9FF9: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x867518);
    ecx = esi + -32;
    PUSH32(esp, 0x004CA00Bu); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004CA00B: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004CA00D
 * Original: 0x004CA00D - 0x004CA04A (61 bytes, 20 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CA00D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CA00D: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esi + 0x18;
    PUSH32(esp, 0x004CA01Au); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004CA01A: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x7B891F);
    ecx = esi + -32;
    if ((_fa == 0)) goto loc_004CA03C; /* je: equal / zero */

loc_004CA02B: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_004CA035; /* je: equal / zero */

loc_004CA02E: ;
    PUSH32(esp, 0x86758C);
    goto loc_004CA041;

loc_004CA035: ;
    PUSH32(esp, 0x867568);
    goto loc_004CA041;

loc_004CA03C: ;
    PUSH32(esp, 0x867538);

loc_004CA041: ;
    PUSH32(esp, 0x004CA046u); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004CA046: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CA04A
 * Original: 0x004CA04A - 0x004CA094 (74 bytes, 35 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CA04A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004CA04A: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x30);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 8) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_004CA08A; /* je: equal / zero */

loc_004CA05C: ;
    PUSH32(esp, ebp);
    ebp = MEM32(eax + 0xC);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004CA089; /* jbe: below or equal (unsigned <=) */

loc_004CA064: ;
    PUSH32(esp, esi);

loc_004CA065: ;
    ecx = MEM32(edi + 0x30);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x004CA06Eu); RECOMP_ABI_CALL(0x004C3230u, sub_004C3230); /* call 0x004C3230 */

loc_004CA06E: ;
    esi = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004CA077u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CA074u); } /* indirect call */
    }

loc_004CA077: ;
    _fa = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x18), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004CA084; /* je: equal / zero */

loc_004CA07D: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004CA065; /* jb: below (unsigned <) */

loc_004CA082: ;
    goto loc_004CA088;

loc_004CA084: ;
    MEM32(esp + 0x10) = esi;

loc_004CA088: ;
    POP32(esp, esi);

loc_004CA089: ;
    POP32(esp, ebp);

loc_004CA08A: ;
    eax = MEM32(esp + 8);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CA094
 * Original: 0x004CA094 - 0x004CA0AF (27 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CA094(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CA094: ;
    ecx = MEM32(ecx + 0x30);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004CA0AC; /* je: equal / zero */

loc_004CA09D: ;
    edx = MEM32(esp + 4);
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xC), edx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004CA0AC; /* jbe: below or equal (unsigned <=) */

loc_004CA0A6: ;
    PUSH32(esp, edx);
    PUSH32(esp, 0x004CA0ACu); RECOMP_ABI_CALL(0x004C3230u, sub_004C3230); /* call 0x004C3230 */

loc_004CA0AC: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CA0AF
 * Original: 0x004CA0AF - 0x004CA0CA (27 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CA0AF(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CA0AF: ;
    PUSH32(esp, MEM32(esp + 4));
    PUSH32(esp, 0x004CA0B8u); RECOMP_ABI_CALL(0x004CA04Au, sub_004CA04A); /* call 0x004CA04A */

loc_004CA0B8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004CA0C5; /* je: equal / zero */

loc_004CA0BC: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x004CA0C3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CA0C0u); } /* indirect call */
    }

loc_004CA0C3: ;
    goto loc_004CA0C7;

loc_004CA0C5: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_004CA0C7: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CA0CA
 * Original: 0x004CA0CA - 0x004CA0ED (35 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CA0CA(void)
{

loc_004CA0CA: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esi + 0x24;
    PUSH32(esp, 0x004CA0D7u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004CA0D7: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x8675AC);
    ecx = esi + -24;
    PUSH32(esp, 0x004CA0E9u); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004CA0E9: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004CA0ED
 * Original: 0x004CA0ED - 0x004CA110 (35 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CA0ED(void)
{

loc_004CA0ED: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esi + 0x24;
    PUSH32(esp, 0x004CA0FAu); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004CA0FA: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x8675D0);
    ecx = esi + -24;
    PUSH32(esp, 0x004CA10Cu); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004CA10C: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004CA110
 * Original: 0x004CA110 - 0x004CA1C8 (184 bytes, 74 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004CA110(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004CA110: ;
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
    PUSH32(esp, 0x004CA11Eu); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004CA11E: ;
    esi = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x004CA127u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CA124u); } /* indirect call */
    }

loc_004CA127: ;
    ebx = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x30); PUSH32(esp, 0x004CA130u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CA12Du); } /* indirect call */
    }

loc_004CA130: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x004CA137u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CA134u); } /* indirect call */
    }

loc_004CA137: ;
    esi = 0x7B891F;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0xC));
    MEM32(ebp + -4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CA148u); RECOMP_ABI_CALL(0x005CFF90u, sub_005CFF90); /* call 0x005CFF90 */

loc_004CA148: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_004CA187; /* jne: not equal / not zero */

loc_004CA14E: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CA153u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004CA153: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x004CA15Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CA157u); } /* indirect call */
    }

loc_004CA15A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(0x863210));
    edx = MEM32(eax);
    PUSH32(esp, MEM32(0x863200));
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x004CA16Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CA16Au); } /* indirect call */
    }

loc_004CA16D: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x004CA174u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CA171u); } /* indirect call */
    }

loc_004CA174: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_004CA182; /* jne: not equal / not zero */

loc_004CA179: ;
    MEM32(ebp + 0xC) = 0x8675F4;
    goto loc_004CA18D;

loc_004CA182: ;
    MEM32(ebp + 0xC) = esi;
    goto loc_004CA18D;

loc_004CA187: ;
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + 0xC) = eax;

loc_004CA18D: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CA192u); RECOMP_ABI_CALL(0x004DC981u, sub_004DC981); /* call 0x004DC981 */

loc_004CA192: ;
    esi = MEM32(ebx);
    ecx = edi;
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    edx = edi + 0x18;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004CA1A7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CA1A4u); } /* indirect call */
    }

loc_004CA1A7: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -4));
    ecx = ebx;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(esi + 0x28); PUSH32(esp, 0x004CA1B8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CA1B5u); } /* indirect call */
    }

loc_004CA1B8: ;
    PUSH32(esp, eax);
    ecx = edi + 0x3C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CA1C1u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004CA1C1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004CA1C8
 * Original: 0x004CA1C8 - 0x004CA1E2 (26 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CA1C8(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CA1C8: ;
    PUSH32(esp, esi);
    esi = ecx + 0x34;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004CA1E0; /* je: equal / zero */

loc_004CA1D2: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004CA1D7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CA1D4u); } /* indirect call */
    }

loc_004CA1D7: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x004CA1E0u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004CA1E0: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004CA1E2
 * Original: 0x004CA1E2 - 0x004CA22C (74 bytes, 34 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CA1E2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004CA1E2: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x004CA1EDu); RECOMP_ABI_CALL(0x004DC981u, sub_004DC981); /* call 0x004DC981 */

loc_004CA1ED: ;
    edi = eax;
    PUSH32(esp, 0x004CA1F4u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004CA1F4: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x004CA1FBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CA1F8u); } /* indirect call */
    }

loc_004CA1FB: ;
    ebx = eax;
    eax = MEM32(edi);
    ebp = MEM32(ebx);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004CA206u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CA203u); } /* indirect call */
    }

loc_004CA206: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0x18));
    eax = esi;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = esi + 0x18;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(ebp + 0x38); PUSH32(esp, 0x004CA21Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CA219u); } /* indirect call */
    }

loc_004CA21C: ;
    PUSH32(esp, eax);
    ecx = esi + 0x20;
    PUSH32(esp, 0x004CA225u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004CA225: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CA22C
 * Original: 0x004CA22C - 0x004CA271 (69 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CA22C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CA22C: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x20;
    ecx = MEM32(edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004CA247; /* je: equal / zero */

loc_004CA239: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004CA23Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CA23Bu); } /* indirect call */
    }

loc_004CA23E: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x004CA247u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004CA247: ;
    edi = esi + 0x24;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004CA26E; /* jne: not equal / not zero */

loc_004CA24F: ;
    PUSH32(esp, 0x004CA254u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004CA254: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x004CA25Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CA258u); } /* indirect call */
    }

loc_004CA25B: ;
    edx = MEM32(eax);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x1C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x004CA266u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CA263u); } /* indirect call */
    }

loc_004CA266: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x004CA26Eu); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004CA26E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004CA271
 * Original: 0x004CA271 - 0x004CA294 (35 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CA271(void)
{

loc_004CA271: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esi + 8;
    PUSH32(esp, 0x004CA27Eu); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004CA27E: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x8675FC);
    ecx = esi + -24;
    PUSH32(esp, 0x004CA290u); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004CA290: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004CA294
 * Original: 0x004CA294 - 0x004CA2C5 (49 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CA294(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CA294: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esi + 8;
    PUSH32(esp, 0x004CA2A1u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004CA2A1: ;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xC), 3 (32-bit) */
    ecx = esi + -24;
    PUSH32(esp, 0x7B891F);
    if (CMP_EQ(_fa, _fb)) goto loc_004CA2B7; /* je: equal / zero */

loc_004CA2B0: ;
    PUSH32(esp, 0x867620);
    goto loc_004CA2BC;

loc_004CA2B7: ;
    PUSH32(esp, 0x867610);

loc_004CA2BC: ;
    PUSH32(esp, 0x004CA2C1u); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004CA2C1: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004CA2C5
 * Original: 0x004CA2C5 - 0x004CA32E (105 bytes, 34 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CA2C5(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CA2C5: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x867654);
    PUSH32(esp, MEM32(esp + 0x14));
    esi = ecx;
    PUSH32(esp, 0x004CA2D8u); RECOMP_ABI_CALL(0x004C17F2u, sub_004C17F2); /* call 0x004C17F2 */

loc_004CA2D8: ;
    edi = esi + 0x18;
    ecx = edi;
    PUSH32(esp, 0x004CA2E2u); RECOMP_ABI_CALL(0x00608571u, sub_00608571); /* call 0x00608571 */

loc_004CA2E2: ;
    ebx = esi + 0x1C;
    ecx = ebx;
    PUSH32(esp, 0x004CA2ECu); RECOMP_ABI_CALL(0x00608544u, sub_00608544); /* call 0x00608544 */

loc_004CA2EC: ;
    MEM32(esi) = 0x867650;
    MEM32(edi) = 0x867644;
    MEM32(ebx) = 0x867634;
    MEM32(esi + 0x20) = MEM32(esi + 0x20) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x24) = MEM32(esi + 0x24) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0x004CA30Bu); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004CA30B: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x004CA312u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CA30Fu); } /* indirect call */
    }

loc_004CA312: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(0x863214));
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x004CA31Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CA31Cu); } /* indirect call */
    }

loc_004CA31F: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x004CA326u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CA323u); } /* indirect call */
    }

loc_004CA326: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CA32E
 * Original: 0x004CA32E - 0x004CA336 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CA32E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004CA32E: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004CE012(); return; /* tail jmp 0x004CE012 */

}

/**
 * sub_004CA336
 * Original: 0x004CA336 - 0x004CA33E (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CA336(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004CA336: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004CE012(); return; /* tail jmp 0x004CE012 */

}

/**
 * sub_004CA33E
 * Original: 0x004CA33E - 0x004CA3BD (127 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004CA33E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CA33E: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x20;
    ecx = MEM32(edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    ebp = esi + 0x18;
    MEM32(esi) = 0x867650;
    MEM32(ebp) = 0x867644;
    MEM32(esi + 0x1C) = 0x867634;
    if (CMP_EQ(_fa, _fb)) goto loc_004CA371; /* je: equal / zero */

loc_004CA363: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004CA368u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CA365u); } /* indirect call */
    }

loc_004CA368: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x004CA371u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004CA371: ;
    PUSH32(esp, ebx);
    ebx = esi + 0x24;
    ecx = MEM32(ebx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004CA389; /* je: equal / zero */

loc_004CA37B: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004CA380u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CA37Du); } /* indirect call */
    }

loc_004CA380: ;
    PUSH32(esp, 0);
    ecx = ebx;
    PUSH32(esp, 0x004CA389u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004CA389: ;
    ebx = MEM32(ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004CA396; /* je: equal / zero */

loc_004CA38F: ;
    ecx = ebx;
    PUSH32(esp, 0x004CA396u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004CA396: ;
    edi = MEM32(edi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_004CA3A4; /* je: equal / zero */

loc_004CA39D: ;
    ecx = edi;
    PUSH32(esp, 0x004CA3A4u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004CA3A4: ;
    ecx = esi + 0x1C;
    PUSH32(esp, 0x004CA3ACu); RECOMP_ABI_CALL(0x0060854Du, sub_0060854D); /* call 0x0060854D */

loc_004CA3AC: ;
    ecx = ebp;
    PUSH32(esp, 0x004CA3B3u); RECOMP_ABI_CALL(0x0060857Au, sub_0060857A); /* call 0x0060857A */

loc_004CA3B3: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_004C1837(); return; /* tail jmp 0x004C1837 */

}

/**
 * sub_004CA3BD
 * Original: 0x004CA3BD - 0x004CA3DE (33 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CA3BD(void)
{

loc_004CA3BD: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esi + 8;
    PUSH32(esp, 0x004CA3CAu); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004CA3CA: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x867610);
    ecx = esi + -28;
    PUSH32(esp, 0x004CA3DCu); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004CA3DC: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004CA3DE
 * Original: 0x004CA3DE - 0x004CA3FF (33 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CA3DE(void)
{

loc_004CA3DE: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esi + 8;
    PUSH32(esp, 0x004CA3EBu); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004CA3EB: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x867610);
    ecx = esi + -28;
    PUSH32(esp, 0x004CA3FDu); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004CA3FD: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004CA3FF
 * Original: 0x004CA3FF - 0x004CA420 (33 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CA3FF(void)
{

loc_004CA3FF: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esi + 8;
    PUSH32(esp, 0x004CA40Cu); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004CA40C: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x8675FC);
    ecx = esi + -28;
    PUSH32(esp, 0x004CA41Eu); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004CA41E: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004CA420
 * Original: 0x004CA420 - 0x004CA443 (35 bytes, 11 insns)
 * Category: game_io
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CA420(void)
{

loc_004CA420: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esi + 8;
    PUSH32(esp, 0x004CA42Du); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004CA42D: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x866328);
    ecx = esi + -24;
    PUSH32(esp, 0x004CA43Fu); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004CA43F: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CA443
 * Original: 0x004CA443 - 0x004CA47D (58 bytes, 20 insns)
 * Category: game_io
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CA443(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CA443: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esi + 8;
    PUSH32(esp, 0x004CA450u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004CA450: ;
    eax = MEM32(esp + 0xC);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_004CA467; /* je: equal / zero */

loc_004CA457: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_004CA467; /* je: equal / zero */

loc_004CA45B: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x86634C);
    goto loc_004CA471;

loc_004CA467: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x867670);

loc_004CA471: ;
    ecx = esi + -24;
    PUSH32(esp, 0x004CA479u); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004CA479: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004CA47D
 * Original: 0x004CA47D - 0x004CA4BB (62 bytes, 19 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CA47D(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CA47D: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x8676A0);
    PUSH32(esp, MEM32(esp + 0x14));
    esi = ecx;
    PUSH32(esp, 0x004CA48Fu); RECOMP_ABI_CALL(0x004C17F2u, sub_004C17F2); /* call 0x004C17F2 */

loc_004CA48F: ;
    edi = esi + 0x18;
    ecx = edi;
    PUSH32(esp, 0x004CA499u); RECOMP_ABI_CALL(0x004BDA0Bu, sub_004BDA0B); /* call 0x004BDA0B */

loc_004CA499: ;
    eax = MEM32(esp + 0xC);
    MEM32(esi) = 0x86768C;
    MEM32(edi) = 0x867680;
    MEM32(esi + 0x1C) = MEM32(esi + 0x1C) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x20) = MEM32(esi + 0x20) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x24) = eax;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004CA4BB
 * Original: 0x004CA4BB - 0x004CA4C3 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CA4BB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004CA4BB: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004CE02E(); return; /* tail jmp 0x004CE02E */

}

/**
 * sub_004CA4C3
 * Original: 0x004CA4C3 - 0x004CA50A (71 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CA4C3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004CA4C3: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = esi + 0x18;
    MEM32(esi) = 0x86768C;
    MEM32(edi) = 0x867680;
    if (CMP_EQ(_fa, _fb)) goto loc_004CA4E2; /* je: equal / zero */

loc_004CA4DD: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004CA4E2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CA4DFu); } /* indirect call */
    }

loc_004CA4E2: ;
    ecx = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004CA4EE; /* je: equal / zero */

loc_004CA4E9: ;
    PUSH32(esp, 0x004CA4EEu); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004CA4EE: ;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004CA4FA; /* je: equal / zero */

loc_004CA4F5: ;
    PUSH32(esp, 0x004CA4FAu); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004CA4FA: ;
    ecx = edi;
    PUSH32(esp, 0x004CA501u); RECOMP_ABI_CALL(0x004BDA14u, sub_004BDA14); /* call 0x004BDA14 */

loc_004CA501: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004C1837(); return; /* tail jmp 0x004C1837 */

}

/**
 * sub_004CA50A
 * Original: 0x004CA50A - 0x004CA54B (65 bytes, 28 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CA50A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CA50A: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x90E424);
    eax = MEM32(ecx);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x004CA519u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CA516u); } /* indirect call */
    }

loc_004CA519: ;
    edi = eax;
    eax = MEM32(0x90E428);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004CA534; /* je: equal / zero */

loc_004CA524: ;
    ecx = MEM32(esi + 0x1C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x004CA52Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CA52Cu); } /* indirect call */
    }

loc_004CA52E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_004CA546; /* jne: not equal / not zero */

loc_004CA534: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 0xC));
    eax = MEM32(esi + 0x1C);
    PUSH32(esp, MEM32(esi + 0x24));
    edx = MEM32(edi);
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x004CA546u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CA543u); } /* indirect call */
    }

loc_004CA546: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CA54B
 * Original: 0x004CA54B - 0x004CA5C0 (117 bytes, 48 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CA54B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CA54B: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x1C;
    ecx = MEM32(edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004CA56D; /* je: equal / zero */

loc_004CA558: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 0xC));
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004CA561u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CA55Eu); } /* indirect call */
    }

loc_004CA561: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004CA56D; /* je: equal / zero */

loc_004CA565: ;
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x20), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004CA58C; /* je: equal / zero */

loc_004CA56B: ;
    goto loc_004CA5BB;

loc_004CA56D: ;
    PUSH32(esp, 0x004CA572u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004CA572: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x004CA579u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CA576u); } /* indirect call */
    }

loc_004CA579: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 0xC));
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004CA584u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CA581u); } /* indirect call */
    }

loc_004CA584: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x004CA58Cu); RECOMP_ABI_CALL(0x004AFE27u, sub_004AFE27); /* call 0x004AFE27 */

loc_004CA58C: ;
    PUSH32(esp, ebx);
    ebx = esi + 0x20;
    ecx = MEM32(ebx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004CA5A4; /* je: equal / zero */

loc_004CA596: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004CA59Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CA598u); } /* indirect call */
    }

loc_004CA59B: ;
    PUSH32(esp, 0);
    ecx = ebx;
    PUSH32(esp, 0x004CA5A4u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004CA5A4: ;
    ecx = MEM32(edi);
    eax = MEM32(ecx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x18;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0xAC); PUSH32(esp, 0x004CA5B2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CA5ACu); } /* indirect call */
    }

loc_004CA5B2: ;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x004CA5BAu); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004CA5BA: ;
    POP32(esp, ebx);

loc_004CA5BB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CA5C0
 * Original: 0x004CA5C0 - 0x004CA60A (74 bytes, 34 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CA5C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004CA5C0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x004CA5CBu); RECOMP_ABI_CALL(0x004DC981u, sub_004DC981); /* call 0x004DC981 */

loc_004CA5CB: ;
    edi = eax;
    PUSH32(esp, 0x004CA5D2u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004CA5D2: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x004CA5D9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CA5D6u); } /* indirect call */
    }

loc_004CA5D9: ;
    ebx = eax;
    eax = MEM32(edi);
    ebp = MEM32(ebx);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004CA5E4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CA5E1u); } /* indirect call */
    }

loc_004CA5E4: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0x18));
    eax = esi;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = esi + 0x18;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(ebp + 0x38); PUSH32(esp, 0x004CA5FAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CA5F7u); } /* indirect call */
    }

loc_004CA5FA: ;
    PUSH32(esp, eax);
    ecx = esi + 0x20;
    PUSH32(esp, 0x004CA603u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004CA603: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CA60A
 * Original: 0x004CA60A - 0x004CA651 (71 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CA60A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CA60A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ebx = esi + 0x24;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004CA64E; /* jne: not equal / not zero */

loc_004CA616: ;
    PUSH32(esp, edi);
    edi = esi + 0x20;
    ecx = MEM32(edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004CA62E; /* je: equal / zero */

loc_004CA620: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004CA625u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CA622u); } /* indirect call */
    }

loc_004CA625: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x004CA62Eu); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004CA62E: ;
    PUSH32(esp, 0x004CA633u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004CA633: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x004CA63Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CA637u); } /* indirect call */
    }

loc_004CA63A: ;
    edx = MEM32(eax);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x1C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x004CA645u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CA642u); } /* indirect call */
    }

loc_004CA645: ;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x004CA64Du); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004CA64D: ;
    POP32(esp, edi);

loc_004CA64E: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_004CA651
 * Original: 0x004CA651 - 0x004CA674 (35 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CA651(void)
{

loc_004CA651: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esi + 8;
    PUSH32(esp, 0x004CA65Eu); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004CA65E: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x8675FC);
    ecx = esi + -24;
    PUSH32(esp, 0x004CA670u); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004CA670: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004CA674
 * Original: 0x004CA674 - 0x004CA6A5 (49 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CA674(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CA674: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esi + 8;
    PUSH32(esp, 0x004CA681u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004CA681: ;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xC), 3 (32-bit) */
    ecx = esi + -24;
    PUSH32(esp, 0x7B891F);
    if (CMP_EQ(_fa, _fb)) goto loc_004CA697; /* je: equal / zero */

loc_004CA690: ;
    PUSH32(esp, 0x867620);
    goto loc_004CA69C;

loc_004CA697: ;
    PUSH32(esp, 0x867610);

loc_004CA69C: ;
    PUSH32(esp, 0x004CA6A1u); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004CA6A1: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004CA6A5
 * Original: 0x004CA6A5 - 0x004CA6EE (73 bytes, 23 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CA6A5(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CA6A5: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x8676DC);
    PUSH32(esp, MEM32(esp + 0x14));
    esi = ecx;
    PUSH32(esp, 0x004CA6B8u); RECOMP_ABI_CALL(0x004C17F2u, sub_004C17F2); /* call 0x004C17F2 */

loc_004CA6B8: ;
    edi = esi + 0x18;
    ecx = edi;
    PUSH32(esp, 0x004CA6C2u); RECOMP_ABI_CALL(0x00608571u, sub_00608571); /* call 0x00608571 */

loc_004CA6C2: ;
    ebx = esi + 0x1C;
    ecx = ebx;
    PUSH32(esp, 0x004CA6CCu); RECOMP_ABI_CALL(0x00608544u, sub_00608544); /* call 0x00608544 */

loc_004CA6CC: ;
    MEM32(esi) = 0x8676D8;
    MEM32(edi) = 0x8676CC;
    MEM32(ebx) = 0x8676BC;
    MEM32(esi + 0x20) = MEM32(esi + 0x20) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x24) = MEM32(esi + 0x24) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CA6EE
 * Original: 0x004CA6EE - 0x004CA6F6 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CA6EE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004CA6EE: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004CE04A(); return; /* tail jmp 0x004CE04A */

}

/**
 * sub_004CA6F6
 * Original: 0x004CA6F6 - 0x004CA6FE (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CA6F6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004CA6F6: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004CE04A(); return; /* tail jmp 0x004CE04A */

}

/**
 * sub_004CA6FE
 * Original: 0x004CA6FE - 0x004CA77D (127 bytes, 47 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004CA6FE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CA6FE: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x20;
    ecx = MEM32(edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    ebp = esi + 0x18;
    MEM32(esi) = 0x8676D8;
    MEM32(ebp) = 0x8676CC;
    MEM32(esi + 0x1C) = 0x8676BC;
    if (CMP_EQ(_fa, _fb)) goto loc_004CA731; /* je: equal / zero */

loc_004CA723: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004CA728u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CA725u); } /* indirect call */
    }

loc_004CA728: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x004CA731u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004CA731: ;
    PUSH32(esp, ebx);
    ebx = esi + 0x24;
    ecx = MEM32(ebx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004CA749; /* je: equal / zero */

loc_004CA73B: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004CA740u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CA73Du); } /* indirect call */
    }

loc_004CA740: ;
    PUSH32(esp, 0);
    ecx = ebx;
    PUSH32(esp, 0x004CA749u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004CA749: ;
    ebx = MEM32(ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004CA756; /* je: equal / zero */

loc_004CA74F: ;
    ecx = ebx;
    PUSH32(esp, 0x004CA756u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004CA756: ;
    edi = MEM32(edi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_004CA764; /* je: equal / zero */

loc_004CA75D: ;
    ecx = edi;
    PUSH32(esp, 0x004CA764u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004CA764: ;
    ecx = esi + 0x1C;
    PUSH32(esp, 0x004CA76Cu); RECOMP_ABI_CALL(0x0060854Du, sub_0060854D); /* call 0x0060854D */

loc_004CA76C: ;
    ecx = ebp;
    PUSH32(esp, 0x004CA773u); RECOMP_ABI_CALL(0x0060857Au, sub_0060857A); /* call 0x0060857A */

loc_004CA773: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_004C1837(); return; /* tail jmp 0x004C1837 */

}

/**
 * sub_004CA77D
 * Original: 0x004CA77D - 0x004CA79E (33 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CA77D(void)
{

loc_004CA77D: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esi + 8;
    PUSH32(esp, 0x004CA78Au); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004CA78A: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x867610);
    ecx = esi + -28;
    PUSH32(esp, 0x004CA79Cu); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004CA79C: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004CA79E
 * Original: 0x004CA79E - 0x004CA7BF (33 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CA79E(void)
{

loc_004CA79E: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esi + 8;
    PUSH32(esp, 0x004CA7ABu); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004CA7AB: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x867610);
    ecx = esi + -28;
    PUSH32(esp, 0x004CA7BDu); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004CA7BD: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004CA7BF
 * Original: 0x004CA7BF - 0x004CA7E0 (33 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CA7BF(void)
{

loc_004CA7BF: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esi + 8;
    PUSH32(esp, 0x004CA7CCu); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004CA7CC: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x8675FC);
    ecx = esi + -28;
    PUSH32(esp, 0x004CA7DEu); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004CA7DE: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004CA7E0
 * Original: 0x004CA7E0 - 0x004CA878 (152 bytes, 50 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004CA7E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CA7E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x86771C);
    PUSH32(esp, 1);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CA7F5u); RECOMP_ABI_CALL(0x004C17F2u, sub_004C17F2); /* call 0x004C17F2 */

loc_004CA7F5: ;
    edi = esi + 0x18;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CA7FFu); RECOMP_ABI_CALL(0x00608244u, sub_00608244); /* call 0x00608244 */

loc_004CA7FF: ;
    MEM32(esi) = 0x867708;
    MEM32(edi) = 0x8676F4;
    ebx = esi + 0x68C;
    MEM32(ebx) = MEM32(ebx) & 0;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, MEM32(0x90E45C));
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CA821u); RECOMP_ABI_CALL(0x004AFE27u, sub_004AFE27); /* call 0x004AFE27 */

loc_004CA821: ;
    PUSH32(esp, 0);
    ecx = 0x90E45C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CA82Du); RECOMP_ABI_CALL(0x004AFE27u, sub_004AFE27); /* call 0x004AFE27 */

loc_004CA82D: ;
    ecx = MEM32(ebx);
    MEM32(esi + 0x690) = MEM32(esi + 0x690) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x690)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004CA83Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CA83Au); } /* indirect call */
    }

loc_004CA83D: ;
    PUSH32(esp, eax);
    eax = esi + 0x63C;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CA84Au); RECOMP_ABI_CALL(0x004E367Fu, sub_004E367F); /* call 0x004E367F */

loc_004CA84A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esi + 0x64C) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CA859u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004CA859: ;
    edx = MEM32(eax);
    ecx = eax;
    MEM32(ebp + -4) = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x004CA863u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CA860u); } /* indirect call */
    }

loc_004CA863: ;
    ecx = ebp + -4;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CA871u); RECOMP_ABI_CALL(0x004DD750u, sub_004DD750); /* call 0x004DD750 */

loc_004CA871: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004CA878
 * Original: 0x004CA878 - 0x004CA879 (1 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CA878(void)
{

loc_004CA878: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004CA879
 * Original: 0x004CA879 - 0x004CA881 (8 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CA879(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004CA879: ;
    _fb = (uint32_t)(0xFFFFFFE8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFE8u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x10)); return; /* indirect tail jmp */

}

/**
 * sub_004CA881
 * Original: 0x004CA881 - 0x004CA882 (1 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CA881(void)
{

loc_004CA881: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004CA882
 * Original: 0x004CA882 - 0x004CA88A (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CA882(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004CA882: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004CE066(); return; /* tail jmp 0x004CE066 */

}

/**
 * sub_004CA88A
 * Original: 0x004CA88A - 0x004CA8EF (101 bytes, 38 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004CA88A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CA88A: ;
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
    MEM32(esi) = 0x867708;
    MEM32(edi) = 0x8676F4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CA8A7u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004CA8A7: ;
    edx = MEM32(eax);
    ecx = eax;
    MEM32(ebp + -4) = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x004CA8B1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CA8AEu); } /* indirect call */
    }

loc_004CA8B1: ;
    ecx = ebp + -4;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CA8BFu); RECOMP_ABI_CALL(0x004DD8B2u, sub_004DD8B2); /* call 0x004DD8B2 */

loc_004CA8BF: ;
    ebx = esi + 0x68C;
    ecx = MEM32(ebx);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x94); PUSH32(esp, 0x004CA8D1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CA8CBu); } /* indirect call */
    }

loc_004CA8D1: ;
    ecx = MEM32(ebx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004CA8DC; /* je: equal / zero */

loc_004CA8D7: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CA8DCu); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004CA8DC: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CA8E3u); RECOMP_ABI_CALL(0x0060824Du, sub_0060824D); /* call 0x0060824D */

loc_004CA8E3: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CA8EAu); RECOMP_ABI_CALL(0x004C1837u, sub_004C1837); /* call 0x004C1837 */

loc_004CA8EA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004CA8EF
 * Original: 0x004CA8EF - 0x004CA8FE (15 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CA8EF(void)
{

loc_004CA8EF: ;
    PUSH32(esp, MEM32(esp + 4));
    ecx = 0x90E45C;
    PUSH32(esp, 0x004CA8FDu); RECOMP_ABI_CALL(0x004AFE27u, sub_004AFE27); /* call 0x004AFE27 */

loc_004CA8FD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004CA8FE
 * Original: 0x004CA8FE - 0x004CA9AA (172 bytes, 55 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CA8FE(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CA8FE: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 8));
    esi = ecx;
    ecx = MEM32(esi + 0x68C);
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 0x70); PUSH32(esp, 0x004CA910u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CA90Du); } /* indirect call */
    }

loc_004CA910: ;
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x14), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004CA9A6; /* je: equal / zero */

loc_004CA91A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    ecx = eax + 8;
    PUSH32(esp, 0x004CA926u); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004CA926: ;
    ebx = esi + 0x64C;
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx), 0 (8-bit) */
    edi = eax;
    if (CMP_NE(_fa, _fb)) goto loc_004CA944; /* jne: not equal / not zero */

loc_004CA933: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x004CA93Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CA937u); } /* indirect call */
    }

loc_004CA93A: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x40);
    PUSH32(esp, ebx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x004CA944u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CA941u); } /* indirect call */
    }

loc_004CA944: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x004CA94Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CA948u); } /* indirect call */
    }

loc_004CA94B: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), 1 (32-bit) */
    MEM32(esi + 0x690) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_004CA971; /* jne: not equal / not zero */

loc_004CA958: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004CA95Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CA95Cu); } /* indirect call */
    }

loc_004CA95F: ;
    MEM32(esi + 0x694) = eax;
    eax = MEM32(esi + 0x690);
    MEM32(esi + 0x328) = eax;

loc_004CA971: ;
    eax = MEM32(edi + 8);
    eax = MEM32(eax + 4);
    ecx = eax + edi + 8;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004CA97Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CA97Du); } /* indirect call */
    }

loc_004CA97F: ;
    ecx = MEM32(esi + 0x690);
    PUSH32(esp, 0x300);
    MEM32(esi + 0x1C) = 0x141414;
    MEM32(esi + 0x328) = ecx;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x004CA9A1u); RECOMP_ABI_CALL(0x004E367Fu, sub_004E367F); /* call 0x004E367F */

loc_004CA9A1: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebx);

loc_004CA9A6: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CA9AA
 * Original: 0x004CA9AA - 0x004CA9B5 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CA9AA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004CA9AA: ;
    ecx = MEM32(ecx + 0x68C);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x74)); return; /* indirect tail jmp */

}

/**
 * sub_004CA9B5
 * Original: 0x004CA9B5 - 0x004CAA41 (140 bytes, 52 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004CA9B5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CA9B5: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(edi + 0x68C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    { uint32_t _icall_target = MEM32(eax + 0x70); PUSH32(esp, 0x004CA9CCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CA9C9u); } /* indirect call */
    }

loc_004CA9CC: ;
    esi = eax;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -12) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_004CAA3B; /* je: equal / zero */

loc_004CA9D8: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM8(ebp + -1) = 0;
    PUSH32(esp, ebx);

loc_004CA9E1: ;
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -12) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_004CAA3A; /* jae: above or equal (unsigned >=) */

loc_004CA9E9: ;
    PUSH32(esp, eax);
    ecx = esi + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CA9F2u); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004CA9F2: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x004CA9F9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CA9F6u); } /* indirect call */
    }

loc_004CA9F9: ;
    MEM32(ebp + -16) = eax;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004CA9FE: ;
    _fa = (uint32_t)(MEM8(ebp + -1)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -1), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004CAA31; /* jne: not equal / not zero */

loc_004CAA04: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -16);
    eax = ebx + eax * 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax * 4 + 0x8654E8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax * 4 + 0x8654E8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004CAA2B; /* jne: not equal / not zero */

loc_004CAA16: ;
    ecx = MEM32(edi + 0x68C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -8));
    eax = MEM32(ecx);
    MEM8(ebp + -1) = 1;
    { uint32_t _icall_target = MEM32(eax + 0x98); PUSH32(esp, 0x004CAA2Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CAA25u); } /* indirect call */
    }

loc_004CAA2B: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004CA9FE; /* jb: below (unsigned <) */

loc_004CAA31: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) + 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(ebp + -1)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -1), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004CA9E1; /* je: equal / zero */

loc_004CAA3A: ;
    POP32(esp, ebx);

loc_004CAA3B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}
