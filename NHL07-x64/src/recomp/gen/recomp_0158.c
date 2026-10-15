/**
 * nhl_07_recomp - Recompiled code chunk 158
 * Functions: 250 (0x00306120 - 0x0030C670)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_00306120
 * Original: 0x00306120 - 0x00306137 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306120(void)
{

loc_00306120: ;
    eax = MEM32(ecx + 4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    PUSH32(esp, 0x1180088C);
    edx = ecx + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00306136u); RECOMP_ABI_CALL(0x0003076Bu, sub_0003076B); /* call 0x0003076B */

loc_00306136: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00306140
 * Original: 0x00306140 - 0x00306141 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306140(void)
{

loc_00306140: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00306150
 * Original: 0x00306150 - 0x00306151 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306150(void)
{

loc_00306150: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00306160
 * Original: 0x00306160 - 0x00306161 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306160(void)
{

loc_00306160: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00306170
 * Original: 0x00306170 - 0x00306197 (39 bytes, 16 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306170(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00306170: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0030618F; /* je: equal / zero */

loc_00306179: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00306187; /* je: equal / zero */

loc_0030617C: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00306194; /* jne: not equal / not zero */

loc_0030617F: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x00306184u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00306181u); } /* indirect call */
    }

loc_00306184: ;
    esp += 12; return; /* ret 8 */

loc_00306187: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0030618Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00306189u); } /* indirect call */
    }

loc_0030618C: ;
    esp += 12; return; /* ret 8 */

loc_0030618F: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x00306194u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00306191u); } /* indirect call */
    }

loc_00306194: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003061A0
 * Original: 0x003061A0 - 0x003061B3 (19 bytes, 7 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003061A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003061A0: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003061AD; /* je: equal / zero */

loc_003061A8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 12; return; /* ret 8 */

loc_003061AD: ;
    eax = ecx + 0xC;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003061C0
 * Original: 0x003061C0 - 0x003061D5 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003061C0(void)
{

loc_003061C0: ;
    edx = MEM32(esp + 8);
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003061D4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003061D2u); } /* indirect call */
    }

loc_003061D4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003061E0
 * Original: 0x003061E0 - 0x00306202 (34 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003061E0(void)
{

loc_003061E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x003061E8u); RECOMP_ABI_CALL(0x000181CAu, sub_000181CA); /* call 0x000181CA */

loc_003061E8: ;
    eax = MEM32(esp + 8);
    MEM32(esi + 4) = eax;
    MEM32(esi) = 0x825EBC;
    MEM32(esi + 8) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00306210
 * Original: 0x00306210 - 0x00306227 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306210(void)
{

loc_00306210: ;
    eax = MEM32(ecx + 4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x12800D8A);
    edx = ecx + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00306226u); RECOMP_ABI_CALL(0x0003076Bu, sub_0003076B); /* call 0x0003076B */

loc_00306226: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00306230
 * Original: 0x00306230 - 0x00306247 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306230(void)
{

loc_00306230: ;
    eax = MEM32(ecx + 4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 0x12800D8A);
    edx = ecx + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00306246u); RECOMP_ABI_CALL(0x0003076Bu, sub_0003076B); /* call 0x0003076B */

loc_00306246: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00306250
 * Original: 0x00306250 - 0x00306267 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306250(void)
{

loc_00306250: ;
    eax = MEM32(ecx + 4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    PUSH32(esp, 0x12800D8A);
    edx = ecx + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00306266u); RECOMP_ABI_CALL(0x0003076Bu, sub_0003076B); /* call 0x0003076B */

loc_00306266: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00306270
 * Original: 0x00306270 - 0x00306271 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306270(void)
{

loc_00306270: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00306280
 * Original: 0x00306280 - 0x00306281 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306280(void)
{

loc_00306280: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00306290
 * Original: 0x00306290 - 0x00306291 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306290(void)
{

loc_00306290: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003062A0
 * Original: 0x003062A0 - 0x003062C7 (39 bytes, 16 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003062A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003062A0: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_003062BF; /* je: equal / zero */

loc_003062A9: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_003062B7; /* je: equal / zero */

loc_003062AC: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003062C4; /* jne: not equal / not zero */

loc_003062AF: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x003062B4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003062B1u); } /* indirect call */
    }

loc_003062B4: ;
    esp += 12; return; /* ret 8 */

loc_003062B7: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x003062BCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003062B9u); } /* indirect call */
    }

loc_003062BC: ;
    esp += 12; return; /* ret 8 */

loc_003062BF: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x003062C4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003062C1u); } /* indirect call */
    }

loc_003062C4: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003062D0
 * Original: 0x003062D0 - 0x003062E3 (19 bytes, 7 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003062D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003062D0: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003062DD; /* je: equal / zero */

loc_003062D8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 12; return; /* ret 8 */

loc_003062DD: ;
    eax = ecx + 0xC;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003062F0
 * Original: 0x003062F0 - 0x00306305 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003062F0(void)
{

loc_003062F0: ;
    edx = MEM32(esp + 8);
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00306304u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00306302u); } /* indirect call */
    }

loc_00306304: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00306310
 * Original: 0x00306310 - 0x00306332 (34 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306310(void)
{

loc_00306310: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00306318u); RECOMP_ABI_CALL(0x000181CAu, sub_000181CA); /* call 0x000181CA */

loc_00306318: ;
    eax = MEM32(esp + 8);
    MEM32(esi + 4) = eax;
    MEM32(esi) = 0x825EF0;
    MEM32(esi + 8) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00306340
 * Original: 0x00306340 - 0x00306357 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306340(void)
{

loc_00306340: ;
    eax = MEM32(ecx + 4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x13801D7C);
    edx = ecx + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00306356u); RECOMP_ABI_CALL(0x0003076Bu, sub_0003076B); /* call 0x0003076B */

loc_00306356: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00306360
 * Original: 0x00306360 - 0x00306377 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306360(void)
{

loc_00306360: ;
    eax = MEM32(ecx + 4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 0x13801D7C);
    edx = ecx + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00306376u); RECOMP_ABI_CALL(0x0003076Bu, sub_0003076B); /* call 0x0003076B */

loc_00306376: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00306380
 * Original: 0x00306380 - 0x00306397 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306380(void)
{

loc_00306380: ;
    eax = MEM32(ecx + 4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    PUSH32(esp, 0x13801D7C);
    edx = ecx + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00306396u); RECOMP_ABI_CALL(0x0003076Bu, sub_0003076B); /* call 0x0003076B */

loc_00306396: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003063A0
 * Original: 0x003063A0 - 0x003063A1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003063A0(void)
{

loc_003063A0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003063B0
 * Original: 0x003063B0 - 0x003063B1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003063B0(void)
{

loc_003063B0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003063C0
 * Original: 0x003063C0 - 0x003063C1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003063C0(void)
{

loc_003063C0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003063D0
 * Original: 0x003063D0 - 0x003063F7 (39 bytes, 16 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003063D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003063D0: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_003063EF; /* je: equal / zero */

loc_003063D9: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_003063E7; /* je: equal / zero */

loc_003063DC: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003063F4; /* jne: not equal / not zero */

loc_003063DF: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x003063E4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003063E1u); } /* indirect call */
    }

loc_003063E4: ;
    esp += 12; return; /* ret 8 */

loc_003063E7: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x003063ECu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003063E9u); } /* indirect call */
    }

loc_003063EC: ;
    esp += 12; return; /* ret 8 */

loc_003063EF: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x003063F4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003063F1u); } /* indirect call */
    }

loc_003063F4: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00306400
 * Original: 0x00306400 - 0x00306413 (19 bytes, 7 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306400(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00306400: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030640D; /* je: equal / zero */

loc_00306408: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 12; return; /* ret 8 */

loc_0030640D: ;
    eax = ecx + 0xC;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00306420
 * Original: 0x00306420 - 0x00306435 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306420(void)
{

loc_00306420: ;
    edx = MEM32(esp + 8);
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00306434u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00306432u); } /* indirect call */
    }

loc_00306434: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00306440
 * Original: 0x00306440 - 0x00306462 (34 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306440(void)
{

loc_00306440: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00306448u); RECOMP_ABI_CALL(0x000181CAu, sub_000181CA); /* call 0x000181CA */

loc_00306448: ;
    eax = MEM32(esp + 8);
    MEM32(esi + 4) = eax;
    MEM32(esi) = 0x825F24;
    MEM32(esi + 8) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00306470
 * Original: 0x00306470 - 0x00306487 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306470(void)
{

loc_00306470: ;
    eax = MEM32(ecx + 4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1480101B);
    edx = ecx + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00306486u); RECOMP_ABI_CALL(0x0003076Bu, sub_0003076B); /* call 0x0003076B */

loc_00306486: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00306490
 * Original: 0x00306490 - 0x003064A7 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306490(void)
{

loc_00306490: ;
    eax = MEM32(ecx + 4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 0x1480101B);
    edx = ecx + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x003064A6u); RECOMP_ABI_CALL(0x0003076Bu, sub_0003076B); /* call 0x0003076B */

loc_003064A6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003064B0
 * Original: 0x003064B0 - 0x003064C7 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003064B0(void)
{

loc_003064B0: ;
    eax = MEM32(ecx + 4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    PUSH32(esp, 0x1480101B);
    edx = ecx + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x003064C6u); RECOMP_ABI_CALL(0x0003076Bu, sub_0003076B); /* call 0x0003076B */

loc_003064C6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003064D0
 * Original: 0x003064D0 - 0x003064D1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003064D0(void)
{

loc_003064D0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003064E0
 * Original: 0x003064E0 - 0x003064E1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003064E0(void)
{

loc_003064E0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003064F0
 * Original: 0x003064F0 - 0x003064F1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003064F0(void)
{

loc_003064F0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00306500
 * Original: 0x00306500 - 0x00306527 (39 bytes, 16 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306500(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00306500: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0030651F; /* je: equal / zero */

loc_00306509: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00306517; /* je: equal / zero */

loc_0030650C: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00306524; /* jne: not equal / not zero */

loc_0030650F: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x00306514u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00306511u); } /* indirect call */
    }

loc_00306514: ;
    esp += 12; return; /* ret 8 */

loc_00306517: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0030651Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00306519u); } /* indirect call */
    }

loc_0030651C: ;
    esp += 12; return; /* ret 8 */

loc_0030651F: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x00306524u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00306521u); } /* indirect call */
    }

loc_00306524: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00306530
 * Original: 0x00306530 - 0x00306543 (19 bytes, 7 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306530(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00306530: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030653D; /* je: equal / zero */

loc_00306538: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 12; return; /* ret 8 */

loc_0030653D: ;
    eax = ecx + 0xC;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00306550
 * Original: 0x00306550 - 0x00306565 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306550(void)
{

loc_00306550: ;
    edx = MEM32(esp + 8);
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00306564u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00306562u); } /* indirect call */
    }

loc_00306564: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00306570
 * Original: 0x00306570 - 0x00306592 (34 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306570(void)
{

loc_00306570: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00306578u); RECOMP_ABI_CALL(0x000181CAu, sub_000181CA); /* call 0x000181CA */

loc_00306578: ;
    eax = MEM32(esp + 8);
    MEM32(esi + 4) = eax;
    MEM32(esi) = 0x825F58;
    MEM32(esi + 8) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003065A0
 * Original: 0x003065A0 - 0x003065B7 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003065A0(void)
{

loc_003065A0: ;
    eax = MEM32(ecx + 4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x158016AA);
    edx = ecx + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x003065B6u); RECOMP_ABI_CALL(0x0003076Bu, sub_0003076B); /* call 0x0003076B */

loc_003065B6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003065C0
 * Original: 0x003065C0 - 0x003065D7 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003065C0(void)
{

loc_003065C0: ;
    eax = MEM32(ecx + 4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 0x158016AA);
    edx = ecx + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x003065D6u); RECOMP_ABI_CALL(0x0003076Bu, sub_0003076B); /* call 0x0003076B */

loc_003065D6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003065E0
 * Original: 0x003065E0 - 0x003065F7 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003065E0(void)
{

loc_003065E0: ;
    eax = MEM32(ecx + 4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    PUSH32(esp, 0x158016AA);
    edx = ecx + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x003065F6u); RECOMP_ABI_CALL(0x0003076Bu, sub_0003076B); /* call 0x0003076B */

loc_003065F6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00306600
 * Original: 0x00306600 - 0x00306601 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306600(void)
{

loc_00306600: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00306610
 * Original: 0x00306610 - 0x00306611 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306610(void)
{

loc_00306610: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00306620
 * Original: 0x00306620 - 0x00306621 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306620(void)
{

loc_00306620: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00306630
 * Original: 0x00306630 - 0x00306657 (39 bytes, 16 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306630(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00306630: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0030664F; /* je: equal / zero */

loc_00306639: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00306647; /* je: equal / zero */

loc_0030663C: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00306654; /* jne: not equal / not zero */

loc_0030663F: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x00306644u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00306641u); } /* indirect call */
    }

loc_00306644: ;
    esp += 12; return; /* ret 8 */

loc_00306647: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0030664Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00306649u); } /* indirect call */
    }

loc_0030664C: ;
    esp += 12; return; /* ret 8 */

loc_0030664F: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x00306654u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00306651u); } /* indirect call */
    }

loc_00306654: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00306660
 * Original: 0x00306660 - 0x00306673 (19 bytes, 7 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306660(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00306660: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030666D; /* je: equal / zero */

loc_00306668: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 12; return; /* ret 8 */

loc_0030666D: ;
    eax = ecx + 0xC;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00306680
 * Original: 0x00306680 - 0x00306695 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306680(void)
{

loc_00306680: ;
    edx = MEM32(esp + 8);
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00306694u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00306692u); } /* indirect call */
    }

loc_00306694: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003066A0
 * Original: 0x003066A0 - 0x003066C2 (34 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003066A0(void)
{

loc_003066A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x003066A8u); RECOMP_ABI_CALL(0x000181CAu, sub_000181CA); /* call 0x000181CA */

loc_003066A8: ;
    eax = MEM32(esp + 8);
    MEM32(esi + 4) = eax;
    MEM32(esi) = 0x825F8C;
    MEM32(esi + 8) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003066D0
 * Original: 0x003066D0 - 0x003066E7 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003066D0(void)
{

loc_003066D0: ;
    eax = MEM32(ecx + 4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1680185B);
    edx = ecx + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x003066E6u); RECOMP_ABI_CALL(0x0003076Bu, sub_0003076B); /* call 0x0003076B */

loc_003066E6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003066F0
 * Original: 0x003066F0 - 0x00306707 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003066F0(void)
{

loc_003066F0: ;
    eax = MEM32(ecx + 4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 0x1680185B);
    edx = ecx + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00306706u); RECOMP_ABI_CALL(0x0003076Bu, sub_0003076B); /* call 0x0003076B */

loc_00306706: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00306710
 * Original: 0x00306710 - 0x00306727 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306710(void)
{

loc_00306710: ;
    eax = MEM32(ecx + 4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    PUSH32(esp, 0x1680185B);
    edx = ecx + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00306726u); RECOMP_ABI_CALL(0x0003076Bu, sub_0003076B); /* call 0x0003076B */

loc_00306726: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00306730
 * Original: 0x00306730 - 0x00306731 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306730(void)
{

loc_00306730: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00306740
 * Original: 0x00306740 - 0x00306741 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306740(void)
{

loc_00306740: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00306750
 * Original: 0x00306750 - 0x00306751 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306750(void)
{

loc_00306750: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00306760
 * Original: 0x00306760 - 0x00306787 (39 bytes, 16 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306760(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00306760: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0030677F; /* je: equal / zero */

loc_00306769: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00306777; /* je: equal / zero */

loc_0030676C: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00306784; /* jne: not equal / not zero */

loc_0030676F: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x00306774u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00306771u); } /* indirect call */
    }

loc_00306774: ;
    esp += 12; return; /* ret 8 */

loc_00306777: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0030677Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00306779u); } /* indirect call */
    }

loc_0030677C: ;
    esp += 12; return; /* ret 8 */

loc_0030677F: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x00306784u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00306781u); } /* indirect call */
    }

loc_00306784: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00306790
 * Original: 0x00306790 - 0x003067A3 (19 bytes, 7 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306790(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00306790: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030679D; /* je: equal / zero */

loc_00306798: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 12; return; /* ret 8 */

loc_0030679D: ;
    eax = ecx + 0xC;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003067B0
 * Original: 0x003067B0 - 0x003067C5 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003067B0(void)
{

loc_003067B0: ;
    edx = MEM32(esp + 8);
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003067C4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003067C2u); } /* indirect call */
    }

loc_003067C4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003067D0
 * Original: 0x003067D0 - 0x003067F2 (34 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003067D0(void)
{

loc_003067D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x003067D8u); RECOMP_ABI_CALL(0x000181CAu, sub_000181CA); /* call 0x000181CA */

loc_003067D8: ;
    eax = MEM32(esp + 8);
    MEM32(esi + 4) = eax;
    MEM32(esi) = 0x825FC0;
    MEM32(esi + 8) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00306800
 * Original: 0x00306800 - 0x00306817 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306800(void)
{

loc_00306800: ;
    eax = MEM32(ecx + 4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x178002F9);
    edx = ecx + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00306816u); RECOMP_ABI_CALL(0x0003076Bu, sub_0003076B); /* call 0x0003076B */

loc_00306816: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00306820
 * Original: 0x00306820 - 0x00306837 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306820(void)
{

loc_00306820: ;
    eax = MEM32(ecx + 4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 0x178002F9);
    edx = ecx + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00306836u); RECOMP_ABI_CALL(0x0003076Bu, sub_0003076B); /* call 0x0003076B */

loc_00306836: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00306840
 * Original: 0x00306840 - 0x00306857 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306840(void)
{

loc_00306840: ;
    eax = MEM32(ecx + 4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    PUSH32(esp, 0x178002F9);
    edx = ecx + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00306856u); RECOMP_ABI_CALL(0x0003076Bu, sub_0003076B); /* call 0x0003076B */

loc_00306856: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00306860
 * Original: 0x00306860 - 0x00306861 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306860(void)
{

loc_00306860: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00306870
 * Original: 0x00306870 - 0x00306871 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306870(void)
{

loc_00306870: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00306880
 * Original: 0x00306880 - 0x00306881 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306880(void)
{

loc_00306880: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00306890
 * Original: 0x00306890 - 0x003068B7 (39 bytes, 16 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306890(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00306890: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_003068AF; /* je: equal / zero */

loc_00306899: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_003068A7; /* je: equal / zero */

loc_0030689C: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003068B4; /* jne: not equal / not zero */

loc_0030689F: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x003068A4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003068A1u); } /* indirect call */
    }

loc_003068A4: ;
    esp += 12; return; /* ret 8 */

loc_003068A7: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x003068ACu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003068A9u); } /* indirect call */
    }

loc_003068AC: ;
    esp += 12; return; /* ret 8 */

loc_003068AF: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x003068B4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003068B1u); } /* indirect call */
    }

loc_003068B4: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003068C0
 * Original: 0x003068C0 - 0x003068D3 (19 bytes, 7 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003068C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003068C0: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003068CD; /* je: equal / zero */

loc_003068C8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 12; return; /* ret 8 */

loc_003068CD: ;
    eax = ecx + 0xC;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003068E0
 * Original: 0x003068E0 - 0x003068E3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003068E0(void)
{

loc_003068E0: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_003068F0
 * Original: 0x003068F0 - 0x003068F3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003068F0(void)
{

loc_003068F0: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00306900
 * Original: 0x00306900 - 0x00306904 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306900(void)
{

loc_00306900: ;
    eax = ecx + 4;
    esp += 4; return; /* ret */

}

/**
 * sub_00306910
 * Original: 0x00306910 - 0x00306914 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306910(void)
{

loc_00306910: ;
    eax = ecx + 4;
    esp += 4; return; /* ret */

}

/**
 * sub_00306920
 * Original: 0x00306920 - 0x00306924 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306920(void)
{

loc_00306920: ;
    eax = ecx + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00306930
 * Original: 0x00306930 - 0x00306934 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306930(void)
{

loc_00306930: ;
    eax = ecx + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00306940
 * Original: 0x00306940 - 0x00306944 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306940(void)
{

loc_00306940: ;
    eax = ecx + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00306950
 * Original: 0x00306950 - 0x00306954 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306950(void)
{

loc_00306950: ;
    eax = ecx + 0x1C;
    esp += 4; return; /* ret */

}

/**
 * sub_00306960
 * Original: 0x00306960 - 0x00306964 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306960(void)
{

loc_00306960: ;
    eax = MEM32(ecx + 0x30);
    esp += 4; return; /* ret */

}

/**
 * sub_00306970
 * Original: 0x00306970 - 0x00306974 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306970(void)
{

loc_00306970: ;
    eax = MEM32(ecx + 0x34);
    esp += 4; return; /* ret */

}

/**
 * sub_00306980
 * Original: 0x00306980 - 0x00306984 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306980(void)
{

loc_00306980: ;
    SET_LO8(eax, MEM8(ecx + 0x18));
    esp += 4; return; /* ret */

}

/**
 * sub_00306990
 * Original: 0x00306990 - 0x00306997 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306990(void)
{

loc_00306990: ;
    MEM32(ecx) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_003069A0
 * Original: 0x003069A0 - 0x003069AB (11 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003069A0(void)
{

loc_003069A0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(ecx + eax * 4 + 4);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003069B0
 * Original: 0x003069B0 - 0x003069BD (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003069B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003069B0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(ecx + 0x3A));
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_003069C0
 * Original: 0x003069C0 - 0x003069CE (14 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003069C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003069C0: ;
    eax = MEM32(ecx + 8);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(3) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(LO8(eax)) < (uint32_t)(3));
    SET_LO8(eax, LO8(eax) - 3);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
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
 * sub_003069E0
 * Original: 0x003069E0 - 0x003069ED (13 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003069E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003069E0: ;
    eax = MEM32(ecx + 8);
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 0xF);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
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
    esp += 4; return; /* ret */

}

/**
 * sub_003069F0
 * Original: 0x003069F0 - 0x003069FB (11 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003069F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003069F0: ;
    eax = MEM32(ecx + 8);
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 0xF);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
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
 * sub_00306A00
 * Original: 0x00306A00 - 0x00306A0D (13 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306A00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00306A00: ;
    eax = MEM32(ecx + 8);
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 0xF);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fb = (uint32_t)(2) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(LO8(eax)) < (uint32_t)(2));
    SET_LO8(eax, LO8(eax) - 2);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
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
 * sub_00306A10
 * Original: 0x00306A10 - 0x00306A17 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306A10(void)
{

loc_00306A10: ;
    eax = ecx + 0x80;
    esp += 4; return; /* ret */

}

/**
 * sub_00306A20
 * Original: 0x00306A20 - 0x00306A27 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306A20(void)
{

loc_00306A20: ;
    eax = MEM32(ecx + 0xAC);
    esp += 4; return; /* ret */

}

/**
 * sub_00306A30
 * Original: 0x00306A30 - 0x00306A5A (42 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306A30(void)
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

loc_00306A30: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AA840); /* comiss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    if ((_fca >= _fcb)) goto loc_00306A4F; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs MEMF(0x7AA840)) */

loc_00306A47: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */

loc_00306A4F: ;
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
 * sub_00306A70
 * Original: 0x00306A70 - 0x00306A85 (21 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306A70(void)
{

loc_00306A70: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = ecx;
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00306A90
 * Original: 0x00306A90 - 0x00306A9A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306A90(void)
{

loc_00306A90: ;
    eax = MEM32(esp + 4);
    MEM32(0x8FC428) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00306AA0
 * Original: 0x00306AA0 - 0x00306AA6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306AA0(void)
{

loc_00306AA0: ;
    eax = MEM32(0x8FC428);
    esp += 4; return; /* ret */

}

/**
 * sub_00306AB0
 * Original: 0x00306AB0 - 0x00306AF3 (67 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306AB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00306AB0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x14);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    edx = MEM32(esp);
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    eax = MEM32(esp + 0x10);
    ecx = eax;
    MEM32(ecx) = edx;
    edx = MEM32(esp + 4);
    MEM32(ecx + 4) = edx;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 8);
    MEM32(ecx + 8) = edx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00306B10
 * Original: 0x00306B10 - 0x00306B5B (75 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306B10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00306B10: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x18);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    eax = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    esi = MEM32(esp + 4);
    edx = eax;
    MEM32(edx) = esi;
    esi = MEM32(esp + 8);
    MEM32(edx + 4) = esi;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    esi = MEM32(esp + 0xC);
    MEM32(edx + 8) = esi;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edx + 0xC) = ecx;
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00306B70
 * Original: 0x00306B70 - 0x00306BB3 (67 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306B70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00306B70: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x14);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    edx = MEM32(esp);
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    eax = MEM32(esp + 0x10);
    ecx = eax;
    MEM32(ecx) = edx;
    edx = MEM32(esp + 4);
    MEM32(ecx + 4) = edx;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 8);
    MEM32(ecx + 8) = edx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00306BD0
 * Original: 0x00306BD0 - 0x00306C13 (67 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306BD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00306BD0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x14);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    edx = MEM32(esp);
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    eax = MEM32(esp + 0x10);
    ecx = eax;
    MEM32(ecx) = edx;
    edx = MEM32(esp + 4);
    MEM32(ecx + 4) = edx;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 8);
    MEM32(ecx + 8) = edx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00306C30
 * Original: 0x00306C30 - 0x00306C4B (27 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00306C30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00306C30: ;
    SET_LO8(eax, MEM8(0x8FC449));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00306C48; /* je: equal / zero */

loc_00306C39: ;
    eax = MEM32(0x904BEC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00306C48; /* je: equal / zero */

loc_00306C42: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_00306C48: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00306C60
 * Original: 0x00306C60 - 0x00306C68 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306C60(void)
{

loc_00306C60: ;
    MEM8(0x8FC449) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00306C70
 * Original: 0x00306C70 - 0x00307404 (1940 bytes, 540 insns)
 * Category: game_camera
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306C70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00306C70: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x825614);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00306C83u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00306C81u); } /* indirect call */
    }

loc_00306C83: ;
    esi = eax;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00306CB3; /* je: equal / zero */

loc_00306C8B: ;
    MEM32(esi) = 0x825624;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0x00306C9Eu); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00306C9E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x1A494);
    ecx = eax;
    PUSH32(esp, 0x00306CABu); RECOMP_ABI_CALL(0x00035F4Au, sub_00035F4A); /* call 0x00035F4A */

loc_00306CAB: ;
    MEM32(0x8FC434) = esi;
    goto loc_00306CB9;

loc_00306CB3: ;
    MEM32(0x8FC434) = edi;

loc_00306CB9: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x825638);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00306CCAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00306CC8u); } /* indirect call */
    }

loc_00306CCA: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00306CF8; /* je: equal / zero */

loc_00306CD0: ;
    MEM32(esi) = 0x825648;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0x00306CE3u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00306CE3: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x1AAE5);
    ecx = eax;
    PUSH32(esp, 0x00306CF0u); RECOMP_ABI_CALL(0x00035F4Au, sub_00035F4A); /* call 0x00035F4A */

loc_00306CF0: ;
    MEM32(0x8FC438) = esi;
    goto loc_00306CFE;

loc_00306CF8: ;
    MEM32(0x8FC438) = edi;

loc_00306CFE: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x82565C);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00306D0Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00306D0Du); } /* indirect call */
    }

loc_00306D0F: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00306D3D; /* je: equal / zero */

loc_00306D15: ;
    MEM32(esi) = 0x82566C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0x00306D28u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00306D28: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x1B851);
    ecx = eax;
    PUSH32(esp, 0x00306D35u); RECOMP_ABI_CALL(0x00035F4Au, sub_00035F4A); /* call 0x00035F4A */

loc_00306D35: ;
    MEM32(0x8FC400) = esi;
    goto loc_00306D43;

loc_00306D3D: ;
    MEM32(0x8FC400) = edi;

loc_00306D43: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x825680);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00306D54u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00306D52u); } /* indirect call */
    }

loc_00306D54: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00306D82; /* je: equal / zero */

loc_00306D5A: ;
    MEM32(esi) = 0x825694;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0x00306D6Du); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00306D6D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x1BB67);
    ecx = eax;
    PUSH32(esp, 0x00306D7Au); RECOMP_ABI_CALL(0x00035F4Au, sub_00035F4A); /* call 0x00035F4A */

loc_00306D7A: ;
    MEM32(0x8FC3F4) = esi;
    goto loc_00306D88;

loc_00306D82: ;
    MEM32(0x8FC3F4) = edi;

loc_00306D88: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x8256A8);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00306D99u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00306D97u); } /* indirect call */
    }

loc_00306D99: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00306DC7; /* je: equal / zero */

loc_00306D9F: ;
    MEM32(esi) = 0x8256B8;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0x00306DB2u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00306DB2: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x1B07B);
    ecx = eax;
    PUSH32(esp, 0x00306DBFu); RECOMP_ABI_CALL(0x00035F4Au, sub_00035F4A); /* call 0x00035F4A */

loc_00306DBF: ;
    MEM32(0x8FC3F0) = esi;
    goto loc_00306DCD;

loc_00306DC7: ;
    MEM32(0x8FC3F0) = edi;

loc_00306DCD: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x8256CC);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00306DDEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00306DDCu); } /* indirect call */
    }

loc_00306DDE: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00306E0C; /* je: equal / zero */

loc_00306DE4: ;
    MEM32(esi) = 0x8256DC;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0x00306DF7u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00306DF7: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x1A0FB);
    ecx = eax;
    PUSH32(esp, 0x00306E04u); RECOMP_ABI_CALL(0x00035F4Au, sub_00035F4A); /* call 0x00035F4A */

loc_00306E04: ;
    MEM32(0x8FC404) = esi;
    goto loc_00306E12;

loc_00306E0C: ;
    MEM32(0x8FC404) = edi;

loc_00306E12: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x8256F0);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00306E23u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00306E21u); } /* indirect call */
    }

loc_00306E23: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00306E51; /* je: equal / zero */

loc_00306E29: ;
    MEM32(esi) = 0x8256FC;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0x00306E3Cu); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00306E3C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x1B765);
    ecx = eax;
    PUSH32(esp, 0x00306E49u); RECOMP_ABI_CALL(0x00035F4Au, sub_00035F4A); /* call 0x00035F4A */

loc_00306E49: ;
    MEM32(0x8FC3E0) = esi;
    goto loc_00306E57;

loc_00306E51: ;
    MEM32(0x8FC3E0) = edi;

loc_00306E57: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x825710);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00306E68u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00306E66u); } /* indirect call */
    }

loc_00306E68: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00306E96; /* je: equal / zero */

loc_00306E6E: ;
    MEM32(esi) = 0x825724;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0x00306E81u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00306E81: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x1B75C);
    ecx = eax;
    PUSH32(esp, 0x00306E8Eu); RECOMP_ABI_CALL(0x00035F4Au, sub_00035F4A); /* call 0x00035F4A */

loc_00306E8E: ;
    MEM32(0x8FC420) = esi;
    goto loc_00306E9C;

loc_00306E96: ;
    MEM32(0x8FC420) = edi;

loc_00306E9C: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x825738);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00306EADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00306EABu); } /* indirect call */
    }

loc_00306EAD: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00306EDB; /* je: equal / zero */

loc_00306EB3: ;
    MEM32(esi) = 0x825748;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0x00306EC6u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00306EC6: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x1AB6E);
    ecx = eax;
    PUSH32(esp, 0x00306ED3u); RECOMP_ABI_CALL(0x00035F4Au, sub_00035F4A); /* call 0x00035F4A */

loc_00306ED3: ;
    MEM32(0x8FC3B4) = esi;
    goto loc_00306EE1;

loc_00306EDB: ;
    MEM32(0x8FC3B4) = edi;

loc_00306EE1: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x82575C);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00306EF2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00306EF0u); } /* indirect call */
    }

loc_00306EF2: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00306F20; /* je: equal / zero */

loc_00306EF8: ;
    MEM32(esi) = 0x82576C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0x00306F0Bu); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00306F0B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x1A22C);
    ecx = eax;
    PUSH32(esp, 0x00306F18u); RECOMP_ABI_CALL(0x00035F4Au, sub_00035F4A); /* call 0x00035F4A */

loc_00306F18: ;
    MEM32(0x8FC3F8) = esi;
    goto loc_00306F26;

loc_00306F20: ;
    MEM32(0x8FC3F8) = edi;

loc_00306F26: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x825780);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00306F37u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00306F35u); } /* indirect call */
    }

loc_00306F37: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00306F65; /* je: equal / zero */

loc_00306F3D: ;
    MEM32(esi) = 0x825798;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0x00306F50u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00306F50: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x1AB3A);
    ecx = eax;
    PUSH32(esp, 0x00306F5Du); RECOMP_ABI_CALL(0x00035F4Au, sub_00035F4A); /* call 0x00035F4A */

loc_00306F5D: ;
    MEM32(0x8FC418) = esi;
    goto loc_00306F6B;

loc_00306F65: ;
    MEM32(0x8FC418) = edi;

loc_00306F6B: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x8257AC);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00306F7Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00306F7Au); } /* indirect call */
    }

loc_00306F7C: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00306FAA; /* je: equal / zero */

loc_00306F82: ;
    MEM32(esi) = 0x8257C4;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0x00306F95u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00306F95: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x1B3BC);
    ecx = eax;
    PUSH32(esp, 0x00306FA2u); RECOMP_ABI_CALL(0x00035F4Au, sub_00035F4A); /* call 0x00035F4A */

loc_00306FA2: ;
    MEM32(0x8FC3FC) = esi;
    goto loc_00306FB0;

loc_00306FAA: ;
    MEM32(0x8FC3FC) = edi;

loc_00306FB0: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x825804);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00306FC1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00306FBFu); } /* indirect call */
    }

loc_00306FC1: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00306FEF; /* je: equal / zero */

loc_00306FC7: ;
    MEM32(esi) = 0x82582C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0x00306FDAu); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00306FDA: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x1A38A);
    ecx = eax;
    PUSH32(esp, 0x00306FE7u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00306FE7: ;
    MEM32(0x8FC40C) = esi;
    goto loc_00306FF5;

loc_00306FEF: ;
    MEM32(0x8FC40C) = edi;

loc_00306FF5: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x825830);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00307006u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00307004u); } /* indirect call */
    }

loc_00307006: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00307034; /* je: equal / zero */

loc_0030700C: ;
    MEM32(esi) = 0x825848;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0x0030701Fu); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0030701F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x1BE90);
    ecx = eax;
    PUSH32(esp, 0x0030702Cu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0030702C: ;
    MEM32(0x8FC3E4) = esi;
    goto loc_0030703A;

loc_00307034: ;
    MEM32(0x8FC3E4) = edi;

loc_0030703A: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x82584C);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0030704Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00307049u); } /* indirect call */
    }

loc_0030704B: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00307079; /* je: equal / zero */

loc_00307051: ;
    MEM32(esi) = 0x825864;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0x00307064u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00307064: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x1A1DB);
    ecx = eax;
    PUSH32(esp, 0x00307071u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00307071: ;
    MEM32(0x8FC3D0) = esi;
    goto loc_0030707F;

loc_00307079: ;
    MEM32(0x8FC3D0) = edi;

loc_0030707F: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x825890);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00307090u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030708Eu); } /* indirect call */
    }

loc_00307090: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003070BE; /* je: equal / zero */

loc_00307096: ;
    MEM32(esi) = 0x8258AC;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0x003070A9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_003070A9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x1B6D4);
    ecx = eax;
    PUSH32(esp, 0x003070B6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_003070B6: ;
    MEM32(0x8FC3DC) = esi;
    goto loc_003070C4;

loc_003070BE: ;
    MEM32(0x8FC3DC) = edi;

loc_003070C4: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x825868);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003070D5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003070D3u); } /* indirect call */
    }

loc_003070D5: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00307103; /* je: equal / zero */

loc_003070DB: ;
    MEM32(esi) = 0x82588C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0x003070EEu); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_003070EE: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x1A175);
    ecx = eax;
    PUSH32(esp, 0x003070FBu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_003070FB: ;
    MEM32(0x8FC414) = esi;
    goto loc_00307109;

loc_00307103: ;
    MEM32(0x8FC414) = edi;

loc_00307109: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x8258B0);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0030711Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00307118u); } /* indirect call */
    }

loc_0030711A: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00307148; /* je: equal / zero */

loc_00307120: ;
    MEM32(esi) = 0x8258D4;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0x00307133u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00307133: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x1B7CA);
    ecx = eax;
    PUSH32(esp, 0x00307140u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00307140: ;
    MEM32(0x8FC3B0) = esi;
    goto loc_0030714E;

loc_00307148: ;
    MEM32(0x8FC3B0) = edi;

loc_0030714E: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x8258D8);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0030715Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030715Du); } /* indirect call */
    }

loc_0030715F: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030718D; /* je: equal / zero */

loc_00307165: ;
    MEM32(esi) = 0x825908;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0x00307178u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00307178: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x1B910);
    ecx = eax;
    PUSH32(esp, 0x00307185u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00307185: ;
    MEM32(0x8FC3E8) = esi;
    goto loc_00307193;

loc_0030718D: ;
    MEM32(0x8FC3E8) = edi;

loc_00307193: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x82590C);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x003071A4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003071A2u); } /* indirect call */
    }

loc_003071A4: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003071D2; /* je: equal / zero */

loc_003071AA: ;
    MEM32(esi) = 0x825928;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0x003071BDu); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_003071BD: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x1B568);
    ecx = eax;
    PUSH32(esp, 0x003071CAu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_003071CA: ;
    MEM32(0x8FC3D8) = esi;
    goto loc_003071D8;

loc_003071D2: ;
    MEM32(0x8FC3D8) = edi;

loc_003071D8: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x82592C);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003071E9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003071E7u); } /* indirect call */
    }

loc_003071E9: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00307217; /* je: equal / zero */

loc_003071EF: ;
    MEM32(esi) = 0x825974;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0x00307202u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00307202: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x1B3ED);
    ecx = eax;
    PUSH32(esp, 0x0030720Fu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0030720F: ;
    MEM32(0x8FC424) = esi;
    goto loc_0030721D;

loc_00307217: ;
    MEM32(0x8FC424) = edi;

loc_0030721D: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x825978);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0030722Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030722Cu); } /* indirect call */
    }

loc_0030722E: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030725C; /* je: equal / zero */

loc_00307234: ;
    MEM32(esi) = 0x8259B8;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0x00307247u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00307247: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x1A6EE);
    ecx = eax;
    PUSH32(esp, 0x00307254u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00307254: ;
    MEM32(0x8FC408) = esi;
    goto loc_00307262;

loc_0030725C: ;
    MEM32(0x8FC408) = edi;

loc_00307262: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x8259BC);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00307273u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00307271u); } /* indirect call */
    }

loc_00307273: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003072A1; /* je: equal / zero */

loc_00307279: ;
    MEM32(esi) = 0x825A00;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0x0030728Cu); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0030728C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x1A785);
    ecx = eax;
    PUSH32(esp, 0x00307299u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00307299: ;
    MEM32(0x8FC3C0) = esi;
    goto loc_003072A7;

loc_003072A1: ;
    MEM32(0x8FC3C0) = edi;

loc_003072A7: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x825A08);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x003072B8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003072B6u); } /* indirect call */
    }

loc_003072B8: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003072E6; /* je: equal / zero */

loc_003072BE: ;
    MEM32(esi) = 0x825A5C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0x003072D1u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_003072D1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x1B2BE);
    ecx = eax;
    PUSH32(esp, 0x003072DEu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_003072DE: ;
    MEM32(0x8FC41C) = esi;
    goto loc_003072EC;

loc_003072E6: ;
    MEM32(0x8FC41C) = edi;

loc_003072EC: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x825A60);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003072FDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003072FBu); } /* indirect call */
    }

loc_003072FD: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030732B; /* je: equal / zero */

loc_00307303: ;
    MEM32(esi) = 0x825AB8;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0x00307316u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00307316: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x1B6F2);
    ecx = eax;
    PUSH32(esp, 0x00307323u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00307323: ;
    MEM32(0x8FC3BC) = esi;
    goto loc_00307331;

loc_0030732B: ;
    MEM32(0x8FC3BC) = edi;

loc_00307331: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x825AC0);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00307342u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00307340u); } /* indirect call */
    }

loc_00307342: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00307370; /* je: equal / zero */

loc_00307348: ;
    MEM32(esi) = 0x825B1C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0x0030735Bu); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0030735B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x1A266);
    ecx = eax;
    PUSH32(esp, 0x00307368u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00307368: ;
    MEM32(0x8FC410) = esi;
    goto loc_00307376;

loc_00307370: ;
    MEM32(0x8FC410) = edi;

loc_00307376: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x825B20);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00307387u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00307385u); } /* indirect call */
    }

loc_00307387: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003073B5; /* je: equal / zero */

loc_0030738D: ;
    MEM32(esi) = 0x825B44;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0x003073A0u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_003073A0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x1A41F);
    ecx = eax;
    PUSH32(esp, 0x003073ADu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_003073AD: ;
    MEM32(0x8FC3B8) = esi;
    goto loc_003073BB;

loc_003073B5: ;
    MEM32(0x8FC3B8) = edi;

loc_003073BB: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x8257D8);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x003073CCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003073CAu); } /* indirect call */
    }

loc_003073CC: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003073FB; /* je: equal / zero */

loc_003073D2: ;
    MEM32(esi) = 0x8257F0;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0x003073E5u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_003073E5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x1A3B8);
    ecx = eax;
    PUSH32(esp, 0x003073F2u); RECOMP_ABI_CALL(0x00035F4Au, sub_00035F4A); /* call 0x00035F4A */

loc_003073F2: ;
    POP32(esp, edi);
    MEM32(0x8FC3D4) = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003073FB: ;
    MEM32(0x8FC3D4) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0030736E
 * Original: 0x0030736E - 0x00307404 (150 bytes, 45 insns)
 * Category: game_camera
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030736E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030736E: ;
    goto loc_00307376;

    MEM32(0x8FC410) = edi;

loc_00307376: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x825B20);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00307387u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00307385u); } /* indirect call */
    }

loc_00307387: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003073B5; /* je: equal / zero */

loc_0030738D: ;
    MEM32(esi) = 0x825B44;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0x003073A0u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_003073A0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x1A41F);
    ecx = eax;
    PUSH32(esp, 0x003073ADu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_003073AD: ;
    MEM32(0x8FC3B8) = esi;
    goto loc_003073BB;

loc_003073B5: ;
    MEM32(0x8FC3B8) = edi;

loc_003073BB: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x8257D8);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x003073CCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003073CAu); } /* indirect call */
    }

loc_003073CC: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003073FB; /* je: equal / zero */

loc_003073D2: ;
    MEM32(esi) = 0x8257F0;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0x003073E5u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_003073E5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x1A3B8);
    ecx = eax;
    PUSH32(esp, 0x003073F2u); RECOMP_ABI_CALL(0x00035F4Au, sub_00035F4A); /* call 0x00035F4A */

loc_003073F2: ;
    POP32(esp, edi);
    MEM32(0x8FC3D4) = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003073FB: ;
    MEM32(0x8FC3D4) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003075F0
 * Original: 0x003075F0 - 0x003077E9 (505 bytes, 141 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003075F0(void)
{

loc_003075F0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x8FC434);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00307602u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003075FFu); } /* indirect call */
    }

loc_00307602: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x8FC438);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00307614u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00307611u); } /* indirect call */
    }

loc_00307614: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x8FC400);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00307626u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00307623u); } /* indirect call */
    }

loc_00307626: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x8FC3F4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00307638u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00307635u); } /* indirect call */
    }

loc_00307638: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x8FC3F0);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0030764Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00307647u); } /* indirect call */
    }

loc_0030764A: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x8FC404);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0030765Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00307659u); } /* indirect call */
    }

loc_0030765C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x8FC3E0);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0030766Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030766Bu); } /* indirect call */
    }

loc_0030766E: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x8FC420);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00307680u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030767Du); } /* indirect call */
    }

loc_00307680: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x8FC3B4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00307692u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030768Fu); } /* indirect call */
    }

loc_00307692: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x8FC3F8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x003076A4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003076A1u); } /* indirect call */
    }

loc_003076A4: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x8FC418);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x003076B6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003076B3u); } /* indirect call */
    }

loc_003076B6: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x8FC3FC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x003076C8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003076C5u); } /* indirect call */
    }

loc_003076C8: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x8FC40C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x003076DAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003076D7u); } /* indirect call */
    }

loc_003076DA: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x8FC3E4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x003076ECu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003076E9u); } /* indirect call */
    }

loc_003076EC: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x8FC3D0);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x003076FEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003076FBu); } /* indirect call */
    }

loc_003076FE: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x8FC3DC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00307710u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030770Du); } /* indirect call */
    }

loc_00307710: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x8FC414);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00307722u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030771Fu); } /* indirect call */
    }

loc_00307722: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x8FC3B0);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00307734u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00307731u); } /* indirect call */
    }

loc_00307734: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x8FC3E8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00307746u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00307743u); } /* indirect call */
    }

loc_00307746: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x8FC3D8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00307758u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00307755u); } /* indirect call */
    }

loc_00307758: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x8FC424);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0030776Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00307767u); } /* indirect call */
    }

loc_0030776A: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x8FC408);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0030777Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00307779u); } /* indirect call */
    }

loc_0030777C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x8FC3C0);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0030778Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030778Bu); } /* indirect call */
    }

loc_0030778E: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x8FC41C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x003077A0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030779Du); } /* indirect call */
    }

loc_003077A0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x8FC3BC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x003077B2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003077AFu); } /* indirect call */
    }

loc_003077B2: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x8FC410);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x003077C4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003077C1u); } /* indirect call */
    }

loc_003077C4: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x8FC3B8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x003077D6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003077D3u); } /* indirect call */
    }

loc_003077D6: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x8FC3D4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x003077E8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003077E5u); } /* indirect call */
    }

loc_003077E8: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00307870
 * Original: 0x00307870 - 0x0030789D (45 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00307870(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    int _cf = 0; /* carry flag */

loc_00307870: ;
    xmm2 = XMM_SCALAR(MEMF(ecx)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 4); /* addss */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00307895; /* jnp: not parity */

loc_00307886: ;
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00307890; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm2.f[0]) */

loc_0030788B: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    goto loc_00307893;

loc_00307890: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */

loc_00307893: ;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00307898; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00307895: ;
    xmm0 = xmm1; /* movaps */

loc_00307898: ;
    MEMF(ecx) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003078B0
 * Original: 0x003078B0 - 0x00307CAA (1018 bytes, 282 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003078B0(void)
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

loc_003078B0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(8));
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm1 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    xmm2 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi); /* subss */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_003079C3; /* jnp: not parity */

loc_003078DF: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_003079C3; /* jbe: below or equal (unsigned <=) */

loc_003078F3: ;
    fp_push(MEMF(0x8FC43C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7AD318)); /* fmul dword ptr [0x7ad318] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_003079C3; /* jbe: below or equal (unsigned <=) */

loc_0030791A: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    xmm0 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */
    xmm4 = xmm1; /* movaps */
    xmm5 = xmm6; /* movaps */
    if ((_fca >= _fcb)) goto loc_0030793E; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm3.f[0]) */

loc_0030793B: ;
    xmm5 = xmm0; /* movaps */

loc_0030793E: ;
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00307946; /* jb: below (unsigned <) (xmm1.f[0] vs xmm3.f[0]) */

loc_00307943: ;
    xmm0 = xmm6; /* movaps */

loc_00307946: ;
    _fca = xmm5.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00307970; /* jp: parity */

loc_0030794F: ;
    xmm1 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_003079A3; /* jnp: not parity */

loc_00307966: ;
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0030799E; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm1.f[0]) */

loc_0030796B: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    goto loc_003079A1;

loc_00307970: ;
    xmm0 = XMM_SCALAR(MEMF(0x8FC43C)); /* movss */
    xmm4 = xmm3; /* movaps */
    xmm4.f[0] = xmm4.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_SCALAR(MEMF(esi)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_003079A3; /* jnp: not parity */

loc_00307994: ;
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0030799E; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm1.f[0]) */

loc_00307999: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    goto loc_003079A1;

loc_0030799E: ;
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */

loc_003079A1: ;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003079A6; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_003079A3: ;
    xmm0 = xmm2; /* movaps */

loc_003079A6: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEMF(esi) = xmm0.f[0]; /* movss */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_003079BB; /* jp: parity */

loc_003079B3: ;
    MEMF(edi) = xmm3.f[0]; /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_003079BB: ;
    MEMF(edi) = xmm4.f[0]; /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_003079C3: ;
    xmm0.f[0] = (float)(int32_t)MEM32(0x8C38E8); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x8FC43C); /* mulss */
    xmm4 = XMM_SCALAR(MEMF(0x7AB8B8)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm4.f[0]; /* comiss */
    xmm6 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm6.f[0] = xmm6.f[0] - xmm2.f[0]; /* subss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003079EB; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm4.f[0]) */

loc_003079E8: ;
    xmm0 = xmm4; /* movaps */

loc_003079EB: ;
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AB868); /* mulss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0x18); /* cvttss2si */
    xmm7 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AB7CC)); /* movss */
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00307C42; /* jl: less (signed <) */

loc_00307A24: ;
    ecx = eax + -8;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(3) & 31u;
      if (_sc) {
        _cf = (int)((_sv >> (_sc - 1u)) & 1u);
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    xmm3.f[0] = xmm3.f[0] - xmm7.f[0]; /* subss */
    edx = ecx * 8;

loc_00307A36: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm5.f[0]; /* mulss */
    xmm7 = xmm6; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm4.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] + xmm2.f[0]; /* addss */
    xmm2 = xmm1; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] - xmm7.f[0]; /* subss */
    _fca = xmm3.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm6.f[0]; /* addss */
    MEMF(esp) = xmm1.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00307A68; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm2.f[0]) */

loc_00307A65: ;
    xmm2 = xmm3; /* movaps */

loc_00307A68: ;
    xmm6 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm6.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00307A76; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm6.f[0]) */

loc_00307A73: ;
    xmm2 = xmm6; /* movaps */

loc_00307A76: ;
    xmm7 = xmm2; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm5.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm6 = xmm2; /* movaps */
    xmm7.f[0] = xmm7.f[0] + xmm1.f[0]; /* addss */
    xmm7.f[0] = xmm7.f[0] * xmm0.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm0.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] + MEMF(esp); /* addss */
    xmm2.f[0] = xmm2.f[0] - xmm7.f[0]; /* subss */
    _fca = xmm3.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm1 = xmm6; /* movaps */
    MEMF(esp) = xmm1.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00307AA9; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm2.f[0]) */

loc_00307AA6: ;
    xmm2 = xmm3; /* movaps */

loc_00307AA9: ;
    xmm6 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm6.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00307AB7; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm6.f[0]) */

loc_00307AB4: ;
    xmm2 = xmm6; /* movaps */

loc_00307AB7: ;
    xmm7 = xmm2; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm5.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] + xmm1.f[0]; /* addss */
    xmm6 = xmm2; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] - xmm7.f[0]; /* subss */
    xmm1 = xmm2; /* movaps */
    _fca = xmm3.f[0]; _fcb = xmm1.f[0]; /* comiss */
    xmm6.f[0] = xmm6.f[0] * xmm0.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] + MEMF(esp); /* addss */
    MEMF(esp) = xmm6.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00307AEA; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm1.f[0]) */

loc_00307AE7: ;
    xmm1 = xmm3; /* movaps */

loc_00307AEA: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00307AF8; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm2.f[0]) */

loc_00307AF5: ;
    xmm1 = xmm2; /* movaps */

loc_00307AF8: ;
    xmm7 = xmm1; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm5.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm4.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm7.f[0] = xmm7.f[0] + xmm6.f[0]; /* addss */
    xmm7.f[0] = xmm7.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esp); /* addss */
    xmm1.f[0] = xmm1.f[0] - xmm7.f[0]; /* subss */
    _fca = xmm3.f[0]; _fcb = xmm1.f[0]; /* comiss */
    xmm6 = xmm2; /* movaps */
    MEMF(esp) = xmm6.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00307B2B; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm1.f[0]) */

loc_00307B28: ;
    xmm1 = xmm3; /* movaps */

loc_00307B2B: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00307B39; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm2.f[0]) */

loc_00307B36: ;
    xmm1 = xmm2; /* movaps */

loc_00307B39: ;
    xmm7 = xmm1; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm5.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm4.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm7.f[0] = xmm7.f[0] + xmm6.f[0]; /* addss */
    xmm7.f[0] = xmm7.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esp); /* addss */
    xmm1.f[0] = xmm1.f[0] - xmm7.f[0]; /* subss */
    _fca = xmm3.f[0]; _fcb = xmm1.f[0]; /* comiss */
    xmm6 = xmm2; /* movaps */
    MEMF(esp) = xmm6.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00307B6C; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm1.f[0]) */

loc_00307B69: ;
    xmm1 = xmm3; /* movaps */

loc_00307B6C: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00307B7A; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm2.f[0]) */

loc_00307B77: ;
    xmm1 = xmm2; /* movaps */

loc_00307B7A: ;
    xmm7 = xmm1; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm5.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm4.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm7.f[0] = xmm7.f[0] + xmm6.f[0]; /* addss */
    xmm7.f[0] = xmm7.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esp); /* addss */
    xmm1.f[0] = xmm1.f[0] - xmm7.f[0]; /* subss */
    _fca = xmm3.f[0]; _fcb = xmm1.f[0]; /* comiss */
    xmm6 = xmm2; /* movaps */
    MEMF(esp) = xmm6.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00307BAD; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm1.f[0]) */

loc_00307BAA: ;
    xmm1 = xmm3; /* movaps */

loc_00307BAD: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00307BBB; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm2.f[0]) */

loc_00307BB8: ;
    xmm1 = xmm2; /* movaps */

loc_00307BBB: ;
    xmm7 = xmm1; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm5.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm4.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm7.f[0] = xmm7.f[0] + xmm6.f[0]; /* addss */
    xmm7.f[0] = xmm7.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm7.f[0]; /* subss */
    _fca = xmm3.f[0]; _fcb = xmm1.f[0]; /* comiss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esp); /* addss */
    MEMF(esp) = xmm2.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00307BEB; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm1.f[0]) */

loc_00307BE8: ;
    xmm1 = xmm3; /* movaps */

loc_00307BEB: ;
    xmm6 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm6.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00307BF9; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm6.f[0]) */

loc_00307BF6: ;
    xmm1 = xmm6; /* movaps */

loc_00307BF9: ;
    xmm7 = xmm1; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm5.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm6 = xmm1; /* movaps */
    xmm7.f[0] = xmm7.f[0] + xmm2.f[0]; /* addss */
    xmm7.f[0] = xmm7.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm7.f[0]; /* subss */
    _fca = xmm3.f[0]; _fcb = xmm1.f[0]; /* comiss */
    xmm6.f[0] = xmm6.f[0] * xmm0.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] + MEMF(esp); /* addss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00307C24; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm1.f[0]) */

loc_00307C21: ;
    xmm1 = xmm3; /* movaps */

loc_00307C24: ;
    xmm7 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm7.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00307C32; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm7.f[0]) */

loc_00307C2F: ;
    xmm1 = xmm7; /* movaps */

loc_00307C32: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00307A36; /* jne: not equal / not zero */

loc_00307C39: ;
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    xmm2 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */

loc_00307C42: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_00307C9A; /* jge: greater or equal (signed >=) */

loc_00307C46: ;
    xmm3.f[0] = xmm3.f[0] - xmm7.f[0]; /* subss */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_00307C50: ;
    xmm2 = xmm1; /* movaps */
    xmm7 = xmm6; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm5.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] * xmm4.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] + xmm2.f[0]; /* addss */
    xmm2 = xmm1; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] - xmm7.f[0]; /* subss */
    _fca = xmm3.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm6.f[0]; /* addss */
    xmm6 = xmm1; /* movaps */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00307C80; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm2.f[0]) */

loc_00307C7D: ;
    xmm2 = xmm3; /* movaps */

loc_00307C80: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00307C8E; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm1.f[0]) */

loc_00307C8B: ;
    xmm2 = xmm1; /* movaps */

loc_00307C8E: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    xmm1 = xmm2; /* movaps */
    if ((_fa != 0)) goto loc_00307C50; /* jne: not equal / not zero */

loc_00307C94: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */

loc_00307C9A: ;
    xmm6.f[0] = xmm6.f[0] + xmm2.f[0]; /* addss */
    MEMF(esi) = xmm6.f[0]; /* movss */
    MEMF(edi) = xmm1.f[0]; /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
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
 * sub_00307DB0
 * Original: 0x00307DB0 - 0x00307DF6 (70 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00307DB0(void)
{
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00307DB0: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 8); /* subss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x825154); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00307DD8; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x825154)) */

loc_00307DC7: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x7A9EBC); /* subss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

loc_00307DD8: ;
    xmm1 = XMM_SCALAR(MEMF(0x7DE4F4)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00307DF5; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00307DE5: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7A9EBC); /* addss */
    MEMF(eax) = xmm0.f[0]; /* movss */

loc_00307DF5: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00307E10
 * Original: 0x00307E10 - 0x0030801D (525 bytes, 176 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00307E10(void)
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

loc_00307E10: ;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x48);
    PUSH32(esp, esi);
    esi = MEM32(ebp);
    ecx = MEM32(esi + 0x10);
    eax = MEM32(ecx);
    ebx = MEM32(esi + 0x24);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00307E2Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00307E29u); } /* indirect call */
    }

loc_00307E2C: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    edi = MEM32(eax);
    ecx = MEM32(eax + 4);
    edx = MEM32(eax + 8);
    MEM32(esp + 0x10) = edi;
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_00307E7A; /* jne: not equal / not zero */

loc_00307E44: ;
    PUSH32(esp, 0x18);
    ecx = esi;
    PUSH32(esp, 0x00307E4Du); RECOMP_ABI_CALL(0x0001F2B3u, sub_0001F2B3); /* call 0x0001F2B3 */

loc_00307E4D: ;
    ecx = MEM32(esp + 0x14);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = MEM32(esp + 0x18);
    ebx = eax;
    MEM32(eax) = edi;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = edx;
    MEMF(ebx + 0xC) = xmm0.f[0]; /* movss */
    MEMF(ebx + 0x10) = xmm0.f[0]; /* movss */
    MEMF(ebx + 0x14) = xmm0.f[0]; /* movss */
    MEM8(esi + 0x1C) = 1;
    goto loc_00307FF6;

loc_00307E7A: ;
    eax = MEM32(ebp);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00307E88u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00307E85u); } /* indirect call */
    }

loc_00307E88: ;
    ecx = MEM32(eax + 4);
    edx = MEM32(eax + 8);
    esi = MEM32(eax);
    eax = MEM32(ebp);
    MEM32(esp + 0x44) = ecx;
    ecx = MEM32(eax + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    MEM32(esp + 0x4C) = edx;
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00307EA6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00307EA3u); } /* indirect call */
    }

loc_00307EA6: ;
    ecx = MEM32(eax + 4);
    edx = MEM32(eax + 8);
    edi = MEM32(eax);
    eax = MEM32(ebp);
    MEM32(esp + 0x38) = ecx;
    ecx = MEM32(eax + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    MEM32(esp + 0x40) = edx;
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00307EC4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00307EC1u); } /* indirect call */
    }

loc_00307EC4: ;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x24) = eax;
    eax = MEM32(ebp);
    MEM32(esp + 0x1C) = ecx;
    ecx = MEM32(eax + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    MEM32(esp + 0x24) = edx;
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00307EE6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00307EE3u); } /* indirect call */
    }

loc_00307EE6: ;
    edx = MEM32(eax + 4);
    ecx = MEM32(eax);
    xmm0 = XMM_SCALAR(MEMF(ebx)); /* movss */
    eax = MEM32(eax + 8);
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x10); /* subss */
    xmm1 = XMM_SCALAR(MEMF(0x825154)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    xmm3 = XMM_SCALAR(MEMF(0x7A9EBC)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x7DE4F4)); /* movss */
    MEM32(esp + 0x2C) = edx;
    MEM32(esp + 0x30) = eax;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00307F27; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00307F1D: ;
    xmm0 = XMM_SCALAR(MEMF(ebx)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    goto loc_00307F34;

loc_00307F27: ;
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00307F38; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_00307F2C: ;
    xmm0 = XMM_SCALAR(MEMF(ebx)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */

loc_00307F34: ;
    MEMF(ebx) = xmm0.f[0]; /* movss */

loc_00307F38: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x14); /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00307F53; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00307F48: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    goto loc_00307F61;

loc_00307F53: ;
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00307F66; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_00307F58: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */

loc_00307F61: ;
    MEMF(ebx + 4) = xmm0.f[0]; /* movss */

loc_00307F66: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x18); /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00307F81; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00307F76: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    goto loc_00307F8F;

loc_00307F81: ;
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00307F94; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_00307F86: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */

loc_00307F8F: ;
    MEMF(ebx + 8) = xmm0.f[0]; /* movss */

loc_00307F94: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    edi = ebx + 0xC;
    esi = ebx;
    PUSH32(esp, 0x00307FABu); RECOMP_ABI_CALL(0x003078B0u, sub_003078B0); /* call 0x003078B0 */

loc_00307FAB: ;
    eax = MEM32(esp + 0x40);
    ecx = MEM32(esp + 0x34);
    edx = MEM32(esp + 0x4C);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x5C);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x30);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edi = ebx + 0x10;
    esi = ebx + 4;
    PUSH32(esp, 0x00307FCFu); RECOMP_ABI_CALL(0x003078B0u, sub_003078B0); /* call 0x003078B0 */

loc_00307FCF: ;
    edx = MEM32(esp + 0x58);
    eax = MEM32(esp + 0x4C);
    ecx = MEM32(esp + 0x64);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x74);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x48);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    edi = ebx + 0x14;
    esi = ebx + 8;
    PUSH32(esp, 0x00307FF3u); RECOMP_ABI_CALL(0x003078B0u, sub_003078B0); /* call 0x003078B0 */

loc_00307FF3: ;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00307FF6: ;
    eax = MEM32(ebp);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00308004u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00308001u); } /* indirect call */
    }

loc_00308004: ;
    ebp = MEM32(ebp);
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00308013u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00308010u); } /* indirect call */
    }

loc_00308013: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003080A0
 * Original: 0x003080A0 - 0x003080D3 (51 bytes, 13 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003080A0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003080A0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 8)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003080E0
 * Original: 0x003080E0 - 0x0030816E (142 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003080E0(void)
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

loc_003080E0: ;
    xmm0 = XMM_SCALAR(MEMF(0x8C3854)); /* movss */
    eax = MEM32(esp + 0x10);
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 8); /* mulss */
    xmm3 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = sin(fp_top()); /* fsin */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + 4); /* addss */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    SET_LO8(ecx, MEM8(0x8FC448));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm4.f[0]; /* subss */
    if (CMP_EQ(_fa, _fb)) goto loc_0030815B; /* je: equal / zero */

loc_00308142: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 8); /* subss */

loc_0030815B: ;
    eax = MEM32(esp + 4);
    MEMF(eax) = xmm3.f[0]; /* movss */
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003081A0
 * Original: 0x003081A0 - 0x003081E6 (70 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003081A0(void)
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

loc_003081A0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003081CA; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_003081AE: ;
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 8); /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_003081C5; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_003081BF: ;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */

loc_003081C5: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    esp += 4; return; /* ret */

loc_003081CA: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_003081E1; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_003081DB: ;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */

loc_003081E1: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00308200
 * Original: 0x00308200 - 0x00308428 (552 bytes, 140 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00308200(void)
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

loc_00308200: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x14);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    eax = ecx + 0x18;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    edx = eax;
    MEM32(edx) = esi;
    esi = MEM32(esp + 0xC);
    MEM32(edx + 4) = esi;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    esi = MEM32(esp + 0x10);
    MEM32(edx + 8) = esi;
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
    MEMF(esp + 0x18) = xmm3.f[0]; /* movss */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm2 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm5 = XMM_SCALAR(MEMF(0x7AB88C)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(0x7AB2D0)); /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003082A4; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm2.f[0]) */

loc_0030829A: ;
    _fca = xmm5.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_003082AC; /* ja: above (unsigned >) (xmm5.f[0] vs xmm2.f[0]) */

loc_0030829F: ;
    xmm2 = xmm5; /* movaps */
    goto loc_003082AC;

loc_003082A4: ;
    _fca = xmm2.f[0]; _fcb = xmm6.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_003082AC; /* ja: above (unsigned >) (xmm2.f[0] vs xmm6.f[0]) */

loc_003082A9: ;
    xmm2 = xmm6; /* movaps */

loc_003082AC: ;
    xmm4 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm0 = xmm4; /* movaps */
    xmm0.f[0] = xmm0.f[0] / xmm2.f[0]; /* divss */
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax + 4) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax + 8) = xmm2.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax); /* subss */
    MEMF(esp + 8) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    esi = MEM32(esp + 8);
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] - xmm3.f[0]; /* subss */
    MEMF(esp + 0xC) = xmm2.f[0]; /* movss */
    edx = ecx;
    MEM32(edx) = esi;
    esi = MEM32(esp + 0xC);
    MEM32(edx + 4) = esi;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    esi = MEM32(esp + 0x10);
    MEM32(edx + 8) = esi;
    xmm3 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm7 = xmm3; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = xmm0; /* movaps */
    xmm7.f[0] = xmm7.f[0] + xmm3.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 0x18) = xmm7.f[0]; /* movss */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    POP32(esp, esi);
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00308382; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00308378: ;
    _fca = xmm5.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0030838A; /* ja: above (unsigned >) (xmm5.f[0] vs xmm0.f[0]) */

loc_0030837D: ;
    xmm0 = xmm5; /* movaps */
    goto loc_0030838A;

loc_00308382: ;
    _fca = xmm0.f[0]; _fcb = xmm6.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0030838A; /* ja: above (unsigned >) (xmm0.f[0] vs xmm6.f[0]) */

loc_00308387: ;
    xmm0 = xmm6; /* movaps */

loc_0030838A: ;
    xmm1 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm4.f[0] = xmm4.f[0] / xmm0.f[0]; /* divss */
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm3 = xmm4; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    MEMF(ecx + 8) = xmm2.f[0]; /* movss */
    MEMF(ecx + 4) = xmm1.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    MEMF(ecx) = xmm0.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm4.f[0]; /* subss */
    xmm4 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEMF(esp + 4) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    eax = MEM32(esp + 4);
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm3.f[0] = xmm3.f[0] - xmm4.f[0]; /* subss */
    MEM32(ecx) = eax;
    MEMF(esp + 8) = xmm3.f[0]; /* movss */
    edx = MEM32(esp + 8);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 0xC) = xmm2.f[0]; /* movss */
    eax = MEM32(esp + 0xC);
    MEM32(ecx + 4) = edx;
    MEM32(ecx + 8) = eax;
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
 * sub_003084C0
 * Original: 0x003084C0 - 0x00308538 (120 bytes, 27 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003084C0(void)
{

loc_003084C0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    MEMF(esi) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xC) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x20) = xmm0.f[0]; /* movss */
    PUSH32(esp, eax);
    MEMF(esi + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x2C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0030850Bu); RECOMP_ABI_CALL(0x0002E8B2u, sub_0002E8B2); /* call 0x0002E8B2 */

loc_0030850B: ;
    xmm0 = XMM_SCALAR(MEMF(0x8F95C0)); /* movss */
    MEMF(esi + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x8F95C4)); /* movss */
    MEMF(esi + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x8F95C8)); /* movss */
    MEMF(esi + 0x2C) = xmm0.f[0]; /* movss */
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00308560
 * Original: 0x00308560 - 0x003085C6 (102 bytes, 28 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00308560(void)
{

loc_00308560: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    MEMF(esi) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xC) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x20) = xmm0.f[0]; /* movss */
    PUSH32(esp, eax);
    MEMF(esi + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x2C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x003085ABu); RECOMP_ABI_CALL(0x0002E8B2u, sub_0002E8B2); /* call 0x0002E8B2 */

loc_003085AB: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(ecx);
    MEM32(esi + 0x24) = edx;
    eax = MEM32(ecx + 4);
    MEM32(esi + 0x28) = eax;
    ecx = MEM32(ecx + 8);
    MEM32(esi + 0x2C) = ecx;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003085E0
 * Original: 0x003085E0 - 0x00308676 (150 bytes, 39 insns)
 * CC: cdecl, 12 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003085E0(void)
{

loc_003085E0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = MEM32(esp + 4);
    eax = ecx;
    MEMF(eax) = xmm0.f[0]; /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x2C) = xmm0.f[0]; /* movss */
    MEM32(ecx) = edx;
    edx = MEM32(esp + 8);
    MEM32(ecx + 4) = edx;
    edx = MEM32(esp + 0xC);
    MEM32(ecx + 8) = edx;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x14);
    MEM32(eax + 0xC) = ecx;
    ecx = MEM32(esp + 0x18);
    MEM32(eax + 0x10) = edx;
    edx = MEM32(esp + 0x1C);
    MEM32(eax + 0x14) = ecx;
    ecx = MEM32(esp + 0x20);
    MEM32(eax + 0x18) = edx;
    edx = MEM32(esp + 0x24);
    MEM32(eax + 0x1C) = ecx;
    ecx = MEM32(esp + 0x28);
    MEM32(eax + 0x24) = ecx;
    ecx = MEM32(esp + 0x30);
    MEM32(eax + 0x20) = edx;
    edx = MEM32(esp + 0x2C);
    MEM32(eax + 0x28) = edx;
    MEM32(eax + 0x2C) = ecx;
    esp += 52; return; /* ret 48 */

}

/**
 * sub_003086A0
 * Original: 0x003086A0 - 0x0030878B (235 bytes, 59 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003086A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003086A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x5C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    MEMF(esi) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xC) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x20) = xmm0.f[0]; /* movss */
    PUSH32(esp, eax);
    PUSH32(esp, 0x8B54DC);
    ecx = esp + 0x18;
    MEMF(esi + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x2C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003086FCu); RECOMP_ABI_CALL(0x0002182Eu, sub_0002182E); /* call 0x0002182E */

loc_003086FC: ;
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0030870Bu); RECOMP_ABI_CALL(0x0059F7D7u, sub_0059F7D7); /* call 0x0059F7D7 */

loc_0030870B: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + 0x10);
    edx = MEM32(ebp + 0x14);
    MEMF(esi) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    MEMF(esi + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    MEMF(esi + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    MEMF(esi + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    MEMF(esi + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */
    MEMF(esi + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    MEMF(esi + 0x20) = xmm0.f[0]; /* movss */
    MEM32(esi + 0x24) = eax;
    MEM32(esi + 0x28) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x2C) = edx;
    eax = esi;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003087D0
 * Original: 0x003087D0 - 0x003089A3 (467 bytes, 104 insns)
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003087D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003087D0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ecx + 0x28); /* subss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(ecx + 0x2C); /* subss */
    xmm3 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 0x24); /* subss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(ecx + 0x10)); /* movss */
    MEMF(esp) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(ecx + 0x14)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(ecx + 0xC)); /* movss */
    eax = MEM32(esp);
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    MEMF(esp + 4) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(ecx + 0x20)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 0x1C)); /* movss */
    edx = MEM32(esp + 4);
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x18)); /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(ecx + 0x2C); /* subss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 0x24); /* subss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ecx + 0x28); /* subss */
    MEMF(esp + 8) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(ecx + 0x10)); /* movss */
    MEMF(esp) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(ecx + 0x14)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(ecx + 0xC)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    MEMF(esp + 4) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(ecx + 0x20)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 0x1C)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x18)); /* movss */
    ecx = MEM32(esp);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(esp + 8);
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    MEM32(esp + 0x1C) = eax;
    MEMF(esp + 8) = xmm3.f[0]; /* movss */
    eax = MEM32(esp + 8);
    xmm3 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    MEM32(esp + 0x18) = edx;
    edx = MEM32(esp + 4);
    MEM32(esp + 0x28) = eax;
    xmm4 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    MEM32(esp + 0x20) = ecx;
    MEM32(esp + 0x24) = edx;
    xmm1 = xmm3; /* movaps */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    eax = MEM32(esp + 0x10);
    xmm1.f[0] = xmm1.f[0] - xmm4.f[0]; /* subss */
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm5.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] - xmm6.f[0]; /* subss */
    xmm4.f[0] = xmm4.f[0] - xmm3.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm5.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm6.f[0]; /* addss */
    xmm4.f[0] = xmm4.f[0] + xmm3.f[0]; /* addss */
    MEMF(eax) = xmm1.f[0]; /* movss */
    MEMF(eax + 4) = xmm2.f[0]; /* movss */
    MEMF(eax + 8) = xmm4.f[0]; /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 32; return; /* ret 28 */

}

/**
 * sub_00308A20
 * Original: 0x00308A20 - 0x00308A34 (20 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00308A20(void)
{

loc_00308A20: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00308A31u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00308A2Eu); } /* indirect call */
    }

loc_00308A31: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00308A40
 * Original: 0x00308A40 - 0x00308A5A (26 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00308A40(void)
{

loc_00308A40: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    MEM8(ecx + 0x1C) = 0;
    eax = MEM32(eax);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00308A57u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00308A54u); } /* indirect call */
    }

loc_00308A57: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00308A60
 * Original: 0x00308A60 - 0x00308A63 (3 bytes, 1 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00308A60(void)
{

loc_00308A60: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00308A70
 * Original: 0x00308A70 - 0x00308A73 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00308A70(void)
{

loc_00308A70: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00308A80
 * Original: 0x00308A80 - 0x00308C6F (495 bytes, 147 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00308A80(void)
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

loc_00308A80: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x3C);
    eax = MEM32(esi);
    MEM8(eax + 0x1C) = 1;
    eax = MEM32(esi);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00308A9Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00308A9Au); } /* indirect call */
    }

loc_00308A9D: ;
    edi = MEM32(eax);
    eax = MEM32(esi);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00308AACu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00308AA9u); } /* indirect call */
    }

loc_00308AAC: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x1C);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x20);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x28) = ecx;
    MEM32(esp + 0x2C) = edx;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_00308B2A; /* jne: not equal / not zero */

loc_00308AFE: ;
    eax = MEM32(0x8FC60C);
    PUSH32(esp, eax);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00308B10u); RECOMP_ABI_CALL(0x000275E4u, sub_000275E4); /* call 0x000275E4 */

loc_00308B10: ;
    edx = MEM32(eax);
    ecx = MEM32(eax + 4);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(esp + 0x2C) = edx;
    edx = MEM32(eax + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x28) = ecx;
    MEM32(esp + 0x2C) = edx;

loc_00308B2A: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_00308B42; /* jne: not equal / not zero */

loc_00308B34: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AACB0)); /* movss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */

loc_00308B42: ;
    eax = MEM32(esi);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00308B4Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00308B4Au); } /* indirect call */
    }

loc_00308B4D: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_00308C0B; /* jle: less or equal (signed <=) */

loc_00308B5B: ;
    PUSH32(esp, ebp);
    /* nop */

loc_00308B60: ;
    eax = MEM32(esi);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    ebp = ebx + 2;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00308B6Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00308B6Cu); } /* indirect call */
    }

loc_00308B6F: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(eax + 8); /* subss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 4); /* subss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax); /* subss */
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
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00308BD1; /* jne: not equal / not zero */

loc_00308BC0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    goto loc_00308BE1;

loc_00308BD1: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00308BFD; /* jne: not equal / not zero */

loc_00308BD6: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x44); /* comiss */

loc_00308BE1: ;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00308BFD; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00308BE3: ;
    edx = MEM32(eax + 4);
    ecx = MEM32(eax);
    eax = MEM32(eax + 8);
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x20) = edx;
    MEM32(esp + 0x24) = eax;

loc_00308BFD: ;
    eax = MEM32(esp + 0x18);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00308B60; /* jl: less (signed <) */

loc_00308C0A: ;
    POP32(esp, ebp);

loc_00308C0B: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    ecx = MEM32(esp + 0x24);
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    edx = MEM32(esp + 0x28);
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x2C);
    MEM32(esp + 0x20) = eax;
    eax = MEM32(esi);
    edi = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x20) = edx;
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00308C59u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00308C56u); } /* indirect call */
    }

loc_00308C59: ;
    esi = MEM32(esi);
    ecx = MEM32(esi + 0x10);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00308C66u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00308C63u); } /* indirect call */
    }

loc_00308C66: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00308CF0
 * Original: 0x00308CF0 - 0x00308D0A (26 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00308CF0(void)
{

loc_00308CF0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    MEM8(ecx + 0x1C) = 0;
    eax = MEM32(eax);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00308D07u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00308D04u); } /* indirect call */
    }

loc_00308D07: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00308D10
 * Original: 0x00308D10 - 0x00308D13 (3 bytes, 1 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00308D10(void)
{

loc_00308D10: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00308D20
 * Original: 0x00308D20 - 0x00308D23 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00308D20(void)
{

loc_00308D20: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00308D30
 * Original: 0x00308D30 - 0x00308D38 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00308D30(void)
{

loc_00308D30: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(ecx) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00308D40
 * Original: 0x00308D40 - 0x00308D51 (17 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00308D40(void)
{

loc_00308D40: ;
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x8FC43C); /* addss */
    MEMF(ecx) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00308D60
 * Original: 0x00308D60 - 0x00308D78 (24 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00308D60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00308D60: ;
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 4); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00308D73; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esp + 4)) */

loc_00308D6B: ;
    eax = 1;
    esp += 8; return; /* ret 4 */

loc_00308D73: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00308D80
 * Original: 0x00308D80 - 0x00308DA1 (33 bytes, 11 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00308D80(void)
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

loc_00308D80: ;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00308D8E; /* jne: not equal / not zero */

loc_00308D87: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    esp += 16; return; /* ret 12 */

loc_00308D8E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00308D9A; /* jne: not equal / not zero */

loc_00308D93: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    esp += 16; return; /* ret 12 */

loc_00308D9A: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00308DB0
 * Original: 0x00308DB0 - 0x00308DBA (10 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00308DB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00308DB0: ;
    edx = MEM32(ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

}

/**
 * sub_00308DC0
 * Original: 0x00308DC0 - 0x00308DCA (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00308DC0(void)
{

loc_00308DC0: ;
    eax = MEM32(esp + 4);
    MEM32(0x8C3840) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00308DD0
 * Original: 0x00308DD0 - 0x00308DE5 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00308DD0(void)
{

loc_00308DD0: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(esp + 4);
    edx = MEM32(ecx);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEM32(eax) = edx;
    MEMF(ecx) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00308DF0
 * Original: 0x00308DF0 - 0x00308E8D (157 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00308DF0(void)
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

loc_00308DF0: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0xC)); /* fsub dword ptr [esp + 0xc] */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x7AA840)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fucompi */
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((g_fp_cmp == 0 || g_fp_cmp == 2) /* fucompi */) ? 0x40u : 0u) | (((g_fp_cmp == 2) /* fucompi */) ? 0x04u : 0u) | (((g_fp_cmp < 0 || g_fp_cmp == 2) /* fucompi */) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (fucompi) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00308E0F; /* jp: parity */

loc_00308E0A: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    esp += 4; return; /* ret */

loc_00308E0F: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00308E4D; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00308E20: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm0 = xmm1; /* movaps */
    xmm1 = xmm2; /* movaps */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm2.f[0]; /* movss */

loc_00308E4D: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00308E61; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_00308E58: ;
    xmm2 = xmm0; /* movaps */
    MEMF(esp + 4) = xmm2.f[0]; /* movss */

loc_00308E61: ;
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00308E6C; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm1.f[0]) */

loc_00308E66: ;
    MEMF(esp + 4) = xmm1.f[0]; /* movss */

loc_00308E6C: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 8)); /* fsub dword ptr [esp + 8] */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 8)); /* fsub dword ptr [esp + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() / fp_top()); fp_pop(); /* fdivp st(1) */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x10)); /* fsub dword ptr [esp + 0x10] */
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x10)); /* fadd dword ptr [esp + 0x10] */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00308EC0
 * Original: 0x00308EC0 - 0x00308F59 (153 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00308EC0(void)
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

loc_00308EC0: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00308ED4; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00308ED1: ;
    xmm0 = xmm1; /* movaps */

loc_00308ED4: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00308EE2; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm3.f[0]) */

loc_00308EDF: ;
    xmm0 = xmm3; /* movaps */

loc_00308EE2: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00308F17; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_00308EFE: ;
    xmm4 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */
    xmm4.f[0] = xmm4.f[0] / xmm1.f[0]; /* divss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = xmm4; /* movaps */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */

loc_00308F17: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00308F32; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_00308F1C: ;
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm1.f[0] = xmm1.f[0] / xmm3.f[0]; /* divss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */

loc_00308F32: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x10)); /* fsub dword ptr [esp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7AA820)); /* fmul dword ptr [0x7aa820] */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x14)); /* fsub dword ptr [esp + 0x14] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x1C)); /* fmul dword ptr [esp + 0x1c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x1C)); /* fmul dword ptr [esp + 0x1c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x14)); /* fadd dword ptr [esp + 0x14] */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00308F80
 * Original: 0x00308F80 - 0x00309009 (137 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00308F80(void)
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

loc_00308F80: ;
    xmm5 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    xmm0 = xmm5; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00308FA4; /* jp: parity */

loc_00308F9F: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    esp += 4; return; /* ret */

loc_00308FA4: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    if ((_fca >= _fcb)) goto loc_00308FB9; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm2.f[0]) */

loc_00308FB1: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */

loc_00308FB9: ;
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0xC); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x10); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm5.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00308FDA; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm2.f[0]) */

loc_00308FD5: ;
    xmm4 = xmm1; /* movaps */
    goto loc_00308FE1;

loc_00308FDA: ;
    xmm4 = xmm2; /* movaps */
    xmm4.f[0] = xmm4.f[0] - xmm1.f[0]; /* subss */

loc_00308FE1: ;
    xmm3.f[0] = xmm3.f[0] - xmm5.f[0]; /* subss */
    _fca = xmm3.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00308FEF; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm2.f[0]) */

loc_00308FEA: ;
    xmm2 = xmm3; /* movaps */
    goto loc_00308FF3;

loc_00308FEF: ;
    xmm2.f[0] = xmm2.f[0] - xmm3.f[0]; /* subss */

loc_00308FF3: ;
    _fca = xmm4.f[0]; _fcb = xmm2.f[0]; /* comiss */
    MEMF(esp + 4) = xmm5.f[0]; /* movss */
    if ((_fca >= _fcb)) goto loc_00309004; /* jae: above or equal (unsigned >=) (xmm4.f[0] vs xmm2.f[0]) */

loc_00308FFE: ;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */

loc_00309004: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00309030
 * Original: 0x00309030 - 0x00309043 (19 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00309030(void)
{

loc_00309030: ;
    edx = MEM32(esp + 8);
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    PUSH32(esp, esi);
    esi = MEM32(edx);
    MEM32(eax) = esi;
    MEM32(edx) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00309050
 * Original: 0x00309050 - 0x0030906A (26 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00309050(void)
{

loc_00309050: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    MEM8(ecx + 0x1C) = 0;
    eax = MEM32(eax);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00309067u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00309064u); } /* indirect call */
    }

loc_00309067: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00309070
 * Original: 0x00309070 - 0x00309073 (3 bytes, 1 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00309070(void)
{

loc_00309070: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00309080
 * Original: 0x00309080 - 0x00309083 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00309080(void)
{

loc_00309080: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00309090
 * Original: 0x00309090 - 0x0030926A (474 bytes, 175 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00309090(void)
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

loc_00309090: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    ebp = MEM32(edi);
    esi = MEM32(ebp + 0x24);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0030911B; /* jne: not equal / not zero */

loc_003090A0: ;
    PUSH32(esp, 8);
    ecx = ebp;
    PUSH32(esp, 0x003090A9u); RECOMP_ABI_CALL(0x0001F2B3u, sub_0001F2B3); /* call 0x0001F2B3 */

loc_003090A9: ;
    esi = eax;
    MEM8(ebp + 0x1C) = 1;
    SET_LO8(eax, MEM8(0x8FC449));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003090C8; /* je: equal / zero */

loc_003090B8: ;
    eax = MEM32(0x904BEC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003090C8; /* je: equal / zero */

loc_003090C1: ;
    eax = 1;
    goto loc_003090CA;

loc_003090C8: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003090CA: ;
    MEM8(esi + 4) = LO8(eax);
    eax = MEM32(edi);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 5);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x003090DAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003090D7u); } /* indirect call */
    }

loc_003090DA: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AA840); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00309101; /* jnp: not parity */

loc_003090EB: ;
    SET_LO8(eax, MEM8(0x8FC449));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00309101; /* je: equal / zero */

loc_003090F4: ;
    eax = MEM32(0x904BEC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00309101; /* je: equal / zero */

loc_003090FD: ;
    PUSH32(esp, 5);
    goto loc_00309103;

loc_00309101: ;
    PUSH32(esp, 3);

loc_00309103: ;
    eax = MEM32(edi);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0030910Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030910Bu); } /* indirect call */
    }

loc_0030910E: ;
    eax = MEM32(eax);
    MEM32(esi) = eax;
    MEM8(ebp + 0x1C) = 1;
    goto loc_00309249;

loc_0030911B: ;
    SET_LO8(ecx, MEM8(0x8FC449));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    edx = MEM32(0x904BEC);
    if (CMP_EQ(_fa, _fb)) goto loc_00309136; /* je: equal / zero */

loc_0030912B: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00309136; /* je: equal / zero */

loc_0030912F: ;
    eax = 1;
    goto loc_00309138;

loc_00309136: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00309138: ;
    PUSH32(esp, ebx);
    _fa = (uint32_t)(MEM8(esi + 4)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 4), LO8(eax) (8-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(ebx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00309154; /* je: equal / zero */

loc_00309143: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00309154; /* je: equal / zero */

loc_00309147: ;
    ecx = MEM32(ebp + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00309152u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030914Fu); } /* indirect call */
    }

loc_00309152: ;
    goto loc_0030915F;

loc_00309154: ;
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0030915Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030915Cu); } /* indirect call */
    }

loc_0030915F: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi); /* comiss */
    if ((_fca > _fcb)) goto loc_003091E2; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(esi)) */

loc_00309168: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00309172; /* je: equal / zero */

loc_0030916C: ;
    _fa = (uint32_t)(MEM8(esi + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 4), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003091E2; /* je: equal / zero */

loc_00309172: ;
    xmm1 = XMM_SCALAR(MEMF(esi)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0030918E; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_0030917B: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0030922A; /* je: equal / zero */

loc_00309183: ;
    SET_LO8(eax, MEM8(esi + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0030922A; /* jne: not equal / not zero */

loc_0030918E: ;
    eax = MEM32(edi);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0030919Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00309198u); } /* indirect call */
    }

loc_0030919B: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    _fa = (uint32_t)(MEM32(0x8FC428)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8FC428), 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003091B0; /* jne: not equal / not zero */

loc_003091A8: ;
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7CEA20); /* mulss */

loc_003091B0: ;
    xmm1 = XMM_SCALAR(MEMF(0x8FC43C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esi) = xmm0.f[0]; /* movss */
    eax = MEM32(edi);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x003091D5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003091D2u); } /* indirect call */
    }

loc_003091D5: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0030922A; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esi)) */

loc_003091DE: ;
    PUSH32(esp, 1);
    goto loc_0030921B;

loc_003091E2: ;
    eax = MEM32(edi);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x003091EFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003091ECu); } /* indirect call */
    }

loc_003091EF: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x8FC43C); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi); /* addss */
    MEMF(esi) = xmm0.f[0]; /* movss */
    eax = MEM32(edi);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00309210u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030920Du); } /* indirect call */
    }

loc_00309210: ;
    xmm0 = XMM_SCALAR(MEMF(esi)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0030922A; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax)) */

loc_00309219: ;
    PUSH32(esp, 3);

loc_0030921B: ;
    eax = MEM32(edi);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00309226u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00309223u); } /* indirect call */
    }

loc_00309226: ;
    eax = MEM32(eax);
    MEM32(esi) = eax;

loc_0030922A: ;
    SET_LO8(eax, MEM8(0x8FC449));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_00309244; /* je: equal / zero */

loc_00309234: ;
    eax = MEM32(0x904BEC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00309244; /* je: equal / zero */

loc_0030923D: ;
    eax = 1;
    goto loc_00309246;

loc_00309244: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00309246: ;
    MEM8(esi + 4) = LO8(eax);

loc_00309249: ;
    eax = MEM32(edi);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00309257u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00309254u); } /* indirect call */
    }

loc_00309257: ;
    edi = MEM32(edi);
    ecx = MEM32(edi + 0x10);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00309264u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00309261u); } /* indirect call */
    }

loc_00309264: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003092E0
 * Original: 0x003092E0 - 0x003092FA (26 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003092E0(void)
{

loc_003092E0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    MEM8(ecx + 0x1C) = 0;
    eax = MEM32(eax);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x003092F7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003092F4u); } /* indirect call */
    }

loc_003092F7: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00309300
 * Original: 0x00309300 - 0x00309303 (3 bytes, 1 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00309300(void)
{

loc_00309300: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00309310
 * Original: 0x00309310 - 0x00309313 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00309310(void)
{

loc_00309310: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00309320
 * Original: 0x00309320 - 0x00309349 (41 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00309320(void)
{
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00309320: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00309338; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00309333: ;
    MEMF(eax) = xmm1.f[0]; /* movss */
    esp += 4; return; /* ret */

loc_00309338: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00309348; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax)) */

loc_00309344: ;
    MEMF(eax) = xmm0.f[0]; /* movss */

loc_00309348: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00309360
 * Original: 0x00309360 - 0x003094CD (365 bytes, 96 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00309360(void)
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

loc_00309360: ;
    eax = MEM32(esp + 4);
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00309375; /* jb: below (unsigned <) (xmm2.f[0] vs xmm1.f[0]) */

loc_00309370: ;
    xmm0 = xmm2; /* movaps */
    goto loc_0030937C;

loc_00309375: ;
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */

loc_0030937C: ;
    xmm2 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0030938B; /* jb: below (unsigned <) (xmm2.f[0] vs xmm1.f[0]) */

loc_00309386: ;
    xmm1 = xmm2; /* movaps */
    goto loc_0030938F;

loc_0030938B: ;
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */

loc_0030938F: ;
    xmm4 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm5 = xmm4; /* movaps */
    xmm5.f[0] = xmm5.f[0] - xmm2.f[0]; /* subss */
    _fca = xmm5.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm3 = xmm6; /* movaps */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003093CC; /* jbe: below or equal (unsigned <=) (xmm5.f[0] vs xmm0.f[0]) */

loc_003093B0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_003094C1; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_003093BF: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm0 = xmm1; /* movaps */
    goto loc_00309432;

loc_003093CC: ;
    xmm5 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm7 = xmm5; /* movaps */
    xmm7.f[0] = xmm7.f[0] - xmm2.f[0]; /* subss */
    _fca = xmm7.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003093F1; /* jbe: below or equal (unsigned <=) (xmm7.f[0] vs xmm1.f[0]) */

loc_003093DE: ;
    _fca = xmm4.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_003094C1; /* ja: above (unsigned >) (xmm4.f[0] vs xmm0.f[0]) */

loc_003093E7: ;
    xmm0.f[0] = xmm0.f[0] - xmm4.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    goto loc_00309432;

loc_003093F1: ;
    xmm0.f[0] = xmm0.f[0] - xmm4.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm4 = xmm0; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm5.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm0.f[0]; /* addss */
    MEMF(esp + 4) = xmm4.f[0]; /* movss */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca >= _fcb)) goto loc_003094C1; /* jae: above or equal (unsigned >=) (xmm2.f[0] vs xmm0.f[0]) */

loc_00309432: ;
    xmm4 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm4.f[0]; /* comiss */
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] * MEMF(esp + 0x24); /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm6.f[0]; /* addss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00309477; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm4.f[0]) */

loc_00309454: ;
    xmm1 = xmm5; /* movaps */
    xmm2 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm4.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] - xmm4.f[0]; /* subss */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0030946A; /* ja: above (unsigned >) (xmm2.f[0] vs xmm1.f[0]) */

loc_00309467: ;
    xmm1 = xmm2; /* movaps */

loc_0030946A: ;
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x20); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    xmm3 = xmm1; /* movaps */

loc_00309477: ;
    _fca = xmm0.f[0]; _fcb = xmm5.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0030948D; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm5.f[0]) */

loc_0030947C: ;
    xmm0.f[0] = xmm0.f[0] - xmm5.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x28); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    xmm3 = xmm0; /* movaps */

loc_0030948D: ;
    xmm0 = XMM_SCALAR(MEMF(0x7F1408)); /* movss */
    _fca = xmm3.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0030949D; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm0.f[0]) */

loc_0030949A: ;
    xmm3 = xmm0; /* movaps */

loc_0030949D: ;
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x825FF8)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_003094BC; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_003094AF: ;
    xmm0 = XMM_SCALAR(MEMF(0x825FF4)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003094C1; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_003094BC: ;
    MEMF(eax + 8) = xmm0.f[0]; /* movss */

loc_003094C1: ;
    _fca = xmm3.f[0]; _fcb = MEMF(eax + 4); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003094CC; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs MEMF(eax + 4)) */

loc_003094C7: ;
    MEMF(eax + 4) = xmm3.f[0]; /* movss */

loc_003094CC: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00309530
 * Original: 0x00309530 - 0x003096E4 (436 bytes, 110 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00309530(void)
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

loc_00309530: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm6 = XMM_SCALAR(MEMF(0x8E931C)); /* movss */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x20);
    xmm2 = XMM_SCALAR(MEMF(esi)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esp + 0xC) = xmm6.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00309557; /* jb: below (unsigned <) (xmm2.f[0] vs xmm0.f[0]) */

loc_00309552: ;
    xmm1 = xmm2; /* movaps */
    goto loc_0030955E;

loc_00309557: ;
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */

loc_0030955E: ;
    xmm5 = XMM_SCALAR(MEMF(0x825528)); /* movss */
    xmm2 = xmm6; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm5.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    MEMF(esp + 8) = xmm2.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00309690; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm2.f[0]) */

loc_0030957C: ;
    xmm3 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    _fca = xmm3.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0030958B; /* jb: below (unsigned <) (xmm3.f[0] vs xmm0.f[0]) */

loc_00309586: ;
    xmm1 = xmm3; /* movaps */
    goto loc_00309592;

loc_0030958B: ;
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm3.f[0]; /* subss */

loc_00309592: ;
    xmm4 = XMM_SCALAR(MEMF(0x826004)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00309690; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm4.f[0]) */

loc_003095A3: ;
    xmm3 = XMM_SCALAR(MEMF(esi)); /* movss */
    _fca = xmm3.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003095B1; /* jb: below (unsigned <) (xmm3.f[0] vs xmm0.f[0]) */

loc_003095AC: ;
    xmm1 = xmm3; /* movaps */
    goto loc_003095B8;

loc_003095B1: ;
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm3.f[0]; /* subss */

loc_003095B8: ;
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    xmm2 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003095D7; /* jb: below (unsigned <) (xmm2.f[0] vs xmm0.f[0]) */

loc_003095D2: ;
    xmm0 = xmm2; /* movaps */
    goto loc_003095DB;

loc_003095D7: ;
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */

loc_003095DB: ;
    xmm0.f[0] = xmm0.f[0] - xmm4.f[0]; /* subss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    MEMF(esp + 0x20) = xmm2.f[0]; /* movss */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm5.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00309690; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm5.f[0]) */

loc_00309612: ;
    PUSH32(esp, 0x44910000);
    ecx = esp + 0x14;
    PUSH32(esp, 0x00309620u); RECOMP_ABI_CALL(0x000130D0u, sub_000130D0); /* call 0x000130D0 */

loc_00309620: ;
    fp_pop(); /* fstp st(0) */
    xmm1 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm2 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm1 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00309644; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0030963E: ;
    MEMF(esi) = xmm2.f[0]; /* movss */
    goto loc_00309648;

loc_00309644: ;
    MEMF(esi) = xmm1.f[0]; /* movss */

loc_00309648: ;
    xmm3 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    _fca = xmm3.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00309659; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm0.f[0]) */

loc_00309652: ;
    MEMF(esi + 8) = xmm2.f[0]; /* movss */
    goto loc_0030965E;

loc_00309659: ;
    MEMF(esi + 8) = xmm1.f[0]; /* movss */

loc_0030965E: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x10); /* addss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi); /* mulss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEMF(esi) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x826004); /* addss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 8); /* mulss */
    MEMF(esi + 8) = xmm0.f[0]; /* movss */

loc_00309690: ;
    xmm1 = XMM_SCALAR(MEMF(0x82552C)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm0 = xmm6; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003096AE; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_003096A8: ;
    MEMF(esi) = xmm0.f[0]; /* movss */
    goto loc_003096BB;

loc_003096AE: ;
    xmm1.f[0] = xmm1.f[0] - xmm6.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = MEMF(esi); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003096BB; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs MEMF(esi)) */

loc_003096B7: ;
    MEMF(esi) = xmm1.f[0]; /* movss */

loc_003096BB: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x826000)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_003096DA; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_003096CD: ;
    xmm0 = XMM_SCALAR(MEMF(0x825FFC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003096DF; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_003096DA: ;
    MEMF(esi + 8) = xmm0.f[0]; /* movss */

loc_003096DF: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00309760
 * Original: 0x00309760 - 0x003097A8 (72 bytes, 21 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00309760(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00309760: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    eax = MEM32(esp + 4);
    fp_top() = sin(fp_top()); /* fsin */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = cos(fp_top()); /* fcos */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = -fp_top(); /* fchs */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(eax + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003097C0
 * Original: 0x003097C0 - 0x00309865 (165 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003097C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003097C0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 4); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x18)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 8); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x10)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 4); /* mulss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x1C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 8); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x14)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 4); /* mulss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax); /* mulss */
    edx = MEM32(esp + 4);
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x20)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 8); /* mulss */
    ecx = MEM32(esp);
    eax = MEM32(esp + 0x18);
    MEM32(eax) = ecx;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 8);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00309890
 * Original: 0x00309890 - 0x003098D6 (70 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00309890(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00309890: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = ecx;
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp);
    MEM32(eax + 4) = ecx;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 4);
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 8);
    MEM32(eax + 8) = edx;
    MEM32(eax) = 0;
    MEM32(eax + 0xC) = ecx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003098F0
 * Original: 0x003098F0 - 0x00309922 (50 bytes, 14 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003098F0(void)
{

loc_003098F0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = MEM32(esp + 8);
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x10);
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = edx;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00309930
 * Original: 0x00309930 - 0x00309985 (85 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00309930(void)
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

loc_00309930: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    fp_push(MEMF(eax + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0xC)); /* fsub dword ptr [ecx + 0xc] */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x82552C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_00309962; /* jbe: below or equal (unsigned <=) */

loc_0030994C: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 4); /* comiss */
    if ((_fca > _fcb)) goto loc_0030996D; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(ecx + 4)) */

loc_00309957: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 4); /* comiss */
    if ((_fca > _fcb)) goto loc_0030997E; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(eax + 4)) */

loc_00309962: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 0xC); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00309973; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx + 0xC)) */

loc_0030996D: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_00309973: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0xC); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00309982; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax + 0xC)) */

loc_0030997E: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

loc_00309982: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003099A0
 * Original: 0x003099A0 - 0x00309A19 (121 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003099A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003099A0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx + 4;
    PUSH32(esp, edi);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    ebp = MEM32(esp + 0x14);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    ebx = MEM32(esp + 0x18);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x1C);
    MEM32(esp + 0x10) = ecx;
    edx = esi + 4;
    edi = 0x14;
    goto loc_003099E0;

    /* nop */

loc_003099E0: ;
    MEMF(edx) = xmm0.f[0]; /* movss */
    MEMF(edx + 4) = xmm0.f[0]; /* movss */
    MEMF(edx + 8) = xmm0.f[0]; /* movss */
    ecx = edx;
    MEM32(ecx) = ebp;
    MEM32(esi) = 0;
    MEM32(ecx + 4) = ebx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + 8) = eax;
    if ((_fa != 0)) goto loc_003099E0; /* jne: not equal / not zero */

loc_00309A07: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(eax) = 0;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00309A40
 * Original: 0x00309A40 - 0x00309A69 (41 bytes, 13 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00309A40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00309A40: ;
    eax = MEM32(ecx);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = eax + ecx + 4;
    eax = MEM32(esp + 4);
    MEM32(edx) = eax;
    eax = MEM32(esp + 8);
    MEM32(edx + 4) = eax;
    eax = MEM32(esp + 0xC);
    MEM32(edx + 8) = eax;
    eax = MEM32(esp + 0x10);
    MEM32(edx + 0xC) = eax;
    MEM32(ecx) = MEM32(ecx) + 1;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00309A80
 * Original: 0x00309A80 - 0x00309A97 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00309A80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00309A80: ;
    eax = MEM32(ecx);
    PUSH32(esp, 0x1F4FC);
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00309A93u); RECOMP_ABI_CALL(0x005CC050u, sub_005CC050); /* call 0x005CC050 */

loc_00309A93: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00309AA0
 * Original: 0x00309AA0 - 0x00309AC2 (34 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00309AA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00309AA0: ;
    edx = MEM32(ecx);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00309ABC; /* jle: less or equal (signed <=) */

loc_00309AA9: ;
    esi = MEM32(esp + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00309AB0: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00309ABE; /* je: equal / zero */

loc_00309AB4: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00309AB0; /* jl: less (signed <) */

loc_00309ABC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00309ABE: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00309AD0
 * Original: 0x00309AD0 - 0x00309B2D (93 bytes, 37 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00309AD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00309AD0: ;
    edx = MEM32(ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_00309AEE; /* jle: less or equal (signed <=) */

loc_00309ADB: ;
    edi = MEM32(esp + 0x10);
    esi = ecx + 4;

loc_00309AE2: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00309AF0; /* je: equal / zero */

loc_00309AE6: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00309AE2; /* jl: less (signed <) */

loc_00309AEE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00309AF0: ;
    SET_LO8(ebx, MEM8(0x8C38AA));
    POP32(esp, edi);
    POP32(esp, esi);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_00309B16; /* je: equal / zero */

loc_00309AFD: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00309B23; /* jl: less (signed <) */

loc_00309B02: ;
    eax = edx + -2;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM8(0x8C38AA) = 0;
    eax = MEM32(eax + ecx + 4);
    esp += 8; return; /* ret 4 */

loc_00309B16: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_00309B23; /* jns: not sign (positive) */

loc_00309B19: ;
    eax = 1;
    MEM8(0x8C38AA) = LO8(eax);

loc_00309B23: ;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = MEM32(eax + ecx + 4);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00309B50
 * Original: 0x00309B50 - 0x00309BDB (139 bytes, 46 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00309B50(void)
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

loc_00309B50: ;
    PUSH32(esp, ecx);
    edx = MEM32(ecx);
    xmm3 = XMM_SCALAR(MEMF(0x7D9DC4)); /* movss */
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00309BD6; /* jle: less or equal (signed <=) */

loc_00309B64: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    edx = ecx + 0x10;
    /* nop */

loc_00309B70: ;
    xmm2 = XMM_SCALAR(MEMF(edx)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(edi + 8); /* subss */
    xmm1 = XMM_SCALAR(MEMF(edx + -4)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(edi + 4); /* subss */
    xmm0 = XMM_SCALAR(MEMF(edx + -8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edi); /* subss */
    xmm4 = xmm2; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm4.f[0] = xmm4.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x14) = xmm4.f[0]; /* movss */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm3.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00309BCA; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm0.f[0]) */

loc_00309BC4: ;
    eax = MEM32(edx + -12);
    xmm3 = xmm0; /* movaps */

loc_00309BCA: ;
    ebx = MEM32(ecx);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00309B70; /* jl: less (signed <) */

loc_00309BD4: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_00309BD6: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00309C00
 * Original: 0x00309C00 - 0x00309CA4 (164 bytes, 56 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00309C00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00309C00: ;
    SET_LO8(eax, MEM8(0x8C38A8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00309C0F; /* je: equal / zero */

loc_00309C09: ;
    eax = 0x82604C;
    esp += 4; return; /* ret */

loc_00309C0F: ;
    PUSH32(esp, esi);
    esi = MEM32(0x8C38AC);
    eax = esi + 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x33) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x33 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00309C5E; /* ja: above (unsigned >) */

loc_00309C1E: ;
    eax = ZX8(MEM8(eax + 0x309CC0));
    { uint32_t _jt = MEM32(eax * 4 + 0x309CA4); /* switch: 7 entries, 7 targets */
    if (_jt == 0x00309C2Cu) goto loc_00309C2C;
    if (_jt == 0x00309C42u) goto loc_00309C42;
    if (_jt == 0x00309C49u) goto loc_00309C49;
    if (_jt == 0x00309C50u) goto loc_00309C50;
    if (_jt == 0x00309C57u) goto loc_00309C57;
    if (_jt == 0x00309C5Eu) goto loc_00309C5E;
    if (_jt == 0x00309C85u) goto loc_00309C85;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00309C2C: ;
    ecx = MEM32(0x8E8F84);
    _fa = (uint32_t)(MEM32(ecx + 0xAC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x28) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xAC), 0x28 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00309C85; /* je: equal / zero */

loc_00309C3B: ;
    eax = 0x826044;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00309C42: ;
    eax = 0x82603C;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00309C49: ;
    eax = 0x826034;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00309C50: ;
    eax = 0x826024;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00309C57: ;
    eax = 0x826014;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00309C5E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00309C9D; /* jl: less (signed <) */

loc_00309C62: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x28) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x28 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00309C9D; /* jge: greater or equal (signed >=) */

loc_00309C67: ;
    ecx = MEM32(0x8FCAD8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00309C73u); RECOMP_ABI_CALL(0x00035E41u, sub_00035E41); /* call 0x00035E41 */

loc_00309C73: ;
    eax = MEM32(eax + 8);
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_00309C8C; /* je: equal / zero */

loc_00309C7B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00309C8C; /* je: equal / zero */

loc_00309C80: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00309C9D; /* jne: not equal / not zero */

loc_00309C85: ;
    eax = 0x826008;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00309C8C: ;
    ecx = MEM32(0x8FCAD8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00309C98u); RECOMP_ABI_CALL(0x00035E41u, sub_00035E41); /* call 0x00035E41 */

loc_00309C98: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00309C9D: ;
    eax = 0x7B891F;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00309D40
 * Original: 0x00309D40 - 0x00309D6A (42 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00309D40(void)
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

loc_00309D40: ;
    fp_push(MEMF(0x8C38B8)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7AB8B0)); /* fmul dword ptr [0x7ab8b0] */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x82605C);
    PUSH32(esp, 0x8FC5B4);
    PUSH32(esp, 0x00309D61u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00309D61: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0x8FC5B4;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00309D80
 * Original: 0x00309D80 - 0x00309D9D (29 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00309D80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00309D80: ;
    eax = MEM32(0x8C38B4);
    PUSH32(esp, 1);
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    PUSH32(esp, 0x8FC5B8);
    PUSH32(esp, 0x00309D94u); RECOMP_ABI_CALL(0x0001271Bu, sub_0001271B); /* call 0x0001271B */

loc_00309D94: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0x8FC5B8;
    esp += 4; return; /* ret */

}

/**
 * sub_00309DB0
 * Original: 0x00309DB0 - 0x00309DCA (26 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00309DB0(void)
{

loc_00309DB0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    MEM8(ecx + 0x1C) = 0;
    eax = MEM32(eax);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00309DC7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00309DC4u); } /* indirect call */
    }

loc_00309DC7: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00309DD0
 * Original: 0x00309DD0 - 0x00309DD3 (3 bytes, 1 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00309DD0(void)
{

loc_00309DD0: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00309DE0
 * Original: 0x00309DE0 - 0x00309DE3 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00309DE0(void)
{

loc_00309DE0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00309DF0
 * Original: 0x00309DF0 - 0x00309E41 (81 bytes, 27 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00309DF0(void)
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

loc_00309DF0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    eax = MEM32(esp + 0x10);
    fp_top() = sin(fp_top()); /* fsin */
    ecx = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = cos(fp_top()); /* fcos */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = cos(fp_top()); /* fcos */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp);
    fp_push(MEMF(esp + 0x18)); /* fld float */
    MEM32(ecx) = edx;
    fp_top() = sin(fp_top()); /* fsin */
    edx = MEM32(esp + 4);
    MEM32(ecx + 4) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 8);
    MEM32(ecx + 8) = edx;
    fp_pop(); /* fstp st(0) */
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
 * sub_00309E60
 * Original: 0x00309E60 - 0x0030A1FE (926 bytes, 285 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00309E60(void)
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

loc_00309E60: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x58);
    eax = MEM32(esi);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00309E76u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00309E73u); } /* indirect call */
    }

loc_00309E76: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    eax = MEM32(esp + 0x40);
    ecx = MEM32(esp + 0x44);
    MEM32(esp + 0x34) = eax;
    eax = MEM32(esi);
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x48);
    MEM32(esp + 0x38) = ecx;
    ecx = MEM32(eax + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    MEM32(esp + 0x40) = edx;
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00309EBBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00309EB8u); } /* indirect call */
    }

loc_00309EBB: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    eax = MEM32(esi);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00309ED2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00309ECFu); } /* indirect call */
    }

loc_00309ED2: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    eax = MEM32(esi);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    PUSH32(esp, eax);
    MEMF(esp + 0x64) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00309EE9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00309EE6u); } /* indirect call */
    }

loc_00309EE9: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    eax = MEM32(esi);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00309F00u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00309EFDu); } /* indirect call */
    }

loc_00309F00: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    eax = MEM32(esi);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 5);
    PUSH32(esp, eax);
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00309F17u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00309F14u); } /* indirect call */
    }

loc_00309F17: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    eax = MEM32(esi);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 6);
    PUSH32(esp, eax);
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00309F2Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00309F2Bu); } /* indirect call */
    }

loc_00309F2E: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    eax = MEM32(esi);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 7);
    PUSH32(esp, eax);
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00309F45u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00309F42u); } /* indirect call */
    }

loc_00309F45: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    eax = MEM32(esi);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 8);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00309F5Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00309F59u); } /* indirect call */
    }

loc_00309F5C: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    eax = MEM32(esi);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 9);
    PUSH32(esp, eax);
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00309F73u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00309F70u); } /* indirect call */
    }

loc_00309F73: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    eax = MEM32(esi);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xA);
    PUSH32(esp, eax);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00309F8Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00309F87u); } /* indirect call */
    }

loc_00309F8A: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    eax = MEM32(esi);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xB);
    PUSH32(esp, eax);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00309FA1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00309F9Eu); } /* indirect call */
    }

loc_00309FA1: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    eax = MEM32(esi);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xC);
    PUSH32(esp, eax);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00309FB8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00309FB5u); } /* indirect call */
    }

loc_00309FB8: ;
    edi = MEM32(esi);
    ecx = MEM32(edi + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_0030A0D3; /* jne: not equal / not zero */

loc_00309FCF: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0xC);
    ecx = edi;
    PUSH32(esp, 0x00309FD9u); RECOMP_ABI_CALL(0x0001F2B3u, sub_0001F2B3); /* call 0x0001F2B3 */

loc_00309FD9: ;
    fp_push(MEMF(esp + 0x60)); /* fld float */
    fp_top() = sin(fp_top()); /* fsin */
    ebx = esp + 0x44;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    MEMF(esp + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x50);
    fp_push(MEMF(esp + 0x68)); /* fld float */
    MEM32(esp + 0x5C) = edx;
    fp_top() = cos(fp_top()); /* fcos */
    edx = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = cos(fp_top()); /* fcos */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x4C);
    fp_push(MEMF(esp + 0x18)); /* fld float */
    MEM32(esp + 0x58) = ecx;
    fp_top() = sin(fp_top()); /* fsin */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x40); /* addss */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x5C)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x44); /* addss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x54);
    MEM32(esp + 0x60) = ecx;
    ecx = MEM32(esp + 0x4C);
    fp_pop(); /* fstp st(0) */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x60)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x48); /* addss */
    MEM32(edx) = ecx;
    ecx = MEM32(esp + 0x50);
    MEM32(edx + 4) = ecx;
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x54);
    MEM32(edx + 8) = ecx;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    edx = MEM32(esp + 0x58);
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    eax = MEM32(esp + 0x5C);
    MEM32(esp + 0x50) = eax;
    eax = MEM32(esi);
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x60);
    MEM32(esp + 0x4C) = edx;
    MEM32(esp + 0x54) = ecx;
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0030A0B9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030A0B6u); } /* indirect call */
    }

loc_0030A0B9: ;
    esi = MEM32(esi);
    ecx = MEM32(esi + 0x10);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0030A0C6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030A0C3u); } /* indirect call */
    }

loc_0030A0C6: ;
    POP32(esp, ebx);
    MEM8(edi + 0x1C) = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0030A0D3: ;
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    fp_top() = sin(fp_top()); /* fsin */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    MEMF(esp + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x50);
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    MEM32(esp + 0x44) = eax;
    fp_top() = cos(fp_top()); /* fcos */
    eax = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = cos(fp_top()); /* fcos */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x4C);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    MEM32(esp + 0x40) = edx;
    fp_top() = sin(fp_top()); /* fsin */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x34); /* addss */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x38); /* addss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x54);
    MEM32(esp + 0x48) = edx;
    edx = MEM32(esp + 0x4C);
    fp_pop(); /* fstp st(0) */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x3C); /* addss */
    MEM32(eax) = edx;
    edx = MEM32(esp + 0x50);
    MEM32(eax + 4) = edx;
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x54);
    MEM32(eax + 8) = edx;
    eax = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x2C);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x34);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x3C);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x44);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x4C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0030A19Cu); RECOMP_ABI_CALL(0x00022BF7u, sub_00022BF7); /* call 0x00022BF7 */

loc_0030A19C: ;
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    MEMF(esp + 0x74) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    MEMF(esp + 0x78) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    ecx = MEM32(esp + 0x74);
    edx = MEM32(esp + 0x78);
    MEMF(esp + 0x7C) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x7C);
    MEM32(esp + 0x70) = eax;
    eax = MEM32(esi);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x40) = ecx;
    MEM32(esp + 0x44) = edx;
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    edi = esp + 0x40;
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0030A1E9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030A1E6u); } /* indirect call */
    }

loc_0030A1E9: ;
    esi = MEM32(esi);
    ecx = MEM32(esi + 0x10);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0030A1F6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030A1F3u); } /* indirect call */
    }

loc_0030A1F6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0030A2F0
 * Original: 0x0030A2F0 - 0x0030A30A (26 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030A2F0(void)
{

loc_0030A2F0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    MEM8(ecx + 0x1C) = 0;
    eax = MEM32(eax);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0030A307u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030A304u); } /* indirect call */
    }

loc_0030A307: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0030A310
 * Original: 0x0030A310 - 0x0030A313 (3 bytes, 1 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030A310(void)
{

loc_0030A310: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0030A320
 * Original: 0x0030A320 - 0x0030A323 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030A320(void)
{

loc_0030A320: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0030A330
 * Original: 0x0030A330 - 0x0030A440 (272 bytes, 86 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030A330(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030A330: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x28);
    esi = MEM32(edi);
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030A34F; /* jne: not equal / not zero */

loc_0030A342: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x0030A34Bu); RECOMP_ABI_CALL(0x0001F2B3u, sub_0001F2B3); /* call 0x0001F2B3 */

loc_0030A34B: ;
    MEM8(esi + 0x1C) = 1;

loc_0030A34F: ;
    eax = MEM32(edi);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0030A35Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030A359u); } /* indirect call */
    }

loc_0030A35C: ;
    esi = MEM32(eax);
    eax = MEM32(edi);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0030A36Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030A368u); } /* indirect call */
    }

loc_0030A36B: ;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    esi = esi + esi * 8;
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        esi = _sv << _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM8(esi + 0x8FC478) = 1;
    MEM32(esp + 0x20) = eax;
    eax = MEM32(edi);
    MEM32(esp + 0x18) = ecx;
    ecx = MEM32(eax + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    MEM32(esp + 0x20) = edx;
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0030A399u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030A396u); } /* indirect call */
    }

loc_0030A399: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    ecx = MEM32(esp + 8);
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    edx = MEM32(esp + 0xC);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    eax = esi + 0x8FC47C;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x10);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    ecx = MEM32(esp + 8);
    edx = esi + 0x8FC488;
    MEM32(edx) = ecx;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    MEM32(edx + 4) = ecx;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x10);
    MEM32(edx + 8) = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edx + 0xC) = eax;
    eax = MEM32(edi);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0030A423u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030A420u); } /* indirect call */
    }

loc_0030A423: ;
    eax = MEM32(eax);
    MEM32(esi + 0x8FC498) = eax;
    edi = MEM32(edi);
    ecx = MEM32(edi + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0030A438u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030A435u); } /* indirect call */
    }

loc_0030A438: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0030A490
 * Original: 0x0030A490 - 0x0030A4AA (26 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030A490(void)
{

loc_0030A490: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    MEM8(ecx + 0x1C) = 0;
    eax = MEM32(eax);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0030A4A7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030A4A4u); } /* indirect call */
    }

loc_0030A4A7: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0030A4B0
 * Original: 0x0030A4B0 - 0x0030A4B3 (3 bytes, 1 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030A4B0(void)
{

loc_0030A4B0: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0030A4C0
 * Original: 0x0030A4C0 - 0x0030A4C3 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030A4C0(void)
{

loc_0030A4C0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0030A4D0
 * Original: 0x0030A4D0 - 0x0030A507 (55 bytes, 12 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030A4D0(void)
{
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0030A4D0: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AA840); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0030A4F4; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(0x7AA840)) */

loc_0030A4E1: ;
    ecx = MEM32(esp + 8);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(ecx) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

loc_0030A4F4: ;
    edx = MEM32(esp + 8);
    xmm0 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */
    MEMF(edx) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0030A520
 * Original: 0x0030A520 - 0x0030A536 (22 bytes, 8 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030A520(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030A520: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    edx = MEM32(esp + 8);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM32(edx) = eax;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0030A540
 * Original: 0x0030A540 - 0x0030A54D (13 bytes, 3 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030A540(void)
{

loc_0030A540: ;
    eax = MEM32(esp + 8);
    MEM32(eax) = 0;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0030A550
 * Original: 0x0030A550 - 0x0030A62F (223 bytes, 62 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030A550(void)
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

loc_0030A550: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x10));
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0));
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0030A588; /* je: equal / zero */

loc_0030A55E: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0030A572; /* je: equal / zero */

loc_0030A561: ;
    edx = MEM32(esp + 0x18);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(edx) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0030A572: ;
    edx = MEM32(esp + 0x18);
    xmm0 = XMM_SCALAR(MEMF(0x8FC3EC)); /* movss */
    MEMF(edx) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0030A588: ;
    ecx = MEM32(0x901E28);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0030A594u); RECOMP_ABI_CALL(0x000244B1u, sub_000244B1); /* call 0x000244B1 */

loc_0030A594: ;
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x78)) >> 32) & 1);
    eax = eax + 0x78;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, 0x0030A5A1u); RECOMP_ABI_CALL(0x0001BE6Au, sub_0001BE6A); /* call 0x0001BE6A */

loc_0030A5A1: ;
    ecx = MEM32(0x901E28);
    PUSH32(esp, 0x0030A5ACu); RECOMP_ABI_CALL(0x000244B1u, sub_000244B1); /* call 0x000244B1 */

loc_0030A5AC: ;
    esi = MEM32(eax + 0x48);
    ecx = esp + 4;
    PUSH32(esp, 0x0030A5B8u); RECOMP_ABI_CALL(0x00023B7Eu, sub_00023B7E); /* call 0x00023B7E */

loc_0030A5B8: ;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0030A5C8u); RECOMP_ABI_CALL(0x00034136u, sub_00034136); /* call 0x00034136 */

loc_0030A5C8: ;
    ecx = eax;
    PUSH32(esp, 0x0030A5CFu); RECOMP_ABI_CALL(0x00023B7Eu, sub_00023B7E); /* call 0x00023B7E */

loc_0030A5CF: ;
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x18) / fp_top()); /* fdivr dword ptr [esp + 0x18] */
    ecx = esp + 0xC;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0030A5E0u); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_0030A5E0: ;
    ecx = esp + 4;
    PUSH32(esp, 0x0030A5E9u); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_0030A5E9: ;
    fp_push(MEMF(0x7A9980)); /* fld float */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    POP32(esp, esi);
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_0030A610; /* jbe: below or equal (unsigned <=) */

loc_0030A5FA: ;
    edx = MEM32(esp + 0x18);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(edx) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0030A610: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0030A621; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0030A61E: ;
    xmm0 = xmm1; /* movaps */

loc_0030A621: ;
    edx = MEM32(esp + 0x18);
    MEMF(edx) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0030A670
 * Original: 0x0030A670 - 0x0030A6E8 (120 bytes, 29 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030A670(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030A670: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(eax);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    ecx = MEM32(esp + 0xC);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x10);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x14);
    MEM32(esp) = ecx;
    xmm0 = XMM_SCALAR(MEMF(esp)); /* movss */
    ecx = MEM32(esp + 0x20);
    MEM32(esp + 4) = edx;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    edx = MEM32(esp + 0xC);
    MEM32(esp + 8) = eax;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    eax = MEM32(esp + 0x10);
    MEM32(ecx) = edx;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x14);
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = edx;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0030A710
 * Original: 0x0030A710 - 0x0030A762 (82 bytes, 30 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030A710(void)
{
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0030A710: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx);
    edx = MEM32(esp + 0x10);
    MEM32(edx) = eax;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(esi)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0030A744; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax)) */

loc_0030A72E: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0030A73B; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx)) */

loc_0030A737: ;
    eax = MEM32(eax);
    MEM32(edx) = eax;

loc_0030A73B: ;
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi); /* comiss */
    goto loc_0030A758;

loc_0030A744: ;
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0030A751; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax)) */

loc_0030A74D: ;
    eax = MEM32(eax);
    MEM32(edx) = eax;

loc_0030A751: ;
    xmm0 = XMM_SCALAR(MEMF(esi)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx); /* comiss */

loc_0030A758: ;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0030A75E; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx)) */

loc_0030A75A: ;
    ecx = MEM32(esi);
    MEM32(edx) = ecx;

loc_0030A75E: ;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0030A780
 * Original: 0x0030A780 - 0x0030A82C (172 bytes, 44 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030A780(void)
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

loc_0030A780: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esp + 0x1C);
    eax = MEM32(ecx + 8);
    edx = MEM32(ecx + 4);
    ecx = MEM32(ecx);
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x8C3854); /* mulss */
    xmm2 = XMM_SCALAR(MEMF(edx)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = sin(fp_top()); /* fsin */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(esp)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + 4); /* addss */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    SET_LO8(ecx, MEM8(0x8FC448));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    xmm4 = XMM_SCALAR(MEMF(esp)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm4.f[0]; /* subss */
    if (CMP_EQ(_fa, _fb)) goto loc_0030A7FC; /* je: equal / zero */

loc_0030A7E5: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 8); /* subss */

loc_0030A7FC: ;
    edx = MEM32(esp + 0x14);
    MEMF(esp + 4) = xmm3.f[0]; /* movss */
    eax = MEM32(esp + 4);
    MEM32(edx) = eax;
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    ecx = MEM32(esp + 8);
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0xC);
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0030A860
 * Original: 0x0030A860 - 0x0030A894 (52 bytes, 20 insns)
 * CC: cdecl, 6 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0030A860(void)
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

loc_0030A860: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(eax);
    edx = MEM32(esp + 0x10);
    eax = MEM32(edx);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    ecx = MEM32(eax);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    eax = MEM32(edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0030A888u); RECOMP_ABI_CALL(0x00024EB1u, sub_00024EB1); /* call 0x00024EB1 */

loc_0030A888: ;
    ecx = MEM32(esp + 0x2C);
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 28; return; /* ret 24 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0030A8B0
 * Original: 0x0030A8B0 - 0x0030A91F (111 bytes, 52 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030A8B0(void)
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

loc_0030A8B0: ;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(ecx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    eax = MEM32(edx);
    PUSH32(esp, eax);
    eax = MEM32(esi);
    PUSH32(esp, eax);
    eax = MEM32(edi);
    PUSH32(esp, eax);
    eax = MEM32(ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0030A8DCu); RECOMP_ABI_CALL(0x00024EB1u, sub_00024EB1); /* call 0x00024EB1 */

loc_0030A8DC: ;
    ebp = MEM32(esp + 0x3C);
    MEMF(ebp) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(ecx + 4);
    PUSH32(esp, eax);
    eax = MEM32(edx + 4);
    PUSH32(esp, eax);
    eax = MEM32(esi);
    PUSH32(esp, eax);
    eax = MEM32(edi);
    PUSH32(esp, eax);
    eax = MEM32(ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0030A8F9u); RECOMP_ABI_CALL(0x00024EB1u, sub_00024EB1); /* call 0x00024EB1 */

loc_0030A8F9: ;
    MEMF(ebp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(ecx + 8);
    edx = MEM32(edx + 8);
    eax = MEM32(esi);
    PUSH32(esp, ecx);
    ecx = MEM32(edi);
    PUSH32(esp, edx);
    edx = MEM32(ebx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0030A912u); RECOMP_ABI_CALL(0x00024EB1u, sub_00024EB1); /* call 0x00024EB1 */

loc_0030A912: ;
    MEMF(ebp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 28; return; /* ret 24 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0030A940
 * Original: 0x0030A940 - 0x0030A9F5 (181 bytes, 47 insns)
 * CC: cdecl, 8 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030A940(void)
{
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0030A940: ;
    edx = MEM32(esp + 0x14);
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 0x18);
    xmm5 = XMM_SCALAR(MEMF(edx)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    edx = MEM32(esp + 8);
    xmm4 = XMM_SCALAR(MEMF(ecx)); /* movss */
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0xC);
    xmm1 = XMM_SCALAR(MEMF(edx)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm3 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(ecx)); /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0030A978; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0030A975: ;
    xmm0 = xmm1; /* movaps */

loc_0030A978: ;
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0030A980; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm3.f[0]) */

loc_0030A97D: ;
    xmm0 = xmm3; /* movaps */

loc_0030A980: ;
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0030A9A3; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_0030A990: ;
    xmm6 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */
    xmm6.f[0] = xmm6.f[0] / xmm1.f[0]; /* divss */
    xmm6.f[0] = xmm6.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = xmm6; /* movaps */

loc_0030A9A3: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0030A9BB; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_0030A9A8: ;
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm1.f[0] = xmm1.f[0] / xmm3.f[0]; /* divss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = xmm1; /* movaps */

loc_0030A9BB: ;
    eax = MEM32(esp + 0x1C);
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    ecx = MEM32(esp + 0x20);
    xmm1.f[0] = xmm1.f[0] - xmm5.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x7AA820); /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] + xmm5.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] - xmm4.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm4.f[0]; /* addss */
    MEMF(ecx) = xmm2.f[0]; /* movss */
    esp += 36; return; /* ret 32 */

}

/**
 * sub_0030AA30
 * Original: 0x0030AA30 - 0x0030AC1D (493 bytes, 133 insns)
 * CC: cdecl, 8 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030AA30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0030AA30: ;
    eax = MEM32(esp + 4);
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x14);
    xmm4 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(edx)); /* movss */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(ebx)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1C);
    xmm3 = XMM_SCALAR(MEMF(esi)); /* movss */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    xmm2 = XMM_SCALAR(MEMF(edi)); /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0030AA6C; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0030AA69: ;
    xmm1 = xmm0; /* movaps */

loc_0030AA6C: ;
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0030AA74; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm3.f[0]) */

loc_0030AA71: ;
    xmm1 = xmm3; /* movaps */

loc_0030AA74: ;
    xmm6 = XMM_ZERO(); /* xorps self = zero */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    _fca = xmm6.f[0]; _fcb = xmm1.f[0]; /* comiss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0030AA97; /* jbe: below or equal (unsigned <=) (xmm6.f[0] vs xmm1.f[0]) */

loc_0030AA84: ;
    xmm2 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */
    xmm2.f[0] = xmm2.f[0] / xmm0.f[0]; /* divss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = xmm2; /* movaps */

loc_0030AA97: ;
    _fca = xmm1.f[0]; _fcb = xmm6.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0030AAAF; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm6.f[0]) */

loc_0030AA9C: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm0.f[0] = xmm0.f[0] / xmm3.f[0]; /* divss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = xmm0; /* movaps */

loc_0030AAAF: ;
    ebp = MEM32(esp + 0x2C);
    xmm0 = XMM_SCALAR(MEMF(ebp)); /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x7AA820)); /* movss */
    ebp = MEM32(esp + 0x30);
    xmm0.f[0] = xmm0.f[0] - xmm5.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm7.f[0]; /* mulss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] + xmm5.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] - xmm4.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm4.f[0]; /* addss */
    MEMF(ebp) = xmm2.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    xmm3 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(edi)); /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0030AB0E; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0030AB0B: ;
    xmm1 = xmm0; /* movaps */

loc_0030AB0E: ;
    _fca = xmm1.f[0]; _fcb = xmm5.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0030AB16; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm5.f[0]) */

loc_0030AB13: ;
    xmm1 = xmm5; /* movaps */

loc_0030AB16: ;
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    _fca = xmm6.f[0]; _fcb = xmm1.f[0]; /* comiss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0030AB36; /* jbe: below or equal (unsigned <=) (xmm6.f[0] vs xmm1.f[0]) */

loc_0030AB23: ;
    xmm2 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */
    xmm2.f[0] = xmm2.f[0] / xmm0.f[0]; /* divss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = xmm2; /* movaps */

loc_0030AB36: ;
    _fca = xmm1.f[0]; _fcb = xmm6.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0030AB4E; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm6.f[0]) */

loc_0030AB3B: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm0.f[0] = xmm0.f[0] / xmm5.f[0]; /* divss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = xmm0; /* movaps */

loc_0030AB4E: ;
    ebp = MEM32(esp + 0x2C);
    xmm0 = XMM_SCALAR(MEMF(ebp + 4)); /* movss */
    ebp = MEM32(esp + 0x30);
    xmm0.f[0] = xmm0.f[0] - xmm4.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm7.f[0]; /* mulss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] + xmm4.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] - xmm3.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    MEMF(ebp + 4) = xmm2.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebx)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm4 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(edi)); /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0030ABA5; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0030ABA2: ;
    xmm0 = xmm1; /* movaps */

loc_0030ABA5: ;
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0030ABAD; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm3.f[0]) */

loc_0030ABAA: ;
    xmm0 = xmm3; /* movaps */

loc_0030ABAD: ;
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    _fca = xmm6.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0030ABCD; /* jbe: below or equal (unsigned <=) (xmm6.f[0] vs xmm0.f[0]) */

loc_0030ABBA: ;
    xmm2 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */
    xmm2.f[0] = xmm2.f[0] / xmm1.f[0]; /* divss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = xmm2; /* movaps */

loc_0030ABCD: ;
    _fca = xmm0.f[0]; _fcb = xmm6.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0030ABE5; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm6.f[0]) */

loc_0030ABD2: ;
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm1.f[0] = xmm1.f[0] / xmm3.f[0]; /* divss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = xmm1; /* movaps */

loc_0030ABE5: ;
    eax = MEM32(esp + 0x2C);
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm5.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] * xmm7.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] + xmm5.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] - xmm4.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    POP32(esp, edi);
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    POP32(esp, esi);
    xmm2.f[0] = xmm2.f[0] + xmm4.f[0]; /* addss */
    MEMF(ebp + 8) = xmm2.f[0]; /* movss */
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 36; return; /* ret 32 */

}

/**
 * sub_0030ACA0
 * Original: 0x0030ACA0 - 0x0030B03E (926 bytes, 225 insns)
 * CC: cdecl, 10 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030ACA0(void)
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

loc_0030ACA0: ;
    _fb = (uint32_t)(0x330) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x330));
    esp = esp - 0x330;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = MEM32(esp + 0x344);
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    eax = MEM32(esp + 0x340);
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    edx = MEM32(esp + 0x348);
    eax = MEM32(esp + 0x34C);
    ecx = MEM32(esp + 0x350);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx)); /* movss */
    edx = MEM32(esp + 0x354);
    MEMF(esp + 0x1AC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    eax = MEM32(esp + 0x358);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    MEMF(esp + 0x1B0) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx)); /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    eax = MEM32(esp + 0x360);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if (((1) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(eax)) >> ((((1) & 31u)) - 1)) & 1);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    edi = MEM32(esp + 0x364);
    MEMF(esp + 0x1B4) = xmm0.f[0]; /* movss */
    if (CMP_L(_fas, _fbs)) goto loc_0030ADA0; /* jl: less (signed <) */

loc_0030AD3D: ;
    esi = eax + -3;
    edx = edi + 8;

loc_0030AD43: ;
    ebx = MEM32(edx + -8);
    ebx = MEM32(ebx);
    MEM32(esp + ecx * 4 + 0x28) = ebx;
    ebx = MEM32(edx + -4);
    ebx = MEM32(ebx);
    MEM32(esp + ecx * 4 + 0x1B8) = ebx;
    ebx = MEM32(edx);
    ebx = MEM32(ebx);
    MEM32(esp + ecx * 4 + 0x2C) = ebx;
    ebx = MEM32(edx + 4);
    ebx = MEM32(ebx);
    MEM32(esp + ecx * 4 + 0x1BC) = ebx;
    ebx = MEM32(edx + 8);
    ebx = MEM32(ebx);
    MEM32(esp + ecx * 4 + 0x30) = ebx;
    ebx = MEM32(edx + 0xC);
    ebx = MEM32(ebx);
    MEM32(esp + ecx * 4 + 0x1C0) = ebx;
    ebx = MEM32(edx + 0x10);
    ebx = MEM32(ebx);
    MEM32(esp + ecx * 4 + 0x34) = ebx;
    ebx = MEM32(edx + 0x14);
    ebx = MEM32(ebx);
    MEM32(esp + ecx * 4 + 0x1C4) = ebx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(4)) >> 32) & 1);
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0x20)) >> 32) & 1);
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_0030AD43; /* jl: less (signed <) */

loc_0030ADA0: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_0030ADBF; /* jge: greater or equal (signed >=) */

loc_0030ADA4: ;
    edx = MEM32(edi + ecx * 8);
    edx = MEM32(edx);
    MEM32(esp + ecx * 4 + 0x28) = edx;
    edx = MEM32(edi + ecx * 8 + 4);
    edx = MEM32(edx);
    MEM32(esp + ecx * 4 + 0x1B8) = edx;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_0030ADA4; /* jl: less (signed <) */

loc_0030ADBF: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x20); /* comiss */
    edi = eax + 3;
    MEM32(esp + 0x18) = edi;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0030AF5C; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esp + 0x20)) */

loc_0030ADD7: ;
    eax = edi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if (((1) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(eax)) >> ((((1) & 31u)) - 1)) & 1);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0xC) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0030AF10; /* jl: less (signed <) */

loc_0030ADED: ;
    PUSH32(esp, ebp);
    ebp = esp + 0x20;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ebp) < (uint32_t)(0xC));
    ebp = ebp - 0xC;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = edi * 4 + -4;
    MEM32(esp + 0x18) = ebp;
    edx = esp + 0x20;
    edi = esp + 0x1B0;
    ebx = esp + 0x20;
    eax = esp + 0x1B0;
    ebp = esp + 0x1B0;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(4));
    edx = edx - 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edi) < (uint32_t)(4));
    edi = edi - 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ebx) < (uint32_t)(8));
    ebx = ebx - 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(8));
    eax = eax - 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ebp) < (uint32_t)(0xC));
    ebp = ebp - 0xC;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x14) = ebp;

loc_0030AE30: ;
    ebp = MEM32(esp + ecx + 0x20);
    xmm0 = XMM_SCALAR(MEMF(esp + esi * 4 + 0x20)); /* movss */
    MEM32(esp + esi * 4 + 0x20) = ebp;
    ebp = MEM32(esp + ecx + 0x1B0);
    MEMF(esp + ecx + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + esi * 4 + 0x1B0)); /* movss */
    MEM32(esp + esi * 4 + 0x1B0) = ebp;
    ebp = MEM32(edx + ecx);
    MEMF(esp + ecx + 0x1B0) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + esi * 4 + 0x24)); /* movss */
    MEM32(esp + esi * 4 + 0x24) = ebp;
    ebp = MEM32(edi + ecx);
    MEMF(edx + ecx) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + esi * 4 + 0x1B4)); /* movss */
    MEM32(esp + esi * 4 + 0x1B4) = ebp;
    ebp = MEM32(ebx + ecx);
    MEMF(edi + ecx) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + esi * 4 + 0x28)); /* movss */
    MEM32(esp + esi * 4 + 0x28) = ebp;
    ebp = MEM32(eax + ecx);
    MEMF(ebx + ecx) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + esi * 4 + 0x1B8)); /* movss */
    MEM32(esp + esi * 4 + 0x1B8) = ebp;
    ebp = MEM32(esp + 0x18);
    ebp = MEM32(ecx + ebp);
    MEMF(eax + ecx) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + esi * 4 + 0x2C)); /* movss */
    MEM32(esp + esi * 4 + 0x2C) = ebp;
    ebp = MEM32(esp + 0x18);
    MEMF(ecx + ebp) = xmm0.f[0]; /* movss */
    ebp = MEM32(esp + 0x14);
    ebp = MEM32(ecx + ebp);
    xmm0 = XMM_SCALAR(MEMF(esp + esi * 4 + 0x1BC)); /* movss */
    MEM32(esp + esi * 4 + 0x1BC) = ebp;
    ebp = MEM32(esp + 0x14);
    MEMF(ecx + ebp) = xmm0.f[0]; /* movss */
    ebp = MEM32(esp + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(4)) >> 32) & 1);
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xFFFFFFFDu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebp) + (uint64_t)(0xFFFFFFFDu)) >> 32) & 1);
    ebp = ebp + 0xFFFFFFFDu;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(0x10));
    ecx = ecx - 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_0030AE30; /* jl: less (signed <) */

loc_0030AF07: ;
    eax = MEM32(esp + 0x10);
    edi = MEM32(esp + 0x1C);
    POP32(esp, ebp);

loc_0030AF10: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_0030AF5C; /* jge: greater or equal (signed >=) */

loc_0030AF14: ;
    ecx = edi;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(esi));
    ecx = ecx - esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ecx * 4 + -4;
    /* nop */

loc_0030AF20: ;
    edx = MEM32(esp + ecx + 0x1C);
    xmm0 = XMM_SCALAR(MEMF(esp + esi * 4 + 0x1C)); /* movss */
    MEM32(esp + esi * 4 + 0x1C) = edx;
    edx = MEM32(esp + ecx + 0x1AC);
    MEMF(esp + ecx + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + esi * 4 + 0x1AC)); /* movss */
    MEM32(esp + esi * 4 + 0x1AC) = edx;
    MEMF(esp + ecx + 0x1AC) = xmm0.f[0]; /* movss */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(4));
    ecx = ecx - 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_0030AF20; /* jl: less (signed <) */

loc_0030AF5C: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1AC)); /* movss */
    if ((_fca >= _fcb)) goto loc_0030B027; /* jae: above or equal (unsigned >=) (xmm1.f[0] vs xmm2.f[0]) */

loc_0030AF74: ;
    _fca = xmm2.f[0]; _fcb = MEMF(esp + edi * 4 + 0x18); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0030AF9B; /* jb: below (unsigned <) (xmm2.f[0] vs MEMF(esp + edi * 4 + 0x18)) */

loc_0030AF7B: ;
    xmm0 = XMM_SCALAR(MEMF(esp + edi * 4 + 0x1A8)); /* movss */
    ecx = MEM32(esp + 0x35C);
    POP32(esp, edi);
    POP32(esp, esi);
    MEMF(ecx) = xmm0.f[0]; /* movss */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x330) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x330)) >> 32) & 1);
    esp = esp + 0x330;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 44; return; /* ret 40 */

loc_0030AF9B: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_0030B027; /* jle: less or equal (signed <=) */

loc_0030AFA5: ;
    xmm3 = XMM_SCALAR(MEMF(esp + ecx * 4 + 0x1C)); /* movss */
    eax = ecx + 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    xmm1 = xmm3; /* movaps */
    if (CMP_GE(_fas, _fbs)) goto loc_0030AFBB; /* jge: greater or equal (signed >=) */

loc_0030AFB5: ;
    xmm1 = XMM_SCALAR(MEMF(esp + ecx * 4 + 0x20)); /* movss */

loc_0030AFBB: ;
    _fca = xmm2.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0030AFC5; /* jb: below (unsigned <) (xmm2.f[0] vs xmm3.f[0]) */

loc_0030AFC0: ;
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca >= _fcb)) goto loc_0030AFE2; /* jae: above or equal (unsigned >=) (xmm1.f[0] vs xmm2.f[0]) */

loc_0030AFC5: ;
    ecx = eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_0030AFA5; /* jl: less (signed <) */

loc_0030AFCB: ;
    ecx = MEM32(esp + 0x35C);
    POP32(esp, edi);
    POP32(esp, esi);
    MEMF(ecx) = xmm0.f[0]; /* movss */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x330) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x330)) >> 32) & 1);
    esp = esp + 0x330;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 44; return; /* ret 40 */

loc_0030AFE2: ;
    xmm0 = XMM_SCALAR(MEMF(esp + ecx * 4 + 0x1AC)); /* movss */
    eax = ecx + 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    edx = esp + ecx * 4 + 0x1AC;
    if (CMP_GE(_fas, _fbs)) goto loc_0030B027; /* jge: greater or equal (signed >=) */

loc_0030AFF9: ;
    xmm1.f[0] = xmm1.f[0] - xmm3.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = MEMF(0x7AA840); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0030B027; /* jnp: not parity */

loc_0030B00A: ;
    xmm0 = XMM_SCALAR(MEMF(esp + ecx * 4 + 0x1B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edx); /* subss */
    xmm2.f[0] = xmm2.f[0] - xmm3.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] / xmm1.f[0]; /* divss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edx); /* addss */

loc_0030B027: ;
    ecx = MEM32(esp + 0x35C);
    POP32(esp, edi);
    POP32(esp, esi);
    MEMF(ecx) = xmm0.f[0]; /* movss */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x330) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x330)) >> 32) & 1);
    esp = esp + 0x330;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 44; return; /* ret 40 */

}

/**
 * sub_0030B130
 * Original: 0x0030B130 - 0x0030B14D (29 bytes, 9 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030B130(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030B130: ;
    eax = MEM32(0x8E932C);
    edx = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    eax = MEM32(esp + 8);
    if (CMP_EQ(_fa, _fb)) goto loc_0030B146; /* je: equal / zero */

loc_0030B142: ;
    eax = MEM32(esp + 4);

loc_0030B146: ;
    ecx = MEM32(eax);
    MEM32(edx) = ecx;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0030B160
 * Original: 0x0030B160 - 0x0030B166 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030B160(void)
{

loc_0030B160: ;
    eax = MEM32(0x8FC44C);
    esp += 4; return; /* ret */

}

/**
 * sub_0030B170
 * Original: 0x0030B170 - 0x0030B17E (14 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030B170(void)
{

loc_0030B170: ;
    MEM32(ecx + 4) = 0;
    MEM32(ecx) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0030B190
 * Original: 0x0030B190 - 0x0030B295 (261 bytes, 71 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030B190(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0030B190: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030B293; /* je: equal / zero */

loc_0030B19D: ;
    eax = MEM32(esi + 4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x16) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x16 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0030B25C; /* ja: above (unsigned >) */

loc_0030B1AA: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x30B298); /* switch: 23 entries, 23 targets */
    if (_jt == 0x0030B1B1u) goto loc_0030B1B1;
    if (_jt == 0x0030B1BBu) goto loc_0030B1BB;
    if (_jt == 0x0030B1C5u) goto loc_0030B1C5;
    if (_jt == 0x0030B1CFu) goto loc_0030B1CF;
    if (_jt == 0x0030B1D9u) goto loc_0030B1D9;
    if (_jt == 0x0030B1E0u) goto loc_0030B1E0;
    if (_jt == 0x0030B1E7u) goto loc_0030B1E7;
    if (_jt == 0x0030B1EEu) goto loc_0030B1EE;
    if (_jt == 0x0030B1F5u) goto loc_0030B1F5;
    if (_jt == 0x0030B1FCu) goto loc_0030B1FC;
    if (_jt == 0x0030B203u) goto loc_0030B203;
    if (_jt == 0x0030B20Au) goto loc_0030B20A;
    if (_jt == 0x0030B211u) goto loc_0030B211;
    if (_jt == 0x0030B218u) goto loc_0030B218;
    if (_jt == 0x0030B21Fu) goto loc_0030B21F;
    if (_jt == 0x0030B226u) goto loc_0030B226;
    if (_jt == 0x0030B22Du) goto loc_0030B22D;
    if (_jt == 0x0030B234u) goto loc_0030B234;
    if (_jt == 0x0030B23Bu) goto loc_0030B23B;
    if (_jt == 0x0030B242u) goto loc_0030B242;
    if (_jt == 0x0030B249u) goto loc_0030B249;
    if (_jt == 0x0030B250u) goto loc_0030B250;
    if (_jt == 0x0030B257u) goto loc_0030B257;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0030B1B1: ;
    PUSH32(esp, 0x0030B1B6u); RECOMP_ABI_CALL(0x00020C44u, sub_00020C44); /* call 0x00020C44 */

loc_0030B1B6: ;
    goto loc_0030B25C;

loc_0030B1BB: ;
    PUSH32(esp, 0x0030B1C0u); RECOMP_ABI_CALL(0x000151A0u, sub_000151A0); /* call 0x000151A0 */

loc_0030B1C0: ;
    goto loc_0030B25C;

loc_0030B1C5: ;
    PUSH32(esp, 0x0030B1CAu); RECOMP_ABI_CALL(0x00014E67u, sub_00014E67); /* call 0x00014E67 */

loc_0030B1CA: ;
    goto loc_0030B25C;

loc_0030B1CF: ;
    PUSH32(esp, 0x0030B1D4u); RECOMP_ABI_CALL(0x000301C6u, sub_000301C6); /* call 0x000301C6 */

loc_0030B1D4: ;
    goto loc_0030B25C;

loc_0030B1D9: ;
    PUSH32(esp, 0x0030B1DEu); RECOMP_ABI_CALL(0x0001228Eu, sub_0001228E); /* call 0x0001228E */

loc_0030B1DE: ;
    goto loc_0030B25C;

loc_0030B1E0: ;
    PUSH32(esp, 0x0030B1E5u); RECOMP_ABI_CALL(0x000190EDu, sub_000190ED); /* call 0x000190ED */

loc_0030B1E5: ;
    goto loc_0030B25C;

loc_0030B1E7: ;
    PUSH32(esp, 0x0030B1ECu); RECOMP_ABI_CALL(0x00019EDFu, sub_00019EDF); /* call 0x00019EDF */

loc_0030B1EC: ;
    goto loc_0030B25C;

loc_0030B1EE: ;
    PUSH32(esp, 0x0030B1F3u); RECOMP_ABI_CALL(0x0002C729u, sub_0002C729); /* call 0x0002C729 */

loc_0030B1F3: ;
    goto loc_0030B25C;

loc_0030B1F5: ;
    PUSH32(esp, 0x0030B1FAu); RECOMP_ABI_CALL(0x0001500Bu, sub_0001500B); /* call 0x0001500B */

loc_0030B1FA: ;
    goto loc_0030B25C;

loc_0030B1FC: ;
    PUSH32(esp, 0x0030B201u); RECOMP_ABI_CALL(0x00012AC7u, sub_00012AC7); /* call 0x00012AC7 */

loc_0030B201: ;
    goto loc_0030B25C;

loc_0030B203: ;
    PUSH32(esp, 0x0030B208u); RECOMP_ABI_CALL(0x00037200u, sub_00037200); /* call 0x00037200 */

loc_0030B208: ;
    goto loc_0030B25C;

loc_0030B20A: ;
    PUSH32(esp, 0x0030B20Fu); RECOMP_ABI_CALL(0x00027BEDu, sub_00027BED); /* call 0x00027BED */

loc_0030B20F: ;
    goto loc_0030B25C;

loc_0030B211: ;
    PUSH32(esp, 0x0030B216u); RECOMP_ABI_CALL(0x00037110u, sub_00037110); /* call 0x00037110 */

loc_0030B216: ;
    goto loc_0030B25C;

loc_0030B218: ;
    PUSH32(esp, 0x0030B21Du); RECOMP_ABI_CALL(0x00030702u, sub_00030702); /* call 0x00030702 */

loc_0030B21D: ;
    goto loc_0030B25C;

loc_0030B21F: ;
    PUSH32(esp, 0x0030B224u); RECOMP_ABI_CALL(0x000210F9u, sub_000210F9); /* call 0x000210F9 */

loc_0030B224: ;
    goto loc_0030B25C;

loc_0030B226: ;
    PUSH32(esp, 0x0030B22Bu); RECOMP_ABI_CALL(0x0002B59Fu, sub_0002B59F); /* call 0x0002B59F */

loc_0030B22B: ;
    goto loc_0030B25C;

loc_0030B22D: ;
    PUSH32(esp, 0x0030B232u); RECOMP_ABI_CALL(0x00030DABu, sub_00030DAB); /* call 0x00030DAB */

loc_0030B232: ;
    goto loc_0030B25C;

loc_0030B234: ;
    PUSH32(esp, 0x0030B239u); RECOMP_ABI_CALL(0x000381EBu, sub_000381EB); /* call 0x000381EB */

loc_0030B239: ;
    goto loc_0030B25C;

loc_0030B23B: ;
    PUSH32(esp, 0x0030B240u); RECOMP_ABI_CALL(0x00032EF3u, sub_00032EF3); /* call 0x00032EF3 */

loc_0030B240: ;
    goto loc_0030B25C;

loc_0030B242: ;
    PUSH32(esp, 0x0030B247u); RECOMP_ABI_CALL(0x000316B1u, sub_000316B1); /* call 0x000316B1 */

loc_0030B247: ;
    goto loc_0030B25C;

loc_0030B249: ;
    PUSH32(esp, 0x0030B24Eu); RECOMP_ABI_CALL(0x00022AE4u, sub_00022AE4); /* call 0x00022AE4 */

loc_0030B24E: ;
    goto loc_0030B25C;

loc_0030B250: ;
    PUSH32(esp, 0x0030B255u); RECOMP_ABI_CALL(0x00029A3Du, sub_00029A3D); /* call 0x00029A3D */

loc_0030B255: ;
    goto loc_0030B25C;

loc_0030B257: ;
    PUSH32(esp, 0x0030B25Cu); RECOMP_ABI_CALL(0x000303D8u, sub_000303D8); /* call 0x000303D8 */

loc_0030B25C: ;
    PUSH32(esp, 0x3C23D70A);
    ecx = 0x8FC540;
    PUSH32(esp, 0x0030B26Bu); RECOMP_ABI_CALL(0x00027EEFu, sub_00027EEF); /* call 0x00027EEF */

loc_0030B26B: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030B277; /* je: equal / zero */

loc_0030B271: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0030B277u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030B275u); } /* indirect call */
    }

loc_0030B277: ;
    PUSH32(esp, 0x3C23D70A);
    ecx = 0x8FC540;
    PUSH32(esp, 0x0030B286u); RECOMP_ABI_CALL(0x00027EEFu, sub_00027EEF); /* call 0x00027EEF */

loc_0030B286: ;
    MEM32(esi) = 0;
    MEM32(esi + 4) = 0;

loc_0030B293: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0030B350
 * Original: 0x0030B350 - 0x0030B4B0 (352 bytes, 160 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030B350(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0030B350: ;
    eax = MEM32(ecx + 4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x16) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x16 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0030B405; /* ja: above (unsigned >) */

loc_0030B35D: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x30B408); /* switch: 23 entries, 23 targets */
    if (_jt == 0x0030B364u) goto loc_0030B364;
    if (_jt == 0x0030B36Bu) goto loc_0030B36B;
    if (_jt == 0x0030B372u) goto loc_0030B372;
    if (_jt == 0x0030B379u) goto loc_0030B379;
    if (_jt == 0x0030B380u) goto loc_0030B380;
    if (_jt == 0x0030B387u) goto loc_0030B387;
    if (_jt == 0x0030B38Eu) goto loc_0030B38E;
    if (_jt == 0x0030B395u) goto loc_0030B395;
    if (_jt == 0x0030B39Cu) goto loc_0030B39C;
    if (_jt == 0x0030B3A3u) goto loc_0030B3A3;
    if (_jt == 0x0030B3AAu) goto loc_0030B3AA;
    if (_jt == 0x0030B3B1u) goto loc_0030B3B1;
    if (_jt == 0x0030B3B8u) goto loc_0030B3B8;
    if (_jt == 0x0030B3BFu) goto loc_0030B3BF;
    if (_jt == 0x0030B3C6u) goto loc_0030B3C6;
    if (_jt == 0x0030B3CDu) goto loc_0030B3CD;
    if (_jt == 0x0030B3D4u) goto loc_0030B3D4;
    if (_jt == 0x0030B3DBu) goto loc_0030B3DB;
    if (_jt == 0x0030B3E2u) goto loc_0030B3E2;
    if (_jt == 0x0030B3E9u) goto loc_0030B3E9;
    if (_jt == 0x0030B3F0u) goto loc_0030B3F0;
    if (_jt == 0x0030B3F7u) goto loc_0030B3F7;
    if (_jt == 0x0030B3FEu) goto loc_0030B3FE;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0030B364: ;
    ecx = MEM32(ecx);
    g_seh_ebp = ebp; sub_00036FA8(); return; /* tail jmp 0x00036FA8 */

loc_0030B36B: ;
    ecx = MEM32(ecx);
    g_seh_ebp = ebp; sub_00032E3A(); return; /* tail jmp 0x00032E3A */

loc_0030B372: ;
    ecx = MEM32(ecx);
    g_seh_ebp = ebp; sub_00022A03(); return; /* tail jmp 0x00022A03 */

loc_0030B379: ;
    ecx = MEM32(ecx);
    g_seh_ebp = ebp; sub_0002E6C8(); return; /* tail jmp 0x0002E6C8 */

loc_0030B380: ;
    ecx = MEM32(ecx);
    g_seh_ebp = ebp; sub_0001DBFC(); return; /* tail jmp 0x0001DBFC */

loc_0030B387: ;
    ecx = MEM32(ecx);
    g_seh_ebp = ebp; sub_0002875F(); return; /* tail jmp 0x0002875F */

loc_0030B38E: ;
    ecx = MEM32(ecx);
    g_seh_ebp = ebp; sub_00022422(); return; /* tail jmp 0x00022422 */

loc_0030B395: ;
    ecx = MEM32(ecx);
    g_seh_ebp = ebp; sub_0001F772(); return; /* tail jmp 0x0001F772 */

loc_0030B39C: ;
    ecx = MEM32(ecx);
    g_seh_ebp = ebp; sub_00015934(); return; /* tail jmp 0x00015934 */

loc_0030B3A3: ;
    ecx = MEM32(ecx);
    g_seh_ebp = ebp; sub_00033E0C(); return; /* tail jmp 0x00033E0C */

loc_0030B3AA: ;
    ecx = MEM32(ecx);
    g_seh_ebp = ebp; sub_0002EB64(); return; /* tail jmp 0x0002EB64 */

loc_0030B3B1: ;
    ecx = MEM32(ecx);
    g_seh_ebp = ebp; sub_000285B6(); return; /* tail jmp 0x000285B6 */

loc_0030B3B8: ;
    ecx = MEM32(ecx);
    g_seh_ebp = ebp; sub_0001DFC6(); return; /* tail jmp 0x0001DFC6 */

loc_0030B3BF: ;
    ecx = MEM32(ecx);
    g_seh_ebp = ebp; sub_0001E5BB(); return; /* tail jmp 0x0001E5BB */

loc_0030B3C6: ;
    ecx = MEM32(ecx);
    g_seh_ebp = ebp; sub_000144DF(); return; /* tail jmp 0x000144DF */

loc_0030B3CD: ;
    ecx = MEM32(ecx);
    g_seh_ebp = ebp; sub_00033439(); return; /* tail jmp 0x00033439 */

loc_0030B3D4: ;
    ecx = MEM32(ecx);
    g_seh_ebp = ebp; sub_0002E27C(); return; /* tail jmp 0x0002E27C */

loc_0030B3DB: ;
    ecx = MEM32(ecx);
    g_seh_ebp = ebp; sub_0002324B(); return; /* tail jmp 0x0002324B */

loc_0030B3E2: ;
    ecx = MEM32(ecx);
    g_seh_ebp = ebp; sub_000137F6(); return; /* tail jmp 0x000137F6 */

loc_0030B3E9: ;
    ecx = MEM32(ecx);
    g_seh_ebp = ebp; sub_0002249F(); return; /* tail jmp 0x0002249F */

loc_0030B3F0: ;
    ecx = MEM32(ecx);
    g_seh_ebp = ebp; sub_000247A4(); return; /* tail jmp 0x000247A4 */

loc_0030B3F7: ;
    ecx = MEM32(ecx);
    g_seh_ebp = ebp; sub_0001C167(); return; /* tail jmp 0x0001C167 */

loc_0030B3FE: ;
    ecx = MEM32(ecx);
    g_seh_ebp = ebp; sub_000347A8(); return; /* tail jmp 0x000347A8 */

loc_0030B405: ;
    esp += 4; return; /* ret */

    MEM8(eax) = MEM8(eax) ^ LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    if ((_fas >= 0)) (void)0; /* goto loc_0030B3C9 - dead code, label not in function */ /* jns: not sign (positive) */

loc_0030B416: ;
    MEM8(eax) = MEM8(eax) ^ LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(ebx + -1282998224) = MEM8(ebx + -1282998224) ^ 0x30;
    _fa = (uint32_t)(MEM8(ebx + -1282998224)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(esi + -1795149645) = MEM8(esi + -1795149645) + LO8(ecx);
    _fa = (uint32_t)(MEM8(esi + -1795149645)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(ebx, 0x30);
    _fb = (uint32_t)(HI8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(edi + -620744525) = MEM8(edi + -620744525) + HI8(ebx);
    _fa = (uint32_t)(MEM8(edi + -620744525)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(ebx, 0x30);
    _fb = (uint32_t)(HI8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(ecx + -1560268621) = MEM8(ecx + -1560268621) + HI8(edx);
    _fa = (uint32_t)(MEM8(ecx + -1560268621)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(ebx, 0x30);
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_HI8(edx, HI8(edx) + LO8(eax));
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(ebx, 0x30);
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + HI8(eax));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(ebx, 0x30);
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_HI8(ecx, HI8(ecx) + LO8(ecx));
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(ebx, 0x30);
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_HI8(eax, HI8(eax) + LO8(edx));
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(ebx, 0x30);
    _fb = (uint32_t)(HI8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(edx + -1207947085) = MEM8(edx + -1207947085) + HI8(ecx);
    _fa = (uint32_t)(MEM8(edx + -1207947085)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(ebx, 0x30);
    _fb = (uint32_t)(HI8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + HI8(edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(ebx, 0x30);
    _fb = (uint32_t)(HI8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_HI8(ebx, HI8(ebx) + HI8(edx));
    _fa = (uint32_t)(HI8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(ebx, 0x30);
    _fb = (uint32_t)(HI8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(ecx, LO8(ecx) + HI8(ecx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(ebx, 0x30);
    _fb = (uint32_t)(HI8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_HI8(edx, HI8(edx) + HI8(ebx));
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(ebx, 0x30);
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(ebx + esi * 4 + -859045840) = MEM8(ebx + esi * 4 + -859045840) + LO8(ebx);
    _fa = (uint32_t)(MEM8(ebx + esi * 4 + -859045840)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
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

}

/**
 * sub_0030B4B0
 * Original: 0x0030B4B0 - 0x0030B614 (356 bytes, 172 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030B4B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0030B4B0: ;
    eax = MEM32(ecx + 4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x16) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x16 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0030B565; /* ja: above (unsigned >) */

loc_0030B4BD: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x30B568); /* switch: 23 entries, 23 targets */
    if (_jt == 0x0030B4C4u) goto loc_0030B4C4;
    if (_jt == 0x0030B4CBu) goto loc_0030B4CB;
    if (_jt == 0x0030B4D2u) goto loc_0030B4D2;
    if (_jt == 0x0030B4D9u) goto loc_0030B4D9;
    if (_jt == 0x0030B4E0u) goto loc_0030B4E0;
    if (_jt == 0x0030B4E7u) goto loc_0030B4E7;
    if (_jt == 0x0030B4EEu) goto loc_0030B4EE;
    if (_jt == 0x0030B4F5u) goto loc_0030B4F5;
    if (_jt == 0x0030B4FCu) goto loc_0030B4FC;
    if (_jt == 0x0030B503u) goto loc_0030B503;
    if (_jt == 0x0030B50Au) goto loc_0030B50A;
    if (_jt == 0x0030B511u) goto loc_0030B511;
    if (_jt == 0x0030B518u) goto loc_0030B518;
    if (_jt == 0x0030B51Fu) goto loc_0030B51F;
    if (_jt == 0x0030B526u) goto loc_0030B526;
    if (_jt == 0x0030B52Du) goto loc_0030B52D;
    if (_jt == 0x0030B534u) goto loc_0030B534;
    if (_jt == 0x0030B53Bu) goto loc_0030B53B;
    if (_jt == 0x0030B542u) goto loc_0030B542;
    if (_jt == 0x0030B549u) goto loc_0030B549;
    if (_jt == 0x0030B550u) goto loc_0030B550;
    if (_jt == 0x0030B557u) goto loc_0030B557;
    if (_jt == 0x0030B55Eu) goto loc_0030B55E;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0030B4C4: ;
    ecx = MEM32(ecx);
    g_seh_ebp = ebp; sub_00034B13(); return; /* tail jmp 0x00034B13 */

loc_0030B4CB: ;
    ecx = MEM32(ecx);
    g_seh_ebp = ebp; sub_00018779(); return; /* tail jmp 0x00018779 */

loc_0030B4D2: ;
    ecx = MEM32(ecx);
    g_seh_ebp = ebp; sub_00017F04(); return; /* tail jmp 0x00017F04 */

loc_0030B4D9: ;
    ecx = MEM32(ecx);
    g_seh_ebp = ebp; sub_000289A3(); return; /* tail jmp 0x000289A3 */

loc_0030B4E0: ;
    ecx = MEM32(ecx);
    g_seh_ebp = ebp; sub_000157F9(); return; /* tail jmp 0x000157F9 */

loc_0030B4E7: ;
    ecx = MEM32(ecx);
    g_seh_ebp = ebp; sub_00027B20(); return; /* tail jmp 0x00027B20 */

loc_0030B4EE: ;
    ecx = MEM32(ecx);
    g_seh_ebp = ebp; sub_00035379(); return; /* tail jmp 0x00035379 */

loc_0030B4F5: ;
    ecx = MEM32(ecx);
    g_seh_ebp = ebp; sub_0001D909(); return; /* tail jmp 0x0001D909 */

loc_0030B4FC: ;
    ecx = MEM32(ecx);
    g_seh_ebp = ebp; sub_00037F5C(); return; /* tail jmp 0x00037F5C */

loc_0030B503: ;
    ecx = MEM32(ecx);
    g_seh_ebp = ebp; sub_00015D49(); return; /* tail jmp 0x00015D49 */

loc_0030B50A: ;
    ecx = MEM32(ecx);
    g_seh_ebp = ebp; sub_0002C3CD(); return; /* tail jmp 0x0002C3CD */

loc_0030B511: ;
    ecx = MEM32(ecx);
    g_seh_ebp = ebp; sub_0002E899(); return; /* tail jmp 0x0002E899 */

loc_0030B518: ;
    ecx = MEM32(ecx);
    g_seh_ebp = ebp; sub_00022FFD(); return; /* tail jmp 0x00022FFD */

loc_0030B51F: ;
    ecx = MEM32(ecx);
    g_seh_ebp = ebp; sub_000173A1(); return; /* tail jmp 0x000173A1 */

loc_0030B526: ;
    ecx = MEM32(ecx);
    g_seh_ebp = ebp; sub_0001BB40(); return; /* tail jmp 0x0001BB40 */

loc_0030B52D: ;
    ecx = MEM32(ecx);
    g_seh_ebp = ebp; sub_0002A96F(); return; /* tail jmp 0x0002A96F */

loc_0030B534: ;
    ecx = MEM32(ecx);
    g_seh_ebp = ebp; sub_00011753(); return; /* tail jmp 0x00011753 */

loc_0030B53B: ;
    ecx = MEM32(ecx);
    g_seh_ebp = ebp; sub_0001203B(); return; /* tail jmp 0x0001203B */

loc_0030B542: ;
    ecx = MEM32(ecx);
    g_seh_ebp = ebp; sub_00027661(); return; /* tail jmp 0x00027661 */

loc_0030B549: ;
    ecx = MEM32(ecx);
    g_seh_ebp = ebp; sub_0001994E(); return; /* tail jmp 0x0001994E */

loc_0030B550: ;
    ecx = MEM32(ecx);
    g_seh_ebp = ebp; sub_0001E958(); return; /* tail jmp 0x0001E958 */

loc_0030B557: ;
    ecx = MEM32(ecx);
    g_seh_ebp = ebp; sub_00028B06(); return; /* tail jmp 0x00028B06 */

loc_0030B55E: ;
    ecx = MEM32(ecx);
    g_seh_ebp = ebp; sub_00031A62(); return; /* tail jmp 0x00031A62 */

loc_0030B565: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0030B620
 * Original: 0x0030B620 - 0x0030B629 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030B620(void)
{

loc_0030B620: ;
    eax = ecx;
    MEM32(eax) = 0x826064;
    esp += 4; return; /* ret */

}

/**
 * sub_0030B630
 * Original: 0x0030B630 - 0x0030B692 (98 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030B630(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030B630: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030B67D; /* je: equal / zero */

loc_0030B63B: ;
    MEM8(0x8FC448) = LO8(ebx);
    if (CMP_LE(_fas, _fbs)) goto loc_0030B67D; /* jle: less or equal (signed <=) */

loc_0030B643: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0030B67D; /* jg: greater (signed >) */

loc_0030B648: ;
    ecx = MEM32(0x8FC440);
    eax = 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM8(0x8FC448) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_0030B665; /* jne: not equal / not zero */

loc_0030B65C: ;
    PUSH32(esp, 0x0030B661u); RECOMP_ABI_CALL(0x000220B2u, sub_000220B2); /* call 0x000220B2 */

loc_0030B661: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030B677; /* jne: not equal / not zero */

loc_0030B665: ;
    _fa = (uint32_t)(MEM32(0x8FC440)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8FC440), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030B67D; /* jne: not equal / not zero */

loc_0030B66E: ;
    PUSH32(esp, 0x0030B673u); RECOMP_ABI_CALL(0x000220B2u, sub_000220B2); /* call 0x000220B2 */

loc_0030B673: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030B67D; /* jne: not equal / not zero */

loc_0030B677: ;
    MEM8(0x8FC448) = LO8(ebx);

loc_0030B67D: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030B68A; /* je: equal / zero */

loc_0030B686: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030B690; /* jne: not equal / not zero */

loc_0030B68A: ;
    MEM8(0x8FC448) = LO8(ebx);

loc_0030B690: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0030B6B0
 * Original: 0x0030B6B0 - 0x0030B6B6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030B6B0(void)
{

loc_0030B6B0: ;
    eax = MEM32(0x8FC440);
    esp += 4; return; /* ret */

}

/**
 * sub_0030B6C0
 * Original: 0x0030B6C0 - 0x0030B6CC (12 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030B6C0(void)
{

loc_0030B6C0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax * 8 + 0x8FC50C);
    esp += 4; return; /* ret */

}

/**
 * sub_0030B6D0
 * Original: 0x0030B6D0 - 0x0030B706 (54 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030B6D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030B6D0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp;
    PUSH32(esp, eax);
    MEM32(esp + 4) = 0x64;
    MEM32(esp + 8) = 0x400;
    PUSH32(esp, 0x0030B6ECu); RECOMP_ABI_CALL(0x000342B2u, sub_000342B2); /* call 0x000342B2 */

loc_0030B6EC: ;
    PUSH32(esp, 0x0030B6F1u); RECOMP_ABI_CALL(0x0003726Eu, sub_0003726E); /* call 0x0003726E */

loc_0030B6F1: ;
    PUSH32(esp, 0x0030B6F6u); RECOMP_ABI_CALL(0x0001C289u, sub_0001C289); /* call 0x0001C289 */

loc_0030B6F6: ;
    PUSH32(esp, 0x0030B6FBu); RECOMP_ABI_CALL(0x0003444Cu, sub_0003444C); /* call 0x0003444C */

loc_0030B6FB: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0030B702u); RECOMP_ABI_CALL(0x0001B96Fu, sub_0001B96F); /* call 0x0001B96F */

loc_0030B702: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0030B720
 * Original: 0x0030B720 - 0x0030B725 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030B720(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0030B720: ;
    g_seh_ebp = ebp; sub_0001F006(); return; /* tail jmp 0x0001F006 */

}

/**
 * sub_0030B730
 * Original: 0x0030B730 - 0x0030B781 (81 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030B730(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0030B730: ;
    PUSH32(esp, esi);
    MEM8(0x8FC450) = 0;
    esi = 0x8FC508;
    /* nop */

loc_0030B740: ;
    ecx = esi;
    PUSH32(esp, 0x0030B747u); RECOMP_ABI_CALL(0x00016465u, sub_00016465); /* call 0x00016465 */

loc_0030B747: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8FC528) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x8FC528 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0030B740; /* jl: less (signed <) */

loc_0030B752: ;
    eax = MEM32(0x8FC42C);
    ecx = MEM32(0x909800);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0030B763u); RECOMP_ABI_CALL(0x00013206u, sub_00013206); /* call 0x00013206 */

loc_0030B763: ;
    ecx = MEM32(0x8FC42C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0030B76Fu); RECOMP_ABI_CALL(0x0002221Fu, sub_0002221F); /* call 0x0002221F */

loc_0030B76F: ;
    ecx = eax;
    PUSH32(esp, 0x0030B776u); RECOMP_ABI_CALL(0x00037B2Eu, sub_00037B2E); /* call 0x00037B2E */

loc_0030B776: ;
    ecx = 0x8FC5D8;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0001607D(); return; /* tail jmp 0x0001607D */

}

/**
 * sub_0030B7A0
 * Original: 0x0030B7A0 - 0x0030B7FA (90 bytes, 29 insns)
 * Category: game_camera
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030B7A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0030B7A0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0030B7ABu); RECOMP_ABI_CALL(0x0002E0F1u, sub_0002E0F1); /* call 0x0002E0F1 */

loc_0030B7AB: ;
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, 0x826084);
    edi = esi + 0xE0;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0x0030B7C4u); RECOMP_ABI_CALL(0x000243B2u, sub_000243B2); /* call 0x000243B2 */

loc_0030B7C4: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x826084);
    ebx = esi + 0xFC;
    PUSH32(esp, ebp);
    ecx = ebx;
    PUSH32(esp, 0x0030B7D9u); RECOMP_ABI_CALL(0x000235CFu, sub_000235CF); /* call 0x000235CF */

loc_0030B7D9: ;
    MEM32(edi) = 0x826078;
    POP32(esp, edi);
    MEM32(esi) = 0x826074;
    MEM32(ebx) = 0x826068;
    MEM32(0x8FC44C) = esi;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0030B810
 * Original: 0x0030B810 - 0x0030B84D (61 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030B810(void)
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

loc_0030B810: ;
    SET_LO8(eax, MEM8(0x8FC450));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030B84A; /* je: equal / zero */

loc_0030B819: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0x0030B822u); RECOMP_ABI_CALL(0x00023B7Eu, sub_00023B7E); /* call 0x00023B7E */

loc_0030B822: ;
    MEMF(0x8C3844) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x7AD448)); /* fld float */
    fp_push(MEMF(0x8C3844)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_0030B84A; /* jbe: below or equal (unsigned <=) */

loc_0030B83A: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AD448)); /* movss */
    MEMF(0x8C3844) = xmm0.f[0]; /* movss */

loc_0030B84A: ;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0030B860
 * Original: 0x0030B860 - 0x0030B86E (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030B860(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030B860: ;
    ecx = MEM32(0x8FC514);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 4; return; /* ret */

}

/**
 * sub_0030B880
 * Original: 0x0030B880 - 0x0030B8AE (46 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030B880(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030B880: ;
    SET_LO8(eax, MEM8(0x8FC450));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030B8AD; /* je: equal / zero */

loc_0030B889: ;
    eax = MEM32(esp + 4);
    ecx = 0x8FC508;
    MEM32(0x8FC43C) = eax;
    PUSH32(esp, 0x0030B89Cu); RECOMP_ABI_CALL(0x000378D1u, sub_000378D1); /* call 0x000378D1 */

loc_0030B89C: ;
    ecx = MEM32(0x8FC43C);
    PUSH32(esp, ecx);
    ecx = 0x8FC540;
    PUSH32(esp, 0x0030B8ADu); RECOMP_ABI_CALL(0x00027EEFu, sub_00027EEF); /* call 0x00027EEF */

loc_0030B8AD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0030B8C0
 * Original: 0x0030B8C0 - 0x0030B8CB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030B8C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0030B8C0: ;
    _fb = (uint32_t)(0xE0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0xE0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_000131BB(); return; /* tail jmp 0x000131BB */

}

/**
 * sub_0030B8D0
 * Original: 0x0030B8D0 - 0x0030B8DB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030B8D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0030B8D0: ;
    _fb = (uint32_t)(0xFC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0xFC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_000131BB(); return; /* tail jmp 0x000131BB */

}

/**
 * sub_0030B8E0
 * Original: 0x0030B8E0 - 0x0030B90C (44 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030B8E0(void)
{

loc_0030B8E0: ;
    xmm0 = XMM_MEM(0x8F9620); /* movaps */
    XMM_STORE(ecx, xmm0); /* movaps */
    xmm0 = XMM_MEM(0x8F9630); /* movaps */
    XMM_STORE(ecx + 0x10, xmm0); /* movaps */
    xmm0 = XMM_MEM(0x8F9640); /* movaps */
    XMM_STORE(ecx + 0x20, xmm0); /* movaps */
    xmm0 = XMM_MEM(0x8F9650); /* movaps */
    XMM_STORE(ecx + 0x30, xmm0); /* movaps */
    esp += 4; return; /* ret */

}

/**
 * sub_0030B920
 * Original: 0x0030B920 - 0x0030B94E (46 bytes, 15 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030B920(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030B920: ;
    eax = MEM32(esp + 4);
    MEM32(esp + 4) = eax;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0030B941; /* je: equal / zero */

loc_0030B931: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0030B94B; /* jne: not equal / not zero */

loc_0030B934: ;
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0030B93Eu); RECOMP_ABI_CALL(0x00012004u, sub_00012004); /* call 0x00012004 */

loc_0030B93E: ;
    esp += 12; return; /* ret 8 */

loc_0030B941: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0030B94Bu); RECOMP_ABI_CALL(0x000323B8u, sub_000323B8); /* call 0x000323B8 */

loc_0030B94B: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0030B960
 * Original: 0x0030B960 - 0x0030BA30 (208 bytes, 83 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030B960(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030B960: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebx);
    ecx = MEM32(edi + 0x10);
    eax = MEM32(ecx);
    esi = MEM32(edi + 0x24);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0030B97Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030B977u); } /* indirect call */
    }

loc_0030B97A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_0030B9AB; /* jne: not equal / not zero */

loc_0030B988: ;
    PUSH32(esp, 8);
    ecx = edi;
    PUSH32(esp, 0x0030B991u); RECOMP_ABI_CALL(0x0001F2B3u, sub_0001F2B3); /* call 0x0001F2B3 */

loc_0030B991: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    esi = eax;
    MEMF(esi) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    MEM8(edi + 0x1C) = 1;
    goto loc_0030BA10;

loc_0030B9AB: ;
    eax = MEM32(ebx);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0030B9B8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030B9B5u); } /* indirect call */
    }

loc_0030B9B8: ;
    eax = MEM32(eax);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(ebx);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0030B9CBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030B9C8u); } /* indirect call */
    }

loc_0030B9CB: ;
    eax = MEM32(eax);
    MEM32(esp + 0x10) = eax;
    eax = MEM32(ebx);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0030B9DEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030B9DBu); } /* indirect call */
    }

loc_0030B9DE: ;
    eax = MEM32(ebx);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0030B9EBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030B9E8u); } /* indirect call */
    }

loc_0030B9EB: ;
    eax = MEM32(eax);
    edx = MEM32(esp + 0x10);
    ecx = eax;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, 0);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edi = esi + 4;
    PUSH32(esp, 0x0030BA0Du); RECOMP_ABI_CALL(0x003078B0u, sub_003078B0); /* call 0x003078B0 */

loc_0030BA0D: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0030BA10: ;
    eax = MEM32(ebx);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0030BA1Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030BA1Au); } /* indirect call */
    }

loc_0030BA1D: ;
    ecx = MEM32(ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0030BA27u); RECOMP_ABI_CALL(0x0002622Fu, sub_0002622F); /* call 0x0002622F */

loc_0030BA27: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0030BA70
 * Original: 0x0030BA70 - 0x0030BA8A (26 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030BA70(void)
{

loc_0030BA70: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    MEM8(ecx + 0x1C) = 0;
    eax = MEM32(eax);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0030BA87u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030BA84u); } /* indirect call */
    }

loc_0030BA87: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0030BA90
 * Original: 0x0030BA90 - 0x0030BA93 (3 bytes, 1 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030BA90(void)
{

loc_0030BA90: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0030BAA0
 * Original: 0x0030BAA0 - 0x0030BAA3 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030BAA0(void)
{

loc_0030BAA0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0030BAB0
 * Original: 0x0030BAB0 - 0x0030BADE (46 bytes, 15 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030BAB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030BAB0: ;
    eax = MEM32(esp + 4);
    MEM32(esp + 4) = eax;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0030BAD1; /* je: equal / zero */

loc_0030BAC1: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0030BADB; /* jne: not equal / not zero */

loc_0030BAC4: ;
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0030BACEu); RECOMP_ABI_CALL(0x00030FFEu, sub_00030FFE); /* call 0x00030FFE */

loc_0030BACE: ;
    esp += 12; return; /* ret 8 */

loc_0030BAD1: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0030BADBu); RECOMP_ABI_CALL(0x00037DC7u, sub_00037DC7); /* call 0x00037DC7 */

loc_0030BADB: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0030BAF0
 * Original: 0x0030BAF0 - 0x0030BC0F (287 bytes, 96 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030BAF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0030BAF0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebx);
    ecx = MEM32(edi + 0x10);
    eax = MEM32(ecx);
    esi = MEM32(edi + 0x24);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0030BB0Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030BB07u); } /* indirect call */
    }

loc_0030BB0A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_0030BB3E; /* jne: not equal / not zero */

loc_0030BB18: ;
    PUSH32(esp, 8);
    ecx = edi;
    PUSH32(esp, 0x0030BB21u); RECOMP_ABI_CALL(0x0001F2B3u, sub_0001F2B3); /* call 0x0001F2B3 */

loc_0030BB21: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    esi = eax;
    MEMF(esi) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    MEM8(edi + 0x1C) = 1;
    goto loc_0030BBEF;

loc_0030BB3E: ;
    eax = MEM32(ebx);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0030BB4Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030BB48u); } /* indirect call */
    }

loc_0030BB4B: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    eax = MEM32(ebx);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0030BB62u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030BB5Fu); } /* indirect call */
    }

loc_0030BB62: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    eax = MEM32(ebx);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    PUSH32(esp, eax);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0030BB79u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030BB76u); } /* indirect call */
    }

loc_0030BB79: ;
    eax = MEM32(ebx);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0030BB86u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030BB83u); } /* indirect call */
    }

loc_0030BB86: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x1C); /* subss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x825154); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0030BBB1; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x825154)) */

loc_0030BBA3: ;
    xmm0 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x7A9EBC); /* subss */
    goto loc_0030BBCA;

loc_0030BBB1: ;
    xmm1 = XMM_SCALAR(MEMF(0x7DE4F4)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0030BBCE; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0030BBBE: ;
    xmm0 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7A9EBC); /* addss */

loc_0030BBCA: ;
    MEMF(esi) = xmm0.f[0]; /* movss */

loc_0030BBCE: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    edi = esi + 4;
    PUSH32(esp, 0x0030BBECu); RECOMP_ABI_CALL(0x003078B0u, sub_003078B0); /* call 0x003078B0 */

loc_0030BBEC: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0030BBEF: ;
    eax = MEM32(ebx);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0030BBFCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030BBF9u); } /* indirect call */
    }

loc_0030BBFC: ;
    ecx = MEM32(ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0030BC06u); RECOMP_ABI_CALL(0x0002622Fu, sub_0002622F); /* call 0x0002622F */

loc_0030BC06: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0030BC60
 * Original: 0x0030BC60 - 0x0030BC7A (26 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030BC60(void)
{

loc_0030BC60: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    MEM8(ecx + 0x1C) = 0;
    eax = MEM32(eax);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0030BC77u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030BC74u); } /* indirect call */
    }

loc_0030BC77: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0030BC80
 * Original: 0x0030BC80 - 0x0030BC83 (3 bytes, 1 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030BC80(void)
{

loc_0030BC80: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0030BC90
 * Original: 0x0030BC90 - 0x0030BC93 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030BC90(void)
{

loc_0030BC90: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0030BCA0
 * Original: 0x0030BCA0 - 0x0030BCCE (46 bytes, 15 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030BCA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030BCA0: ;
    eax = MEM32(esp + 4);
    MEM32(esp + 4) = eax;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0030BCC1; /* je: equal / zero */

loc_0030BCB1: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0030BCCB; /* jne: not equal / not zero */

loc_0030BCB4: ;
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0030BCBEu); RECOMP_ABI_CALL(0x0002B969u, sub_0002B969); /* call 0x0002B969 */

loc_0030BCBE: ;
    esp += 12; return; /* ret 8 */

loc_0030BCC1: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0030BCCBu); RECOMP_ABI_CALL(0x00021AAEu, sub_00021AAE); /* call 0x00021AAE */

loc_0030BCCB: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0030BCE0
 * Original: 0x0030BCE0 - 0x0030BE12 (306 bytes, 117 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030BCE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0030BCE0: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x20);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(ebp);
    ecx = MEM32(esi + 0x10);
    eax = MEM32(ecx);
    ebx = MEM32(esi + 0x24);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0030BCFCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030BCF9u); } /* indirect call */
    }

loc_0030BCFC: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    ecx = MEM32(eax + 4);
    edx = MEM32(eax + 8);
    edi = MEM32(eax);
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x20) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_0030BD46; /* jne: not equal / not zero */

loc_0030BD10: ;
    PUSH32(esp, 0x18);
    ecx = esi;
    PUSH32(esp, 0x0030BD19u); RECOMP_ABI_CALL(0x0001F2B3u, sub_0001F2B3); /* call 0x0001F2B3 */

loc_0030BD19: ;
    ecx = MEM32(esp + 0x1C);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = MEM32(esp + 0x20);
    ebx = eax;
    MEM32(eax) = edi;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = edx;
    MEMF(ebx + 0xC) = xmm0.f[0]; /* movss */
    MEMF(ebx + 0x10) = xmm0.f[0]; /* movss */
    MEMF(ebx + 0x14) = xmm0.f[0]; /* movss */
    MEM8(esi + 0x1C) = 1;
    goto loc_0030BDEF;

loc_0030BD46: ;
    eax = MEM32(ebp);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0030BD54u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030BD51u); } /* indirect call */
    }

loc_0030BD54: ;
    eax = MEM32(eax);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(ebp);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0030BD68u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030BD65u); } /* indirect call */
    }

loc_0030BD68: ;
    eax = MEM32(eax);
    MEM32(esp + 0x10) = eax;
    eax = MEM32(ebp);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0030BD7Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030BD79u); } /* indirect call */
    }

loc_0030BD7C: ;
    eax = MEM32(ebp);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0030BD8Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030BD87u); } /* indirect call */
    }

loc_0030BD8A: ;
    eax = MEM32(eax);
    edx = MEM32(esp + 0x10);
    ecx = eax;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    MEM32(esp + 0x30) = eax;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    edi = ebx + 0xC;
    esi = ebx;
    PUSH32(esp, 0x0030BDAAu); RECOMP_ABI_CALL(0x003078B0u, sub_003078B0); /* call 0x003078B0 */

loc_0030BDAA: ;
    ecx = MEM32(esp + 0x3C);
    edx = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x28);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x34);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edi = ebx + 0x10;
    esi = ebx + 4;
    PUSH32(esp, 0x0030BDCBu); RECOMP_ABI_CALL(0x003078B0u, sub_003078B0); /* call 0x003078B0 */

loc_0030BDCB: ;
    edx = MEM32(esp + 0x50);
    eax = MEM32(esp + 0x38);
    ecx = MEM32(esp + 0x3C);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x4C);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edi = ebx + 0x14;
    esi = ebx + 8;
    PUSH32(esp, 0x0030BDECu); RECOMP_ABI_CALL(0x003078B0u, sub_003078B0); /* call 0x003078B0 */

loc_0030BDEC: ;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0030BDEF: ;
    eax = MEM32(ebp);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0030BDFDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030BDFAu); } /* indirect call */
    }

loc_0030BDFD: ;
    ecx = MEM32(ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0030BE08u); RECOMP_ABI_CALL(0x0002622Fu, sub_0002622F); /* call 0x0002622F */

loc_0030BE08: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0030BE60
 * Original: 0x0030BE60 - 0x0030BE7A (26 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030BE60(void)
{

loc_0030BE60: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    MEM8(ecx + 0x1C) = 0;
    eax = MEM32(eax);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0030BE77u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030BE74u); } /* indirect call */
    }

loc_0030BE77: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0030BE80
 * Original: 0x0030BE80 - 0x0030BE83 (3 bytes, 1 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030BE80(void)
{

loc_0030BE80: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0030BE90
 * Original: 0x0030BE90 - 0x0030BE93 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030BE90(void)
{

loc_0030BE90: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0030BEA0
 * Original: 0x0030BEA0 - 0x0030BECE (46 bytes, 15 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030BEA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030BEA0: ;
    eax = MEM32(esp + 4);
    MEM32(esp + 4) = eax;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0030BEC1; /* je: equal / zero */

loc_0030BEB1: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0030BECB; /* jne: not equal / not zero */

loc_0030BEB4: ;
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0030BEBEu); RECOMP_ABI_CALL(0x000122BBu, sub_000122BB); /* call 0x000122BB */

loc_0030BEBE: ;
    esp += 12; return; /* ret 8 */

loc_0030BEC1: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0030BECBu); RECOMP_ABI_CALL(0x00030C25u, sub_00030C25); /* call 0x00030C25 */

loc_0030BECB: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0030BEE0
 * Original: 0x0030BEE0 - 0x0030C0B1 (465 bytes, 165 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030BEE0(void)
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

loc_0030BEE0: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x20));
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x2C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(ebp);
    ecx = MEM32(esi + 0x10);
    eax = MEM32(ecx);
    ebx = MEM32(esi + 0x24);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0030BEFCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030BEF9u); } /* indirect call */
    }

loc_0030BEFC: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    ecx = MEM32(eax + 4);
    edx = MEM32(eax + 8);
    edi = MEM32(eax);
    MEM32(esp + 0x28) = ecx;
    MEM32(esp + 0x2C) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_0030BF46; /* jne: not equal / not zero */

loc_0030BF10: ;
    PUSH32(esp, 0x18);
    ecx = esi;
    PUSH32(esp, 0x0030BF19u); RECOMP_ABI_CALL(0x0001F2B3u, sub_0001F2B3); /* call 0x0001F2B3 */

loc_0030BF19: ;
    ecx = MEM32(esp + 0x28);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = MEM32(esp + 0x2C);
    ebx = eax;
    MEM32(eax) = edi;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = edx;
    MEMF(ebx + 0xC) = xmm0.f[0]; /* movss */
    MEMF(ebx + 0x10) = xmm0.f[0]; /* movss */
    MEMF(ebx + 0x14) = xmm0.f[0]; /* movss */
    MEM8(esi + 0x1C) = 1;
    goto loc_0030C08E;

loc_0030BF46: ;
    eax = MEM32(ebp);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0030BF54u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030BF51u); } /* indirect call */
    }

loc_0030BF54: ;
    eax = MEM32(eax);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(ebp);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0030BF68u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030BF65u); } /* indirect call */
    }

loc_0030BF68: ;
    eax = MEM32(eax);
    MEM32(esp + 0x10) = eax;
    eax = MEM32(ebp);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0030BF7Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030BF79u); } /* indirect call */
    }

loc_0030BF7C: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    eax = MEM32(ebp);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0030BF94u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030BF91u); } /* indirect call */
    }

loc_0030BF94: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    eax = MEM32(ebp);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 5);
    PUSH32(esp, eax);
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0030BFACu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030BFA9u); } /* indirect call */
    }

loc_0030BFAC: ;
    eax = MEM32(eax);
    edx = MEM32(esp + 0x10);
    ecx = eax;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    MEM32(esp + 0x3C) = eax;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    edi = ebx + 0xC;
    esi = ebx;
    PUSH32(esp, 0x0030BFCCu); RECOMP_ABI_CALL(0x003078B0u, sub_003078B0); /* call 0x003078B0 */

loc_0030BFCC: ;
    ecx = MEM32(esp + 0x48);
    edx = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x28);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x40);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edi = ebx + 0x10;
    esi = ebx + 4;
    PUSH32(esp, 0x0030BFEDu); RECOMP_ABI_CALL(0x003078B0u, sub_003078B0); /* call 0x003078B0 */

loc_0030BFED: ;
    eax = MEM32(0x8FC5E0);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x28)) >> 32) & 1);
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* xor clears CF */
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_0030C002; /* jle: less or equal (signed <=) */

loc_0030BFFB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_0030C002; /* jg: greater (signed >) */

loc_0030C000: ;
    SET_LO8(ecx, 1);

loc_0030C002: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_0030C067; /* je: equal / zero */

loc_0030C00F: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    xmm0 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */
    xmm2 = xmm3; /* movaps */
    if ((_fca >= _fcb)) goto loc_0030C030; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0030C02D: ;
    xmm2 = xmm0; /* movaps */

loc_0030C030: ;
    xmm4 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    _fca = xmm4.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0030C03E; /* jb: below (unsigned <) (xmm4.f[0] vs xmm1.f[0]) */

loc_0030C03B: ;
    xmm0 = xmm3; /* movaps */

loc_0030C03E: ;
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0030C067; /* jp: parity */

loc_0030C047: ;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp < 0 || g_fp_cmp == 2) /* fcompi */) goto loc_0030C067; /* jb: below (unsigned <) */

loc_0030C05B: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */

loc_0030C067: ;
    edx = MEM32(esp + 0x34);
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x34);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    edi = ebx + 0x14;
    esi = ebx + 8;
    PUSH32(esp, 0x0030C08Bu); RECOMP_ABI_CALL(0x003078B0u, sub_003078B0); /* call 0x003078B0 */

loc_0030C08B: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0030C08E: ;
    eax = MEM32(ebp);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0030C09Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030C099u); } /* indirect call */
    }

loc_0030C09C: ;
    ecx = MEM32(ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0030C0A7u); RECOMP_ABI_CALL(0x0002622Fu, sub_0002622F); /* call 0x0002622F */

loc_0030C0A7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x20)) >> 32) & 1);
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0030C130
 * Original: 0x0030C130 - 0x0030C14A (26 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030C130(void)
{

loc_0030C130: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    MEM8(ecx + 0x1C) = 0;
    eax = MEM32(eax);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0030C147u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030C144u); } /* indirect call */
    }

loc_0030C147: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0030C150
 * Original: 0x0030C150 - 0x0030C153 (3 bytes, 1 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030C150(void)
{

loc_0030C150: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0030C160
 * Original: 0x0030C160 - 0x0030C163 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030C160(void)
{

loc_0030C160: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0030C170
 * Original: 0x0030C170 - 0x0030C19E (46 bytes, 15 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030C170(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030C170: ;
    eax = MEM32(esp + 4);
    MEM32(esp + 4) = eax;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0030C191; /* je: equal / zero */

loc_0030C181: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0030C19B; /* jne: not equal / not zero */

loc_0030C184: ;
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0030C18Eu); RECOMP_ABI_CALL(0x000221FCu, sub_000221FC); /* call 0x000221FC */

loc_0030C18E: ;
    esp += 12; return; /* ret 8 */

loc_0030C191: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0030C19Bu); RECOMP_ABI_CALL(0x00020DD4u, sub_00020DD4); /* call 0x00020DD4 */

loc_0030C19B: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0030C1B0
 * Original: 0x0030C1B0 - 0x0030C1CA (26 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030C1B0(void)
{

loc_0030C1B0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    MEM8(ecx + 0x1C) = 0;
    eax = MEM32(eax);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0030C1C7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030C1C4u); } /* indirect call */
    }

loc_0030C1C7: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0030C1D0
 * Original: 0x0030C1D0 - 0x0030C1D3 (3 bytes, 1 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030C1D0(void)
{

loc_0030C1D0: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0030C1E0
 * Original: 0x0030C1E0 - 0x0030C1E3 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030C1E0(void)
{

loc_0030C1E0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0030C1F0
 * Original: 0x0030C1F0 - 0x0030C21E (46 bytes, 15 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030C1F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030C1F0: ;
    eax = MEM32(esp + 4);
    MEM32(esp + 4) = eax;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0030C211; /* je: equal / zero */

loc_0030C201: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0030C21B; /* jne: not equal / not zero */

loc_0030C204: ;
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0030C20Eu); RECOMP_ABI_CALL(0x000200A0u, sub_000200A0); /* call 0x000200A0 */

loc_0030C20E: ;
    esp += 12; return; /* ret 8 */

loc_0030C211: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0030C21Bu); RECOMP_ABI_CALL(0x0001C83Du, sub_0001C83D); /* call 0x0001C83D */

loc_0030C21B: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0030C230
 * Original: 0x0030C230 - 0x0030C332 (258 bytes, 78 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030C230(void)
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

loc_0030C230: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp);
    ecx = MEM32(edi + 0x10);
    eax = MEM32(ecx);
    ebx = MEM32(edi + 0x24);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0030C249u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030C246u); } /* indirect call */
    }

loc_0030C249: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_0030C27A; /* jne: not equal / not zero */

loc_0030C257: ;
    PUSH32(esp, 8);
    ecx = edi;
    PUSH32(esp, 0x0030C260u); RECOMP_ABI_CALL(0x0001F2B3u, sub_0001F2B3); /* call 0x0001F2B3 */

loc_0030C260: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    esi = eax + 4;
    MEMF(eax) = xmm0.f[0]; /* movss */
    MEMF(esi) = xmm0.f[0]; /* movss */
    MEM8(edi + 0x1C) = 1;
    goto loc_0030C312;

loc_0030C27A: ;
    xmm0 = XMM_SCALAR(MEMF(ebx)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x825154); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0030C299; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x825154)) */

loc_0030C28B: ;
    xmm0 = XMM_SCALAR(MEMF(ebx)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x7A9EBC); /* subss */
    goto loc_0030C2B2;

loc_0030C299: ;
    xmm1 = XMM_SCALAR(MEMF(0x7DE4F4)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0030C2B6; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0030C2A6: ;
    xmm0 = XMM_SCALAR(MEMF(ebx)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7A9EBC); /* addss */

loc_0030C2B2: ;
    MEMF(ebx) = xmm0.f[0]; /* movss */

loc_0030C2B6: ;
    eax = MEM32(ebp);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0030C2C4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030C2C1u); } /* indirect call */
    }

loc_0030C2C4: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x7A9EBC)); /* movss */
    esi = ebx + 4;
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebx); /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi); /* addss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(esi) = xmm0.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0030C2F5; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_0030C2ED: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esi) = xmm0.f[0]; /* movss */

loc_0030C2F5: ;
    xmm0 = XMM_SCALAR(MEMF(0x826098)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0030C30E; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(esi)) */

loc_0030C302: ;
    xmm0 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esi) = xmm0.f[0]; /* movss */

loc_0030C30E: ;
    MEMF(ebx) = xmm2.f[0]; /* movss */

loc_0030C312: ;
    eax = MEM32(ebp);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0030C320u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030C31Du); } /* indirect call */
    }

loc_0030C320: ;
    ecx = MEM32(ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0030C32Bu); RECOMP_ABI_CALL(0x0002622Fu, sub_0002622F); /* call 0x0002622F */

loc_0030C32B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0030C380
 * Original: 0x0030C380 - 0x0030C39A (26 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030C380(void)
{

loc_0030C380: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    MEM8(ecx + 0x1C) = 0;
    eax = MEM32(eax);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0030C397u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030C394u); } /* indirect call */
    }

loc_0030C397: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0030C3A0
 * Original: 0x0030C3A0 - 0x0030C3A3 (3 bytes, 1 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030C3A0(void)
{

loc_0030C3A0: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0030C3B0
 * Original: 0x0030C3B0 - 0x0030C3B3 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030C3B0(void)
{

loc_0030C3B0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0030C3C0
 * Original: 0x0030C3C0 - 0x0030C3C3 (3 bytes, 1 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030C3C0(void)
{

loc_0030C3C0: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0030C3D0
 * Original: 0x0030C3D0 - 0x0030C3D3 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030C3D0(void)
{

loc_0030C3D0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0030C3E0
 * Original: 0x0030C3E0 - 0x0030C419 (57 bytes, 17 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030C3E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0030C3E0: ;
    edx = MEM32(esp + 8);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 4);
    MEM32(esp + 4) = eax;
    if ((_fa == 0)) goto loc_0030C40C; /* je: equal / zero */

loc_0030C3F1: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0030C416; /* jne: not equal / not zero */

loc_0030C3F4: ;
    MEM8(eax + 0x1C) = 0;
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    MEM32(esp + 8) = 1;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 4)); return; /* indirect tail jmp */

loc_0030C40C: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0030C416u); RECOMP_ABI_CALL(0x000226ACu, sub_000226AC); /* call 0x000226AC */

loc_0030C416: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0030C430
 * Original: 0x0030C430 - 0x0030C433 (3 bytes, 1 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030C430(void)
{

loc_0030C430: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0030C440
 * Original: 0x0030C440 - 0x0030C443 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030C440(void)
{

loc_0030C440: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0030C450
 * Original: 0x0030C450 - 0x0030C453 (3 bytes, 1 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030C450(void)
{

loc_0030C450: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0030C460
 * Original: 0x0030C460 - 0x0030C463 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030C460(void)
{

loc_0030C460: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0030C470
 * Original: 0x0030C470 - 0x0030C4A9 (57 bytes, 17 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030C470(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0030C470: ;
    edx = MEM32(esp + 8);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 4);
    MEM32(esp + 4) = eax;
    if ((_fa == 0)) goto loc_0030C49C; /* je: equal / zero */

loc_0030C481: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0030C4A6; /* jne: not equal / not zero */

loc_0030C484: ;
    MEM8(eax + 0x1C) = 0;
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    MEM32(esp + 8) = 1;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 4)); return; /* indirect tail jmp */

loc_0030C49C: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0030C4A6u); RECOMP_ABI_CALL(0x00033D2Bu, sub_00033D2B); /* call 0x00033D2B */

loc_0030C4A6: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0030C4C0
 * Original: 0x0030C4C0 - 0x0030C4C3 (3 bytes, 1 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030C4C0(void)
{

loc_0030C4C0: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0030C4D0
 * Original: 0x0030C4D0 - 0x0030C4D3 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030C4D0(void)
{

loc_0030C4D0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0030C4E0
 * Original: 0x0030C4E0 - 0x0030C4E3 (3 bytes, 1 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030C4E0(void)
{

loc_0030C4E0: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0030C4F0
 * Original: 0x0030C4F0 - 0x0030C4F3 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030C4F0(void)
{

loc_0030C4F0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0030C500
 * Original: 0x0030C500 - 0x0030C539 (57 bytes, 17 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030C500(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0030C500: ;
    edx = MEM32(esp + 8);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 4);
    MEM32(esp + 4) = eax;
    if ((_fa == 0)) goto loc_0030C52C; /* je: equal / zero */

loc_0030C511: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0030C536; /* jne: not equal / not zero */

loc_0030C514: ;
    MEM8(eax + 0x1C) = 0;
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    MEM32(esp + 8) = 1;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 4)); return; /* indirect tail jmp */

loc_0030C52C: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0030C536u); RECOMP_ABI_CALL(0x0002BB8Au, sub_0002BB8A); /* call 0x0002BB8A */

loc_0030C536: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0030C550
 * Original: 0x0030C550 - 0x0030C553 (3 bytes, 1 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030C550(void)
{

loc_0030C550: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0030C560
 * Original: 0x0030C560 - 0x0030C563 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030C560(void)
{

loc_0030C560: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0030C570
 * Original: 0x0030C570 - 0x0030C5A9 (57 bytes, 17 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030C570(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0030C570: ;
    edx = MEM32(esp + 8);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 4);
    MEM32(esp + 4) = eax;
    if ((_fa == 0)) goto loc_0030C59C; /* je: equal / zero */

loc_0030C581: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0030C5A6; /* jne: not equal / not zero */

loc_0030C584: ;
    MEM8(eax + 0x1C) = 0;
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    MEM32(esp + 8) = 1;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 4)); return; /* indirect tail jmp */

loc_0030C59C: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0030C5A6u); RECOMP_ABI_CALL(0x000115AFu, sub_000115AF); /* call 0x000115AF */

loc_0030C5A6: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0030C5C0
 * Original: 0x0030C5C0 - 0x0030C5C3 (3 bytes, 1 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030C5C0(void)
{

loc_0030C5C0: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0030C5D0
 * Original: 0x0030C5D0 - 0x0030C5D3 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030C5D0(void)
{

loc_0030C5D0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0030C5E0
 * Original: 0x0030C5E0 - 0x0030C619 (57 bytes, 13 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030C5E0(void)
{
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0030C5E0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AA840); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0030C606; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(0x7AA840)) */

loc_0030C5F3: ;
    edx = MEM32(esp + 8);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(edx) = xmm0.f[0]; /* movss */
    esp += 16; return; /* ret 12 */

loc_0030C606: ;
    eax = MEM32(esp + 8);
    xmm0 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0030C630
 * Original: 0x0030C630 - 0x0030C648 (24 bytes, 9 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030C630(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030C630: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = MEM32(esp + 8);
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM32(eax) = edx;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0030C650
 * Original: 0x0030C650 - 0x0030C664 (20 bytes, 7 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030C650(void)
{

loc_0030C650: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    PUSH32(esp, eax);
    eax = MEM32(edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0030C661u); RECOMP_ABI_CALL(0x0002E006u, sub_0002E006); /* call 0x0002E006 */

loc_0030C661: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0030C670
 * Original: 0x0030C670 - 0x0030C67D (13 bytes, 3 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030C670(void)
{

loc_0030C670: ;
    eax = MEM32(esp + 8);
    MEM32(eax) = 0;
    esp += 16; return; /* ret 12 */

}
