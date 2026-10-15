/**
 * nhl_07_recomp - Recompiled code chunk 211
 * Functions: 250 (0x004B21E1 - 0x004B63A9)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_004B21E1
 * Original: 0x004B21E1 - 0x004B2219 (56 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B21E1(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B21E1: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(ecx + 0x18);
    if (CMP_EQ(_fa, _fb)) goto loc_004B2210; /* je: equal / zero */

loc_004B21EF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6D617574) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x6D617574 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B220A; /* je: equal / zero */

loc_004B21F6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x75757372) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x75757372 (32-bit) */
    eax = MEM32(ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004B2206; /* je: equal / zero */

loc_004B21FF: ;
    PUSH32(esp, 0);

loc_004B2201: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004B2204u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B2201u); } /* indirect call */
    }

loc_004B2204: ;
    goto loc_004B2214;

loc_004B2206: ;
    PUSH32(esp, 2);
    goto loc_004B2201;

loc_004B220A: ;
    eax = MEM32(ecx);
    PUSH32(esp, 1);
    goto loc_004B2201;

loc_004B2210: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004B2214u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B2212u); } /* indirect call */
    }

loc_004B2214: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B2219
 * Original: 0x004B2219 - 0x004B2224 (11 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B2219(void)
{

loc_004B2219: ;
    ecx = MEM32(ecx + 0x18);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004B2223u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B2220u); } /* indirect call */
    }

loc_004B2223: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004B2224
 * Original: 0x004B2224 - 0x004B2256 (50 bytes, 14 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B2224(void)
{

loc_004B2224: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004B222Cu); RECOMP_ABI_CALL(0x004E31B4u, sub_004E31B4); /* call 0x004E31B4 */

loc_004B222C: ;
    PUSH32(esp, MEM32(esp + 8));
    eax = MEM32(esp + 0x10);
    PUSH32(esp, 0x67637265);
    ecx = esi;
    MEM32(esi) = 0x864344;
    MEM32(esi + 8) = 0x864334;
    MEM32(esi + 0x18) = eax;
    PUSH32(esp, 0x004B2250u); RECOMP_ABI_CALL(0x004E3221u, sub_004E3221); /* call 0x004E3221 */

loc_004B2250: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004B2256
 * Original: 0x004B2256 - 0x004B2268 (18 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B2256(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B2256: ;
    MEM32(ecx) = 0x864344;
    MEM32(ecx + 8) = 0x864334;
    g_seh_ebp = ebp; sub_004E31F2(); return; /* tail jmp 0x004E31F2 */

}

/**
 * sub_004B2268
 * Original: 0x004B2268 - 0x004B2284 (28 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B2268(void)
{

loc_004B2268: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004B2270u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004B2270: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x004B2277u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B2274u); } /* indirect call */
    }

loc_004B2277: ;
    ecx = MEM32(esi + 0x18);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004B2282u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B227Fu); } /* indirect call */
    }

loc_004B2282: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004B2284
 * Original: 0x004B2284 - 0x004B22A0 (28 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B2284(void)
{

loc_004B2284: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004B228Cu); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004B228C: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x004B2293u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B2290u); } /* indirect call */
    }

loc_004B2293: ;
    ecx = MEM32(esi + 0x18);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004B229Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B229Bu); } /* indirect call */
    }

loc_004B229E: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004B22A0
 * Original: 0x004B22A0 - 0x004B22D2 (50 bytes, 14 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B22A0(void)
{

loc_004B22A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004B22A8u); RECOMP_ABI_CALL(0x004E31B4u, sub_004E31B4); /* call 0x004E31B4 */

loc_004B22A8: ;
    PUSH32(esp, MEM32(esp + 8));
    eax = MEM32(esp + 0x10);
    PUSH32(esp, 0x67676574);
    ecx = esi;
    MEM32(esi) = 0x864364;
    MEM32(esi + 8) = 0x864354;
    MEM32(esi + 0x18) = eax;
    PUSH32(esp, 0x004B22CCu); RECOMP_ABI_CALL(0x004E3221u, sub_004E3221); /* call 0x004E3221 */

loc_004B22CC: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004B22D2
 * Original: 0x004B22D2 - 0x004B22E4 (18 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B22D2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B22D2: ;
    MEM32(ecx) = 0x864364;
    MEM32(ecx + 8) = 0x864354;
    g_seh_ebp = ebp; sub_004E31F2(); return; /* tail jmp 0x004E31F2 */

}

/**
 * sub_004B22E4
 * Original: 0x004B22E4 - 0x004B2300 (28 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B22E4(void)
{

loc_004B22E4: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004B22ECu); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004B22EC: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x004B22F3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B22F0u); } /* indirect call */
    }

loc_004B22F3: ;
    ecx = MEM32(esi + 0x18);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004B22FEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B22FBu); } /* indirect call */
    }

loc_004B22FE: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004B2300
 * Original: 0x004B2300 - 0x004B230D (13 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B2300(void)
{

loc_004B2300: ;
    ecx = MEM32(ecx + 0x18);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004B230Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B2309u); } /* indirect call */
    }

loc_004B230C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004B230D
 * Original: 0x004B230D - 0x004B233F (50 bytes, 14 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B230D(void)
{

loc_004B230D: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004B2315u); RECOMP_ABI_CALL(0x004E31B4u, sub_004E31B4); /* call 0x004E31B4 */

loc_004B2315: ;
    PUSH32(esp, MEM32(esp + 8));
    eax = MEM32(esp + 0x10);
    PUSH32(esp, 0x6764656C);
    ecx = esi;
    MEM32(esi) = 0x864384;
    MEM32(esi + 8) = 0x864374;
    MEM32(esi + 0x18) = eax;
    PUSH32(esp, 0x004B2339u); RECOMP_ABI_CALL(0x004E3221u, sub_004E3221); /* call 0x004E3221 */

loc_004B2339: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004B233F
 * Original: 0x004B233F - 0x004B2351 (18 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B233F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B233F: ;
    MEM32(ecx) = 0x864384;
    MEM32(ecx + 8) = 0x864374;
    g_seh_ebp = ebp; sub_004E31F2(); return; /* tail jmp 0x004E31F2 */

}

/**
 * sub_004B2351
 * Original: 0x004B2351 - 0x004B236D (28 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B2351(void)
{

loc_004B2351: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004B2359u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004B2359: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x004B2360u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B235Du); } /* indirect call */
    }

loc_004B2360: ;
    ecx = MEM32(esi + 0x18);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004B236Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B2368u); } /* indirect call */
    }

loc_004B236B: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004B236D
 * Original: 0x004B236D - 0x004B239D (48 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B236D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B236D: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004B2375u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004B2375: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x004B237Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B2379u); } /* indirect call */
    }

loc_004B237C: ;
    ecx = MEM32(esp + 8);
    ecx = MEM32(ecx + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    ecx = MEM32(esi + 0x18);
    edx = MEM32(ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004B2394; /* je: equal / zero */

loc_004B238C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004B2392u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B238Fu); } /* indirect call */
    }

loc_004B2392: ;
    goto loc_004B2397;

loc_004B2394: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x004B2397u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B2395u); } /* indirect call */
    }

loc_004B2397: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B239D
 * Original: 0x004B239D - 0x004B23B9 (28 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B239D(void)
{

loc_004B239D: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004B23A5u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004B23A5: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x004B23ACu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B23A9u); } /* indirect call */
    }

loc_004B23AC: ;
    ecx = MEM32(esi + 0x18);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004B23B7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B23B4u); } /* indirect call */
    }

loc_004B23B7: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004B23B9
 * Original: 0x004B23B9 - 0x004B23D5 (28 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B23B9(void)
{

loc_004B23B9: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004B23C1u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004B23C1: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x004B23C8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B23C5u); } /* indirect call */
    }

loc_004B23C8: ;
    ecx = MEM32(esi + 0x1C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004B23D3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B23D0u); } /* indirect call */
    }

loc_004B23D3: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004B23D5
 * Original: 0x004B23D5 - 0x004B243E (105 bytes, 34 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004B23D5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B23D5: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B23E3u); RECOMP_ABI_CALL(0x004E31B4u, sub_004E31B4); /* call 0x004E31B4 */

loc_004B23E3: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, 0);
    MEM32(esi) = 0x8643A4;
    MEM32(esi + 8) = 0x864394;
    MEM32(esi + 0x18) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B23FDu); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004B23FD: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x14);
    ecx = ebp + -32;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B2408u); RECOMP_ABI_CALL(0x004DCBBBu, sub_004DCBBB); /* call 0x004DCBBB */

loc_004B2408: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, 3);
    PUSH32(esp, 0x7F6ED4);
    ecx = ebp + -32;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B2419u); RECOMP_ABI_CALL(0x004DCDDCu, sub_004DCDDC); /* call 0x004DCDDC */

loc_004B2419: ;
    eax = MEM32(ebp + -32);
    ecx = ebp + -32;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x004B2422u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B241Fu); } /* indirect call */
    }

loc_004B2422: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x6771776B);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B242Fu); RECOMP_ABI_CALL(0x004E3221u, sub_004E3221); /* call 0x004E3221 */

loc_004B242F: ;
    ecx = ebp + -32;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B2437u); RECOMP_ABI_CALL(0x004DCC7Fu, sub_004DCC7F); /* call 0x004DCC7F */

loc_004B2437: ;
    eax = esi;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B243E
 * Original: 0x004B243E - 0x004B2450 (18 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B243E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B243E: ;
    MEM32(ecx) = 0x8643A4;
    MEM32(ecx + 8) = 0x864394;
    g_seh_ebp = ebp; sub_004E31F2(); return; /* tail jmp 0x004E31F2 */

}

/**
 * sub_004B2450
 * Original: 0x004B2450 - 0x004B2458 (8 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B2450(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B2450: ;
    ecx = MEM32(ecx + 0x18);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 4)); return; /* indirect tail jmp */

}

/**
 * sub_004B2458
 * Original: 0x004B2458 - 0x004B2488 (48 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B2458(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B2458: ;
    _fa = (uint32_t)(MEM32(ecx + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x18), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B2483; /* je: equal / zero */

loc_004B245E: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(ecx + 0x18);
    if (CMP_EQ(_fa, _fb)) goto loc_004B247F; /* je: equal / zero */

loc_004B246C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x696E676D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x696E676D (32-bit) */
    eax = MEM32(ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004B247A; /* je: equal / zero */

loc_004B2475: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004B2478u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B2475u); } /* indirect call */
    }

loc_004B2478: ;
    goto loc_004B2483;

loc_004B247A: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004B247Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B247Au); } /* indirect call */
    }

loc_004B247D: ;
    goto loc_004B2483;

loc_004B247F: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004B2483u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B2481u); } /* indirect call */
    }

loc_004B2483: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B2488
 * Original: 0x004B2488 - 0x004B248D (5 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B2488(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B2488: ;
    MEM32(ecx + 0x18) = MEM32(ecx + 0x18) & 0;
    _fa = (uint32_t)(MEM32(ecx + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_004B248D
 * Original: 0x004B248D - 0x004B24D5 (72 bytes, 21 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B248D(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B248D: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x004B2496u); RECOMP_ABI_CALL(0x004E31B4u, sub_004E31B4); /* call 0x004E31B4 */

loc_004B2496: ;
    edi = esi + 0x18;
    ecx = edi;
    PUSH32(esp, 0x004B24A0u); RECOMP_ABI_CALL(0x004E36E1u, sub_004E36E1); /* call 0x004E36E1 */

loc_004B24A0: ;
    PUSH32(esp, MEM32(esp + 0xC));
    eax = MEM32(esp + 0x14);
    PUSH32(esp, 0x6771776B);
    ecx = esi;
    MEM32(esi) = 0x8643E4;
    MEM32(esi + 8) = 0x8643D4;
    MEM32(edi) = 0x8643B4;
    MEM32(esi + 0x1C) = eax;
    PUSH32(esp, 0x004B24CAu); RECOMP_ABI_CALL(0x004E3221u, sub_004E3221); /* call 0x004E3221 */

loc_004B24CA: ;
    MEM32(esi + 0x20) = MEM32(esi + 0x20) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004B24D5
 * Original: 0x004B24D5 - 0x004B24D8 (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B24D5(void)
{

loc_004B24D5: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B24D8
 * Original: 0x004B24D8 - 0x004B24DB (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B24D8(void)
{

loc_004B24D8: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B24DB
 * Original: 0x004B24DB - 0x004B24DE (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B24DB(void)
{

loc_004B24DB: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B24DE
 * Original: 0x004B24DE - 0x004B24E1 (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B24DE(void)
{

loc_004B24DE: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004B24E1
 * Original: 0x004B24E1 - 0x004B24E4 (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B24E1(void)
{

loc_004B24E1: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B24E4
 * Original: 0x004B24E4 - 0x004B24E7 (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B24E4(void)
{

loc_004B24E4: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004B24E7
 * Original: 0x004B24E7 - 0x004B250D (38 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B24E7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B24E7: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x18;
    MEM32(esi) = 0x8643E4;
    MEM32(esi + 8) = 0x8643D4;
    MEM32(ecx) = 0x8643B4;
    PUSH32(esp, 0x004B2505u); RECOMP_ABI_CALL(0x004E36EAu, sub_004E36EA); /* call 0x004E36EA */

loc_004B2505: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004E31F2(); return; /* tail jmp 0x004E31F2 */

}

/**
 * sub_004B250D
 * Original: 0x004B250D - 0x004B2536 (41 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B250D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B250D: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004B2515u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004B2515: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x004B251Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B2519u); } /* indirect call */
    }

loc_004B251C: ;
    ecx = MEM32(esi + 0x1C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004B2527u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B2524u); } /* indirect call */
    }

loc_004B2527: ;
    MEM32(esi + 0x20) = 2;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004E314C(); return; /* tail jmp 0x004E314C */

}

/**
 * sub_004B2536
 * Original: 0x004B2536 - 0x004B257A (68 bytes, 17 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B2536(void)
{

loc_004B2536: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004B253Eu); RECOMP_ABI_CALL(0x004E31B4u, sub_004E31B4); /* call 0x004E31B4 */

loc_004B253E: ;
    PUSH32(esp, MEM32(esp + 8));
    eax = MEM32(esp + 0x10);
    MEM32(esi + 0x18) = 0x863F30;
    PUSH32(esp, 0x6368616C);
    ecx = esi;
    MEM32(esi) = 0x86440C;
    MEM32(esi + 8) = 0x8643FC;
    MEM32(esi + 0x18) = 0x8643F4;
    MEM32(esi + 0x1C) = eax;
    MEM8(esi + 0x20) = 0;
    PUSH32(esp, 0x004B2574u); RECOMP_ABI_CALL(0x004E3221u, sub_004E3221); /* call 0x004E3221 */

loc_004B2574: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004B257A
 * Original: 0x004B257A - 0x004B259A (32 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B257A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B257A: ;
    MEM32(ecx) = 0x86440C;
    MEM32(ecx + 8) = 0x8643FC;
    MEM32(ecx + 0x18) = 0x8643F4;
    MEM32(ecx + 0x18) = 0x863F30;
    g_seh_ebp = ebp; sub_004E31F2(); return; /* tail jmp 0x004E31F2 */

}

/**
 * sub_004B259A
 * Original: 0x004B259A - 0x004B25B6 (28 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B259A(void)
{

loc_004B259A: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004B25A2u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004B25A2: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x004B25A9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B25A6u); } /* indirect call */
    }

loc_004B25A9: ;
    ecx = MEM32(esi + 0x1C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004B25B4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B25B1u); } /* indirect call */
    }

loc_004B25B4: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004B25B6
 * Original: 0x004B25B6 - 0x004B25F6 (64 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B25B6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B25B6: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x2C), 0 (32-bit) */
    PUSH32(esp, edi);
    edi = esi + 8;
    MEM32(esi) = 0x86442C;
    MEM32(edi) = 0x86441C;
    if (CMP_EQ(_fa, _fb)) goto loc_004B25DE; /* je: equal / zero */

loc_004B25CF: ;
    PUSH32(esp, 0x004B25D4u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004B25D4: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi + 0x2C));
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004B25DEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B25DBu); } /* indirect call */
    }

loc_004B25DE: ;
    ecx = esi + 0xC;
    PUSH32(esp, 0x004B25E6u); RECOMP_ABI_CALL(0x004DDA4Fu, sub_004DDA4F); /* call 0x004DDA4F */

loc_004B25E6: ;
    ecx = edi;
    PUSH32(esp, 0x004B25EDu); RECOMP_ABI_CALL(0x004E310Cu, sub_004E310C); /* call 0x004E310C */

loc_004B25ED: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004DD576(); return; /* tail jmp 0x004DD576 */

}

/**
 * sub_004B25F6
 * Original: 0x004B25F6 - 0x004B2646 (80 bytes, 31 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B25F6(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B25F6: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebx + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x28), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004B263A; /* jne: not equal / not zero */

loc_004B2601: ;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xC), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B2633; /* je: equal / zero */

loc_004B2607: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x004B260Du); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004B260D: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x1D4);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x004B261Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B2619u); } /* indirect call */
    }

loc_004B261B: ;
    esi = MEM32(esp + 0x10);
    PUSH32(esp, 0x75);
    POP32(esp, ecx);
    edi = eax;
    MEM32(ebx + 0x2C) = eax;
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
    MEM32(ebx + 0x24) = 1;
    POP32(esp, edi);
    goto loc_004B2641;

loc_004B2633: ;
    MEM32(ebx + 0x28) = 3;

loc_004B263A: ;
    MEM32(ebx + 0x24) = 2;

loc_004B2641: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B2646
 * Original: 0x004B2646 - 0x004B2654 (14 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B2646(void)
{

loc_004B2646: ;
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x004B2653u); RECOMP_ABI_CALL(0x004B25F6u, sub_004B25F6); /* call 0x004B25F6 */

loc_004B2653: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004B2654
 * Original: 0x004B2654 - 0x004B26A5 (81 bytes, 38 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B2654(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B2654: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x1C);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_004B26A1; /* je: equal / zero */

loc_004B2661: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_004B2695; /* je: equal / zero */

loc_004B2664: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_004B2686; /* jne: not equal / not zero */

loc_004B2667: ;
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B2686; /* je: equal / zero */

loc_004B266F: ;
    edx = MEM32(esi + 0x18);
    PUSH32(esp, edi);
    edi = MEM32(edx);
    ecx = esi + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004B267Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B267Bu); } /* indirect call */
    }

loc_004B267E: ;
    ecx = MEM32(esi + 0x18);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edi + 4); PUSH32(esp, 0x004B2685u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B2682u); } /* indirect call */
    }

loc_004B2685: ;
    POP32(esp, edi);

loc_004B2686: ;
    ecx = esi + -8;
    PUSH32(esp, 0x004B268Eu); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004B268E: ;
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_004B2695: ;
    ecx = MEM32(esi + 0x18);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi + 0x24));
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004B269Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B269Du); } /* indirect call */
    }

loc_004B269F: ;
    goto loc_004B2686;

loc_004B26A1: ;
    SET_LO8(ebx, 1);
    goto loc_004B268E;

}

/**
 * sub_004B26A5
 * Original: 0x004B26A5 - 0x004B26D7 (50 bytes, 14 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B26A5(void)
{

loc_004B26A5: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004B26ADu); RECOMP_ABI_CALL(0x004E31B4u, sub_004E31B4); /* call 0x004E31B4 */

loc_004B26AD: ;
    PUSH32(esp, MEM32(esp + 8));
    eax = MEM32(esp + 0x10);
    PUSH32(esp, 0x6F6E6C6E);
    ecx = esi;
    MEM32(esi) = 0x864440;
    MEM32(esi + 8) = 0x864430;
    MEM32(esi + 0x18) = eax;
    PUSH32(esp, 0x004B26D1u); RECOMP_ABI_CALL(0x004E3221u, sub_004E3221); /* call 0x004E3221 */

loc_004B26D1: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004B26D7
 * Original: 0x004B26D7 - 0x004B26E9 (18 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B26D7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B26D7: ;
    MEM32(ecx) = 0x864440;
    MEM32(ecx + 8) = 0x864430;
    g_seh_ebp = ebp; sub_004E31F2(); return; /* tail jmp 0x004E31F2 */

}

/**
 * sub_004B26E9
 * Original: 0x004B26E9 - 0x004B26F4 (11 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B26E9(void)
{

loc_004B26E9: ;
    ecx = MEM32(ecx + 0x18);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004B26F3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B26F0u); } /* indirect call */
    }

loc_004B26F3: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004B26F4
 * Original: 0x004B26F4 - 0x004B2723 (47 bytes, 18 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B26F4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B26F4: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    ecx = MEM32(ecx + 0x18);
    if (CMP_EQ(_fa, _fb)) goto loc_004B2717; /* je: equal / zero */

loc_004B2702: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x75757372) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x75757372 (32-bit) */
    eax = MEM32(ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004B2713; /* je: equal / zero */

loc_004B270C: ;
    PUSH32(esp, 0);

loc_004B270E: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004B2711u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B270Eu); } /* indirect call */
    }

loc_004B2711: ;
    goto loc_004B271E;

loc_004B2713: ;
    PUSH32(esp, 1);
    goto loc_004B270E;

loc_004B2717: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(eax + 0x10));
    edx = MEM32(ecx);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x004B271Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B271Cu); } /* indirect call */
    }

loc_004B271E: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B2723
 * Original: 0x004B2723 - 0x004B272E (11 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B2723(void)
{

loc_004B2723: ;
    ecx = MEM32(ecx + 0x18);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004B272Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B272Au); } /* indirect call */
    }

loc_004B272D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004B272E
 * Original: 0x004B272E - 0x004B2760 (50 bytes, 14 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B272E(void)
{

loc_004B272E: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004B2736u); RECOMP_ABI_CALL(0x004E31B4u, sub_004E31B4); /* call 0x004E31B4 */

loc_004B2736: ;
    PUSH32(esp, MEM32(esp + 8));
    eax = MEM32(esp + 0x10);
    PUSH32(esp, 0x6D657367);
    ecx = esi;
    MEM32(esi) = 0x864460;
    MEM32(esi + 8) = 0x864450;
    MEM32(esi + 0x18) = eax;
    PUSH32(esp, 0x004B275Au); RECOMP_ABI_CALL(0x004E3221u, sub_004E3221); /* call 0x004E3221 */

loc_004B275A: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004B2760
 * Original: 0x004B2760 - 0x004B2772 (18 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B2760(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B2760: ;
    MEM32(ecx) = 0x864460;
    MEM32(ecx + 8) = 0x864450;
    g_seh_ebp = ebp; sub_004E31F2(); return; /* tail jmp 0x004E31F2 */

}

/**
 * sub_004B2772
 * Original: 0x004B2772 - 0x004B277D (11 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B2772(void)
{

loc_004B2772: ;
    ecx = MEM32(ecx + 0x18);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004B277Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B2779u); } /* indirect call */
    }

loc_004B277C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004B277D
 * Original: 0x004B277D - 0x004B279A (29 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B277D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B277D: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(ecx + 0x18);
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), 0 (32-bit) */
    eax = MEM32(ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004B2793; /* je: equal / zero */

loc_004B278C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004B2791u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B278Eu); } /* indirect call */
    }

loc_004B2791: ;
    goto loc_004B2795;

loc_004B2793: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004B2795u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B2793u); } /* indirect call */
    }

loc_004B2795: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B279A
 * Original: 0x004B279A - 0x004B27A5 (11 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B279A(void)
{

loc_004B279A: ;
    ecx = MEM32(ecx + 0x18);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004B27A4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B27A1u); } /* indirect call */
    }

loc_004B27A4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004B27A5
 * Original: 0x004B27A5 - 0x004B27C6 (33 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B27A5(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B27A5: ;
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 8));
    esi = ecx;
    ecx = MEM32(esi + 0x70);
    PUSH32(esp, MEM32(esi + 0x74));
    MEM8(esi + 0x7C) = 1;
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004B27BAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B27B8u); } /* indirect call */
    }

loc_004B27BA: ;
    MEM32(esi + 0x70) = MEM32(esi + 0x70) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x70)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x74) = MEM32(esi + 0x74) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x74)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B2809
 * Original: 0x004B2809 - 0x004B2889 (128 bytes, 46 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004B2809(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B2809: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B2817u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004B2817: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x20);
    ecx = ebp + -32;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B2822u); RECOMP_ABI_CALL(0x004DCBBBu, sub_004DCBBB); /* call 0x004DCBBB */

loc_004B2822: ;
    PUSH32(esp, MEM32(ebp + 8));
    ecx = ebp + -32;
    PUSH32(esp, 0x863910);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B2832u); RECOMP_ABI_CALL(0x004DCD3Eu, sub_004DCD3E); /* call 0x004DCD3E */

loc_004B2832: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B2837u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004B2837: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B2843u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004B2843: ;
    esi = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B2862; /* je: equal / zero */

loc_004B284C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = MEM32(ebp + -32);
    ecx = ebp + -32;
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x004B2858u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B2855u); } /* indirect call */
    }

loc_004B2858: ;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B2860u); RECOMP_ABI_CALL(0x004B26A5u, sub_004B26A5); /* call 0x004B26A5 */

loc_004B2860: ;
    goto loc_004B2864;

loc_004B2862: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004B2864: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B286Au); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004B286A: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B2871u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004B2871: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B2878u); RECOMP_ABI_CALL(0x004E32BDu, sub_004E32BD); /* call 0x004E32BD */

loc_004B2878: ;
    ecx = ebp + -32;
    esi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B2882u); RECOMP_ABI_CALL(0x004DCC7Fu, sub_004DCC7F); /* call 0x004DCC7F */

loc_004B2882: ;
    eax = esi;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004B2889
 * Original: 0x004B2889 - 0x004B289B (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B2889(void)
{

loc_004B2889: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004B2891u); RECOMP_ABI_CALL(0x004E36A2u, sub_004E36A2); /* call 0x004E36A2 */

loc_004B2891: ;
    MEM32(esi) = 0x864478;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004B289B
 * Original: 0x004B289B - 0x004B28E4 (73 bytes, 34 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B289B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B289B: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004B28AC; /* jne: not equal / not zero */

loc_004B28A8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_004B28E0;

loc_004B28AC: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004B28B5; /* jne: not equal / not zero */

loc_004B28B0: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_004B28E0;

loc_004B28B5: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004B28BE; /* jne: not equal / not zero */

loc_004B28B9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_004B28E0;

loc_004B28BE: ;
    eax = MEM32(ecx);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004B28C4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B28C1u); } /* indirect call */
    }

loc_004B28C4: ;
    edi = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004B28CDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B28CAu); } /* indirect call */
    }

loc_004B28CD: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_004B28D6; /* jge: greater or equal (signed >=) */

loc_004B28D1: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_004B28DF;

loc_004B28D6: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    SET_LO8(ecx, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    eax = ecx;

loc_004B28DF: ;
    POP32(esp, edi);

loc_004B28E0: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004B28E4
 * Original: 0x004B28E4 - 0x004B2969 (133 bytes, 47 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004B28E4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B28E4: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B28F2u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004B28F2: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x800);
    ecx = ebp + -32;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B2900u); RECOMP_ABI_CALL(0x004DCBBBu, sub_004DCBBB); /* call 0x004DCBBB */

loc_004B2900: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, MEM32(ebp + 8));
    ecx = ebp + -32;
    PUSH32(esp, 0x8642F8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B2912u); RECOMP_ABI_CALL(0x004DCDDCu, sub_004DCDDC); /* call 0x004DCDDC */

loc_004B2912: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B2917u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004B2917: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B2923u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004B2923: ;
    esi = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B2942; /* je: equal / zero */

loc_004B292C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = MEM32(ebp + -32);
    ecx = ebp + -32;
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x004B2938u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B2935u); } /* indirect call */
    }

loc_004B2938: ;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B2940u); RECOMP_ABI_CALL(0x004B22A0u, sub_004B22A0); /* call 0x004B22A0 */

loc_004B2940: ;
    goto loc_004B2944;

loc_004B2942: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004B2944: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B294Au); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004B294A: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B2951u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004B2951: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B2958u); RECOMP_ABI_CALL(0x004E32BDu, sub_004E32BD); /* call 0x004E32BD */

loc_004B2958: ;
    ecx = ebp + -32;
    esi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B2962u); RECOMP_ABI_CALL(0x004DCC7Fu, sub_004DCC7F); /* call 0x004DCC7F */

loc_004B2962: ;
    eax = esi;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004B2969
 * Original: 0x004B2969 - 0x004B29EC (131 bytes, 46 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004B2969(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B2969: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B2977u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004B2977: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x800);
    ecx = ebp + -32;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B2985u); RECOMP_ABI_CALL(0x004DCBBBu, sub_004DCBBB); /* call 0x004DCBBB */

loc_004B2985: ;
    PUSH32(esp, MEM32(ebp + 8));
    ecx = ebp + -32;
    PUSH32(esp, 0x830968);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B2995u); RECOMP_ABI_CALL(0x004DCD3Eu, sub_004DCD3E); /* call 0x004DCD3E */

loc_004B2995: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B299Au); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004B299A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B29A6u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004B29A6: ;
    esi = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B29C5; /* je: equal / zero */

loc_004B29AF: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = MEM32(ebp + -32);
    ecx = ebp + -32;
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x004B29BBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B29B8u); } /* indirect call */
    }

loc_004B29BB: ;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B29C3u); RECOMP_ABI_CALL(0x004B22A0u, sub_004B22A0); /* call 0x004B22A0 */

loc_004B29C3: ;
    goto loc_004B29C7;

loc_004B29C5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004B29C7: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B29CDu); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004B29CD: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B29D4u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004B29D4: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B29DBu); RECOMP_ABI_CALL(0x004E32BDu, sub_004E32BD); /* call 0x004E32BD */

loc_004B29DB: ;
    ecx = ebp + -32;
    esi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B29E5u); RECOMP_ABI_CALL(0x004DCC7Fu, sub_004DCC7F); /* call 0x004DCC7F */

loc_004B29E5: ;
    eax = esi;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004B29EC
 * Original: 0x004B29EC - 0x004B2A2E (66 bytes, 22 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B29EC(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B29EC: ;
    PUSH32(esp, 0x004B29F1u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004B29F1: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0x004B29FDu); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004B29FD: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B2A15; /* je: equal / zero */

loc_004B2A04: ;
    PUSH32(esp, MEM32(esp + 8));
    ecx = eax;
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0x004B2A13u); RECOMP_ABI_CALL(0x004B2224u, sub_004B2224); /* call 0x004B2224 */

loc_004B2A13: ;
    goto loc_004B2A17;

loc_004B2A15: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004B2A17: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004B2A1Du); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004B2A1D: ;
    ecx = eax;
    PUSH32(esp, 0x004B2A24u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004B2A24: ;
    ecx = eax;
    PUSH32(esp, 0x004B2A2Bu); RECOMP_ABI_CALL(0x004E32BDu, sub_004E32BD); /* call 0x004E32BD */

loc_004B2A2B: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004B2A2E
 * Original: 0x004B2A2E - 0x004B2A9D (111 bytes, 38 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004B2A2E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B2A2E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, MEM32(ebp + 8));
    eax = MEM32(0x8E19F0);
    PUSH32(esp, 0x830968);
    MEM32(ebp + -4) = eax;
    eax = ebp + -68;
    PUSH32(esp, 0x40);
    PUSH32(esp, eax);
    MEM8(ebp + -68) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B2A53u); RECOMP_ABI_CALL(0x005E6040u, sub_005E6040); /* call 0x005E6040 */

loc_004B2A53: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B2A58u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004B2A58: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B2A64u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004B2A64: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B2A7B; /* je: equal / zero */

loc_004B2A6B: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = ebp + -68;
    PUSH32(esp, ecx);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B2A79u); RECOMP_ABI_CALL(0x004B230Du, sub_004B230D); /* call 0x004B230D */

loc_004B2A79: ;
    goto loc_004B2A7D;

loc_004B2A7B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004B2A7D: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B2A83u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004B2A83: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B2A8Au); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004B2A8A: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B2A91u); RECOMP_ABI_CALL(0x004E32BDu, sub_004E32BD); /* call 0x004E32BD */

loc_004B2A91: ;
    ecx = MEM32(ebp + -4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B2A99u); RECOMP_ABI_CALL(0x005CFF80u, sub_005CFF80); /* call 0x005CFF80 */

loc_004B2A99: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004B2A9D
 * Original: 0x004B2A9D - 0x004B2AC7 (42 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 9 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004B2A9D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_004B2A9D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x28));
    eax = MEM32(ecx);
    PUSH32(esp, MEM32(ebp + 0x24));
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, 0);
    PUSH32(esp, 0x64);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(eax + 0x30); PUSH32(esp, 0x004B2AC3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B2AC0u); } /* indirect call */
    }

loc_004B2AC3: ;
    POP32(esp, ebp);
    esp += 40; return; /* ret 36 */

}

/**
 * sub_004B2AC7
 * Original: 0x004B2AC7 - 0x004B2C26 (351 bytes, 131 insns)
 * Category: game_network
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004B2AC7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B2AC7: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    MEM32(ebp + -12) = esi;
    MEM32(ebp + -4) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B2ADCu); RECOMP_ABI_CALL(0x004DC976u, sub_004DC976); /* call 0x004DC976 */

loc_004B2ADC: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0xC));
    edx = MEM32(eax);
    ecx = ebp + -12;
    PUSH32(esp, ecx);
    ecx = ebp + -4;
    PUSH32(esp, ecx);
    ecx = ebp + -8;
    PUSH32(esp, ecx);
    ecx = ebp + -16;
    PUSH32(esp, ecx);
    ecx = ebp + -24;
    PUSH32(esp, ecx);
    ecx = ebp + -28;
    PUSH32(esp, ecx);
    ecx = ebp + -20;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x004B2B02u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B2AFFu); } /* indirect call */
    }

loc_004B2B02: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B2B08u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004B2B08: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3000);
    ecx = ebp + -60;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B2B16u); RECOMP_ABI_CALL(0x004DCBBBu, sub_004DCBBB); /* call 0x004DCBBB */

loc_004B2B16: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B2B1Bu); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004B2B1B: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x004B2B22u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B2B1Fu); } /* indirect call */
    }

loc_004B2B22: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x004B2B29u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B2B26u); } /* indirect call */
    }

loc_004B2B29: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, MEM32(ebp + -16));
    PUSH32(esp, MEM32(ebp + -20));
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + -24));
    PUSH32(esp, MEM32(ebp + -28));
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = ebp + -60;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B2B48u); RECOMP_ABI_CALL(0x004BC8A1u, sub_004BC8A1); /* call 0x004BC8A1 */

loc_004B2B48: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x20);
    POP32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x864494);
    ecx = ebp + -60;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B2B5Du); RECOMP_ABI_CALL(0x004DCDDCu, sub_004DCDDC); /* call 0x004DCDDC */

loc_004B2B5D: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B2B72; /* je: equal / zero */

loc_004B2B62: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = ebp + -60;
    PUSH32(esp, 0x830C60);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B2B72u); RECOMP_ABI_CALL(0x004DCD3Eu, sub_004DCD3E); /* call 0x004DCD3E */

loc_004B2B72: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), esi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004B2B88; /* jbe: below or equal (unsigned <=) */

loc_004B2B77: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + -8));
    ecx = ebp + -60;
    PUSH32(esp, 0x864488);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B2B88u); RECOMP_ABI_CALL(0x004DCDDCu, sub_004DCDDC); /* call 0x004DCDDC */

loc_004B2B88: ;
    PUSH32(esp, edi);
    PUSH32(esp, 2);
    PUSH32(esp, 0x7F6ED4);
    ecx = ebp + -60;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B2B98u); RECOMP_ABI_CALL(0x004DCDDCu, sub_004DCDDC); /* call 0x004DCDDC */

loc_004B2B98: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B2B9Du); RECOMP_ABI_CALL(0x004DC9FAu, sub_004DC9FA); /* call 0x004DC9FA */

loc_004B2B9D: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x004B2BA4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B2BA1u); } /* indirect call */
    }

loc_004B2BA4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    ecx = ebp + -60;
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_004B2BB0; /* jne: not equal / not zero */

loc_004B2BAD: ;
    PUSH32(esp, esi);
    goto loc_004B2BB2;

loc_004B2BB0: ;
    PUSH32(esp, 1);

loc_004B2BB2: ;
    PUSH32(esp, 0x864480);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B2BBCu); RECOMP_ABI_CALL(0x004DCDDCu, sub_004DCDDC); /* call 0x004DCDDC */

loc_004B2BBC: ;
    PUSH32(esp, MEM32(ebp + -12));
    ecx = ebp + -60;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B2BC7u); RECOMP_ABI_CALL(0x004DCFFBu, sub_004DCFFB); /* call 0x004DCFFB */

loc_004B2BC7: ;
    eax = ebp + -60;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B2BD0u); RECOMP_ABI_CALL(0x004BC0B3u, sub_004BC0B3); /* call 0x004BC0B3 */

loc_004B2BD0: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B2BD5u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004B2BD5: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x24);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B2BDFu); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004B2BDF: ;
    edi = eax;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B2BFE; /* je: equal / zero */

loc_004B2BE8: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 8));
    eax = MEM32(ebp + -60);
    ecx = ebp + -60;
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x004B2BF4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B2BF1u); } /* indirect call */
    }

loc_004B2BF4: ;
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B2BFCu); RECOMP_ABI_CALL(0x004B248Du, sub_004B248D); /* call 0x004B248D */

loc_004B2BFC: ;
    goto loc_004B2C00;

loc_004B2BFE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004B2C00: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B2C06u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004B2C06: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B2C0Du); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004B2C0D: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B2C14u); RECOMP_ABI_CALL(0x004E32BDu, sub_004E32BD); /* call 0x004E32BD */

loc_004B2C14: ;
    ecx = ebp + -60;
    esi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B2C1Eu); RECOMP_ABI_CALL(0x004DCC7Fu, sub_004DCC7F); /* call 0x004DCC7F */

loc_004B2C1E: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004B2C26
 * Original: 0x004B2C26 - 0x004B2C64 (62 bytes, 21 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B2C26(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B2C26: ;
    PUSH32(esp, 0x004B2C2Bu); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004B2C2B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0x004B2C37u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004B2C37: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B2C4B; /* je: equal / zero */

loc_004B2C3E: ;
    PUSH32(esp, MEM32(esp + 4));
    ecx = eax;
    PUSH32(esp, 0x004B2C49u); RECOMP_ABI_CALL(0x004B23D5u, sub_004B23D5); /* call 0x004B23D5 */

loc_004B2C49: ;
    goto loc_004B2C4D;

loc_004B2C4B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004B2C4D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004B2C53u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004B2C53: ;
    ecx = eax;
    PUSH32(esp, 0x004B2C5Au); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004B2C5A: ;
    ecx = eax;
    PUSH32(esp, 0x004B2C61u); RECOMP_ABI_CALL(0x004E32BDu, sub_004E32BD); /* call 0x004E32BD */

loc_004B2C61: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B2C64
 * Original: 0x004B2C64 - 0x004B2D00 (156 bytes, 50 insns)
 * Category: game_network
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004B2C64(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B2C64: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8E19F0);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    MEM32(ebp + -4) = eax;
    PUSH32(esp, 0x863910);
    esi = 0x100;
    eax = ebp + -260;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    MEM8(ebp + -260) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B2C97u); RECOMP_ABI_CALL(0x005E6040u, sub_005E6040); /* call 0x005E6040 */

loc_004B2C97: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(ebp + 0xC)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0xC), LO8(eax) (8-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, eax);
    PUSH32(esp, 0x830958);
    eax = ebp + -260;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B2CB2u); RECOMP_ABI_CALL(0x005E4200u, sub_005E4200); /* call 0x005E4200 */

loc_004B2CB2: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B2CB7u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004B2CB7: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x24);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B2CC3u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004B2CC3: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_004B2CDE; /* je: equal / zero */

loc_004B2CCB: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = ebp + -260;
    PUSH32(esp, ecx);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B2CDCu); RECOMP_ABI_CALL(0x004B2536u, sub_004B2536); /* call 0x004B2536 */

loc_004B2CDC: ;
    goto loc_004B2CE0;

loc_004B2CDE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004B2CE0: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B2CE6u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004B2CE6: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B2CEDu); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004B2CED: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B2CF4u); RECOMP_ABI_CALL(0x004E32BDu, sub_004E32BD); /* call 0x004E32BD */

loc_004B2CF4: ;
    ecx = MEM32(ebp + -4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B2CFCu); RECOMP_ABI_CALL(0x005CFF80u, sub_005CFF80); /* call 0x005CFF80 */

loc_004B2CFC: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004B2D00
 * Original: 0x004B2D00 - 0x004B2D0B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B2D00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B2D00: ;
    ecx = MEM32(0x90E7AC);
    g_seh_ebp = ebp; sub_004DC207(); return; /* tail jmp 0x004DC207 */

}

/**
 * sub_004B2D0B
 * Original: 0x004B2D0B - 0x004B2DD5 (202 bytes, 67 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004B2D0B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B2D0B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x408) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x408;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8E19F0);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), ebx (32-bit) */
    PUSH32(esp, esi);
    MEM32(ebp + -4) = eax;
    MEM8(ebp + -1032) = LO8(ebx);
    esi = 0x404;
    if (CMP_EQ(_fa, _fb)) goto loc_004B2D48; /* je: equal / zero */

loc_004B2D30: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    eax = ebp + -1032;
    PUSH32(esp, 0x864250);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B2D45u); RECOMP_ABI_CALL(0x005E4510u, sub_005E4510); /* call 0x005E4510 */

loc_004B2D45: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004B2D48: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    eax = ebp + -1032;
    PUSH32(esp, 0x863900);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B2D5Du); RECOMP_ABI_CALL(0x005E6040u, sub_005E6040); /* call 0x005E6040 */

loc_004B2D5D: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B2D88; /* je: equal / zero */

loc_004B2D65: ;
    _fa = (uint32_t)(MEM8(ebp + 0xC)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0xC), LO8(ebx) (8-bit) */
    eax = 0x86449C;
    if (CMP_NE(_fa, _fb)) goto loc_004B2D74; /* jne: not equal / not zero */

loc_004B2D6F: ;
    eax = 0x864248;

loc_004B2D74: ;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, eax);
    eax = ebp + -1032;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B2D85u); RECOMP_ABI_CALL(0x005E6040u, sub_005E6040); /* call 0x005E6040 */

loc_004B2D85: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004B2D88: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B2D8Du); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004B2D8D: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x1C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B2D97u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004B2D97: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B2DB1; /* je: equal / zero */

loc_004B2D9E: ;
    PUSH32(esp, MEM32(ebp + 0x18));
    ecx = ebp + -1032;
    PUSH32(esp, ecx);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B2DAFu); RECOMP_ABI_CALL(0x004B272Eu, sub_004B272E); /* call 0x004B272E */

loc_004B2DAF: ;
    goto loc_004B2DB3;

loc_004B2DB1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004B2DB3: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B2DB9u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004B2DB9: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B2DC0u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004B2DC0: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B2DC7u); RECOMP_ABI_CALL(0x004E32BDu, sub_004E32BD); /* call 0x004E32BD */

loc_004B2DC7: ;
    ecx = MEM32(ebp + -4);
    POP32(esp, esi);
    POP32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B2DD1u); RECOMP_ABI_CALL(0x005CFF80u, sub_005CFF80); /* call 0x005CFF80 */

loc_004B2DD1: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_004B2DD5
 * Original: 0x004B2DD5 - 0x004B2E07 (50 bytes, 14 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B2DD5(void)
{

loc_004B2DD5: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004B2DDDu); RECOMP_ABI_CALL(0x004E31B4u, sub_004E31B4); /* call 0x004E31B4 */

loc_004B2DDD: ;
    PUSH32(esp, MEM32(esp + 8));
    eax = MEM32(esp + 0x10);
    PUSH32(esp, 0x6E657773);
    ecx = esi;
    MEM32(esi) = 0x8644B0;
    MEM32(esi + 8) = 0x8644A0;
    MEM32(esi + 0x18) = eax;
    PUSH32(esp, 0x004B2E01u); RECOMP_ABI_CALL(0x004E3221u, sub_004E3221); /* call 0x004E3221 */

loc_004B2E01: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004B2E07
 * Original: 0x004B2E07 - 0x004B2E30 (41 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B2E07(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B2E07: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x8644B0;
    MEM32(esi + 8) = 0x8644A0;
    PUSH32(esp, 0x004B2E1Cu); RECOMP_ABI_CALL(0x004E31F2u, sub_004E31F2); /* call 0x004E31F2 */

loc_004B2E1C: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004B2E2A; /* je: equal / zero */

loc_004B2E23: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004B2E29u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004B2E29: ;
    POP32(esp, ecx);

loc_004B2E2A: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B2E30
 * Original: 0x004B2E30 - 0x004B2E3F (15 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B2E30(void)
{

loc_004B2E30: ;
    ecx = MEM32(ecx + 0x18);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    PUSH32(esp, 0x7B891F);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004B2E3Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B2E3Cu); } /* indirect call */
    }

loc_004B2E3E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004B2E3F
 * Original: 0x004B2E3F - 0x004B2E7A (59 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B2E3F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B2E3F: ;
    _fa = (uint32_t)(MEM32(ecx + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x18), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B2E75; /* je: equal / zero */

loc_004B2E45: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    ecx = MEM32(ecx + 0x18);
    if (CMP_EQ(_fa, _fb)) goto loc_004B2E6C; /* je: equal / zero */

loc_004B2E53: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6E666E64) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x6E666E64 (32-bit) */
    eax = MEM32(ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004B2E68; /* je: equal / zero */

loc_004B2E5D: ;
    PUSH32(esp, 2);

loc_004B2E5F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7B891F);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004B2E66u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B2E64u); } /* indirect call */
    }

loc_004B2E66: ;
    goto loc_004B2E75;

loc_004B2E68: ;
    PUSH32(esp, 1);
    goto loc_004B2E5F;

loc_004B2E6C: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(eax + 0x10));
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x004B2E75u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B2E73u); } /* indirect call */
    }

loc_004B2E75: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B2E7A
 * Original: 0x004B2E7A - 0x004B2E89 (15 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B2E7A(void)
{

loc_004B2E7A: ;
    ecx = MEM32(ecx + 0x18);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    PUSH32(esp, 0x7B891F);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004B2E88u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B2E86u); } /* indirect call */
    }

loc_004B2E88: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004B2E89
 * Original: 0x004B2E89 - 0x004B2ECC (67 bytes, 22 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B2E89(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B2E89: ;
    PUSH32(esp, 0x004B2E8Eu); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004B2E8E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0x004B2E9Au); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004B2E9A: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B2EB3; /* je: equal / zero */

loc_004B2EA1: ;
    PUSH32(esp, MEM32(esp + 4));
    ecx = eax;
    PUSH32(esp, 0x8644C0);
    PUSH32(esp, 0x004B2EB1u); RECOMP_ABI_CALL(0x004B2DD5u, sub_004B2DD5); /* call 0x004B2DD5 */

loc_004B2EB1: ;
    goto loc_004B2EB5;

loc_004B2EB3: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004B2EB5: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004B2EBBu); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004B2EBB: ;
    ecx = eax;
    PUSH32(esp, 0x004B2EC2u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004B2EC2: ;
    ecx = eax;
    PUSH32(esp, 0x004B2EC9u); RECOMP_ABI_CALL(0x004E32BDu, sub_004E32BD); /* call 0x004E32BD */

loc_004B2EC9: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B2ECC
 * Original: 0x004B2ECC - 0x004B2EED (33 bytes, 8 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B2ECC(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B2ECC: ;
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(ecx + 0x140));
    PUSH32(esp, 0x004B2EE7u); RECOMP_ABI_CALL(0x005E8C60u, sub_005E8C60); /* call 0x005E8C60 */

loc_004B2EE7: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_004B2EF9
 * Original: 0x004B2EF9 - 0x004B2F15 (28 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B2EF9(void)
{

loc_004B2EF9: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004B2F01u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004B2F01: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = esi;
    PUSH32(esp, 4);
    PUSH32(esp, 0x004B2F0Fu); RECOMP_ABI_CALL(0x004DD66Du, sub_004DD66D); /* call 0x004DD66D */

loc_004B2F0F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B2F1A
 * Original: 0x004B2F1A - 0x004B2F32 (24 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B2F1A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B2F1A: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004B2F2C; /* je: equal / zero */

loc_004B2F27: ;
    PUSH32(esp, 0x004B2F2Cu); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_004B2F2C: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B2F44
 * Original: 0x004B2F44 - 0x004B2F5F (27 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B2F44(void)
{

loc_004B2F44: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x004B2F54u); RECOMP_ABI_CALL(0x004DD62Cu, sub_004DD62C); /* call 0x004DD62C */

loc_004B2F54: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B2F5F
 * Original: 0x004B2F5F - 0x004B2F89 (42 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B2F5F(void)
{

loc_004B2F5F: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004B2F67u); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_004B2F67: ;
    PUSH32(esp, MEM32(esp + 0xC));
    MEM32(esi) = 0x8644DC;
    PUSH32(esp, 0x004B2F76u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004B2F76: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = esi + 8;
    PUSH32(esp, 0x004B2F83u); RECOMP_ABI_CALL(0x004DB87Du, sub_004DB87D); /* call 0x004DB87D */

loc_004B2F83: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004B2FC2
 * Original: 0x004B2FC2 - 0x004B2FDD (27 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B2FC2(void)
{

loc_004B2FC2: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x004B2FD2u); RECOMP_ABI_CALL(0x004DD62Cu, sub_004DD62C); /* call 0x004DD62C */

loc_004B2FD2: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B2FDD
 * Original: 0x004B2FDD - 0x004B3007 (42 bytes, 13 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B2FDD(void)
{

loc_004B2FDD: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004B2FE5u); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_004B2FE5: ;
    PUSH32(esp, MEM32(esp + 0xC));
    MEM32(esi) = 0x8644E0;
    PUSH32(esp, 0x004B2FF4u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004B2FF4: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = esi + 8;
    PUSH32(esp, 0x004B3001u); RECOMP_ABI_CALL(0x004DB87Du, sub_004DB87D); /* call 0x004DB87D */

loc_004B3001: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004B3053
 * Original: 0x004B3053 - 0x004B306E (27 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B3053(void)
{

loc_004B3053: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x004B3063u); RECOMP_ABI_CALL(0x004DD62Cu, sub_004DD62C); /* call 0x004DD62C */

loc_004B3063: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B306E
 * Original: 0x004B306E - 0x004B3098 (42 bytes, 13 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B306E(void)
{

loc_004B306E: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004B3076u); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_004B3076: ;
    PUSH32(esp, MEM32(esp + 0xC));
    MEM32(esi) = 0x8644E4;
    PUSH32(esp, 0x004B3085u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004B3085: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = esi + 8;
    PUSH32(esp, 0x004B3092u); RECOMP_ABI_CALL(0x004DB87Du, sub_004DB87D); /* call 0x004DB87D */

loc_004B3092: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004B30A0
 * Original: 0x004B30A0 - 0x004B30CA (42 bytes, 13 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B30A0(void)
{

loc_004B30A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004B30A8u); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_004B30A8: ;
    PUSH32(esp, MEM32(esp + 0xC));
    MEM32(esi) = 0x8644E8;
    PUSH32(esp, 0x004B30B7u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004B30B7: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = esi + 8;
    PUSH32(esp, 0x004B30C4u); RECOMP_ABI_CALL(0x004DB87Du, sub_004DB87D); /* call 0x004DB87D */

loc_004B30C4: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004B30D2
 * Original: 0x004B30D2 - 0x004B30EA (24 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B30D2(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B30D2: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004B30E4; /* je: equal / zero */

loc_004B30DF: ;
    PUSH32(esp, 0x004B30E4u); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_004B30E4: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B30F9
 * Original: 0x004B30F9 - 0x004B3115 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B30F9(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B30F9: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004B3101u); RECOMP_ABI_CALL(0x004E15D8u, sub_004E15D8); /* call 0x004E15D8 */

loc_004B3101: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004B310F; /* je: equal / zero */

loc_004B3108: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004B310Eu); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004B310E: ;
    POP32(esp, ecx);

loc_004B310F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B3115
 * Original: 0x004B3115 - 0x004B3131 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B3115(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B3115: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004B311Du); RECOMP_ABI_CALL(0x004E1628u, sub_004E1628); /* call 0x004E1628 */

loc_004B311D: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004B312B; /* je: equal / zero */

loc_004B3124: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004B312Au); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004B312A: ;
    POP32(esp, ecx);

loc_004B312B: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B3131
 * Original: 0x004B3131 - 0x004B314D (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B3131(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B3131: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004B3139u); RECOMP_ABI_CALL(0x004E1F64u, sub_004E1F64); /* call 0x004E1F64 */

loc_004B3139: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004B3147; /* je: equal / zero */

loc_004B3140: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004B3146u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004B3146: ;
    POP32(esp, ecx);

loc_004B3147: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B314D
 * Original: 0x004B314D - 0x004B3169 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B314D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B314D: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004B3155u); RECOMP_ABI_CALL(0x004E2060u, sub_004E2060); /* call 0x004E2060 */

loc_004B3155: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004B3163; /* je: equal / zero */

loc_004B315C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004B3162u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004B3162: ;
    POP32(esp, ecx);

loc_004B3163: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B3169
 * Original: 0x004B3169 - 0x004B3171 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B3169(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B3169: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004B3467(); return; /* tail jmp 0x004B3467 */

}

/**
 * sub_004B3171
 * Original: 0x004B3171 - 0x004B3179 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B3171(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B3171: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004B38CA(); return; /* tail jmp 0x004B38CA */

}

/**
 * sub_004B3179
 * Original: 0x004B3179 - 0x004B3181 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B3179(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B3179: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004B333C(); return; /* tail jmp 0x004B333C */

}

/**
 * sub_004B3181
 * Original: 0x004B3181 - 0x004B3189 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B3181(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B3181: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004B34A6(); return; /* tail jmp 0x004B34A6 */

}

/**
 * sub_004B3189
 * Original: 0x004B3189 - 0x004B3191 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B3189(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B3189: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004B2E07(); return; /* tail jmp 0x004B2E07 */

}

/**
 * sub_004B3191
 * Original: 0x004B3191 - 0x004B3199 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B3191(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B3191: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004B34C2(); return; /* tail jmp 0x004B34C2 */

}

/**
 * sub_004B3199
 * Original: 0x004B3199 - 0x004B31A1 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B3199(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B3199: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004B33C0(); return; /* tail jmp 0x004B33C0 */

}

/**
 * sub_004B31A1
 * Original: 0x004B31A1 - 0x004B31A9 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B31A1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B31A1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004B36F7(); return; /* tail jmp 0x004B36F7 */

}

/**
 * sub_004B31A9
 * Original: 0x004B31A9 - 0x004B31B1 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B31A9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B31A9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004B3926(); return; /* tail jmp 0x004B3926 */

}

/**
 * sub_004B31B1
 * Original: 0x004B31B1 - 0x004B31B9 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B31B1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B31B1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004B3713(); return; /* tail jmp 0x004B3713 */

}

/**
 * sub_004B31B9
 * Original: 0x004B31B9 - 0x004B31C1 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B31B9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B31B9: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004B3713(); return; /* tail jmp 0x004B3713 */

}

/**
 * sub_004B31C1
 * Original: 0x004B31C1 - 0x004B31C9 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B31C1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B31C1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004B3942(); return; /* tail jmp 0x004B3942 */

}

/**
 * sub_004B31C9
 * Original: 0x004B31C9 - 0x004B31D1 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B31C9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B31C9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004B3553(); return; /* tail jmp 0x004B3553 */

}

/**
 * sub_004B31D1
 * Original: 0x004B31D1 - 0x004B31D9 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B31D1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B31D1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004B3822(); return; /* tail jmp 0x004B3822 */

}

/**
 * sub_004B31D9
 * Original: 0x004B31D9 - 0x004B31E1 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B31D9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B31D9: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004B3822(); return; /* tail jmp 0x004B3822 */

}

/**
 * sub_004B31E1
 * Original: 0x004B31E1 - 0x004B3211 (48 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B31E1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B31E1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004B3651(); return; /* tail jmp 0x004B3651 */

    eax = MEM32(ecx + 0x18);
    eax = MEM32(eax + 0x38);
    eax = MEM32(eax + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_004B3211
 * Original: 0x004B3211 - 0x004B32CE (189 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B3211(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004B3211: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, 4);
    edi = esi + 0x24;
    PUSH32(esp, 0x864504);
    PUSH32(esp, edi);
    PUSH32(esp, 0x004B3227u); RECOMP_ABI_CALL(0x005CC550u, sub_005CC550); /* call 0x005CC550 */

loc_004B3227: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_004B3243; /* jne: not equal / not zero */

loc_004B322E: ;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(4)) >> 32) & 1);
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x28)) >> 32) & 1);
    esi = esi + 0x28;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x004B323Fu); RECOMP_ABI_CALL(0x005CFF90u, sub_005CFF90); /* call 0x005CFF90 */

loc_004B323F: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_004B3267;

loc_004B3243: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x8644FC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x004B3250u); RECOMP_ABI_CALL(0x005CC550u, sub_005CC550); /* call 0x005CC550 */

loc_004B3250: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_004B326E; /* jne: not equal / not zero */

loc_004B3257: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x28)) >> 32) & 1);
    esi = esi + 0x28;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x004B3260u); RECOMP_ABI_CALL(0x005CC5E1u, sub_005CC5E1); /* call 0x005CC5E1 */

loc_004B3260: ;
    POP32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(ecx)));
    eax = eax - MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_004B3267: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_004B32CB;

loc_004B326E: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x8644F4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x004B327Bu); RECOMP_ABI_CALL(0x005CC550u, sub_005CC550); /* call 0x005CC550 */

loc_004B327B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_004B3293; /* jne: not equal / not zero */

loc_004B3282: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x28);
    eax = ZX8(MEM8(eax + 0x24));
    goto loc_004B32CB;

loc_004B3293: ;
    PUSH32(esp, 4);
    esi = 0x8644EC;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x004B32A1u); RECOMP_ABI_CALL(0x005CC550u, sub_005CC550); /* call 0x005CC550 */

loc_004B32A1: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_004B32C8; /* jne: not equal / not zero */

loc_004B32A8: ;
    ecx = MEM32(0x90E7AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x004B32B3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B32B0u); } /* indirect call */
    }

loc_004B32B3: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x004B32BBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B32B8u); } /* indirect call */
    }

loc_004B32BB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004B32CB; /* je: equal / zero */

loc_004B32BF: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x004B32C2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B32C0u); } /* indirect call */
    }

loc_004B32C2: ;
    POP32(esp, ecx);
    eax = ZX8(LO8(eax));
    goto loc_004B32CB;

loc_004B32C8: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_004B32CB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004B32CE
 * Original: 0x004B32CE - 0x004B333C (110 bytes, 32 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B32CE(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B32CE: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x004B32D7u); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_004B32D7: ;
    edi = esi + 8;
    ecx = edi;
    PUSH32(esp, 0x004B32E1u); RECOMP_ABI_CALL(0x004E30ECu, sub_004E30EC); /* call 0x004E30EC */

loc_004B32E1: ;
    eax = MEM32(esp + 0xC);
    MEM32(esi + 0x10) = MEM32(esi + 0x10) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = esi;
    MEM32(esi) = 0x8642E0;
    MEM32(edi) = 0x8642D0;
    MEM32(esi + 0xC) = eax;
    PUSH32(esp, 0x004B32FFu); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_004B32FF: ;
    eax = MEM32(0x90E7AC);
    MEM8(0x90E418) = 1;
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x34);
    eax = MEM32(eax + 0x34);
    PUSH32(esp, esi);
    PUSH32(esp, 0x4B1EE7);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004B3320u); RECOMP_ABI_CALL(0x005E9640u, sub_005E9640); /* call 0x005E9640 */

loc_004B3320: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B3335; /* je: equal / zero */

loc_004B3327: ;
    MEM8(0x90E418) = 0;
    MEM32(esi + 0x10) = 2;

loc_004B3335: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B333C
 * Original: 0x004B333C - 0x004B3358 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B333C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B333C: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004B3344u); RECOMP_ABI_CALL(0x004B1E64u, sub_004B1E64); /* call 0x004B1E64 */

loc_004B3344: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004B3352; /* je: equal / zero */

loc_004B334B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004B3351u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004B3351: ;
    POP32(esp, ecx);

loc_004B3352: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B3358
 * Original: 0x004B3358 - 0x004B33C0 (104 bytes, 32 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B3358(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B3358: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x004B3361u); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_004B3361: ;
    edi = esi + 8;
    ecx = edi;
    PUSH32(esp, 0x004B336Bu); RECOMP_ABI_CALL(0x004E30ECu, sub_004E30EC); /* call 0x004E30EC */

loc_004B336B: ;
    eax = MEM32(esp + 0x10);
    MEM32(esi + 0x10) = MEM32(esi + 0x10) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x14) = MEM32(esi + 0x14) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = esi;
    MEM32(esi) = 0x8642F4;
    MEM32(edi) = 0x8642E4;
    MEM32(esi + 0xC) = eax;
    PUSH32(esp, 0x004B338Du); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_004B338D: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x34);
    eax = MEM32(eax + 0x34);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x4B203E);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004B33ABu); RECOMP_ABI_CALL(0x005E9E60u, sub_005E9E60); /* call 0x005E9E60 */

loc_004B33AB: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B33B9; /* je: equal / zero */

loc_004B33B2: ;
    MEM32(esi + 0x14) = 2;

loc_004B33B9: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004B33C0
 * Original: 0x004B33C0 - 0x004B33DC (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B33C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B33C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004B33C8u); RECOMP_ABI_CALL(0x004B1F0Bu, sub_004B1F0B); /* call 0x004B1F0B */

loc_004B33C8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004B33D6; /* je: equal / zero */

loc_004B33CF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004B33D5u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004B33D5: ;
    POP32(esp, ecx);

loc_004B33D6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B33DC
 * Original: 0x004B33DC - 0x004B33FF (35 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B33DC(void)
{

loc_004B33DC: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x34);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(eax + 0x34));
    esi = ecx;
    PUSH32(esp, 0x004B33F2u); RECOMP_ABI_CALL(0x005E9AC0u, sub_005E9AC0); /* call 0x005E9AC0 */

loc_004B33F2: ;
    POP32(esp, ecx);
    ecx = esi + -8;
    PUSH32(esp, 0x004B33FBu); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004B33FB: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B33FF
 * Original: 0x004B33FF - 0x004B3467 (104 bytes, 32 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B33FF(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B33FF: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x004B3408u); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_004B3408: ;
    edi = esi + 8;
    ecx = edi;
    PUSH32(esp, 0x004B3412u); RECOMP_ABI_CALL(0x004E30ECu, sub_004E30EC); /* call 0x004E30EC */

loc_004B3412: ;
    eax = MEM32(esp + 0x10);
    MEM32(esi + 0x10) = MEM32(esi + 0x10) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x14) = MEM32(esi + 0x14) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = esi;
    MEM32(esi) = 0x864310;
    MEM32(edi) = 0x864300;
    MEM32(esi + 0xC) = eax;
    PUSH32(esp, 0x004B3434u); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_004B3434: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x34);
    eax = MEM32(eax + 0x34);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x4B2184);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004B3452u); RECOMP_ABI_CALL(0x005E9F00u, sub_005E9F00); /* call 0x005E9F00 */

loc_004B3452: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B3460; /* je: equal / zero */

loc_004B3459: ;
    MEM32(esi + 0x14) = 2;

loc_004B3460: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004B3467
 * Original: 0x004B3467 - 0x004B3483 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B3467(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B3467: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004B346Fu); RECOMP_ABI_CALL(0x004B204Cu, sub_004B204C); /* call 0x004B204C */

loc_004B346F: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004B347D; /* je: equal / zero */

loc_004B3476: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004B347Cu); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004B347C: ;
    POP32(esp, ecx);

loc_004B347D: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B3483
 * Original: 0x004B3483 - 0x004B34A6 (35 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B3483(void)
{

loc_004B3483: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x34);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(eax + 0x34));
    esi = ecx;
    PUSH32(esp, 0x004B3499u); RECOMP_ABI_CALL(0x005E9AC0u, sub_005E9AC0); /* call 0x005E9AC0 */

loc_004B3499: ;
    POP32(esp, ecx);
    ecx = esi + -8;
    PUSH32(esp, 0x004B34A2u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004B34A2: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B34A6
 * Original: 0x004B34A6 - 0x004B34C2 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B34A6(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B34A6: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004B34AEu); RECOMP_ABI_CALL(0x004B21C4u, sub_004B21C4); /* call 0x004B21C4 */

loc_004B34AE: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004B34BC; /* je: equal / zero */

loc_004B34B5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004B34BBu); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004B34BB: ;
    POP32(esp, ecx);

loc_004B34BC: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B34C2
 * Original: 0x004B34C2 - 0x004B34DE (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B34C2(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B34C2: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004B34CAu); RECOMP_ABI_CALL(0x004B2256u, sub_004B2256); /* call 0x004B2256 */

loc_004B34CA: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004B34D8; /* je: equal / zero */

loc_004B34D1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004B34D7u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004B34D7: ;
    POP32(esp, ecx);

loc_004B34D8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B34DE
 * Original: 0x004B34DE - 0x004B3553 (117 bytes, 44 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B34DE(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B34DE: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x004B34E7u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004B34E7: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x004B34EEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B34EBu); } /* indirect call */
    }

loc_004B34EE: ;
    edx = MEM32(esp + 0xC);
    edi = eax;
    eax = MEM32(edx + 0xC);
    ecx = 0x696E7670;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_004B3520; /* jg: greater (signed >) */

loc_004B3500: ;
    if (CMP_EQ(_fa, _fb)) goto loc_004B3520; /* je: equal / zero */

loc_004B3502: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B3532; /* je: equal / zero */

loc_004B3506: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x61757468) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x61757468 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B3520; /* je: equal / zero */

loc_004B350D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6475706C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x6475706C (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B3520; /* je: equal / zero */

loc_004B3514: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x66696C74) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x66696C74 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B3520; /* je: equal / zero */

loc_004B351B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x696E676D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x696E676D (32-bit) */

loc_004B3520: ;
    ecx = MEM32(esi + 0x18);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004B352Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B3528u); } /* indirect call */
    }

loc_004B352B: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_004B3532: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x38);
    PUSH32(esp, MEM32(edx + 0x10));
    ecx = MEM32(eax + 0x14);
    PUSH32(esp, 0x004B3548u); RECOMP_ABI_CALL(0x004BB039u, sub_004BB039); /* call 0x004BB039 */

loc_004B3548: ;
    ecx = MEM32(esi + 0x18);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x004B3551u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B354Fu); } /* indirect call */
    }

loc_004B3551: ;
    goto loc_004B352B;

}

/**
 * sub_004B3553
 * Original: 0x004B3553 - 0x004B356F (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B3553(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B3553: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004B355Bu); RECOMP_ABI_CALL(0x004B22D2u, sub_004B22D2); /* call 0x004B22D2 */

loc_004B355B: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004B3569; /* je: equal / zero */

loc_004B3562: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004B3568u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004B3568: ;
    POP32(esp, ecx);

loc_004B3569: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B356F
 * Original: 0x004B356F - 0x004B3651 (226 bytes, 91 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B356F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B356F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x004B3579u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004B3579: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x004B3580u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B357Du); } /* indirect call */
    }

loc_004B3580: ;
    ebx = eax;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(eax + 0xC);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B35E9; /* je: equal / zero */

loc_004B358F: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6D697373) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x6D697373 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B359F; /* je: equal / zero */

loc_004B3597: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7567616D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x7567616D (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B35AE; /* je: equal / zero */

loc_004B359F: ;
    ecx = MEM32(esi + 0x18);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004B35A9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B35A6u); } /* indirect call */
    }

loc_004B35A9: ;
    goto loc_004B3649;

loc_004B35AE: ;
    PUSH32(esp, 0x004B35B3u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004B35B3: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x004B35BDu); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004B35BD: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B35CF; /* je: equal / zero */

loc_004B35C4: ;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    ecx = eax;
    PUSH32(esp, 0x004B35CDu); RECOMP_ABI_CALL(0x004B306Eu, sub_004B306E); /* call 0x004B306E */

loc_004B35CD: ;
    goto loc_004B35D1;

loc_004B35CF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004B35D1: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004B35D7u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004B35D7: ;
    ecx = eax;
    PUSH32(esp, 0x004B35DEu); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004B35DE: ;
    ecx = MEM32(esi + 0x18);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x004B35E7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B35E5u); } /* indirect call */
    }

loc_004B35E7: ;
    goto loc_004B3649;

loc_004B35E9: ;
    ecx = MEM32(0x90E7AC);
    ecx = MEM32(ecx + 0x18);
    ecx = MEM32(ecx + 0x38);
    ecx = MEM32(ecx + 0x14);
    PUSH32(esp, ebp);
    PUSH32(esp, MEM32(eax + 0x10));
    PUSH32(esp, 0x004B3601u); RECOMP_ABI_CALL(0x004BB039u, sub_004BB039); /* call 0x004BB039 */

loc_004B3601: ;
    ebp = eax;
    PUSH32(esp, 0x004B3608u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004B3608: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x004B3612u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004B3612: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B3625; /* je: equal / zero */

loc_004B3619: ;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    ecx = eax;
    PUSH32(esp, 0x004B3623u); RECOMP_ABI_CALL(0x004B306Eu, sub_004B306E); /* call 0x004B306E */

loc_004B3623: ;
    goto loc_004B3627;

loc_004B3625: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004B3627: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004B362Du); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004B362D: ;
    ecx = eax;
    PUSH32(esp, 0x004B3634u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004B3634: ;
    edi = eax;
    PUSH32(esp, ebp);
    ecx = edi + 8;
    PUSH32(esp, 0x004B363Fu); RECOMP_ABI_CALL(0x004DB91Cu, sub_004DB91C); /* call 0x004DB91C */

loc_004B363F: ;
    ecx = MEM32(esi + 0x18);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004B3648u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B3646u); } /* indirect call */
    }

loc_004B3648: ;
    POP32(esp, ebp);

loc_004B3649: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B3651
 * Original: 0x004B3651 - 0x004B366D (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B3651(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B3651: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004B3659u); RECOMP_ABI_CALL(0x004B233Fu, sub_004B233F); /* call 0x004B233F */

loc_004B3659: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004B3667; /* je: equal / zero */

loc_004B3660: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004B3666u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004B3666: ;
    POP32(esp, ecx);

loc_004B3667: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B366D
 * Original: 0x004B366D - 0x004B36B5 (72 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B366D(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B366D: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004B3675u); RECOMP_ABI_CALL(0x004E31B4u, sub_004E31B4); /* call 0x004E31B4 */

loc_004B3675: ;
    PUSH32(esp, MEM32(esp + 8));
    eax = MEM32(esp + 0x10);
    MEM32(esi + 0x18) = 0x863F30;
    MEM32(esi + 0x20) = MEM32(esi + 0x20) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi) = 0x864524;
    MEM32(esi + 8) = 0x864514;
    MEM32(esi + 0x18) = 0x86450C;
    MEM32(esi + 0x1C) = eax;
    MEM32(esi + 0x24) = MEM32(esi + 0x24) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0x67736561);
    ecx = esi;
    PUSH32(esp, 0x004B36AFu); RECOMP_ABI_CALL(0x004E3221u, sub_004E3221); /* call 0x004E3221 */

loc_004B36AF: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004B36B5
 * Original: 0x004B36B5 - 0x004B36BD (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B36B5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B36B5: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004B4E03(); return; /* tail jmp 0x004B4E03 */

}

/**
 * sub_004B36BD
 * Original: 0x004B36BD - 0x004B36C5 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B36BD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B36BD: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004B4E03(); return; /* tail jmp 0x004B4E03 */

}

/**
 * sub_004B36C5
 * Original: 0x004B36C5 - 0x004B36F7 (50 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B36C5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B36C5: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x864524;
    MEM32(esi + 8) = 0x864514;
    MEM32(esi + 0x18) = 0x86450C;
    ecx = MEM32(esi + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B36E8; /* je: equal / zero */

loc_004B36E3: ;
    PUSH32(esp, 0x004B36E8u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004B36E8: ;
    MEM32(esi + 0x18) = 0x863F30;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004E31F2(); return; /* tail jmp 0x004E31F2 */

}

/**
 * sub_004B36F7
 * Original: 0x004B36F7 - 0x004B3713 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B36F7(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B36F7: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004B36FFu); RECOMP_ABI_CALL(0x004B243Eu, sub_004B243E); /* call 0x004B243E */

loc_004B36FF: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004B370D; /* je: equal / zero */

loc_004B3706: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004B370Cu); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004B370C: ;
    POP32(esp, ecx);

loc_004B370D: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B3713
 * Original: 0x004B3713 - 0x004B372F (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B3713(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B3713: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004B371Bu); RECOMP_ABI_CALL(0x004B24E7u, sub_004B24E7); /* call 0x004B24E7 */

loc_004B371B: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004B3729; /* je: equal / zero */

loc_004B3722: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004B3728u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004B3728: ;
    POP32(esp, ecx);

loc_004B3729: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B372F
 * Original: 0x004B372F - 0x004B3789 (90 bytes, 37 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004B372F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004B372F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x90E7AC);
    eax = MEM32(edi);
    esi = ecx;
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x004B3745u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B3742u); } /* indirect call */
    }

loc_004B3745: ;
    ebx = eax;
    eax = esi + -24;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -4) = eax;
    eax = ebp + -4;
    PUSH32(esp, eax);
    eax = MEM32(edi + 0x18);
    eax = MEM32(eax + 0x38);
    ecx = MEM32(eax + 0x14);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x10)) >> 32) & 1);
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B3768u); RECOMP_ABI_CALL(0x004DD8B2u, sub_004DD8B2); /* call 0x004DD8B2 */

loc_004B3768: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 8));
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004B3773u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B3771u); } /* indirect call */
    }

loc_004B3773: ;
    ecx = esi + -24;
    MEM32(esi + 8) = 2;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B3782u); RECOMP_ABI_CALL(0x004E314Cu, sub_004E314C); /* call 0x004E314C */

loc_004B3782: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B3789
 * Original: 0x004B3789 - 0x004B37E7 (94 bytes, 40 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004B3789(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B3789: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B3795u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004B3795: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x004B379Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B3799u); } /* indirect call */
    }

loc_004B379C: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x20), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004B37DF; /* jne: not equal / not zero */

loc_004B37A5: ;
    ecx = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xC), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004B37D5; /* jne: not equal / not zero */

loc_004B37AD: ;
    eax = esi + 0x18;
    MEM32(ebp + 8) = eax;
    eax = ebp + 8;
    PUSH32(esp, eax);
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x38);
    ecx = MEM32(eax + 0x14);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B37D0u); RECOMP_ABI_CALL(0x004DD750u, sub_004DD750); /* call 0x004DD750 */

loc_004B37D0: ;
    MEM32(esi + 0x20) = ebx;
    goto loc_004B37DF;

loc_004B37D5: ;
    ecx = MEM32(esi + 0x1C);
    esi = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(esi + 4); PUSH32(esp, 0x004B37DFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B37DCu); } /* indirect call */
    }

loc_004B37DF: ;
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B37E7
 * Original: 0x004B37E7 - 0x004B3822 (59 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004B37E7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B37E7: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x20), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004B3814; /* jne: not equal / not zero */

loc_004B37F4: ;
    eax = esi + 0x18;
    MEM32(ebp + -4) = eax;
    eax = ebp + -4;
    PUSH32(esp, eax);
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x38);
    ecx = MEM32(eax + 0x14);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B3814u); RECOMP_ABI_CALL(0x004DD8B2u, sub_004DD8B2); /* call 0x004DD8B2 */

loc_004B3814: ;
    MEM32(esi + 0x1C) = MEM32(esi + 0x1C) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x20) = 2;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004B3822
 * Original: 0x004B3822 - 0x004B383E (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B3822(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B3822: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004B382Au); RECOMP_ABI_CALL(0x004B257Au, sub_004B257A); /* call 0x004B257A */

loc_004B382A: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004B3838; /* je: equal / zero */

loc_004B3831: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004B3837u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004B3837: ;
    POP32(esp, ecx);

loc_004B3838: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B383E
 * Original: 0x004B383E - 0x004B38CA (140 bytes, 46 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B383E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B383E: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x004B3847u); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_004B3847: ;
    edi = esi + 8;
    ecx = edi;
    PUSH32(esp, 0x004B3851u); RECOMP_ABI_CALL(0x004E30ECu, sub_004E30EC); /* call 0x004E30EC */

loc_004B3851: ;
    MEM32(esi) = 0x86442C;
    MEM32(edi) = 0x86441C;
    PUSH32(esp, 0x004B3862u); RECOMP_ABI_CALL(0x004DC96Bu, sub_004DC96B); /* call 0x004DC96B */

loc_004B3862: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = esi + 0xC;
    PUSH32(esp, 0x004B386Fu); RECOMP_ABI_CALL(0x004DD9B8u, sub_004DD9B8); /* call 0x004DD9B8 */

loc_004B386F: ;
    eax = MEM32(esp + 0x10);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    MEM32(esi + 0x20) = eax;
    MEM32(esi + 0x24) = edi;
    MEM32(esi + 0x28) = edi;
    MEM32(esi + 0x2C) = edi;
    PUSH32(esp, 0x004B3888u); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_004B3888: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x34);
    eax = MEM32(eax + 0x38);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x4B2646);
    PUSH32(esp, MEM32(esp + 0x1C));
    PUSH32(esp, eax);
    PUSH32(esp, 0x004B38A9u); RECOMP_ABI_CALL(0x005EA240u, sub_005EA240); /* call 0x005EA240 */

loc_004B38A9: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B38C3; /* je: equal / zero */

loc_004B38B0: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFEu (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM32(esi + 0x24) = 2;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x28) = ecx;

loc_004B38C3: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004B38CA
 * Original: 0x004B38CA - 0x004B38E6 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B38CA(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B38CA: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004B38D2u); RECOMP_ABI_CALL(0x004B25B6u, sub_004B25B6); /* call 0x004B25B6 */

loc_004B38D2: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004B38E0; /* je: equal / zero */

loc_004B38D9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004B38DFu); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004B38DF: ;
    POP32(esp, ecx);

loc_004B38E0: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B38E6
 * Original: 0x004B38E6 - 0x004B3926 (64 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B38E6(void)
{

loc_004B38E6: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x34);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(eax + 0x38));
    esi = ecx;
    PUSH32(esp, 0x004B38FDu); RECOMP_ABI_CALL(0x005EA1F0u, sub_005EA1F0); /* call 0x005EA1F0 */

loc_004B38FD: ;
    edx = MEM32(esi + 0x18);
    POP32(esp, ecx);
    PUSH32(esp, 4);
    POP32(esp, eax);
    MEM32(esi + 0x20) = eax;
    edi = MEM32(edx);
    ecx = esi + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004B3912u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B390Fu); } /* indirect call */
    }

loc_004B3912: ;
    ecx = MEM32(esi + 0x18);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edi + 4); PUSH32(esp, 0x004B3919u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B3916u); } /* indirect call */
    }

loc_004B3919: ;
    ecx = esi + -8;
    PUSH32(esp, 0x004B3921u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004B3921: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B3926
 * Original: 0x004B3926 - 0x004B3942 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B3926(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B3926: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004B392Eu); RECOMP_ABI_CALL(0x004B26D7u, sub_004B26D7); /* call 0x004B26D7 */

loc_004B392E: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004B393C; /* je: equal / zero */

loc_004B3935: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004B393Bu); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004B393B: ;
    POP32(esp, ecx);

loc_004B393C: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B3942
 * Original: 0x004B3942 - 0x004B395E (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B3942(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B3942: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004B394Au); RECOMP_ABI_CALL(0x004B2760u, sub_004B2760); /* call 0x004B2760 */

loc_004B394A: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004B3958; /* je: equal / zero */

loc_004B3951: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004B3957u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004B3957: ;
    POP32(esp, ecx);

loc_004B3958: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B395E
 * Original: 0x004B395E - 0x004B39AF (81 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B395E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B395E: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0x004B3967u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004B3967: ;
    esi = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004B3970u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B396Du); } /* indirect call */
    }

loc_004B3970: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B39AC; /* je: equal / zero */

loc_004B3974: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x30); PUSH32(esp, 0x004B397Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B3979u); } /* indirect call */
    }

loc_004B397C: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x004B3983u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B3980u); } /* indirect call */
    }

loc_004B3983: ;
    ebp = eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B39AB; /* je: equal / zero */

loc_004B3989: ;
    esi = edi + 0x40;
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 0xC);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004B39AA; /* jbe: below or equal (unsigned <=) */

loc_004B3996: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x004B399Eu); RECOMP_ABI_CALL(0x004DD726u, sub_004DD726); /* call 0x004DD726 */

loc_004B399E: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004B39A5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B39A3u); } /* indirect call */
    }

loc_004B39A5: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004B3996; /* jb: below (unsigned <) */

loc_004B39AA: ;
    POP32(esp, ebx);

loc_004B39AB: ;
    POP32(esp, ebp);

loc_004B39AC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004B39AF
 * Original: 0x004B39AF - 0x004B39BD (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B39AF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B39AF: ;
    ecx = MEM32(esp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B39BC; /* je: equal / zero */

loc_004B39B7: ;
    g_seh_ebp = ebp; sub_004B395E(); return; /* tail jmp 0x004B395E */

loc_004B39BC: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004B39BD
 * Original: 0x004B39BD - 0x004B3B95 (472 bytes, 172 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004B39BD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B39BD: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8E19F0);
    MEM32(ebp + -4) = eax;
    PUSH32(esp, edi);
    edi = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(edi + 0x94)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x94), eax (32-bit) */
    MEM32(ebp + -44) = edi;
    MEM32(ebp + -56) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_004B3AC9; /* jbe: below or equal (unsigned <=) */

loc_004B39E2: ;
    PUSH32(esp, ebx);
    MEM32(ebp + -52) = eax;
    PUSH32(esp, esi);

loc_004B39E7: ;
    eax = MEM32(edi + 0x90);
    _fb = (uint32_t)(MEM32(ebp + -52)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ebp + -52);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2B706F70) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x2B706F70 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B3ADF; /* je: equal / zero */

loc_004B39FF: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2B726F6D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x2B726F6D (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004B3AAE; /* jne: not equal / not zero */

loc_004B3A0B: ;
    PUSH32(esp, 0xFFFFFFFFu);
    esi = eax + 0x10;
    PUSH32(esp, 0x864538);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B3A1Bu); RECOMP_ABI_CALL(0x005E3F40u, sub_005E3F40); /* call 0x005E3F40 */

loc_004B3A1B: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B3A23u); RECOMP_ABI_CALL(0x005E4400u, sub_005E4400); /* call 0x005E4400 */

loc_004B3A23: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_L(_fas, _fbs)) goto loc_004B3AAE; /* jl: less (signed <) */

loc_004B3A2D: ;
    PUSH32(esp, 0x864264);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B3A38u); RECOMP_ABI_CALL(0x005E3F40u, sub_005E3F40); /* call 0x005E3F40 */

loc_004B3A38: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004B3A6E; /* je: equal / zero */

loc_004B3A3E: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x24);
    ecx = ebp + -40;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B3A4Fu); RECOMP_ABI_CALL(0x005E4A10u, sub_005E4A10); /* call 0x005E4A10 */

loc_004B3A4F: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x34);
    eax = MEM32(eax + 0x34);
    PUSH32(esp, 0);
    ecx = ebp + -40;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B3A69u); RECOMP_ABI_CALL(0x005E9C20u, sub_005E9C20); /* call 0x005E9C20 */

loc_004B3A69: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_004B3A85;

loc_004B3A6E: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x864534);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B3A7Bu); RECOMP_ABI_CALL(0x005E3F40u, sub_005E3F40); /* call 0x005E3F40 */

loc_004B3A7B: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B3A83u); RECOMP_ABI_CALL(0x005E4400u, sub_005E4400); /* call 0x005E4400 */

loc_004B3A83: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_004B3A85: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004B3AAE; /* jl: less (signed <) */

loc_004B3A89: ;
    esi = edi + -84;
    ebx = MEM32(esi + 0xC);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004B3AAB; /* jbe: below or equal (unsigned <=) */

loc_004B3A95: ;
    PUSH32(esp, edi);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B3A9Du); RECOMP_ABI_CALL(0x004DD726u, sub_004DD726); /* call 0x004DD726 */

loc_004B3A9D: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004B3AA6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B3AA3u); } /* indirect call */
    }

loc_004B3AA6: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004B3A95; /* jb: below (unsigned <) */

loc_004B3AAB: ;
    edi = MEM32(ebp + -44);

loc_004B3AAE: ;
    MEM32(ebp + -56) = MEM32(ebp + -56) + 1;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + -56);
    _fb = (uint32_t)(0x674) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -52) = MEM32(ebp + -52) + 0x674;
    _fa = (uint32_t)(MEM32(ebp + -52)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x94)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 0x94) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004B39E7; /* jb: below (unsigned <) */

loc_004B3AC7: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_004B3AC9: ;
    MEM32(edi + 0x94) = MEM32(edi + 0x94) & 0;
    _fa = (uint32_t)(MEM32(edi + 0x94)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = MEM32(ebp + -4);
    SET_LO8(eax, 1);
    POP32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B3ADBu); RECOMP_ABI_CALL(0x005CFF80u, sub_005CFF80); /* call 0x005CFF80 */

loc_004B3ADB: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

loc_004B3ADF: ;
    esi = eax + 0x10;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_004B3B86;

loc_004B3AE9: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x30) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x30 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004B3AAE; /* jl: less (signed <) */

loc_004B3AEF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x39) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x39 (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_004B3B03; /* jg: greater (signed >) */

loc_004B3AF3: ;
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ebx + ebx * 4;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = eax + ecx * 2;
    SET_LO8(eax, MEM8(esi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x30) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x30 (8-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_004B3AEF; /* jge: greater or equal (signed >=) */

loc_004B3B03: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B3AAE; /* je: equal / zero */

loc_004B3B07: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B3B13; /* je: equal / zero */

loc_004B3B0C: ;
    goto loc_004B3B12;

loc_004B3B0E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x39) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x39 (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_004B3B19; /* jg: greater (signed >) */

loc_004B3B12: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_004B3B13: ;
    SET_LO8(eax, MEM8(esi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x30) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x30 (8-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_004B3B0E; /* jge: greater or equal (signed >=) */

loc_004B3B19: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B3B1F; /* je: equal / zero */

loc_004B3B1E: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_004B3B1F: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B3B24u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004B3B24: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xC);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B3B30u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004B3B30: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B3B41; /* je: equal / zero */

loc_004B3B37: ;
    PUSH32(esp, ebx);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B3B3Fu); RECOMP_ABI_CALL(0x004BB415u, sub_004BB415); /* call 0x004BB415 */

loc_004B3B3F: ;
    goto loc_004B3B43;

loc_004B3B41: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004B3B43: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B3B49u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004B3B49: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B3B50u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004B3B50: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B3B57u); RECOMP_ABI_CALL(0x004BB54Bu, sub_004BB54B); /* call 0x004BB54B */

loc_004B3B57: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004B3B86; /* jl: less (signed <) */

loc_004B3B5B: ;
    ebx = MEM32(edi + -72);
    MEM32(ebp + -48) = MEM32(ebp + -48) & 0;
    _fa = (uint32_t)(MEM32(ebp + -48)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xFFFFFFACu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xFFFFFFACu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004B3B83; /* jbe: below or equal (unsigned <=) */

loc_004B3B69: ;
    PUSH32(esp, MEM32(ebp + -48));
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B3B73u); RECOMP_ABI_CALL(0x004DD726u, sub_004DD726); /* call 0x004DD726 */

loc_004B3B73: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004B3B7Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B3B79u); } /* indirect call */
    }

loc_004B3B7B: ;
    MEM32(ebp + -48) = MEM32(ebp + -48) + 1;
    _fa = (uint32_t)(MEM32(ebp + -48)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + -48)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -48), ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004B3B69; /* jb: below (unsigned <) */

loc_004B3B83: ;
    edi = MEM32(ebp + -44);

loc_004B3B86: ;
    SET_LO8(eax, MEM8(esi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004B3AE9; /* jne: not equal / not zero */

loc_004B3B90: ;
    goto loc_004B3AAE;

}

/**
 * sub_004B3B95
 * Original: 0x004B3B95 - 0x004B3C09 (116 bytes, 46 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B3B95(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004B3B95: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 0x74) = eax;
    PUSH32(esp, 0x004B3BA5u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004B3BA5: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x004B3BB1u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004B3BB1: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004B3BCE; /* je: equal / zero */

loc_004B3BB8: ;
    ecx = esi + -124;
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    edx = esi + 4;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x004B3BCCu); RECOMP_ABI_CALL(0x004B32CEu, sub_004B32CE); /* call 0x004B32CE */

loc_004B3BCC: ;
    goto loc_004B3BD0;

loc_004B3BCE: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004B3BD0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004B3BD6u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004B3BD6: ;
    ecx = eax;
    PUSH32(esp, 0x004B3BDDu); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004B3BDD: ;
    ecx = MEM32(0x90E7AC);
    ecx = MEM32(ecx + 0x18);
    ecx = MEM32(ecx + 0x24);
    ecx = MEM32(ecx + 0xC);
    edx = MEM32(ecx);
    ebx = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ebx) != 0);
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ebx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    _cf = 0; /* logical op clears CF */
    ebx = ebx & eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004B3C01u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B3BFEu); } /* indirect call */
    }

loc_004B3C01: ;
    MEM32(esi + 0x78) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B3C09
 * Original: 0x004B3C09 - 0x004B3D7A (369 bytes, 133 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004B3C09(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B3C09: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x824) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x824;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8E19F0);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    _fa = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x70726976) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 8), 0x70726976 (32-bit) */
    MEM32(ebp + -4) = eax;
    MEM32(ebp + -2080) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_004B3D6D; /* jne: not equal / not zero */

loc_004B3C31: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x864268);
    PUSH32(esp, MEM32(edi + 0x10));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B3C40u); RECOMP_ABI_CALL(0x005E3F40u, sub_005E3F40); /* call 0x005E3F40 */

loc_004B3C40: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B3C48u); RECOMP_ABI_CALL(0x005E45C0u, sub_005E45C0); /* call 0x005E45C0 */

loc_004B3C48: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x8000000 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (TEST_Z(_fa, _fb)) goto loc_004B3D6D; /* je: equal / zero */

loc_004B3C55: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = 0x7B891F;
    PUSH32(esp, esi);
    PUSH32(esp, 0x10);
    eax = ebp + -20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x864264);
    PUSH32(esp, MEM32(edi + 0x10));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B3C70u); RECOMP_ABI_CALL(0x005E3F40u, sub_005E3F40); /* call 0x005E3F40 */

loc_004B3C70: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B3C78u); RECOMP_ABI_CALL(0x005E4A10u, sub_005E4A10); /* call 0x005E4A10 */

loc_004B3C78: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    ebx = 0x404;
    PUSH32(esp, ebx);
    eax = ebp + -1048;
    PUSH32(esp, eax);
    PUSH32(esp, 0x864260);
    PUSH32(esp, MEM32(edi + 0x10));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B3C96u); RECOMP_ABI_CALL(0x005E3F40u, sub_005E3F40); /* call 0x005E3F40 */

loc_004B3C96: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B3C9Eu); RECOMP_ABI_CALL(0x005E4A10u, sub_005E4A10); /* call 0x005E4A10 */

loc_004B3C9E: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    eax = ebp + -2076;
    PUSH32(esp, eax);
    eax = ebp + -1048;
    PUSH32(esp, 0x8638F8);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B3CBBu); RECOMP_ABI_CALL(0x005E3F40u, sub_005E3F40); /* call 0x005E3F40 */

loc_004B3CBB: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B3CC3u); RECOMP_ABI_CALL(0x005E4A10u, sub_005E4A10); /* call 0x005E4A10 */

loc_004B3CC3: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    eax = ebp + -1048;
    PUSH32(esp, 0x86453C);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B3CDAu); RECOMP_ABI_CALL(0x005E3F40u, sub_005E3F40); /* call 0x005E3F40 */

loc_004B3CDA: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B3CE2u); RECOMP_ABI_CALL(0x005E4400u, sub_005E4400); /* call 0x005E4400 */

loc_004B3CE2: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x864268);
    PUSH32(esp, MEM32(edi + 0x10));
    esi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B3CF4u); RECOMP_ABI_CALL(0x005E3F40u, sub_005E3F40); /* call 0x005E3F40 */

loc_004B3CF4: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B3CFCu); RECOMP_ABI_CALL(0x005E4400u, sub_005E4400); /* call 0x005E4400 */

loc_004B3CFC: ;
    edi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B3D03u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004B3D03: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x54);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B3D0Du); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004B3D0D: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B3D2D; /* je: equal / zero */

loc_004B3D14: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = ebp + -2076;
    PUSH32(esp, ecx);
    ecx = ebp + -20;
    PUSH32(esp, ecx);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B3D2Bu); RECOMP_ABI_CALL(0x004BCDD4u, sub_004BCDD4); /* call 0x004BCDD4 */

loc_004B3D2B: ;
    goto loc_004B3D2F;

loc_004B3D2D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004B3D2F: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B3D35u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004B3D35: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B3D3Cu); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004B3D3C: ;
    esi = MEM32(ebp + -2080);
    edi = MEM32(esi + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    MEM32(ebp + -2084) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_004B3D6B; /* jbe: below or equal (unsigned <=) */

loc_004B3D52: ;
    PUSH32(esp, ebx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B3D5Au); RECOMP_ABI_CALL(0x004DD726u, sub_004DD726); /* call 0x004DD726 */

loc_004B3D5A: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -2084));
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004B3D66u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B3D64u); } /* indirect call */
    }

loc_004B3D66: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004B3D52; /* jb: below (unsigned <) */

loc_004B3D6B: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_004B3D6D: ;
    ecx = MEM32(ebp + -4);
    POP32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B3D76u); RECOMP_ABI_CALL(0x005CFF80u, sub_005CFF80); /* call 0x005CFF80 */

loc_004B3D76: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004B3D7A
 * Original: 0x004B3D7A - 0x004B3DBD (67 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B3D7A(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B3D7A: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x28);
    eax = MEM32(eax + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004B3D93u); RECOMP_ABI_CALL(0x005E9B30u, sub_005E9B30); /* call 0x005E9B30 */

loc_004B3D93: ;
    PUSH32(esp, 0);
    esi = eax;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x28);
    PUSH32(esp, 0);
    PUSH32(esp, 0x864544);
    PUSH32(esp, 0x73656C65);
    PUSH32(esp, MEM32(eax + 8));
    PUSH32(esp, 0x004B3DB6u); RECOMP_ABI_CALL(0x005E20B0u, sub_005E20B0); /* call 0x005E20B0 */

loc_004B3DB6: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004B3DBD
 * Original: 0x004B3DBD - 0x004B3DE6 (41 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B3DBD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B3DBD: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x28);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x86454C);
    PUSH32(esp, 0x73656C65);
    PUSH32(esp, MEM32(eax + 8));
    PUSH32(esp, 0x004B3DDEu); RECOMP_ABI_CALL(0x005E20B0u, sub_005E20B0); /* call 0x005E20B0 */

loc_004B3DDE: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_005E9510(); return; /* tail jmp 0x005E9510 */

}

/**
 * sub_004B3DE6
 * Original: 0x004B3DE6 - 0x004B3E43 (93 bytes, 35 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B3DE6(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B3DE6: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x004B3DEFu); RECOMP_ABI_CALL(0x004DC955u, sub_004DC955); /* call 0x004DC955 */

loc_004B3DEF: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x004B3DFBu); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004B3DFB: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B3E13; /* je: equal / zero */

loc_004B3E02: ;
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = eax;
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, 0x004B3E11u); RECOMP_ABI_CALL(0x004B1AB6u, sub_004B1AB6); /* call 0x004B1AB6 */

loc_004B3E11: ;
    goto loc_004B3E15;

loc_004B3E13: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004B3E15: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004B3E1Bu); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004B3E1B: ;
    ecx = eax;
    PUSH32(esp, 0x004B3E22u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004B3E22: ;
    edi = eax;
    _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x004B3E32u); RECOMP_ABI_CALL(0x004DB9F8u, sub_004DB9F8); /* call 0x004DB9F8 */

loc_004B3E32: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004B3E3E; /* jne: not equal / not zero */

loc_004B3E36: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x004B3E3Eu); RECOMP_ABI_CALL(0x004DB91Cu, sub_004DB91C); /* call 0x004DB91C */

loc_004B3E3E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004B3E43
 * Original: 0x004B3E43 - 0x004B3E7D (58 bytes, 19 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004B3E43(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B3E43: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    esi = ecx;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = ebp + -16;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B3E5Au); RECOMP_ABI_CALL(0x004B1AB6u, sub_004B1AB6); /* call 0x004B1AB6 */

loc_004B3E5A: ;
    eax = ebp + -16;
    PUSH32(esp, eax);
    ecx = esi + 0xC0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B3E69u); RECOMP_ABI_CALL(0x004DBA5Au, sub_004DBA5A); /* call 0x004DBA5A */

loc_004B3E69: ;
    ecx = ebp + -16;
    MEM32(ebp + -16) = 0x864274;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B3E78u); RECOMP_ABI_CALL(0x004BB3A9u, sub_004BB3A9); /* call 0x004BB3A9 */

loc_004B3E78: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004B3E7D
 * Original: 0x004B3E7D - 0x004B3F81 (260 bytes, 89 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004B3E7D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B3E7D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x28);
    eax = MEM32(eax + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x726F6F6D);
    PUSH32(esp, eax);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B3E9Eu); RECOMP_ABI_CALL(0x005E2630u, sub_005E2630); /* call 0x005E2630 */

loc_004B3E9E: ;
    PUSH32(esp, MEM32(ebp + 8));
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B3EABu); RECOMP_ABI_CALL(0x005CFF90u, sub_005CFF90); /* call 0x005CFF90 */

loc_004B3EAB: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004B3F09; /* jne: not equal / not zero */

loc_004B3EB2: ;
    PUSH32(esp, MEM32(esi + 0x110));
    ecx = esi + 0x120;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B3EC3u); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004B3EC3: ;
    ecx = ZX8(MEM8(esi + 0x114));
    PUSH32(esp, 0x4B1C5B);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x104));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B3EDCu); RECOMP_ABI_CALL(0x005E67B0u, sub_005E67B0); /* call 0x005E67B0 */

loc_004B3EDC: ;
    PUSH32(esp, 0x4B1C4B);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0x104));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B3EEEu); RECOMP_ABI_CALL(0x005E67E0u, sub_005E67E0); /* call 0x005E67E0 */

loc_004B3EEE: ;
    PUSH32(esp, MEM32(esi + 0x104));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B3EF9u); RECOMP_ABI_CALL(0x005E6850u, sub_005E6850); /* call 0x005E6850 */

loc_004B3EF9: ;
    PUSH32(esp, MEM32(esi + 0x104));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B3F04u); RECOMP_ABI_CALL(0x005E6770u, sub_005E6770); /* call 0x005E6770 */

loc_004B3F04: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = eax;

loc_004B3F09: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B3F0Eu); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004B3F0E: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x28);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B3F18u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004B3F18: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B3F2A; /* je: equal / zero */

loc_004B3F1F: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B3F28u); RECOMP_ABI_CALL(0x004AE892u, sub_004AE892); /* call 0x004AE892 */

loc_004B3F28: ;
    goto loc_004B3F2C;

loc_004B3F2A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004B3F2C: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B3F32u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004B3F32: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B3F39u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004B3F39: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    MEM32(ebp + 8) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_004B3F77; /* jle: less or equal (signed <=) */

loc_004B3F40: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0x104));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B3F4Cu); RECOMP_ABI_CALL(0x005E6780u, sub_005E6780); /* call 0x005E6780 */

loc_004B3F4C: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    ecx = MEM32(0x90E7AC);
    ecx = MEM32(ecx + 0x18);
    ecx = MEM32(ecx + 0x34);
    ecx = MEM32(ecx + 0x28);
    edx = MEM32(ecx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004B3F66u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B3F63u); } /* indirect call */
    }

loc_004B3F66: ;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, eax);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B3F72u); RECOMP_ABI_CALL(0x004DB91Cu, sub_004DB91C); /* call 0x004DB91C */

loc_004B3F72: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004B3F40; /* jl: less (signed <) */

loc_004B3F77: ;
    eax = MEM32(ebp + 8);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B4076
 * Original: 0x004B4076 - 0x004B40C6 (80 bytes, 33 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B4076(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B4076: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x28);
    eax = MEM32(eax + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0xC));
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004B4093u); RECOMP_ABI_CALL(0x005E6EA0u, sub_005E6EA0); /* call 0x005E6EA0 */

loc_004B4093: ;
    edi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B40BF; /* je: equal / zero */

loc_004B409C: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x34);
    PUSH32(esp, MEM32(eax + 0x34));
    PUSH32(esp, 0x004B40AFu); RECOMP_ABI_CALL(0x005E9500u, sub_005E9500); /* call 0x005E9500 */

loc_004B40AF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004B40BF; /* je: equal / zero */

loc_004B40B4: ;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004B40BBu); RECOMP_ABI_CALL(0x005E66B0u, sub_005E66B0); /* call 0x005E66B0 */

loc_004B40BB: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    esi = eax;

loc_004B40BF: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B40C6
 * Original: 0x004B40C6 - 0x004B40F1 (43 bytes, 14 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B40C6(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B40C6: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    PUSH32(esp, MEM32(esp + 8));
    eax = MEM32(eax + 0x34);
    eax = MEM32(eax + 0x34);
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, eax);
    PUSH32(esp, 0x004B40E2u); RECOMP_ABI_CALL(0x005E9C20u, sub_005E9C20); /* call 0x005E9C20 */

loc_004B40E2: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(ecx, (CMP_GE(_fas, _fbs)) ? 1 : 0); /* setge */
    SET_LO8(eax, LO8(ecx));
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004B40F1
 * Original: 0x004B40F1 - 0x004B4183 (146 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004B40F1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B40F1: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x134) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x134;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8E19F0);
    MEM32(ebp + -4) = eax;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x28);
    eax = MEM32(eax + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x726F6F6D);
    PUSH32(esp, eax);
    esi = ecx;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B4121u); RECOMP_ABI_CALL(0x005E2630u, sub_005E2630); /* call 0x005E2630 */

loc_004B4121: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004B4175; /* je: equal / zero */

loc_004B4127: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B4175; /* je: equal / zero */

loc_004B412C: ;
    ecx = ebp + -308;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B413Bu); RECOMP_ABI_CALL(0x004B40C6u, sub_004B40C6); /* call 0x004B40C6 */

loc_004B413B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B4175; /* je: equal / zero */

loc_004B413F: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B4144u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004B4144: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0xC);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B414Eu); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004B414E: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B4164; /* je: equal / zero */

loc_004B4155: ;
    PUSH32(esp, MEM32(ebp + -308));
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B4162u); RECOMP_ABI_CALL(0x004BB415u, sub_004BB415); /* call 0x004BB415 */

loc_004B4162: ;
    goto loc_004B4166;

loc_004B4164: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004B4166: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B416Cu); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004B416C: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B4173u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004B4173: ;
    edi = eax;

loc_004B4175: ;
    ecx = MEM32(ebp + -4);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B4181u); RECOMP_ABI_CALL(0x005CFF80u, sub_005CFF80); /* call 0x005CFF80 */

loc_004B4181: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004B4183
 * Original: 0x004B4183 - 0x004B4234 (177 bytes, 68 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004B4183(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004B4183: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x44));
    esp = esp - 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8E19F0);
    ecx = MEM32(ebp + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    MEM32(ebp + -4) = eax;
    eax = MEM32(ecx);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    MEM8(ebp + -68) = LO8(ebx);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x004B41A0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B419Du); } /* indirect call */
    }

loc_004B41A0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x830968);
    eax = ebp + -68;
    PUSH32(esp, 0x40);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B41B1u); RECOMP_ABI_CALL(0x005E6040u, sub_005E6040); /* call 0x005E6040 */

loc_004B41B1: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_004B41CF; /* je: equal / zero */

loc_004B41B9: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = ebp + -68;
    PUSH32(esp, 0x864554);
    PUSH32(esp, 0x40);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B41CCu); RECOMP_ABI_CALL(0x005E6040u, sub_005E6040); /* call 0x005E6040 */

loc_004B41CC: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004B41CF: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B41D4u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004B41D4: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x18);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B41DEu); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004B41DE: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_004B41F5; /* je: equal / zero */

loc_004B41E5: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = ebp + -68;
    PUSH32(esp, ecx);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B41F3u); RECOMP_ABI_CALL(0x004B33FFu, sub_004B33FF); /* call 0x004B33FF */

loc_004B41F3: ;
    goto loc_004B41F7;

loc_004B41F5: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004B41F7: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B41FDu); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004B41FD: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B4204u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004B4204: ;
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
    PUSH32(esp, ebx);
    _cf = 0; /* logical op clears CF */
    esi = esi & eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004B4226u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B4223u); } /* indirect call */
    }

loc_004B4226: ;
    ecx = MEM32(ebp + -4);
    POP32(esp, esi);
    POP32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B4230u); RECOMP_ABI_CALL(0x005CFF80u, sub_005CFF80); /* call 0x005CFF80 */

loc_004B4230: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004B4234
 * Original: 0x004B4234 - 0x004B4327 (243 bytes, 91 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004B4234(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004B4234: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x5C));
    esp = esp - 0x5C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8E19F0);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(0x90E7AC);
    MEM32(ebp + -4) = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x004B4253u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B424Du); } /* indirect call */
    }

loc_004B4253: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_004B425E; /* jne: not equal / not zero */

loc_004B4257: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_004B431A;

loc_004B425E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x21);
    eax = esi + 0x20;
    PUSH32(esp, eax);
    eax = ebp + -92;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B426Eu); RECOMP_ABI_CALL(0x004E367Fu, sub_004E367F); /* call 0x004E367F */

loc_004B426E: ;
    PUSH32(esp, 0x11);
    _fb = (uint32_t)(0x41) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x41)) >> 32) & 1);
    esi = esi + 0x41;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ebp + -24;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B427Du); RECOMP_ABI_CALL(0x004E367Fu, sub_004E367F); /* call 0x004E367F */

loc_004B427D: ;
    eax = ebp + -92;
    PUSH32(esp, eax);
    PUSH32(esp, 0x830968);
    eax = ebp + -56;
    PUSH32(esp, 0x20);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    MEM8(ebp + -56) = LO8(ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B4296u); RECOMP_ABI_CALL(0x005E6040u, sub_005E6040); /* call 0x005E6040 */

loc_004B4296: ;
    eax = ebp + -24;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B42A4u); RECOMP_ABI_CALL(0x005CFF90u, sub_005CFF90); /* call 0x005CFF90 */

loc_004B42A4: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x30)) >> 32) & 1);
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004B42C2; /* je: equal / zero */

loc_004B42AB: ;
    eax = ebp + -24;
    PUSH32(esp, eax);
    PUSH32(esp, 0x864554);
    eax = ebp + -56;
    PUSH32(esp, 0x20);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B42BFu); RECOMP_ABI_CALL(0x005E6040u, sub_005E6040); /* call 0x005E6040 */

loc_004B42BF: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004B42C2: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B42C7u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004B42C7: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x18);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B42D1u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004B42D1: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_004B42E8; /* je: equal / zero */

loc_004B42D8: ;
    PUSH32(esp, MEM32(ebp + 8));
    ecx = ebp + -56;
    PUSH32(esp, ecx);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B42E6u); RECOMP_ABI_CALL(0x004B33FFu, sub_004B33FF); /* call 0x004B33FF */

loc_004B42E6: ;
    goto loc_004B42EA;

loc_004B42E8: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004B42EA: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B42F0u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004B42F0: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B42F7u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004B42F7: ;
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
    PUSH32(esp, ebx);
    _cf = 0; /* logical op clears CF */
    esi = esi & eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004B4319u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B4316u); } /* indirect call */
    }

loc_004B4319: ;
    POP32(esp, ebx);

loc_004B431A: ;
    ecx = MEM32(ebp + -4);
    POP32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B4323u); RECOMP_ABI_CALL(0x005CFF80u, sub_005CFF80); /* call 0x005CFF80 */

loc_004B4323: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B4327
 * Original: 0x004B4327 - 0x004B4388 (97 bytes, 36 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B4327(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004B4327: ;
    PUSH32(esp, 0x004B432Cu); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004B432C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x30);
    PUSH32(esp, 0x004B4338u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004B4338: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004B4350; /* je: equal / zero */

loc_004B433F: ;
    PUSH32(esp, MEM32(esp + 8));
    ecx = eax;
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0x004B434Eu); RECOMP_ABI_CALL(0x004B383Eu, sub_004B383E); /* call 0x004B383E */

loc_004B434E: ;
    goto loc_004B4352;

loc_004B4350: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004B4352: ;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004B4359u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004B4359: ;
    ecx = eax;
    PUSH32(esp, 0x004B4360u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004B4360: ;
    ecx = MEM32(0x90E7AC);
    ecx = MEM32(ecx + 0x18);
    ecx = MEM32(ecx + 0x24);
    ecx = MEM32(ecx + 0xC);
    edx = MEM32(ecx);
    edi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((edi) != 0);
    edi = (uint32_t)(-(int32_t)edi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    edi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    _cf = 0; /* logical op clears CF */
    edi = edi & eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004B4384u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B4381u); } /* indirect call */
    }

loc_004B4384: ;
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004B4345
 * Original: 0x004B4345 - 0x004B4388 (67 bytes, 25 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B4345(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004B4345: ;
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0x004B434Eu); RECOMP_ABI_CALL(0x004B383Eu, sub_004B383E); /* call 0x004B383E */

loc_004B434E: ;
    goto loc_004B4352;

    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004B4352: ;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004B4359u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004B4359: ;
    ecx = eax;
    PUSH32(esp, 0x004B4360u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004B4360: ;
    ecx = MEM32(0x90E7AC);
    ecx = MEM32(ecx + 0x18);
    ecx = MEM32(ecx + 0x24);
    ecx = MEM32(ecx + 0xC);
    edx = MEM32(ecx);
    edi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((edi) != 0);
    edi = (uint32_t)(-(int32_t)edi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    edi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    _cf = 0; /* logical op clears CF */
    edi = edi & eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004B4384u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B4381u); } /* indirect call */
    }

loc_004B4384: ;
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004B4349
 * Original: 0x004B4349 - 0x004B4388 (63 bytes, 24 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B4349(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004B4349: ;
    PUSH32(esp, 0x004B434Eu); RECOMP_ABI_CALL(0x004B383Eu, sub_004B383E); /* call 0x004B383E */

loc_004B434E: ;
    goto loc_004B4352;

    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004B4352: ;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004B4359u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004B4359: ;
    ecx = eax;
    PUSH32(esp, 0x004B4360u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004B4360: ;
    ecx = MEM32(0x90E7AC);
    ecx = MEM32(ecx + 0x18);
    ecx = MEM32(ecx + 0x24);
    ecx = MEM32(ecx + 0xC);
    edx = MEM32(ecx);
    edi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((edi) != 0);
    edi = (uint32_t)(-(int32_t)edi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    edi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    _cf = 0; /* logical op clears CF */
    edi = edi & eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004B4384u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B4381u); } /* indirect call */
    }

loc_004B4384: ;
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004B4388
 * Original: 0x004B4388 - 0x004B43AF (39 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B4388(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B4388: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x28);
    eax = MEM32(eax + 8);
    PUSH32(esp, 0x73657276);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004B43A1u); RECOMP_ABI_CALL(0x005E2630u, sub_005E2630); /* call 0x005E2630 */

loc_004B43A1: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    ecx = eax;
    eax = MEM32(ecx + 0x10);
    _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_004B43AF
 * Original: 0x004B43AF - 0x004B43B6 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B43AF(void)
{

loc_004B43AF: ;
    eax = MEM32(ecx + 0xA8);
    esp += 4; return; /* ret */

}

/**
 * sub_004B43B6
 * Original: 0x004B43B6 - 0x004B4492 (220 bytes, 87 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B43B6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B43B6: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x34);
    eax = MEM32(eax + 0x34);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x63617473);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004B43D3u); RECOMP_ABI_CALL(0x005E9BA0u, sub_005E9BA0); /* call 0x005E9BA0 */

loc_004B43D3: ;
    edi = eax;
    PUSH32(esp, 0x004B43DAu); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004B43DA: ;
    PUSH32(esp, eax);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x004B43E6u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004B43E6: ;
    ebx = eax;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B4430; /* je: equal / zero */

loc_004B43EF: ;
    PUSH32(esp, 0x004B43F4u); RECOMP_ABI_CALL(0x004DC955u, sub_004DC955); /* call 0x004DC955 */

loc_004B43F4: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, 8);
    PUSH32(esp, 0x004B43FEu); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004B43FE: ;
    esi = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B4416; /* je: equal / zero */

loc_004B4407: ;
    ecx = esi;
    PUSH32(esp, 0x004B440Eu); RECOMP_ABI_CALL(0x004E36A2u, sub_004E36A2); /* call 0x004E36A2 */

loc_004B440E: ;
    MEM32(esi) = 0x864478;
    goto loc_004B4418;

loc_004B4416: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004B4418: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004B441Eu); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004B441E: ;
    ecx = eax;
    PUSH32(esp, 0x004B4425u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004B4425: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x004B442Eu); RECOMP_ABI_CALL(0x004B30A0u, sub_004B30A0); /* call 0x004B30A0 */

loc_004B442E: ;
    goto loc_004B4432;

loc_004B4430: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004B4432: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004B4438u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004B4438: ;
    ecx = eax;
    PUSH32(esp, 0x004B443Fu); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004B443F: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    ebp = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_004B448B; /* jle: less or equal (signed <=) */

loc_004B4447: ;
    ebx = ebp + 8;

loc_004B444A: ;
    PUSH32(esp, 0x004B444Fu); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004B444F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x164);
    PUSH32(esp, 0x004B445Eu); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004B445E: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B446F; /* je: equal / zero */

loc_004B4465: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x004B446Du); RECOMP_ABI_CALL(0x004BCF98u, sub_004BCF98); /* call 0x004BCF98 */

loc_004B446D: ;
    goto loc_004B4471;

loc_004B446F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004B4471: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004B4477u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004B4477: ;
    ecx = eax;
    PUSH32(esp, 0x004B447Eu); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004B447E: ;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x004B4486u); RECOMP_ABI_CALL(0x004DB91Cu, sub_004DB91C); /* call 0x004DB91C */

loc_004B4486: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004B444A; /* jl: less (signed <) */

loc_004B448B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_004B4492
 * Original: 0x004B4492 - 0x004B44AE (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B4492(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B4492: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004B449Au); RECOMP_ABI_CALL(0x004E36B4u, sub_004E36B4); /* call 0x004E36B4 */

loc_004B449A: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004B44A8; /* je: equal / zero */

loc_004B44A1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004B44A7u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004B44A7: ;
    POP32(esp, ecx);

loc_004B44A8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B44AE
 * Original: 0x004B44AE - 0x004B4514 (102 bytes, 40 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B44AE(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B44AE: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x34);
    eax = MEM32(eax + 0x34);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x63617473);
    PUSH32(esp, eax);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x004B44CBu); RECOMP_ABI_CALL(0x005E9BA0u, sub_005E9BA0); /* call 0x005E9BA0 */

loc_004B44CB: ;
    esi = MEM32(esp + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_GE(_fas, _fbs)) goto loc_004B450D; /* jge: greater or equal (signed >=) */

loc_004B44D5: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004B450D; /* jl: less (signed <) */

loc_004B44D9: ;
    PUSH32(esp, 0x004B44DEu); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004B44DE: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x164);
    PUSH32(esp, 0x004B44EBu); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004B44EB: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B44FC; /* je: equal / zero */

loc_004B44F2: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x004B44FAu); RECOMP_ABI_CALL(0x004BCF98u, sub_004BCF98); /* call 0x004BCF98 */

loc_004B44FA: ;
    goto loc_004B44FE;

loc_004B44FC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004B44FE: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004B4504u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004B4504: ;
    ecx = eax;
    PUSH32(esp, 0x004B450Bu); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004B450B: ;
    edi = eax;

loc_004B450D: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B4514
 * Original: 0x004B4514 - 0x004B4560 (76 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B4514(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B4514: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0xC));
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x004B4521u); RECOMP_ABI_CALL(0x004B4076u, sub_004B4076); /* call 0x004B4076 */

loc_004B4521: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B4559; /* je: equal / zero */

loc_004B4527: ;
    PUSH32(esp, 0x004B452Cu); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004B452C: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x004B4536u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004B4536: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B4548; /* je: equal / zero */

loc_004B453D: ;
    PUSH32(esp, MEM32(esi));
    ecx = eax;
    PUSH32(esp, 0x004B4546u); RECOMP_ABI_CALL(0x004BB415u, sub_004BB415); /* call 0x004BB415 */

loc_004B4546: ;
    goto loc_004B454A;

loc_004B4548: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004B454A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004B4550u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004B4550: ;
    ecx = eax;
    PUSH32(esp, 0x004B4557u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004B4557: ;
    edi = eax;

loc_004B4559: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B4560
 * Original: 0x004B4560 - 0x004B45CC (108 bytes, 38 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004B4560(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B4560: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x134) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x134;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8E19F0);
    PUSH32(esp, esi);
    MEM32(ebp + -4) = eax;
    eax = ebp + -308;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B4583u); RECOMP_ABI_CALL(0x004B40C6u, sub_004B40C6); /* call 0x004B40C6 */

loc_004B4583: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B45BD; /* je: equal / zero */

loc_004B4587: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B458Cu); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004B458C: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0xC);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B4596u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004B4596: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B45AC; /* je: equal / zero */

loc_004B459D: ;
    PUSH32(esp, MEM32(ebp + -308));
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B45AAu); RECOMP_ABI_CALL(0x004BB415u, sub_004BB415); /* call 0x004BB415 */

loc_004B45AA: ;
    goto loc_004B45AE;

loc_004B45AC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004B45AE: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B45B4u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004B45B4: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B45BBu); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004B45BB: ;
    esi = eax;

loc_004B45BD: ;
    ecx = MEM32(ebp + -4);
    eax = esi;
    POP32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B45C8u); RECOMP_ABI_CALL(0x005CFF80u, sub_005CFF80); /* call 0x005CFF80 */

loc_004B45C8: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B45CC
 * Original: 0x004B45CC - 0x004B4741 (373 bytes, 129 insns)
 * CC: cdecl, 10 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004B45CC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004B45CC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x48));
    esp = esp - 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8E19F0);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    MEM32(ebp + -4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B45E4u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004B45E4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x400);
    ecx = ebp + -72;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B45F2u); RECOMP_ABI_CALL(0x004DCBBBu, sub_004DCBBB); /* call 0x004DCBBB */

loc_004B45F2: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = ebp + -40;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0x7E73C0);
    PUSH32(esp, 0x24);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B4608u); RECOMP_ABI_CALL(0x004E3665u, sub_004E3665); /* call 0x004E3665 */

loc_004B4608: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ebp + -40;
    PUSH32(esp, eax);
    PUSH32(esp, 0x830968);
    ecx = ebp + -72;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B461Cu); RECOMP_ABI_CALL(0x004DCD3Eu, sub_004DCD3E); /* call 0x004DCD3E */

loc_004B461C: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_004B4631; /* je: equal / zero */

loc_004B4621: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = ebp + -72;
    PUSH32(esp, 0x864554);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B4631u); RECOMP_ABI_CALL(0x004DCD3Eu, sub_004DCD3E); /* call 0x004DCD3E */

loc_004B4631: ;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, 0x20);
    POP32(esp, esi);
    if (CMP_BE(_fa, _fb)) goto loc_004B464A; /* jbe: below or equal (unsigned <=) */

loc_004B4639: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x14));
    ecx = ebp + -72;
    PUSH32(esp, 0x864578);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B464Au); RECOMP_ABI_CALL(0x004DCDDCu, sub_004DCDDC); /* call 0x004DCDDC */

loc_004B464A: ;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x18), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_004B465F; /* je: equal / zero */

loc_004B464F: ;
    PUSH32(esp, MEM32(ebp + 0x18));
    ecx = ebp + -72;
    PUSH32(esp, 0x864570);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B465Fu); RECOMP_ABI_CALL(0x004DCD3Eu, sub_004DCD3E); /* call 0x004DCD3E */

loc_004B465F: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x1C));
    ecx = ebp + -72;
    PUSH32(esp, 0x864568);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B4670u); RECOMP_ABI_CALL(0x004DCDDCu, sub_004DCDDC); /* call 0x004DCDDC */

loc_004B4670: ;
    _fa = (uint32_t)(MEM32(ebp + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x20), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_004B468C; /* jle: less or equal (signed <=) */

loc_004B4675: ;
    _fa = (uint32_t)(MEM32(ebp + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x64) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x20), 0x64 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_004B468C; /* jge: greater or equal (signed >=) */

loc_004B467B: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x20));
    ecx = ebp + -72;
    PUSH32(esp, 0x8634F4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B468Cu); RECOMP_ABI_CALL(0x004DCDDCu, sub_004DCDDC); /* call 0x004DCDDC */

loc_004B468C: ;
    _fa = (uint32_t)(MEM32(ebp + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x24), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_004B469C; /* je: equal / zero */

loc_004B4691: ;
    PUSH32(esp, MEM32(ebp + 0x24));
    ecx = ebp + -72;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B469Cu); RECOMP_ABI_CALL(0x004DCFFBu, sub_004DCFFB); /* call 0x004DCFFB */

loc_004B469C: ;
    _fa = (uint32_t)(MEM8(ebp + 0x28)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x28), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_004B46B1; /* je: equal / zero */

loc_004B46A1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x86455C);
    ecx = ebp + -72;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B46B1u); RECOMP_ABI_CALL(0x004DCDDCu, sub_004DCDDC); /* call 0x004DCDDC */

loc_004B46B1: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B46B6u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004B46B6: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x10));
    edx = MEM32(eax);
    ecx = ebp + -40;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x80); PUSH32(esp, 0x004B46C8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B46C2u); } /* indirect call */
    }

loc_004B46C8: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B46CDu); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004B46CD: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x18);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B46D7u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004B46D7: ;
    esi = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_004B46F6; /* je: equal / zero */

loc_004B46E0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x2C));
    eax = MEM32(ebp + -72);
    ecx = ebp + -72;
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x004B46ECu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B46E9u); } /* indirect call */
    }

loc_004B46EC: ;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B46F4u); RECOMP_ABI_CALL(0x004B3358u, sub_004B3358); /* call 0x004B3358 */

loc_004B46F4: ;
    goto loc_004B46F8;

loc_004B46F6: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004B46F8: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B46FEu); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004B46FE: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B4705u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004B4705: ;
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
    PUSH32(esp, ebx);
    _cf = 0; /* logical op clears CF */
    esi = esi & eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004B4727u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B4724u); } /* indirect call */
    }

loc_004B4727: ;
    ecx = ebp + -72;
    esi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B4731u); RECOMP_ABI_CALL(0x004DCC7Fu, sub_004DCC7F); /* call 0x004DCC7F */

loc_004B4731: ;
    ecx = MEM32(ebp + -4);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B473Du); RECOMP_ABI_CALL(0x005CFF80u, sub_005CFF80); /* call 0x005CFF80 */

loc_004B473D: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 44; return; /* ret 40 */

}

/**
 * sub_004B4741
 * Original: 0x004B4741 - 0x004B483A (249 bytes, 93 insns)
 * Category: game_vtable
 * CC: thiscall, 6 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004B4741(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B4741: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B4750u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004B4750: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x20);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B475Cu); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004B475C: ;
    esi = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B477B; /* je: equal / zero */

loc_004B4765: ;
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B476Cu); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004B476C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x84);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B4779u); RECOMP_ABI_CALL(0x004DCBBBu, sub_004DCBBB); /* call 0x004DCBBB */

loc_004B4779: ;
    goto loc_004B477D;

loc_004B477B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004B477D: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B4783u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004B4783: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B478Au); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004B478A: ;
    PUSH32(esp, eax);
    ecx = ebp + -4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B4793u); RECOMP_ABI_CALL(0x004B30D2u, sub_004B30D2); /* call 0x004B30D2 */

loc_004B4793: ;
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B479Au); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004B479A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1000);
    ecx = ebp + -56;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B47A8u); RECOMP_ABI_CALL(0x004DCBBBu, sub_004DCBBB); /* call 0x004DCBBB */

loc_004B47A8: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B47ADu); RECOMP_ABI_CALL(0x004DC976u, sub_004DC976); /* call 0x004DC976 */

loc_004B47AD: ;
    esi = MEM32(ebp + -4);
    edx = MEM32(eax);
    ecx = ebp + -56;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = ebp + -24;
    PUSH32(esp, ecx);
    ecx = ebp + -8;
    PUSH32(esp, ecx);
    ecx = ebp + -16;
    PUSH32(esp, ecx);
    ecx = ebp + -20;
    PUSH32(esp, ecx);
    ecx = ebp + -12;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x004B47D0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B47CDu); } /* indirect call */
    }

loc_004B47D0: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    eax = ebp + -56;
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, MEM32(ebp + -12));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + -16));
    PUSH32(esp, MEM32(ebp + -20));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B47F5u); RECOMP_ABI_CALL(0x004BC8A1u, sub_004BC8A1); /* call 0x004BC8A1 */

loc_004B47F5: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x20);
    PUSH32(esp, 1);
    PUSH32(esp, 0x86457C);
    ecx = ebp + -56;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B4809u); RECOMP_ABI_CALL(0x004DCDDCu, sub_004DCDDC); /* call 0x004DCDDC */

loc_004B4809: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x1C));
    eax = MEM32(ebp + -56);
    ecx = ebp + -56;
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x004B4815u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B4812u); } /* indirect call */
    }

loc_004B4815: ;
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B481Du); RECOMP_ABI_CALL(0x004B29ECu, sub_004B29EC); /* call 0x004B29EC */

loc_004B481D: ;
    ecx = ebp + -56;
    ebx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B4827u); RECOMP_ABI_CALL(0x004DCC7Fu, sub_004DCC7F); /* call 0x004DCC7F */

loc_004B4827: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B4832; /* je: equal / zero */

loc_004B482B: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B4832u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004B4832: ;
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 28; return; /* ret 24 */

}

/**
 * sub_004B483A
 * Original: 0x004B483A - 0x004B49C2 (392 bytes, 132 insns)
 * Category: game_vtable
 * CC: cdecl, 11 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004B483A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B483A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B484Au); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004B484A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3000);
    ecx = ebp + -32;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B4858u); RECOMP_ABI_CALL(0x004DCBBBu, sub_004DCBBB); /* call 0x004DCBBB */

loc_004B4858: ;
    PUSH32(esp, 0x20);
    POP32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = ebp + -32;
    PUSH32(esp, 0x8645B8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B486Cu); RECOMP_ABI_CALL(0x004DCDDCu, sub_004DCDDC); /* call 0x004DCDDC */

loc_004B486C: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = ebp + -32;
    PUSH32(esp, 0x8645B0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B487Du); RECOMP_ABI_CALL(0x004DCDDCu, sub_004DCDDC); /* call 0x004DCDDC */

loc_004B487D: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x8645A4);
    ecx = ebp + -32;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B488Cu); RECOMP_ABI_CALL(0x004DCDDCu, sub_004DCDDC); /* call 0x004DCDDC */

loc_004B488C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x90000);
    PUSH32(esp, 0x864494);
    ecx = ebp + -32;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B489Fu); RECOMP_ABI_CALL(0x004DCDDCu, sub_004DCDDC); /* call 0x004DCDDC */

loc_004B489F: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B48B4; /* je: equal / zero */

loc_004B48A4: ;
    PUSH32(esp, MEM32(ebp + 8));
    ecx = ebp + -32;
    PUSH32(esp, 0x830968);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B48B4u); RECOMP_ABI_CALL(0x004DCD3Eu, sub_004DCD3E); /* call 0x004DCD3E */

loc_004B48B4: ;
    _fa = (uint32_t)(MEM32(ebp + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x24), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B48DB; /* je: equal / zero */

loc_004B48B9: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x20));
    ecx = ebp + -32;
    PUSH32(esp, 0x864598);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B48CAu); RECOMP_ABI_CALL(0x004DCDDCu, sub_004DCDDC); /* call 0x004DCDDC */

loc_004B48CA: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x24));
    ecx = ebp + -32;
    PUSH32(esp, 0x864488);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B48DBu); RECOMP_ABI_CALL(0x004DCDDCu, sub_004DCDDC); /* call 0x004DCDDC */

loc_004B48DB: ;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x18), edi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004B48F1; /* jbe: below or equal (unsigned <=) */

loc_004B48E0: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x18));
    ecx = ebp + -32;
    PUSH32(esp, 0x864590);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B48F1u); RECOMP_ABI_CALL(0x004DCDDCu, sub_004DCDDC); /* call 0x004DCDDC */

loc_004B48F1: ;
    _fa = (uint32_t)(MEM32(ebp + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x1C), edi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004B4907; /* jbe: below or equal (unsigned <=) */

loc_004B48F6: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x1C));
    ecx = ebp + -32;
    PUSH32(esp, 0x864588);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B4907u); RECOMP_ABI_CALL(0x004DCDDCu, sub_004DCDDC); /* call 0x004DCDDC */

loc_004B4907: ;
    ecx = MEM32(ebp + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B4922; /* je: equal / zero */

loc_004B490E: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004B4914u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B4911u); } /* indirect call */
    }

loc_004B4914: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x830C48);
    ecx = ebp + -32;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B4922u); RECOMP_ABI_CALL(0x004DCDDCu, sub_004DCDDC); /* call 0x004DCDDC */

loc_004B4922: ;
    _fa = (uint32_t)(MEM32(ebp + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x30), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B496C; /* je: equal / zero */

loc_004B4927: ;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B492Du); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004B492D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x800);
    ecx = ebp + -64;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B493Bu); RECOMP_ABI_CALL(0x004DCBBBu, sub_004DCBBB); /* call 0x004DCBBB */

loc_004B493B: ;
    ecx = ebp + -64;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B4943u); RECOMP_ABI_CALL(0x004DCEC8u, sub_004DCEC8); /* call 0x004DCEC8 */

loc_004B4943: ;
    PUSH32(esp, MEM32(ebp + 0x30));
    ecx = ebp + -64;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B494Eu); RECOMP_ABI_CALL(0x004DCFFBu, sub_004DCFFB); /* call 0x004DCFFB */

loc_004B494E: ;
    eax = ebp + -64;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B4957u); RECOMP_ABI_CALL(0x004BC0B3u, sub_004BC0B3); /* call 0x004BC0B3 */

loc_004B4957: ;
    POP32(esp, ecx);
    eax = ebp + -64;
    PUSH32(esp, eax);
    ecx = ebp + -32;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B4964u); RECOMP_ABI_CALL(0x004DCFFBu, sub_004DCFFB); /* call 0x004DCFFB */

loc_004B4964: ;
    ecx = ebp + -64;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B496Cu); RECOMP_ABI_CALL(0x004DCC7Fu, sub_004DCC7F); /* call 0x004DCC7F */

loc_004B496C: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B4971u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004B4971: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x28);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B497Bu); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004B497B: ;
    esi = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B499A; /* je: equal / zero */

loc_004B4984: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x2C));
    eax = MEM32(ebp + -32);
    ecx = ebp + -32;
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x004B4990u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B498Du); } /* indirect call */
    }

loc_004B4990: ;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B4998u); RECOMP_ABI_CALL(0x004B366Du, sub_004B366D); /* call 0x004B366D */

loc_004B4998: ;
    goto loc_004B499C;

loc_004B499A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004B499C: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B49A2u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004B49A2: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B49A9u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004B49A9: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B49B0u); RECOMP_ABI_CALL(0x004E32BDu, sub_004E32BD); /* call 0x004E32BD */

loc_004B49B0: ;
    ecx = ebp + -32;
    esi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B49BAu); RECOMP_ABI_CALL(0x004DCC7Fu, sub_004DCC7F); /* call 0x004DCC7F */

loc_004B49BA: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 48; return; /* ret 44 */

}

/**
 * sub_004B49C2
 * Original: 0x004B49C2 - 0x004B49E2 (32 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B49C2(void)
{

loc_004B49C2: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 8));
    ecx = MEM32(ecx + 0xA8);
    PUSH32(esp, MEM32(esp + 8));
    eax = MEM32(ecx);
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x8645C0);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x004B49DFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B49DCu); } /* indirect call */
    }

loc_004B49DF: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004B49E2
 * Original: 0x004B49E2 - 0x004B4A02 (32 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B49E2(void)
{

loc_004B49E2: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 8));
    ecx = MEM32(ecx + 0xA8);
    PUSH32(esp, MEM32(esp + 8));
    eax = MEM32(ecx);
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x8645D0);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x004B49FFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B49FCu); } /* indirect call */
    }

loc_004B49FF: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004B4A02
 * Original: 0x004B4A02 - 0x004B4A23 (33 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B4A02(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B4A02: ;
    _fa = (uint32_t)(MEM32(ecx + 0x12C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x12C), 0x10 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_004B4A1E; /* jae: above or equal (unsigned >=) */

loc_004B4A0B: ;
    PUSH32(esp, MEM32(esp + 4));
    _fb = (uint32_t)(0x120) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x120;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x004B4A1Au); RECOMP_ABI_CALL(0x004DB91Cu, sub_004DB91C); /* call 0x004DB91C */

loc_004B4A1A: ;
    SET_LO8(eax, 1);
    goto loc_004B4A20;

loc_004B4A1E: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_004B4A20: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B4A23
 * Original: 0x004B4A23 - 0x004B4A3B (24 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B4A23(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B4A23: ;
    PUSH32(esp, MEM32(ecx + 0x110));
    _fb = (uint32_t)(0x120) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x120;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x004B4A34u); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004B4A34: ;
    edx = MEM32(eax);
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 4)); return; /* indirect tail jmp */

}

/**
 * sub_004B4A3B
 * Original: 0x004B4A3B - 0x004B4A8F (84 bytes, 29 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B4A3B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B4A3B: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_004B4A73; /* je: equal / zero */

loc_004B4A45: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B4A63; /* je: equal / zero */

loc_004B4A49: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004B4A8B; /* jne: not equal / not zero */

loc_004B4A4E: ;
    esi = ecx + 0x110;
    eax = MEM32(esi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(ecx + 0x12C));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(ecx + 0x12C)); }
    MEM32(esi) = edx;
    goto loc_004B4A8B;

loc_004B4A63: ;
    eax = ecx + 0x114;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(eax) = LO8(ecx);
    goto loc_004B4A8B;

loc_004B4A73: ;
    esi = MEM32(ecx + 0x12C);
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x110;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ecx);
    eax = eax + esi + -1;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)esi);
      edx = (uint32_t)(_dividend % (uint32_t)esi); }
    MEM32(ecx) = edx;

loc_004B4A8B: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B4A8F
 * Original: 0x004B4A8F - 0x004B4ACE (63 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B4A8F(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B4A8F: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004B4A97u); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_004B4A97: ;
    eax = MEM32(esp + 8);
    MEM32(esi + 8) = 0x86426C;
    MEM32(esi + 0xC) = 0x864288;
    MEM32(esi + 0x10) = MEM32(esi + 0x10) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x14) = eax;
    MEM32(esi) = 0x8645F0;
    MEM32(esi + 8) = 0x8645E8;
    MEM32(esi + 0xC) = 0x8645E0;
    MEM32(esi + 0x18) = MEM32(esi + 0x18) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B4ACE
 * Original: 0x004B4ACE - 0x004B4AD6 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B4ACE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B4ACE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004B5A41(); return; /* tail jmp 0x004B5A41 */

}

/**
 * sub_004B4AD6
 * Original: 0x004B4AD6 - 0x004B4ADE (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B4AD6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B4AD6: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004B5A41(); return; /* tail jmp 0x004B5A41 */

}

/**
 * sub_004B4ADE
 * Original: 0x004B4ADE - 0x004B4B23 (69 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B4ADE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B4ADE: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = 0x8645F0;
    MEM32(esi + 8) = 0x8645E8;
    MEM32(esi + 0xC) = 0x8645E0;
    if (CMP_EQ(_fa, _fb)) goto loc_004B4B01; /* je: equal / zero */

loc_004B4AFC: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004B4B01u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B4AFEu); } /* indirect call */
    }

loc_004B4B01: ;
    ecx = MEM32(esi + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B4B0D; /* je: equal / zero */

loc_004B4B08: ;
    PUSH32(esp, 0x004B4B0Du); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004B4B0D: ;
    MEM32(esi + 0xC) = 0x864288;
    MEM32(esi + 8) = 0x86426C;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004DD576(); return; /* tail jmp 0x004DD576 */

}

/**
 * sub_004B4B23
 * Original: 0x004B4B23 - 0x004B4B5F (60 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B4B23(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004B4B23: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(0x90E7AC);
    ecx = MEM32(ecx + 0x18);
    ecx = MEM32(ecx + 0x34);
    ecx = MEM32(ecx + 0x14);
    PUSH32(esp, esi);
    edx = eax + -8;
    esi = eax + 0x10;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(4)) >> 32) & 1);
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((edx) != 0);
    edx = (uint32_t)(-(int32_t)edx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    edx = edx & eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edx);
    PUSH32(esp, 0x004B4B51u); RECOMP_ABI_CALL(0x004B2E89u, sub_004B2E89); /* call 0x004B2E89 */

loc_004B4B51: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x004B4B59u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004B4B59: ;
    eax = MEM32(esi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B4B5F
 * Original: 0x004B4B5F - 0x004B4B8E (47 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B4B5F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B4B5F: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), 0 (32-bit) */
    PUSH32(esp, esi);
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    PUSH32(esp, edi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx);
    edi = esi + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, MEM32(edi));
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004B4B78u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B4B76u); } /* indirect call */
    }

loc_004B4B78: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x004B4B81u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004B4B81: ;
    ecx = MEM32(esi + 8);
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(ecx);
    POP32(esp, edi);
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax)); return; /* indirect tail jmp */

}

/**
 * sub_004B4B8E
 * Original: 0x004B4B8E - 0x004B4C0C (126 bytes, 51 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B4B8E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B4B8E: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xC), esi (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_004B4C07; /* jne: not equal / not zero */

loc_004B4B9A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x004B4BA0u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004B4BA0: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x004B4BAAu); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004B4BAA: ;
    ebx = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B4BE1; /* je: equal / zero */

loc_004B4BB3: ;
    esi = MEM32(edi + 0x24);
    PUSH32(esp, 0x004B4BBBu); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004B4BBB: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0x14));
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x004B4BC7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B4BC4u); } /* indirect call */
    }

loc_004B4BC7: ;
    PUSH32(esp, MEM32(esp + 0x18));
    esi = eax;
    PUSH32(esp, 0x004B4BD2u); RECOMP_ABI_CALL(0x005D0020u, sub_005D0020); /* call 0x005D0020 */

loc_004B4BD2: ;
    POP32(esp, ecx);
    eax = esi + eax + 1;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x004B4BDFu); RECOMP_ABI_CALL(0x004DCBFAu, sub_004DCBFA); /* call 0x004DCBFA */

loc_004B4BDF: ;
    goto loc_004B4BE3;

loc_004B4BE1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004B4BE3: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004B4BE9u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004B4BE9: ;
    ecx = eax;
    PUSH32(esp, 0x004B4BF0u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004B4BF0: ;
    ebx = eax;
    eax = MEM32(ebx);
    esi = edi + 0x24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi));
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x30); PUSH32(esp, 0x004B4BFEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B4BFBu); } /* indirect call */
    }

loc_004B4BFE: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x004B4C06u); RECOMP_ABI_CALL(0x004B2F44u, sub_004B2F44); /* call 0x004B2F44 */

loc_004B4C06: ;
    POP32(esp, ebx);

loc_004B4C07: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004B4C0C
 * Original: 0x004B4C0C - 0x004B4CB7 (171 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B4C0C(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B4C0C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x004B4C16u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004B4C16: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x004B4C1Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B4C1Au); } /* indirect call */
    }

loc_004B4C1D: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x68); PUSH32(esp, 0x004B4C24u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B4C21u); } /* indirect call */
    }

loc_004B4C24: ;
    edi = eax;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x120); PUSH32(esp, 0x004B4C30u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B4C2Au); } /* indirect call */
    }

loc_004B4C30: ;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM8(esi + 0x14C) = LO8(eax);
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x120); PUSH32(esp, 0x004B4C43u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B4C3Du); } /* indirect call */
    }

loc_004B4C43: ;
    MEM8(esi + 0x14D) = LO8(eax);
    MEM8(esi + 0x14E) = 0;
    eax = MEM32(edi);
    ecx = edi;
    ebx = esi + 0x148;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x68); PUSH32(esp, 0x004B4C5Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B4C5Au); } /* indirect call */
    }

loc_004B4C5D: ;
    MEM32(ebx) = eax;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x38);
    edi = MEM32(eax + 8);
    PUSH32(esp, 0x12);
    _fb = (uint32_t)(0x14F) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x14F;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004B4C7Du); RECOMP_ABI_CALL(0x005CFEF0u, sub_005CFEF0); /* call 0x005CFEF0 */

loc_004B4C7D: ;
    eax = MEM32(edi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x004B4C87u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B4C84u); } /* indirect call */
    }

loc_004B4C87: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x7E1290);
    PUSH32(esp, 0x12);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004B4C95u); RECOMP_ABI_CALL(0x004E3665u, sub_004E3665); /* call 0x004E3665 */

loc_004B4C95: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x34);
    PUSH32(esp, 0x4B3211);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(eax + 0x34));
    PUSH32(esp, 0x004B4CB0u); RECOMP_ABI_CALL(0x005E94E0u, sub_005E94E0); /* call 0x005E94E0 */

loc_004B4CB0: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_004B4CB7
 * Original: 0x004B4CB7 - 0x004B4D34 (125 bytes, 46 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004B4CB7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B4CB7: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x28);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(eax + 8);
    PUSH32(esp, 0x73656C66);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B4CD8u); RECOMP_ABI_CALL(0x005E2630u, sub_005E2630); /* call 0x005E2630 */

loc_004B4CD8: ;
    esi = MEM32(eax + 4);
    eax = esi;
    eax = eax & MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 8) (32-bit) */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004B4D2E; /* je: equal / zero */

loc_004B4CE7: ;
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B4CEEu); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004B4CEE: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x20);
    ecx = ebp + -32;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B4CF9u); RECOMP_ABI_CALL(0x004DCBBBu, sub_004DCBBB); /* call 0x004DCBBB */

loc_004B4CF9: ;
    esi = esi | MEM32(ebp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ebp + -32;
    PUSH32(esp, esi);
    PUSH32(esp, 0x8645F4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B4D0Au); RECOMP_ABI_CALL(0x004DD1A3u, sub_004DD1A3); /* call 0x004DD1A3 */

loc_004B4D0A: ;
    eax = MEM32(ebp + -32);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = ebp + -32;
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x004B4D17u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B4D14u); } /* indirect call */
    }

loc_004B4D17: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x75617472);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B4D23u); RECOMP_ABI_CALL(0x005E20B0u, sub_005E20B0); /* call 0x005E20B0 */

loc_004B4D23: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ebp + -32;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B4D2Eu); RECOMP_ABI_CALL(0x004DCC7Fu, sub_004DCC7F); /* call 0x004DCC7F */

loc_004B4D2E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B4D34
 * Original: 0x004B4D34 - 0x004B4DB5 (129 bytes, 50 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004B4D34(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B4D34: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x28);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(eax + 8);
    PUSH32(esp, 0x73656C66);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B4D56u); RECOMP_ABI_CALL(0x005E2630u, sub_005E2630); /* call 0x005E2630 */

loc_004B4D56: ;
    ebx = MEM32(eax + 4);
    esi = MEM32(ebp + 8);
    eax = ebx;
    eax = eax & esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_004B4DAE; /* jne: not equal / not zero */

loc_004B4D66: ;
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B4D6Du); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004B4D6D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x20);
    ecx = ebp + -32;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B4D78u); RECOMP_ABI_CALL(0x004DCBBBu, sub_004DCBBB); /* call 0x004DCBBB */

loc_004B4D78: ;
    esi = ~esi;
    esi = esi & ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x8645F4);
    ecx = ebp + -32;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B4D8Au); RECOMP_ABI_CALL(0x004DD1A3u, sub_004DD1A3); /* call 0x004DD1A3 */

loc_004B4D8A: ;
    eax = MEM32(ebp + -32);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = ebp + -32;
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x004B4D97u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B4D94u); } /* indirect call */
    }

loc_004B4D97: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x75617472);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B4DA3u); RECOMP_ABI_CALL(0x005E20B0u, sub_005E20B0); /* call 0x005E20B0 */

loc_004B4DA3: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ebp + -32;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B4DAEu); RECOMP_ABI_CALL(0x004DCC7Fu, sub_004DCC7F); /* call 0x004DCC7F */

loc_004B4DAE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B4DB5
 * Original: 0x004B4DB5 - 0x004B4DD7 (34 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B4DB5(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B4DB5: ;
    eax = MEM32(0x90E7AC);
    PUSH32(esp, MEM32(esp + 4));
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x28);
    PUSH32(esp, 0x7274696D);
    PUSH32(esp, MEM32(eax + 8));
    PUSH32(esp, 0x004B4DD1u); RECOMP_ABI_CALL(0x005E2750u, sub_005E2750); /* call 0x005E2750 */

loc_004B4DD1: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B4DD7
 * Original: 0x004B4DD7 - 0x004B4E03 (44 bytes, 16 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B4DD7(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B4DD7: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x28);
    PUSH32(esp, esi);
    esi = MEM32(eax + 8);
    PUSH32(esp, 0x004B4DEBu); RECOMP_ABI_CALL(0x004DC9FAu, sub_004DC9FA); /* call 0x004DC9FA */

loc_004B4DEB: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x004B4DF2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B4DEFu); } /* indirect call */
    }

loc_004B4DF2: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x7274696D);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004B4DFEu); RECOMP_ABI_CALL(0x005E2750u, sub_005E2750); /* call 0x005E2750 */

loc_004B4DFE: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004B4E03
 * Original: 0x004B4E03 - 0x004B4E1F (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B4E03(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B4E03: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004B4E0Bu); RECOMP_ABI_CALL(0x004B36C5u, sub_004B36C5); /* call 0x004B36C5 */

loc_004B4E0B: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004B4E19; /* je: equal / zero */

loc_004B4E12: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004B4E18u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004B4E18: ;
    POP32(esp, ecx);

loc_004B4E19: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B4E1F
 * Original: 0x004B4E1F - 0x004B4F10 (241 bytes, 93 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B4E1F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B4E1F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x004B4E29u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004B4E29: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x004B4E30u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B4E2Du); } /* indirect call */
    }

loc_004B4E30: ;
    edi = eax;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(eax + 0xC);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B4E54; /* je: equal / zero */

loc_004B4E3F: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x75726F6D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x75726F6D (32-bit) */
    ecx = MEM32(esi + 0x1C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004B4E4Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B4E4Cu); } /* indirect call */
    }

loc_004B4E4F: ;
    goto loc_004B4F08;

loc_004B4E54: ;
    PUSH32(esp, 0x8645B0);
    PUSH32(esp, MEM32(eax + 0x10));
    PUSH32(esp, 0x004B4E61u); RECOMP_ABI_CALL(0x005E3F40u, sub_005E3F40); /* call 0x005E3F40 */

loc_004B4E61: ;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004B4E68u); RECOMP_ABI_CALL(0x005E4400u, sub_005E4400); /* call 0x005E4400 */

loc_004B4E68: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esi + 0x20) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_004B4ECF; /* jbe: below or equal (unsigned <=) */

loc_004B4E72: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x34);
    edi = MEM32(eax + 0x14);
    PUSH32(esp, 0x004B4E85u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004B4E85: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x004B4E8Fu); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004B4E8F: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B4EA3; /* je: equal / zero */

loc_004B4E96: ;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(esi + 0x20));
    ecx = eax;
    PUSH32(esp, 0x004B4EA1u); RECOMP_ABI_CALL(0x004B306Eu, sub_004B306E); /* call 0x004B306E */

loc_004B4EA1: ;
    goto loc_004B4EA5;

loc_004B4EA3: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004B4EA5: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004B4EABu); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004B4EAB: ;
    ecx = eax;
    PUSH32(esp, 0x004B4EB2u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004B4EB2: ;
    PUSH32(esp, eax);
    ecx = esi + 0x24;
    PUSH32(esp, 0x004B4EBBu); RECOMP_ABI_CALL(0x004B3053u, sub_004B3053); /* call 0x004B3053 */

loc_004B4EBB: ;
    PUSH32(esp, 0x2B67616D);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x18;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x004B4ECBu); RECOMP_ABI_CALL(0x004B3DE6u, sub_004B3DE6); /* call 0x004B3DE6 */

loc_004B4ECB: ;
    SET_LO8(ebx, 1);
    goto loc_004B4F08;

loc_004B4ECF: ;
    PUSH32(esp, 0x004B4ED4u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004B4ED4: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x004B4EDEu); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004B4EDE: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B4EF0; /* je: equal / zero */

loc_004B4EE5: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    ecx = eax;
    PUSH32(esp, 0x004B4EEEu); RECOMP_ABI_CALL(0x004B306Eu, sub_004B306E); /* call 0x004B306E */

loc_004B4EEE: ;
    goto loc_004B4EF2;

loc_004B4EF0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004B4EF2: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004B4EF8u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004B4EF8: ;
    ecx = eax;
    PUSH32(esp, 0x004B4EFFu); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004B4EFF: ;
    ecx = MEM32(esi + 0x1C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x004B4F08u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B4F06u); } /* indirect call */
    }

loc_004B4F08: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B4F10
 * Original: 0x004B4F10 - 0x004B4F52 (66 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B4F10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B4F10: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004B4F18u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004B4F18: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x004B4F1Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B4F1Cu); } /* indirect call */
    }

loc_004B4F1F: ;
    ecx = MEM32(esi + 0x1C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004B4F2Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B4F27u); } /* indirect call */
    }

loc_004B4F2A: ;
    MEM32(esi + 0x1C) = MEM32(esi + 0x1C) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x20), 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004B4F50; /* jbe: below or equal (unsigned <=) */

loc_004B4F34: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x34);
    ecx = MEM32(eax + 0x14);
    PUSH32(esp, 0x2B67616D);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x18;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x004B4F50u); RECOMP_ABI_CALL(0x004B3E43u, sub_004B3E43); /* call 0x004B3E43 */

loc_004B4F50: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004B4F52
 * Original: 0x004B4F52 - 0x004B4FBD (107 bytes, 38 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B4F52(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004B4F52: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x38);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(eax + 0x14);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, MEM32(eax + 0x10));
    PUSH32(esp, 0x004B4F6Fu); RECOMP_ABI_CALL(0x004BB039u, sub_004BB039); /* call 0x004BB039 */

loc_004B4F6F: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(8)) >> 32) & 1);
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x004B4F7Bu); RECOMP_ABI_CALL(0x004DB91Cu, sub_004DB91C); /* call 0x004DB91C */

loc_004B4F7B: ;
    MEM32(esi + 8) = MEM32(esi + 8) - 1;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_004B4FB9; /* jne: not equal / not zero */

loc_004B4F80: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x34);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x14);
    eax = esi + -24;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    PUSH32(esp, 0x2B67616D);
    _cf = 0; /* logical op clears CF */
    eax = eax & esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x004B4FA5u); RECOMP_ABI_CALL(0x004B3E43u, sub_004B3E43); /* call 0x004B3E43 */

loc_004B4FA5: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi + 0xC));
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004B4FB0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B4FAEu); } /* indirect call */
    }

loc_004B4FB0: ;
    ecx = esi + -24;
    PUSH32(esp, 0x004B4FB8u); RECOMP_ABI_CALL(0x004E314Cu, sub_004E314C); /* call 0x004E314C */

loc_004B4FB8: ;
    POP32(esp, edi);

loc_004B4FB9: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004B4FBD
 * Original: 0x004B4FBD - 0x004B5023 (102 bytes, 38 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B4FBD(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004B4FBD: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x90E7AC);
    eax = MEM32(edi + 0x18);
    eax = MEM32(eax + 0x38);
    esi = ecx;
    ecx = MEM32(eax + 0x14);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, MEM32(eax + 0x10));
    PUSH32(esp, 0x004B4FDDu); RECOMP_ABI_CALL(0x004BB039u, sub_004BB039); /* call 0x004BB039 */

loc_004B4FDD: ;
    ebx = eax;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x004B4FE6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B4FE3u); } /* indirect call */
    }

loc_004B4FE6: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x004B4FEFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B4FEDu); } /* indirect call */
    }

loc_004B4FEF: ;
    eax = esi + -24;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0x706C6179);
    PUSH32(esp, eax);
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x34);
    ecx = MEM32(eax + 0x14);
    PUSH32(esp, 0x004B5011u); RECOMP_ABI_CALL(0x004B3E43u, sub_004B3E43); /* call 0x004B3E43 */

loc_004B5011: ;
    ecx = esi + -24;
    MEM8(esi + 8) = 0;
    PUSH32(esp, 0x004B501Du); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004B501D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004B5023
 * Original: 0x004B5023 - 0x004B507D (90 bytes, 36 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B5023(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004B5023: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004B502Cu); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004B502C: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x004B5033u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B5030u); } /* indirect call */
    }

loc_004B5033: ;
    ecx = MEM32(esp + 0xC);
    ecx = MEM32(ecx + 0xC);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_004B504C; /* je: equal / zero */

loc_004B5040: ;
    ecx = MEM32(esi + 0x1C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004B504Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B5047u); } /* indirect call */
    }

loc_004B504A: ;
    goto loc_004B5076;

loc_004B504C: ;
    eax = esi;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    ecx = esi + 0x18;
    _cf = 0; /* logical op clears CF */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0x706C6179);
    PUSH32(esp, eax);
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x34);
    ecx = MEM32(eax + 0x14);
    PUSH32(esp, 0x004B5070u); RECOMP_ABI_CALL(0x004B3DE6u, sub_004B3DE6); /* call 0x004B3DE6 */

loc_004B5070: ;
    MEM8(esi + 0x20) = 1;
    SET_LO8(ebx, 1);

loc_004B5076: ;
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B507D
 * Original: 0x004B507D - 0x004B50BD (64 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B507D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B507D: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x34);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x14);
    esi = ecx;
    ecx = MEM32(esi + 0x1C);
    eax = MEM32(ecx);
    PUSH32(esp, 3);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004B509Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B5097u); } /* indirect call */
    }

loc_004B509A: ;
    _fa = (uint32_t)(MEM8(esi + 0x20)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x20), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B50B4; /* je: equal / zero */

loc_004B50A0: ;
    PUSH32(esp, 0x706C6179);
    eax = esi + 0x18;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x004B50B0u); RECOMP_ABI_CALL(0x004B3E43u, sub_004B3E43); /* call 0x004B3E43 */

loc_004B50B0: ;
    MEM8(esi + 0x20) = 0;

loc_004B50B4: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004DD5FD(); return; /* tail jmp 0x004DD5FD */

}

/**
 * sub_004B50BD
 * Original: 0x004B50BD - 0x004B546C (943 bytes, 261 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004B50BD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B50BD: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8E19F0);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    MEM32(ebp + -4) = eax;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2B706F70) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2B706F70 (32-bit) */
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004B5371; /* je: equal / zero */

loc_004B50E1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2B726F6D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2B726F6D (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B522A; /* je: equal / zero */

loc_004B50EC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x63686174) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x63686174 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B51AF; /* je: equal / zero */

loc_004B50F7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6D6F7665) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x6D6F7665 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B516F; /* je: equal / zero */

loc_004B50FE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x73746174) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x73746174 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004B5428; /* jne: not equal / not zero */

loc_004B5109: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004B510Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B510Bu); } /* indirect call */
    }

loc_004B510E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x144)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x144) (32-bit) */
    MEM32(ebp + -16) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_004B5428; /* je: equal / zero */

loc_004B511D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8238C8);
    eax = ebp + -12;
    PUSH32(esp, 8);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B512Eu); RECOMP_ABI_CALL(0x004E3665u, sub_004E3665); /* call 0x004E3665 */

loc_004B512E: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = esi + 8;
    eax = MEM32(ebx + 0xC);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -20) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_004B5161; /* jbe: below or equal (unsigned <=) */

loc_004B5142: ;
    PUSH32(esp, MEM32(ebp + 8));
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B514Cu); RECOMP_ABI_CALL(0x004DD726u, sub_004DD726); /* call 0x004DD726 */

loc_004B514C: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    edx = ebp + -12;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004B5156u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B5154u); } /* indirect call */
    }

loc_004B5156: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -20) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004B5142; /* jb: below (unsigned <) */

loc_004B5161: ;
    eax = MEM32(ebp + -16);
    MEM32(esi + 0x144) = eax;
    goto loc_004B5428;

loc_004B516F: ;
    _fa = (uint32_t)(MEM32(edi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0xC), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004B5428; /* jne: not equal / not zero */

loc_004B5179: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = esi + 0x40;
    eax = MEM32(ebx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -16) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_004B5428; /* jbe: below or equal (unsigned <=) */

loc_004B518E: ;
    PUSH32(esp, MEM32(ebp + 8));
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B5198u); RECOMP_ABI_CALL(0x004DD726u, sub_004DD726); /* call 0x004DD726 */

loc_004B5198: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004B519Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B519Cu); } /* indirect call */
    }

loc_004B519F: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -16) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004B518E; /* jb: below (unsigned <) */

loc_004B51AA: ;
    goto loc_004B5428;

loc_004B51AF: ;
    PUSH32(esp, MEM32(edi + 0x10));
    ecx = ebp + -52;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B51BAu); RECOMP_ABI_CALL(0x004DCC43u, sub_004DCC43); /* call 0x004DCC43 */

loc_004B51BA: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x864268);
    ecx = ebp + -52;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B51C9u); RECOMP_ABI_CALL(0x004DD187u, sub_004DD187); /* call 0x004DD187 */

loc_004B51C9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x1000000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_004B521D; /* jne: not equal / not zero */

loc_004B51D0: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B51D7u); RECOMP_ABI_CALL(0x004B40F1u, sub_004B40F1); /* call 0x004B40F1 */

loc_004B51D7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -20) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_004B521D; /* je: equal / zero */

loc_004B51DE: ;
    PUSH32(esp, MEM32(edi + 0x10));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B51E6u); RECOMP_ABI_CALL(0x004BD33Du, sub_004BD33D); /* call 0x004BD33D */

loc_004B51E6: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = esi + 0x40;
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    MEM32(ebp + -8) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_004B521D; /* jbe: below or equal (unsigned <=) */

loc_004B51FB: ;
    PUSH32(esp, MEM32(ebp + 8));
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B5205u); RECOMP_ABI_CALL(0x004DD726u, sub_004DD726); /* call 0x004DD726 */

loc_004B5205: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -16));
    ecx = MEM32(eax);
    PUSH32(esp, MEM32(ebp + -20));
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004B5212u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B520Fu); } /* indirect call */
    }

loc_004B5212: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -8) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004B51FB; /* jb: below (unsigned <) */

loc_004B521D: ;
    ecx = ebp + -52;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B5225u); RECOMP_ABI_CALL(0x004DCC7Fu, sub_004DCC7F); /* call 0x004DCC7F */

loc_004B5225: ;
    goto loc_004B5428;

loc_004B522A: ;
    _fa = (uint32_t)(MEM8(esi + 0xFC)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0xFC), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B5428; /* je: equal / zero */

loc_004B5237: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x864538);
    PUSH32(esp, MEM32(edi + 0x10));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B5246u); RECOMP_ABI_CALL(0x005E3F40u, sub_005E3F40); /* call 0x005E3F40 */

loc_004B5246: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B524Eu); RECOMP_ABI_CALL(0x005E4400u, sub_005E4400); /* call 0x005E4400 */

loc_004B524E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(ebp + 8) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_004B5428; /* jl: less (signed <) */

loc_004B525B: ;
    eax = MEM32(esi + 0x10C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x64) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x64 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_004B5428; /* jae: above or equal (unsigned >=) */

loc_004B526A: ;
    ecx = MEM32(esi + 0x108);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x674);
    edx = MEM32(edi);
    MEM32(eax + ecx) = edx;
    eax = MEM32(esi + 0x10C);
    ecx = MEM32(esi + 0x108);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x674);
    edx = MEM32(edi + 4);
    MEM32(eax + ecx + 4) = edx;
    eax = MEM32(esi + 0x10C);
    ecx = MEM32(esi + 0x108);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x674);
    edx = MEM32(edi + 8);
    MEM32(eax + ecx + 8) = edx;
    eax = MEM32(esi + 0x10C);
    ecx = MEM32(esi + 0x108);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x674);
    edx = MEM32(edi + 0xC);
    MEM32(eax + ecx + 0xC) = edx;
    eax = MEM32(esi + 0x10C);
    ecx = MEM32(esi + 0x108);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x674);
    ebx = 0x200;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(edi + 0x10));
    eax = eax + ecx + 0x10;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B52EBu); RECOMP_ABI_CALL(0x004E367Fu, sub_004E367F); /* call 0x004E367F */

loc_004B52EB: ;
    MEM32(esi + 0x10C) = MEM32(esi + 0x10C) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x10C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x864264);
    PUSH32(esp, MEM32(edi + 0x10));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B52FEu); RECOMP_ABI_CALL(0x005E3F40u, sub_005E3F40); /* call 0x005E3F40 */

loc_004B52FE: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004B5428; /* jne: not equal / not zero */

loc_004B5309: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B530Eu); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004B530E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xC);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B531Au); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004B531A: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B532D; /* je: equal / zero */

loc_004B5321: ;
    PUSH32(esp, MEM32(ebp + 8));
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B532Bu); RECOMP_ABI_CALL(0x004BB415u, sub_004BB415); /* call 0x004BB415 */

loc_004B532B: ;
    goto loc_004B532F;

loc_004B532D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004B532F: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B5335u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004B5335: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B533Cu); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004B533C: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B5343u); RECOMP_ABI_CALL(0x004BB54Bu, sub_004BB54B); /* call 0x004BB54B */

loc_004B5343: ;
    ecx = MEM32(esi + 0x108);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x10C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x674);
    PUSH32(esp, 0x864534);
    eax = eax + ecx + -1636;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B5369u); RECOMP_ABI_CALL(0x005E4200u, sub_005E4200); /* call 0x005E4200 */

loc_004B5369: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_004B5428;

loc_004B5371: ;
    _fa = (uint32_t)(MEM8(esi + 0xFC)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0xFC), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B5428; /* je: equal / zero */

loc_004B537E: ;
    eax = MEM32(esi + 0x10C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x64) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x64 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_004B5428; /* jae: above or equal (unsigned >=) */

loc_004B538D: ;
    ecx = MEM32(esi + 0x108);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x674);
    edx = MEM32(edi);
    MEM32(eax + ecx) = edx;
    eax = MEM32(esi + 0x10C);
    ecx = MEM32(esi + 0x108);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x674);
    edx = MEM32(edi + 4);
    MEM32(eax + ecx + 4) = edx;
    eax = MEM32(esi + 0x10C);
    ecx = MEM32(esi + 0x108);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x674);
    edx = MEM32(edi + 8);
    MEM32(eax + ecx + 8) = edx;
    eax = MEM32(esi + 0x10C);
    ecx = MEM32(esi + 0x108);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x674);
    edx = MEM32(edi + 0xC);
    MEM32(eax + ecx + 0xC) = edx;
    eax = MEM32(esi + 0x10C);
    ecx = MEM32(esi + 0x108);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x674);
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x200);
    eax = eax + ecx + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8645FC);
    PUSH32(esp, MEM32(edi + 0x10));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B5417u); RECOMP_ABI_CALL(0x005E3F40u, sub_005E3F40); /* call 0x005E3F40 */

loc_004B5417: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B541Fu); RECOMP_ABI_CALL(0x005E4A10u, sub_005E4A10); /* call 0x005E4A10 */

loc_004B541F: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x10C) = MEM32(esi + 0x10C) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x10C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_004B5428: ;
    ebx = MEM32(esi + 0xCC);
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004B545D; /* jbe: below or equal (unsigned <=) */

loc_004B5436: ;
    PUSH32(esp, MEM32(ebp + 8));
    ecx = esi + 0xC0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B5444u); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004B5444: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edi + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004B5455; /* jne: not equal / not zero */

loc_004B544C: ;
    ecx = MEM32(eax + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004B5455u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B5453u); } /* indirect call */
    }

loc_004B5455: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004B5436; /* jb: below (unsigned <) */

loc_004B545D: ;
    ecx = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B5468u); RECOMP_ABI_CALL(0x005CFF80u, sub_005CFF80); /* call 0x005CFF80 */

loc_004B5468: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B5241
 * Original: 0x004B5241 - 0x004B546C (555 bytes, 144 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B5241(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B5241: ;
    PUSH32(esp, 0x004B5246u); RECOMP_ABI_CALL(0x005E3F40u, sub_005E3F40); /* call 0x005E3F40 */

loc_004B5246: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004B524Eu); RECOMP_ABI_CALL(0x005E4400u, sub_005E4400); /* call 0x005E4400 */

loc_004B524E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(ebp + 8) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_004B5428; /* jl: less (signed <) */

loc_004B525B: ;
    eax = MEM32(esi + 0x10C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x64) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x64 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_004B5428; /* jae: above or equal (unsigned >=) */

loc_004B526A: ;
    ecx = MEM32(esi + 0x108);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x674);
    edx = MEM32(edi);
    MEM32(eax + ecx) = edx;
    eax = MEM32(esi + 0x10C);
    ecx = MEM32(esi + 0x108);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x674);
    edx = MEM32(edi + 4);
    MEM32(eax + ecx + 4) = edx;
    eax = MEM32(esi + 0x10C);
    ecx = MEM32(esi + 0x108);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x674);
    edx = MEM32(edi + 8);
    MEM32(eax + ecx + 8) = edx;
    eax = MEM32(esi + 0x10C);
    ecx = MEM32(esi + 0x108);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x674);
    edx = MEM32(edi + 0xC);
    MEM32(eax + ecx + 0xC) = edx;
    eax = MEM32(esi + 0x10C);
    ecx = MEM32(esi + 0x108);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x674);
    ebx = 0x200;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(edi + 0x10));
    eax = eax + ecx + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004B52EBu); RECOMP_ABI_CALL(0x004E367Fu, sub_004E367F); /* call 0x004E367F */

loc_004B52EB: ;
    MEM32(esi + 0x10C) = MEM32(esi + 0x10C) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x10C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x864264);
    PUSH32(esp, MEM32(edi + 0x10));
    PUSH32(esp, 0x004B52FEu); RECOMP_ABI_CALL(0x005E3F40u, sub_005E3F40); /* call 0x005E3F40 */

loc_004B52FE: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004B5428; /* jne: not equal / not zero */

loc_004B5309: ;
    PUSH32(esp, 0x004B530Eu); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004B530E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x004B531Au); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004B531A: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B532D; /* je: equal / zero */

loc_004B5321: ;
    PUSH32(esp, MEM32(ebp + 8));
    ecx = eax;
    PUSH32(esp, 0x004B532Bu); RECOMP_ABI_CALL(0x004BB415u, sub_004BB415); /* call 0x004BB415 */

loc_004B532B: ;
    goto loc_004B532F;

loc_004B532D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004B532F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004B5335u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004B5335: ;
    ecx = eax;
    PUSH32(esp, 0x004B533Cu); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004B533C: ;
    ecx = eax;
    PUSH32(esp, 0x004B5343u); RECOMP_ABI_CALL(0x004BB54Bu, sub_004BB54B); /* call 0x004BB54B */

loc_004B5343: ;
    ecx = MEM32(esi + 0x108);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x10C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x674);
    PUSH32(esp, 0x864534);
    eax = eax + ecx + -1636;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004B5369u); RECOMP_ABI_CALL(0x005E4200u, sub_005E4200); /* call 0x005E4200 */

loc_004B5369: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_004B5428;

    _fa = (uint32_t)(MEM8(esi + 0xFC)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0xFC), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B5428; /* je: equal / zero */

loc_004B537E: ;
    eax = MEM32(esi + 0x10C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x64) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x64 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_004B5428; /* jae: above or equal (unsigned >=) */

loc_004B538D: ;
    ecx = MEM32(esi + 0x108);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x674);
    edx = MEM32(edi);
    MEM32(eax + ecx) = edx;
    eax = MEM32(esi + 0x10C);
    ecx = MEM32(esi + 0x108);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x674);
    edx = MEM32(edi + 4);
    MEM32(eax + ecx + 4) = edx;
    eax = MEM32(esi + 0x10C);
    ecx = MEM32(esi + 0x108);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x674);
    edx = MEM32(edi + 8);
    MEM32(eax + ecx + 8) = edx;
    eax = MEM32(esi + 0x10C);
    ecx = MEM32(esi + 0x108);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x674);
    edx = MEM32(edi + 0xC);
    MEM32(eax + ecx + 0xC) = edx;
    eax = MEM32(esi + 0x10C);
    ecx = MEM32(esi + 0x108);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x674);
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x200);
    eax = eax + ecx + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8645FC);
    PUSH32(esp, MEM32(edi + 0x10));
    PUSH32(esp, 0x004B5417u); RECOMP_ABI_CALL(0x005E3F40u, sub_005E3F40); /* call 0x005E3F40 */

loc_004B5417: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004B541Fu); RECOMP_ABI_CALL(0x005E4A10u, sub_005E4A10); /* call 0x005E4A10 */

loc_004B541F: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x10C) = MEM32(esi + 0x10C) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x10C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_004B5428: ;
    ebx = MEM32(esi + 0xCC);
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004B545D; /* jbe: below or equal (unsigned <=) */

loc_004B5436: ;
    PUSH32(esp, MEM32(ebp + 8));
    ecx = esi + 0xC0;
    PUSH32(esp, 0x004B5444u); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004B5444: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edi + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004B5455; /* jne: not equal / not zero */

loc_004B544C: ;
    ecx = MEM32(eax + 0xC);
    eax = MEM32(ecx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004B5455u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B5453u); } /* indirect call */
    }

loc_004B5455: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004B5436; /* jb: below (unsigned <) */

loc_004B545D: ;
    ecx = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    PUSH32(esp, 0x004B5468u); RECOMP_ABI_CALL(0x005CFF80u, sub_005CFF80); /* call 0x005CFF80 */

loc_004B5468: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B546C
 * Original: 0x004B546C - 0x004B547E (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B546C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B546C: ;
    ecx = MEM32(esp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B547D; /* je: equal / zero */

loc_004B5474: ;
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0x004B547Du); RECOMP_ABI_CALL(0x004B50BDu, sub_004B50BD); /* call 0x004B50BD */

loc_004B547D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004B547E
 * Original: 0x004B547E - 0x004B583B (957 bytes, 292 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B547E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B547E: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x004B548Bu); RECOMP_ABI_CALL(0x004BD984u, sub_004BD984); /* call 0x004BD984 */

loc_004B548B: ;
    PUSH32(esp, 8);
    ecx = esi + 0x8C;
    PUSH32(esp, 0x004B5498u); RECOMP_ABI_CALL(0x004B2EF9u, sub_004B2EF9); /* call 0x004B2EF9 */

loc_004B5498: ;
    ebp = esi + 0x78;
    MEM32(ebp) = 0x863F20;
    MEM32(esi + 0x7C) = 0x86426C;
    eax = esi + 0x80;
    MEM32(eax) = 0x864280;
    ecx = esi + 0x84;
    MEM32(ecx) = 0x864288;
    edx = esi + 0x88;
    MEM32(edx) = 0x863F30;
    MEM32(ecx) = 0x8646AC;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = 0x864638;
    MEM32(ebp) = 0x864628;
    MEM32(esi + 0x7C) = 0x864620;
    MEM32(eax) = 0x864618;
    MEM32(edx) = 0x864610;
    edi = esi + 0xB0;
    MEM32(esi + 0xA8) = ebx;
    ecx = edi;
    MEM32(esi + 0xAC) = ebx;
    PUSH32(esp, 0x004B550Eu); RECOMP_ABI_CALL(0x004E36A2u, sub_004E36A2); /* call 0x004E36A2 */

loc_004B550E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x32);
    ecx = esi + 0xB8;
    MEM32(edi) = 0x864278;
    PUSH32(esp, 0x004B5522u); RECOMP_ABI_CALL(0x004B2F5Fu, sub_004B2F5F); /* call 0x004B2F5F */

loc_004B5522: ;
    PUSH32(esp, ebx);
    MEM32(esi + 0xE0) = ebx;
    MEM32(esi + 0xE4) = ebx;
    MEM32(esi + 0xE8) = ebx;
    MEM32(esi + 0xEC) = ebx;
    MEM32(esi + 0xF0) = ebx;
    MEM32(esi + 0xF4) = ebx;
    MEM32(esi + 0xF8) = ebx;
    MEM8(esi + 0xFC) = LO8(ebx);
    MEM32(esi + 0x100) = ebx;
    PUSH32(esp, 0x10);
    ecx = esi + 0x118;
    MEM32(esi + 0x104) = ebx;
    MEM32(esi + 0x10C) = ebx;
    MEM32(esi + 0x110) = ebx;
    MEM8(esi + 0x114) = 1;
    PUSH32(esp, 0x004B557Fu); RECOMP_ABI_CALL(0x004B2FDDu, sub_004B2FDD); /* call 0x004B2FDD */

loc_004B557F: ;
    MEM32(esi + 0x144) = ebx;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x28);
    edi = MEM32(eax + 8);
    PUSH32(esp, 0x004B5598u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004B5598: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x28550);
    ecx = eax;
    MEM32(esp + 0x24) = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x004B55AAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B55A8u); } /* indirect call */
    }

loc_004B55AA: ;
    PUSH32(esp, 0x636F6E66);
    PUSH32(esp, edi);
    MEM32(esi + 0x108) = eax;
    PUSH32(esp, 0x004B55BBu); RECOMP_ABI_CALL(0x005E2630u, sub_005E2630); /* call 0x005E2630 */

loc_004B55BB: ;
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0x004B55C4u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004B55C4: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x004B55CEu); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004B55CE: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_004B55EC; /* je: equal / zero */

loc_004B55D5: ;
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_004B55E2; /* jne: not equal / not zero */

loc_004B55DD: ;
    ecx = 0x7B891F;

loc_004B55E2: ;
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x004B55EAu); RECOMP_ABI_CALL(0x004DCC43u, sub_004DCC43); /* call 0x004DCC43 */

loc_004B55EA: ;
    goto loc_004B55EE;

loc_004B55EC: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004B55EE: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004B55F4u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004B55F4: ;
    ecx = eax;
    PUSH32(esp, 0x004B55FBu); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004B55FB: ;
    PUSH32(esp, eax);
    ecx = esi + 0xA8;
    PUSH32(esp, 0x004B5607u); RECOMP_ABI_CALL(0x004B2F44u, sub_004B2F44); /* call 0x004B2F44 */

loc_004B5607: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x4B546C);
    PUSH32(esp, 3);
    PUSH32(esp, edi);
    PUSH32(esp, 0x004B5615u); RECOMP_ABI_CALL(0x005E1F20u, sub_005E1F20); /* call 0x005E1F20 */

loc_004B5615: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x4B546C);
    PUSH32(esp, 4);
    PUSH32(esp, edi);
    MEM32(esi + 0xE0) = eax;
    PUSH32(esp, 0x004B5629u); RECOMP_ABI_CALL(0x005E1F20u, sub_005E1F20); /* call 0x005E1F20 */

loc_004B5629: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x4B546C);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    MEM32(esi + 0xE4) = eax;
    PUSH32(esp, 0x004B563Du); RECOMP_ABI_CALL(0x005E1F20u, sub_005E1F20); /* call 0x005E1F20 */

loc_004B563D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x4B546C);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    MEM32(esi + 0xE8) = eax;
    PUSH32(esp, 0x004B5650u); RECOMP_ABI_CALL(0x005E1F20u, sub_005E1F20); /* call 0x005E1F20 */

loc_004B5650: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x40)) >> 32) & 1);
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x4B39AF);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    MEM32(esi + 0xEC) = eax;
    PUSH32(esp, 0x004B5667u); RECOMP_ABI_CALL(0x005E6AB0u, sub_005E6AB0); /* call 0x005E6AB0 */

loc_004B5667: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x864600);
    PUSH32(esp, 0x73656C65);
    PUSH32(esp, edi);
    MEM32(esi + 0x104) = eax;
    PUSH32(esp, 0x004B567Fu); RECOMP_ABI_CALL(0x005E20B0u, sub_005E20B0); /* call 0x005E20B0 */

loc_004B567F: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x24);
    ecx = MEM32(eax + 0xC);
    eax = MEM32(ecx);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x24)) >> 32) & 1);
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004B5698u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B5695u); } /* indirect call */
    }

loc_004B5698: ;
    MEM32(esi + 0xAC) = eax;
    eax = esi + 0x7C;
    PUSH32(esp, eax);
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x34);
    ecx = MEM32(eax + 0x24);
    PUSH32(esp, 0x004B56B5u); RECOMP_ABI_CALL(0x004BD7BAu, sub_004BD7BA); /* call 0x004BD7BA */

loc_004B56B5: ;
    PUSH32(esp, 0x004B56BAu); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004B56BA: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0x004B56C4u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004B56C4: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_004B56DB; /* je: equal / zero */

loc_004B56CB: ;
    ecx = esi + 0x84;
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x004B56D9u); RECOMP_ABI_CALL(0x004B4A8Fu, sub_004B4A8F); /* call 0x004B4A8F */

loc_004B56D9: ;
    goto loc_004B56DD;

loc_004B56DB: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004B56DD: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004B56E3u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004B56E3: ;
    ecx = eax;
    PUSH32(esp, 0x004B56EAu); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004B56EA: ;
    ebp = esi + 0x100;
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x004B56F8u); RECOMP_ABI_CALL(0x004B2FC2u, sub_004B2FC2); /* call 0x004B2FC2 */

loc_004B56F8: ;
    eax = MEM32(ebp);
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
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x34);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x24);
    PUSH32(esp, 0x004B571Au); RECOMP_ABI_CALL(0x004BD7BAu, sub_004BD7BA); /* call 0x004BD7BA */

loc_004B571A: ;
    PUSH32(esp, 0x70726976);
    eax = esi + 0x88;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x004B572Du); RECOMP_ABI_CALL(0x004B3DE6u, sub_004B3DE6); /* call 0x004B3DE6 */

loc_004B572D: ;
    PUSH32(esp, 0x004B5732u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004B5732: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 8);
    PUSH32(esp, 0x004B573Cu); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004B573C: ;
    ebp = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_004B5755; /* je: equal / zero */

loc_004B5745: ;
    ecx = ebp;
    PUSH32(esp, 0x004B574Cu); RECOMP_ABI_CALL(0x004BB3D6u, sub_004BB3D6); /* call 0x004BB3D6 */

loc_004B574C: ;
    MEM32(ebp) = 0x864290;
    goto loc_004B5757;

loc_004B5755: ;
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004B5757: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x004B575Du); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004B575D: ;
    ecx = eax;
    PUSH32(esp, 0x004B5764u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004B5764: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x004B576Cu); RECOMP_ABI_CALL(0x004B4A02u, sub_004B4A02); /* call 0x004B4A02 */

loc_004B576C: ;
    PUSH32(esp, 0x004B5771u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004B5771: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 8);
    PUSH32(esp, 0x004B577Bu); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004B577B: ;
    ebp = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_004B5794; /* je: equal / zero */

loc_004B5784: ;
    ecx = ebp;
    PUSH32(esp, 0x004B578Bu); RECOMP_ABI_CALL(0x004BB3D6u, sub_004BB3D6); /* call 0x004BB3D6 */

loc_004B578B: ;
    MEM32(ebp) = 0x8642A4;
    goto loc_004B5796;

loc_004B5794: ;
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004B5796: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x004B579Cu); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004B579C: ;
    ecx = eax;
    PUSH32(esp, 0x004B57A3u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004B57A3: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x004B57ABu); RECOMP_ABI_CALL(0x004B4A02u, sub_004B4A02); /* call 0x004B4A02 */

loc_004B57AB: ;
    PUSH32(esp, 0x004B57B0u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004B57B0: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 8);
    PUSH32(esp, 0x004B57BAu); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004B57BA: ;
    ebp = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_004B57D3; /* je: equal / zero */

loc_004B57C3: ;
    ecx = ebp;
    PUSH32(esp, 0x004B57CAu); RECOMP_ABI_CALL(0x004BB3D6u, sub_004BB3D6); /* call 0x004BB3D6 */

loc_004B57CA: ;
    MEM32(ebp) = 0x8642B8;
    goto loc_004B57D5;

loc_004B57D3: ;
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004B57D5: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x004B57DBu); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004B57DB: ;
    ecx = eax;
    PUSH32(esp, 0x004B57E2u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004B57E2: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x004B57EAu); RECOMP_ABI_CALL(0x004B4A02u, sub_004B4A02); /* call 0x004B4A02 */

loc_004B57EA: ;
    PUSH32(esp, 0x73656C66);
    PUSH32(esp, edi);
    PUSH32(esp, 0x004B57F5u); RECOMP_ABI_CALL(0x005E2630u, sub_005E2630); /* call 0x005E2630 */

loc_004B57F5: ;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(eax + 0x1B4));
    PUSH32(esp, 0x004B5801u); RECOMP_ABI_CALL(0x005E8BD0u, sub_005E8BD0); /* call 0x005E8BD0 */

loc_004B5801: ;
    ecx = MEM32(esp + 0x24);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    MEM32(esi + 0x140) = eax;
    eax = MEM32(ecx);
    PUSH32(esp, 0xC);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004B5817u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B5815u); } /* indirect call */
    }

loc_004B5817: ;
    ecx = esi + 0x164;
    MEM32(ecx) = eax;
    MEM32(eax) = ebx;
    eax = MEM32(ecx);
    PUSH32(esp, 5);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(4)) >> 32) & 1);
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004B582Fu); RECOMP_ABI_CALL(0x005CFEF0u, sub_005CFEF0); /* call 0x005CFEF0 */

loc_004B582F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004B583B
 * Original: 0x004B583B - 0x004B583E (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B583B(void)
{

loc_004B583B: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B583E
 * Original: 0x004B583E - 0x004B5846 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B583E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B583E: ;
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x78;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004B5A5D(); return; /* tail jmp 0x004B5A5D */

}

/**
 * sub_004B5846
 * Original: 0x004B5846 - 0x004B584E (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B5846(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B5846: ;
    _fb = (uint32_t)(0x7C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x7C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004B5A5D(); return; /* tail jmp 0x004B5A5D */

}

/**
 * sub_004B584E
 * Original: 0x004B584E - 0x004B5859 (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B584E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B584E: ;
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x80;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004B5A5D(); return; /* tail jmp 0x004B5A5D */

}

/**
 * sub_004B5859
 * Original: 0x004B5859 - 0x004B5864 (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B5859(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B5859: ;
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x84;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004B5A5D(); return; /* tail jmp 0x004B5A5D */

}

/**
 * sub_004B5864
 * Original: 0x004B5864 - 0x004B586F (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B5864(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B5864: ;
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x88;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004B5A5D(); return; /* tail jmp 0x004B5A5D */

}

/**
 * sub_004B586F
 * Original: 0x004B586F - 0x004B5A08 (409 bytes, 102 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B586F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B586F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x864638;
    MEM32(esi + 0x78) = 0x864628;
    MEM32(esi + 0x7C) = 0x864620;
    MEM32(esi + 0x80) = 0x864618;
    MEM32(esi + 0x84) = 0x8646AC;
    ebx = esi + 0x88;
    MEM32(ebx) = 0x864610;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x24);
    ecx = MEM32(eax + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0xAC));
    PUSH32(esp, 0x004B58C1u); RECOMP_ABI_CALL(0x004E354Bu, sub_004E354B); /* call 0x004E354B */

loc_004B58C1: ;
    PUSH32(esp, 0x70726976);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x004B58CEu); RECOMP_ABI_CALL(0x004B3E43u, sub_004B3E43); /* call 0x004B3E43 */

loc_004B58CE: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x28);
    edi = MEM32(eax + 8);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x8646B4);
    PUSH32(esp, 0x73656C65);
    PUSH32(esp, edi);
    PUSH32(esp, 0x004B58F0u); RECOMP_ABI_CALL(0x005E20B0u, sub_005E20B0); /* call 0x005E20B0 */

loc_004B58F0: ;
    PUSH32(esp, MEM32(esi + 0x104));
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0x004B58FEu); RECOMP_ABI_CALL(0x005E6B70u, sub_005E6B70); /* call 0x005E6B70 */

loc_004B58FE: ;
    PUSH32(esp, MEM32(esi + 0xE0));
    PUSH32(esp, edi);
    PUSH32(esp, 0x004B590Au); RECOMP_ABI_CALL(0x005E1F80u, sub_005E1F80); /* call 0x005E1F80 */

loc_004B590A: ;
    PUSH32(esp, MEM32(esi + 0xE4));
    PUSH32(esp, edi);
    PUSH32(esp, 0x004B5916u); RECOMP_ABI_CALL(0x005E1F80u, sub_005E1F80); /* call 0x005E1F80 */

loc_004B5916: ;
    PUSH32(esp, MEM32(esi + 0xE8));
    PUSH32(esp, edi);
    PUSH32(esp, 0x004B5922u); RECOMP_ABI_CALL(0x005E1F80u, sub_005E1F80); /* call 0x005E1F80 */

loc_004B5922: ;
    PUSH32(esp, MEM32(esi + 0xEC));
    PUSH32(esp, edi);
    PUSH32(esp, 0x004B592Eu); RECOMP_ABI_CALL(0x005E1F80u, sub_005E1F80); /* call 0x005E1F80 */

loc_004B592E: ;
    edi = esi + 0xF4;
    ecx = MEM32(edi);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B5945; /* je: equal / zero */

loc_004B593D: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004B5942u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B593Fu); } /* indirect call */
    }

loc_004B5942: ;
    MEM32(edi) = MEM32(edi) & 0;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_004B5945: ;
    edi = esi + 0xF8;
    ecx = MEM32(edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B5959; /* je: equal / zero */

loc_004B5951: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004B5956u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B5953u); } /* indirect call */
    }

loc_004B5956: ;
    MEM32(edi) = MEM32(edi) & 0;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_004B5959: ;
    PUSH32(esp, MEM32(esi + 0x140));
    PUSH32(esp, 0x004B5964u); RECOMP_ABI_CALL(0x005E8C40u, sub_005E8C40); /* call 0x005E8C40 */

loc_004B5964: ;
    POP32(esp, ecx);
    PUSH32(esp, 0x004B596Au); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004B596A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi + 0x108));
    edi = eax;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004B5979u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B5976u); } /* indirect call */
    }

loc_004B5979: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi + 0x164));
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004B5986u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B5983u); } /* indirect call */
    }

loc_004B5986: ;
    ecx = esi + 0x118;
    PUSH32(esp, 0x004B5991u); RECOMP_ABI_CALL(0x004E1628u, sub_004E1628); /* call 0x004E1628 */

loc_004B5991: ;
    ecx = MEM32(esi + 0x100);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B59A0; /* je: equal / zero */

loc_004B599B: ;
    PUSH32(esp, 0x004B59A0u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004B59A0: ;
    ecx = esi + 0xB8;
    PUSH32(esp, 0x004B59ABu); RECOMP_ABI_CALL(0x004E15D8u, sub_004E15D8); /* call 0x004E15D8 */

loc_004B59AB: ;
    ecx = esi + 0xB0;
    MEM32(ecx) = 0x864278;
    PUSH32(esp, 0x004B59BCu); RECOMP_ABI_CALL(0x004E36B4u, sub_004E36B4); /* call 0x004E36B4 */

loc_004B59BC: ;
    ecx = MEM32(esi + 0xA8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B59CB; /* je: equal / zero */

loc_004B59C6: ;
    PUSH32(esp, 0x004B59CBu); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004B59CB: ;
    MEM32(ebx) = 0x863F30;
    MEM32(esi + 0x84) = 0x864288;
    MEM32(esi + 0x80) = 0x864280;
    MEM32(esi + 0x7C) = 0x86426C;
    ecx = esi + 0x8C;
    MEM32(esi + 0x78) = 0x863F20;
    PUSH32(esp, 0x004B59FEu); RECOMP_ABI_CALL(0x004DD70Au, sub_004DD70A); /* call 0x004DD70A */

loc_004B59FE: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_004BD9BE(); return; /* tail jmp 0x004BD9BE */

}

/**
 * sub_004B5A08
 * Original: 0x004B5A08 - 0x004B5A41 (57 bytes, 23 insns)
 * Category: game_vtable
 * CC: thiscall, 8 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004B5A08(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_004B5A08: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B5A13u); RECOMP_ABI_CALL(0x004DC98Cu, sub_004DC98C); /* call 0x004DC98C */

loc_004B5A13: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x24));
    edx = MEM32(eax);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 0x20));
    ecx = eax;
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004B5A34u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B5A31u); } /* indirect call */
    }

loc_004B5A34: ;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B5A3Cu); RECOMP_ABI_CALL(0x004B45CCu, sub_004B45CC); /* call 0x004B45CC */

loc_004B5A3C: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 36; return; /* ret 32 */

}

/**
 * sub_004B5A41
 * Original: 0x004B5A41 - 0x004B5A5D (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B5A41(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B5A41: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004B5A49u); RECOMP_ABI_CALL(0x004B4ADEu, sub_004B4ADE); /* call 0x004B4ADE */

loc_004B5A49: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004B5A57; /* je: equal / zero */

loc_004B5A50: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004B5A56u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004B5A56: ;
    POP32(esp, ecx);

loc_004B5A57: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B5A5D
 * Original: 0x004B5A5D - 0x004B5A79 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B5A5D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B5A5D: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004B5A65u); RECOMP_ABI_CALL(0x004B586Fu, sub_004B586F); /* call 0x004B586F */

loc_004B5A65: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004B5A73; /* je: equal / zero */

loc_004B5A6C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004B5A72u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004B5A72: ;
    POP32(esp, ecx);

loc_004B5A73: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B5A7D
 * Original: 0x004B5A7D - 0x004B5A91 (20 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B5A7D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B5A7D: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B5A8F; /* je: equal / zero */

loc_004B5A87: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004B5A8Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B5A89u); } /* indirect call */
    }

loc_004B5A8B: ;
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_004B5A8F: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004B5A91
 * Original: 0x004B5A91 - 0x004B5AA8 (23 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B5A91(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B5A91: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B5AA6; /* je: equal / zero */

loc_004B5A9B: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004B5AA2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B5A9Fu); } /* indirect call */
    }

loc_004B5AA2: ;
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_004B5AA6: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004B5AA8
 * Original: 0x004B5AA8 - 0x004B5AE6 (62 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B5AA8(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B5AA8: ;
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B5AB2; /* je: equal / zero */

loc_004B5AAE: ;
    SET_LO8(eax, 1);
    goto loc_004B5ABC;

loc_004B5AB2: ;
    _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFF8u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x004B5ABAu); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004B5ABA: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_004B5ABC: ;
    esp += 8; return; /* ret 4 */

    esp += 8; return; /* ret 4 */

    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B5AE6
 * Original: 0x004B5AE6 - 0x004B5B68 (130 bytes, 38 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B5AE6(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B5AE6: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x004B5AF0u); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_004B5AF0: ;
    ebx = esi + 0xC;
    ecx = ebx;
    MEM32(esi + 8) = 0x863F20;
    PUSH32(esp, 0x004B5B01u); RECOMP_ABI_CALL(0x004E370Eu, sub_004E370E); /* call 0x004E370E */

loc_004B5B01: ;
    edi = esi + 0x10;
    ecx = edi;
    PUSH32(esp, 0x004B5B0Bu); RECOMP_ABI_CALL(0x004BDA0Bu, sub_004BDA0B); /* call 0x004BDA0B */

loc_004B5B0B: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = esi + 0x18;
    MEM32(esi) = 0x864700;
    MEM32(esi + 8) = 0x8646F0;
    MEM32(ebx) = 0x8646CC;
    MEM32(edi) = 0x8646C0;
    MEM32(esi + 0x14) = eax;
    PUSH32(esp, 0x004B5B37u); RECOMP_ABI_CALL(0x004ABC3Eu, sub_004ABC3E); /* call 0x004ABC3E */

loc_004B5B37: ;
    MEM32(esi + 0x1C) = 0xA;
    ebx = esi + 0x20;
    MEM32(ebx) = MEM32(ebx) & 0;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = esi;
    PUSH32(esp, 0x004B5B4Bu); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_004B5B4B: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0xAC); PUSH32(esp, 0x004B5B58u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B5B52u); } /* indirect call */
    }

loc_004B5B58: ;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x004B5B60u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004B5B60: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004B5B68
 * Original: 0x004B5B68 - 0x004B5B6B (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B5B68(void)
{

loc_004B5B68: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004B5B6B
 * Original: 0x004B5B6B - 0x004B5B6E (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B5B6B(void)
{

loc_004B5B6B: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B5B6E
 * Original: 0x004B5B6E - 0x004B5B71 (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B5B6E(void)
{

loc_004B5B6E: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B5B71
 * Original: 0x004B5B71 - 0x004B5B72 (1 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B5B71(void)
{

loc_004B5B71: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004B5B72
 * Original: 0x004B5B72 - 0x004B5B75 (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B5B72(void)
{

loc_004B5B72: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B5B75
 * Original: 0x004B5B75 - 0x004B5B78 (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B5B75(void)
{

loc_004B5B75: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B5B78
 * Original: 0x004B5B78 - 0x004B5B80 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B5B78(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B5B78: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004B6050(); return; /* tail jmp 0x004B6050 */

}

/**
 * sub_004B5B80
 * Original: 0x004B5B80 - 0x004B5B88 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B5B80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B5B80: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004B6050(); return; /* tail jmp 0x004B6050 */

}

/**
 * sub_004B5B88
 * Original: 0x004B5B88 - 0x004B5B90 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B5B88(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B5B88: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004B6050(); return; /* tail jmp 0x004B6050 */

}

/**
 * sub_004B5B90
 * Original: 0x004B5B90 - 0x004B5C28 (152 bytes, 51 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004B5B90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B5B90: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x20;
    ecx = MEM32(edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    ebx = esi + 0xC;
    MEM32(esi) = 0x864700;
    MEM32(esi + 8) = 0x8646F0;
    MEM32(ebx) = 0x8646CC;
    MEM32(esi + 0x10) = 0x8646C0;
    if (CMP_EQ(_fa, _fb)) goto loc_004B5BCD; /* je: equal / zero */

loc_004B5BBF: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004B5BC4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B5BC1u); } /* indirect call */
    }

loc_004B5BC4: ;
    PUSH32(esp, 0);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B5BCDu); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004B5BCD: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x30);
    ecx = MEM32(eax + 0xB4);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -4) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B5BEDu); RECOMP_ABI_CALL(0x004DD8B2u, sub_004DD8B2); /* call 0x004DD8B2 */

loc_004B5BED: ;
    edi = MEM32(edi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B5BFA; /* je: equal / zero */

loc_004B5BF3: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B5BFAu); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004B5BFA: ;
    ecx = MEM32(esi + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B5C06; /* je: equal / zero */

loc_004B5C01: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B5C06u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004B5C06: ;
    ecx = esi + 0x10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B5C0Eu); RECOMP_ABI_CALL(0x004BDA14u, sub_004BDA14); /* call 0x004BDA14 */

loc_004B5C0E: ;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B5C15u); RECOMP_ABI_CALL(0x004E3717u, sub_004E3717); /* call 0x004E3717 */

loc_004B5C15: ;
    ecx = esi;
    MEM32(esi + 8) = 0x863F20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B5C23u); RECOMP_ABI_CALL(0x004DD576u, sub_004DD576); /* call 0x004DD576 */

loc_004B5C23: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004B5C28
 * Original: 0x004B5C28 - 0x004B5C69 (65 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004B5C28(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004B5C28: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x30);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(eax + 0xB4);
    eax = esi;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    ecx = esi + 0xC;
    _cf = 0; /* logical op clears CF */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -4) = eax;
    eax = ebp + -4;
    PUSH32(esp, eax);
    ecx = edi + 0x10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B5C5Bu); RECOMP_ABI_CALL(0x004DD750u, sub_004DD750); /* call 0x004DD750 */

loc_004B5C5B: ;
    PUSH32(esp, MEM32(esi + 0x18));
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B5C65u); RECOMP_ABI_CALL(0x004E3FD7u, sub_004E3FD7); /* call 0x004E3FD7 */

loc_004B5C65: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004B5C69
 * Original: 0x004B5C69 - 0x004B5C82 (25 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B5C69(void)
{

loc_004B5C69: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esi + 0x10;
    PUSH32(esp, 0x004B5C76u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004B5C76: ;
    ecx = esi + -16;
    PUSH32(esp, 0x004B5C7Eu); RECOMP_ABI_CALL(0x004B5C28u, sub_004B5C28); /* call 0x004B5C28 */

loc_004B5C7E: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B5C82
 * Original: 0x004B5C82 - 0x004B5CDB (89 bytes, 35 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B5C82(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004B5C82: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x10;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x004B5C92u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004B5C92: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_004B5CC4; /* jle: less or equal (signed <=) */

loc_004B5C99: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_004B5CC4; /* jg: greater (signed >) */

loc_004B5CA0: ;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) - 1;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_004B5CC4; /* je: equal / zero */

loc_004B5CA5: ;
    ecx = MEM32(esi + 8);
    eax = MEM32(ecx);
    edx = esi + -16;
    _cf = (int)((edx) != 0);
    edx = (uint32_t)(-(int32_t)edx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    edx = edx & esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0xAC); PUSH32(esp, 0x004B5CBAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B5CB4u); } /* indirect call */
    }

loc_004B5CBA: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x004B5CC2u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004B5CC2: ;
    goto loc_004B5CD6;

loc_004B5CC4: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004B5CD6; /* je: equal / zero */

loc_004B5CCB: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004B5CD2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B5CCFu); } /* indirect call */
    }

loc_004B5CD2: ;
    _cf = 0; /* logical op clears CF */
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_004B5CD6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004B5CDB
 * Original: 0x004B5CDB - 0x004B5D0E (51 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B5CDB(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B5CDB: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x30);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(eax + 0xB4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x004B5CF4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B5CF1u); } /* indirect call */
    }

loc_004B5CF4: ;
    ecx = MEM32(esi + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004B5CFEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B5CFBu); } /* indirect call */
    }

loc_004B5CFE: ;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = esi + -8;
    PUSH32(esp, 0x004B5D0Au); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004B5D0A: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B5D0E
 * Original: 0x004B5D0E - 0x004B5D8D (127 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004B5D0E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B5D0E: ;
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
    PUSH32(esp, 0x004B5D1Cu); RECOMP_ABI_CALL(0x004BDA38u, sub_004BDA38); /* call 0x004BDA38 */

loc_004B5D1C: ;
    edi = esi + 8;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B5D26u); RECOMP_ABI_CALL(0x004E370Eu, sub_004E370E); /* call 0x004E370E */

loc_004B5D26: ;
    ebx = esi + 0xC;
    MEM32(ebx) = 0x863F20;
    MEM32(esi) = 0x864738;
    MEM32(edi) = 0x864714;
    MEM32(ebx) = 0x864704;
    MEM32(esi + 0x10) = MEM32(esi + 0x10) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = ebp + -4;
    PUSH32(esp, eax);
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x30);
    ecx = MEM32(eax + 0xB4);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -4) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B5D65u); RECOMP_ABI_CALL(0x004DD750u, sub_004DD750); /* call 0x004DD750 */

loc_004B5D65: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x24);
    ecx = MEM32(eax + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004B5D7Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B5D7Au); } /* indirect call */
    }

loc_004B5D7D: ;
    PUSH32(esp, eax);
    ecx = esi + 0x10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B5D86u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004B5D86: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004B5D8D
 * Original: 0x004B5D8D - 0x004B5D90 (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B5D8D(void)
{

loc_004B5D8D: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004B5D90
 * Original: 0x004B5D90 - 0x004B5D93 (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B5D90(void)
{

loc_004B5D90: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B5D93
 * Original: 0x004B5D93 - 0x004B5D96 (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B5D93(void)
{

loc_004B5D93: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B5D96
 * Original: 0x004B5D96 - 0x004B5D97 (1 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B5D96(void)
{

loc_004B5D96: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004B5D97
 * Original: 0x004B5D97 - 0x004B5D98 (1 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B5D97(void)
{

loc_004B5D97: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004B5D98
 * Original: 0x004B5D98 - 0x004B5D9B (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B5D98(void)
{

loc_004B5D98: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B5D9B
 * Original: 0x004B5D9B - 0x004B5D9E (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B5D9B(void)
{

loc_004B5D9B: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B5D9E
 * Original: 0x004B5D9E - 0x004B5DA1 (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B5D9E(void)
{

loc_004B5D9E: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B5DA1
 * Original: 0x004B5DA1 - 0x004B5DA9 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B5DA1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B5DA1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004B606C(); return; /* tail jmp 0x004B606C */

}

/**
 * sub_004B5DA9
 * Original: 0x004B5DA9 - 0x004B5DB1 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B5DA9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B5DA9: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004B606C(); return; /* tail jmp 0x004B606C */

}

/**
 * sub_004B5DB1
 * Original: 0x004B5DB1 - 0x004B5DC0 (15 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B5DB1(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004B5DB1: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004B5DB6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B5DB3u); } /* indirect call */
    }

loc_004B5DB6: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0x14) (32-bit) */
    _cf = (int)(_fa < _fb);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esp += 4; return; /* ret */

}

/**
 * sub_004B5DC0
 * Original: 0x004B5DC0 - 0x004B5E3E (126 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004B5DC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B5DC0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esi) = 0x864738;
    MEM32(esi + 0xC) = 0x864704;
    edi = esi + 8;
    MEM32(edi) = 0x864714;
    eax = ebp + -4;
    PUSH32(esp, eax);
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x30);
    ecx = MEM32(eax + 0xB4);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -4) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B5DFEu); RECOMP_ABI_CALL(0x004DD8B2u, sub_004DD8B2); /* call 0x004DD8B2 */

loc_004B5DFE: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B5E19; /* je: equal / zero */

loc_004B5E05: ;
    PUSH32(esp, eax);
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x24);
    ecx = MEM32(eax + 0xC);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B5E19u); RECOMP_ABI_CALL(0x004E354Bu, sub_004E354B); /* call 0x004E354B */

loc_004B5E19: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B5E25; /* je: equal / zero */

loc_004B5E20: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B5E25u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004B5E25: ;
    ecx = edi;
    MEM32(esi + 0xC) = 0x863F20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B5E33u); RECOMP_ABI_CALL(0x004E3717u, sub_004E3717); /* call 0x004E3717 */

loc_004B5E33: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B5E3Au); RECOMP_ABI_CALL(0x004BDA4Au, sub_004BDA4A); /* call 0x004BDA4A */

loc_004B5E3A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004B5E3E
 * Original: 0x004B5E3E - 0x004B5EB6 (120 bytes, 42 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B5E3E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004B5E3E: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x34);
    PUSH32(esp, MEM32(esp + 4));
    ecx = MEM32(eax + 0x10);
    PUSH32(esp, 0x004B5E55u); RECOMP_ABI_CALL(0x004AEE08u, sub_004AEE08); /* call 0x004AEE08 */

loc_004B5E55: ;
    PUSH32(esp, 0x004B5E5Au); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004B5E5A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x24);
    PUSH32(esp, 0x004B5E66u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004B5E66: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004B5E7E; /* je: equal / zero */

loc_004B5E6D: ;
    PUSH32(esp, MEM32(esp + 8));
    ecx = eax;
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0x004B5E7Cu); RECOMP_ABI_CALL(0x004B5AE6u, sub_004B5AE6); /* call 0x004B5AE6 */

loc_004B5E7C: ;
    goto loc_004B5E80;

loc_004B5E7E: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004B5E80: ;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004B5E87u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004B5E87: ;
    ecx = eax;
    PUSH32(esp, 0x004B5E8Eu); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004B5E8E: ;
    ecx = MEM32(0x90E7AC);
    ecx = MEM32(ecx + 0x18);
    ecx = MEM32(ecx + 0x24);
    ecx = MEM32(ecx + 0xC);
    edx = MEM32(ecx);
    edi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((edi) != 0);
    edi = (uint32_t)(-(int32_t)edi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    edi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    _cf = 0; /* logical op clears CF */
    edi = edi & eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004B5EB2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B5EAFu); } /* indirect call */
    }

loc_004B5EB2: ;
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004B5EB6
 * Original: 0x004B5EB6 - 0x004B5ECC (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B5EB6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B5EB6: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x30);
    ecx = MEM32(eax + 0xB4);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0xC)); return; /* indirect tail jmp */

}

/**
 * sub_004B5ECC
 * Original: 0x004B5ECC - 0x004B5F13 (71 bytes, 35 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B5ECC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B5ECC: ;
    eax = MEM32(ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004B5ED5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B5ED2u); } /* indirect call */
    }

loc_004B5ED5: ;
    edi = MEM32(eax + 0x14);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004B5F06; /* jbe: below or equal (unsigned <=) */

loc_004B5EDE: ;
    ebp = eax + 8;

loc_004B5EE1: ;
    PUSH32(esp, ebx);
    ecx = ebp;
    PUSH32(esp, 0x004B5EE9u); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004B5EE9: ;
    esi = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004B5EF2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B5EEFu); } /* indirect call */
    }

loc_004B5EF2: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 0x14));
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x004B5EFDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B5EFAu); } /* indirect call */
    }

loc_004B5EFD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004B5F0F; /* jne: not equal / not zero */

loc_004B5F01: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004B5EE1; /* jb: below (unsigned <) */

loc_004B5F06: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004B5F08: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_004B5F0F: ;
    eax = esi;
    goto loc_004B5F08;

}

/**
 * sub_004B5F13
 * Original: 0x004B5F13 - 0x004B5F53 (64 bytes, 25 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B5F13(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B5F13: ;
    PUSH32(esp, esi);
    esi = MEM32(0x90E7AC);
    eax = MEM32(esi + 0x18);
    eax = MEM32(eax + 0x30);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(eax + 0xB4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x004B5F2Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B5F2Bu); } /* indirect call */
    }

loc_004B5F2E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004B5F50; /* jne: not equal / not zero */

loc_004B5F32: ;
    ecx = edi + -8;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004B5F3Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B5F37u); } /* indirect call */
    }

loc_004B5F3A: ;
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x14), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004B5F50; /* jne: not equal / not zero */

loc_004B5F40: ;
    eax = MEM32(esi + 0x18);
    eax = MEM32(eax + 0x24);
    ecx = MEM32(eax + 8);
    POP32(esp, edi);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004E4B56(); return; /* tail jmp 0x004E4B56 */

loc_004B5F50: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004B5F53
 * Original: 0x004B5F53 - 0x004B5F69 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B5F53(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B5F53: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x30);
    ecx = MEM32(eax + 0xB4);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 8)); return; /* indirect tail jmp */

}

/**
 * sub_004B5F69
 * Original: 0x004B5F69 - 0x004B6050 (231 bytes, 86 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B5F69(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B5F69: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0xFFFFFFF4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFF4u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ecx);
    PUSH32(esp, ebp);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004B5F74u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B5F71u); } /* indirect call */
    }

loc_004B5F74: ;
    ebp = MEM32(eax + 0x14);
    MEM32(esp + 4) = MEM32(esp + 4) & 0;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004B6048; /* jbe: below or equal (unsigned <=) */

loc_004B5F84: ;
    PUSH32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, edi);

loc_004B5F8E: ;
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, 0x004B5F9Bu); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004B5F9B: ;
    edi = eax;
    ecx = edi;
    PUSH32(esp, 0x004B5FA4u); RECOMP_ABI_CALL(0x004E4F04u, sub_004E4F04); /* call 0x004E4F04 */

loc_004B5FA4: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x34);
    esi = MEM32(eax + 0x10);
    ecx = edi;
    PUSH32(esp, 0x004B5FB9u); RECOMP_ABI_CALL(0x004E4D79u, sub_004E4D79); /* call 0x004E4D79 */

loc_004B5FB9: ;
    ebx = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x004B5FC2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B5FBFu); } /* indirect call */
    }

loc_004B5FC2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B5FE4; /* je: equal / zero */

loc_004B5FC6: ;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x004B5FCDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B5FCAu); } /* indirect call */
    }

loc_004B5FCD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004B5FE4; /* jne: not equal / not zero */

loc_004B5FD1: ;
    ecx = ebx;
    PUSH32(esp, 0x004B5FD8u); RECOMP_ABI_CALL(0x004AD256u, sub_004AD256); /* call 0x004AD256 */

loc_004B5FD8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004B5FE4; /* jne: not equal / not zero */

loc_004B5FDC: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x004B5FE4u); RECOMP_ABI_CALL(0x004AEE08u, sub_004AEE08); /* call 0x004AEE08 */

loc_004B5FE4: ;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x004B5FEBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B5FE8u); } /* indirect call */
    }

loc_004B5FEB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B6023; /* je: equal / zero */

loc_004B5FEF: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x30);
    esi = MEM32(eax + 0xB4);
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x004B6007u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B6004u); } /* indirect call */
    }

loc_004B6007: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B601A; /* je: equal / zero */

loc_004B600B: ;
    _fa = (uint32_t)(MEM8(edi + 0x16)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x16), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004B6037; /* jne: not equal / not zero */

loc_004B6011: ;
    ecx = edi;
    PUSH32(esp, 0x004B6018u); RECOMP_ABI_CALL(0x004E4D47u, sub_004E4D47); /* call 0x004E4D47 */

loc_004B6018: ;
    goto loc_004B6037;

loc_004B601A: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x004B6021u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B601Eu); } /* indirect call */
    }

loc_004B6021: ;
    goto loc_004B6037;

loc_004B6023: ;
    _fa = (uint32_t)(MEM8(edi + 0x16)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x16), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B6037; /* je: equal / zero */

loc_004B6029: ;
    ecx = edi;
    PUSH32(esp, 0x004B6030u); RECOMP_ABI_CALL(0x004E4D50u, sub_004E4D50); /* call 0x004E4D50 */

loc_004B6030: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x004B6037u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B6034u); } /* indirect call */
    }

loc_004B6037: ;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), ebp (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004B5F8E; /* jb: below (unsigned <) */

loc_004B6045: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_004B6048: ;
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    POP32(esp, ecx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B6050
 * Original: 0x004B6050 - 0x004B606C (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B6050(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B6050: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004B6058u); RECOMP_ABI_CALL(0x004B5B90u, sub_004B5B90); /* call 0x004B5B90 */

loc_004B6058: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004B6066; /* je: equal / zero */

loc_004B605F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004B6065u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004B6065: ;
    POP32(esp, ecx);

loc_004B6066: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B606C
 * Original: 0x004B606C - 0x004B6088 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B606C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B606C: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004B6074u); RECOMP_ABI_CALL(0x004B5DC0u, sub_004B5DC0); /* call 0x004B5DC0 */

loc_004B6074: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004B6082; /* je: equal / zero */

loc_004B607B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004B6081u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004B6081: ;
    POP32(esp, ecx);

loc_004B6082: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B6088
 * Original: 0x004B6088 - 0x004B60AF (39 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B6088(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004B6088: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004B6090u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B608Du); } /* indirect call */
    }

loc_004B6090: ;
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x14), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_004B60A9; /* jbe: below or equal (unsigned <=) */

loc_004B6096: ;
    PUSH32(esp, MEM32(esp + 8));
    ecx = esi;
    PUSH32(esp, 0x004B60A1u); RECOMP_ABI_CALL(0x004B5ECCu, sub_004B5ECC); /* call 0x004B5ECC */

loc_004B60A1: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    goto loc_004B60AB;

loc_004B60A9: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_004B60AB: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B60AF
 * Original: 0x004B60AF - 0x004B6125 (118 bytes, 37 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004B60AF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B60AF: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004B60DA; /* je: equal / zero */

loc_004B60C1: ;
    ecx = esi + 0x2F8;
    MEM32(esi + 0xC) = 0x86477C;
    MEM32(esi + 8) = 0x864774;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B60DAu); RECOMP_ABI_CALL(0x004BDBCAu, sub_004BDBCA); /* call 0x004BDBCA */

loc_004B60DA: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 0x10));
    edi = esi + 0xC;
    PUSH32(esp, MEM32(ebp + 8));
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B60ECu); RECOMP_ABI_CALL(0x004BDAFEu, sub_004BDAFE); /* call 0x004BDAFE */

loc_004B60EC: ;
    PUSH32(esp, 0);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B60F5u); RECOMP_ABI_CALL(0x004BDA77u, sub_004BDA77); /* call 0x004BDA77 */

loc_004B60F5: ;
    eax = MEM32(edi);
    MEM32(esi) = 0x86475C;
    eax = MEM32(eax + 4);
    MEM32(eax + esi + 0xC) = 0x86474C;
    eax = MEM32(edi);
    eax = MEM32(eax + 4);
    ecx = eax + -748;
    MEM32(eax + esi + 8) = ecx;
    eax = MEM32(ebp + 0xC);
    MEM32(esi + 0x30) = eax;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_004B6125
 * Original: 0x004B6125 - 0x004B615C (55 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B6125(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B6125: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    MEM32(esi) = 0x86475C;
    eax = MEM32(eax + 4);
    MEM32(eax + esi + 0xC) = 0x86474C;
    eax = MEM32(esi + 0xC);
    eax = MEM32(eax + 4);
    ecx = eax + -748;
    MEM32(eax + esi + 8) = ecx;
    ecx = esi;
    PUSH32(esp, 0x004B6153u); RECOMP_ABI_CALL(0x004BDAB9u, sub_004BDAB9); /* call 0x004BDAB9 */

loc_004B6153: ;
    ecx = esi + 0x34;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004BDB58(); return; /* tail jmp 0x004BDB58 */

}

/**
 * sub_004B615C
 * Original: 0x004B615C - 0x004B6198 (60 bytes, 24 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B615C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B615C: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    eax = MEM32(eax + 4);
    ecx = eax + esi + 0xC;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004B616Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B616Bu); } /* indirect call */
    }

loc_004B616E: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x004B6178u); RECOMP_ABI_CALL(0x005DEAF0u, sub_005DEAF0); /* call 0x005DEAF0 */

loc_004B6178: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004B6192; /* je: equal / zero */

loc_004B617E: ;
    ecx = ZX8(MEM8(esp + 0xC));
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(esi + 0x30));
    PUSH32(esp, eax);
    PUSH32(esp, 0x004B618Du); RECOMP_ABI_CALL(0x005DE830u, sub_005DE830); /* call 0x005DE830 */

loc_004B618D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_004B6194;

loc_004B6192: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004B6194: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004B6198
 * Original: 0x004B6198 - 0x004B61AE (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B6198(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B6198: ;
    _fb = (uint32_t)(MEM32(ecx + -4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(ecx + -4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x2C4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x2C4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_004B61A6;

loc_004B61A6: ;
    _fb = (uint32_t)(0xFFFFFFDCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFDCu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x14)); return; /* indirect tail jmp */

}

/**
 * sub_004B61AE
 * Original: 0x004B61AE - 0x004B61C0 (18 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B61AE(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B61AE: ;
    _fb = (uint32_t)(MEM32(ecx + -4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(ecx + -4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x2C4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x2C4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_004B61BC;

loc_004B61BC: ;
    eax = ecx + -16;
    esp += 4; return; /* ret */

}

/**
 * sub_004B61C0
 * Original: 0x004B61C0 - 0x004B6359 (409 bytes, 140 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B61C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B61C0: ;
    _fb = (uint32_t)(MEM32(ecx + -4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(ecx + -4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x2F8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x2F8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_004B6332;

loc_004B61CE: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x30);
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 0xAC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    ecx = esi + -760;
    PUSH32(esp, 0x004B61F2u); RECOMP_ABI_CALL(0x004B615Cu, sub_004B615C); /* call 0x004B615C */

loc_004B61F2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edi = esi + -708;
    MEM8(edi) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_004B620F; /* je: equal / zero */

loc_004B61FF: ;
    PUSH32(esp, 0x259);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x004B620Cu); RECOMP_ABI_CALL(0x005DE8C0u, sub_005DE8C0); /* call 0x005DE8C0 */

loc_004B620C: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004B620F: ;
    eax = edi;
    POP32(esp, edi);
    MEM8(esi + -108) = 0;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

    esp += 4; return; /* ret */

    esp += 4; return; /* ret */

    ecx = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B62B7; /* je: equal / zero */

loc_004B626C: ;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x830C58);
    PUSH32(esp, MEM32(ecx + 0x14));
    PUSH32(esp, 0x004B627Bu); RECOMP_ABI_CALL(0x005E3F40u, sub_005E3F40); /* call 0x005E3F40 */

loc_004B627B: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004B6283u); RECOMP_ABI_CALL(0x005E4400u, sub_005E4400); /* call 0x005E4400 */

loc_004B6283: ;
    edi = eax;
    PUSH32(esp, 0x004B628Au); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004B628A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x004B6296u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004B6296: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B62A7; /* je: equal / zero */

loc_004B629D: ;
    PUSH32(esp, edi);
    ecx = eax;
    PUSH32(esp, 0x004B62A5u); RECOMP_ABI_CALL(0x004BDC65u, sub_004BDC65); /* call 0x004BDC65 */

loc_004B62A5: ;
    goto loc_004B62A9;

loc_004B62A7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004B62A9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004B62AFu); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004B62AF: ;
    ecx = eax;
    PUSH32(esp, 0x004B62B6u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004B62B6: ;
    POP32(esp, edi);

loc_004B62B7: ;
    esp += 4; return; /* ret */

    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B62D9; /* je: equal / zero */

loc_004B62D5: ;
    eax = MEM32(eax + 4);
    esp += 4; return; /* ret */

loc_004B62D9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B6322; /* je: equal / zero */

loc_004B62FC: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x64);
    ecx = esi + 0x28D;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x864784);
    PUSH32(esp, MEM32(eax + 0x14));
    PUSH32(esp, 0x004B6317u); RECOMP_ABI_CALL(0x005E3F40u, sub_005E3F40); /* call 0x005E3F40 */

loc_004B6317: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004B631Fu); RECOMP_ABI_CALL(0x005E4A10u, sub_005E4A10); /* call 0x005E4A10 */

loc_004B631F: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004B6322: ;
    eax = esi + 0x28D;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_004B6332: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004B633Au); RECOMP_ABI_CALL(0x004B6125u, sub_004B6125); /* call 0x004B6125 */

loc_004B633A: ;
    ecx = esi + 0x2F8;
    PUSH32(esp, 0x004B6345u); RECOMP_ABI_CALL(0x004BDBD3u, sub_004BDBD3); /* call 0x004BDBD3 */

loc_004B6345: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004B6353; /* je: equal / zero */

loc_004B634C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004B6352u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004B6352: ;
    POP32(esp, ecx);

loc_004B6353: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B6219
 * Original: 0x004B6219 - 0x004B6232 (25 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B6219(void)
{

loc_004B6219: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x30);
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(eax + 0xAC));
    PUSH32(esp, 0x004B6231u); RECOMP_ABI_CALL(0x004B615Cu, sub_004B615C); /* call 0x004B615C */

loc_004B6231: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004B6232
 * Original: 0x004B6232 - 0x004B624B (25 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B6232(void)
{

loc_004B6232: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x30);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(eax + 0xAC));
    PUSH32(esp, 0x004B624Au); RECOMP_ABI_CALL(0x004B615Cu, sub_004B615C); /* call 0x004B615C */

loc_004B624A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004B624B
 * Original: 0x004B624B - 0x004B62B8 (109 bytes, 41 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B624B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B624B: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x30);
    eax = MEM32(eax + 0xAC);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004B6264u); RECOMP_ABI_CALL(0x004B615Cu, sub_004B615C); /* call 0x004B615C */

loc_004B6264: ;
    ecx = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B62B7; /* je: equal / zero */

loc_004B626C: ;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x830C58);
    PUSH32(esp, MEM32(ecx + 0x14));
    PUSH32(esp, 0x004B627Bu); RECOMP_ABI_CALL(0x005E3F40u, sub_005E3F40); /* call 0x005E3F40 */

loc_004B627B: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004B6283u); RECOMP_ABI_CALL(0x005E4400u, sub_005E4400); /* call 0x005E4400 */

loc_004B6283: ;
    edi = eax;
    PUSH32(esp, 0x004B628Au); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004B628A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x004B6296u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004B6296: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B62A7; /* je: equal / zero */

loc_004B629D: ;
    PUSH32(esp, edi);
    ecx = eax;
    PUSH32(esp, 0x004B62A5u); RECOMP_ABI_CALL(0x004BDC65u, sub_004BDC65); /* call 0x004BDC65 */

loc_004B62A5: ;
    goto loc_004B62A9;

loc_004B62A7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004B62A9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004B62AFu); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004B62AF: ;
    ecx = eax;
    PUSH32(esp, 0x004B62B6u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004B62B6: ;
    POP32(esp, edi);

loc_004B62B7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004B62B8
 * Original: 0x004B62B8 - 0x004B62DC (36 bytes, 13 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_004B62B8(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B62B8: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x30);
    eax = MEM32(eax + 0xAC);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004B62D1u); RECOMP_ABI_CALL(0x004B615Cu, sub_004B615C); /* call 0x004B615C */

loc_004B62D1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B62D9; /* je: equal / zero */

loc_004B62D5: ;
    eax = MEM32(eax + 4);
    esp += 4; return; /* ret */

loc_004B62D9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_004B62DC
 * Original: 0x004B62DC - 0x004B632A (78 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B62DC(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B62DC: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x30);
    eax = MEM32(eax + 0xAC);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x004B62F8u); RECOMP_ABI_CALL(0x004B615Cu, sub_004B615C); /* call 0x004B615C */

loc_004B62F8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B6322; /* je: equal / zero */

loc_004B62FC: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x64);
    ecx = esi + 0x28D;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x864784);
    PUSH32(esp, MEM32(eax + 0x14));
    PUSH32(esp, 0x004B6317u); RECOMP_ABI_CALL(0x005E3F40u, sub_005E3F40); /* call 0x005E3F40 */

loc_004B6317: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004B631Fu); RECOMP_ABI_CALL(0x005E4A10u, sub_005E4A10); /* call 0x005E4A10 */

loc_004B631F: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004B6322: ;
    eax = esi + 0x28D;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004B632A
 * Original: 0x004B632A - 0x004B6332 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B632A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B632A: ;
    _fb = (uint32_t)(MEM32(ecx + -4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(ecx + -4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004B61CE(); return; /* tail jmp 0x004B61CE */

}

/**
 * sub_004B6332
 * Original: 0x004B6332 - 0x004B6359 (39 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B6332(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B6332: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004B633Au); RECOMP_ABI_CALL(0x004B6125u, sub_004B6125); /* call 0x004B6125 */

loc_004B633A: ;
    ecx = esi + 0x2F8;
    PUSH32(esp, 0x004B6345u); RECOMP_ABI_CALL(0x004BDBD3u, sub_004BDBD3); /* call 0x004BDBD3 */

loc_004B6345: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004B6353; /* je: equal / zero */

loc_004B634C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004B6352u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004B6352: ;
    POP32(esp, ecx);

loc_004B6353: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B6359
 * Original: 0x004B6359 - 0x004B6374 (27 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B6359(void)
{

loc_004B6359: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004B6361u); RECOMP_ABI_CALL(0x004BDD38u, sub_004BDD38); /* call 0x004BDD38 */

loc_004B6361: ;
    eax = MEM32(esp + 8);
    MEM32(esi + 8) = eax;
    MEM32(esi) = 0x86478C;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B6374
 * Original: 0x004B6374 - 0x004B63A9 (53 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B6374(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B6374: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004B637Cu); RECOMP_ABI_CALL(0x004BDD38u, sub_004BDD38); /* call 0x004BDD38 */

loc_004B637C: ;
    ecx = ZX8(MEM8(esp + 0x10));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(eax, MEM8(esp + 8));
    MEM32(esi) = 0x86478C;
    SET_LO8(eax, MEM8(esp + 0xC));
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ZX8(MEM8(esp + 0x14));
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 8) = eax;
    eax = esi;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_004B63A9
 * Original: 0x004B63A9 - 0x004B63B4 (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B63A9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B63A9: ;
    MEM32(ecx) = 0x86478C;
    g_seh_ebp = ebp; sub_004BDD4A(); return; /* tail jmp 0x004BDD4A */

}
