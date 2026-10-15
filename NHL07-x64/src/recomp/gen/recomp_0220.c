/**
 * nhl_07_recomp - Recompiled code chunk 220
 * Functions: 250 (0x004D14D2 - 0x004D3FAE)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_004D14D2
 * Original: 0x004D14D2 - 0x004D1503 (49 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D14D2(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D14D2: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi) = 0x869744;
    MEM8(esi + 4) = 0xFF;
    PUSH32(esp, 0x004D14E8u); RECOMP_ABI_CALL(0x004DC96Bu, sub_004DC96B); /* call 0x004DC96B */

loc_004D14E8: ;
    ecx = MEM32(0x8636D4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x004D14FCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D14FAu); } /* indirect call */
    }

loc_004D14FC: ;
    MEM32(esi + 8) = eax;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004D1503
 * Original: 0x004D1503 - 0x004D153F (60 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D1503(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D1503: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004D150Bu); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004D150B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x2C);
    PUSH32(esp, 0x004D1517u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004D1517: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D1529; /* je: equal / zero */

loc_004D151E: ;
    PUSH32(esp, 1);
    ecx = eax;
    PUSH32(esp, 0x004D1527u); RECOMP_ABI_CALL(0x004C64BCu, sub_004C64BC); /* call 0x004C64BC */

loc_004D1527: ;
    goto loc_004D152B;

loc_004D1529: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004D152B: ;
    PUSH32(esp, esi);
    ecx = eax;
    MEM32(esi + 0xC) = eax;
    PUSH32(esp, 0x004D1536u); RECOMP_ABI_CALL(0x004C1880u, sub_004C1880); /* call 0x004C1880 */

loc_004D1536: ;
    ecx = MEM32(esi + 0xC);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004C65A4(); return; /* tail jmp 0x004C65A4 */

}

/**
 * sub_004D153F
 * Original: 0x004D153F - 0x004D155E (31 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D153F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D153F: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004D154Bu); RECOMP_ABI_CALL(0x004C1895u, sub_004C1895); /* call 0x004C1895 */

loc_004D154B: ;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D1558; /* je: equal / zero */

loc_004D1552: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004D1558u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D1556u); } /* indirect call */
    }

loc_004D1558: ;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004D155E
 * Original: 0x004D155E - 0x004D1578 (26 bytes, 7 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D155E(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D155E: ;
    PUSH32(esp, MEM32(esp + 0xC));
    eax = MEM32(esp + 8);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, MEM32(eax + 0x14));
    PUSH32(esp, 0x004D1572u); RECOMP_ABI_CALL(0x004D0020u, sub_004D0020); /* call 0x004D0020 */

loc_004D1572: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004D1578
 * Original: 0x004D1578 - 0x004D158E (22 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D1578(void)
{

loc_004D1578: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 0x004D1583u); RECOMP_ABI_CALL(0x004C6834u, sub_004C6834); /* call 0x004C6834 */

loc_004D1583: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D158Cu); RECOMP_ABI_CALL(0x004C660Fu, sub_004C660F); /* call 0x004C660F */

loc_004D158C: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004D158E
 * Original: 0x004D158E - 0x004D15A4 (22 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D158E(void)
{

loc_004D158E: ;
    PUSH32(esp, MEM32(esp + 4));
    ecx = MEM32(ecx + 0xC);
    PUSH32(esp, 0x004D159Au); RECOMP_ABI_CALL(0x004C6682u, sub_004C6682); /* call 0x004C6682 */

loc_004D159A: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x004D15A1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D159Eu); } /* indirect call */
    }

loc_004D15A1: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D15A4
 * Original: 0x004D15A4 - 0x004D15DF (59 bytes, 26 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D15A4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D15A4: ;
    ecx = MEM32(ecx + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0x004D15B1u); RECOMP_ABI_CALL(0x004C6682u, sub_004C6682); /* call 0x004C6682 */

loc_004D15B1: ;
    esi = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x004D15BAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D15B7u); } /* indirect call */
    }

loc_004D15BA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D15D8; /* jne: not equal / not zero */

loc_004D15BE: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x004D15C5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D15C2u); } /* indirect call */
    }

loc_004D15C5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D15D8; /* jne: not equal / not zero */

loc_004D15C9: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x004D15D0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D15CDu); } /* indirect call */
    }

loc_004D15D0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D15D8; /* jne: not equal / not zero */

loc_004D15D4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_004D15DB;

loc_004D15D8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_004D15DB: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D15DF
 * Original: 0x004D15DF - 0x004D15F5 (22 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D15DF(void)
{

loc_004D15DF: ;
    PUSH32(esp, MEM32(esp + 4));
    ecx = MEM32(ecx + 0xC);
    PUSH32(esp, 0x004D15EBu); RECOMP_ABI_CALL(0x004C6682u, sub_004C6682); /* call 0x004C6682 */

loc_004D15EB: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x004D15F2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D15EFu); } /* indirect call */
    }

loc_004D15F2: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D15F5
 * Original: 0x004D15F5 - 0x004D160E (25 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D15F5(void)
{

loc_004D15F5: ;
    PUSH32(esp, MEM32(esp + 4));
    ecx = MEM32(ecx + 0xC);
    PUSH32(esp, 0x004D1601u); RECOMP_ABI_CALL(0x004C6682u, sub_004C6682); /* call 0x004C6682 */

loc_004D1601: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x100); PUSH32(esp, 0x004D160Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D1605u); } /* indirect call */
    }

loc_004D160B: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D160E
 * Original: 0x004D160E - 0x004D1627 (25 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D160E(void)
{

loc_004D160E: ;
    PUSH32(esp, MEM32(esp + 4));
    ecx = MEM32(ecx + 0xC);
    PUSH32(esp, 0x004D161Au); RECOMP_ABI_CALL(0x004C6682u, sub_004C6682); /* call 0x004C6682 */

loc_004D161A: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x114); PUSH32(esp, 0x004D1624u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D161Eu); } /* indirect call */
    }

loc_004D1624: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D1627
 * Original: 0x004D1627 - 0x004D1640 (25 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D1627(void)
{

loc_004D1627: ;
    PUSH32(esp, MEM32(esp + 4));
    ecx = MEM32(ecx + 0xC);
    PUSH32(esp, 0x004D1633u); RECOMP_ABI_CALL(0x004C6682u, sub_004C6682); /* call 0x004C6682 */

loc_004D1633: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xF4); PUSH32(esp, 0x004D163Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D1637u); } /* indirect call */
    }

loc_004D163D: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D1640
 * Original: 0x004D1640 - 0x004D1659 (25 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D1640(void)
{

loc_004D1640: ;
    PUSH32(esp, MEM32(esp + 4));
    ecx = MEM32(ecx + 0xC);
    PUSH32(esp, 0x004D164Cu); RECOMP_ABI_CALL(0x004C6682u, sub_004C6682); /* call 0x004C6682 */

loc_004D164C: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x004D1656u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D1650u); } /* indirect call */
    }

loc_004D1656: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D1659
 * Original: 0x004D1659 - 0x004D1672 (25 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D1659(void)
{

loc_004D1659: ;
    PUSH32(esp, MEM32(esp + 4));
    ecx = MEM32(ecx + 0xC);
    PUSH32(esp, 0x004D1665u); RECOMP_ABI_CALL(0x004C6682u, sub_004C6682); /* call 0x004C6682 */

loc_004D1665: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xF8); PUSH32(esp, 0x004D166Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D1669u); } /* indirect call */
    }

loc_004D166F: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D1672
 * Original: 0x004D1672 - 0x004D168B (25 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D1672(void)
{

loc_004D1672: ;
    PUSH32(esp, MEM32(esp + 4));
    ecx = MEM32(ecx + 0xC);
    PUSH32(esp, 0x004D167Eu); RECOMP_ABI_CALL(0x004C6682u, sub_004C6682); /* call 0x004C6682 */

loc_004D167E: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10C); PUSH32(esp, 0x004D1688u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D1682u); } /* indirect call */
    }

loc_004D1688: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D168B
 * Original: 0x004D168B - 0x004D16A4 (25 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D168B(void)
{

loc_004D168B: ;
    PUSH32(esp, MEM32(esp + 4));
    ecx = MEM32(ecx + 0xC);
    PUSH32(esp, 0x004D1697u); RECOMP_ABI_CALL(0x004C6682u, sub_004C6682); /* call 0x004C6682 */

loc_004D1697: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xFC); PUSH32(esp, 0x004D16A1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D169Bu); } /* indirect call */
    }

loc_004D16A1: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D16A4
 * Original: 0x004D16A4 - 0x004D16BD (25 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D16A4(void)
{

loc_004D16A4: ;
    PUSH32(esp, MEM32(esp + 4));
    ecx = MEM32(ecx + 0xC);
    PUSH32(esp, 0x004D16B0u); RECOMP_ABI_CALL(0x004C6682u, sub_004C6682); /* call 0x004C6682 */

loc_004D16B0: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xE8); PUSH32(esp, 0x004D16BAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D16B4u); } /* indirect call */
    }

loc_004D16BA: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D16BD
 * Original: 0x004D16BD - 0x004D16D6 (25 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D16BD(void)
{

loc_004D16BD: ;
    PUSH32(esp, MEM32(esp + 4));
    ecx = MEM32(ecx + 0xC);
    PUSH32(esp, 0x004D16C9u); RECOMP_ABI_CALL(0x004C6682u, sub_004C6682); /* call 0x004C6682 */

loc_004D16C9: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xDC); PUSH32(esp, 0x004D16D3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D16CDu); } /* indirect call */
    }

loc_004D16D3: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D16DE
 * Original: 0x004D16DE - 0x004D171A (60 bytes, 22 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D16DE(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D16DE: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0xC));
    esi = ecx;
    eax = MEM32(esi + 8);
    MEM8(eax) = 0;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 0x004D16F3u); RECOMP_ABI_CALL(0x004C6682u, sub_004C6682); /* call 0x004C6682 */

loc_004D16F3: ;
    ecx = MEM32(0x8636D4);
    edx = MEM32(eax);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(esi + 8));
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x004D1705u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D1702u); } /* indirect call */
    }

loc_004D1705: ;
    PUSH32(esp, MEM32(esi + 8));
    PUSH32(esp, 0x004D170Du); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004D170D: ;
    POP32(esp, ecx);
    ecx = MEM32(esp + 8);
    MEM32(ecx) = eax;
    eax = ecx;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004D171A
 * Original: 0x004D171A - 0x004D1730 (22 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D171A(void)
{

loc_004D171A: ;
    PUSH32(esp, MEM32(esp + 4));
    ecx = MEM32(ecx + 0xC);
    PUSH32(esp, 0x004D1726u); RECOMP_ABI_CALL(0x004C6682u, sub_004C6682); /* call 0x004C6682 */

loc_004D1726: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004D172Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D172Au); } /* indirect call */
    }

loc_004D172D: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D1730
 * Original: 0x004D1730 - 0x004D17AD (125 bytes, 49 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004D1730(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D1730: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8E19F0);
    ecx = MEM32(ecx + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0xC));
    MEM32(ebp + -4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D174Au); RECOMP_ABI_CALL(0x004C6682u, sub_004C6682); /* call 0x004C6682 */

loc_004D174A: ;
    PUSH32(esp, 0x7B891F);
    esi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D1756u); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004D1756: ;
    eax = MEM32(esi);
    POP32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x004D175Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D175Bu); } /* indirect call */
    }

loc_004D175E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D1776; /* jne: not equal / not zero */

loc_004D1762: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x004D1769u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D1766u); } /* indirect call */
    }

loc_004D1769: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D1776; /* jne: not equal / not zero */

loc_004D176D: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x004D1774u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D1771u); } /* indirect call */
    }

loc_004D1774: ;
    goto loc_004D1792;

loc_004D1776: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D177Bu); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004D177B: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x004D1782u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D177Fu); } /* indirect call */
    }

loc_004D1782: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x20);
    ecx = ebp + -36;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x004D178Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D178Cu); } /* indirect call */
    }

loc_004D178F: ;
    eax = ebp + -36;

loc_004D1792: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D1798u); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004D1798: ;
    POP32(esp, ecx);
    ecx = MEM32(ebp + 8);
    MEM32(ecx) = eax;
    eax = ecx;
    ecx = MEM32(ebp + -4);
    POP32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D17A9u); RECOMP_ABI_CALL(0x005CFF80u, sub_005CFF80); /* call 0x005CFF80 */

loc_004D17A9: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004D17AD
 * Original: 0x004D17AD - 0x004D17C1 (20 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D17AD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D17AD: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 0x004D17B8u); RECOMP_ABI_CALL(0x004CD78Fu, sub_004CD78F); /* call 0x004CD78F */

loc_004D17B8: ;
    ecx = MEM32(esi + 0xC);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004C662C(); return; /* tail jmp 0x004C662C */

}

/**
 * sub_004D17C1
 * Original: 0x004D17C1 - 0x004D17D5 (20 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D17C1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D17C1: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 0x004D17CCu); RECOMP_ABI_CALL(0x004CD762u, sub_004CD762); /* call 0x004CD762 */

loc_004D17CC: ;
    ecx = MEM32(esi + 0xC);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004C662C(); return; /* tail jmp 0x004C662C */

}

/**
 * sub_004D17DD
 * Original: 0x004D17DD - 0x004D17F6 (25 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D17DD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D17DD: ;
    ecx = MEM32(ecx + 0xC);
    PUSH32(esp, 0x004D17E5u); RECOMP_ABI_CALL(0x004C665Du, sub_004C665D); /* call 0x004C665D */

loc_004D17E5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D17F0; /* je: equal / zero */

loc_004D17E9: ;
    edx = MEM32(eax);
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 4)); return; /* indirect tail jmp */

loc_004D17F0: ;
    eax = 0x7B891F;
    esp += 4; return; /* ret */

}

/**
 * sub_004D17F6
 * Original: 0x004D17F6 - 0x004D182A (52 bytes, 17 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D17F6(void)
{

loc_004D17F6: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0xC));
    esi = ecx;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 0x004D1805u); RECOMP_ABI_CALL(0x004C668Fu, sub_004C668F); /* call 0x004C668F */

loc_004D1805: ;
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 0x004D1811u); RECOMP_ABI_CALL(0x004C6682u, sub_004C6682); /* call 0x004C6682 */

loc_004D1811: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004D1818u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D1815u); } /* indirect call */
    }

loc_004D1818: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D1822u); RECOMP_ABI_CALL(0x004D0118u, sub_004D0118); /* call 0x004D0118 */

loc_004D1822: ;
    eax = MEM32(esp + 8);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004D1852
 * Original: 0x004D1852 - 0x004D186B (25 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D1852(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D1852: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D1866; /* je: equal / zero */

loc_004D185B: ;
    ecx = MEM32(0x90E4A8);
    PUSH32(esp, 0x004D1866u); RECOMP_ABI_CALL(0x004D1503u, sub_004D1503); /* call 0x004D1503 */

loc_004D1866: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D186B
 * Original: 0x004D186B - 0x004D1884 (25 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D186B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D186B: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D187F; /* je: equal / zero */

loc_004D1874: ;
    ecx = MEM32(0x90E4A8);
    PUSH32(esp, 0x004D187Fu); RECOMP_ABI_CALL(0x004D153Fu, sub_004D153F); /* call 0x004D153F */

loc_004D187F: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D1884
 * Original: 0x004D1884 - 0x004D189D (25 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D1884(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D1884: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D1898; /* je: equal / zero */

loc_004D188D: ;
    ecx = MEM32(0x90E4A8);
    PUSH32(esp, 0x004D1898u); RECOMP_ABI_CALL(0x004D1578u, sub_004D1578); /* call 0x004D1578 */

loc_004D1898: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D189D
 * Original: 0x004D189D - 0x004D18C7 (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D189D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D189D: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D18AB; /* jne: not equal / not zero */

loc_004D18A6: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D18AB: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D18B2u); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D18B2: ;
    POP32(esp, ecx);
    ecx = MEM32(0x90E4A8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D18BFu); RECOMP_ABI_CALL(0x004D158Eu, sub_004D158E); /* call 0x004D158E */

loc_004D18BF: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D18C5u); RECOMP_ABI_CALL(0x004D080Du, sub_004D080D); /* call 0x004D080D */

loc_004D18C5: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D18C7
 * Original: 0x004D18C7 - 0x004D18F1 (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D18C7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D18C7: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D18D5; /* jne: not equal / not zero */

loc_004D18D0: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D18D5: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D18DCu); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D18DC: ;
    POP32(esp, ecx);
    ecx = MEM32(0x90E4A8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D18E9u); RECOMP_ABI_CALL(0x004D15A4u, sub_004D15A4); /* call 0x004D15A4 */

loc_004D18E9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D18EFu); RECOMP_ABI_CALL(0x004D080Du, sub_004D080D); /* call 0x004D080D */

loc_004D18EF: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D18F1
 * Original: 0x004D18F1 - 0x004D191B (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D18F1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D18F1: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D18FF; /* jne: not equal / not zero */

loc_004D18FA: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D18FF: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D1906u); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D1906: ;
    POP32(esp, ecx);
    ecx = MEM32(0x90E4A8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D1913u); RECOMP_ABI_CALL(0x004D15DFu, sub_004D15DF); /* call 0x004D15DF */

loc_004D1913: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D1919u); RECOMP_ABI_CALL(0x004D080Du, sub_004D080D); /* call 0x004D080D */

loc_004D1919: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D191B
 * Original: 0x004D191B - 0x004D1945 (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D191B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D191B: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D1929; /* jne: not equal / not zero */

loc_004D1924: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D1929: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D1930u); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D1930: ;
    POP32(esp, ecx);
    ecx = MEM32(0x90E4A8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D193Du); RECOMP_ABI_CALL(0x004D15F5u, sub_004D15F5); /* call 0x004D15F5 */

loc_004D193D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D1943u); RECOMP_ABI_CALL(0x004D080Du, sub_004D080D); /* call 0x004D080D */

loc_004D1943: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D1945
 * Original: 0x004D1945 - 0x004D196F (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D1945(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D1945: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D1953; /* jne: not equal / not zero */

loc_004D194E: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D1953: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D195Au); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D195A: ;
    POP32(esp, ecx);
    ecx = MEM32(0x90E4A8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D1967u); RECOMP_ABI_CALL(0x004D160Eu, sub_004D160E); /* call 0x004D160E */

loc_004D1967: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D196Du); RECOMP_ABI_CALL(0x004D080Du, sub_004D080D); /* call 0x004D080D */

loc_004D196D: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D196F
 * Original: 0x004D196F - 0x004D1999 (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D196F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D196F: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D197D; /* jne: not equal / not zero */

loc_004D1978: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D197D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D1984u); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D1984: ;
    POP32(esp, ecx);
    ecx = MEM32(0x90E4A8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D1991u); RECOMP_ABI_CALL(0x004D1627u, sub_004D1627); /* call 0x004D1627 */

loc_004D1991: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D1997u); RECOMP_ABI_CALL(0x004D080Du, sub_004D080D); /* call 0x004D080D */

loc_004D1997: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D1999
 * Original: 0x004D1999 - 0x004D19C3 (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D1999(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D1999: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D19A7; /* jne: not equal / not zero */

loc_004D19A2: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D19A7: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D19AEu); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D19AE: ;
    POP32(esp, ecx);
    ecx = MEM32(0x90E4A8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D19BBu); RECOMP_ABI_CALL(0x004D1640u, sub_004D1640); /* call 0x004D1640 */

loc_004D19BB: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D19C1u); RECOMP_ABI_CALL(0x004D080Du, sub_004D080D); /* call 0x004D080D */

loc_004D19C1: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D19C3
 * Original: 0x004D19C3 - 0x004D19ED (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D19C3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D19C3: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D19D1; /* jne: not equal / not zero */

loc_004D19CC: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D19D1: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D19D8u); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D19D8: ;
    POP32(esp, ecx);
    ecx = MEM32(0x90E4A8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D19E5u); RECOMP_ABI_CALL(0x004D1659u, sub_004D1659); /* call 0x004D1659 */

loc_004D19E5: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D19EBu); RECOMP_ABI_CALL(0x004D080Du, sub_004D080D); /* call 0x004D080D */

loc_004D19EB: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D19ED
 * Original: 0x004D19ED - 0x004D1A17 (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D19ED(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D19ED: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D19FB; /* jne: not equal / not zero */

loc_004D19F6: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D19FB: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D1A02u); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D1A02: ;
    POP32(esp, ecx);
    ecx = MEM32(0x90E4A8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D1A0Fu); RECOMP_ABI_CALL(0x004D1672u, sub_004D1672); /* call 0x004D1672 */

loc_004D1A0F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D1A15u); RECOMP_ABI_CALL(0x004D080Du, sub_004D080D); /* call 0x004D080D */

loc_004D1A15: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D1A17
 * Original: 0x004D1A17 - 0x004D1A41 (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D1A17(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D1A17: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D1A25; /* jne: not equal / not zero */

loc_004D1A20: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D1A25: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D1A2Cu); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D1A2C: ;
    POP32(esp, ecx);
    ecx = MEM32(0x90E4A8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D1A39u); RECOMP_ABI_CALL(0x004D168Bu, sub_004D168B); /* call 0x004D168B */

loc_004D1A39: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D1A3Fu); RECOMP_ABI_CALL(0x004D080Du, sub_004D080D); /* call 0x004D080D */

loc_004D1A3F: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D1A41
 * Original: 0x004D1A41 - 0x004D1A6B (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D1A41(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D1A41: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D1A4F; /* jne: not equal / not zero */

loc_004D1A4A: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D1A4F: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D1A56u); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D1A56: ;
    POP32(esp, ecx);
    ecx = MEM32(0x90E4A8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D1A63u); RECOMP_ABI_CALL(0x004D16A4u, sub_004D16A4); /* call 0x004D16A4 */

loc_004D1A63: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D1A69u); RECOMP_ABI_CALL(0x004D080Du, sub_004D080D); /* call 0x004D080D */

loc_004D1A69: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D1A6B
 * Original: 0x004D1A6B - 0x004D1A95 (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D1A6B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D1A6B: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D1A79; /* jne: not equal / not zero */

loc_004D1A74: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D1A79: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D1A80u); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D1A80: ;
    POP32(esp, ecx);
    ecx = MEM32(0x90E4A8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D1A8Du); RECOMP_ABI_CALL(0x004D16BDu, sub_004D16BD); /* call 0x004D16BD */

loc_004D1A8D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D1A93u); RECOMP_ABI_CALL(0x004D0803u, sub_004D0803); /* call 0x004D0803 */

loc_004D1A93: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D1A95
 * Original: 0x004D1A95 - 0x004D1AB8 (35 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D1A95(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D1A95: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D1AA3; /* jne: not equal / not zero */

loc_004D1A9E: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D1AA3: ;
    eax = MEM32(0x90E4A8);
    ecx = MEM32(eax + 0xC);
    PUSH32(esp, 0x004D1AB0u); RECOMP_ABI_CALL(0x004C6623u, sub_004C6623); /* call 0x004C6623 */

loc_004D1AB0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D1AB6u); RECOMP_ABI_CALL(0x004D0803u, sub_004D0803); /* call 0x004D0803 */

loc_004D1AB6: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D1AB8
 * Original: 0x004D1AB8 - 0x004D1AE6 (46 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D1AB8(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D1AB8: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D1AC9; /* jne: not equal / not zero */

loc_004D1AC2: ;
    PUSH32(esp, 0x004D1AC7u); RECOMP_ABI_CALL(0x004D07EBu, sub_004D07EB); /* call 0x004D07EB */

loc_004D1AC7: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_004D1AC9: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D1AD0u); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D1AD0: ;
    POP32(esp, ecx);
    ecx = MEM32(0x90E4A8);
    PUSH32(esp, eax);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D1AE2u); RECOMP_ABI_CALL(0x004D16DEu, sub_004D16DE); /* call 0x004D16DE */

loc_004D1AE2: ;
    eax = MEM32(eax);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D1AE6
 * Original: 0x004D1AE6 - 0x004D1B10 (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D1AE6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D1AE6: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D1AF4; /* jne: not equal / not zero */

loc_004D1AEF: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D1AF4: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D1AFBu); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D1AFB: ;
    POP32(esp, ecx);
    ecx = MEM32(0x90E4A8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D1B08u); RECOMP_ABI_CALL(0x004D171Au, sub_004D171A); /* call 0x004D171A */

loc_004D1B08: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D1B0Eu); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004D1B0E: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D1B10
 * Original: 0x004D1B10 - 0x004D1B3E (46 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D1B10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D1B10: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D1B21; /* jne: not equal / not zero */

loc_004D1B1A: ;
    PUSH32(esp, 0x004D1B1Fu); RECOMP_ABI_CALL(0x004D07EBu, sub_004D07EB); /* call 0x004D07EB */

loc_004D1B1F: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_004D1B21: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D1B28u); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D1B28: ;
    POP32(esp, ecx);
    ecx = MEM32(0x90E4A8);
    PUSH32(esp, eax);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D1B3Au); RECOMP_ABI_CALL(0x004D1730u, sub_004D1730); /* call 0x004D1730 */

loc_004D1B3A: ;
    eax = MEM32(eax);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D1B3E
 * Original: 0x004D1B3E - 0x004D1B5F (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D1B3E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D1B3E: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D1B4C; /* jne: not equal / not zero */

loc_004D1B47: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D1B4C: ;
    ecx = MEM32(0x90E4A8);
    PUSH32(esp, 0x004D1B57u); RECOMP_ABI_CALL(0x004D17ADu, sub_004D17AD); /* call 0x004D17AD */

loc_004D1B57: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D1B5Du); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004D1B5D: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D1B5F
 * Original: 0x004D1B5F - 0x004D1B80 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D1B5F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D1B5F: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D1B6D; /* jne: not equal / not zero */

loc_004D1B68: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D1B6D: ;
    ecx = MEM32(0x90E4A8);
    PUSH32(esp, 0x004D1B78u); RECOMP_ABI_CALL(0x004D17C1u, sub_004D17C1); /* call 0x004D17C1 */

loc_004D1B78: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D1B7Eu); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004D1B7E: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D1B80
 * Original: 0x004D1B80 - 0x004D1BA3 (35 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D1B80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D1B80: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D1B8E; /* jne: not equal / not zero */

loc_004D1B89: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D1B8E: ;
    eax = MEM32(0x90E4A8);
    ecx = MEM32(eax + 0xC);
    PUSH32(esp, 0x004D1B9Bu); RECOMP_ABI_CALL(0x004C662Cu, sub_004C662C); /* call 0x004C662C */

loc_004D1B9B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D1BA1u); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004D1BA1: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D1BA3
 * Original: 0x004D1BA3 - 0x004D1BC4 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D1BA3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D1BA3: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D1BB1; /* jne: not equal / not zero */

loc_004D1BAC: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D1BB1: ;
    ecx = MEM32(0x90E4A8);
    PUSH32(esp, 0x004D1BBCu); RECOMP_ABI_CALL(0x004D17DDu, sub_004D17DD); /* call 0x004D17DD */

loc_004D1BBC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D1BC2u); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004D1BC2: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D1BC4
 * Original: 0x004D1BC4 - 0x004D1BF2 (46 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D1BC4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D1BC4: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D1BD5; /* jne: not equal / not zero */

loc_004D1BCE: ;
    PUSH32(esp, 0x004D1BD3u); RECOMP_ABI_CALL(0x004D07EBu, sub_004D07EB); /* call 0x004D07EB */

loc_004D1BD3: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_004D1BD5: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D1BDCu); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D1BDC: ;
    POP32(esp, ecx);
    ecx = MEM32(0x90E4A8);
    PUSH32(esp, eax);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D1BEEu); RECOMP_ABI_CALL(0x004D17F6u, sub_004D17F6); /* call 0x004D17F6 */

loc_004D1BEE: ;
    eax = MEM32(eax);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D1BF2
 * Original: 0x004D1BF2 - 0x004D1C16 (36 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D1BF2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D1BF2: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D1C11; /* je: equal / zero */

loc_004D1BFB: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D1C02u); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D1C02: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    eax = MEM32(0x90E4A8);
    ecx = MEM32(eax + 0xC);
    PUSH32(esp, 0x004D1C11u); RECOMP_ABI_CALL(0x004C679Fu, sub_004C679F); /* call 0x004C679F */

loc_004D1C11: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D1C16
 * Original: 0x004D1C16 - 0x004D1C3A (36 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D1C16(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D1C16: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D1C35; /* je: equal / zero */

loc_004D1C1F: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D1C26u); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D1C26: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    eax = MEM32(0x90E4A8);
    ecx = MEM32(eax + 0xC);
    PUSH32(esp, 0x004D1C35u); RECOMP_ABI_CALL(0x004C67EFu, sub_004C67EF); /* call 0x004C67EF */

loc_004D1C35: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D1C3A
 * Original: 0x004D1C3A - 0x004D1C55 (27 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D1C3A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D1C3A: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D1C50; /* je: equal / zero */

loc_004D1C43: ;
    eax = MEM32(0x90E4A8);
    ecx = MEM32(eax + 0xC);
    PUSH32(esp, 0x004D1C50u); RECOMP_ABI_CALL(0x004C1341u, sub_004C1341); /* call 0x004C1341 */

loc_004D1C50: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D1C55
 * Original: 0x004D1C55 - 0x004D1C78 (35 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D1C55(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D1C55: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D1C63; /* jne: not equal / not zero */

loc_004D1C5E: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D1C63: ;
    eax = MEM32(0x90E4A8);
    ecx = MEM32(eax + 0xC);
    PUSH32(esp, 0x004D1C70u); RECOMP_ABI_CALL(0x004C1354u, sub_004C1354); /* call 0x004C1354 */

loc_004D1C70: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D1C76u); RECOMP_ABI_CALL(0x004D080Du, sub_004D080D); /* call 0x004D080D */

loc_004D1C76: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D1C78
 * Original: 0x004D1C78 - 0x004D1C9C (36 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D1C78(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D1C78: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D1C97; /* je: equal / zero */

loc_004D1C81: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D1C88u); RECOMP_ABI_CALL(0x004D08ACu, sub_004D08AC); /* call 0x004D08AC */

loc_004D1C88: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    eax = MEM32(0x90E4A8);
    ecx = MEM32(eax + 0xC);
    PUSH32(esp, 0x004D1C97u); RECOMP_ABI_CALL(0x004C66AEu, sub_004C66AE); /* call 0x004C66AE */

loc_004D1C97: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D1C9C
 * Original: 0x004D1C9C - 0x004D1CC7 (43 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D1C9C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D1C9C: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), 0 (32-bit) */
    MEM32(esi) = 0x869744;
    if (CMP_EQ(_fa, _fb)) goto loc_004D1CB0; /* je: equal / zero */

loc_004D1CAB: ;
    PUSH32(esp, 0x004D1CB0u); RECOMP_ABI_CALL(0x004D153Fu, sub_004D153F); /* call 0x004D153F */

loc_004D1CB0: ;
    PUSH32(esp, 0x004D1CB5u); RECOMP_ABI_CALL(0x004DC96Bu, sub_004DC96B); /* call 0x004DC96B */

loc_004D1CB5: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi + 8));
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004D1CBFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D1CBCu); } /* indirect call */
    }

loc_004D1CBF: ;
    MEM32(esi) = 0x8694A4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004D1CC7
 * Original: 0x004D1CC7 - 0x004D1D2D (102 bytes, 46 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004D1CC7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D1CC7: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D1CDBu); RECOMP_ABI_CALL(0x004C6623u, sub_004C6623); /* call 0x004C6623 */

loc_004D1CDB: ;
    edi = MEM32(ebp + 0xC);
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + 0x10);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    ecx = ebp + -4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D1CF0u); RECOMP_ABI_CALL(0x004DB7FCu, sub_004DB7FC); /* call 0x004DB7FC */

loc_004D1CF0: ;
    goto loc_004D1D19;

loc_004D1CF2: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebp + -8) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_004D1D1E; /* jge: greater or equal (signed >=) */

loc_004D1CF7: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D1D00u); RECOMP_ABI_CALL(0x004C6682u, sub_004C6682); /* call 0x004C6682 */

loc_004D1D00: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004D1D07u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D1D04u); } /* indirect call */
    }

loc_004D1D07: ;
    MEM32(ebp + 0xC) = eax;
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = ebp + -4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D1D17u); RECOMP_ABI_CALL(0x004DB81Eu, sub_004DB81E); /* call 0x004DB81E */

loc_004D1D17: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_004D1D19: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebp + 0x10) (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_004D1CF2; /* jle: less or equal (signed <=) */

loc_004D1D1E: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax) = ecx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004D1D2D
 * Original: 0x004D1D2D - 0x004D1D64 (55 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D1D2D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D1D2D: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D1D3E; /* jne: not equal / not zero */

loc_004D1D37: ;
    PUSH32(esp, 0x004D1D3Cu); RECOMP_ABI_CALL(0x004D07EBu, sub_004D07EB); /* call 0x004D07EB */

loc_004D1D3C: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_004D1D3E: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x004D1D45u); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D1D45: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D1D4Eu); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D1D4E: ;
    POP32(esp, ecx);
    ecx = MEM32(0x90E4A8);
    PUSH32(esp, eax);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D1D60u); RECOMP_ABI_CALL(0x004D1CC7u, sub_004D1CC7); /* call 0x004D1CC7 */

loc_004D1D60: ;
    eax = MEM32(eax);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D1D64
 * Original: 0x004D1D64 - 0x004D1D80 (28 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D1D64(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D1D64: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004D1D6Cu); RECOMP_ABI_CALL(0x004D1C9Cu, sub_004D1C9C); /* call 0x004D1C9C */

loc_004D1D6C: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004D1D7A; /* je: equal / zero */

loc_004D1D73: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004D1D79u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_004D1D79: ;
    POP32(esp, ecx);

loc_004D1D7A: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D1D80
 * Original: 0x004D1D80 - 0x004D1D93 (19 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D1D80(void)
{

loc_004D1D80: ;
    eax = ecx + 0xC;
    PUSH32(esp, 0x869980);
    MEM32(0x90E4A8) = eax;
    PUSH32(esp, 0x004D1D92u); RECOMP_ABI_CALL(0x004D0838u, sub_004D0838); /* call 0x004D0838 */

loc_004D1D92: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004D1D93
 * Original: 0x004D1D93 - 0x004D1DA0 (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D1D93(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D1D93: ;
    eax = ecx;
    MEM32(eax + 4) = MEM32(eax + 4) & 0;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax) = 0x869A78;
    esp += 4; return; /* ret */

}

/**
 * sub_004D1DA0
 * Original: 0x004D1DA0 - 0x004D1DD5 (53 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D1DA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D1DA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004D1DA8u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004D1DA8: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x004D1DB4u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004D1DB4: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D1DC6; /* je: equal / zero */

loc_004D1DBB: ;
    PUSH32(esp, 1);
    ecx = eax;
    PUSH32(esp, 0x004D1DC4u); RECOMP_ABI_CALL(0x004CA6A5u, sub_004CA6A5); /* call 0x004CA6A5 */

loc_004D1DC4: ;
    goto loc_004D1DC8;

loc_004D1DC6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004D1DC8: ;
    PUSH32(esp, esi);
    ecx = eax;
    MEM32(esi + 4) = eax;
    PUSH32(esp, 0x004D1DD3u); RECOMP_ABI_CALL(0x004C1880u, sub_004C1880); /* call 0x004C1880 */

loc_004D1DD3: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004D1DE5
 * Original: 0x004D1DE5 - 0x004D1E04 (31 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D1DE5(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D1DE5: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004D1DF1u); RECOMP_ABI_CALL(0x004C1895u, sub_004C1895); /* call 0x004C1895 */

loc_004D1DF1: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D1DFE; /* je: equal / zero */

loc_004D1DF8: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004D1DFEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D1DFCu); } /* indirect call */
    }

loc_004D1DFE: ;
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004D1E04
 * Original: 0x004D1E04 - 0x004D1E1E (26 bytes, 7 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D1E04(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D1E04: ;
    PUSH32(esp, MEM32(esp + 0xC));
    eax = MEM32(esp + 8);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, MEM32(eax + 0x14));
    PUSH32(esp, 0x004D1E18u); RECOMP_ABI_CALL(0x004D0020u, sub_004D0020); /* call 0x004D0020 */

loc_004D1E18: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004D1E1E
 * Original: 0x004D1E1E - 0x004D1E37 (25 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D1E1E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D1E1E: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D1E32; /* je: equal / zero */

loc_004D1E27: ;
    ecx = MEM32(0x90E4AC);
    PUSH32(esp, 0x004D1E32u); RECOMP_ABI_CALL(0x004D1DA0u, sub_004D1DA0); /* call 0x004D1DA0 */

loc_004D1E32: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D1E37
 * Original: 0x004D1E37 - 0x004D1E5B (36 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D1E37(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D1E37: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D1E56; /* je: equal / zero */

loc_004D1E40: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D1E47u); RECOMP_ABI_CALL(0x004D08ACu, sub_004D08AC); /* call 0x004D08AC */

loc_004D1E47: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    eax = MEM32(0x90E4AC);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x004D1E56u); RECOMP_ABI_CALL(0x004CA5C0u, sub_004CA5C0); /* call 0x004CA5C0 */

loc_004D1E56: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D1E5B
 * Original: 0x004D1E5B - 0x004D1E76 (27 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D1E5B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D1E5B: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D1E71; /* je: equal / zero */

loc_004D1E64: ;
    eax = MEM32(0x90E4AC);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x004D1E71u); RECOMP_ABI_CALL(0x004CA60Au, sub_004CA60A); /* call 0x004CA60A */

loc_004D1E71: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D1E76
 * Original: 0x004D1E76 - 0x004D1E8F (25 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D1E76(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D1E76: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D1E8A; /* je: equal / zero */

loc_004D1E7F: ;
    ecx = MEM32(0x90E4AC);
    PUSH32(esp, 0x004D1E8Au); RECOMP_ABI_CALL(0x004D1DE5u, sub_004D1DE5); /* call 0x004D1DE5 */

loc_004D1E8A: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D1E8F
 * Original: 0x004D1E8F - 0x004D1EAB (28 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D1E8F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D1E8F: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 0 (32-bit) */
    MEM32(esi) = 0x869A78;
    if (CMP_EQ(_fa, _fb)) goto loc_004D1EA3; /* je: equal / zero */

loc_004D1E9E: ;
    PUSH32(esp, 0x004D1EA3u); RECOMP_ABI_CALL(0x004D1DE5u, sub_004D1DE5); /* call 0x004D1DE5 */

loc_004D1EA3: ;
    MEM32(esi) = 0x8694A4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004D1EAB
 * Original: 0x004D1EAB - 0x004D1EBE (19 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D1EAB(void)
{

loc_004D1EAB: ;
    eax = ecx + 0xC;
    PUSH32(esp, 0x869ACC);
    MEM32(0x90E4AC) = eax;
    PUSH32(esp, 0x004D1EBDu); RECOMP_ABI_CALL(0x004D0838u, sub_004D0838); /* call 0x004D0838 */

loc_004D1EBD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004D1EBE
 * Original: 0x004D1EBE - 0x004D1EDA (28 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D1EBE(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D1EBE: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004D1EC6u); RECOMP_ABI_CALL(0x004D1E8Fu, sub_004D1E8F); /* call 0x004D1E8F */

loc_004D1EC6: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004D1ED4; /* je: equal / zero */

loc_004D1ECD: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004D1ED3u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_004D1ED3: ;
    POP32(esp, ecx);

loc_004D1ED4: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D1EDA
 * Original: 0x004D1EDA - 0x004D1F0C (50 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D1EDA(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D1EDA: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004D1EE2u); RECOMP_ABI_CALL(0x004C9818u, sub_004C9818); /* call 0x004C9818 */

loc_004D1EE2: ;
    MEM32(esi + 0x34) = MEM32(esi + 0x34) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x34)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi) = 0x869B48;
    MEM32(esi + 0x18) = 0x869B28;
    MEM32(esi + 0x1C) = 0x869B0C;
    MEM32(esi + 0x20) = 0x869B00;
    MEM32(esi + 0x24) = 0x869AF4;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004D1F0C
 * Original: 0x004D1F0C - 0x004D1F2D (33 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D1F0C(void)
{

loc_004D1F0C: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004D1F14u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004D1F14: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x004D1F1Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D1F18u); } /* indirect call */
    }

loc_004D1F1B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 8));
    edx = MEM32(eax);
    PUSH32(esp, MEM32(esi + 0x34));
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x004D1F29u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D1F26u); } /* indirect call */
    }

loc_004D1F29: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D1F2D
 * Original: 0x004D1F2D - 0x004D1F4F (34 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D1F2D(void)
{

loc_004D1F2D: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    MEM32(ecx + 0x34) = esi;
    PUSH32(esp, 0x004D1F3Au); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004D1F3A: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x004D1F41u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D1F3Eu); } /* indirect call */
    }

loc_004D1F41: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x004D1F4Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D1F48u); } /* indirect call */
    }

loc_004D1F4B: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D1F4F
 * Original: 0x004D1F4F - 0x004D1F64 (21 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D1F4F(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D1F4F: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x869B50);
    _fb = (uint32_t)(0xFFFFFFE8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFE8u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x004D1F61u); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004D1F61: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D1F64
 * Original: 0x004D1F64 - 0x004D1F79 (21 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D1F64(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D1F64: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x869B60);
    _fb = (uint32_t)(0xFFFFFFE8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFE8u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x004D1F76u); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004D1F76: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D1F79
 * Original: 0x004D1F79 - 0x004D1F8E (21 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D1F79(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D1F79: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x869B78);
    _fb = (uint32_t)(0xFFFFFFE8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFE8u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x004D1F8Bu); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004D1F8B: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D1F8E
 * Original: 0x004D1F8E - 0x004D1FAA (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D1F8E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D1F8E: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004D1F96u); RECOMP_ABI_CALL(0x004D1FAAu, sub_004D1FAA); /* call 0x004D1FAA */

loc_004D1F96: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004D1FA4; /* je: equal / zero */

loc_004D1F9D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004D1FA3u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004D1FA3: ;
    POP32(esp, ecx);

loc_004D1FA4: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D1FAA
 * Original: 0x004D1FAA - 0x004D1FD1 (39 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D1FAA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D1FAA: ;
    MEM32(ecx) = 0x869B48;
    MEM32(ecx + 0x18) = 0x869B28;
    MEM32(ecx + 0x1C) = 0x869B0C;
    MEM32(ecx + 0x20) = 0x869B00;
    MEM32(ecx + 0x24) = 0x869AF4;
    g_seh_ebp = ebp; sub_004CDDEF(); return; /* tail jmp 0x004CDDEF */

}

/**
 * sub_004D1FD1
 * Original: 0x004D1FD1 - 0x004D207D (172 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004D1FD1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D1FD1: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 3);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D1FE0u); RECOMP_ABI_CALL(0x00508130u, sub_00508130); /* call 0x00508130 */

loc_004D1FE0: ;
    ecx = ebp + -12;
    edi = eax;
    MEM32(esp) = 0x7DFB6C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D1FF1u); RECOMP_ABI_CALL(0x00504C60u, sub_00504C60); /* call 0x00504C60 */

loc_004D1FF1: ;
    PUSH32(esp, 0x869B94);
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D1FFEu); RECOMP_ABI_CALL(0x00504C60u, sub_00504C60); /* call 0x00504C60 */

loc_004D1FFE: ;
    PUSH32(esp, 0x869B8C);
    ecx = ebp + -4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D200Bu); RECOMP_ABI_CALL(0x00504C60u, sub_00504C60); /* call 0x00504C60 */

loc_004D200B: ;
    esi = MEM32(ebp + 8);
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x004D2015u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D2012u); } /* indirect call */
    }

loc_004D2015: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D201Bu); RECOMP_ABI_CALL(0x004D0808u, sub_004D0808); /* call 0x004D0808 */

loc_004D201B: ;
    PUSH32(esp, eax);
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D2026u); RECOMP_ABI_CALL(0x005058B0u, sub_005058B0); /* call 0x005058B0 */

loc_004D2026: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004D2030u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D202Du); } /* indirect call */
    }

loc_004D2030: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D2036u); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004D2036: ;
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D2041u); RECOMP_ABI_CALL(0x005058B0u, sub_005058B0); /* call 0x005058B0 */

loc_004D2041: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004D204Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D2048u); } /* indirect call */
    }

loc_004D204B: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D2051u); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004D2051: ;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D205Cu); RECOMP_ABI_CALL(0x005058B0u, sub_005058B0); /* call 0x005058B0 */

loc_004D205C: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ebp + -4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D2067u); RECOMP_ABI_CALL(0x00504C90u, sub_00504C90); /* call 0x00504C90 */

loc_004D2067: ;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D206Fu); RECOMP_ABI_CALL(0x00504C90u, sub_00504C90); /* call 0x00504C90 */

loc_004D206F: ;
    ecx = ebp + -12;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D2077u); RECOMP_ABI_CALL(0x00504C90u, sub_00504C90); /* call 0x00504C90 */

loc_004D2077: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004D207D
 * Original: 0x004D207D - 0x004D20B2 (53 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D207D(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D207D: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 4;
    ecx = edi;
    MEM32(esi) = 0x8694A4;
    PUSH32(esp, 0x004D2091u); RECOMP_ABI_CALL(0x004DCA26u, sub_004DCA26); /* call 0x004DCA26 */

loc_004D2091: ;
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi) = 0x869BAC;
    MEM32(edi) = 0x869BA0;
    PUSH32(esp, 0x004D20A6u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004D20A6: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x004D20ADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D20ABu); } /* indirect call */
    }

loc_004D20AD: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004D20B2
 * Original: 0x004D20B2 - 0x004D20E5 (51 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D20B2(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D20B2: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004D20BAu); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004D20BA: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x38);
    PUSH32(esp, 0x004D20C6u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004D20C6: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D20D6; /* je: equal / zero */

loc_004D20CD: ;
    ecx = eax;
    PUSH32(esp, 0x004D20D4u); RECOMP_ABI_CALL(0x004D1EDAu, sub_004D1EDA); /* call 0x004D1EDA */

loc_004D20D4: ;
    goto loc_004D20D8;

loc_004D20D6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004D20D8: ;
    PUSH32(esp, esi);
    ecx = eax;
    MEM32(esi + 8) = eax;
    PUSH32(esp, 0x004D20E3u); RECOMP_ABI_CALL(0x004C1880u, sub_004C1880); /* call 0x004C1880 */

loc_004D20E3: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004D20E5
 * Original: 0x004D20E5 - 0x004D2104 (31 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D20E5(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D20E5: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004D20F1u); RECOMP_ABI_CALL(0x004C1895u, sub_004C1895); /* call 0x004C1895 */

loc_004D20F1: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D20FE; /* je: equal / zero */

loc_004D20F8: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004D20FEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D20FCu); } /* indirect call */
    }

loc_004D20FE: ;
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004D2114
 * Original: 0x004D2114 - 0x004D2127 (19 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D2114(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004D2114: ;
    PUSH32(esp, 0x004D2119u); RECOMP_ABI_CALL(0x004DC9ADu, sub_004DC9AD); /* call 0x004DC9AD */

loc_004D2119: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x004D2120u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D211Du); } /* indirect call */
    }

loc_004D2120: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esp += 4; return; /* ret */

}

/**
 * sub_004D212F
 * Original: 0x004D212F - 0x004D2168 (57 bytes, 21 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004D212F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D212F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8E19F0);
    ecx = MEM32(ecx + 8);
    MEM32(ebp + -4) = eax;
    PUSH32(esp, 0x11);
    eax = ebp + -24;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D214Bu); RECOMP_ABI_CALL(0x004C15B8u, sub_004C15B8); /* call 0x004C15B8 */

loc_004D214B: ;
    eax = ebp + -24;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D2154u); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004D2154: ;
    POP32(esp, ecx);
    ecx = MEM32(ebp + 8);
    MEM32(ecx) = eax;
    eax = ecx;
    ecx = MEM32(ebp + -4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D2164u); RECOMP_ABI_CALL(0x005CFF80u, sub_005CFF80); /* call 0x005CFF80 */

loc_004D2164: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D2168
 * Original: 0x004D2168 - 0x004D2175 (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D2168(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D2168: ;
    ecx = MEM32(ecx + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D2174; /* je: equal / zero */

loc_004D216F: ;
    g_seh_ebp = ebp; sub_004C9AE8(); return; /* tail jmp 0x004C9AE8 */

loc_004D2174: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004D218D
 * Original: 0x004D218D - 0x004D21A7 (26 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D218D(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D218D: ;
    PUSH32(esp, MEM32(esp + 0xC));
    eax = MEM32(esp + 8);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, MEM32(eax + 0x14));
    PUSH32(esp, 0x004D21A1u); RECOMP_ABI_CALL(0x004D0020u, sub_004D0020); /* call 0x004D0020 */

loc_004D21A1: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004D21A7
 * Original: 0x004D21A7 - 0x004D21B6 (15 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D21A7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D21A7: ;
    PUSH32(esp, 0x004D21ACu); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004D21AC: ;
    edx = MEM32(eax);
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x84)); return; /* indirect tail jmp */

}

/**
 * sub_004D21B6
 * Original: 0x004D21B6 - 0x004D21D0 (26 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D21B6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D21B6: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D21CE; /* je: equal / zero */

loc_004D21C0: ;
    PUSH32(esp, 0x004D21C5u); RECOMP_ABI_CALL(0x004C98A2u, sub_004C98A2); /* call 0x004C98A2 */

loc_004D21C5: ;
    ecx = MEM32(esi + 8);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004C9B16(); return; /* tail jmp 0x004C9B16 */

loc_004D21CE: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004D21D0
 * Original: 0x004D21D0 - 0x004D21DF (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D21D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D21D0: ;
    ecx = MEM32(ecx + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D21DC; /* je: equal / zero */

loc_004D21D7: ;
    g_seh_ebp = ebp; sub_004C15D7(); return; /* tail jmp 0x004C15D7 */

loc_004D21DC: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_004D21DF
 * Original: 0x004D21DF - 0x004D21F2 (19 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D21DF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D21DF: ;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D21EF; /* je: equal / zero */

loc_004D21E5: ;
    eax = MEM32(ecx + 4);
    ecx = eax + 0x24;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax)); return; /* indirect tail jmp */

loc_004D21EF: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004D21F2
 * Original: 0x004D21F2 - 0x004D2206 (20 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D21F2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D21F2: ;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D2203; /* je: equal / zero */

loc_004D21F8: ;
    eax = MEM32(ecx + 4);
    ecx = eax + 0x24;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 4)); return; /* indirect tail jmp */

loc_004D2203: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004D2206
 * Original: 0x004D2206 - 0x004D221F (25 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D2206(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D2206: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D221A; /* je: equal / zero */

loc_004D220F: ;
    ecx = MEM32(0x90E4B0);
    PUSH32(esp, 0x004D221Au); RECOMP_ABI_CALL(0x004D20B2u, sub_004D20B2); /* call 0x004D20B2 */

loc_004D221A: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D221F
 * Original: 0x004D221F - 0x004D2238 (25 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D221F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D221F: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D2233; /* je: equal / zero */

loc_004D2228: ;
    ecx = MEM32(0x90E4B0);
    PUSH32(esp, 0x004D2233u); RECOMP_ABI_CALL(0x004D20E5u, sub_004D20E5); /* call 0x004D20E5 */

loc_004D2233: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D2238
 * Original: 0x004D2238 - 0x004D2253 (27 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D2238(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D2238: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D224E; /* je: equal / zero */

loc_004D2241: ;
    eax = MEM32(0x90E4B0);
    ecx = MEM32(eax + 8);
    PUSH32(esp, 0x004D224Eu); RECOMP_ABI_CALL(0x004C157Fu, sub_004C157F); /* call 0x004C157F */

loc_004D224E: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D2253
 * Original: 0x004D2253 - 0x004D2274 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D2253(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D2253: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D2261; /* jne: not equal / not zero */

loc_004D225C: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D2261: ;
    ecx = MEM32(0x90E4B0);
    PUSH32(esp, 0x004D226Cu); RECOMP_ABI_CALL(0x004D2114u, sub_004D2114); /* call 0x004D2114 */

loc_004D226C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D2272u); RECOMP_ABI_CALL(0x004D0803u, sub_004D0803); /* call 0x004D0803 */

loc_004D2272: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D2274
 * Original: 0x004D2274 - 0x004D22B2 (62 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004D2274(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D2274: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D22AB; /* je: equal / zero */

loc_004D2282: ;
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D2289u); RECOMP_ABI_CALL(0x004D07B4u, sub_004D07B4); /* call 0x004D07B4 */

loc_004D2289: ;
    PUSH32(esp, 0);
    MEM8(ebp + -4) = LO8(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D2293u); RECOMP_ABI_CALL(0x004D07B4u, sub_004D07B4); /* call 0x004D07B4 */

loc_004D2293: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    PUSH32(esp, MEM32(ebp + -4));
    MEM8(ebp + -8) = LO8(eax);
    eax = MEM32(0x90E4B0);
    PUSH32(esp, MEM32(ebp + -8));
    ecx = MEM32(eax + 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D22ABu); RECOMP_ABI_CALL(0x004C1592u, sub_004C1592); /* call 0x004C1592 */

loc_004D22AB: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D22B0u); RECOMP_ABI_CALL(0x004D07EBu, sub_004D07EB); /* call 0x004D07EB */

loc_004D22B0: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004D22B2
 * Original: 0x004D22B2 - 0x004D22D6 (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D22B2(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D22B2: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D22C3; /* jne: not equal / not zero */

loc_004D22BC: ;
    PUSH32(esp, 0x004D22C1u); RECOMP_ABI_CALL(0x004D07EBu, sub_004D07EB); /* call 0x004D07EB */

loc_004D22C1: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_004D22C3: ;
    ecx = MEM32(0x90E4B0);
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D22D2u); RECOMP_ABI_CALL(0x004D212Fu, sub_004D212F); /* call 0x004D212F */

loc_004D22D2: ;
    eax = MEM32(eax);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D22D6
 * Original: 0x004D22D6 - 0x004D22EF (25 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D22D6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D22D6: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D22EA; /* je: equal / zero */

loc_004D22DF: ;
    ecx = MEM32(0x90E4B0);
    PUSH32(esp, 0x004D22EAu); RECOMP_ABI_CALL(0x004D2168u, sub_004D2168); /* call 0x004D2168 */

loc_004D22EA: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D22EF
 * Original: 0x004D22EF - 0x004D230A (27 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D22EF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D22EF: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D2305; /* je: equal / zero */

loc_004D22F8: ;
    eax = MEM32(0x90E4B0);
    ecx = MEM32(eax + 8);
    PUSH32(esp, 0x004D2305u); RECOMP_ABI_CALL(0x004C15A5u, sub_004C15A5); /* call 0x004C15A5 */

loc_004D2305: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D230A
 * Original: 0x004D230A - 0x004D2325 (27 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D230A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D230A: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D2320; /* je: equal / zero */

loc_004D2313: ;
    eax = MEM32(0x90E4B0);
    ecx = MEM32(eax + 8);
    PUSH32(esp, 0x004D2320u); RECOMP_ABI_CALL(0x004C15CBu, sub_004C15CB); /* call 0x004C15CB */

loc_004D2320: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D2325
 * Original: 0x004D2325 - 0x004D2346 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D2325(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D2325: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D2333; /* jne: not equal / not zero */

loc_004D232E: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D2333: ;
    ecx = MEM32(0x90E4B0);
    PUSH32(esp, 0x004D233Eu); RECOMP_ABI_CALL(0x004D21A7u, sub_004D21A7); /* call 0x004D21A7 */

loc_004D233E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D2344u); RECOMP_ABI_CALL(0x004D080Du, sub_004D080D); /* call 0x004D080D */

loc_004D2344: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D2346
 * Original: 0x004D2346 - 0x004D235F (25 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D2346(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D2346: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D235A; /* je: equal / zero */

loc_004D234F: ;
    ecx = MEM32(0x90E4B0);
    PUSH32(esp, 0x004D235Au); RECOMP_ABI_CALL(0x004D21B6u, sub_004D21B6); /* call 0x004D21B6 */

loc_004D235A: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D235F
 * Original: 0x004D235F - 0x004D2380 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D235F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D235F: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D236D; /* jne: not equal / not zero */

loc_004D2368: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D236D: ;
    ecx = MEM32(0x90E4B0);
    PUSH32(esp, 0x004D2378u); RECOMP_ABI_CALL(0x004D21D0u, sub_004D21D0); /* call 0x004D21D0 */

loc_004D2378: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D237Eu); RECOMP_ABI_CALL(0x004D080Du, sub_004D080D); /* call 0x004D080D */

loc_004D237E: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D2380
 * Original: 0x004D2380 - 0x004D23C2 (66 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D2380(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D2380: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D239F; /* je: equal / zero */

loc_004D2389: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D2390u); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D2390: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    eax = MEM32(0x90E4B0);
    ecx = MEM32(eax + 8);
    PUSH32(esp, 0x004D239Fu); RECOMP_ABI_CALL(0x004C1567u, sub_004C1567); /* call 0x004C1567 */

loc_004D239F: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

    eax = MEM32(ecx);
    eax = MEM32(eax + 0x24);
    esp += 4; return; /* ret */

    eax = MEM32(ecx + 0x14);
    esp += 4; return; /* ret */

}

/**
 * sub_004D23C2
 * Original: 0x004D23C2 - 0x004D23CA (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D23C2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D23C2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004D26E9(); return; /* tail jmp 0x004D26E9 */

}

/**
 * sub_004D23CA
 * Original: 0x004D23CA - 0x004D23D2 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D23CA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D23CA: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004D1F8E(); return; /* tail jmp 0x004D1F8E */

}

/**
 * sub_004D23D2
 * Original: 0x004D23D2 - 0x004D23DA (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D23D2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D23D2: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004D1F8E(); return; /* tail jmp 0x004D1F8E */

}

/**
 * sub_004D23DA
 * Original: 0x004D23DA - 0x004D23E2 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D23DA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D23DA: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004D1F8E(); return; /* tail jmp 0x004D1F8E */

}

/**
 * sub_004D23E2
 * Original: 0x004D23E2 - 0x004D23EA (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D23E2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D23E2: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x24;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004D1F8E(); return; /* tail jmp 0x004D1F8E */

}

/**
 * sub_004D23EA
 * Original: 0x004D23EA - 0x004D256B (385 bytes, 139 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004D23EA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D23EA: ;
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
    PUSH32(esp, 4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D23FAu); RECOMP_ABI_CALL(0x00508130u, sub_00508130); /* call 0x00508130 */

loc_004D23FA: ;
    ecx = ebp + -24;
    edi = eax;
    MEM32(esp) = 0x869BE8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D240Bu); RECOMP_ABI_CALL(0x00504C60u, sub_00504C60); /* call 0x00504C60 */

loc_004D240B: ;
    PUSH32(esp, 0x869BDC);
    ecx = ebp + -20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D2418u); RECOMP_ABI_CALL(0x00504C60u, sub_00504C60); /* call 0x00504C60 */

loc_004D2418: ;
    PUSH32(esp, 0x869BD0);
    ecx = ebp + -16;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D2425u); RECOMP_ABI_CALL(0x00504C60u, sub_00504C60); /* call 0x00504C60 */

loc_004D2425: ;
    PUSH32(esp, 0x869BC0);
    ecx = ebp + -12;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D2432u); RECOMP_ABI_CALL(0x00504C60u, sub_00504C60); /* call 0x00504C60 */

loc_004D2432: ;
    esi = MEM32(ebp + 8);
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004D243Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D2439u); } /* indirect call */
    }

loc_004D243C: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x004D2443u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D2440u); } /* indirect call */
    }

loc_004D2443: ;
    ebx = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004D244Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D2449u); } /* indirect call */
    }

loc_004D244C: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x004D2453u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D2450u); } /* indirect call */
    }

loc_004D2453: ;
    MEM32(ebp + 8) = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x004D245Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D245Au); } /* indirect call */
    }

loc_004D245D: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x004D2464u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D2461u); } /* indirect call */
    }

loc_004D2464: ;
    MEM32(ebp + -4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D246Cu); RECOMP_ABI_CALL(0x004C0342u, sub_004C0342); /* call 0x004C0342 */

loc_004D246C: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x004D2472u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D2470u); } /* indirect call */
    }

loc_004D2472: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x004D247Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D2477u); } /* indirect call */
    }

loc_004D247A: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D247Fu); RECOMP_ABI_CALL(0x004C0342u, sub_004C0342); /* call 0x004C0342 */

loc_004D247F: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x004D2485u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D2483u); } /* indirect call */
    }

loc_004D2485: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 8));
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x004D248Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D248Cu); } /* indirect call */
    }

loc_004D248F: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D2494u); RECOMP_ABI_CALL(0x004C0342u, sub_004C0342); /* call 0x004C0342 */

loc_004D2494: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x004D249Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D2498u); } /* indirect call */
    }

loc_004D249A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -4));
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x004D24A4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D24A1u); } /* indirect call */
    }

loc_004D24A4: ;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D24AAu); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004D24AA: ;
    PUSH32(esp, eax);
    eax = ebp + -24;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D24B5u); RECOMP_ABI_CALL(0x005058B0u, sub_005058B0); /* call 0x005058B0 */

loc_004D24B5: ;
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D24BDu); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004D24BD: ;
    PUSH32(esp, eax);
    eax = ebp + -20;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D24C8u); RECOMP_ABI_CALL(0x005058B0u, sub_005058B0); /* call 0x005058B0 */

loc_004D24C8: ;
    PUSH32(esp, MEM32(ebp + -4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D24D0u); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004D24D0: ;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D24DBu); RECOMP_ABI_CALL(0x005058B0u, sub_005058B0); /* call 0x005058B0 */

loc_004D24DB: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x004D24E5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D24E2u); } /* indirect call */
    }

loc_004D24E5: ;
    esi = eax;
    PUSH32(esp, MEM32(esi + 0x14));
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D24F2u); RECOMP_ABI_CALL(0x004DB7FCu, sub_004DB7FC); /* call 0x004DB7FC */

loc_004D24F2: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14), ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004D2534; /* jbe: below or equal (unsigned <=) */

loc_004D24F9: ;
    PUSH32(esp, 0x869BB4);
    ecx = ebp + -4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D2506u); RECOMP_ABI_CALL(0x00504C60u, sub_00504C60); /* call 0x00504C60 */

loc_004D2506: ;
    PUSH32(esp, ebx);
    ecx = esi + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D250Fu); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004D250F: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004D2516u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D2513u); } /* indirect call */
    }

loc_004D2516: ;
    MEM32(ebp + 8) = eax;
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D2526u); RECOMP_ABI_CALL(0x004DB81Eu, sub_004DB81E); /* call 0x004DB81E */

loc_004D2526: ;
    ecx = ebp + -4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D252Eu); RECOMP_ABI_CALL(0x00504C90u, sub_00504C90); /* call 0x00504C90 */

loc_004D252E: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esi + 0x14) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004D24F9; /* jb: below (unsigned <) */

loc_004D2534: ;
    PUSH32(esp, MEM32(ebp + -8));
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D2541u); RECOMP_ABI_CALL(0x005058B0u, sub_005058B0); /* call 0x005058B0 */

loc_004D2541: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ebp + -12;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D254Cu); RECOMP_ABI_CALL(0x00504C90u, sub_00504C90); /* call 0x00504C90 */

loc_004D254C: ;
    ecx = ebp + -16;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D2554u); RECOMP_ABI_CALL(0x00504C90u, sub_00504C90); /* call 0x00504C90 */

loc_004D2554: ;
    ecx = ebp + -20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D255Cu); RECOMP_ABI_CALL(0x00504C90u, sub_00504C90); /* call 0x00504C90 */

loc_004D255C: ;
    ecx = ebp + -24;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D2564u); RECOMP_ABI_CALL(0x00504C90u, sub_00504C90); /* call 0x00504C90 */

loc_004D2564: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004D256B
 * Original: 0x004D256B - 0x004D25A8 (61 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D256B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D256B: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 4;
    MEM32(esi) = 0x869BAC;
    MEM32(edi) = 0x869BA0;
    PUSH32(esp, 0x004D2583u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004D2583: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004D258Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D2588u); } /* indirect call */
    }

loc_004D258B: ;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D2598; /* je: equal / zero */

loc_004D2591: ;
    ecx = esi;
    PUSH32(esp, 0x004D2598u); RECOMP_ABI_CALL(0x004D20E5u, sub_004D20E5); /* call 0x004D20E5 */

loc_004D2598: ;
    ecx = edi;
    PUSH32(esp, 0x004D259Fu); RECOMP_ABI_CALL(0x004DCA2Fu, sub_004DCA2F); /* call 0x004DCA2F */

loc_004D259F: ;
    POP32(esp, edi);
    MEM32(esi) = 0x8694A4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004D25A8
 * Original: 0x004D25A8 - 0x004D25B8 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D25A8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D25A8: ;
    ecx = MEM32(ecx + 8);
    PUSH32(esp, 0x004D25B0u); RECOMP_ABI_CALL(0x004C156Cu, sub_004C156C); /* call 0x004C156C */

loc_004D25B0: ;
    ecx = eax + 8;
    g_seh_ebp = ebp; sub_004DB8CE(); return; /* tail jmp 0x004DB8CE */

}

/**
 * sub_004D25B8
 * Original: 0x004D25B8 - 0x004D25C4 (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D25B8(void)
{

loc_004D25B8: ;
    ecx = MEM32(ecx + 8);
    PUSH32(esp, 0x004D25C0u); RECOMP_ABI_CALL(0x004C156Cu, sub_004C156C); /* call 0x004C156C */

loc_004D25C0: ;
    eax = MEM32(eax + 0x14);
    esp += 4; return; /* ret */

}

/**
 * sub_004D25C4
 * Original: 0x004D25C4 - 0x004D25E9 (37 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D25C4(void)
{

loc_004D25C4: ;
    ecx = MEM32(ecx + 8);
    PUSH32(esp, 0x004D25CCu); RECOMP_ABI_CALL(0x004C9AE4u, sub_004C9AE4); /* call 0x004C9AE4 */

loc_004D25CC: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x004D25D3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D25D0u); } /* indirect call */
    }

loc_004D25D3: ;
    PUSH32(esp, MEM32(esp + 4));
    ecx = eax + 8;
    PUSH32(esp, 0x004D25DFu); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004D25DF: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x004D25E6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D25E3u); } /* indirect call */
    }

loc_004D25E6: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D25E9
 * Original: 0x004D25E9 - 0x004D2633 (74 bytes, 32 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D25E9(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D25E9: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 5);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esi + 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x004D25FCu); RECOMP_ABI_CALL(0x005CFEF0u, sub_005CFEF0); /* call 0x005CFEF0 */

loc_004D25FC: ;
    eax = MEM32(esp + 0x1C);
    eax = MEM32(eax + 0x24);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004D2624; /* jbe: below or equal (unsigned <=) */

loc_004D260A: ;
    PUSH32(esp, ebx);
    ecx = esp + 0x14;
    PUSH32(esp, 0x004D2614u); RECOMP_ABI_CALL(0x004DB7E4u, sub_004DB7E4); /* call 0x004DB7E4 */

loc_004D2614: ;
    MEM8(edi + ebx) = LO8(eax);
    eax = MEM32(esp + 0x10);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(eax + 0x24) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004D260A; /* jb: below (unsigned <) */

loc_004D2621: ;
    PUSH32(esp, edi);
    goto loc_004D2625;

loc_004D2624: ;
    PUSH32(esp, ebx);

loc_004D2625: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, 0x004D262Du); RECOMP_ABI_CALL(0x004D1F0Cu, sub_004D1F0C); /* call 0x004D1F0C */

loc_004D262D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D2633
 * Original: 0x004D2633 - 0x004D2656 (35 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D2633(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D2633: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D2641; /* jne: not equal / not zero */

loc_004D263C: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D2641: ;
    eax = MEM32(0x90E4B0);
    ecx = MEM32(eax + 8);
    PUSH32(esp, 0x004D264Eu); RECOMP_ABI_CALL(0x004C9AE4u, sub_004C9AE4); /* call 0x004C9AE4 */

loc_004D264E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D2654u); RECOMP_ABI_CALL(0x004D23EAu, sub_004D23EA); /* call 0x004D23EA */

loc_004D2654: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D2656
 * Original: 0x004D2656 - 0x004D2680 (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D2656(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D2656: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D2664; /* jne: not equal / not zero */

loc_004D265F: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D2664: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D266Bu); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D266B: ;
    POP32(esp, ecx);
    ecx = MEM32(0x90E4B0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D2678u); RECOMP_ABI_CALL(0x004D25A8u, sub_004D25A8); /* call 0x004D25A8 */

loc_004D2678: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D267Eu); RECOMP_ABI_CALL(0x004D1FD1u, sub_004D1FD1); /* call 0x004D1FD1 */

loc_004D267E: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D2680
 * Original: 0x004D2680 - 0x004D26A1 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D2680(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D2680: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D268E; /* jne: not equal / not zero */

loc_004D2689: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D268E: ;
    ecx = MEM32(0x90E4B0);
    PUSH32(esp, 0x004D2699u); RECOMP_ABI_CALL(0x004D25B8u, sub_004D25B8); /* call 0x004D25B8 */

loc_004D2699: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D269Fu); RECOMP_ABI_CALL(0x004D0803u, sub_004D0803); /* call 0x004D0803 */

loc_004D269F: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D26A1
 * Original: 0x004D26A1 - 0x004D26C3 (34 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D26A1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D26A1: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D26BE; /* je: equal / zero */

loc_004D26AA: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D26B1u); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D26B1: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    ecx = MEM32(0x90E4B0);
    PUSH32(esp, 0x004D26BEu); RECOMP_ABI_CALL(0x004D25C4u, sub_004D25C4); /* call 0x004D25C4 */

loc_004D26BE: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D26C3
 * Original: 0x004D26C3 - 0x004D26E9 (38 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D26C3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D26C3: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D26E4; /* je: equal / zero */

loc_004D26CC: ;
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D26D7u); RECOMP_ABI_CALL(0x004D08C1u, sub_004D08C1); /* call 0x004D08C1 */

loc_004D26D7: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    ecx = MEM32(0x90E4B0);
    PUSH32(esp, 0x004D26E4u); RECOMP_ABI_CALL(0x004D25E9u, sub_004D25E9); /* call 0x004D25E9 */

loc_004D26E4: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D26E9
 * Original: 0x004D26E9 - 0x004D2705 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D26E9(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D26E9: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004D26F1u); RECOMP_ABI_CALL(0x004D256Bu, sub_004D256B); /* call 0x004D256B */

loc_004D26F1: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004D26FF; /* je: equal / zero */

loc_004D26F8: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004D26FEu); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_004D26FE: ;
    POP32(esp, ecx);

loc_004D26FF: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D2705
 * Original: 0x004D2705 - 0x004D2718 (19 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D2705(void)
{

loc_004D2705: ;
    eax = ecx + 0xC;
    PUSH32(esp, 0x869D20);
    MEM32(0x90E4B0) = eax;
    PUSH32(esp, 0x004D2717u); RECOMP_ABI_CALL(0x004D0838u, sub_004D0838); /* call 0x004D0838 */

loc_004D2717: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004D2718
 * Original: 0x004D2718 - 0x004D2725 (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D2718(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D2718: ;
    eax = ecx;
    MEM32(eax + 4) = MEM32(eax + 4) & 0;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax) = 0x869DB8;
    esp += 4; return; /* ret */

}

/**
 * sub_004D2725
 * Original: 0x004D2725 - 0x004D2758 (51 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D2725(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D2725: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004D272Du); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004D272D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x24);
    PUSH32(esp, 0x004D2739u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004D2739: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D2749; /* je: equal / zero */

loc_004D2740: ;
    ecx = eax;
    PUSH32(esp, 0x004D2747u); RECOMP_ABI_CALL(0x004CB1FAu, sub_004CB1FA); /* call 0x004CB1FA */

loc_004D2747: ;
    goto loc_004D274B;

loc_004D2749: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004D274B: ;
    PUSH32(esp, esi);
    ecx = eax;
    MEM32(esi + 4) = eax;
    PUSH32(esp, 0x004D2756u); RECOMP_ABI_CALL(0x004C1880u, sub_004C1880); /* call 0x004C1880 */

loc_004D2756: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004D2760
 * Original: 0x004D2760 - 0x004D277F (31 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D2760(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D2760: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004D276Cu); RECOMP_ABI_CALL(0x004C1895u, sub_004C1895); /* call 0x004C1895 */

loc_004D276C: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D2779; /* je: equal / zero */

loc_004D2773: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004D2779u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D2777u); } /* indirect call */
    }

loc_004D2779: ;
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004D277F
 * Original: 0x004D277F - 0x004D2799 (26 bytes, 7 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D277F(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D277F: ;
    PUSH32(esp, MEM32(esp + 0xC));
    eax = MEM32(esp + 8);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, MEM32(eax + 0x14));
    PUSH32(esp, 0x004D2793u); RECOMP_ABI_CALL(0x004D0020u, sub_004D0020); /* call 0x004D0020 */

loc_004D2793: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004D2799
 * Original: 0x004D2799 - 0x004D27B2 (25 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D2799(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D2799: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D27AD; /* je: equal / zero */

loc_004D27A2: ;
    ecx = MEM32(0x90E4B4);
    PUSH32(esp, 0x004D27ADu); RECOMP_ABI_CALL(0x004D2725u, sub_004D2725); /* call 0x004D2725 */

loc_004D27AD: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D27B2
 * Original: 0x004D27B2 - 0x004D27D5 (35 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D27B2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D27B2: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D27C0; /* jne: not equal / not zero */

loc_004D27BB: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D27C0: ;
    eax = MEM32(0x90E4B4);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x004D27CDu); RECOMP_ABI_CALL(0x004C1E5Fu, sub_004C1E5F); /* call 0x004C1E5F */

loc_004D27CD: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D27D3u); RECOMP_ABI_CALL(0x004D0808u, sub_004D0808); /* call 0x004D0808 */

loc_004D27D3: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D27D5
 * Original: 0x004D27D5 - 0x004D27FA (37 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D27D5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D27D5: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D27E9; /* je: equal / zero */

loc_004D27DE: ;
    ecx = MEM32(0x90E4B4);
    PUSH32(esp, 0x004D27E9u); RECOMP_ABI_CALL(0x004D2760u, sub_004D2760); /* call 0x004D2760 */

loc_004D27E9: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

    eax = MEM32(ecx + 0x14);
    esp += 4; return; /* ret */

}

/**
 * sub_004D27FA
 * Original: 0x004D27FA - 0x004D2816 (28 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D27FA(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D27FA: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 0 (32-bit) */
    MEM32(esi) = 0x869DB8;
    if (CMP_EQ(_fa, _fb)) goto loc_004D280E; /* je: equal / zero */

loc_004D2809: ;
    PUSH32(esp, 0x004D280Eu); RECOMP_ABI_CALL(0x004D2760u, sub_004D2760); /* call 0x004D2760 */

loc_004D280E: ;
    MEM32(esi) = 0x8694A4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004D2816
 * Original: 0x004D2816 - 0x004D292B (277 bytes, 102 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004D2816(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D2816: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8E19F0);
    ecx = MEM32(ecx + 4);
    PUSH32(esp, esi);
    MEM32(ebp + -4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D282Du); RECOMP_ABI_CALL(0x004CB2BBu, sub_004CB2BB); /* call 0x004CB2BB */

loc_004D282D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(ebp + -48) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_004D2911; /* je: equal / zero */

loc_004D283A: ;
    eax = MEM32(esi);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004D2843u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D2840u); } /* indirect call */
    }

loc_004D2843: ;
    edi = MEM32(eax + 0x14);
    MEM32(ebp + -40) = eax;
    eax = edi + edi + 1;
    PUSH32(esp, eax);
    ecx = ebp + -44;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D2856u); RECOMP_ABI_CALL(0x004DB7FCu, sub_004DB7FC); /* call 0x004DB7FC */

loc_004D2856: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_004D28D4; /* jle: less or equal (signed <=) */

loc_004D285C: ;
    eax = MEM32(ebp + -40);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -56) = eax;
    MEM32(ebp + -40) = 1;

loc_004D286C: ;
    ecx = MEM32(ebp + -56);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D2875u); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004D2875: ;
    esi = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004D287Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D287Bu); } /* indirect call */
    }

loc_004D287E: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x004D2885u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D2882u); } /* indirect call */
    }

loc_004D2885: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8238C8);
    eax = ebp + -36;
    PUSH32(esp, 0x20);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D2896u); RECOMP_ABI_CALL(0x004E3665u, sub_004E3665); /* call 0x004E3665 */

loc_004D2896: ;
    eax = ebp + -36;
    MEM32(ebp + -52) = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ebp + -52;
    PUSH32(esp, eax);
    eax = ebx + ebx;
    PUSH32(esp, eax);
    ecx = ebp + -44;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D28AFu); RECOMP_ABI_CALL(0x004DB81Eu, sub_004DB81E); /* call 0x004DB81E */

loc_004D28AF: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004D28B6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D28B3u); } /* indirect call */
    }

loc_004D28B6: ;
    MEM32(ebp + -60) = eax;
    eax = ebp + -60;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -40));
    ecx = ebp + -44;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D28C8u); RECOMP_ABI_CALL(0x004DB81Eu, sub_004DB81E); /* call 0x004DB81E */

loc_004D28C8: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -40) = MEM32(ebp + -40) + 2;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004D286C; /* jl: less (signed <) */

loc_004D28D1: ;
    esi = MEM32(ebp + -48);

loc_004D28D4: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x004D28DBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D28D8u); } /* indirect call */
    }

loc_004D28DB: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x869DC0);
    eax = ebp + -36;
    PUSH32(esp, 0x20);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D28ECu); RECOMP_ABI_CALL(0x004E3665u, sub_004E3665); /* call 0x004E3665 */

loc_004D28EC: ;
    eax = ebp + -36;
    MEM32(ebp + -48) = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ebp + -48;
    PUSH32(esp, eax);
    eax = edi + edi;
    PUSH32(esp, eax);
    ecx = ebp + -44;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D2905u); RECOMP_ABI_CALL(0x004DB81Eu, sub_004DB81E); /* call 0x004DB81E */

loc_004D2905: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -44);
    POP32(esp, edi);
    MEM32(eax) = ecx;
    POP32(esp, ebx);
    goto loc_004D291E;

loc_004D2911: ;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D291Bu); RECOMP_ABI_CALL(0x004DB7FCu, sub_004DB7FC); /* call 0x004DB7FC */

loc_004D291B: ;
    eax = MEM32(ebp + 8);

loc_004D291E: ;
    ecx = MEM32(ebp + -4);
    POP32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D2927u); RECOMP_ABI_CALL(0x005CFF80u, sub_005CFF80); /* call 0x005CFF80 */

loc_004D2927: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D292B
 * Original: 0x004D292B - 0x004D294F (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D292B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D292B: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D293C; /* jne: not equal / not zero */

loc_004D2935: ;
    PUSH32(esp, 0x004D293Au); RECOMP_ABI_CALL(0x004D07EBu, sub_004D07EB); /* call 0x004D07EB */

loc_004D293A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_004D293C: ;
    ecx = MEM32(0x90E4B4);
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D294Bu); RECOMP_ABI_CALL(0x004D2816u, sub_004D2816); /* call 0x004D2816 */

loc_004D294B: ;
    eax = MEM32(eax);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D294F
 * Original: 0x004D294F - 0x004D296B (28 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D294F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D294F: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004D2957u); RECOMP_ABI_CALL(0x004D27FAu, sub_004D27FA); /* call 0x004D27FA */

loc_004D2957: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004D2965; /* je: equal / zero */

loc_004D295E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004D2964u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_004D2964: ;
    POP32(esp, ecx);

loc_004D2965: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D296B
 * Original: 0x004D296B - 0x004D297E (19 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D296B(void)
{

loc_004D296B: ;
    eax = ecx + 0xC;
    PUSH32(esp, 0x869E14);
    MEM32(0x90E4B4) = eax;
    PUSH32(esp, 0x004D297Du); RECOMP_ABI_CALL(0x004D0838u, sub_004D0838); /* call 0x004D0838 */

loc_004D297D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004D297E
 * Original: 0x004D297E - 0x004D298B (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D297E(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D297E: ;
    eax = ecx;
    MEM32(eax + 4) = MEM32(eax + 4) & 0;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax) = 0x869E3C;
    esp += 4; return; /* ret */

}

/**
 * sub_004D298B
 * Original: 0x004D298B - 0x004D29BA (47 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D298B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D298B: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004D2993u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004D2993: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x004D299Fu); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004D299F: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D29B1; /* je: equal / zero */

loc_004D29A6: ;
    PUSH32(esp, 1);
    ecx = eax;
    PUSH32(esp, 0x004D29AFu); RECOMP_ABI_CALL(0x004C4181u, sub_004C4181); /* call 0x004C4181 */

loc_004D29AF: ;
    goto loc_004D29B3;

loc_004D29B1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004D29B3: ;
    MEM32(esi + 4) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D29BA
 * Original: 0x004D29BA - 0x004D29D0 (22 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D29BA(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D29BA: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D29CA; /* je: equal / zero */

loc_004D29C4: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004D29CAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D29C8u); } /* indirect call */
    }

loc_004D29CA: ;
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004D29D0
 * Original: 0x004D29D0 - 0x004D2A0B (59 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D29D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D29D0: ;
    ecx = MEM32(ecx + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004D29D9u); RECOMP_ABI_CALL(0x004C4245u, sub_004C4245); /* call 0x004C4245 */

loc_004D29D9: ;
    esi = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xF4); PUSH32(esp, 0x004D29E5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D29DFu); } /* indirect call */
    }

loc_004D29E5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D2A07; /* je: equal / zero */

loc_004D29E9: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x004D29F0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D29EDu); } /* indirect call */
    }

loc_004D29F0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D2A07; /* jne: not equal / not zero */

loc_004D29F4: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xF8); PUSH32(esp, 0x004D29FEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D29F8u); } /* indirect call */
    }

loc_004D29FE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D2A07; /* je: equal / zero */

loc_004D2A02: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_004D2A07: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004D2A0B
 * Original: 0x004D2A0B - 0x004D2A2D (34 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D2A0B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D2A0B: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D2A28; /* je: equal / zero */

loc_004D2A14: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D2A1Bu); RECOMP_ABI_CALL(0x004D08ACu, sub_004D08AC); /* call 0x004D08AC */

loc_004D2A1B: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    ecx = MEM32(0x90E4B8);
    PUSH32(esp, 0x004D2A28u); RECOMP_ABI_CALL(0x004D298Bu, sub_004D298B); /* call 0x004D298B */

loc_004D2A28: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D2A2D
 * Original: 0x004D2A2D - 0x004D2A46 (25 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D2A2D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D2A2D: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D2A41; /* je: equal / zero */

loc_004D2A36: ;
    ecx = MEM32(0x90E4B8);
    PUSH32(esp, 0x004D2A41u); RECOMP_ABI_CALL(0x004D29BAu, sub_004D29BA); /* call 0x004D29BA */

loc_004D2A41: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D2A46
 * Original: 0x004D2A46 - 0x004D2A71 (43 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D2A46(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D2A46: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D2A54; /* jne: not equal / not zero */

loc_004D2A4F: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D2A54: ;
    ecx = MEM32(0x90E4B8);
    PUSH32(esp, 0x004D2A5Fu); RECOMP_ABI_CALL(0x004D29D0u, sub_004D29D0); /* call 0x004D29D0 */

loc_004D2A5F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D2A65u); RECOMP_ABI_CALL(0x004D080Du, sub_004D080D); /* call 0x004D080D */

loc_004D2A65: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D2A71
 * Original: 0x004D2A71 - 0x004D2A83 (18 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D2A71(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D2A71: ;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), 0 (32-bit) */
    MEM32(ecx) = 0x869E3C;
    if (CMP_EQ(_fa, _fb)) goto loc_004D2A82; /* je: equal / zero */

loc_004D2A7D: ;
    g_seh_ebp = ebp; sub_004D29BA(); return; /* tail jmp 0x004D29BA */

loc_004D2A82: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004D2A83
 * Original: 0x004D2A83 - 0x004D2AD6 (83 bytes, 38 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004D2A83(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D2A83: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D2A95u); RECOMP_ABI_CALL(0x004C4249u, sub_004C4249); /* call 0x004C4249 */

loc_004D2A95: ;
    ebx = eax;
    PUSH32(esp, ebx);
    ecx = ebp + -4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D2AA0u); RECOMP_ABI_CALL(0x004DB780u, sub_004DB780); /* call 0x004DB780 */

loc_004D2AA0: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004D2AC7; /* jbe: below or equal (unsigned <=) */

loc_004D2AA6: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D2AAFu); RECOMP_ABI_CALL(0x004C4250u, sub_004C4250); /* call 0x004C4250 */

loc_004D2AAF: ;
    eax = ZX8(LO8(eax));
    MEM32(ebp + -8) = eax;
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = ebp + -4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D2AC2u); RECOMP_ABI_CALL(0x004DB7A2u, sub_004DB7A2); /* call 0x004DB7A2 */

loc_004D2AC2: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004D2AA6; /* jb: below (unsigned <) */

loc_004D2AC7: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax) = ecx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D2AD6
 * Original: 0x004D2AD6 - 0x004D2B26 (80 bytes, 37 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004D2AD6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D2AD6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D2AE8u); RECOMP_ABI_CALL(0x004C4249u, sub_004C4249); /* call 0x004C4249 */

loc_004D2AE8: ;
    ebx = eax;
    PUSH32(esp, ebx);
    ecx = ebp + -4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D2AF3u); RECOMP_ABI_CALL(0x004DB7FCu, sub_004DB7FC); /* call 0x004DB7FC */

loc_004D2AF3: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004D2B17; /* jbe: below or equal (unsigned <=) */

loc_004D2AF9: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D2B02u); RECOMP_ABI_CALL(0x004C4271u, sub_004C4271); /* call 0x004C4271 */

loc_004D2B02: ;
    MEM32(ebp + -8) = eax;
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = ebp + -4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D2B12u); RECOMP_ABI_CALL(0x004DB81Eu, sub_004DB81E); /* call 0x004DB81E */

loc_004D2B12: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004D2AF9; /* jb: below (unsigned <) */

loc_004D2B17: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax) = ecx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D2B26
 * Original: 0x004D2B26 - 0x004D2B4A (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D2B26(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D2B26: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D2B37; /* jne: not equal / not zero */

loc_004D2B30: ;
    PUSH32(esp, 0x004D2B35u); RECOMP_ABI_CALL(0x004D07EBu, sub_004D07EB); /* call 0x004D07EB */

loc_004D2B35: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_004D2B37: ;
    ecx = MEM32(0x90E4B8);
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D2B46u); RECOMP_ABI_CALL(0x004D2A83u, sub_004D2A83); /* call 0x004D2A83 */

loc_004D2B46: ;
    eax = MEM32(eax);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D2B4A
 * Original: 0x004D2B4A - 0x004D2B6E (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D2B4A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D2B4A: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D2B5B; /* jne: not equal / not zero */

loc_004D2B54: ;
    PUSH32(esp, 0x004D2B59u); RECOMP_ABI_CALL(0x004D07EBu, sub_004D07EB); /* call 0x004D07EB */

loc_004D2B59: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_004D2B5B: ;
    ecx = MEM32(0x90E4B8);
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D2B6Au); RECOMP_ABI_CALL(0x004D2AD6u, sub_004D2AD6); /* call 0x004D2AD6 */

loc_004D2B6A: ;
    eax = MEM32(eax);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D2B6E
 * Original: 0x004D2B6E - 0x004D2B8A (28 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D2B6E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D2B6E: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004D2B76u); RECOMP_ABI_CALL(0x004D2A71u, sub_004D2A71); /* call 0x004D2A71 */

loc_004D2B76: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004D2B84; /* je: equal / zero */

loc_004D2B7D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004D2B83u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_004D2B83: ;
    POP32(esp, ecx);

loc_004D2B84: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D2B8A
 * Original: 0x004D2B8A - 0x004D2BA5 (27 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D2B8A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D2B8A: ;
    eax = ecx + 0xC;
    PUSH32(esp, 0x869EA8);
    MEM32(0x90E4B8) = eax;
    PUSH32(esp, 0x004D2B9Cu); RECOMP_ABI_CALL(0x004D0838u, sub_004D0838); /* call 0x004D0838 */

loc_004D2B9C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004D2BA5
 * Original: 0x004D2BA5 - 0x004D2BB2 (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D2BA5(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D2BA5: ;
    eax = ecx;
    MEM32(eax + 4) = MEM32(eax + 4) & 0;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax) = 0x869ED8;
    esp += 4; return; /* ret */

}

/**
 * sub_004D2BB2
 * Original: 0x004D2BB2 - 0x004D2BE5 (51 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D2BB2(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D2BB2: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004D2BBAu); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004D2BBA: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x24);
    PUSH32(esp, 0x004D2BC6u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004D2BC6: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D2BD6; /* je: equal / zero */

loc_004D2BCD: ;
    ecx = eax;
    PUSH32(esp, 0x004D2BD4u); RECOMP_ABI_CALL(0x004CAC00u, sub_004CAC00); /* call 0x004CAC00 */

loc_004D2BD4: ;
    goto loc_004D2BD8;

loc_004D2BD6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004D2BD8: ;
    PUSH32(esp, esi);
    ecx = eax;
    MEM32(esi + 4) = eax;
    PUSH32(esp, 0x004D2BE3u); RECOMP_ABI_CALL(0x004C1880u, sub_004C1880); /* call 0x004C1880 */

loc_004D2BE3: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004D2BE5
 * Original: 0x004D2BE5 - 0x004D2C04 (31 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D2BE5(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D2BE5: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004D2BF1u); RECOMP_ABI_CALL(0x004C1895u, sub_004C1895); /* call 0x004C1895 */

loc_004D2BF1: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D2BFE; /* je: equal / zero */

loc_004D2BF8: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004D2BFEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D2BFCu); } /* indirect call */
    }

loc_004D2BFE: ;
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004D2C04
 * Original: 0x004D2C04 - 0x004D2C1E (26 bytes, 7 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D2C04(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D2C04: ;
    PUSH32(esp, MEM32(esp + 0xC));
    eax = MEM32(esp + 8);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, MEM32(eax + 0x14));
    PUSH32(esp, 0x004D2C18u); RECOMP_ABI_CALL(0x004D0020u, sub_004D0020); /* call 0x004D0020 */

loc_004D2C18: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004D2C1E
 * Original: 0x004D2C1E - 0x004D2C37 (25 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D2C1E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D2C1E: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D2C32; /* je: equal / zero */

loc_004D2C27: ;
    ecx = MEM32(0x90E4BC);
    PUSH32(esp, 0x004D2C32u); RECOMP_ABI_CALL(0x004D2BB2u, sub_004D2BB2); /* call 0x004D2BB2 */

loc_004D2C32: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D2C37
 * Original: 0x004D2C37 - 0x004D2C50 (25 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D2C37(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D2C37: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D2C4B; /* je: equal / zero */

loc_004D2C40: ;
    ecx = MEM32(0x90E4BC);
    PUSH32(esp, 0x004D2C4Bu); RECOMP_ABI_CALL(0x004D2BE5u, sub_004D2BE5); /* call 0x004D2BE5 */

loc_004D2C4B: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D2C50
 * Original: 0x004D2C50 - 0x004D2C74 (36 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D2C50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D2C50: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D2C6F; /* je: equal / zero */

loc_004D2C59: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D2C60u); RECOMP_ABI_CALL(0x004D08ACu, sub_004D08AC); /* call 0x004D08AC */

loc_004D2C60: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    eax = MEM32(0x90E4BC);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x004D2C6Fu); RECOMP_ABI_CALL(0x004CABDDu, sub_004CABDD); /* call 0x004CABDD */

loc_004D2C6F: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D2C74
 * Original: 0x004D2C74 - 0x004D2C90 (28 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D2C74(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D2C74: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 0 (32-bit) */
    MEM32(esi) = 0x869ED8;
    if (CMP_EQ(_fa, _fb)) goto loc_004D2C88; /* je: equal / zero */

loc_004D2C83: ;
    PUSH32(esp, 0x004D2C88u); RECOMP_ABI_CALL(0x004D2BE5u, sub_004D2BE5); /* call 0x004D2BE5 */

loc_004D2C88: ;
    MEM32(esi) = 0x8694A4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004D2C90
 * Original: 0x004D2C90 - 0x004D2CB5 (37 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D2C90(void)
{

loc_004D2C90: ;
    PUSH32(esp, 0x004D2C95u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004D2C95: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x004D2C9Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D2C99u); } /* indirect call */
    }

loc_004D2C9C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 4));
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004D2CA7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D2CA4u); } /* indirect call */
    }

loc_004D2CA7: ;
    PUSH32(esp, eax);
    ecx = 0x90E43C;
    PUSH32(esp, 0x004D2CB2u); RECOMP_ABI_CALL(0x004AFE27u, sub_004AFE27); /* call 0x004AFE27 */

loc_004D2CB2: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D2CB5
 * Original: 0x004D2CB5 - 0x004D2CD7 (34 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D2CB5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D2CB5: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D2CD2; /* je: equal / zero */

loc_004D2CBE: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D2CC5u); RECOMP_ABI_CALL(0x004D08ACu, sub_004D08AC); /* call 0x004D08AC */

loc_004D2CC5: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    ecx = MEM32(0x90E4BC);
    PUSH32(esp, 0x004D2CD2u); RECOMP_ABI_CALL(0x004D2C90u, sub_004D2C90); /* call 0x004D2C90 */

loc_004D2CD2: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D2CD7
 * Original: 0x004D2CD7 - 0x004D2CF3 (28 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D2CD7(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D2CD7: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004D2CDFu); RECOMP_ABI_CALL(0x004D2C74u, sub_004D2C74); /* call 0x004D2C74 */

loc_004D2CDF: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004D2CED; /* je: equal / zero */

loc_004D2CE6: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004D2CECu); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_004D2CEC: ;
    POP32(esp, ecx);

loc_004D2CED: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D2CF3
 * Original: 0x004D2CF3 - 0x004D2D71 (126 bytes, 39 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D2CF3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D2CF3: ;
    eax = ecx + 0xC;
    PUSH32(esp, 0x869F2C);
    MEM32(0x90E4BC) = eax;
    PUSH32(esp, 0x004D2D05u); RECOMP_ABI_CALL(0x004D0838u, sub_004D0838); /* call 0x004D0838 */

loc_004D2D05: ;
    esp += 4; return; /* ret */

    ecx = MEM32(ecx + 4);
    g_seh_ebp = ebp; sub_004CAA52(); return; /* tail jmp 0x004CAA52 */

    ecx = MEM32(ecx + 4);
    g_seh_ebp = ebp; sub_004CAA5D(); return; /* tail jmp 0x004CAA5D */

    ecx = MEM32(ecx + 4);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 4)); return; /* indirect tail jmp */

    ecx = MEM32(ecx + 4);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 8)); return; /* indirect tail jmp */

    ecx = MEM32(ecx + 4);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0xC)); return; /* indirect tail jmp */

    ecx = MEM32(ecx + 4);
    g_seh_ebp = ebp; sub_004CA9AA(); return; /* tail jmp 0x004CA9AA */

    ecx = MEM32(ecx + 4);
    g_seh_ebp = ebp; sub_004CA8FE(); return; /* tail jmp 0x004CA8FE */

}

/**
 * sub_004D2D71
 * Original: 0x004D2D71 - 0x004D2E0D (156 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004D2D71(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D2D71: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 3);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D2D80u); RECOMP_ABI_CALL(0x00508130u, sub_00508130); /* call 0x00508130 */

loc_004D2D80: ;
    POP32(esp, ecx);
    PUSH32(esp, MEM32(0x8D7E00));
    ecx = ebp + -12;
    edi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D2D91u); RECOMP_ABI_CALL(0x00504C60u, sub_00504C60); /* call 0x00504C60 */

loc_004D2D91: ;
    PUSH32(esp, MEM32(0x8D7E04));
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D2D9Fu); RECOMP_ABI_CALL(0x00504C60u, sub_00504C60); /* call 0x00504C60 */

loc_004D2D9F: ;
    PUSH32(esp, MEM32(0x8D7E08));
    ecx = ebp + -4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D2DADu); RECOMP_ABI_CALL(0x00504C60u, sub_00504C60); /* call 0x00504C60 */

loc_004D2DAD: ;
    esi = MEM32(ebp + 8);
    PUSH32(esp, MEM32(esi));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D2DB7u); RECOMP_ABI_CALL(0x004D0808u, sub_004D0808); /* call 0x004D0808 */

loc_004D2DB7: ;
    PUSH32(esp, eax);
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D2DC2u); RECOMP_ABI_CALL(0x005058B0u, sub_005058B0); /* call 0x005058B0 */

loc_004D2DC2: ;
    eax = esi + 4;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D2DCBu); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004D2DCB: ;
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D2DD6u); RECOMP_ABI_CALL(0x005058B0u, sub_005058B0); /* call 0x005058B0 */

loc_004D2DD6: ;
    PUSH32(esp, MEM32(esi + 0x30C));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D2DE1u); RECOMP_ABI_CALL(0x004D0808u, sub_004D0808); /* call 0x004D0808 */

loc_004D2DE1: ;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D2DECu); RECOMP_ABI_CALL(0x005058B0u, sub_005058B0); /* call 0x005058B0 */

loc_004D2DEC: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ebp + -4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D2DF7u); RECOMP_ABI_CALL(0x00504C90u, sub_00504C90); /* call 0x00504C90 */

loc_004D2DF7: ;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D2DFFu); RECOMP_ABI_CALL(0x00504C90u, sub_00504C90); /* call 0x00504C90 */

loc_004D2DFF: ;
    ecx = ebp + -12;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D2E07u); RECOMP_ABI_CALL(0x00504C90u, sub_00504C90); /* call 0x00504C90 */

loc_004D2E07: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004D2E0D
 * Original: 0x004D2E0D - 0x004D2E7B (110 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004D2E0D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D2E0D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 2);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D2E1Bu); RECOMP_ABI_CALL(0x00508130u, sub_00508130); /* call 0x00508130 */

loc_004D2E1B: ;
    POP32(esp, ecx);
    PUSH32(esp, MEM32(0x8D7DF8));
    ecx = ebp + -8;
    esi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D2E2Cu); RECOMP_ABI_CALL(0x00504C60u, sub_00504C60); /* call 0x00504C60 */

loc_004D2E2C: ;
    PUSH32(esp, MEM32(0x8D7DFC));
    ecx = ebp + -4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D2E3Au); RECOMP_ABI_CALL(0x00504C60u, sub_00504C60); /* call 0x00504C60 */

loc_004D2E3A: ;
    edi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D2E43u); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004D2E43: ;
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D2E4Eu); RECOMP_ABI_CALL(0x005058B0u, sub_005058B0); /* call 0x005058B0 */

loc_004D2E4E: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D2E57u); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004D2E57: ;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D2E62u); RECOMP_ABI_CALL(0x005058B0u, sub_005058B0); /* call 0x005058B0 */

loc_004D2E62: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ebp + -4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D2E6Du); RECOMP_ABI_CALL(0x00504C90u, sub_00504C90); /* call 0x00504C90 */

loc_004D2E6D: ;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D2E75u); RECOMP_ABI_CALL(0x00504C90u, sub_00504C90); /* call 0x00504C90 */

loc_004D2E75: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004D2E7B
 * Original: 0x004D2E7B - 0x004D2E88 (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D2E7B(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D2E7B: ;
    eax = ecx;
    MEM32(eax + 4) = MEM32(eax + 4) & 0;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax) = 0x869F54;
    esp += 4; return; /* ret */

}

/**
 * sub_004D2E88
 * Original: 0x004D2E88 - 0x004D2EBE (54 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D2E88(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D2E88: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004D2E90u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004D2E90: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x698);
    PUSH32(esp, 0x004D2E9Fu); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004D2E9F: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D2EAF; /* je: equal / zero */

loc_004D2EA6: ;
    ecx = eax;
    PUSH32(esp, 0x004D2EADu); RECOMP_ABI_CALL(0x004CA7E0u, sub_004CA7E0); /* call 0x004CA7E0 */

loc_004D2EAD: ;
    goto loc_004D2EB1;

loc_004D2EAF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004D2EB1: ;
    PUSH32(esp, esi);
    ecx = eax;
    MEM32(esi + 4) = eax;
    PUSH32(esp, 0x004D2EBCu); RECOMP_ABI_CALL(0x004C1880u, sub_004C1880); /* call 0x004C1880 */

loc_004D2EBC: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004D2EBE
 * Original: 0x004D2EBE - 0x004D2EDD (31 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D2EBE(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D2EBE: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004D2ECAu); RECOMP_ABI_CALL(0x004C1895u, sub_004C1895); /* call 0x004C1895 */

loc_004D2ECA: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D2ED7; /* je: equal / zero */

loc_004D2ED1: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004D2ED7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D2ED5u); } /* indirect call */
    }

loc_004D2ED7: ;
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004D2EDD
 * Original: 0x004D2EDD - 0x004D2EF7 (26 bytes, 7 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D2EDD(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D2EDD: ;
    PUSH32(esp, MEM32(esp + 0xC));
    eax = MEM32(esp + 8);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, MEM32(eax + 0x14));
    PUSH32(esp, 0x004D2EF1u); RECOMP_ABI_CALL(0x004D0020u, sub_004D0020); /* call 0x004D0020 */

loc_004D2EF1: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004D2EF7
 * Original: 0x004D2EF7 - 0x004D2F18 (33 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D2EF7(void)
{

loc_004D2EF7: ;
    PUSH32(esp, 0x004D2EFCu); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004D2EFC: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x004D2F03u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D2F00u); } /* indirect call */
    }

loc_004D2F03: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 4));
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004D2F0Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D2F0Bu); } /* indirect call */
    }

loc_004D2F0E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D2F14u); RECOMP_ABI_CALL(0x004CA8EFu, sub_004CA8EF); /* call 0x004CA8EF */

loc_004D2F14: ;
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D2F18
 * Original: 0x004D2F18 - 0x004D2F31 (25 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D2F18(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D2F18: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D2F2C; /* je: equal / zero */

loc_004D2F21: ;
    ecx = MEM32(0x90E4C0);
    PUSH32(esp, 0x004D2F2Cu); RECOMP_ABI_CALL(0x004D2E88u, sub_004D2E88); /* call 0x004D2E88 */

loc_004D2F2C: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D2F31
 * Original: 0x004D2F31 - 0x004D2F4A (25 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D2F31(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D2F31: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D2F45; /* je: equal / zero */

loc_004D2F3A: ;
    ecx = MEM32(0x90E4C0);
    PUSH32(esp, 0x004D2F45u); RECOMP_ABI_CALL(0x004D2EBEu, sub_004D2EBE); /* call 0x004D2EBE */

loc_004D2F45: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D2F4A
 * Original: 0x004D2F4A - 0x004D2F6D (35 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D2F4A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D2F4A: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D2F58; /* jne: not equal / not zero */

loc_004D2F53: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D2F58: ;
    eax = MEM32(0x90E4C0);
    eax = MEM32(eax + 4);
    _fb = (uint32_t)(0x63C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x63C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D2F6Bu); RECOMP_ABI_CALL(0x004D2E0Du, sub_004D2E0D); /* call 0x004D2E0D */

loc_004D2F6B: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D2F6D
 * Original: 0x004D2F6D - 0x004D2F8E (33 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D2F6D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D2F6D: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D2F7B; /* jne: not equal / not zero */

loc_004D2F76: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D2F7B: ;
    eax = MEM32(0x90E4C0);
    eax = MEM32(eax + 4);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D2F8Cu); RECOMP_ABI_CALL(0x004D2D71u, sub_004D2D71); /* call 0x004D2D71 */

loc_004D2F8C: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D2F8E
 * Original: 0x004D2F8E - 0x004D2FB1 (35 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D2F8E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D2F8E: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D2F9C; /* jne: not equal / not zero */

loc_004D2F97: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D2F9C: ;
    eax = MEM32(0x90E4C0);
    eax = MEM32(eax + 4);
    _fb = (uint32_t)(0x32C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x32C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D2FAFu); RECOMP_ABI_CALL(0x004D2D71u, sub_004D2D71); /* call 0x004D2D71 */

loc_004D2FAF: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D2FB1
 * Original: 0x004D2FB1 - 0x004D2FCC (27 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D2FB1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D2FB1: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D2FC7; /* je: equal / zero */

loc_004D2FBA: ;
    eax = MEM32(0x90E4C0);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x004D2FC7u); RECOMP_ABI_CALL(0x004CAA41u, sub_004CAA41); /* call 0x004CAA41 */

loc_004D2FC7: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D2FCC
 * Original: 0x004D2FCC - 0x004D2FEF (35 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D2FCC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D2FCC: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D2FDA; /* jne: not equal / not zero */

loc_004D2FD5: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D2FDA: ;
    eax = MEM32(0x90E4C0);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x004D2FE7u); RECOMP_ABI_CALL(0x004CAA52u, sub_004CAA52); /* call 0x004CAA52 */

loc_004D2FE7: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D2FEDu); RECOMP_ABI_CALL(0x004D080Du, sub_004D080D); /* call 0x004D080D */

loc_004D2FED: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D2FEF
 * Original: 0x004D2FEF - 0x004D3012 (35 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D2FEF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D2FEF: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D2FFD; /* jne: not equal / not zero */

loc_004D2FF8: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D2FFD: ;
    eax = MEM32(0x90E4C0);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x004D300Au); RECOMP_ABI_CALL(0x004CAA5Du, sub_004CAA5D); /* call 0x004CAA5D */

loc_004D300A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D3010u); RECOMP_ABI_CALL(0x004D080Du, sub_004D080D); /* call 0x004D080D */

loc_004D3010: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D3012
 * Original: 0x004D3012 - 0x004D3035 (35 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D3012(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D3012: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D3020; /* jne: not equal / not zero */

loc_004D301B: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D3020: ;
    eax = MEM32(0x90E4C0);
    ecx = MEM32(eax + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004D302Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D302Au); } /* indirect call */
    }

loc_004D302D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D3033u); RECOMP_ABI_CALL(0x004D0808u, sub_004D0808); /* call 0x004D0808 */

loc_004D3033: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D3035
 * Original: 0x004D3035 - 0x004D3058 (35 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D3035(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D3035: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D3043; /* jne: not equal / not zero */

loc_004D303E: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D3043: ;
    eax = MEM32(0x90E4C0);
    ecx = MEM32(eax + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004D3050u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D304Du); } /* indirect call */
    }

loc_004D3050: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D3056u); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004D3056: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D3058
 * Original: 0x004D3058 - 0x004D307D (37 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D3058(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D3058: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D3078; /* je: equal / zero */

loc_004D3061: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D3068u); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D3068: ;
    POP32(esp, ecx);
    ecx = MEM32(0x90E4C0);
    ecx = MEM32(ecx + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x004D3078u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D3075u); } /* indirect call */
    }

loc_004D3078: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D307D
 * Original: 0x004D307D - 0x004D309F (34 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D307D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D307D: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D309A; /* je: equal / zero */

loc_004D3086: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D308Du); RECOMP_ABI_CALL(0x004D08ACu, sub_004D08AC); /* call 0x004D08AC */

loc_004D308D: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    ecx = MEM32(0x90E4C0);
    PUSH32(esp, 0x004D309Au); RECOMP_ABI_CALL(0x004D2EF7u, sub_004D2EF7); /* call 0x004D2EF7 */

loc_004D309A: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D309F
 * Original: 0x004D309F - 0x004D30CB (44 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D309F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D309F: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D30AD; /* jne: not equal / not zero */

loc_004D30A8: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D30AD: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D30B4u); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D30B4: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    eax = MEM32(0x90E4C0);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x004D30C3u); RECOMP_ABI_CALL(0x004CA9AAu, sub_004CA9AA); /* call 0x004CA9AA */

loc_004D30C3: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D30C9u); RECOMP_ABI_CALL(0x004D0808u, sub_004D0808); /* call 0x004D0808 */

loc_004D30C9: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D30CB
 * Original: 0x004D30CB - 0x004D30EF (36 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D30CB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D30CB: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D30EA; /* je: equal / zero */

loc_004D30D4: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D30DBu); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D30DB: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    eax = MEM32(0x90E4C0);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x004D30EAu); RECOMP_ABI_CALL(0x004CA8FEu, sub_004CA8FE); /* call 0x004CA8FE */

loc_004D30EA: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D30EF
 * Original: 0x004D30EF - 0x004D310B (28 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D30EF(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D30EF: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 0 (32-bit) */
    MEM32(esi) = 0x869F54;
    if (CMP_EQ(_fa, _fb)) goto loc_004D3103; /* je: equal / zero */

loc_004D30FE: ;
    PUSH32(esp, 0x004D3103u); RECOMP_ABI_CALL(0x004D2EBEu, sub_004D2EBE); /* call 0x004D2EBE */

loc_004D3103: ;
    MEM32(esi) = 0x8694A4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004D310B
 * Original: 0x004D310B - 0x004D311E (19 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D310B(void)
{

loc_004D310B: ;
    eax = ecx + 0xC;
    PUSH32(esp, 0x86A050);
    MEM32(0x90E4C0) = eax;
    PUSH32(esp, 0x004D311Du); RECOMP_ABI_CALL(0x004D0838u, sub_004D0838); /* call 0x004D0838 */

loc_004D311D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004D311E
 * Original: 0x004D311E - 0x004D313A (28 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D311E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D311E: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004D3126u); RECOMP_ABI_CALL(0x004D30EFu, sub_004D30EF); /* call 0x004D30EF */

loc_004D3126: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004D3134; /* je: equal / zero */

loc_004D312D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004D3133u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_004D3133: ;
    POP32(esp, ecx);

loc_004D3134: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D3144
 * Original: 0x004D3144 - 0x004D3151 (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D3144(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D3144: ;
    eax = ecx;
    MEM32(eax + 0x10) = MEM32(eax + 0x10) & 0;
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax) = 0x86A0C8;
    esp += 4; return; /* ret */

}

/**
 * sub_004D3151
 * Original: 0x004D3151 - 0x004D31AD (92 bytes, 32 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D3151(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D3151: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 4) = eax;
    MEM32(0x90E41C) = eax;
    PUSH32(esp, 0x004D3165u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004D3165: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1C4);
    PUSH32(esp, 0x004D3174u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004D3174: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D3184; /* je: equal / zero */

loc_004D317B: ;
    ecx = eax;
    PUSH32(esp, 0x004D3182u); RECOMP_ABI_CALL(0x004C8928u, sub_004C8928); /* call 0x004C8928 */

loc_004D3182: ;
    goto loc_004D3186;

loc_004D3184: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004D3186: ;
    MEM32(esi + 0x10) = eax;
    PUSH32(esp, 0x004D318Eu); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004D318E: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x004D3195u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D3192u); } /* indirect call */
    }

loc_004D3195: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 0xC));
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x004D31A0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D319Du); } /* indirect call */
    }

loc_004D31A0: ;
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004D31A9u); RECOMP_ABI_CALL(0x004C1880u, sub_004C1880); /* call 0x004C1880 */

loc_004D31A9: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004D31AD
 * Original: 0x004D31AD - 0x004D31CC (31 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D31AD(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D31AD: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004D31B9u); RECOMP_ABI_CALL(0x004C1895u, sub_004C1895); /* call 0x004C1895 */

loc_004D31B9: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D31C6; /* je: equal / zero */

loc_004D31C0: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004D31C6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D31C4u); } /* indirect call */
    }

loc_004D31C6: ;
    MEM32(esi + 0x10) = MEM32(esi + 0x10) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004D31D4
 * Original: 0x004D31D4 - 0x004D31F3 (31 bytes, 10 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D31D4(void)
{

loc_004D31D4: ;
    PUSH32(esp, MEM32(esp + 0xC));
    edx = MEM32(esp + 0xC);
    eax = MEM32(esp + 8);
    PUSH32(esp, edx);
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = edx;
    ecx = MEM32(ecx + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D31F0u); RECOMP_ABI_CALL(0x004C84B7u, sub_004C84B7); /* call 0x004C84B7 */

loc_004D31F0: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004D31F3
 * Original: 0x004D31F3 - 0x004D3217 (36 bytes, 12 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D31F3(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D31F3: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    edx = MEM32(esp + 4);
    MEM32(ecx + 8) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_004D3206; /* je: equal / zero */

loc_004D3203: ;
    MEM32(ecx + 0xC) = eax;

loc_004D3206: ;
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = MEM32(ecx + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x004D3214u); RECOMP_ABI_CALL(0x004C851Au, sub_004C851A); /* call 0x004C851A */

loc_004D3214: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004D323F
 * Original: 0x004D323F - 0x004D325E (31 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D323F(void)
{

loc_004D323F: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 8));
    esi = ecx;
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, 0x004D324Eu); RECOMP_ABI_CALL(0x004C8904u, sub_004C8904); /* call 0x004C8904 */

loc_004D324E: ;
    PUSH32(esp, MEM32(esp + 8));
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, 0x004D325Au); RECOMP_ABI_CALL(0x004C875Bu, sub_004C875B); /* call 0x004C875B */

loc_004D325A: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D325E
 * Original: 0x004D325E - 0x004D3278 (26 bytes, 7 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D325E(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D325E: ;
    PUSH32(esp, MEM32(esp + 0xC));
    eax = MEM32(esp + 8);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, MEM32(eax + 0x14));
    PUSH32(esp, 0x004D3272u); RECOMP_ABI_CALL(0x004D0020u, sub_004D0020); /* call 0x004D0020 */

loc_004D3272: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004D3278
 * Original: 0x004D3278 - 0x004D32A3 (43 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D3278(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D3278: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D329E; /* je: equal / zero */

loc_004D3281: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x004D3288u); RECOMP_ABI_CALL(0x004D08ACu, sub_004D08AC); /* call 0x004D08AC */

loc_004D3288: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D3291u); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D3291: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    ecx = MEM32(0x90E4C4);
    PUSH32(esp, 0x004D329Eu); RECOMP_ABI_CALL(0x004D3151u, sub_004D3151); /* call 0x004D3151 */

loc_004D329E: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D32A3
 * Original: 0x004D32A3 - 0x004D32BC (25 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D32A3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D32A3: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D32B7; /* je: equal / zero */

loc_004D32AC: ;
    ecx = MEM32(0x90E4C4);
    PUSH32(esp, 0x004D32B7u); RECOMP_ABI_CALL(0x004D31ADu, sub_004D31AD); /* call 0x004D31AD */

loc_004D32B7: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D32BC
 * Original: 0x004D32BC - 0x004D32DF (35 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D32BC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D32BC: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D32CA; /* jne: not equal / not zero */

loc_004D32C5: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D32CA: ;
    eax = MEM32(0x90E4C4);
    ecx = MEM32(eax + 0x10);
    PUSH32(esp, 0x004D32D7u); RECOMP_ABI_CALL(0x004C841Fu, sub_004C841F); /* call 0x004C841F */

loc_004D32D7: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D32DDu); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004D32DD: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D32DF
 * Original: 0x004D32DF - 0x004D3313 (52 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D32DF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D32DF: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D330E; /* je: equal / zero */

loc_004D32E8: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x004D32EFu); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D32EF: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 0x004D32F8u); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D32F8: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D3301u); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D3301: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    ecx = MEM32(0x90E4C4);
    PUSH32(esp, 0x004D330Eu); RECOMP_ABI_CALL(0x004D31D4u, sub_004D31D4); /* call 0x004D31D4 */

loc_004D330E: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D3313
 * Original: 0x004D3313 - 0x004D3336 (35 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D3313(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D3313: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D3321; /* jne: not equal / not zero */

loc_004D331C: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D3321: ;
    eax = MEM32(0x90E4C4);
    ecx = MEM32(eax + 0x10);
    PUSH32(esp, 0x004D332Eu); RECOMP_ABI_CALL(0x004C8642u, sub_004C8642); /* call 0x004C8642 */

loc_004D332E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D3334u); RECOMP_ABI_CALL(0x004D0803u, sub_004D0803); /* call 0x004D0803 */

loc_004D3334: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D3336
 * Original: 0x004D3336 - 0x004D3359 (35 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D3336(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D3336: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D3344; /* jne: not equal / not zero */

loc_004D333F: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D3344: ;
    eax = MEM32(0x90E4C4);
    ecx = MEM32(eax + 0x10);
    PUSH32(esp, 0x004D3351u); RECOMP_ABI_CALL(0x004C8651u, sub_004C8651); /* call 0x004C8651 */

loc_004D3351: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D3357u); RECOMP_ABI_CALL(0x004D0803u, sub_004D0803); /* call 0x004D0803 */

loc_004D3357: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D3359
 * Original: 0x004D3359 - 0x004D3392 (57 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D3359(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D3359: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D3367; /* jne: not equal / not zero */

loc_004D3362: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D3367: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x004D336Fu); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D336F: ;
    PUSH32(esp, 0);
    esi = eax;
    PUSH32(esp, 0x004D3378u); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D3378: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = MEM32(0x90E4C4);
    ecx = MEM32(eax + 0x10);
    PUSH32(esp, 0x004D3389u); RECOMP_ABI_CALL(0x004C8659u, sub_004C8659); /* call 0x004C8659 */

loc_004D3389: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D338Fu); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004D338F: ;
    POP32(esp, ecx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004D3392
 * Original: 0x004D3392 - 0x004D33CB (57 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D3392(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D3392: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D33A0; /* jne: not equal / not zero */

loc_004D339B: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D33A0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x004D33A8u); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D33A8: ;
    PUSH32(esp, 0);
    esi = eax;
    PUSH32(esp, 0x004D33B1u); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D33B1: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = MEM32(0x90E4C4);
    ecx = MEM32(eax + 0x10);
    PUSH32(esp, 0x004D33C2u); RECOMP_ABI_CALL(0x004C8676u, sub_004C8676); /* call 0x004C8676 */

loc_004D33C2: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D33C8u); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004D33C8: ;
    POP32(esp, ecx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004D33CB
 * Original: 0x004D33CB - 0x004D33F7 (44 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D33CB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D33CB: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D33D9; /* jne: not equal / not zero */

loc_004D33D4: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D33D9: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D33E0u); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D33E0: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    eax = MEM32(0x90E4C4);
    ecx = MEM32(eax + 0x10);
    PUSH32(esp, 0x004D33EFu); RECOMP_ABI_CALL(0x004CD8F2u, sub_004CD8F2); /* call 0x004CD8F2 */

loc_004D33EF: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D33F5u); RECOMP_ABI_CALL(0x004D080Du, sub_004D080D); /* call 0x004D080D */

loc_004D33F5: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D33F7
 * Original: 0x004D33F7 - 0x004D3421 (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D33F7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D33F7: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D3405; /* jne: not equal / not zero */

loc_004D3400: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D3405: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D340Cu); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D340C: ;
    POP32(esp, ecx);
    ecx = MEM32(0x90E4C4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D3419u); RECOMP_ABI_CALL(0x004D323Fu, sub_004D323F); /* call 0x004D323F */

loc_004D3419: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D341Fu); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004D341F: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D3421
 * Original: 0x004D3421 - 0x004D345D (60 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D3421(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D3421: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D342F; /* jne: not equal / not zero */

loc_004D342A: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D342F: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x004D3436u); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D3436: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 0x004D343Fu); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D343F: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D3448u); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D3448: ;
    POP32(esp, ecx);
    ecx = MEM32(0x90E4C4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D3455u); RECOMP_ABI_CALL(0x004D31F3u, sub_004D31F3); /* call 0x004D31F3 */

loc_004D3455: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D345Bu); RECOMP_ABI_CALL(0x004D0803u, sub_004D0803); /* call 0x004D0803 */

loc_004D345B: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D345D
 * Original: 0x004D345D - 0x004D3479 (28 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D345D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D345D: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), 0 (32-bit) */
    MEM32(esi) = 0x86A0C8;
    if (CMP_EQ(_fa, _fb)) goto loc_004D3471; /* je: equal / zero */

loc_004D346C: ;
    PUSH32(esp, 0x004D3471u); RECOMP_ABI_CALL(0x004D31ADu, sub_004D31AD); /* call 0x004D31AD */

loc_004D3471: ;
    MEM32(esi) = 0x8694A4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004D3479
 * Original: 0x004D3479 - 0x004D34C5 (76 bytes, 34 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004D3479(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D3479: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = ebp + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D3488u); RECOMP_ABI_CALL(0x004C63DBu, sub_004C63DB); /* call 0x004C63DB */

loc_004D3488: ;
    edi = eax;
    PUSH32(esp, edi);
    ecx = ebp + -4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D3493u); RECOMP_ABI_CALL(0x004DB7FCu, sub_004DB7FC); /* call 0x004DB7FC */

loc_004D3493: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_004D34B7; /* jle: less or equal (signed <=) */

loc_004D3499: ;
    PUSH32(esp, esi);
    ecx = ebp + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D34A2u); RECOMP_ABI_CALL(0x004C63F2u, sub_004C63F2); /* call 0x004C63F2 */

loc_004D34A2: ;
    MEM32(ebp + -8) = eax;
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = ebp + -4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D34B2u); RECOMP_ABI_CALL(0x004DB81Eu, sub_004DB81E); /* call 0x004DB81E */

loc_004D34B2: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004D3499; /* jl: less (signed <) */

loc_004D34B7: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -4);
    POP32(esp, edi);
    MEM32(eax) = ecx;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D34C5
 * Original: 0x004D34C5 - 0x004D3515 (80 bytes, 37 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004D34C5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D34C5: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D34D7u); RECOMP_ABI_CALL(0x004C842Bu, sub_004C842B); /* call 0x004C842B */

loc_004D34D7: ;
    ebx = eax;
    PUSH32(esp, ebx);
    ecx = ebp + -4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D34E2u); RECOMP_ABI_CALL(0x004DB7FCu, sub_004DB7FC); /* call 0x004DB7FC */

loc_004D34E2: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004D3506; /* jbe: below or equal (unsigned <=) */

loc_004D34E8: ;
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D34F1u); RECOMP_ABI_CALL(0x004C843Bu, sub_004C843B); /* call 0x004C843B */

loc_004D34F1: ;
    MEM32(ebp + -8) = eax;
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = ebp + -4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D3501u); RECOMP_ABI_CALL(0x004DB81Eu, sub_004DB81E); /* call 0x004DB81E */

loc_004D3501: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004D34E8; /* jb: below (unsigned <) */

loc_004D3506: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax) = ecx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D3515
 * Original: 0x004D3515 - 0x004D356B (86 bytes, 39 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004D3515(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D3515: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0xC));
    esi = ecx;
    ecx = MEM32(esi + 0x10);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D352Au); RECOMP_ABI_CALL(0x004C845Du, sub_004C845D); /* call 0x004C845D */

loc_004D352A: ;
    ebx = eax;
    PUSH32(esp, ebx);
    ecx = ebp + -4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D3535u); RECOMP_ABI_CALL(0x004DB7FCu, sub_004DB7FC); /* call 0x004DB7FC */

loc_004D3535: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004D355C; /* jbe: below or equal (unsigned <=) */

loc_004D353B: ;
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D3547u); RECOMP_ABI_CALL(0x004C8482u, sub_004C8482); /* call 0x004C8482 */

loc_004D3547: ;
    MEM32(ebp + -8) = eax;
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = ebp + -4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D3557u); RECOMP_ABI_CALL(0x004DB81Eu, sub_004DB81E); /* call 0x004DB81E */

loc_004D3557: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004D353B; /* jb: below (unsigned <) */

loc_004D355C: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax) = ecx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004D356B
 * Original: 0x004D356B - 0x004D3672 (263 bytes, 94 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004D356B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D356B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8E19F0);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, edi);
    MEM32(ebp + -4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D3586u); RECOMP_ABI_CALL(0x004C8651u, sub_004C8651); /* call 0x004C8651 */

loc_004D3586: ;
    edi = eax;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, eax);
    ecx = ebp + -40;
    MEM32(ebp + -60) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D3597u); RECOMP_ABI_CALL(0x004DB7FCu, sub_004DB7FC); /* call 0x004DB7FC */

loc_004D3597: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_004D365B; /* jle: less or equal (signed <=) */

loc_004D35A1: ;
    ecx = MEM32(esi + 0x10);
    edi = ebx;
    PUSH32(esp, ebx);
    { uint32_t _sv=(uint32_t)(edi), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        edi = _sv << _sc;
        _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D35AFu); RECOMP_ABI_CALL(0x004C8733u, sub_004C8733); /* call 0x004C8733 */

loc_004D35AF: ;
    MEM32(ebp + -56) = eax;
    eax = ebp + -56;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = ebp + -40;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D35BFu); RECOMP_ABI_CALL(0x004DB81Eu, sub_004DB81E); /* call 0x004DB81E */

loc_004D35BF: ;
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D35C8u); RECOMP_ABI_CALL(0x004C8747u, sub_004C8747); /* call 0x004C8747 */

loc_004D35C8: ;
    MEM32(ebp + -68) = eax;
    eax = ebp + -68;
    PUSH32(esp, eax);
    eax = edi + 1;
    PUSH32(esp, eax);
    ecx = ebp + -40;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D35DBu); RECOMP_ABI_CALL(0x004DB81Eu, sub_004DB81E); /* call 0x004DB81E */

loc_004D35DB: ;
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D35E4u); RECOMP_ABI_CALL(0x004C870Bu, sub_004C870B); /* call 0x004C870B */

loc_004D35E4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8238C8);
    eax = ebp + -36;
    PUSH32(esp, 0x20);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D35F5u); RECOMP_ABI_CALL(0x004E3665u, sub_004E3665); /* call 0x004E3665 */

loc_004D35F5: ;
    eax = ebp + -36;
    MEM32(ebp + -64) = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ebp + -64;
    PUSH32(esp, eax);
    eax = edi + 2;
    PUSH32(esp, eax);
    ecx = ebp + -40;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D360Eu); RECOMP_ABI_CALL(0x004DB81Eu, sub_004DB81E); /* call 0x004DB81E */

loc_004D360E: ;
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D3617u); RECOMP_ABI_CALL(0x004C8693u, sub_004C8693); /* call 0x004C8693 */

loc_004D3617: ;
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_004D363A; /* je: equal / zero */

loc_004D361C: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_004D362E; /* je: equal / zero */

loc_004D361F: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_004D3651; /* jne: not equal / not zero */

loc_004D3622: ;
    MEM32(ebp + -44) = 0x7ED954;
    eax = ebp + -44;
    goto loc_004D3644;

loc_004D362E: ;
    MEM32(ebp + -48) = 0x7ED92C;
    eax = ebp + -48;
    goto loc_004D3644;

loc_004D363A: ;
    MEM32(ebp + -52) = 0x7ED98C;
    eax = ebp + -52;

loc_004D3644: ;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 3;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = ebp + -40;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D3651u); RECOMP_ABI_CALL(0x004DB81Eu, sub_004DB81E); /* call 0x004DB81E */

loc_004D3651: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -60)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ebp + -60) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004D35A1; /* jl: less (signed <) */

loc_004D365B: ;
    ecx = MEM32(ebp + -40);
    eax = MEM32(ebp + 8);
    POP32(esp, edi);
    MEM32(eax) = ecx;
    ecx = MEM32(ebp + -4);
    POP32(esp, esi);
    POP32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D366Eu); RECOMP_ABI_CALL(0x005CFF80u, sub_005CFF80); /* call 0x005CFF80 */

loc_004D366E: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D3672
 * Original: 0x004D3672 - 0x004D36C4 (82 bytes, 38 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004D3672(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D3672: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D3684u); RECOMP_ABI_CALL(0x004C8651u, sub_004C8651); /* call 0x004C8651 */

loc_004D3684: ;
    ebx = eax;
    PUSH32(esp, ebx);
    ecx = ebp + -4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D368Fu); RECOMP_ABI_CALL(0x004DB7FCu, sub_004DB7FC); /* call 0x004DB7FC */

loc_004D368F: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_004D36B5; /* jle: less or equal (signed <=) */

loc_004D3695: ;
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, 0xFFFFFFFFu);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D36A0u); RECOMP_ABI_CALL(0x004C8659u, sub_004C8659); /* call 0x004C8659 */

loc_004D36A0: ;
    MEM32(ebp + -8) = eax;
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = ebp + -4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D36B0u); RECOMP_ABI_CALL(0x004DB81Eu, sub_004DB81E); /* call 0x004DB81E */

loc_004D36B0: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004D3695; /* jl: less (signed <) */

loc_004D36B5: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax) = ecx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D36C4
 * Original: 0x004D36C4 - 0x004D3737 (115 bytes, 51 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004D36C4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D36C4: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 0x14);
    _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x10);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(ebp + 0x18);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    PUSH32(esp, eax);
    ecx = ebp + 0x10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D36EDu); RECOMP_ABI_CALL(0x004DB7FCu, sub_004DB7FC); /* call 0x004DB7FC */

loc_004D36ED: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ebp + 0x18) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_004D3729; /* jg: greater (signed >) */

loc_004D36F2: ;
    PUSH32(esp, esi);

loc_004D36F3: ;
    esi = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_004D3722; /* jg: greater (signed >) */

loc_004D36FD: ;
    ecx = MEM32(edi + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D3707u); RECOMP_ABI_CALL(0x004C8659u, sub_004C8659); /* call 0x004C8659 */

loc_004D3707: ;
    MEM32(ebp + -8) = eax;
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -4));
    ecx = ebp + 0x10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D3719u); RECOMP_ABI_CALL(0x004DB81Eu, sub_004DB81E); /* call 0x004DB81E */

loc_004D3719: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + 0x14) (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_004D36FD; /* jle: less or equal (signed <=) */

loc_004D3722: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ebp + 0x18) (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_004D36F3; /* jle: less or equal (signed <=) */

loc_004D3728: ;
    POP32(esp, esi);

loc_004D3729: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0x10);
    POP32(esp, edi);
    MEM32(eax) = ecx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_004D3737
 * Original: 0x004D3737 - 0x004D378B (84 bytes, 32 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004D3737(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D3737: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ecx + 0x10);
    eax = ebp + -1;
    PUSH32(esp, eax);
    eax = ebp + -12;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D374Du); RECOMP_ABI_CALL(0x004C1472u, sub_004C1472); /* call 0x004C1472 */

loc_004D374D: ;
    PUSH32(esp, 2);
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D3757u); RECOMP_ABI_CALL(0x004DB780u, sub_004DB780); /* call 0x004DB780 */

loc_004D3757: ;
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D3765u); RECOMP_ABI_CALL(0x004DB7A2u, sub_004DB7A2); /* call 0x004DB7A2 */

loc_004D3765: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(ebp + -1)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -1), LO8(eax) (8-bit) */
    ecx = ebp + -8;
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -16) = eax;
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D377Fu); RECOMP_ABI_CALL(0x004DB7A2u, sub_004DB7A2); /* call 0x004DB7A2 */

loc_004D377F: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -8);
    MEM32(eax) = ecx;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D378B
 * Original: 0x004D378B - 0x004D37AF (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D378B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D378B: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D379C; /* jne: not equal / not zero */

loc_004D3795: ;
    PUSH32(esp, 0x004D379Au); RECOMP_ABI_CALL(0x004D07EBu, sub_004D07EB); /* call 0x004D07EB */

loc_004D379A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_004D379C: ;
    ecx = MEM32(0x90E4C4);
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D37ABu); RECOMP_ABI_CALL(0x004D3479u, sub_004D3479); /* call 0x004D3479 */

loc_004D37AB: ;
    eax = MEM32(eax);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D37AF
 * Original: 0x004D37AF - 0x004D37D3 (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D37AF(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D37AF: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D37C0; /* jne: not equal / not zero */

loc_004D37B9: ;
    PUSH32(esp, 0x004D37BEu); RECOMP_ABI_CALL(0x004D07EBu, sub_004D07EB); /* call 0x004D07EB */

loc_004D37BE: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_004D37C0: ;
    ecx = MEM32(0x90E4C4);
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D37CFu); RECOMP_ABI_CALL(0x004D34C5u, sub_004D34C5); /* call 0x004D34C5 */

loc_004D37CF: ;
    eax = MEM32(eax);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D37D3
 * Original: 0x004D37D3 - 0x004D3801 (46 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D37D3(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D37D3: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D37E4; /* jne: not equal / not zero */

loc_004D37DD: ;
    PUSH32(esp, 0x004D37E2u); RECOMP_ABI_CALL(0x004D07EBu, sub_004D07EB); /* call 0x004D07EB */

loc_004D37E2: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_004D37E4: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D37EBu); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D37EB: ;
    POP32(esp, ecx);
    ecx = MEM32(0x90E4C4);
    PUSH32(esp, eax);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D37FDu); RECOMP_ABI_CALL(0x004D3515u, sub_004D3515); /* call 0x004D3515 */

loc_004D37FD: ;
    eax = MEM32(eax);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D3801
 * Original: 0x004D3801 - 0x004D3825 (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D3801(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D3801: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D3812; /* jne: not equal / not zero */

loc_004D380B: ;
    PUSH32(esp, 0x004D3810u); RECOMP_ABI_CALL(0x004D07EBu, sub_004D07EB); /* call 0x004D07EB */

loc_004D3810: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_004D3812: ;
    ecx = MEM32(0x90E4C4);
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D3821u); RECOMP_ABI_CALL(0x004D356Bu, sub_004D356B); /* call 0x004D356B */

loc_004D3821: ;
    eax = MEM32(eax);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D3825
 * Original: 0x004D3825 - 0x004D3849 (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D3825(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D3825: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D3836; /* jne: not equal / not zero */

loc_004D382F: ;
    PUSH32(esp, 0x004D3834u); RECOMP_ABI_CALL(0x004D07EBu, sub_004D07EB); /* call 0x004D07EB */

loc_004D3834: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_004D3836: ;
    ecx = MEM32(0x90E4C4);
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D3845u); RECOMP_ABI_CALL(0x004D3672u, sub_004D3672); /* call 0x004D3672 */

loc_004D3845: ;
    eax = MEM32(eax);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D3849
 * Original: 0x004D3849 - 0x004D3892 (73 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D3849(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D3849: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D385A; /* jne: not equal / not zero */

loc_004D3853: ;
    PUSH32(esp, 0x004D3858u); RECOMP_ABI_CALL(0x004D07EBu, sub_004D07EB); /* call 0x004D07EB */

loc_004D3858: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_004D385A: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x004D3861u); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D3861: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    PUSH32(esp, 0x004D386Au); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D386A: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 0x004D3873u); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D3873: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D387Cu); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D387C: ;
    POP32(esp, ecx);
    ecx = MEM32(0x90E4C4);
    PUSH32(esp, eax);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D388Eu); RECOMP_ABI_CALL(0x004D36C4u, sub_004D36C4); /* call 0x004D36C4 */

loc_004D388E: ;
    eax = MEM32(eax);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D3892
 * Original: 0x004D3892 - 0x004D38B6 (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D3892(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D3892: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D38A3; /* jne: not equal / not zero */

loc_004D389C: ;
    PUSH32(esp, 0x004D38A1u); RECOMP_ABI_CALL(0x004D07EBu, sub_004D07EB); /* call 0x004D07EB */

loc_004D38A1: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_004D38A3: ;
    ecx = MEM32(0x90E4C4);
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D38B2u); RECOMP_ABI_CALL(0x004D3737u, sub_004D3737); /* call 0x004D3737 */

loc_004D38B2: ;
    eax = MEM32(eax);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D38B6
 * Original: 0x004D38B6 - 0x004D38D2 (28 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D38B6(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D38B6: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004D38BEu); RECOMP_ABI_CALL(0x004D345Du, sub_004D345D); /* call 0x004D345D */

loc_004D38BE: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004D38CC; /* je: equal / zero */

loc_004D38C5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004D38CBu); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_004D38CB: ;
    POP32(esp, ecx);

loc_004D38CC: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D38D2
 * Original: 0x004D38D2 - 0x004D38FE (44 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D38D2(void)
{

loc_004D38D2: ;
    eax = ecx + 0xC;
    PUSH32(esp, 0x86A1F0);
    MEM32(0x90E4C4) = eax;
    PUSH32(esp, 0x004D38E4u); RECOMP_ABI_CALL(0x004D0838u, sub_004D0838); /* call 0x004D0838 */

loc_004D38E4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004D38FE
 * Original: 0x004D38FE - 0x004D39C1 (195 bytes, 76 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D38FE(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D38FE: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 8);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_004D3938; /* je: equal / zero */

loc_004D390C: ;
    edi = esi + 4;
    PUSH32(esp, edi);
    PUSH32(esp, 0x004D3915u); RECOMP_ABI_CALL(0x004C1895u, sub_004C1895); /* call 0x004C1895 */

loc_004D3915: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x004D391Eu); RECOMP_ABI_CALL(0x004C1895u, sub_004C1895); /* call 0x004C1895 */

loc_004D391E: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D392B; /* je: equal / zero */

loc_004D3925: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004D392Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D3929u); } /* indirect call */
    }

loc_004D392B: ;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D3938; /* je: equal / zero */

loc_004D3932: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004D3938u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D3936u); } /* indirect call */
    }

loc_004D3938: ;
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x004D3941u); RECOMP_ABI_CALL(0x004C1D6Au, sub_004C1D6A); /* call 0x004C1D6A */

loc_004D3941: ;
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, 0x004D394Au); RECOMP_ABI_CALL(0x004C1D9Eu, sub_004C1D9E); /* call 0x004C1D9E */

loc_004D394A: ;
    PUSH32(esp, 0x004D394Fu); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004D394F: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x004D3959u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004D3959: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D396B; /* je: equal / zero */

loc_004D3960: ;
    PUSH32(esp, 1);
    ecx = eax;
    PUSH32(esp, 0x004D3969u); RECOMP_ABI_CALL(0x004C7F39u, sub_004C7F39); /* call 0x004C7F39 */

loc_004D3969: ;
    goto loc_004D396D;

loc_004D396B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004D396D: ;
    MEM32(esi + 8) = eax;
    PUSH32(esp, 0x004D3975u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004D3975: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x34);
    PUSH32(esp, 0x004D397Fu); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004D397F: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D3991; /* je: equal / zero */

loc_004D3986: ;
    PUSH32(esp, 1);
    ecx = eax;
    PUSH32(esp, 0x004D398Fu); RECOMP_ABI_CALL(0x004CE129u, sub_004CE129); /* call 0x004CE129 */

loc_004D398F: ;
    goto loc_004D3993;

loc_004D3991: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004D3993: ;
    ecx = MEM32(esi + 8);
    edi = esi + 4;
    PUSH32(esp, edi);
    MEM32(esi + 0xC) = eax;
    PUSH32(esp, 0x004D39A2u); RECOMP_ABI_CALL(0x004C1880u, sub_004C1880); /* call 0x004C1880 */

loc_004D39A2: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x004D39ABu); RECOMP_ABI_CALL(0x004C1880u, sub_004C1880); /* call 0x004C1880 */

loc_004D39AB: ;
    eax = MEM32(esi + 0xC);
    eax = MEM32(eax + 0x24);
    MEM32(esi + 0x10) = MEM32(esi + 0x10) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, edi);
    MEM32(esi + 0x18) = ebx;
    MEM32(esi + 0x14) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004D39C1
 * Original: 0x004D39C1 - 0x004D39FC (59 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D39C1(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004D39C1: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = esi;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = esi + 4;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D39D8u); RECOMP_ABI_CALL(0x004C1895u, sub_004C1895); /* call 0x004C1895 */

loc_004D39D8: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004D39E5; /* je: equal / zero */

loc_004D39DF: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004D39E5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D39E3u); } /* indirect call */
    }

loc_004D39E5: ;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004D39F2; /* je: equal / zero */

loc_004D39EC: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004D39F2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D39F0u); } /* indirect call */
    }

loc_004D39F2: ;
    _cf = 0; /* logical op clears CF */
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004D3A00
 * Original: 0x004D3A00 - 0x004D3A42 (66 bytes, 23 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D3A00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D3A00: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x14) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_004D3A2B; /* jge: greater or equal (signed >=) */

loc_004D3A0C: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    MEM32(esi + 0x10) = eax;
    PUSH32(esp, 0x004D3A18u); RECOMP_ABI_CALL(0x004CB00Cu, sub_004CB00C); /* call 0x004CB00C */

loc_004D3A18: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, eax);
    MEM32(esi + 0x18) = eax;
    PUSH32(esp, 0x004D3A25u); RECOMP_ABI_CALL(0x004D0118u, sub_004D0118); /* call 0x004D0118 */

loc_004D3A25: ;
    eax = MEM32(esp + 8);
    goto loc_004D3A3E;

loc_004D3A2B: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x004D3A35u); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004D3A35: ;
    POP32(esp, ecx);
    ecx = MEM32(esp + 8);
    MEM32(ecx) = eax;
    eax = ecx;

loc_004D3A3E: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004D3A42
 * Original: 0x004D3A42 - 0x004D3A4C (10 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D3A42(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D3A42: ;
    eax = MEM32(ecx + 0xC);
    ecx = eax + 0x18;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax)); return; /* indirect tail jmp */

}

/**
 * sub_004D3A4C
 * Original: 0x004D3A4C - 0x004D3A9A (78 bytes, 25 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004D3A4C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D3A4C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8E19F0);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x100);
    edx = ebp + -260;
    MEM32(ebp + -4) = eax;
    eax = MEM32(ecx + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = eax + 0x18;
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004D3A7Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D3A77u); } /* indirect call */
    }

loc_004D3A7A: ;
    eax = ebp + -260;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D3A86u); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004D3A86: ;
    POP32(esp, ecx);
    ecx = MEM32(ebp + 8);
    MEM32(ecx) = eax;
    eax = ecx;
    ecx = MEM32(ebp + -4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D3A96u); RECOMP_ABI_CALL(0x005CFF80u, sub_005CFF80); /* call 0x005CFF80 */

loc_004D3A96: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004D3AAA
 * Original: 0x004D3AAA - 0x004D3AB6 (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D3AAA(void)
{

loc_004D3AAA: ;
    PUSH32(esp, MEM32(ecx + 0x10));
    ecx = MEM32(ecx + 0xC);
    PUSH32(esp, 0x004D3AB5u); RECOMP_ABI_CALL(0x004C1D3Au, sub_004C1D3A); /* call 0x004C1D3A */

loc_004D3AB5: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004D3AB6
 * Original: 0x004D3AB6 - 0x004D3AC2 (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D3AB6(void)
{

loc_004D3AB6: ;
    PUSH32(esp, MEM32(ecx + 0x10));
    ecx = MEM32(ecx + 0xC);
    PUSH32(esp, 0x004D3AC1u); RECOMP_ABI_CALL(0x004C1D52u, sub_004C1D52); /* call 0x004C1D52 */

loc_004D3AC1: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004D3AC2
 * Original: 0x004D3AC2 - 0x004D3ACE (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D3AC2(void)
{

loc_004D3AC2: ;
    PUSH32(esp, MEM32(ecx + 0x18));
    ecx = MEM32(ecx + 0xC);
    PUSH32(esp, 0x004D3ACDu); RECOMP_ABI_CALL(0x004CE2A9u, sub_004CE2A9); /* call 0x004CE2A9 */

loc_004D3ACD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004D3ACE
 * Original: 0x004D3ACE - 0x004D3B31 (99 bytes, 32 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004D3ACE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D3ACE: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8E19F0);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, MEM32(esi + 0x10));
    ecx = MEM32(esi + 0xC);
    MEM32(ebp + -4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D3AEDu); RECOMP_ABI_CALL(0x004C1D3Au, sub_004C1D3A); /* call 0x004C1D3A */

loc_004D3AED: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 0x100);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    eax = ebp + -260;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x18));
    if (CMP_NE(_fa, _fb)) goto loc_004D3B0B; /* jne: not equal / not zero */

loc_004D3B04: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D3B09u); RECOMP_ABI_CALL(0x004CE22Au, sub_004CE22A); /* call 0x004CE22A */

loc_004D3B09: ;
    goto loc_004D3B10;

loc_004D3B0B: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D3B10u); RECOMP_ABI_CALL(0x004CE2E4u, sub_004CE2E4); /* call 0x004CE2E4 */

loc_004D3B10: ;
    eax = ebp + -260;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D3B1Cu); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004D3B1C: ;
    POP32(esp, ecx);
    ecx = MEM32(ebp + 8);
    MEM32(ecx) = eax;
    eax = ecx;
    ecx = MEM32(ebp + -4);
    POP32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D3B2Du); RECOMP_ABI_CALL(0x005CFF80u, sub_005CFF80); /* call 0x005CFF80 */

loc_004D3B2D: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D3B31
 * Original: 0x004D3B31 - 0x004D3BB1 (128 bytes, 40 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004D3B31(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D3B31: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8E19F0);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, MEM32(esi + 0x10));
    ecx = MEM32(esi + 0xC);
    MEM32(ebp + -4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D3B50u); RECOMP_ABI_CALL(0x004C1D3Au, sub_004C1D3A); /* call 0x004C1D3A */

loc_004D3B50: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    ecx = MEM32(esi + 0xC);
    if (CMP_NE(_fa, _fb)) goto loc_004D3B7C; /* jne: not equal / not zero */

loc_004D3B58: ;
    PUSH32(esp, MEM32(esi + 0x18));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D3B60u); RECOMP_ABI_CALL(0x004CE4EBu, sub_004CE4EB); /* call 0x004CE4EB */

loc_004D3B60: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x7E0D78);
    eax = ebp + -260;
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D3B77u); RECOMP_ABI_CALL(0x004E3665u, sub_004E3665); /* call 0x004E3665 */

loc_004D3B77: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_004D3B90;

loc_004D3B7C: ;
    PUSH32(esp, 0x100);
    eax = ebp + -260;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x18));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D3B90u); RECOMP_ABI_CALL(0x004CE37Eu, sub_004CE37E); /* call 0x004CE37E */

loc_004D3B90: ;
    eax = ebp + -260;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D3B9Cu); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004D3B9C: ;
    POP32(esp, ecx);
    ecx = MEM32(ebp + 8);
    MEM32(ecx) = eax;
    eax = ecx;
    ecx = MEM32(ebp + -4);
    POP32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D3BADu); RECOMP_ABI_CALL(0x005CFF80u, sub_005CFF80); /* call 0x005CFF80 */

loc_004D3BAD: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D3BB1
 * Original: 0x004D3BB1 - 0x004D3BF9 (72 bytes, 22 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004D3BB1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D3BB1: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8E19F0);
    MEM32(ebp + -4) = eax;
    PUSH32(esp, 0x100);
    eax = ebp + -260;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ecx + 0x18));
    ecx = MEM32(ecx + 0xC);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D3BD9u); RECOMP_ABI_CALL(0x004CE331u, sub_004CE331); /* call 0x004CE331 */

loc_004D3BD9: ;
    eax = ebp + -260;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D3BE5u); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004D3BE5: ;
    POP32(esp, ecx);
    ecx = MEM32(ebp + 8);
    MEM32(ecx) = eax;
    eax = ecx;
    ecx = MEM32(ebp + -4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D3BF5u); RECOMP_ABI_CALL(0x005CFF80u, sub_005CFF80); /* call 0x005CFF80 */

loc_004D3BF5: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D3BF9
 * Original: 0x004D3BF9 - 0x004D3C05 (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D3BF9(void)
{

loc_004D3BF9: ;
    PUSH32(esp, MEM32(ecx + 0x18));
    ecx = MEM32(ecx + 0xC);
    PUSH32(esp, 0x004D3C04u); RECOMP_ABI_CALL(0x004CE40Du, sub_004CE40D); /* call 0x004CE40D */

loc_004D3C04: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004D3C05
 * Original: 0x004D3C05 - 0x004D3C11 (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D3C05(void)
{

loc_004D3C05: ;
    PUSH32(esp, MEM32(ecx + 0x18));
    ecx = MEM32(ecx + 0xC);
    PUSH32(esp, 0x004D3C10u); RECOMP_ABI_CALL(0x004CE43Fu, sub_004CE43F); /* call 0x004CE43F */

loc_004D3C10: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004D3C11
 * Original: 0x004D3C11 - 0x004D3C2D (28 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D3C11(void)
{

loc_004D3C11: ;
    PUSH32(esp, MEM32(ecx + 0x18));
    ecx = MEM32(ecx + 0xC);
    PUSH32(esp, 0x004D3C1Cu); RECOMP_ABI_CALL(0x004CE471u, sub_004CE471); /* call 0x004CE471 */

loc_004D3C1C: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D3C26u); RECOMP_ABI_CALL(0x004D0118u, sub_004D0118); /* call 0x004D0118 */

loc_004D3C26: ;
    eax = MEM32(esp + 4);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D3C2D
 * Original: 0x004D3C2D - 0x004D3C64 (55 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004D3C2D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D3C2D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, MEM32(esi + 0x10));
    ecx = MEM32(esi + 0xC);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D3C40u); RECOMP_ABI_CALL(0x004C1D3Au, sub_004C1D3A); /* call 0x004C1D3A */

loc_004D3C40: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D3C5E; /* jne: not equal / not zero */

loc_004D3C45: ;
    ecx = MEM32(esi + 0xC);
    eax = ebp + -1;
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x18));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D3C58u); RECOMP_ABI_CALL(0x004CE4A8u, sub_004CE4A8); /* call 0x004CE4A8 */

loc_004D3C58: ;
    eax = MEM32(ebp + -8);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_004D3C61;

loc_004D3C5E: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_004D3C61: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004D3C94
 * Original: 0x004D3C94 - 0x004D3D30 (156 bytes, 58 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004D3C94(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D3C94: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8E19F0);
    MEM32(ebp + -4) = eax;
    eax = MEM32(ecx + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x2C);
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004D3CB3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D3CB0u); } /* indirect call */
    }

loc_004D3CB3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D3CDB; /* jne: not equal / not zero */

loc_004D3CB8: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x004D3CBFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D3CBCu); } /* indirect call */
    }

loc_004D3CBF: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x7E0D78);
    eax = ebp + -260;
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D3CD6u); RECOMP_ABI_CALL(0x004E3665u, sub_004E3665); /* call 0x004E3665 */

loc_004D3CD6: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_004D3D0F;

loc_004D3CDB: ;
    ecx = MEM32(0x90E424);
    eax = MEM32(ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x004D3CE8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D3CE5u); } /* indirect call */
    }

loc_004D3CE8: ;
    edi = eax;
    ebx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x100);
    eax = ebp + -260;
    PUSH32(esp, eax);
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x004D3CFFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D3CFCu); } /* indirect call */
    }

loc_004D3CFF: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004D3D07u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D3D04u); } /* indirect call */
    }

loc_004D3D07: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebx + 0x1C); PUSH32(esp, 0x004D3D0Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D3D0Au); } /* indirect call */
    }

loc_004D3D0D: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_004D3D0F: ;
    eax = ebp + -260;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D3D1Bu); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004D3D1B: ;
    POP32(esp, ecx);
    ecx = MEM32(ebp + 8);
    MEM32(ecx) = eax;
    eax = ecx;
    ecx = MEM32(ebp + -4);
    POP32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D3D2Cu); RECOMP_ABI_CALL(0x005CFF80u, sub_005CFF80); /* call 0x005CFF80 */

loc_004D3D2C: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D3D30
 * Original: 0x004D3D30 - 0x004D3D65 (53 bytes, 18 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D3D30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D3D30: ;
    eax = MEM32(ecx + 0xC);
    ecx = MEM32(eax + 0x2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D3D4F; /* jne: not equal / not zero */

loc_004D3D3A: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x004D3D44u); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004D3D44: ;
    POP32(esp, ecx);
    ecx = MEM32(esp + 4);
    MEM32(ecx) = eax;
    eax = ecx;
    goto loc_004D3D62;

loc_004D3D4F: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004D3D54u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D3D51u); } /* indirect call */
    }

loc_004D3D54: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D3D5Eu); RECOMP_ABI_CALL(0x004D0118u, sub_004D0118); /* call 0x004D0118 */

loc_004D3D5E: ;
    eax = MEM32(esp + 4);

loc_004D3D62: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D3D6C
 * Original: 0x004D3D6C - 0x004D3D7F (19 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D3D6C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D3D6C: ;
    PUSH32(esp, 0x004D3D71u); RECOMP_ABI_CALL(0x004C0342u, sub_004C0342); /* call 0x004C0342 */

loc_004D3D71: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x004D3D78u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D3D75u); } /* indirect call */
    }

loc_004D3D78: ;
    edx = MEM32(eax);
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x2C)); return; /* indirect tail jmp */

}

/**
 * sub_004D3D7F
 * Original: 0x004D3D7F - 0x004D3D8D (14 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D3D7F(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004D3D7F: ;
    ecx = MEM32(ecx + 0xC);
    PUSH32(esp, 0x004D3D87u); RECOMP_ABI_CALL(0x004CB193u, sub_004CB193); /* call 0x004CB193 */

loc_004D3D87: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_004D3DBD
 * Original: 0x004D3DBD - 0x004D3DD7 (26 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D3DBD(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D3DBD: ;
    PUSH32(esp, MEM32(esp + 0xC));
    eax = MEM32(esp + 8);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, MEM32(eax + 0x14));
    PUSH32(esp, 0x004D3DD1u); RECOMP_ABI_CALL(0x004D0020u, sub_004D0020); /* call 0x004D0020 */

loc_004D3DD1: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004D3DD7
 * Original: 0x004D3DD7 - 0x004D3E03 (44 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D3DD7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D3DD7: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D3DFE; /* je: equal / zero */

loc_004D3DE0: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x004D3DE7u); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D3DE7: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D3DF0u); RECOMP_ABI_CALL(0x004D08ACu, sub_004D08AC); /* call 0x004D08AC */

loc_004D3DF0: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    ecx = MEM32(esp + 0xC);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x004D3DFEu); RECOMP_ABI_CALL(0x004D38FEu, sub_004D38FE); /* call 0x004D38FE */

loc_004D3DFE: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D3E03
 * Original: 0x004D3E03 - 0x004D3E1D (26 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D3E03(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D3E03: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D3E18; /* je: equal / zero */

loc_004D3E0C: ;
    ecx = MEM32(esp + 4);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x004D3E18u); RECOMP_ABI_CALL(0x004D39C1u, sub_004D39C1); /* call 0x004D39C1 */

loc_004D3E18: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D3E1D
 * Original: 0x004D3E1D - 0x004D3E39 (28 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D3E1D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D3E1D: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D3E2B; /* jne: not equal / not zero */

loc_004D3E26: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D3E2B: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(eax + 0x24));
    PUSH32(esp, 0x004D3E37u); RECOMP_ABI_CALL(0x004D0803u, sub_004D0803); /* call 0x004D0803 */

loc_004D3E37: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D3E39
 * Original: 0x004D3E39 - 0x004D3E69 (48 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004D3E39(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D3E39: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D3E4D; /* jne: not equal / not zero */

loc_004D3E46: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D3E4Bu); RECOMP_ABI_CALL(0x004D07EBu, sub_004D07EB); /* call 0x004D07EB */

loc_004D3E4B: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_004D3E4D: ;
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D3E54u); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D3E54: ;
    POP32(esp, ecx);
    ecx = MEM32(ebp + 8);
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D3E65u); RECOMP_ABI_CALL(0x004D3A00u, sub_004D3A00); /* call 0x004D3A00 */

loc_004D3E65: ;
    eax = MEM32(eax);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004D3E69
 * Original: 0x004D3E69 - 0x004D3E99 (48 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D3E69(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D3E69: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D3E77; /* jne: not equal / not zero */

loc_004D3E72: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D3E77: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = MEM32(esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D3E89u); RECOMP_ABI_CALL(0x004D08ACu, sub_004D08AC); /* call 0x004D08AC */

loc_004D3E89: ;
    POP32(esp, ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edi); PUSH32(esp, 0x004D3E8Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D3E8Du); } /* indirect call */
    }

loc_004D3E8F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D3E95u); RECOMP_ABI_CALL(0x004D0808u, sub_004D0808); /* call 0x004D0808 */

loc_004D3E95: ;
    POP32(esp, ecx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004D3E99
 * Original: 0x004D3E99 - 0x004D3ED8 (63 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004D3E99(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D3E99: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D3EAD; /* jne: not equal / not zero */

loc_004D3EA6: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D3EABu); RECOMP_ABI_CALL(0x004D07EBu, sub_004D07EB); /* call 0x004D07EB */

loc_004D3EAB: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_004D3EAD: ;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = MEM32(esi);
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D3EBEu); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D3EBE: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D3EC7u); RECOMP_ABI_CALL(0x004D08ACu, sub_004D08AC); /* call 0x004D08AC */

loc_004D3EC7: ;
    POP32(esp, ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edi + 4); PUSH32(esp, 0x004D3ED2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D3ECFu); } /* indirect call */
    }

loc_004D3ED2: ;
    eax = MEM32(eax);
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004D3ED8
 * Original: 0x004D3ED8 - 0x004D3F10 (56 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D3ED8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D3ED8: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D3EE6; /* jne: not equal / not zero */

loc_004D3EE1: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D3EE6: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x004D3EEEu); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D3EEE: ;
    PUSH32(esp, 0);
    esi = eax;
    PUSH32(esp, 0x004D3EF7u); RECOMP_ABI_CALL(0x004D08ACu, sub_004D08AC); /* call 0x004D08AC */

loc_004D3EF7: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    ecx = MEM32(eax + 0x1C);
    PUSH32(esp, 0x004D3F07u); RECOMP_ABI_CALL(0x004C1D16u, sub_004C1D16); /* call 0x004C1D16 */

loc_004D3F07: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D3F0Du); RECOMP_ABI_CALL(0x004D0803u, sub_004D0803); /* call 0x004D0803 */

loc_004D3F0D: ;
    POP32(esp, ecx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004D3F10
 * Original: 0x004D3F10 - 0x004D3F48 (56 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D3F10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D3F10: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D3F1E; /* jne: not equal / not zero */

loc_004D3F19: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D3F1E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x004D3F26u); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D3F26: ;
    PUSH32(esp, 0);
    esi = eax;
    PUSH32(esp, 0x004D3F2Fu); RECOMP_ABI_CALL(0x004D08ACu, sub_004D08AC); /* call 0x004D08AC */

loc_004D3F2F: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    ecx = MEM32(eax + 0x1C);
    PUSH32(esp, 0x004D3F3Fu); RECOMP_ABI_CALL(0x004C1D28u, sub_004C1D28); /* call 0x004C1D28 */

loc_004D3F3F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D3F45u); RECOMP_ABI_CALL(0x004D0803u, sub_004D0803); /* call 0x004D0803 */

loc_004D3F45: ;
    POP32(esp, ecx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004D3F48
 * Original: 0x004D3F48 - 0x004D3F6A (34 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D3F48(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D3F48: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D3F56; /* jne: not equal / not zero */

loc_004D3F51: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D3F56: ;
    ecx = MEM32(esp + 4);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x004D3F62u); RECOMP_ABI_CALL(0x004D3AAAu, sub_004D3AAA); /* call 0x004D3AAA */

loc_004D3F62: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D3F68u); RECOMP_ABI_CALL(0x004D0803u, sub_004D0803); /* call 0x004D0803 */

loc_004D3F68: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D3F6A
 * Original: 0x004D3F6A - 0x004D3F8C (34 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D3F6A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D3F6A: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D3F78; /* jne: not equal / not zero */

loc_004D3F73: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D3F78: ;
    ecx = MEM32(esp + 4);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x004D3F84u); RECOMP_ABI_CALL(0x004D3AB6u, sub_004D3AB6); /* call 0x004D3AB6 */

loc_004D3F84: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D3F8Au); RECOMP_ABI_CALL(0x004D0803u, sub_004D0803); /* call 0x004D0803 */

loc_004D3F8A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D3F8C
 * Original: 0x004D3F8C - 0x004D3FAE (34 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D3F8C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D3F8C: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D3F9A; /* jne: not equal / not zero */

loc_004D3F95: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D3F9A: ;
    ecx = MEM32(esp + 4);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x004D3FA6u); RECOMP_ABI_CALL(0x004D3AC2u, sub_004D3AC2); /* call 0x004D3AC2 */

loc_004D3FA6: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D3FACu); RECOMP_ABI_CALL(0x004D080Du, sub_004D080D); /* call 0x004D080D */

loc_004D3FAC: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D3FAE
 * Original: 0x004D3FAE - 0x004D3FD5 (39 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004D3FAE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D3FAE: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D3FC2; /* jne: not equal / not zero */

loc_004D3FBB: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D3FC0u); RECOMP_ABI_CALL(0x004D07EBu, sub_004D07EB); /* call 0x004D07EB */

loc_004D3FC0: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_004D3FC2: ;
    ecx = MEM32(ebp + 8);
    eax = ebp + -4;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D3FD1u); RECOMP_ABI_CALL(0x004D3ACEu, sub_004D3ACE); /* call 0x004D3ACE */

loc_004D3FD1: ;
    eax = MEM32(eax);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}
