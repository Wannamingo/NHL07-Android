/**
 * nhl_07_recomp - Recompiled code chunk 232
 * Functions: 250 (0x005063B0 - 0x0050B470)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_005063B0
 * Original: 0x005063B0 - 0x005063B3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005063B0(void)
{

loc_005063B0: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_005063C0
 * Original: 0x005063C0 - 0x005063D6 (22 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005063C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005063C0: ;
    eax = MEM32(ecx);
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(edx);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(ecx));
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_005063E0
 * Original: 0x005063E0 - 0x005063E9 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005063E0(void)
{

loc_005063E0: ;
    eax = ecx;
    MEM32(eax) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_005063F0
 * Original: 0x005063F0 - 0x00506425 (53 bytes, 22 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005063F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005063F0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi);
    MEM16(eax) = MEM16(eax) + 1;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    esi = ecx;
    eax = MEM32(esi);
    MEM16(eax) = MEM16(eax) - 1;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00506414; /* jne: not equal / not zero */

loc_00506408: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(0x9132E8);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00506411u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0050640Eu); } /* indirect call */
    }

loc_00506411: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00506414: ;
    ecx = MEM32(edi);
    MEM32(esi) = ecx;
    edx = MEM32(edi + 4);
    POP32(esp, edi);
    MEM32(esi + 4) = edx;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00506430
 * Original: 0x00506430 - 0x0050643B (11 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00506430(void)
{

loc_00506430: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00506440
 * Original: 0x00506440 - 0x00506452 (18 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00506440(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00506440: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 8);
    eax = ecx + 0xC;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(eax, LO8(edx));
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00506460
 * Original: 0x00506460 - 0x0050646E (14 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00506460(void)
{

loc_00506460: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00506470
 * Original: 0x00506470 - 0x0050647A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00506470(void)
{

loc_00506470: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 4) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00506480
 * Original: 0x00506480 - 0x00506484 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00506480(void)
{

loc_00506480: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_00506490
 * Original: 0x00506490 - 0x005064A2 (18 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00506490(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00506490: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 8);
    eax = ecx + 0xC;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(eax, LO8(edx));
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_005064B0
 * Original: 0x005064B0 - 0x005064C2 (18 bytes, 6 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005064B0(void)
{

loc_005064B0: ;
    edx = MEM32(esp + 8);
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax) = ecx;
    MEM32(eax + 4) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_005064D0
 * Original: 0x005064D0 - 0x005064D3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005064D0(void)
{

loc_005064D0: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_005064E0
 * Original: 0x005064E0 - 0x005064E4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005064E0(void)
{

loc_005064E0: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_005064F0
 * Original: 0x005064F0 - 0x005064FA (10 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005064F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005064F0: ;
    edx = MEM32(ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

}

/**
 * sub_00506500
 * Original: 0x00506500 - 0x0050650A (10 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00506500(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00506500: ;
    edx = MEM32(ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

}

/**
 * sub_00506510
 * Original: 0x00506510 - 0x00506516 (6 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00506510(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00506510: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(0x91278C)); return; /* indirect tail jmp */

}

/**
 * sub_00506520
 * Original: 0x00506520 - 0x00506526 (6 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00506520(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00506520: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(0x91278C)); return; /* indirect tail jmp */

}

/**
 * sub_00506530
 * Original: 0x00506530 - 0x00506553 (35 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00506530(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00506530: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00506551; /* je: equal / zero */

loc_00506539: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0050653Fu); RECOMP_ABI_CALL(0x00509D80u, sub_00509D80); /* call 0x00509D80 */

loc_0050653F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00506551; /* jne: not equal / not zero */

loc_00506546: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0050654Eu); RECOMP_ABI_CALL(0x0050AF00u, sub_0050AF00); /* call 0x0050AF00 */

loc_0050654E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00506551: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00506560
 * Original: 0x00506560 - 0x00506572 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00506560(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00506560: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx);
    ecx = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 4; return; /* ret */

}

/**
 * sub_00506580
 * Original: 0x00506580 - 0x005065D4 (84 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00506580(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00506580: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005065CD; /* je: equal / zero */

loc_0050658E: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x18);
    PUSH32(esp, edi);

loc_00506594: ;
    eax = MEM32(esi);
    edi = ebx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax) = MEM16(eax) + 1;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(edi);
    MEM16(eax) = MEM16(eax) - 1;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005065B5; /* jne: not equal / not zero */

loc_005065A9: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(0x9132E8);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x005065B2u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x005065AFu); } /* indirect call */
    }

loc_005065B2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005065B5: ;
    ecx = MEM32(esi);
    MEM32(edi) = ecx;
    edx = MEM32(esi + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    MEM32(edi + 4) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_00506594; /* jne: not equal / not zero */

loc_005065C6: ;
    POP32(esp, edi);
    eax = ebx;
    POP32(esp, ebx);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_005065CD: ;
    eax = MEM32(esp + 0x14);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_005065E0
 * Original: 0x005065E0 - 0x005065F6 (22 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005065E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005065E0: ;
    eax = MEM32(esp + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7D);
    PUSH32(esp, 0x871ED8);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x912788); PUSH32(esp, 0x005065F2u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x005065ECu); } /* indirect call */
    }

loc_005065F2: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00506600
 * Original: 0x00506600 - 0x00506654 (84 bytes, 38 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00506600(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00506600: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0050664D; /* je: equal / zero */

loc_0050660E: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x18);
    PUSH32(esp, edi);

loc_00506614: ;
    eax = MEM32(esi);
    edi = ebx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax) = MEM16(eax) + 1;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(edi);
    MEM16(eax) = MEM16(eax) - 1;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00506635; /* jne: not equal / not zero */

loc_00506629: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(0x9132E8);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00506632u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0050662Fu); } /* indirect call */
    }

loc_00506632: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00506635: ;
    ecx = MEM32(esi);
    MEM32(edi) = ecx;
    edx = MEM32(esi + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    MEM32(edi + 4) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_00506614; /* jne: not equal / not zero */

loc_00506646: ;
    POP32(esp, edi);
    eax = ebx;
    POP32(esp, ebx);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0050664D: ;
    eax = MEM32(esp + 0x14);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00506660
 * Original: 0x00506660 - 0x005066B9 (89 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00506660(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00506660: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    eax = esi;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((3) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx + eax * 8 + -8;
    if (CMP_EQ(_fa, _fb)) goto loc_005066B3; /* je: equal / zero */

loc_00506681: ;
    ebx = eax;

loc_00506683: ;
    eax = MEM32(esi);
    MEM16(eax) = MEM16(eax) + 1;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(edi);
    MEM16(eax) = MEM16(eax) - 1;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005066A0; /* jne: not equal / not zero */

loc_00506693: ;
    edx = MEM32(0x9132E8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0050669Du); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0050669Au); } /* indirect call */
    }

loc_0050669D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005066A0: ;
    eax = MEM32(esi);
    MEM32(edi) = eax;
    ecx = MEM32(esi + 4);
    MEM32(edi + 4) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00506683; /* jne: not equal / not zero */

loc_005066B3: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_005066C0
 * Original: 0x005066C0 - 0x0050671B (91 bytes, 35 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005066C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005066C0: ;
    SET_LO8(edx, MEM8(esp + 4));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 2 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_00506701; /* je: equal / zero */

loc_005066CC: ;
    ecx = MEM32(esi + -4);
    PUSH32(esp, edi);
    edi = esi + -4;
    eax = esi + ecx * 8;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_005066EC; /* js: sign (negative) */

loc_005066D9: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    /* nop */

loc_005066E0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax) = 0x871E5C;
    if ((_fa != 0)) goto loc_005066E0; /* jne: not equal / not zero */

loc_005066EC: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_005066FA; /* je: equal / zero */

loc_005066F1: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x005066F7u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_005066F7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005066FA: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00506701: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    MEM32(esi) = 0x871E5C;
    if (TEST_Z(_fa, _fb)) goto loc_00506715; /* je: equal / zero */

loc_0050670C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00506712u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_00506712: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00506715: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00506720
 * Original: 0x00506720 - 0x00506727 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00506720(void)
{

loc_00506720: ;
    MEM32(ecx) = 0x871E5C;
    esp += 4; return; /* ret */

}

/**
 * sub_00506730
 * Original: 0x00506730 - 0x00506737 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00506730(void)
{

loc_00506730: ;
    MEM32(ecx) = 0x871E5C;
    esp += 4; return; /* ret */

}

/**
 * sub_00506740
 * Original: 0x00506740 - 0x0050676B (43 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00506740(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00506740: ;
    eax = MEM32(ecx + 4);
    ecx = eax;
    ecx = ecx & 0x3F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x12) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x12 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00506766; /* jne: not equal / not zero */

loc_0050674D: ;
    SET_LO8(ecx, MEM8(esp + 4));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0050675E; /* jne: not equal / not zero */

loc_00506755: ;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0xF) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    SET_LO8(eax, ~LO8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00506766; /* jne: not equal / not zero */

loc_0050675E: ;
    eax = 1;
    esp += 8; return; /* ret 4 */

loc_00506766: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00506770
 * Original: 0x00506770 - 0x00506783 (19 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00506770(void)
{

loc_00506770: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 8;
    PUSH32(esp, 0x0050677Bu); RECOMP_ABI_CALL(0x00510F80u, sub_00510F80); /* call 0x00510F80 */

loc_0050677B: ;
    MEM32(esi) = 0x871E5C;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00506790
 * Original: 0x00506790 - 0x005067A3 (19 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00506790(void)
{

loc_00506790: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 8;
    PUSH32(esp, 0x0050679Bu); RECOMP_ABI_CALL(0x00510F80u, sub_00510F80); /* call 0x00510F80 */

loc_0050679B: ;
    MEM32(esi) = 0x871E5C;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_005067B0
 * Original: 0x005067B0 - 0x005067C9 (25 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005067B0(void)
{

loc_005067B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 8;
    MEM32(esi) = 0x871F78;
    PUSH32(esp, 0x005067C1u); RECOMP_ABI_CALL(0x00510F80u, sub_00510F80); /* call 0x00510F80 */

loc_005067C1: ;
    MEM32(esi) = 0x871E5C;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_005067D0
 * Original: 0x005067D0 - 0x005067D3 (3 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005067D0(void)
{

loc_005067D0: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_005067E0
 * Original: 0x005067E0 - 0x00506800 (32 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005067E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005067E0: ;
    edx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    edx = MEM32(ecx + 0x18);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax ^ edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax & 0x100;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x18) = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00506800
 * Original: 0x00506800 - 0x00506810 (16 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00506800(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00506800: ;
    eax = MEM32(ecx + 0x18);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_00506810
 * Original: 0x00506810 - 0x00506849 (57 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00506810(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00506810: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 8;
    MEM32(esi) = 0x871F78;
    PUSH32(esp, 0x00506821u); RECOMP_ABI_CALL(0x00510F80u, sub_00510F80); /* call 0x00510F80 */

loc_00506821: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    MEM32(esi) = 0x871E5C;
    if (TEST_Z(_fa, _fb)) goto loc_00506843; /* je: equal / zero */

loc_0050682E: ;
    PUSH32(esp, 0x1BF);
    PUSH32(esp, 0x871F28);
    PUSH32(esp, 0x1C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00506840u); RECOMP_ABI_CALL(0x005060A0u, sub_005060A0); /* call 0x005060A0 */

loc_00506840: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00506843: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00506850
 * Original: 0x00506850 - 0x00506866 (22 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00506850(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00506850: ;
    eax = MEM32(ecx);
    MEM16(eax) = MEM16(eax) - 1;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00506865; /* jne: not equal / not zero */

loc_0050685B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(0x9132E8);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00506864u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00506861u); } /* indirect call */
    }

loc_00506864: ;
    POP32(esp, ecx);

loc_00506865: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00506870
 * Original: 0x00506870 - 0x00506889 (25 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00506870(void)
{

loc_00506870: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 8;
    MEM32(esi) = 0x871F78;
    PUSH32(esp, 0x00506881u); RECOMP_ABI_CALL(0x00510F80u, sub_00510F80); /* call 0x00510F80 */

loc_00506881: ;
    MEM32(esi) = 0x871E5C;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00506890
 * Original: 0x00506890 - 0x005068A9 (25 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00506890(void)
{

loc_00506890: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 8;
    MEM32(esi) = 0x871F78;
    PUSH32(esp, 0x005068A1u); RECOMP_ABI_CALL(0x00510F80u, sub_00510F80); /* call 0x00510F80 */

loc_005068A1: ;
    MEM32(esi) = 0x871E5C;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_005068B0
 * Original: 0x005068B0 - 0x005068B7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005068B0(void)
{

loc_005068B0: ;
    MEM32(ecx) = 0x871E5C;
    esp += 4; return; /* ret */

}

/**
 * sub_005068C0
 * Original: 0x005068C0 - 0x005068C7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005068C0(void)
{

loc_005068C0: ;
    MEM32(ecx) = 0x871E5C;
    esp += 4; return; /* ret */

}

/**
 * sub_005068D0
 * Original: 0x005068D0 - 0x005068E9 (25 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005068D0(void)
{

loc_005068D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 8;
    MEM32(esi) = 0x871FB4;
    PUSH32(esp, 0x005068E1u); RECOMP_ABI_CALL(0x00510F80u, sub_00510F80); /* call 0x00510F80 */

loc_005068E1: ;
    MEM32(esi) = 0x871E5C;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_005068F0
 * Original: 0x005068F0 - 0x005068F1 (1 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005068F0(void)
{

loc_005068F0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00506900
 * Original: 0x00506900 - 0x00506901 (1 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00506900(void)
{

loc_00506900: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00506910
 * Original: 0x00506910 - 0x00506987 (119 bytes, 42 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00506910(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00506910: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 2 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_00506952; /* je: equal / zero */

loc_0050691D: ;
    eax = MEM32(esi + -4);
    ebx = esi + -4;
    ecx = eax + eax * 2;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = esi + ecx * 8;
    if ((_fas < 0)) goto loc_0050694B; /* js: sign (negative) */

loc_0050692C: ;
    PUSH32(esp, edi);
    edi = eax + 1;

loc_00506930: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x18;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esi + 8;
    MEM32(esi) = 0x871FB4;
    PUSH32(esp, 0x00506941u); RECOMP_ABI_CALL(0x00510F80u, sub_00510F80); /* call 0x00510F80 */

loc_00506941: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi) = 0x871E5C;
    if ((_fa != 0)) goto loc_00506930; /* jne: not equal / not zero */

loc_0050694A: ;
    POP32(esp, edi);

loc_0050694B: ;
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00506952: ;
    ecx = esi + 8;
    MEM32(esi) = 0x871FB4;
    PUSH32(esp, 0x00506960u); RECOMP_ABI_CALL(0x00510F80u, sub_00510F80); /* call 0x00510F80 */

loc_00506960: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    MEM32(esi) = 0x871E5C;
    if (TEST_Z(_fa, _fb)) goto loc_00506980; /* je: equal / zero */

loc_0050696B: ;
    PUSH32(esp, 0x1BF);
    PUSH32(esp, 0x871F28);
    PUSH32(esp, 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0050697Du); RECOMP_ABI_CALL(0x005060A0u, sub_005060A0); /* call 0x005060A0 */

loc_0050697D: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00506980: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00506990
 * Original: 0x00506990 - 0x005069A9 (25 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00506990(void)
{

loc_00506990: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 8;
    MEM32(esi) = 0x871FF0;
    PUSH32(esp, 0x005069A1u); RECOMP_ABI_CALL(0x00510F80u, sub_00510F80); /* call 0x00510F80 */

loc_005069A1: ;
    MEM32(esi) = 0x871E5C;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_005069B0
 * Original: 0x005069B0 - 0x00506A27 (119 bytes, 42 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005069B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005069B0: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 2 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_005069F2; /* je: equal / zero */

loc_005069BD: ;
    eax = MEM32(esi + -4);
    ebx = esi + -4;
    ecx = eax + eax * 2;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = esi + ecx * 8;
    if ((_fas < 0)) goto loc_005069EB; /* js: sign (negative) */

loc_005069CC: ;
    PUSH32(esp, edi);
    edi = eax + 1;

loc_005069D0: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x18;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esi + 8;
    MEM32(esi) = 0x871FF0;
    PUSH32(esp, 0x005069E1u); RECOMP_ABI_CALL(0x00510F80u, sub_00510F80); /* call 0x00510F80 */

loc_005069E1: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi) = 0x871E5C;
    if ((_fa != 0)) goto loc_005069D0; /* jne: not equal / not zero */

loc_005069EA: ;
    POP32(esp, edi);

loc_005069EB: ;
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_005069F2: ;
    ecx = esi + 8;
    MEM32(esi) = 0x871FF0;
    PUSH32(esp, 0x00506A00u); RECOMP_ABI_CALL(0x00510F80u, sub_00510F80); /* call 0x00510F80 */

loc_00506A00: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    MEM32(esi) = 0x871E5C;
    if (TEST_Z(_fa, _fb)) goto loc_00506A20; /* je: equal / zero */

loc_00506A0B: ;
    PUSH32(esp, 0x1BF);
    PUSH32(esp, 0x871F28);
    PUSH32(esp, 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00506A1Du); RECOMP_ABI_CALL(0x005060A0u, sub_005060A0); /* call 0x005060A0 */

loc_00506A1D: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00506A20: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00506A30
 * Original: 0x00506A30 - 0x00506A49 (25 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00506A30(void)
{

loc_00506A30: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 8;
    MEM32(esi) = 0x87202C;
    PUSH32(esp, 0x00506A41u); RECOMP_ABI_CALL(0x00510F80u, sub_00510F80); /* call 0x00510F80 */

loc_00506A41: ;
    MEM32(esi) = 0x871E5C;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00506A50
 * Original: 0x00506A50 - 0x00506AC7 (119 bytes, 42 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00506A50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00506A50: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 2 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_00506A92; /* je: equal / zero */

loc_00506A5D: ;
    eax = MEM32(esi + -4);
    ebx = esi + -4;
    ecx = eax + eax * 2;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = esi + ecx * 8;
    if ((_fas < 0)) goto loc_00506A8B; /* js: sign (negative) */

loc_00506A6C: ;
    PUSH32(esp, edi);
    edi = eax + 1;

loc_00506A70: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x18;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esi + 8;
    MEM32(esi) = 0x87202C;
    PUSH32(esp, 0x00506A81u); RECOMP_ABI_CALL(0x00510F80u, sub_00510F80); /* call 0x00510F80 */

loc_00506A81: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi) = 0x871E5C;
    if ((_fa != 0)) goto loc_00506A70; /* jne: not equal / not zero */

loc_00506A8A: ;
    POP32(esp, edi);

loc_00506A8B: ;
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00506A92: ;
    ecx = esi + 8;
    MEM32(esi) = 0x87202C;
    PUSH32(esp, 0x00506AA0u); RECOMP_ABI_CALL(0x00510F80u, sub_00510F80); /* call 0x00510F80 */

loc_00506AA0: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    MEM32(esi) = 0x871E5C;
    if (TEST_Z(_fa, _fb)) goto loc_00506AC0; /* je: equal / zero */

loc_00506AAB: ;
    PUSH32(esp, 0x1BF);
    PUSH32(esp, 0x871F28);
    PUSH32(esp, 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00506ABDu); RECOMP_ABI_CALL(0x005060A0u, sub_005060A0); /* call 0x005060A0 */

loc_00506ABD: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00506AC0: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00506AD0
 * Original: 0x00506AD0 - 0x00506AE9 (25 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00506AD0(void)
{

loc_00506AD0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 8;
    MEM32(esi) = 0x872068;
    PUSH32(esp, 0x00506AE1u); RECOMP_ABI_CALL(0x00510F80u, sub_00510F80); /* call 0x00510F80 */

loc_00506AE1: ;
    MEM32(esi) = 0x871E5C;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00506AF0
 * Original: 0x00506AF0 - 0x00506B67 (119 bytes, 42 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00506AF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00506AF0: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 2 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_00506B32; /* je: equal / zero */

loc_00506AFD: ;
    eax = MEM32(esi + -4);
    ebx = esi + -4;
    ecx = eax + eax * 2;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = esi + ecx * 8;
    if ((_fas < 0)) goto loc_00506B2B; /* js: sign (negative) */

loc_00506B0C: ;
    PUSH32(esp, edi);
    edi = eax + 1;

loc_00506B10: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x18;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esi + 8;
    MEM32(esi) = 0x872068;
    PUSH32(esp, 0x00506B21u); RECOMP_ABI_CALL(0x00510F80u, sub_00510F80); /* call 0x00510F80 */

loc_00506B21: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi) = 0x871E5C;
    if ((_fa != 0)) goto loc_00506B10; /* jne: not equal / not zero */

loc_00506B2A: ;
    POP32(esp, edi);

loc_00506B2B: ;
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00506B32: ;
    ecx = esi + 8;
    MEM32(esi) = 0x872068;
    PUSH32(esp, 0x00506B40u); RECOMP_ABI_CALL(0x00510F80u, sub_00510F80); /* call 0x00510F80 */

loc_00506B40: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    MEM32(esi) = 0x871E5C;
    if (TEST_Z(_fa, _fb)) goto loc_00506B60; /* je: equal / zero */

loc_00506B4B: ;
    PUSH32(esp, 0x1BF);
    PUSH32(esp, 0x871F28);
    PUSH32(esp, 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00506B5Du); RECOMP_ABI_CALL(0x005060A0u, sub_005060A0); /* call 0x005060A0 */

loc_00506B5D: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00506B60: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00506B70
 * Original: 0x00506B70 - 0x00506B89 (25 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00506B70(void)
{

loc_00506B70: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 8;
    MEM32(esi) = 0x871F78;
    PUSH32(esp, 0x00506B81u); RECOMP_ABI_CALL(0x00510F80u, sub_00510F80); /* call 0x00510F80 */

loc_00506B81: ;
    MEM32(esi) = 0x871E5C;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00506B90
 * Original: 0x00506B90 - 0x00506BA9 (25 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00506B90(void)
{

loc_00506B90: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 8;
    MEM32(esi) = 0x8720A4;
    PUSH32(esp, 0x00506BA1u); RECOMP_ABI_CALL(0x00510F80u, sub_00510F80); /* call 0x00510F80 */

loc_00506BA1: ;
    MEM32(esi) = 0x871E5C;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00506BB0
 * Original: 0x00506BB0 - 0x00506C27 (119 bytes, 42 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00506BB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00506BB0: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 2 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_00506BF2; /* je: equal / zero */

loc_00506BBD: ;
    eax = MEM32(esi + -4);
    ebx = esi + -4;
    ecx = eax + eax * 2;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = esi + ecx * 8;
    if ((_fas < 0)) goto loc_00506BEB; /* js: sign (negative) */

loc_00506BCC: ;
    PUSH32(esp, edi);
    edi = eax + 1;

loc_00506BD0: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x18;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esi + 8;
    MEM32(esi) = 0x8720A4;
    PUSH32(esp, 0x00506BE1u); RECOMP_ABI_CALL(0x00510F80u, sub_00510F80); /* call 0x00510F80 */

loc_00506BE1: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi) = 0x871E5C;
    if ((_fa != 0)) goto loc_00506BD0; /* jne: not equal / not zero */

loc_00506BEA: ;
    POP32(esp, edi);

loc_00506BEB: ;
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00506BF2: ;
    ecx = esi + 8;
    MEM32(esi) = 0x8720A4;
    PUSH32(esp, 0x00506C00u); RECOMP_ABI_CALL(0x00510F80u, sub_00510F80); /* call 0x00510F80 */

loc_00506C00: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    MEM32(esi) = 0x871E5C;
    if (TEST_Z(_fa, _fb)) goto loc_00506C20; /* je: equal / zero */

loc_00506C0B: ;
    PUSH32(esp, 0x1BF);
    PUSH32(esp, 0x871F28);
    PUSH32(esp, 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00506C1Du); RECOMP_ABI_CALL(0x005060A0u, sub_005060A0); /* call 0x005060A0 */

loc_00506C1D: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00506C20: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00506C30
 * Original: 0x00506C30 - 0x00506C47 (23 bytes, 8 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00506C30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00506C30: ;
    edx = MEM32(esp + 8);
    eax = ecx;
    ecx = MEM32(esp + 4);
    ecx = MEM32(ecx);
    MEM32(eax) = ecx;
    MEM16(ecx) = MEM16(ecx) + 1;
    _fa = (uint32_t)(MEM16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + 4) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00506C50
 * Original: 0x00506C50 - 0x00506C67 (23 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00506C50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00506C50: ;
    eax = ecx;
    MEM32(eax) = 0x8DACCC;
    MEM16(0x8DACCC) = MEM16(0x8DACCC) + 1;
    _fa = (uint32_t)(MEM16(0x8DACCC)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + 4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00506C70
 * Original: 0x00506C70 - 0x00506D01 (145 bytes, 47 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00506C70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00506C70: ;
    edx = MEM32(esp + 4);
    eax = ecx;
    ecx = MEM32(eax + 4);
    ecx = ecx & 0xFFFFFFC0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ecx & 0xF000803Fu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | 0x10008000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x1C (32-bit) */
    MEM32(eax) = 0x871E5C;
    MEM32(eax + 4) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00506CEC; /* je: equal / zero */

loc_00506C98: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xA (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00506CEC; /* je: equal / zero */

loc_00506C9D: ;
    PUSH32(esp, ebx);
    ecx = ecx | 0x40000000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 4) = ecx;
    PUSH32(esp, esi);
    esi = MEM32(0x912770);
    ebx = MEM32(esi);
    edx = esi + 4;
    PUSH32(esp, edi);
    edi = MEM32(edx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00506CD2; /* jl: less (signed <) */

loc_00506CBA: ;
    ecx = ecx & 0xBFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, edi);
    MEM32(eax + 4) = ecx;
    POP32(esp, esi);
    ecx = ecx & 0xDFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, ebx);
    MEM32(eax + 4) = ecx;
    esp += 8; return; /* ret 4 */

loc_00506CD2: ;
    ecx = MEM32(esi + 8);
    MEM32(ecx + edi * 4) = eax;
    MEM32(edx) = MEM32(edx) + 1;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = MEM32(eax + 4);
    POP32(esp, edi);
    POP32(esp, esi);
    ecx = ecx & 0xDFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, ebx);
    MEM32(eax + 4) = ecx;
    esp += 8; return; /* ret 4 */

loc_00506CEC: ;
    ecx = ecx & 0xBFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 4) = ecx;
    ecx = ecx & 0xDFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 4) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00506D10
 * Original: 0x00506D10 - 0x00506D36 (38 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00506D10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00506D10: ;
    edx = MEM32(esp + 4);
    eax = ecx;
    ecx = MEM32(eax + 4);
    ecx = ecx & 0xFFFFFFC0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ecx & 0x8000803Fu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | 0x8000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax) = 0x871E5C;
    MEM32(eax + 4) = ecx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00506D40
 * Original: 0x00506D40 - 0x00506D52 (18 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00506D40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00506D40: ;
    eax = MEM32(ecx);
    edx = MEM32(esp + 4);
    ecx = MEM32(ecx + 8);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ecx + eax * 4 + -4);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00506D60
 * Original: 0x00506D60 - 0x00506D6C (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00506D60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00506D60: ;
    eax = MEM32(ecx);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx) = eax;
    ecx = MEM32(ecx + 8);
    eax = MEM32(ecx + eax * 4);
    esp += 4; return; /* ret */

}

/**
 * sub_00506D70
 * Original: 0x00506D70 - 0x00506DD0 (96 bytes, 40 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00506D70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00506D70: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    ecx = MEM32(edi + 4);
    eax = ecx;
    eax = eax & 0x3F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00506D9C; /* jne: not equal / not zero */

loc_00506D85: ;
    edx = ecx;
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(0xF) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    SET_LO8(edx, ~LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00506D9C; /* jne: not equal / not zero */

loc_00506D91: ;
    eax = MEM32(edi + 8);
    ecx = MEM32(esi + 0x38);
    eax = MEM32(ecx + eax * 4);
    goto loc_00506DBB;

loc_00506D9C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00506DB9; /* jne: not equal / not zero */

loc_00506DA1: ;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(0xF) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    SET_LO8(ecx, ~LO8(ecx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00506DB9; /* jne: not equal / not zero */

loc_00506DAB: ;
    edi = MEM32(edi + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00506DB4u); RECOMP_ABI_CALL(0x00511DC0u, sub_00511DC0); /* call 0x00511DC0 */

loc_00506DB4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00506DBB;

loc_00506DB9: ;
    eax = edi;

loc_00506DBB: ;
    edx = MEM32(esi);
    ecx = MEM32(esi + 8);
    MEM32(ecx + edx * 4) = eax;
    MEM32(esi) = MEM32(esi) + 1;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00506DCBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00506DC9u); } /* indirect call */
    }

loc_00506DCB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00506DF0
 * Original: 0x00506DF0 - 0x00506E03 (19 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00506DF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00506DF0: ;
    eax = MEM32(ecx);
    edx = MEM32(ecx + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    MEM32(edx + eax * 4) = esi;
    MEM32(ecx) = MEM32(ecx) + 1;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00506E10
 * Original: 0x00506E10 - 0x00506E1A (10 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00506E10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00506E10: ;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00506E19; /* jle: less or equal (signed <=) */

loc_00506E16: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx) = eax;

loc_00506E19: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00506E20
 * Original: 0x00506E20 - 0x00506E25 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00506E20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00506E20: ;
    g_seh_ebp = ebp; sub_00506270(); return; /* tail jmp 0x00506270 */

}

/**
 * sub_00506E30
 * Original: 0x00506E30 - 0x00506E49 (25 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00506E30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00506E30: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00506E47; /* jle: less or equal (signed <=) */

loc_00506E39: ;
    ecx = MEM32(esi + 8);
    ecx = MEM32(ecx + eax * 4 + -4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00506E45u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00506E42u); } /* indirect call */
    }

loc_00506E45: ;
    MEM32(esi) = MEM32(esi) - 1;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00506E47: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00506E50
 * Original: 0x00506E50 - 0x00506E82 (50 bytes, 24 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00506E50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00506E50: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00506E7D; /* jl: less (signed <) */

loc_00506E5C: ;
    PUSH32(esp, esi);
    esi = 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00506E7A; /* jl: less (signed <) */

loc_00506E66: ;
    eax = MEM32(edi);
    ecx = MEM32(edi + 8);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ecx + eax * 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00506E75u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00506E72u); } /* indirect call */
    }

loc_00506E75: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00506E66; /* jle: less or equal (signed <=) */

loc_00506E7A: ;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(edi) = MEM32(edi) - ebx;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, esi);

loc_00506E7D: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00506E90
 * Original: 0x00506E90 - 0x00506E95 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00506E90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00506E90: ;
    g_seh_ebp = ebp; sub_005062D0(); return; /* tail jmp 0x005062D0 */

}

/**
 * sub_00506EA0
 * Original: 0x00506EA0 - 0x00506F1F (127 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00506EA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00506EA0: ;
    PUSH32(esp, esi);
    esi = MEM32(0x913358);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00506EFD; /* je: equal / zero */

loc_00506EAB: ;
    eax = MEM32(esi + 0xC);
    MEM32(0x913358) = eax;
    eax = MEM32(esi + 4);
    eax = eax | 0x40000000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 4) = eax;
    ecx = MEM32(0x912770);
    edx = MEM32(ecx + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx) (32-bit) */
    PUSH32(esp, edi);
    edi = eax;
    eax = ecx + 4;
    if (CMP_L(_fas, _fbs)) goto loc_00506EDC; /* jl: less (signed <) */

loc_00506ED1: ;
    edi = edi & 0xBFFFFFFFu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 4) = edi;
    goto loc_00506EE4;

loc_00506EDC: ;
    ecx = MEM32(ecx + 8);
    MEM32(ecx + edx * 4) = esi;
    MEM32(eax) = MEM32(eax) + 1;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00506EE4: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8DACCC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x8DACCC (32-bit) */
    ecx = esi + 8;
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00506EF9; /* je: equal / zero */

loc_00506EF2: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00506EF9u); RECOMP_ABI_CALL(0x00513390u, sub_00513390); /* call 0x00513390 */

loc_00506EF9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00506EFD: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64);
    PUSH32(esp, 0x871C40);
    PUSH32(esp, 0x10);
    { uint32_t _icall_target = MEM32(0x912788); PUSH32(esp, 0x00506F0Cu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00506F06u); } /* indirect call */
    }

loc_00506F0C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00506F1B; /* je: equal / zero */

loc_00506F13: ;
    ecx = eax;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0052F650(); return; /* tail jmp 0x0052F650 */

loc_00506F1B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00506F20
 * Original: 0x00506F20 - 0x00506F66 (70 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00506F20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00506F20: ;
    eax = MEM32(0x913358);
    PUSH32(esp, esi);
    MEM32(ecx + 0xC) = eax;
    esi = ecx + 8;
    MEM32(0x913358) = ecx;
    PUSH32(esp, 0x21);
    ecx = esi;
    PUSH32(esp, 0x00506F3Bu); RECOMP_ABI_CALL(0x00512B70u, sub_00512B70); /* call 0x00512B70 */

loc_00506F3B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00506F64; /* je: equal / zero */

loc_00506F3F: ;
    eax = MEM32(esi);
    MEM16(eax) = MEM16(eax) - 1;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00506F57; /* jne: not equal / not zero */

loc_00506F4A: ;
    ecx = MEM32(0x9132E8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 4); PUSH32(esp, 0x00506F54u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00506F51u); } /* indirect call */
    }

loc_00506F54: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00506F57: ;
    MEM32(esi) = 0x8DACCC;
    MEM16(0x8DACCC) = MEM16(0x8DACCC) + 1;
    _fa = (uint32_t)(MEM16(0x8DACCC)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */

loc_00506F64: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00506F70
 * Original: 0x00506F70 - 0x0050701E (174 bytes, 71 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00506F70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00506F70: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0050701B; /* jle: less or equal (signed <=) */

loc_00506F84: ;
    SET_LO8(ecx, MEM8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x7F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x7F (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00506F91; /* ja: above (unsigned >) */

loc_00506F8B: ;
    ecx = ZX8(LO8(ecx));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00507009;

loc_00506F91: ;
    SET_LO8(edx, LO8(ecx));
    SET_LO8(edx, LO8(edx) & 0xE0);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xC0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0xC0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00506FB0; /* jne: not equal / not zero */

loc_00506F9B: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, MEM8(eax + 1));
    ecx = ecx & 0x1F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = edx & 0x3F;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00507009;

loc_00506FB0: ;
    SET_LO8(edx, LO8(ecx));
    SET_LO8(edx, LO8(edx) & 0xF0);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xE0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0xE0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00506FDC; /* jne: not equal / not zero */

loc_00506FBA: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, MEM8(eax + 1));
    ecx = ecx & 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = edx & 0x3F;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, MEM8(eax + 2));
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = edx & 0x3F;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00507009;

loc_00506FDC: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, MEM8(eax + 1));
    ecx = ecx & 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = edx & 0x3F;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, MEM8(eax + 2));
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = edx & 0x3F;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, MEM8(eax + 3));
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = edx & 0x3F;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00507009: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00507019; /* je: equal / zero */

loc_0050700D: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00506F84; /* jl: less (signed <) */

loc_00507016: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00507019: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0050701B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00507020
 * Original: 0x00507020 - 0x005070B6 (150 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00507020(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00507020: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00507027: ;
    SET_LO8(ecx, MEM8(edx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x7F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x7F (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00507034; /* ja: above (unsigned >) */

loc_0050702E: ;
    ecx = ZX8(LO8(ecx));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_005070A8;

loc_00507034: ;
    SET_LO8(eax, LO8(ecx));
    SET_LO8(eax, LO8(eax) & 0xE0);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xC0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xC0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00507051; /* jne: not equal / not zero */

loc_0050703C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(edx + 1));
    ecx = ecx & 0x1F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 0x3F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_005070A8;

loc_00507051: ;
    SET_LO8(eax, LO8(ecx));
    SET_LO8(eax, LO8(eax) & 0xF0);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xE0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xE0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0050707B; /* jne: not equal / not zero */

loc_00507059: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(edx + 1));
    ecx = ecx & 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 0x3F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(edx + 2));
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 0x3F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_005070A8;

loc_0050707B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(edx + 1));
    ecx = ecx & 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 0x3F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(edx + 2));
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 0x3F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(edx + 3));
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 0x3F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005070A8: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005070B2; /* je: equal / zero */

loc_005070AC: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00507027;

loc_005070B2: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_005070C0
 * Original: 0x005070C0 - 0x005070E3 (35 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_005070C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005070C0: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(0x9132F0);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(0x9132F8);
    eax = MEM32(ecx + eax * 4 + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005070E0; /* je: equal / zero */

loc_005070D9: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp HI8(ecx), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fas) - (uint8_t)(_fbs)) >> 7) != 0)) goto loc_005070E2; /* js: sign (negative) */

loc_005070E0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_005070E2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_005070F0
 * Original: 0x005070F0 - 0x00507160 (112 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005070F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005070F0: ;
    eax = MEM32(0x912738);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0050715F; /* je: equal / zero */

loc_005070F9: ;
    eax = MEM32(eax + 0x1128);
    ecx = MEM32(eax);
    eax = MEM32(ecx + 0x50);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00507143; /* je: equal / zero */

loc_00507108: ;
    ecx = MEM32(eax + 4);
    edx = ecx;
    edx = edx & 0x3F;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x12) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0x12 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00507143; /* jne: not equal / not zero */

loc_00507115: ;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(0xF) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    SET_LO8(ecx, ~LO8(ecx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00507143; /* jne: not equal / not zero */

loc_0050711F: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = MEM32(eax + 0x48);
    if (CMP_EQ(_fa, _fb)) goto loc_00507132; /* je: equal / zero */

loc_0050712A: ;
    edx = MEM32(eax + 0xC);
    edx = MEM32(edx + 0x1C);
    MEM32(ecx) = edx;

loc_00507132: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0050715F; /* je: equal / zero */

loc_0050713A: ;
    eax = MEM32(eax + 0xC);
    edx = MEM32(eax + 0x20);
    MEM32(ecx) = edx;
    esp += 4; return; /* ret */

loc_00507143: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00507151; /* je: equal / zero */

loc_0050714B: ;
    MEM32(eax) = 0;

loc_00507151: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0050715F; /* je: equal / zero */

loc_00507159: ;
    MEM32(eax) = 0;

loc_0050715F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00507160
 * Original: 0x00507160 - 0x00507262 (258 bytes, 89 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00507160(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00507160: ;
    ecx = MEM32(0x912738);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(ecx + 0x1128);
    edx = MEM32(eax);
    eax = MEM32(edx + 0x50);
    esi = MEM32(eax + 4);
    edx = esi;
    edx = edx & 0x3F;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x12) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0x12 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00507191; /* jne: not equal / not zero */

loc_00507185: ;
    edx = esi;
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(0xF) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    SET_LO8(edx, ~LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00507197; /* je: equal / zero */

loc_00507191: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00507197: ;
    eax = MEM32(eax + 0x48);
    edx = MEM32(eax + 0x30);
    eax = MEM32(eax + 0xC);
    esi = MEM32(eax + 0x24);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0050722C; /* jb: below (unsigned <) */

loc_005071AD: ;
    ebp = 1;

loc_005071B2: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x005071B8u); RECOMP_ABI_CALL(0x00528030u, sub_00528030); /* call 0x00528030 */

loc_005071B8: ;
    ecx = MEM32(0x912738);
    _fb = (uint32_t)(0x1128) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1128;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x005071C9u); RECOMP_ABI_CALL(0x00539BB0u, sub_00539BB0); /* call 0x00539BB0 */

loc_005071C9: ;
    ecx = MEM32(0x912738);
    PUSH32(esp, 0x005071D4u); RECOMP_ABI_CALL(0x005282D0u, sub_005282D0); /* call 0x005282D0 */

loc_005071D4: ;
    ecx = MEM32(0x912738);
    PUSH32(esp, 0x005071DFu); RECOMP_ABI_CALL(0x00538AE0u, sub_00538AE0); /* call 0x00538AE0 */

loc_005071DF: ;
    ecx = MEM32(0x912758);
    PUSH32(esp, 0x005071EAu); RECOMP_ABI_CALL(0x0050B470u, sub_0050B470); /* call 0x0050B470 */

loc_005071EA: ;
    eax = MEM32(0x912754);
    ecx = MEM32(0x912738);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x912754) = eax;
    edx = MEM32(ecx + 0x1128);
    eax = MEM32(edx);
    eax = MEM32(eax + 0x50);
    eax = MEM32(eax + 4);
    edx = eax;
    edx = edx & 0x3F;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x12) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0x12 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00507259; /* jne: not equal / not zero */

loc_00507216: ;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0xF) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    SET_LO8(eax, ~LO8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00507259; /* jne: not equal / not zero */

loc_0050721F: ;
    eax = MEM32(0x912768);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0050722C; /* jne: not equal / not zero */

loc_00507228: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_005071B2; /* jae: above or equal (unsigned >=) */

loc_0050722C: ;
    eax = MEM32(ecx + 0x1128);
    ecx = MEM32(eax);
    ecx = MEM32(ecx + 0x50);
    eax = MEM32(ecx + 4);
    edx = eax;
    edx = edx & 0x3F;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x12) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0x12 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00507253; /* jne: not equal / not zero */

loc_00507244: ;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0xF) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    SET_LO8(eax, ~LO8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00507253; /* jne: not equal / not zero */

loc_0050724D: ;
    eax = MEM32(ecx + 0x48);
    MEM32(eax + 0x30) = edi;

loc_00507253: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00507259: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00507270
 * Original: 0x00507270 - 0x00507277 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00507270(void)
{

loc_00507270: ;
    MEM32(ecx) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00507280
 * Original: 0x00507280 - 0x005072C2 (66 bytes, 29 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00507280(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00507280: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005072BB; /* je: equal / zero */

loc_0050728C: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005072AA; /* je: equal / zero */

loc_00507292: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00507298u); RECOMP_ABI_CALL(0x00509D60u, sub_00509D60); /* call 0x00509D60 */

loc_00507298: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005072AA; /* jne: not equal / not zero */

loc_0050729F: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x005072A7u); RECOMP_ABI_CALL(0x0050A2C0u, sub_0050A2C0); /* call 0x0050A2C0 */

loc_005072A7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005072AA: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_005072BB; /* je: equal / zero */

loc_005072B2: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x005072B8u); RECOMP_ABI_CALL(0x00509D50u, sub_00509D50); /* call 0x00509D50 */

loc_005072B8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005072BB: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_005072D0
 * Original: 0x005072D0 - 0x005072DB (11 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005072D0(void)
{

loc_005072D0: ;
    ecx = MEM32(ecx);
    eax = MEM32(esp + 4);
    MEM32(eax) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_005072E0
 * Original: 0x005072E0 - 0x005072ED (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005072E0(void)
{

loc_005072E0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_005072F0
 * Original: 0x005072F0 - 0x0050730D (29 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005072F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005072F0: ;
    eax = ecx;
    ecx = eax + 0xC;
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    MEM32(eax + 8) = ecx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx) = edx;
    MEM32(ecx + 4) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_00507310
 * Original: 0x00507310 - 0x00507343 (51 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00507310(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00507310: ;
    eax = ecx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = eax + 0xC;
    MEM32(eax + 8) = ecx;
    MEM32(eax) = edx;
    MEM32(eax + 4) = edx;
    MEM32(ecx) = 0x8DACCC;
    MEM16(0x8DACCC) = MEM16(0x8DACCC) + 1;
    _fa = (uint32_t)(MEM16(0x8DACCC)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 4) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = 0x8DACCC;
    MEM16(0x8DACCC) = MEM16(0x8DACCC) + 1;
    _fa = (uint32_t)(MEM16(0x8DACCC)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 4) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_00507350
 * Original: 0x00507350 - 0x00507354 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00507350(void)
{

loc_00507350: ;
    eax = MEM32(ecx + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_00507360
 * Original: 0x00507360 - 0x00507369 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00507360(void)
{

loc_00507360: ;
    eax = MEM32(ecx);
    ecx = MEM32(ecx + 8);
    eax = ecx + eax * 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00507370
 * Original: 0x00507370 - 0x0050738C (28 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00507370(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00507370: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0050738A; /* je: equal / zero */

loc_00507379: ;
    PUSH32(esp, edi);
    edi = MEM32(eax + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x91278C); PUSH32(esp, 0x00507384u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0050737Eu); } /* indirect call */
    }

loc_00507384: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = edi;
    POP32(esp, edi);

loc_0050738A: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00507390
 * Original: 0x00507390 - 0x005073B3 (35 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00507390(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00507390: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005073B1; /* je: equal / zero */

loc_00507399: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0050739Fu); RECOMP_ABI_CALL(0x00509D80u, sub_00509D80); /* call 0x00509D80 */

loc_0050739F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005073B1; /* jne: not equal / not zero */

loc_005073A6: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x005073AEu); RECOMP_ABI_CALL(0x0050AF00u, sub_0050AF00); /* call 0x0050AF00 */

loc_005073AE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005073B1: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_005073C0
 * Original: 0x005073C0 - 0x00507436 (118 bytes, 38 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005073C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005073C0: ;
    eax = ecx;
    edx = MEM32(eax + 4);
    ecx = MEM32(esp + 4);
    edx = edx & 0xFFFFFFC0u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx | ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = edx & 0xF000803Fu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx | 0x10008000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x1C (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(eax) = 0x871E5C;
    MEM32(eax + 4) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_00507416; /* je: equal / zero */

loc_005073EA: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xA (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00507416; /* je: equal / zero */

loc_005073EF: ;
    edx = edx | 0x40000000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 4) = edx;
    esi = MEM32(0x912770);
    edi = MEM32(esi + 4);
    PUSH32(esp, ebx);
    ebx = MEM32(esi);
    ecx = esi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    POP32(esp, ebx);
    if (CMP_GE(_fas, _fbs)) goto loc_00507416; /* jge: greater or equal (signed >=) */

loc_0050740C: ;
    edx = MEM32(esi + 8);
    MEM32(edx + edi * 4) = eax;
    MEM32(ecx) = MEM32(ecx) + 1;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0050741F;

loc_00507416: ;
    edx = edx & 0xBFFFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 4) = edx;

loc_0050741F: ;
    ecx = MEM32(eax + 4);
    ecx = ecx & 0xDFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, edi);
    MEM32(eax + 4) = ecx;
    MEM32(eax) = 0x8720E0;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00507440
 * Original: 0x00507440 - 0x00507466 (38 bytes, 10 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00507440(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00507440: ;
    edx = MEM32(esp + 4);
    eax = ecx;
    ecx = MEM32(eax + 4);
    ecx = ecx & 0xFFFFFFC0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ecx & 0x8000803Fu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | 0x8000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 4) = ecx;
    MEM32(eax) = 0x8720E0;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00507470
 * Original: 0x00507470 - 0x0050749B (43 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00507470(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00507470: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x871E5C;
    if (TEST_Z(_fa, _fb)) goto loc_00507495; /* je: equal / zero */

loc_00507480: ;
    PUSH32(esp, 0x1BF);
    PUSH32(esp, 0x871F28);
    PUSH32(esp, 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00507492u); RECOMP_ABI_CALL(0x005060A0u, sub_005060A0); /* call 0x005060A0 */

loc_00507492: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00507495: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_005074A0
 * Original: 0x005074A0 - 0x00507516 (118 bytes, 38 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005074A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005074A0: ;
    eax = ecx;
    edx = MEM32(eax + 4);
    ecx = MEM32(esp + 4);
    edx = edx & 0xFFFFFFC0u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx | ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = edx & 0xF000803Fu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx | 0x10008000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x1C (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(eax) = 0x871E5C;
    MEM32(eax + 4) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_005074F6; /* je: equal / zero */

loc_005074CA: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xA (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005074F6; /* je: equal / zero */

loc_005074CF: ;
    edx = edx | 0x40000000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 4) = edx;
    esi = MEM32(0x912770);
    edi = MEM32(esi + 4);
    PUSH32(esp, ebx);
    ebx = MEM32(esi);
    ecx = esi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    POP32(esp, ebx);
    if (CMP_GE(_fas, _fbs)) goto loc_005074F6; /* jge: greater or equal (signed >=) */

loc_005074EC: ;
    edx = MEM32(esi + 8);
    MEM32(edx + edi * 4) = eax;
    MEM32(ecx) = MEM32(ecx) + 1;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_005074FF;

loc_005074F6: ;
    edx = edx & 0xBFFFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 4) = edx;

loc_005074FF: ;
    ecx = MEM32(eax + 4);
    ecx = ecx & 0xDFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, edi);
    MEM32(eax + 4) = ecx;
    MEM32(eax) = 0x87211C;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00507520
 * Original: 0x00507520 - 0x00507523 (3 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00507520(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00507520: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00507530
 * Original: 0x00507530 - 0x00507531 (1 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00507530(void)
{

loc_00507530: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00507540
 * Original: 0x00507540 - 0x00507562 (34 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00507540(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00507540: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x871E5C;
    if (TEST_Z(_fa, _fb)) goto loc_0050755C; /* je: equal / zero */

loc_00507550: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 8);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x912790); PUSH32(esp, 0x00507559u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00507553u); } /* indirect call */
    }

loc_00507559: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0050755C: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00507570
 * Original: 0x00507570 - 0x00507626 (182 bytes, 56 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00507570(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00507570: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    ecx = MEM32(esp + 8);
    eax = eax & 0xFFFFFFC0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = MEM32(esp + 0xC);
    eax = eax & 0x8000803Fu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0x8000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 4) = eax;
    MEM32(esi) = 0x872158;
    MEM32(esi + 8) = 0x8DACCC;
    MEM16(0x8DACCC) = MEM16(0x8DACCC) + 1;
    _fa = (uint32_t)(MEM16(0x8DACCC)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    eax = 0x3F800000;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x48) = ecx;
    ecx = MEM32(esp + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x10) = edi;
    MEM32(esi + 0x14) = edi;
    MEM32(esi + 0x18) = eax;
    MEM32(esi + 0x1C) = edi;
    MEM32(esi + 0x20) = edi;
    MEM32(esi + 0x24) = eax;
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x2C) = eax;
    MEM32(esi + 0x30) = eax;
    MEM32(esi + 0x34) = edi;
    MEM32(esi + 0x38) = edi;
    MEM32(esi + 0x3C) = edi;
    MEM32(esi + 0x40) = edi;
    MEM32(esi + 0x44) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_005075E8; /* je: equal / zero */

loc_005075E4: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x005075E8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005075E6u); } /* indirect call */
    }

loc_005075E8: ;
    eax = MEM32(esi + 0x54);
    ecx = MEM32(esi + 0x58);
    eax = eax | 0x7FFE0000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0x54) = eax;
    eax = MEM32(esi + 4);
    eax = eax & 0xEFFFC07Fu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ecx & 0xFFF0FFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x58) = ecx;
    MEM16(esi + 0x58) = LO16(edi);
    MEM32(esi + 4) = eax;
    eax = MEM32(esi + 0x58);
    eax = eax | 0x100000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0x5C) = edi;
    MEM32(esi + 0x58) = eax;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00507630
 * Original: 0x00507630 - 0x00507650 (32 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00507630(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00507630: ;
    edx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    edx = MEM32(ecx + 0x58);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x11) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax ^ edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax & 0x20000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x58) = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00507650
 * Original: 0x00507650 - 0x00507660 (16 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00507650(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00507650: ;
    eax = MEM32(ecx + 0x58);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x11) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_00507660
 * Original: 0x00507660 - 0x0050768A (42 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00507660(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00507660: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00507668u); RECOMP_ABI_CALL(0x0053D440u, sub_0053D440); /* call 0x0053D440 */

loc_00507668: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00507684; /* je: equal / zero */

loc_0050766F: ;
    PUSH32(esp, 0x1BF);
    PUSH32(esp, 0x871F28);
    PUSH32(esp, 0x60);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00507681u); RECOMP_ABI_CALL(0x005060A0u, sub_005060A0); /* call 0x005060A0 */

loc_00507681: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00507684: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00507690
 * Original: 0x00507690 - 0x005076B6 (38 bytes, 13 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00507690(void)
{

loc_00507690: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0050769Du); RECOMP_ABI_CALL(0x005073C0u, sub_005073C0); /* call 0x005073C0 */

loc_0050769D: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    ecx = esi + 8;
    MEM32(esi) = 0x872194;
    PUSH32(esp, 0x005076B0u); RECOMP_ABI_CALL(0x00510F60u, sub_00510F60); /* call 0x00510F60 */

loc_005076B0: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_005076C0
 * Original: 0x005076C0 - 0x005076F3 (51 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005076C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005076C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 8;
    PUSH32(esp, 0x005076CBu); RECOMP_ABI_CALL(0x00510F80u, sub_00510F80); /* call 0x00510F80 */

loc_005076CB: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    MEM32(esi) = 0x871E5C;
    if (TEST_Z(_fa, _fb)) goto loc_005076ED; /* je: equal / zero */

loc_005076D8: ;
    PUSH32(esp, 0x1BF);
    PUSH32(esp, 0x871F28);
    PUSH32(esp, 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, 0x005076EAu); RECOMP_ABI_CALL(0x005060A0u, sub_005060A0); /* call 0x005060A0 */

loc_005076EA: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005076ED: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00507700
 * Original: 0x00507700 - 0x00507737 (55 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00507700(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00507700: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0050770Du); RECOMP_ABI_CALL(0x005073C0u, sub_005073C0); /* call 0x005073C0 */

loc_0050770D: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    ecx = esi + 8;
    MEM32(esi) = 0x872194;
    PUSH32(esp, 0x00507720u); RECOMP_ABI_CALL(0x00510F60u, sub_00510F60); /* call 0x00510F60 */

loc_00507720: ;
    MEM8(esi + 0x18) = 0;
    MEM32(esi + 0x18) = MEM32(esi + 0x18) & 0xFFFFFCFFu;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi) = 0x871F78;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00507740
 * Original: 0x00507740 - 0x005077BA (122 bytes, 38 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00507740(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00507740: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    eax = eax & 0xF0008009u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0x50008009;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi) = 0x871E5C;
    MEM32(esi + 4) = eax;
    edx = MEM32(0x912770);
    ebx = MEM32(edx);
    ecx = edx + 4;
    PUSH32(esp, edi);
    edi = MEM32(ecx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00507776; /* jl: less (signed <) */

loc_0050776C: ;
    eax = eax & 0xBFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 4) = eax;
    goto loc_0050777E;

loc_00507776: ;
    eax = MEM32(edx + 8);
    MEM32(eax + edi * 4) = esi;
    MEM32(ecx) = MEM32(ecx) + 1;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0050777E: ;
    edx = MEM32(esi + 4);
    edx = edx & 0xDFFFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 8);
    ecx = esi + 8;
    MEM32(esi + 4) = edx;
    MEM32(esi) = 0x872194;
    PUSH32(esp, 0x0050779Au); RECOMP_ABI_CALL(0x00510F60u, sub_00510F60); /* call 0x00510F60 */

loc_0050779A: ;
    ecx = MEM32(esp + 0x10);
    MEM8(esi + 0x18) = 0;
    MEM32(esi + 0x18) = MEM32(esi + 0x18) & 0xFFFFFCFFu;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, edi);
    MEM32(esi) = 0x8721D0;
    MEM32(esi + 0x1C) = ecx;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_005077C0
 * Original: 0x005077C0 - 0x005077F0 (48 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005077C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005077C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x8721D0;
    PUSH32(esp, 0x005077CEu); RECOMP_ABI_CALL(0x005067B0u, sub_005067B0); /* call 0x005067B0 */

loc_005077CE: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_005077EA; /* je: equal / zero */

loc_005077D5: ;
    PUSH32(esp, 0x1BF);
    PUSH32(esp, 0x871F28);
    PUSH32(esp, 0x20);
    PUSH32(esp, esi);
    PUSH32(esp, 0x005077E7u); RECOMP_ABI_CALL(0x005060A0u, sub_005060A0); /* call 0x005060A0 */

loc_005077E7: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005077EA: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_005077F0
 * Original: 0x005077F0 - 0x00507867 (119 bytes, 40 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005077F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005077F0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    eax = eax & 0xF0008014u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0x50008014;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi) = 0x871E5C;
    MEM32(esi + 4) = eax;
    edx = MEM32(0x912770);
    ebx = MEM32(edx);
    ecx = edx + 4;
    PUSH32(esp, edi);
    edi = MEM32(ecx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00507826; /* jl: less (signed <) */

loc_0050781C: ;
    eax = eax & 0xBFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 4) = eax;
    goto loc_0050782E;

loc_00507826: ;
    eax = MEM32(edx + 8);
    MEM32(eax + edi * 4) = esi;
    MEM32(ecx) = MEM32(ecx) + 1;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0050782E: ;
    edx = MEM32(esi + 4);
    edx = edx & 0xDFFFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 4);
    ecx = esi + 8;
    MEM32(esi + 4) = edx;
    MEM32(esi) = 0x872194;
    PUSH32(esp, 0x0050784Au); RECOMP_ABI_CALL(0x00510F60u, sub_00510F60); /* call 0x00510F60 */

loc_0050784A: ;
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = 0x87220C;
    MEM32(esi + 0x18) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0050785F; /* je: equal / zero */

loc_0050785B: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0050785Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0050785Du); } /* indirect call */
    }

loc_0050785F: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00507870
 * Original: 0x00507870 - 0x00507889 (25 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00507870(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00507870: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00507881; /* je: equal / zero */

loc_0050787A: ;
    ecx = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00507881u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0050787Eu); } /* indirect call */
    }

loc_00507881: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0050D510(); return; /* tail jmp 0x0050D510 */

}

/**
 * sub_00507890
 * Original: 0x00507890 - 0x005078BC (44 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00507890(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00507890: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005078B4; /* je: equal / zero */

loc_0050789A: ;
    ecx = MEM32(eax + 4);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(0xE) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_005078B4; /* jne: not equal / not zero */

loc_005078A5: ;
    MEM32(eax + 4) = MEM32(eax + 4) | 0x4000;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = MEM32(esi + 0x18);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x005078B4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005078B1u); } /* indirect call */
    }

loc_005078B4: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0050D500(); return; /* tail jmp 0x0050D500 */

}

/**
 * sub_005078C0
 * Original: 0x005078C0 - 0x005078F0 (48 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005078C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005078C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x87220C;
    PUSH32(esp, 0x005078CEu); RECOMP_ABI_CALL(0x00506770u, sub_00506770); /* call 0x00506770 */

loc_005078CE: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_005078EA; /* je: equal / zero */

loc_005078D5: ;
    PUSH32(esp, 0x1BF);
    PUSH32(esp, 0x871F28);
    PUSH32(esp, 0x1C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x005078E7u); RECOMP_ABI_CALL(0x005060A0u, sub_005060A0); /* call 0x005060A0 */

loc_005078E7: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005078EA: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_005078F0
 * Original: 0x005078F0 - 0x0050796A (122 bytes, 41 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005078F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005078F0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    eax = eax & 0xF0008014u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0x50008014;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi) = 0x871E5C;
    MEM32(esi + 4) = eax;
    edx = MEM32(0x912770);
    ebx = MEM32(edx);
    ecx = edx + 4;
    PUSH32(esp, edi);
    edi = MEM32(ecx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00507926; /* jl: less (signed <) */

loc_0050791C: ;
    eax = eax & 0xBFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 4) = eax;
    goto loc_0050792E;

loc_00507926: ;
    eax = MEM32(edx + 8);
    MEM32(eax + edi * 4) = esi;
    MEM32(ecx) = MEM32(ecx) + 1;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0050792E: ;
    edi = MEM32(esi + 4);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    edi = edi & 0xDFFFFFFFu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = esi + 8;
    MEM32(esi + 4) = edi;
    MEM32(esi) = 0x872194;
    PUSH32(esp, 0x0050794Du); RECOMP_ABI_CALL(0x00510F60u, sub_00510F60); /* call 0x00510F60 */

loc_0050794D: ;
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = 0x87220C;
    MEM32(esi + 0x18) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00507962; /* je: equal / zero */

loc_0050795E: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00507962u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00507960u); } /* indirect call */
    }

loc_00507962: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00507970
 * Original: 0x00507970 - 0x00507A79 (265 bytes, 86 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00507970(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00507970: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x1BF);
    edi = ecx;
    _fa = (uint32_t)(MEM16(edi + 0x28)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 0x28), 0 (16-bit) */
    PUSH32(esp, 0x871F28);
    PUSH32(esp, 0x24);
    if (CMP_EQ(_fa, _fb)) goto loc_005079E8; /* je: equal / zero */

loc_00507989: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x912788); PUSH32(esp, 0x0050798Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00507989u); } /* indirect call */
    }

loc_0050798F: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x0050799Au); RECOMP_ABI_CALL(0x00529AA0u, sub_00529AA0); /* call 0x00529AA0 */

loc_0050799A: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00507A67; /* je: equal / zero */

loc_005079A5: ;
    eax = MEM32(esi + 4);
    ebp = ZX16(MEM16(edi + 0x28));
    edi = MEM32(edi + 0x24);
    eax = eax & 0xF0008014u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0x50008014;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi) = 0x871E5C;
    MEM32(esi + 4) = eax;
    edx = MEM32(0x912770);
    ebx = MEM32(edx + 4);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(edx) (32-bit) */
    ecx = edx + 4;
    if (CMP_L(_fas, _fbs)) goto loc_005079DD; /* jl: less (signed <) */

loc_005079D2: ;
    eax = eax & 0xBFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 4) = eax;
    PUSH32(esp, ebp);
    goto loc_00507A3D;

loc_005079DD: ;
    eax = MEM32(edx + 8);
    MEM32(eax + ebx * 4) = esi;
    MEM32(ecx) = MEM32(ecx) + 1;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ebp);
    goto loc_00507A3D;

loc_005079E8: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x912788); PUSH32(esp, 0x005079EEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005079E8u); } /* indirect call */
    }

loc_005079EE: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x005079F9u); RECOMP_ABI_CALL(0x00529AA0u, sub_00529AA0); /* call 0x00529AA0 */

loc_005079F9: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00507A67; /* je: equal / zero */

loc_00507A00: ;
    eax = MEM32(esi + 4);
    edi = MEM32(edi + 0x24);
    eax = eax & 0xF0008014u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0x50008014;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi) = 0x871E5C;
    MEM32(esi + 4) = eax;
    edx = MEM32(0x912770);
    ebx = MEM32(edx + 4);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(edx) (32-bit) */
    ecx = edx + 4;
    if (CMP_L(_fas, _fbs)) goto loc_00507A33; /* jl: less (signed <) */

loc_00507A29: ;
    eax = eax & 0xBFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 4) = eax;
    goto loc_00507A3B;

loc_00507A33: ;
    eax = MEM32(edx + 8);
    MEM32(eax + ebx * 4) = esi;
    MEM32(ecx) = MEM32(ecx) + 1;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00507A3B: ;
    PUSH32(esp, 4);

loc_00507A3D: ;
    MEM32(esi + 4) = MEM32(esi + 4) & 0xDFFFFFFFu;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = esi + 8;
    MEM32(esi) = 0x872194;
    PUSH32(esp, 0x00507A52u); RECOMP_ABI_CALL(0x00510F60u, sub_00510F60); /* call 0x00510F60 */

loc_00507A52: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esi) = 0x87220C;
    MEM32(esi + 0x18) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_00507A69; /* je: equal / zero */

loc_00507A5F: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00507A65u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00507A63u); } /* indirect call */
    }

loc_00507A65: ;
    goto loc_00507A69;

loc_00507A67: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00507A69: ;
    POP32(esp, edi);
    MEM32(0x9132D8) = esi;
    eax = MEM32(esi);
    ecx = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax)); return; /* indirect tail jmp */

}

/**
 * sub_00507A80
 * Original: 0x00507A80 - 0x00507AB7 (55 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00507A80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00507A80: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x872248;
    eax = MEM32(esi + 0x1C);
    MEM16(eax) = MEM16(eax) - 1;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00507AA1; /* jne: not equal / not zero */

loc_00507A95: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(0x9132E8);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00507A9Eu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00507A9Bu); } /* indirect call */
    }

loc_00507A9E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00507AA1: ;
    ecx = esi + 8;
    MEM32(esi) = 0x871F78;
    PUSH32(esp, 0x00507AAFu); RECOMP_ABI_CALL(0x00510F80u, sub_00510F80); /* call 0x00510F80 */

loc_00507AAF: ;
    MEM32(esi) = 0x871E5C;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00507AC0
 * Original: 0x00507AC0 - 0x00507B75 (181 bytes, 61 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00507AC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00507AC0: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 2 (8-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_00507B21; /* je: equal / zero */

loc_00507ACD: ;
    eax = MEM32(edi + -4);
    ebx = edi + -4;
    PUSH32(esp, esi);
    esi = eax;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x3C);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_00507B19; /* js: sign (negative) */

loc_00507ADE: ;
    edi = eax + 1;

loc_00507AE1: ;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x3C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esi) = 0x872248;
    eax = MEM32(esi + 0x1C);
    MEM16(eax) = MEM16(eax) - 1;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00507B02; /* jne: not equal / not zero */

loc_00507AF6: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(0x9132E8);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00507AFFu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00507AFCu); } /* indirect call */
    }

loc_00507AFF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00507B02: ;
    ecx = esi + 8;
    MEM32(esi) = 0x871F78;
    PUSH32(esp, 0x00507B10u); RECOMP_ABI_CALL(0x00510F80u, sub_00510F80); /* call 0x00510F80 */

loc_00507B10: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi) = 0x871E5C;
    if ((_fa != 0)) goto loc_00507AE1; /* jne: not equal / not zero */

loc_00507B19: ;
    POP32(esp, esi);
    POP32(esp, edi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00507B21: ;
    MEM32(edi) = 0x872248;
    eax = MEM32(edi + 0x1C);
    MEM16(eax) = MEM16(eax) - 1;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00507B40; /* jne: not equal / not zero */

loc_00507B33: ;
    ecx = MEM32(0x9132E8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 4); PUSH32(esp, 0x00507B3Du); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00507B3Au); } /* indirect call */
    }

loc_00507B3D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00507B40: ;
    ecx = edi + 8;
    MEM32(edi) = 0x871F78;
    PUSH32(esp, 0x00507B4Eu); RECOMP_ABI_CALL(0x00510F80u, sub_00510F80); /* call 0x00510F80 */

loc_00507B4E: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    MEM32(edi) = 0x871E5C;
    if (TEST_Z(_fa, _fb)) goto loc_00507B6E; /* je: equal / zero */

loc_00507B59: ;
    PUSH32(esp, 0x1FE);
    PUSH32(esp, 0x871D80);
    PUSH32(esp, 0x3C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00507B6Bu); RECOMP_ABI_CALL(0x005060A0u, sub_005060A0); /* call 0x005060A0 */

loc_00507B6B: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00507B6E: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00507B80
 * Original: 0x00507B80 - 0x00507C01 (129 bytes, 56 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00507B80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00507B80: ;
    PUSH32(esp, ebx);
    ebx = MEM32(ecx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00507BFD; /* je: equal / zero */

loc_00507B87: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = edi;

loc_00507B90: ;
    esi = MEM32(ebx);
    edi = ebp;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00507BA4; /* je: equal / zero */

loc_00507B9B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00507BA1u); RECOMP_ABI_CALL(0x00509D50u, sub_00509D50); /* call 0x00509D50 */

loc_00507BA1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00507BA4: ;
    eax = esp + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00507BD9; /* je: equal / zero */

loc_00507BAC: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00507BCA; /* je: equal / zero */

loc_00507BB2: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00507BB8u); RECOMP_ABI_CALL(0x00509D60u, sub_00509D60); /* call 0x00509D60 */

loc_00507BB8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00507BCA; /* jne: not equal / not zero */

loc_00507BBF: ;
    ecx = MEM32(edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00507BC7u); RECOMP_ABI_CALL(0x0050A2C0u, sub_0050A2C0); /* call 0x0050A2C0 */

loc_00507BC7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00507BCA: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(edi) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00507BF3; /* je: equal / zero */

loc_00507BD0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00507BD6u); RECOMP_ABI_CALL(0x00509D50u, sub_00509D50); /* call 0x00509D50 */

loc_00507BD6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00507BD9: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00507BF3; /* je: equal / zero */

loc_00507BDD: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00507BE3u); RECOMP_ABI_CALL(0x00509D60u, sub_00509D60); /* call 0x00509D60 */

loc_00507BE3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00507BF3; /* jne: not equal / not zero */

loc_00507BEA: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00507BF0u); RECOMP_ABI_CALL(0x0050A2C0u, sub_0050A2C0); /* call 0x0050A2C0 */

loc_00507BF0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00507BF3: ;
    ebx = MEM32(ebx + 4);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00507B90; /* jne: not equal / not zero */

loc_00507BFA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);

loc_00507BFD: ;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00507C10
 * Original: 0x00507C10 - 0x00507C57 (71 bytes, 34 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00507C10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00507C10: ;
    eax = MEM32(ecx + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(3) & 31u;
      if (_sc) {
        esi = _sv << _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = eax;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00507C47; /* je: equal / zero */

loc_00507C23: ;
    ebx = MEM32(esp + 0x14);
    edi = MEM32(esp + 0x10);
    goto loc_00507C30;

    /* nop */

loc_00507C30: ;
    edx = MEM32(eax + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00507C3B; /* je: equal / zero */

loc_00507C37: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00507C4F; /* jne: not equal / not zero */

loc_00507C3B: ;
    edx = MEM32(ecx + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00507C30; /* jne: not equal / not zero */

loc_00507C47: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00507C4F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00507C60
 * Original: 0x00507C60 - 0x00507C6A (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00507C60(void)
{

loc_00507C60: ;
    PUSH32(esp, 2);
    PUSH32(esp, 4);
    PUSH32(esp, 0x00507C69u); RECOMP_ABI_CALL(0x00507C10u, sub_00507C10); /* call 0x00507C10 */

loc_00507C69: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00507C70
 * Original: 0x00507C70 - 0x00507CD0 (96 bytes, 31 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00507C70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00507C70: ;
    eax = ecx;
    ecx = MEM32(eax + 4);
    ecx = ecx & 0xF0008005u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    ecx = ecx | 0x50008005;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax) = 0x871E5C;
    MEM32(eax + 4) = ecx;
    PUSH32(esp, esi);
    esi = MEM32(0x912770);
    ebx = MEM32(esi);
    edx = esi + 4;
    PUSH32(esp, edi);
    edi = MEM32(edx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00507CA9; /* jl: less (signed <) */

loc_00507C9E: ;
    ecx = ecx & 0xBFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 4) = ecx;
    goto loc_00507CB1;

loc_00507CA9: ;
    ecx = MEM32(esi + 8);
    MEM32(ecx + edi * 4) = eax;
    MEM32(edx) = MEM32(edx) + 1;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00507CB1: ;
    ecx = MEM32(eax + 4);
    SET_LO8(edx, MEM8(esp + 0x10));
    POP32(esp, edi);
    ecx = ecx & 0xDFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    MEM32(eax + 4) = ecx;
    MEM32(eax) = 0x872284;
    MEM8(eax + 8) = LO8(edx);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00507CD0
 * Original: 0x00507CD0 - 0x00507D00 (48 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00507CD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00507CD0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x871E5C;
    if (TEST_Z(_fa, _fb)) goto loc_00507CEC; /* je: equal / zero */

loc_00507CE0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xC);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x912790); PUSH32(esp, 0x00507CE9u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00507CE3u); } /* indirect call */
    }

loc_00507CE9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00507CEC: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00507D00
 * Original: 0x00507D00 - 0x00507DCC (204 bytes, 69 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00507D00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00507D00: ;
    eax = MEM32(0x9132DC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00507D5A; /* je: equal / zero */

loc_00507D0B: ;
    ecx = MEM32(eax + 8);
    MEM32(0x9132DC) = ecx;
    ecx = MEM32(eax + 4);
    ecx = ecx | 0x40000000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 4) = ecx;
    edx = MEM32(0x912770);
    esi = MEM32(edx + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edx) (32-bit) */
    edi = ecx;
    ecx = edx + 4;
    if (CMP_L(_fas, _fbs)) goto loc_00507D45; /* jl: less (signed <) */

loc_00507D32: ;
    SET_LO8(ecx, MEM8(esp + 0xC));
    edi = edi & 0xBFFFFFFFu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 4) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(eax + 8) = LO8(ecx);
    esp += 4; return; /* ret */

loc_00507D45: ;
    edx = MEM32(edx + 8);
    MEM32(edx + esi * 4) = eax;
    edx = MEM32(ecx);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(ecx) = edx;
    SET_LO8(ecx, MEM8(esp + 8));
    POP32(esp, esi);
    MEM8(eax + 8) = LO8(ecx);
    esp += 4; return; /* ret */

loc_00507D5A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x41);
    PUSH32(esp, 0x871CE0);
    PUSH32(esp, 0xC);
    { uint32_t _icall_target = MEM32(0x912788); PUSH32(esp, 0x00507D69u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00507D63u); } /* indirect call */
    }

loc_00507D69: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00507DC7; /* je: equal / zero */

loc_00507D70: ;
    ecx = MEM32(eax + 4);
    ecx = ecx & 0xF0008005u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | 0x50008005;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax) = 0x871E5C;
    MEM32(eax + 4) = ecx;
    esi = MEM32(0x912770);
    edi = MEM32(esi + 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi) (32-bit) */
    edx = esi + 4;
    if (CMP_L(_fas, _fbs)) goto loc_00507DA3; /* jl: less (signed <) */

loc_00507D98: ;
    ecx = ecx & 0xBFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 4) = ecx;
    goto loc_00507DAB;

loc_00507DA3: ;
    ecx = MEM32(esi + 8);
    MEM32(ecx + edi * 4) = eax;
    MEM32(edx) = MEM32(edx) + 1;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00507DAB: ;
    ecx = MEM32(eax + 4);
    SET_LO8(edx, MEM8(esp + 0xC));
    POP32(esp, edi);
    ecx = ecx & 0xDFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    MEM32(eax + 4) = ecx;
    MEM32(eax) = 0x872284;
    MEM8(eax + 8) = LO8(edx);
    esp += 4; return; /* ret */

loc_00507DC7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00507DD0
 * Original: 0x00507DD0 - 0x00507E30 (96 bytes, 31 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00507DD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00507DD0: ;
    eax = ecx;
    ecx = MEM32(eax + 4);
    ecx = ecx & 0xF0008007u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    ecx = ecx | 0x50008007;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax) = 0x871E5C;
    MEM32(eax + 4) = ecx;
    PUSH32(esp, esi);
    esi = MEM32(0x912770);
    ebx = MEM32(esi);
    edx = esi + 4;
    PUSH32(esp, edi);
    edi = MEM32(edx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00507E09; /* jl: less (signed <) */

loc_00507DFE: ;
    ecx = ecx & 0xBFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 4) = ecx;
    goto loc_00507E11;

loc_00507E09: ;
    ecx = MEM32(esi + 8);
    MEM32(ecx + edi * 4) = eax;
    MEM32(edx) = MEM32(edx) + 1;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00507E11: ;
    ecx = MEM32(eax + 4);
    edx = MEM32(esp + 0x10);
    POP32(esp, edi);
    ecx = ecx & 0xDFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    MEM32(eax + 4) = ecx;
    MEM32(eax) = 0x8722C0;
    MEM32(eax + 8) = edx;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00507E30
 * Original: 0x00507E30 - 0x00507E60 (48 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00507E30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00507E30: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x871E5C;
    if (TEST_Z(_fa, _fb)) goto loc_00507E4C; /* je: equal / zero */

loc_00507E40: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xC);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x912790); PUSH32(esp, 0x00507E49u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00507E43u); } /* indirect call */
    }

loc_00507E49: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00507E4C: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00507E60
 * Original: 0x00507E60 - 0x00507F2C (204 bytes, 69 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00507E60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00507E60: ;
    eax = MEM32(0x9132E0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00507EBA; /* je: equal / zero */

loc_00507E6B: ;
    ecx = MEM32(eax + 8);
    MEM32(0x9132E0) = ecx;
    ecx = MEM32(eax + 4);
    ecx = ecx | 0x40000000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 4) = ecx;
    edx = MEM32(0x912770);
    esi = MEM32(edx + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edx) (32-bit) */
    edi = ecx;
    ecx = edx + 4;
    if (CMP_L(_fas, _fbs)) goto loc_00507EA5; /* jl: less (signed <) */

loc_00507E92: ;
    ecx = MEM32(esp + 0xC);
    edi = edi & 0xBFFFFFFFu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 4) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax + 8) = ecx;
    esp += 4; return; /* ret */

loc_00507EA5: ;
    edx = MEM32(edx + 8);
    MEM32(edx + esi * 4) = eax;
    edx = MEM32(ecx);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(ecx) = edx;
    ecx = MEM32(esp + 8);
    POP32(esp, esi);
    MEM32(eax + 8) = ecx;
    esp += 4; return; /* ret */

loc_00507EBA: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x42);
    PUSH32(esp, 0x871C90);
    PUSH32(esp, 0xC);
    { uint32_t _icall_target = MEM32(0x912788); PUSH32(esp, 0x00507EC9u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00507EC3u); } /* indirect call */
    }

loc_00507EC9: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00507F27; /* je: equal / zero */

loc_00507ED0: ;
    ecx = MEM32(eax + 4);
    ecx = ecx & 0xF0008007u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | 0x50008007;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax) = 0x871E5C;
    MEM32(eax + 4) = ecx;
    esi = MEM32(0x912770);
    edi = MEM32(esi + 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi) (32-bit) */
    edx = esi + 4;
    if (CMP_L(_fas, _fbs)) goto loc_00507F03; /* jl: less (signed <) */

loc_00507EF8: ;
    ecx = ecx & 0xBFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 4) = ecx;
    goto loc_00507F0B;

loc_00507F03: ;
    ecx = MEM32(esi + 8);
    MEM32(ecx + edi * 4) = eax;
    MEM32(edx) = MEM32(edx) + 1;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00507F0B: ;
    ecx = MEM32(eax + 4);
    edx = MEM32(esp + 0xC);
    POP32(esp, edi);
    ecx = ecx & 0xDFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    MEM32(eax + 4) = ecx;
    MEM32(eax) = 0x8722C0;
    MEM32(eax + 8) = edx;
    esp += 4; return; /* ret */

loc_00507F27: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00507F30
 * Original: 0x00507F30 - 0x00507F90 (96 bytes, 31 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00507F30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00507F30: ;
    eax = ecx;
    ecx = MEM32(eax + 4);
    ecx = ecx & 0xF0008006u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    ecx = ecx | 0x50008006;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax) = 0x871E5C;
    MEM32(eax + 4) = ecx;
    PUSH32(esp, esi);
    esi = MEM32(0x912770);
    ebx = MEM32(esi);
    edx = esi + 4;
    PUSH32(esp, edi);
    edi = MEM32(edx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00507F69; /* jl: less (signed <) */

loc_00507F5E: ;
    ecx = ecx & 0xBFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 4) = ecx;
    goto loc_00507F71;

loc_00507F69: ;
    ecx = MEM32(esi + 8);
    MEM32(ecx + edi * 4) = eax;
    MEM32(edx) = MEM32(edx) + 1;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00507F71: ;
    ecx = MEM32(eax + 4);
    edx = MEM32(esp + 0x10);
    POP32(esp, edi);
    ecx = ecx & 0xDFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    MEM32(eax + 4) = ecx;
    MEM32(eax) = 0x8722FC;
    MEM32(eax + 8) = edx;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00507F90
 * Original: 0x00507F90 - 0x00507FC0 (48 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00507F90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00507F90: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x871E5C;
    if (TEST_Z(_fa, _fb)) goto loc_00507FAC; /* je: equal / zero */

loc_00507FA0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xC);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x912790); PUSH32(esp, 0x00507FA9u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00507FA3u); } /* indirect call */
    }

loc_00507FA9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00507FAC: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00507FC0
 * Original: 0x00507FC0 - 0x0050808C (204 bytes, 69 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00507FC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00507FC0: ;
    eax = MEM32(0x9132E4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0050801A; /* je: equal / zero */

loc_00507FCB: ;
    ecx = MEM32(eax + 8);
    MEM32(0x9132E4) = ecx;
    ecx = MEM32(eax + 4);
    ecx = ecx | 0x40000000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 4) = ecx;
    edx = MEM32(0x912770);
    esi = MEM32(edx + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edx) (32-bit) */
    edi = ecx;
    ecx = edx + 4;
    if (CMP_L(_fas, _fbs)) goto loc_00508005; /* jl: less (signed <) */

loc_00507FF2: ;
    ecx = MEM32(esp + 0xC);
    edi = edi & 0xBFFFFFFFu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 4) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax + 8) = ecx;
    esp += 4; return; /* ret */

loc_00508005: ;
    edx = MEM32(edx + 8);
    MEM32(edx + esi * 4) = eax;
    edx = MEM32(ecx);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(ecx) = edx;
    ecx = MEM32(esp + 8);
    POP32(esp, esi);
    MEM32(eax + 8) = ecx;
    esp += 4; return; /* ret */

loc_0050801A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x42);
    PUSH32(esp, 0x871D30);
    PUSH32(esp, 0xC);
    { uint32_t _icall_target = MEM32(0x912788); PUSH32(esp, 0x00508029u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00508023u); } /* indirect call */
    }

loc_00508029: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00508087; /* je: equal / zero */

loc_00508030: ;
    ecx = MEM32(eax + 4);
    ecx = ecx & 0xF0008006u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | 0x50008006;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax) = 0x871E5C;
    MEM32(eax + 4) = ecx;
    esi = MEM32(0x912770);
    edi = MEM32(esi + 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi) (32-bit) */
    edx = esi + 4;
    if (CMP_L(_fas, _fbs)) goto loc_00508063; /* jl: less (signed <) */

loc_00508058: ;
    ecx = ecx & 0xBFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 4) = ecx;
    goto loc_0050806B;

loc_00508063: ;
    ecx = MEM32(esi + 8);
    MEM32(ecx + edi * 4) = eax;
    MEM32(edx) = MEM32(edx) + 1;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0050806B: ;
    ecx = MEM32(eax + 4);
    edx = MEM32(esp + 0xC);
    POP32(esp, edi);
    ecx = ecx & 0xDFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    MEM32(eax + 4) = ecx;
    MEM32(eax) = 0x8722FC;
    MEM32(eax + 8) = edx;
    esp += 4; return; /* ret */

loc_00508087: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00508090
 * Original: 0x00508090 - 0x0050812B (155 bytes, 51 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00508090(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00508090: ;
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1BF);
    PUSH32(esp, 0x871F28);
    PUSH32(esp, 0x24);
    { uint32_t _icall_target = MEM32(0x912788); PUSH32(esp, 0x005080A3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0050809Du); } /* indirect call */
    }

loc_005080A3: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x005080AEu); RECOMP_ABI_CALL(0x00529AA0u, sub_00529AA0); /* call 0x00529AA0 */

loc_005080AE: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00508127; /* je: equal / zero */

loc_005080B5: ;
    eax = MEM32(esi + 4);
    eax = eax & 0xF000801Bu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0x5000801B;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi) = 0x871E5C;
    MEM32(esi + 4) = eax;
    edx = MEM32(0x912770);
    PUSH32(esp, ebx);
    ebx = MEM32(edx);
    ecx = edx + 4;
    PUSH32(esp, edi);
    edi = MEM32(ecx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005080E8; /* jl: less (signed <) */

loc_005080DE: ;
    eax = eax & 0xBFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 4) = eax;
    goto loc_005080F0;

loc_005080E8: ;
    eax = MEM32(edx + 8);
    MEM32(eax + edi * 4) = esi;
    MEM32(ecx) = MEM32(ecx) + 1;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_005080F0: ;
    edx = MEM32(esi + 4);
    edx = edx & 0xDFFFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 8);
    ecx = esi + 8;
    MEM32(esi + 4) = edx;
    MEM32(esi) = 0x872194;
    PUSH32(esp, 0x0050810Cu); RECOMP_ABI_CALL(0x00510F60u, sub_00510F60); /* call 0x00510F60 */

loc_0050810C: ;
    MEM8(esi + 0x18) = 0;
    eax = MEM32(esi + 0x18);
    eax = eax & 0xFFFFFCFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, edi);
    MEM32(esi + 0x18) = eax;
    POP32(esp, ebx);
    MEM32(esi) = 0x871F78;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00508127: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00508130
 * Original: 0x00508130 - 0x005081CE (158 bytes, 52 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00508130(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00508130: ;
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1BF);
    PUSH32(esp, 0x871F28);
    PUSH32(esp, 0x24);
    { uint32_t _icall_target = MEM32(0x912788); PUSH32(esp, 0x00508143u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0050813Du); } /* indirect call */
    }

loc_00508143: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x0050814Eu); RECOMP_ABI_CALL(0x00529AA0u, sub_00529AA0); /* call 0x00529AA0 */

loc_0050814E: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005081CA; /* je: equal / zero */

loc_00508155: ;
    eax = MEM32(esi + 4);
    eax = eax & 0xF000801Bu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0x5000801B;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi) = 0x871E5C;
    MEM32(esi + 4) = eax;
    edx = MEM32(0x912770);
    PUSH32(esp, ebx);
    ebx = MEM32(edx);
    ecx = edx + 4;
    PUSH32(esp, edi);
    edi = MEM32(ecx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00508188; /* jl: less (signed <) */

loc_0050817E: ;
    eax = eax & 0xBFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 4) = eax;
    goto loc_00508190;

loc_00508188: ;
    eax = MEM32(edx + 8);
    MEM32(eax + edi * 4) = esi;
    MEM32(ecx) = MEM32(ecx) + 1;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00508190: ;
    edi = MEM32(esi + 4);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    edi = edi & 0xDFFFFFFFu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = esi + 8;
    MEM32(esi + 4) = edi;
    MEM32(esi) = 0x872194;
    PUSH32(esp, 0x005081AFu); RECOMP_ABI_CALL(0x00510F60u, sub_00510F60); /* call 0x00510F60 */

loc_005081AF: ;
    MEM8(esi + 0x18) = 0;
    eax = MEM32(esi + 0x18);
    eax = eax & 0xFFFFFCFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, edi);
    MEM32(esi + 0x18) = eax;
    POP32(esp, ebx);
    MEM32(esi) = 0x871F78;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_005081CA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_005081D0
 * Original: 0x005081D0 - 0x00508207 (55 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005081D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005081D0: ;
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1BF);
    PUSH32(esp, 0x871F28);
    PUSH32(esp, 0x28);
    { uint32_t _icall_target = MEM32(0x912788); PUSH32(esp, 0x005081E3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005081DDu); } /* indirect call */
    }

loc_005081E3: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x005081EEu); RECOMP_ABI_CALL(0x00529AA0u, sub_00529AA0); /* call 0x00529AA0 */

loc_005081EE: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00508203; /* je: equal / zero */

loc_005081F5: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00508201u); RECOMP_ABI_CALL(0x00507740u, sub_00507740); /* call 0x00507740 */

loc_00508201: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00508203: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00508210
 * Original: 0x00508210 - 0x0050825D (77 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00508210(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00508210: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00508236; /* je: equal / zero */

loc_0050822D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00508233u); RECOMP_ABI_CALL(0x00509D50u, sub_00509D50); /* call 0x00509D50 */

loc_00508233: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00508236: ;
    ecx = MEM32(0x912734);
    PUSH32(esp, 0x00508241u); RECOMP_ABI_CALL(0x0050AAA0u, sub_0050AAA0); /* call 0x0050AAA0 */

loc_00508241: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0050825B; /* je: equal / zero */

loc_00508245: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0050824Bu); RECOMP_ABI_CALL(0x00509D60u, sub_00509D60); /* call 0x00509D60 */

loc_0050824B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0050825B; /* jne: not equal / not zero */

loc_00508252: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00508258u); RECOMP_ABI_CALL(0x0050A2C0u, sub_0050A2C0); /* call 0x0050A2C0 */

loc_00508258: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0050825B: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00508260
 * Original: 0x00508260 - 0x005082DF (127 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00508260(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00508260: ;
    eax = MEM32(0x912738);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005082DC; /* je: equal / zero */

loc_00508269: ;
    eax = MEM32(eax + 0x1128);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005082DC; /* je: equal / zero */

loc_00508273: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    if (CMP_EQ(_fa, _fb)) goto loc_00508294; /* je: equal / zero */

loc_0050827E: ;
    edi = edi;

loc_00508280: ;
    ecx = MEM32(eax + 0x54);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(0xF) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((0xF) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005082DA; /* je: equal / zero */

loc_0050828D: ;
    eax = MEM32(eax + 0x50);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00508280; /* jne: not equal / not zero */

loc_00508294: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x60);
    PUSH32(esp, 0x0050829Cu); RECOMP_ABI_CALL(0x004DB749u, sub_004DB749); /* call 0x004DB749 */

loc_0050829C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005082B4; /* je: equal / zero */

loc_005082A3: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x13);
    ecx = eax;
    PUSH32(esp, 0x005082B0u); RECOMP_ABI_CALL(0x00507570u, sub_00507570); /* call 0x00507570 */

loc_005082B0: ;
    esi = eax;
    goto loc_005082B6;

loc_005082B4: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_005082B6: ;
    edx = MEM32(esi + 4);
    edx = edx & 0xFFFFC07Fu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx | 0x40;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 4) = edx;
    eax = MEM32(0x912738);
    ecx = MEM32(eax + 0x1128);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x005082D7u); RECOMP_ABI_CALL(0x005395B0u, sub_005395B0); /* call 0x005395B0 */

loc_005082D7: ;
    eax = esi;
    POP32(esp, esi);

loc_005082DA: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_005082DC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_005082E0
 * Original: 0x005082E0 - 0x00508324 (68 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005082E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005082E0: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, 0x005082F0u); RECOMP_ABI_CALL(0x00512FC0u, sub_00512FC0); /* call 0x00512FC0 */

loc_005082F0: ;
    esi = MEM32(esp + 0xC);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    ecx = MEM32(0x912734);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00508305u); RECOMP_ABI_CALL(0x0050A8A0u, sub_0050A8A0); /* call 0x0050A8A0 */

loc_00508305: ;
    eax = MEM32(esp + 4);
    MEM16(eax) = MEM16(eax) - 1;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0050831F; /* jne: not equal / not zero */

loc_00508312: ;
    edx = MEM32(0x9132E8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0050831Cu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00508319u); } /* indirect call */
    }

loc_0050831C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0050831F: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00508330
 * Original: 0x00508330 - 0x00508365 (53 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00508330(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00508330: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00508344; /* je: equal / zero */

loc_0050833A: ;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00508344; /* jne: not equal / not zero */

loc_00508340: ;
    SET_LO8(ebx, 1);
    goto loc_00508346;

loc_00508344: ;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_00508346: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00508360; /* je: equal / zero */

loc_0050834A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00508350u); RECOMP_ABI_CALL(0x00509D60u, sub_00509D60); /* call 0x00509D60 */

loc_00508350: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00508360; /* jne: not equal / not zero */

loc_00508357: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0050835Du); RECOMP_ABI_CALL(0x0050A2C0u, sub_0050A2C0); /* call 0x0050A2C0 */

loc_0050835D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00508360: ;
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00508370
 * Original: 0x00508370 - 0x00508449 (217 bytes, 75 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00508370(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00508370: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(0x913358);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005083CC; /* je: equal / zero */

loc_0050837C: ;
    eax = MEM32(esi + 0xC);
    MEM32(0x913358) = eax;
    eax = MEM32(esi + 4);
    eax = eax | 0x40000000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 4) = eax;
    ecx = MEM32(0x912770);
    edx = MEM32(ecx + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx) (32-bit) */
    PUSH32(esp, edi);
    edi = eax;
    eax = ecx + 4;
    if (CMP_L(_fas, _fbs)) goto loc_005083AD; /* jl: less (signed <) */

loc_005083A2: ;
    edi = edi & 0xBFFFFFFFu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 4) = edi;
    goto loc_005083B5;

loc_005083AD: ;
    ecx = MEM32(ecx + 8);
    MEM32(ecx + edx * 4) = esi;
    MEM32(eax) = MEM32(eax) + 1;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_005083B5: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8DACCC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x8DACCC (32-bit) */
    ecx = esi + 8;
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_005083EF; /* je: equal / zero */

loc_005083C3: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x005083CAu); RECOMP_ABI_CALL(0x00513390u, sub_00513390); /* call 0x00513390 */

loc_005083CA: ;
    goto loc_005083EF;

loc_005083CC: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64);
    PUSH32(esp, 0x871C40);
    PUSH32(esp, 0x10);
    { uint32_t _icall_target = MEM32(0x912788); PUSH32(esp, 0x005083DBu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x005083D5u); } /* indirect call */
    }

loc_005083DB: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005083ED; /* je: equal / zero */

loc_005083E2: ;
    ecx = eax;
    PUSH32(esp, 0x005083E9u); RECOMP_ABI_CALL(0x0052F650u, sub_0052F650); /* call 0x0052F650 */

loc_005083E9: ;
    esi = eax;
    goto loc_005083EF;

loc_005083ED: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_005083EF: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x005083FBu); RECOMP_ABI_CALL(0x004D072Au, sub_004D072A); /* call 0x004D072A */

loc_005083FB: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, 0x00508409u); RECOMP_ABI_CALL(0x00512FC0u, sub_00512FC0); /* call 0x00512FC0 */

loc_00508409: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0050841Eu); RECOMP_ABI_CALL(0x00508260u, sub_00508260); /* call 0x00508260 */

loc_0050841E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = 0x9132F0;
    PUSH32(esp, 0x0050842Cu); RECOMP_ABI_CALL(0x00521AE0u, sub_00521AE0); /* call 0x00521AE0 */

loc_0050842C: ;
    eax = MEM32(esp + 4);
    MEM16(eax) = MEM16(eax) - 1;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), 0 (16-bit) */
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_00508447; /* jne: not equal / not zero */

loc_0050843A: ;
    edx = MEM32(0x9132E8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00508444u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00508441u); } /* indirect call */
    }

loc_00508444: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00508447: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00508450
 * Original: 0x00508450 - 0x005084A7 (87 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00508450(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00508450: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    ecx = esp + 4;
    PUSH32(esp, 0x0050845Fu); RECOMP_ABI_CALL(0x00512FC0u, sub_00512FC0); /* call 0x00512FC0 */

loc_0050845F: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00508473u); RECOMP_ABI_CALL(0x00508260u, sub_00508260); /* call 0x00508260 */

loc_00508473: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = 0x9132F0;
    PUSH32(esp, 0x00508481u); RECOMP_ABI_CALL(0x005164E0u, sub_005164E0); /* call 0x005164E0 */

loc_00508481: ;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x0050848Du); RECOMP_ABI_CALL(0x0050D580u, sub_0050D580); /* call 0x0050D580 */

loc_0050848D: ;
    eax = MEM32(esp);
    MEM16(eax) = MEM16(eax) - 1;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005084A5; /* jne: not equal / not zero */

loc_00508499: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(0x9132E8);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x005084A2u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0050849Fu); } /* indirect call */
    }

loc_005084A2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005084A5: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_005084B0
 * Original: 0x005084B0 - 0x005086F7 (583 bytes, 181 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005084B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005084B0: ;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(0x8C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x8C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00508506; /* je: equal / zero */

loc_005084BE: ;
    PUSH32(esp, eax);
    ecx = esp + 4;
    PUSH32(esp, 0x005084C8u); RECOMP_ABI_CALL(0x00512FC0u, sub_00512FC0); /* call 0x00512FC0 */

loc_005084C8: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x005084DCu); RECOMP_ABI_CALL(0x00508260u, sub_00508260); /* call 0x00508260 */

loc_005084DC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = 0x9132F0;
    PUSH32(esp, 0x005084EAu); RECOMP_ABI_CALL(0x005164E0u, sub_005164E0); /* call 0x005164E0 */

loc_005084EA: ;
    MEM32(esp + 4) = eax;
    eax = MEM32(esp);
    MEM16(eax) = MEM16(eax) - 1;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00508514; /* jne: not equal / not zero */

loc_005084FA: ;
    ecx = MEM32(0x9132E8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 4); PUSH32(esp, 0x00508504u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00508501u); } /* indirect call */
    }

loc_00508504: ;
    goto loc_00508511;

loc_00508506: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0050850Du); RECOMP_ABI_CALL(0x00508260u, sub_00508260); /* call 0x00508260 */

loc_0050850D: ;
    MEM32(esp + 8) = eax;

loc_00508511: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00508514: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xA8);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0050860D; /* jle: less or equal (signed <=) */

loc_00508528: ;
    PUSH32(esp, ebx);
    ebx = esp + 0xAC;

loc_00508530: ;
    esi = MEM32(0x913358);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00508590; /* je: equal / zero */

loc_0050853A: ;
    edx = MEM32(esi + 0xC);
    MEM32(0x913358) = edx;
    eax = MEM32(esi + 4);
    eax = eax | 0x40000000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 4) = eax;
    ecx = MEM32(0x912770);
    edx = MEM32(ecx + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx) (32-bit) */
    edi = eax;
    eax = ecx + 4;
    if (CMP_L(_fas, _fbs)) goto loc_0050856B; /* jl: less (signed <) */

loc_00508560: ;
    edi = edi & 0xBFFFFFFFu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 4) = edi;
    goto loc_00508573;

loc_0050856B: ;
    ecx = MEM32(ecx + 8);
    MEM32(ecx + edx * 4) = esi;
    MEM32(eax) = MEM32(eax) + 1;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00508573: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8DACCC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x8DACCC (32-bit) */
    ecx = esi + 8;
    if (CMP_EQ(_fa, _fb)) goto loc_00508587; /* je: equal / zero */

loc_00508580: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00508587u); RECOMP_ABI_CALL(0x00513390u, sub_00513390); /* call 0x00513390 */

loc_00508587: ;
    edi = MEM32(esp + 0xAC);
    goto loc_005085B3;

loc_00508590: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64);
    PUSH32(esp, 0x871C40);
    PUSH32(esp, 0x10);
    { uint32_t _icall_target = MEM32(0x912788); PUSH32(esp, 0x0050859Fu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00508599u); } /* indirect call */
    }

loc_0050859F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005085B1; /* je: equal / zero */

loc_005085A6: ;
    ecx = eax;
    PUSH32(esp, 0x005085ADu); RECOMP_ABI_CALL(0x0052F650u, sub_0052F650); /* call 0x0052F650 */

loc_005085AD: ;
    esi = eax;
    goto loc_005085B3;

loc_005085B1: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_005085B3: ;
    edx = MEM32(ebx + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    ecx = esp + 0x14;
    MEM32(esp + ebp * 4 + 0x20) = esi;
    PUSH32(esp, 0x005085C7u); RECOMP_ABI_CALL(0x00512FC0u, sub_00512FC0); /* call 0x00512FC0 */

loc_005085C7: ;
    eax = MEM32(esp + 0x10);
    MEM16(eax) = MEM16(eax) + 1;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(esi + 8);
    MEM16(eax) = MEM16(eax) - 1;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005085E6; /* jne: not equal / not zero */

loc_005085DA: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(0x9132E8);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x005085E3u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x005085E0u); } /* indirect call */
    }

loc_005085E3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005085E6: ;
    eax = MEM32(esp + 0x10);
    MEM32(esi + 8) = eax;
    MEM16(eax) = MEM16(eax) - 1;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00508603; /* jne: not equal / not zero */

loc_005085F6: ;
    ecx = MEM32(0x9132E8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 4); PUSH32(esp, 0x00508600u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x005085FDu); } /* indirect call */
    }

loc_00508600: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00508603: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00508530; /* jl: less (signed <) */

loc_0050860C: ;
    POP32(esp, ebx);

loc_0050860D: ;
    esi = edi + -1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0050863F; /* jl: less (signed <) */

loc_00508614: ;
    goto loc_00508620;

    /* nop */
    /* nop */

loc_00508620: ;
    edx = MEM32(0x9132F0);
    ecx = MEM32(esp + esi * 4 + 0x18);
    eax = MEM32(0x9132F8);
    MEM32(eax + edx * 4) = ecx;
    MEM32(0x9132F0) = MEM32(0x9132F0) + 1;
    _fa = (uint32_t)(MEM32(0x9132F0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0050863Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0050863Au); } /* indirect call */
    }

loc_0050863C: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_00508620; /* jns: not sign (positive) */

loc_0050863F: ;
    eax = MEM32(esp + 0x9C);
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, 0x00508650u); RECOMP_ABI_CALL(0x00512FC0u, sub_00512FC0); /* call 0x00512FC0 */

loc_00508650: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    ecx = 0x9132F0;
    PUSH32(esp, 0x0050866Cu); RECOMP_ABI_CALL(0x005164E0u, sub_005164E0); /* call 0x005164E0 */

loc_0050866C: ;
    esi = eax;
    PUSH32(esp, 0x00508673u); RECOMP_ABI_CALL(0x00511C10u, sub_00511C10); /* call 0x00511C10 */

loc_00508673: ;
    ecx = MEM32(esp + 0x10);
    edi = eax;
    eax = MEM32(esp + 0xA8);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    ecx = 0x9132F0;
    PUSH32(esp, 0x0050868Du); RECOMP_ABI_CALL(0x0051AA10u, sub_0051AA10); /* call 0x0051AA10 */

loc_0050868D: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00508693u); RECOMP_ABI_CALL(0x00511C30u, sub_00511C30); /* call 0x00511C30 */

loc_00508693: ;
    eax = MEM32(esp + 0xA4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    if (CMP_EQ(_fa, _fb)) goto loc_005086B9; /* je: equal / zero */

loc_005086A4: ;
    edx = MEM32(0x9132F8);
    PUSH32(esp, eax);
    eax = MEM32(0x9132F0);
    ecx = MEM32(edx + eax * 4 + -4);
    PUSH32(esp, 0x005086B9u); RECOMP_ABI_CALL(0x0050D580u, sub_0050D580); /* call 0x0050D580 */

loc_005086B9: ;
    eax = MEM32(0x9132F0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_005086D7; /* jle: less or equal (signed <=) */

loc_005086C2: ;
    ecx = MEM32(0x9132F8);
    ecx = MEM32(ecx + eax * 4 + -4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x005086D1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005086CEu); } /* indirect call */
    }

loc_005086D1: ;
    MEM32(0x9132F0) = MEM32(0x9132F0) - 1;
    _fa = (uint32_t)(MEM32(0x9132F0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_005086D7: ;
    eax = MEM32(esp + 8);
    MEM16(eax) = MEM16(eax) - 1;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005086F0; /* jne: not equal / not zero */

loc_005086E4: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(0x9132E8);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x005086EDu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x005086EAu); } /* indirect call */
    }

loc_005086ED: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005086F0: ;
    _fb = (uint32_t)(0x8C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x8C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00508700
 * Original: 0x00508700 - 0x00508869 (361 bytes, 117 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00508700(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00508700: ;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x88;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00508759; /* je: equal / zero */

loc_00508712: ;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, 0x0050871Cu); RECOMP_ABI_CALL(0x00512FC0u, sub_00512FC0); /* call 0x00512FC0 */

loc_0050871C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00508730u); RECOMP_ABI_CALL(0x00508260u, sub_00508260); /* call 0x00508260 */

loc_00508730: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = 0x9132F0;
    PUSH32(esp, 0x0050873Eu); RECOMP_ABI_CALL(0x005164E0u, sub_005164E0); /* call 0x005164E0 */

loc_0050873E: ;
    ebp = eax;
    eax = MEM32(esp + 0x14);
    MEM16(eax) = MEM16(eax) - 1;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00508765; /* jne: not equal / not zero */

loc_0050874D: ;
    ecx = MEM32(0x9132E8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 4); PUSH32(esp, 0x00508757u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00508754u); } /* indirect call */
    }

loc_00508757: ;
    goto loc_00508762;

loc_00508759: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00508760u); RECOMP_ABI_CALL(0x00508260u, sub_00508260); /* call 0x00508260 */

loc_00508760: ;
    ebp = eax;

loc_00508762: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00508765: ;
    edi = MEM32(esp + 0xA8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0050878F; /* jle: less or equal (signed <=) */

loc_00508772: ;
    ecx = esp + 0xA8;
    /* nop */

loc_00508780: ;
    edx = MEM32(ecx + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + eax * 4 + 0x18) = edx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00508780; /* jl: less (signed <) */

loc_0050878F: ;
    esi = edi + -1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005087BF; /* jl: less (signed <) */

loc_00508796: ;
    goto loc_005087A0;

    /* nop */
    /* nop */

loc_005087A0: ;
    eax = MEM32(0x9132F0);
    ecx = MEM32(esp + esi * 4 + 0x18);
    edx = MEM32(0x9132F8);
    MEM32(edx + eax * 4) = ecx;
    MEM32(0x9132F0) = MEM32(0x9132F0) + 1;
    _fa = (uint32_t)(MEM32(0x9132F0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x005087BCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005087BAu); } /* indirect call */
    }

loc_005087BC: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_005087A0; /* jns: not sign (positive) */

loc_005087BF: ;
    ecx = MEM32(esp + 0x9C);
    PUSH32(esp, ecx);
    ecx = esp + 0x14;
    PUSH32(esp, 0x005087D0u); RECOMP_ABI_CALL(0x00512FC0u, sub_00512FC0); /* call 0x00512FC0 */

loc_005087D0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    ecx = 0x9132F0;
    PUSH32(esp, 0x005087E8u); RECOMP_ABI_CALL(0x005164E0u, sub_005164E0); /* call 0x005164E0 */

loc_005087E8: ;
    esi = eax;
    PUSH32(esp, 0x005087EFu); RECOMP_ABI_CALL(0x00511C10u, sub_00511C10); /* call 0x00511C10 */

loc_005087EF: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    ecx = 0x9132F0;
    ebx = eax;
    PUSH32(esp, 0x005087FEu); RECOMP_ABI_CALL(0x0051AA10u, sub_0051AA10); /* call 0x0051AA10 */

loc_005087FE: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00508804u); RECOMP_ABI_CALL(0x00511C30u, sub_00511C30); /* call 0x00511C30 */

loc_00508804: ;
    eax = MEM32(esp + 0xA4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0050882B; /* je: equal / zero */

loc_00508816: ;
    ecx = MEM32(0x9132F0);
    PUSH32(esp, eax);
    eax = MEM32(0x9132F8);
    ecx = MEM32(eax + ecx * 4 + -4);
    PUSH32(esp, 0x0050882Bu); RECOMP_ABI_CALL(0x0050D580u, sub_0050D580); /* call 0x0050D580 */

loc_0050882B: ;
    eax = MEM32(0x9132F0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00508849; /* jle: less or equal (signed <=) */

loc_00508834: ;
    edx = MEM32(0x9132F8);
    ecx = MEM32(edx + eax * 4 + -4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00508843u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00508840u); } /* indirect call */
    }

loc_00508843: ;
    MEM32(0x9132F0) = MEM32(0x9132F0) - 1;
    _fa = (uint32_t)(MEM32(0x9132F0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00508849: ;
    eax = MEM32(esp);
    MEM16(eax) = MEM16(eax) - 1;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00508862; /* jne: not equal / not zero */

loc_00508855: ;
    ecx = MEM32(0x9132E8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 4); PUSH32(esp, 0x0050885Fu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0050885Cu); } /* indirect call */
    }

loc_0050885F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00508862: ;
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x88;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00508870
 * Original: 0x00508870 - 0x00508935 (197 bytes, 69 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00508870(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00508870: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00508887; /* jne: not equal / not zero */

loc_00508878: ;
    ecx = MEM32(0x912738);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00508884u); RECOMP_ABI_CALL(0x00527950u, sub_00527950); /* call 0x00527950 */

loc_00508884: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_00508887: ;
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, 0x00508891u); RECOMP_ABI_CALL(0x00512FC0u, sub_00512FC0); /* call 0x00512FC0 */

loc_00508891: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x005088A5u); RECOMP_ABI_CALL(0x00508260u, sub_00508260); /* call 0x00508260 */

loc_005088A5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = 0x9132F0;
    PUSH32(esp, 0x005088B3u); RECOMP_ABI_CALL(0x005164E0u, sub_005164E0); /* call 0x005164E0 */

loc_005088B3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005088D4; /* jne: not equal / not zero */

loc_005088B7: ;
    eax = MEM32(esp + 4);
    MEM16(eax) = MEM16(eax) - 1;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0050890A; /* jne: not equal / not zero */

loc_005088C4: ;
    ecx = MEM32(0x9132E8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 4); PUSH32(esp, 0x005088CEu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x005088CBu); } /* indirect call */
    }

loc_005088CE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_005088D4: ;
    edx = MEM32(eax + 4);
    ecx = edx;
    ecx = ecx & 0x3F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xC (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005088F0; /* jl: less (signed <) */

loc_005088E1: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x13) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x13 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_005088F0; /* jg: greater (signed >) */

loc_005088E6: ;
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(0xF) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    SET_LO8(edx, ~LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0050890D; /* je: equal / zero */

loc_005088F0: ;
    eax = MEM32(esp + 4);
    MEM16(eax) = MEM16(eax) - 1;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0050890A; /* jne: not equal / not zero */

loc_005088FD: ;
    edx = MEM32(0x9132E8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00508907u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00508904u); } /* indirect call */
    }

loc_00508907: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0050890A: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0050890D: ;
    ecx = MEM32(0x912738);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00508919u); RECOMP_ABI_CALL(0x00527950u, sub_00527950); /* call 0x00527950 */

loc_00508919: ;
    eax = MEM32(esp + 4);
    MEM16(eax) = MEM16(eax) - 1;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00508932; /* jne: not equal / not zero */

loc_00508926: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(0x9132E8);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0050892Fu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0050892Cu); } /* indirect call */
    }

loc_0050892F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00508932: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_00508940
 * Original: 0x00508940 - 0x00508960 (32 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00508940(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00508940: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0050894Au); RECOMP_ABI_CALL(0x00508260u, sub_00508260); /* call 0x00508260 */

loc_0050894A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0050895C; /* je: equal / zero */

loc_00508951: ;
    eax = MEM32(eax + 0x48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0050895C; /* je: equal / zero */

loc_00508958: ;
    eax = MEM32(eax + 0x18);
    esp += 4; return; /* ret */

loc_0050895C: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

}

/**
 * sub_00508980
 * Original: 0x00508980 - 0x005089B9 (57 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00508980(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00508980: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0050898Au); RECOMP_ABI_CALL(0x00508260u, sub_00508260); /* call 0x00508260 */

loc_0050898A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005089B5; /* je: equal / zero */

loc_00508991: ;
    ecx = MEM32(eax + 4);
    edx = ecx;
    edx = edx & 0x3F;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x12) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0x12 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005089B5; /* jne: not equal / not zero */

loc_0050899E: ;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(0xF) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    SET_LO8(ecx, ~LO8(ecx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_005089B5; /* jne: not equal / not zero */

loc_005089A8: ;
    eax = MEM32(eax + 0x48);
    eax = MEM32(eax + 0x1C);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x19) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

loc_005089B5: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

}

/**
 * sub_005089C0
 * Original: 0x005089C0 - 0x00508AD9 (281 bytes, 92 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005089C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005089C0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edi = MEM32(0x912774);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00508AD6; /* je: equal / zero */

loc_005089D0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(edi + 4);
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_00508AD5; /* js: sign (negative) */

loc_005089DB: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    /* nop */

loc_005089E0: ;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 4), ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00508AD3; /* jle: less or equal (signed <=) */

loc_005089E9: ;
    eax = MEM32(edi + 8);
    esi = MEM32(eax + ebx * 4);
    eax = MEM32(esi + 0x58);
    ecx = eax;
    ecx = ecx & 0xC0000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x40000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00508ACC; /* jne: not equal / not zero */

loc_00508A06: ;
    SET_LO8(ecx, MEM8(esp + 0x18));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00508A19; /* jne: not equal / not zero */

loc_00508A0E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00508ACC; /* jne: not equal / not zero */

loc_00508A19: ;
    edx = MEM32(edi + 4);
    ebp = MEM32(esi + 0x48);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(edi + 4) = edx;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00508A47; /* je: equal / zero */

loc_00508A2A: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00508A47; /* je: equal / zero */

loc_00508A2E: ;
    edx = MEM32(edi + 8);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = edx + ebx * 4;
    PUSH32(esp, eax);
    eax = ecx + 4;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00508A44u); RECOMP_ABI_CALL(0x005CC970u, sub_005CC970); /* call 0x005CC970 */

loc_00508A44: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00508A47: ;
    ecx = MEM32(edi + 4);
    edx = MEM32(edi + 8);
    MEM32(edx + ecx * 4) = 0;
    MEM32(esi + 0x58) = MEM32(esi + 0x58) & 0xFFF3FFFFu;
    _fa = (uint32_t)(MEM32(esi + 0x58)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(ebp + 0x34);
    edi = ebp + 0x34;
    ecx = esp + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    MEM32(eax + 8) = 4;
    if (CMP_EQ(_fa, _fb)) goto loc_00508A94; /* je: equal / zero */

loc_00508A70: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00508A8E; /* je: equal / zero */

loc_00508A76: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00508A7Cu); RECOMP_ABI_CALL(0x00509D60u, sub_00509D60); /* call 0x00509D60 */

loc_00508A7C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00508A8E; /* jne: not equal / not zero */

loc_00508A83: ;
    edx = MEM32(edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00508A8Bu); RECOMP_ABI_CALL(0x0050A2C0u, sub_0050A2C0); /* call 0x0050A2C0 */

loc_00508A8B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00508A8E: ;
    MEM32(edi) = 0;

loc_00508A94: ;
    MEM32(esi + 4) = MEM32(esi + 4) & 0xFFFFC03Fu;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = MEM32(esi + 0x48);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00508AA2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00508AA0u); } /* indirect call */
    }

loc_00508AA2: ;
    ecx = MEM32(esi + 0x48);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00508AAAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00508AA7u); } /* indirect call */
    }

loc_00508AAA: ;
    ecx = MEM32(esi + 0x48);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00508AB8; /* je: equal / zero */

loc_00508AB1: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00508AB8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00508AB5u); } /* indirect call */
    }

loc_00508AB8: ;
    MEM32(esi + 0x48) = 0;
    edi = MEM32(0x912774);
    MEM8(0x91276C) = 1;

loc_00508ACC: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_005089E0; /* jns: not sign (positive) */

loc_00508AD3: ;
    POP32(esp, esi);
    POP32(esp, ebp);

loc_00508AD5: ;
    POP32(esp, ebx);

loc_00508AD6: ;
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00508AE0
 * Original: 0x00508AE0 - 0x00508B0D (45 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00508AE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00508AE0: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00508B0B; /* je: equal / zero */

loc_00508AE8: ;
    PUSH32(esp, edi);
    /* nop */

loc_00508AF0: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00508B05; /* je: equal / zero */

loc_00508AF6: ;
    edi = MEM32(eax + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x91278C); PUSH32(esp, 0x00508B00u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00508AFAu); } /* indirect call */
    }

loc_00508B00: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = edi;

loc_00508B05: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00508AF0; /* jne: not equal / not zero */

loc_00508B0A: ;
    POP32(esp, edi);

loc_00508B0B: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00508B10
 * Original: 0x00508B10 - 0x00508B33 (35 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00508B10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00508B10: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00508B31; /* je: equal / zero */

loc_00508B19: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00508B1Fu); RECOMP_ABI_CALL(0x00509D80u, sub_00509D80); /* call 0x00509D80 */

loc_00508B1F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00508B31; /* jne: not equal / not zero */

loc_00508B26: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00508B2Eu); RECOMP_ABI_CALL(0x0050AF00u, sub_0050AF00); /* call 0x0050AF00 */

loc_00508B2E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00508B31: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00508B40
 * Original: 0x00508B40 - 0x00508C44 (260 bytes, 104 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00508B40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00508B40: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_00508B8F; /* jne: not equal / not zero */

loc_00508B4E: ;
    edi = MEM32(esp + 0x1C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7D);
    eax = edi * 4 + 4;
    PUSH32(esp, 0x871ED8);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x912788); PUSH32(esp, 0x00508B67u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00508B61u); } /* indirect call */
    }

loc_00508B67: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00508B88; /* je: equal / zero */

loc_00508B6E: ;
    PUSH32(esp, 0x507270);
    PUSH32(esp, edi);
    esi = eax + 4;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    MEM32(eax) = edi;
    PUSH32(esp, 0x00508B81u); RECOMP_ABI_CALL(0x000199EEu, sub_000199EE); /* call 0x000199EE */

loc_00508B81: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00508B88: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00508B8F: ;
    esi = MEM32(esp + 0x1C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    MEM32(esp + 0x14) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_00508C2E; /* je: equal / zero */

loc_00508B9F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7D);
    ecx = esi * 4 + 4;
    PUSH32(esp, 0x871ED8);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(0x912788); PUSH32(esp, 0x00508BB4u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00508BAEu); } /* indirect call */
    }

loc_00508BB4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00508BD4; /* je: equal / zero */

loc_00508BBB: ;
    PUSH32(esp, 0x507270);
    PUSH32(esp, esi);
    edi = eax + 4;
    PUSH32(esp, 4);
    PUSH32(esp, edi);
    MEM32(eax) = esi;
    PUSH32(esp, 0x00508BCEu); RECOMP_ABI_CALL(0x000199EEu, sub_000199EE); /* call 0x000199EE */

loc_00508BCE: ;
    MEM32(esp + 0x14) = edi;
    goto loc_00508BD8;

loc_00508BD4: ;
    MEM32(esp + 0x14) = ebp;

loc_00508BD8: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00508BE2; /* jl: less (signed <) */

loc_00508BE0: ;
    esi = eax;

loc_00508BE2: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    ebp = MEM32(esp + 0x14);
    if (CMP_EQ(_fa, _fb)) goto loc_00508C2E; /* je: equal / zero */

loc_00508BEA: ;
    edi = esi;
    /* nop */

loc_00508BF0: ;
    esi = ebp;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00508C28; /* je: equal / zero */

loc_00508BF9: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00508C17; /* je: equal / zero */

loc_00508BFF: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00508C05u); RECOMP_ABI_CALL(0x00509D60u, sub_00509D60); /* call 0x00509D60 */

loc_00508C05: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00508C17; /* jne: not equal / not zero */

loc_00508C0C: ;
    edx = MEM32(esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00508C14u); RECOMP_ABI_CALL(0x0050A2C0u, sub_0050A2C0); /* call 0x0050A2C0 */

loc_00508C14: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00508C17: ;
    eax = MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00508C28; /* je: equal / zero */

loc_00508C1F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00508C25u); RECOMP_ABI_CALL(0x00509D50u, sub_00509D50); /* call 0x00509D50 */

loc_00508C25: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00508C28: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00508BF0; /* jne: not equal / not zero */

loc_00508C2E: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00508C3B; /* je: equal / zero */

loc_00508C32: ;
    PUSH32(esp, 3);
    ecx = ebx;
    PUSH32(esp, 0x00508C3Bu); RECOMP_ABI_CALL(0x004D00C3u, sub_004D00C3); /* call 0x004D00C3 */

loc_00508C3B: ;
    eax = MEM32(esp + 0x14);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00508C50
 * Original: 0x00508C50 - 0x00508D61 (273 bytes, 109 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00508C50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00508C50: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00508C94; /* jne: not equal / not zero */

loc_00508C5D: ;
    edi = MEM32(esp + 0x18);
    eax = edi * 8 + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00508C6Eu); RECOMP_ABI_CALL(0x0001C626u, sub_0001C626); /* call 0x0001C626 */

loc_00508C6E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00508C8E; /* je: equal / zero */

loc_00508C75: ;
    PUSH32(esp, 0x506C50);
    PUSH32(esp, edi);
    esi = eax + 4;
    PUSH32(esp, 8);
    PUSH32(esp, esi);
    MEM32(eax) = edi;
    PUSH32(esp, 0x00508C88u); RECOMP_ABI_CALL(0x000199EEu, sub_000199EE); /* call 0x000199EE */

loc_00508C88: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00508C8E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00508C94: ;
    esi = MEM32(esp + 0x18);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    PUSH32(esp, ebx);
    MEM32(esp + 0x14) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_00508D18; /* je: equal / zero */

loc_00508CA1: ;
    ecx = esi * 8 + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00508CAEu); RECOMP_ABI_CALL(0x0001C626u, sub_0001C626); /* call 0x0001C626 */

loc_00508CAE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00508CCE; /* je: equal / zero */

loc_00508CB5: ;
    PUSH32(esp, 0x506C50);
    PUSH32(esp, esi);
    ebx = eax + 4;
    PUSH32(esp, 8);
    PUSH32(esp, ebx);
    MEM32(eax) = esi;
    PUSH32(esp, 0x00508CC8u); RECOMP_ABI_CALL(0x000199EEu, sub_000199EE); /* call 0x000199EE */

loc_00508CC8: ;
    MEM32(esp + 0x14) = ebx;
    goto loc_00508CD2;

loc_00508CCE: ;
    MEM32(esp + 0x14) = ebp;

loc_00508CD2: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00508CDC; /* jl: less (signed <) */

loc_00508CDA: ;
    esi = eax;

loc_00508CDC: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    ebx = MEM32(esp + 0x14);
    if (CMP_EQ(_fa, _fb)) goto loc_00508D18; /* je: equal / zero */

loc_00508CE4: ;
    ebp = esi;

loc_00508CE6: ;
    eax = MEM32(edi);
    esi = ebx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax) = MEM16(eax) + 1;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(esi);
    MEM16(eax) = MEM16(eax) - 1;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00508D08; /* jne: not equal / not zero */

loc_00508CFB: ;
    edx = MEM32(0x9132E8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00508D05u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00508D02u); } /* indirect call */
    }

loc_00508D05: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00508D08: ;
    eax = MEM32(edi);
    MEM32(esi) = eax;
    ecx = MEM32(edi + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 4) = ecx;
    if ((_fa != 0)) goto loc_00508CE6; /* jne: not equal / not zero */

loc_00508D18: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00508D58; /* je: equal / zero */

loc_00508D1C: ;
    eax = MEM32(edi + -4);
    ebx = edi + -4;
    esi = edi + eax * 8;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_00508D4F; /* js: sign (negative) */

loc_00508D28: ;
    edi = eax + 1;
    goto loc_00508D30;

    /* nop */

loc_00508D30: ;
    eax = MEM32(esi + -8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM16(eax) = MEM16(eax) - 1;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00508D4C; /* jne: not equal / not zero */

loc_00508D3F: ;
    edx = MEM32(0x9132E8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00508D49u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00508D46u); } /* indirect call */
    }

loc_00508D49: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00508D4C: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00508D30; /* jne: not equal / not zero */

loc_00508D4F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00508D55u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_00508D55: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00508D58: ;
    eax = MEM32(esp + 0x14);
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00508D70
 * Original: 0x00508D70 - 0x00508D8C (28 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00508D70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00508D70: ;
    eax = MEM32(0x9132D8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00508D7E; /* jne: not equal / not zero */

loc_00508D79: ;
    PUSH32(esp, 0x00508D7Eu); RECOMP_ABI_CALL(0x00507970u, sub_00507970); /* call 0x00507970 */

loc_00508D7E: ;
    ecx = MEM32(0x9132D8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00511A30(); return; /* tail jmp 0x00511A30 */

}

/**
 * sub_00508D90
 * Original: 0x00508D90 - 0x00508D95 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00508D90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00508D90: ;
    g_seh_ebp = ebp; sub_00508AE0(); return; /* tail jmp 0x00508AE0 */

}

/**
 * sub_00508DA0
 * Original: 0x00508DA0 - 0x00508DA5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00508DA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00508DA0: ;
    g_seh_ebp = ebp; sub_00508B40(); return; /* tail jmp 0x00508B40 */

}

/**
 * sub_00508DB0
 * Original: 0x00508DB0 - 0x00508DB5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00508DB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00508DB0: ;
    g_seh_ebp = ebp; sub_00508C50(); return; /* tail jmp 0x00508C50 */

}

/**
 * sub_00508DC0
 * Original: 0x00508DC0 - 0x00508DF8 (56 bytes, 22 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00508DC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00508DC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00508DE1; /* je: equal / zero */

loc_00508DC9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00508DCFu); RECOMP_ABI_CALL(0x00509D80u, sub_00509D80); /* call 0x00509D80 */

loc_00508DCF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00508DE1; /* jne: not equal / not zero */

loc_00508DD6: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00508DDEu); RECOMP_ABI_CALL(0x0050AF00u, sub_0050AF00); /* call 0x0050AF00 */

loc_00508DDE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00508DE1: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00508DF2; /* je: equal / zero */

loc_00508DE8: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x91278C); PUSH32(esp, 0x00508DEFu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00508DE9u); } /* indirect call */
    }

loc_00508DEF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00508DF2: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00508E00
 * Original: 0x00508E00 - 0x00508EDA (218 bytes, 75 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00508E00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00508E00: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(esi + 4) (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00508ED5; /* jle: less or equal (signed <=) */

loc_00508E11: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 1 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00508E1E; /* jg: greater (signed >) */

loc_00508E16: ;
    MEM32(esi + 4) = ebp;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_00508E1E: ;
    PUSH32(esp, ebx);
    ebx = ebp + 1;
    eax = ebx * 8 + 4;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00508E30u); RECOMP_ABI_CALL(0x0001C626u, sub_0001C626); /* call 0x0001C626 */

loc_00508E30: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00508E4C; /* je: equal / zero */

loc_00508E37: ;
    PUSH32(esp, 0x506C50);
    PUSH32(esp, ebx);
    edi = eax + 4;
    PUSH32(esp, 8);
    PUSH32(esp, edi);
    MEM32(eax) = ebx;
    PUSH32(esp, 0x00508E4Au); RECOMP_ABI_CALL(0x000199EEu, sub_000199EE); /* call 0x000199EE */

loc_00508E4A: ;
    goto loc_00508E4E;

loc_00508E4C: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00508E4E: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(esi);
    PUSH32(esp, edi);
    edx = eax + ecx * 8;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00508E5Eu); RECOMP_ABI_CALL(0x00506580u, sub_00506580); /* call 0x00506580 */

loc_00508E5E: ;
    eax = MEM32(esi + 8);
    ecx = esi + 0xC;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esi + 4) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_00508E7B; /* je: equal / zero */

loc_00508E6E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00508E78u); RECOMP_ABI_CALL(0x00508C50u, sub_00508C50); /* call 0x00508C50 */

loc_00508E78: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00508E7B: ;
    MEM32(esi + 8) = edi;
    MEM16(0x8DACCC) = MEM16(0x8DACCC) + 1;
    _fa = (uint32_t)(MEM16(0x8DACCC)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(esi + 8);
    edx = MEM32(esi);
    MEM16(0x8DACCC) = MEM16(0x8DACCC) + 1;
    _fa = (uint32_t)(MEM16(0x8DACCC)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    esi = eax + edx * 8;
    eax = MEM32(esi);
    MEM16(eax) = MEM16(eax) - 1;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), 0 (16-bit) */
    POP32(esp, edi);
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_00508EAE; /* jne: not equal / not zero */

loc_00508EA1: ;
    ecx = MEM32(0x9132E8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 4); PUSH32(esp, 0x00508EABu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00508EA8u); } /* indirect call */
    }

loc_00508EAB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00508EAE: ;
    MEM32(esi) = 0x8DACCC;
    MEM32(esi + 4) = 0;
    MEM16(0x8DACCC) = MEM16(0x8DACCC) - 1;
    _fa = (uint32_t)(MEM16(0x8DACCC)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00508ED5; /* jne: not equal / not zero */

loc_00508EC4: ;
    edx = MEM32(0x9132E8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x8DACCC);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00508ED2u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00508ECFu); } /* indirect call */
    }

loc_00508ED2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00508ED5: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00508EE0
 * Original: 0x00508EE0 - 0x00508EE9 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00508EE0(void)
{

loc_00508EE0: ;
    eax = ecx;
    MEM32(eax) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00508EF0
 * Original: 0x00508EF0 - 0x00508F3B (75 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00508EF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00508EF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    ecx = esi + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00508F0B; /* je: equal / zero */

loc_00508EFE: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00508F08u); RECOMP_ABI_CALL(0x00508B40u, sub_00508B40); /* call 0x00508B40 */

loc_00508F08: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00508F0B: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 2;

loc_00508F13: ;
    eax = MEM32(esi + -4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00508F35; /* je: equal / zero */

loc_00508F1D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00508F23u); RECOMP_ABI_CALL(0x00509D60u, sub_00509D60); /* call 0x00509D60 */

loc_00508F23: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00508F35; /* jne: not equal / not zero */

loc_00508F2A: ;
    edx = MEM32(esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00508F32u); RECOMP_ABI_CALL(0x0050A2C0u, sub_0050A2C0); /* call 0x0050A2C0 */

loc_00508F32: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00508F35: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00508F13; /* jne: not equal / not zero */

loc_00508F38: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00508F40
 * Original: 0x00508F40 - 0x00508F85 (69 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00508F40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00508F40: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    ecx = esi + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00508F5B; /* je: equal / zero */

loc_00508F4E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00508F58u); RECOMP_ABI_CALL(0x00508C50u, sub_00508C50); /* call 0x00508C50 */

loc_00508F58: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00508F5B: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x1C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 2;

loc_00508F63: ;
    eax = MEM32(esi + -8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM16(eax) = MEM16(eax) - 1;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00508F7F; /* jne: not equal / not zero */

loc_00508F72: ;
    edx = MEM32(0x9132E8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00508F7Cu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00508F79u); } /* indirect call */
    }

loc_00508F7C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00508F7F: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00508F63; /* jne: not equal / not zero */

loc_00508F82: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00508F90
 * Original: 0x00508F90 - 0x00508FCC (60 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00508F90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00508F90: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    PUSH32(esp, esi);
    esi = MEM32(ebx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00508FC9; /* je: equal / zero */

loc_00508F9A: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esi + 4);
    if (CMP_EQ(_fa, _fb)) goto loc_00508FBC; /* je: equal / zero */

loc_00508FA4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00508FAAu); RECOMP_ABI_CALL(0x00509D80u, sub_00509D80); /* call 0x00509D80 */

loc_00508FAA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00508FBC; /* jne: not equal / not zero */

loc_00508FB1: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00508FB9u); RECOMP_ABI_CALL(0x0050AF00u, sub_0050AF00); /* call 0x0050AF00 */

loc_00508FB9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00508FBC: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x91278C); PUSH32(esp, 0x00508FC3u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00508FBDu); } /* indirect call */
    }

loc_00508FC3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx) = edi;
    POP32(esp, edi);

loc_00508FC9: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00508FD0
 * Original: 0x00508FD0 - 0x0050914A (378 bytes, 131 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00508FD0(void)
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

loc_00508FD0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x14);
    PUSH32(esp, ebp);
    ebp = MEM32(eax);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0x18);
    ecx = MEM32(ecx);
    eax = ebp;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((3) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 8) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00509142; /* je: equal / zero */

loc_00508FF6: ;
    edx = MEM32(esi);
    ecx = MEM32(esi + 4);
    PUSH32(esp, ebx);
    ebx = edx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = ecx;
    if (CMP_GE(_fas, _fbs)) goto loc_005090F9; /* jge: greater or equal (signed >=) */

loc_0050900C: ;
    ecx = MEM32(esi + 8);
    edi = ecx + edx * 8;
    edx = MEM32(esp + 0x28);
    edx = MEM32(edx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0050907B; /* jne: not equal / not zero */

loc_0050901C: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00509028u); RECOMP_ABI_CALL(0x00506600u, sub_00506600); /* call 0x00506600 */

loc_00509028: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(0x8DACCC) = MEM16(0x8DACCC) + 1;
    _fa = (uint32_t)(MEM16(0x8DACCC)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    edx = MEM32(esi + 8);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = edx + ebx * 8;
    MEM32(esp + 0x18) = 0x8DACCC;
    MEM32(esp + 0x1C) = 0;
    PUSH32(esp, 0x00509052u); RECOMP_ABI_CALL(0x005063F0u, sub_005063F0); /* call 0x005063F0 */

loc_00509052: ;
    eax = MEM32(esp + 0x14);
    MEM16(eax) = MEM16(eax) - 1;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005090ED; /* jne: not equal / not zero */

loc_00509063: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(0x9132E8);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0050906Cu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00509069u); } /* indirect call */
    }

loc_0050906C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi) = ebx;
    POP32(esp, ebx);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_0050907B: ;
    ebp = edx;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebp = (uint32_t)(((int32_t)(int32_t)(ebp)) >> ((3) & 31u));
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx + ebp * 8;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0050908Fu); RECOMP_ABI_CALL(0x00506660u, sub_00506660); /* call 0x00506660 */

loc_0050908F: ;
    edx = MEM32(esp + 0x34);
    eax = MEM32(edx);
    ecx = MEM32(esp + 0x30);
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x30);
    ecx = MEM32(eax);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x005090A9u); RECOMP_ABI_CALL(0x00506600u, sub_00506600); /* call 0x00506600 */

loc_005090A9: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(0x8DACCC) = MEM16(0x8DACCC) + 1;
    _fa = (uint32_t)(MEM16(0x8DACCC)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(esi + 8);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ecx = eax + ebx * 8;
    MEM32(esp + 0x18) = 0x8DACCC;
    MEM32(esp + 0x1C) = 0;
    PUSH32(esp, 0x005090D3u); RECOMP_ABI_CALL(0x005063F0u, sub_005063F0); /* call 0x005063F0 */

loc_005090D3: ;
    eax = MEM32(esp + 0x14);
    MEM16(eax) = MEM16(eax) - 1;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005090ED; /* jne: not equal / not zero */

loc_005090E0: ;
    ecx = MEM32(0x9132E8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 4); PUSH32(esp, 0x005090EAu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x005090E7u); } /* indirect call */
    }

loc_005090EA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005090ED: ;
    POP32(esp, edi);
    MEM32(esi) = ebx;
    POP32(esp, ebx);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_005090F9: ;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    PUSH32(esp, 0x00509104u); RECOMP_ABI_CALL(0x005CBF44u, sub_005CBF44); /* call 0x005CBF44 */

loc_00509104: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0050910A; /* jge: greater or equal (signed >=) */

loc_00509108: ;
    eax = ebx;

loc_0050910A: ;
    edx = MEM32(esp + 0x28);
    ecx = MEM32(esi + 8);
    edi = MEM32(edx);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    ecx = esi;
    edi = (uint32_t)(((int32_t)(int32_t)(edi)) >> ((3) & 31u));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    PUSH32(esp, 0x00509120u); RECOMP_ABI_CALL(0x00508E00u, sub_00508E00); /* call 0x00508E00 */

loc_00509120: ;
    eax = MEM32(esi + 8);
    edx = MEM32(esp + 0x24);
    eax = eax + edi * 8;
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    MEM32(esp + 0x2C) = eax;
    eax = MEM32(esp + 0x24);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00509140u); RECOMP_ABI_CALL(0x00508FD0u, sub_00508FD0); /* call 0x00508FD0 */

loc_00509140: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_00509142: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00509150
 * Original: 0x00509150 - 0x00509183 (51 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00509150(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00509150: ;
    eax = ecx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = eax + 0xC;
    MEM32(eax + 8) = ecx;
    MEM32(eax) = edx;
    MEM32(eax + 4) = edx;
    MEM32(ecx) = 0x8DACCC;
    MEM16(0x8DACCC) = MEM16(0x8DACCC) + 1;
    _fa = (uint32_t)(MEM16(0x8DACCC)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 4) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = 0x8DACCC;
    MEM16(0x8DACCC) = MEM16(0x8DACCC) + 1;
    _fa = (uint32_t)(MEM16(0x8DACCC)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 4) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_00509190
 * Original: 0x00509190 - 0x00509195 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00509190(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00509190: ;
    g_seh_ebp = ebp; sub_00508F40(); return; /* tail jmp 0x00508F40 */

}

/**
 * sub_005091A0
 * Original: 0x005091A0 - 0x005091D6 (54 bytes, 18 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005091A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005091A0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(ecx + 8);
    eax = MEM32(ecx);
    eax = edx + eax * 8;
    MEM32(esp) = eax;
    eax = MEM32(esp + 0xC);
    edx = eax + 8;
    MEM32(esp + 4) = eax;
    eax = esp;
    PUSH32(esp, eax);
    MEM32(esp + 0x10) = edx;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x005091D0u); RECOMP_ABI_CALL(0x00508FD0u, sub_00508FD0); /* call 0x00508FD0 */

loc_005091D0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_005091E0
 * Original: 0x005091E0 - 0x0050922C (76 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005091E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005091E0: ;
    PUSH32(esp, edi);
    edi = ecx;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0050922A; /* je: equal / zero */

loc_005091E8: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    /* nop */

loc_005091F0: ;
    esi = MEM32(edi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00509223; /* je: equal / zero */

loc_005091F6: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ebx = MEM32(esi + 4);
    if (CMP_EQ(_fa, _fb)) goto loc_00509217; /* je: equal / zero */

loc_005091FF: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00509205u); RECOMP_ABI_CALL(0x00509D80u, sub_00509D80); /* call 0x00509D80 */

loc_00509205: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00509217; /* jne: not equal / not zero */

loc_0050920C: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00509214u); RECOMP_ABI_CALL(0x0050AF00u, sub_0050AF00); /* call 0x0050AF00 */

loc_00509214: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00509217: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x91278C); PUSH32(esp, 0x0050921Eu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00509218u); } /* indirect call */
    }

loc_0050921E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = ebx;

loc_00509223: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005091F0; /* jne: not equal / not zero */

loc_00509228: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0050922A: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00509230
 * Original: 0x00509230 - 0x0050935C (300 bytes, 103 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00509230(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00509230: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = ecx;
    eax = MEM32(ebp + 8);
    ebx = MEM32(ebp);
    { uint32_t _sv=(uint32_t)(ebx), _sc=(uint32_t)(3) & 31u;
      if (_sc) {
        ebx = _sv << _sc;
        _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = eax;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00509294; /* je: equal / zero */

loc_0050924A: ;
    edx = MEM32(esp + 0x24);
    esi = MEM32(edx);
    ecx = ZX16(MEM16(esi + 2));
    MEM32(esp + 0x14) = esi;
    MEM32(esp + 0x10) = ecx;
    /* nop */

loc_00509260: ;
    edx = MEM32(eax);
    ecx = ZX16(MEM16(edx + 2));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esp + 0x10) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00509288; /* jne: not equal / not zero */

loc_0050926C: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00509345; /* je: equal / zero */

loc_00509274: ;
    edi = esi + 8;
    esi = edx + 8;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_00509345; /* je: equal / zero */

loc_00509284: ;
    esi = MEM32(esp + 0x14);

loc_00509288: ;
    ecx = MEM32(ebp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00509260; /* jne: not equal / not zero */

loc_00509294: ;
    esi = MEM32(esp + 0x24);
    ecx = MEM32(0x912734);
    PUSH32(esp, esi);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    PUSH32(esp, 0x005092A9u); RECOMP_ABI_CALL(0x0050A840u, sub_0050A840); /* call 0x0050A840 */

loc_005092A9: ;
    edx = MEM32(eax);
    eax = MEM32(esp + 0x24);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(ebx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005092D2; /* je: equal / zero */

loc_005092B8: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x005092BEu); RECOMP_ABI_CALL(0x00509D60u, sub_00509D60); /* call 0x00509D60 */

loc_005092BE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005092D2; /* jne: not equal / not zero */

loc_005092C5: ;
    eax = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, 0x005092CFu); RECOMP_ABI_CALL(0x0050A2C0u, sub_0050A2C0); /* call 0x0050A2C0 */

loc_005092CF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005092D2: ;
    eax = MEM32(esi);
    MEM32(esp + 0x18) = eax;
    MEM16(eax) = MEM16(eax) + 1;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    edx = MEM32(ebp + 8);
    ecx = MEM32(ebp);
    eax = edx + ecx * 8;
    ecx = esp + 0x20;
    MEM32(esp + 0x24) = eax;
    edx = esp + 0x18;
    MEM32(esp + 0x14) = ecx;
    eax = esp + 0x24;
    ecx = esp + 0x14;
    PUSH32(esp, eax);
    MEM32(esp + 0x14) = edx;
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    ecx = ebp;
    PUSH32(esp, edx);
    MEM32(esp + 0x28) = 3;
    if (CMP_NE(_fa, _fb)) goto loc_0050931D; /* jne: not equal / not zero */

loc_00509315: ;
    MEM32(esp + 0x28) = 1;

loc_0050931D: ;
    PUSH32(esp, 0x00509322u); RECOMP_ABI_CALL(0x00508FD0u, sub_00508FD0); /* call 0x00508FD0 */

loc_00509322: ;
    eax = MEM32(esp + 0x18);
    MEM16(eax) = MEM16(eax) - 1;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0050933B; /* jne: not equal / not zero */

loc_0050932F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(0x9132E8);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00509338u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00509335u); } /* indirect call */
    }

loc_00509338: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0050933B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00509345: ;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0050933B; /* jne: not equal / not zero */

loc_0050934B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(eax + 4) = 3;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00509360
 * Original: 0x00509360 - 0x00509381 (33 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00509360(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00509360: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00509368u); RECOMP_ABI_CALL(0x00508F40u, sub_00508F40); /* call 0x00508F40 */

loc_00509368: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0050937B; /* je: equal / zero */

loc_0050936F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1C);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x912790); PUSH32(esp, 0x00509378u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00509372u); } /* indirect call */
    }

loc_00509378: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0050937B: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00509390
 * Original: 0x00509390 - 0x0050961A (650 bytes, 188 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00509390(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00509390: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = MEM32(0x91274C);
    eax = edi + 1;
    MEM32(esp + 8) = eax;
    eax = MEM32(0x91273C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00509615; /* je: equal / zero */

loc_005093AE: ;
    PUSH32(esp, esi);
    /* nop */

loc_005093B0: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esp + 0xC) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00509614; /* je: equal / zero */

loc_005093BA: ;
    esi = MEM32(0x912750);
    eax = MEM32(esi + 8);
    edx = MEM32(esi);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(3) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = eax;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005093ED; /* je: equal / zero */

loc_005093D0: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005093E1; /* je: equal / zero */

loc_005093D8: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005094E3; /* jne: not equal / not zero */

loc_005093E1: ;
    ecx = MEM32(esi + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005093D0; /* jne: not equal / not zero */

loc_005093ED: ;
    ecx = MEM32(0x912740);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), edi (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_005094E9; /* ja: above (unsigned >) */

loc_005093FB: ;
    goto loc_00509400;

    /* nop */

loc_00509400: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x912740) = ecx;
    SET_LO8(eax, MEM8(ecx));
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_005094D3; /* ja: above (unsigned >) */

loc_00509419: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x50961C); /* switch: 4 entries, 3 targets */
    if (_jt == 0x00509420u) goto loc_00509420;
    if (_jt == 0x0050943Cu) goto loc_0050943C;
    if (_jt == 0x00509499u) goto loc_00509499;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00509420: ;
    eax = MEM32(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x912740) = ecx;
    ecx = MEM32(0x912738);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00509437u); RECOMP_ABI_CALL(0x00527470u, sub_00527470); /* call 0x00527470 */

loc_00509437: ;
    goto loc_005094C7;

loc_0050943C: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = ecx;
    eax = esi;
    MEM32(0x912740) = ecx;
    edi = eax + 1;
    /* nop */

loc_00509450: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00509450; /* jne: not equal / not zero */

loc_00509457: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = ecx + eax + 1;
    PUSH32(esp, esi);
    ecx = esp + 0xC;
    MEM32(0x912740) = edx;
    PUSH32(esp, 0x0050946Du); RECOMP_ABI_CALL(0x00512FC0u, sub_00512FC0); /* call 0x00512FC0 */

loc_0050946D: ;
    ecx = MEM32(0x912750);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0050947Du); RECOMP_ABI_CALL(0x00509230u, sub_00509230); /* call 0x00509230 */

loc_0050947D: ;
    eax = MEM32(esp + 8);
    MEM16(eax) = MEM16(eax) - 1;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005094C7; /* jne: not equal / not zero */

loc_0050948A: ;
    ecx = MEM32(0x9132E8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 4); PUSH32(esp, 0x00509494u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00509491u); } /* indirect call */
    }

loc_00509494: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_005094C7;

loc_00509499: ;
    eax = MEM32(0x912768);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(0x912740) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_005094D3; /* jne: not equal / not zero */

loc_005094A9: ;
    PUSH32(esp, edi);
    edx = esp + 0x1C;
    PUSH32(esp, 0x871E98);
    PUSH32(esp, edx);
    PUSH32(esp, 0x005094B9u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_005094B9: ;
    eax = esp + 0x24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x9127A4); PUSH32(esp, 0x005094C4u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x005094BEu); } /* indirect call */
    }

loc_005094C4: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005094C7: ;
    ecx = MEM32(0x912740);
    esi = MEM32(0x912750);

loc_005094D3: ;
    edi = MEM32(0x91274C);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), edi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00509400; /* jbe: below or equal (unsigned <=) */

loc_005094E1: ;
    goto loc_005094E9;

loc_005094E3: ;
    ecx = MEM32(0x912740);

loc_005094E9: ;
    edx = MEM32(0x91273C);
    eax = MEM32(0x912744);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_005095DC; /* jge: greater or equal (signed >=) */

loc_005094FE: ;
    eax = MEM32(esi + 8);
    edx = MEM32(esi);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(3) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = eax;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0050952D; /* je: equal / zero */

loc_0050950E: ;
    edi = edi;

loc_00509510: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00509521; /* je: equal / zero */

loc_00509518: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00509609; /* jne: not equal / not zero */

loc_00509521: ;
    ecx = MEM32(esi + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00509510; /* jne: not equal / not zero */

loc_0050952D: ;
    edx = MEM32(0x912738);
    eax = MEM32(edx + 0x1128);
    ecx = MEM32(eax);
    eax = MEM32(ecx + 0x50);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00509609; /* je: equal / zero */

loc_00509546: ;
    eax = MEM32(eax + 4);
    edx = eax;
    edx = edx & 0x3F;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x12) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0x12 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00509609; /* jne: not equal / not zero */

loc_00509557: ;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0xF) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    SET_LO8(eax, ~LO8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00509609; /* jne: not equal / not zero */

loc_00509564: ;
    eax = 1;
    PUSH32(esp, 0x0050956Eu); RECOMP_ABI_CALL(0x00507160u, sub_00507160); /* call 0x00507160 */

loc_0050956E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005095BC; /* je: equal / zero */

loc_00509572: ;
    eax = MEM32(0x912768);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005095BC; /* je: equal / zero */

loc_0050957B: ;
    eax = MEM32(0x912754);
    PUSH32(esp, eax);
    ecx = esp + 0x2C;
    PUSH32(esp, 0x871E98);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00509590u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00509590: ;
    edx = esp + 0x34;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(0x9127A4); PUSH32(esp, 0x0050959Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00509595u); } /* indirect call */
    }

loc_0050959B: ;
    eax = MEM32(0x912754);
    ecx = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 5);
    PUSH32(esp, ecx);
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x2C) = 3;
    { uint32_t _icall_target = MEM32(0x9127A0); PUSH32(esp, 0x005095B9u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x005095B3u); } /* indirect call */
    }

loc_005095B9: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005095BC: ;
    edi = MEM32(0x91274C);
    eax = MEM32(0x91273C);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(0x91274C) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_005093B0; /* jne: not equal / not zero */

loc_005095D6: ;
    POP32(esp, esi);
    POP32(esp, edi);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_005095DC: ;
    eax = MEM32(0x912768);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(0x91273C) = 0;
    MEM32(0x912740) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00509614; /* je: equal / zero */

loc_005095F9: ;
    POP32(esp, esi);
    MEM32(0x912768) = 0;
    POP32(esp, edi);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00509609: ;
    ecx = MEM32(0x912758);
    PUSH32(esp, 0x00509614u); RECOMP_ABI_CALL(0x0050B470u, sub_0050B470); /* call 0x0050B470 */

loc_00509614: ;
    POP32(esp, esi);

loc_00509615: ;
    POP32(esp, edi);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0050961A
 * Original: 0x0050961A - 0x00509630 (22 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050961A(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0050961A: ;
    edi = edi;
    MEM8(eax + edx * 2 + 0x50942000) = MEM8(eax + edx * 2 + 0x50942000) & LO8(edx);
    _fa = (uint32_t)(MEM8(eax + edx * 2 + 0x50942000)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fb = (uint32_t)(HI8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(esp + edx * 4) = MEM8(esp + edx * 4) + HI8(ebx);
    _fa = (uint32_t)(MEM8(esp + edx * 4)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    PUSH32(esp, eax);
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(ecx + -872394604) = MEM8(ecx + -872394604) + LO8(ebx);
    _fa = (uint32_t)(MEM8(ecx + -872394604)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00509630
 * Original: 0x00509630 - 0x0050971D (237 bytes, 74 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00509630(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00509630: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x180) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x180;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x60;
    edi = esp + 8;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = MEM32(0x912734);
    PUSH32(esp, 0x60);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0050965Du); RECOMP_ABI_CALL(0x00507B80u, sub_00507B80); /* call 0x00507B80 */

loc_0050965D: ;
    eax = MEM32(0x91273C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0050966D; /* je: equal / zero */

loc_00509666: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0050966Bu); RECOMP_ABI_CALL(0x00509390u, sub_00509390); /* call 0x00509390 */

loc_0050966B: ;
    goto loc_005096C6;

loc_0050966D: ;
    ecx = MEM32(0x912738);
    edx = MEM32(ecx + 0x1128);
    eax = MEM32(edx);
    eax = MEM32(eax + 0x50);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005096AB; /* je: equal / zero */

loc_00509682: ;
    eax = MEM32(eax + 4);
    ecx = eax;
    ecx = ecx & 0x3F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x12) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x12 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005096AB; /* jne: not equal / not zero */

loc_0050968F: ;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0xF) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    SET_LO8(eax, ~LO8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_005096AB; /* jne: not equal / not zero */

loc_00509698: ;
    eax = MEM32(ebp + 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005096A0u); RECOMP_ABI_CALL(0x00507160u, sub_00507160); /* call 0x00507160 */

loc_005096A0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005096C6; /* je: equal / zero */

loc_005096A4: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005096A9u); RECOMP_ABI_CALL(0x00505C70u, sub_00505C70); /* call 0x00505C70 */

loc_005096A9: ;
    goto loc_005096C6;

loc_005096AB: ;
    ecx = MEM32(0x912758);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005096B6u); RECOMP_ABI_CALL(0x0050B470u, sub_0050B470); /* call 0x0050B470 */

loc_005096B6: ;
    edx = MEM32(0x912738);
    MEM32(edx + 0x1134) = 0;

loc_005096C6: ;
    ecx = MEM32(0x912770);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005096D1u); RECOMP_ABI_CALL(0x00529A20u, sub_00529A20); /* call 0x00529A20 */

loc_005096D1: ;
    SET_LO8(eax, MEM8(0x91276C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005096E6; /* je: equal / zero */

loc_005096DA: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005096DFu); RECOMP_ABI_CALL(0x00529B00u, sub_00529B00); /* call 0x00529B00 */

loc_005096DF: ;
    MEM8(0x91276C) = 0;

loc_005096E6: ;
    esi = esp + 0x188;
    edi = 0x60;

loc_005096F2: ;
    eax = MEM32(esi + -4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00509714; /* je: equal / zero */

loc_005096FC: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00509702u); RECOMP_ABI_CALL(0x00509D60u, sub_00509D60); /* call 0x00509D60 */

loc_00509702: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00509714; /* jne: not equal / not zero */

loc_00509709: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00509711u); RECOMP_ABI_CALL(0x0050A2C0u, sub_0050A2C0); /* call 0x0050A2C0 */

loc_00509711: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00509714: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_005096F2; /* jne: not equal / not zero */

loc_00509717: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00509720
 * Original: 0x00509720 - 0x00509725 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00509720(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00509720: ;
    g_seh_ebp = ebp; sub_00509630(); return; /* tail jmp 0x00509630 */

}

/**
 * sub_00509730
 * Original: 0x00509730 - 0x00509735 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00509730(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00509730: ;
    g_seh_ebp = ebp; sub_005091E0(); return; /* tail jmp 0x005091E0 */

}

/**
 * sub_00509740
 * Original: 0x00509740 - 0x0050975A (26 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00509740(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00509740: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    ecx = eax + 0x10;
    MEM32(eax + 0xC) = ecx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx) = edx;
    MEM32(ecx + 4) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_00509760
 * Original: 0x00509760 - 0x0050993A (474 bytes, 129 insns)
 * Category: game_io
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00509760(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00509760: ;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = esp + 8;
    PUSH32(esp, 0x0050976Eu); RECOMP_ABI_CALL(0x00014DE0u, sub_00014DE0); /* call 0x00014DE0 */

loc_0050976E: ;
    eax = MEM32(esp + 0x48);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    esi = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0050977E; /* jne: not equal / not zero */

loc_0050977A: ;
    esi = esp + 8;

loc_0050977E: ;
    _fa = (uint32_t)(MEM32(0x8DAA8C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8DAA8C), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00509797; /* jne: not equal / not zero */

loc_00509786: ;
    MEM16(0x8DACCC) = MEM16(0x8DACCC) + 1;
    _fa = (uint32_t)(MEM16(0x8DACCC)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x8DAA8C) = 0x8DACCC;

loc_00509797: ;
    _fa = (uint32_t)(MEM32(0x912790)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x912790), ebx (32-bit) */
    MEM8(0x91277C) = LO8(ebx);
    if (CMP_NE(_fa, _fb)) goto loc_005097AF; /* jne: not equal / not zero */

loc_005097A5: ;
    MEM32(0x912790) = 0x5058F0;

loc_005097AF: ;
    PUSH32(esp, 0x005097B4u); RECOMP_ABI_CALL(0x00529A60u, sub_00529A60); /* call 0x00529A60 */

loc_005097B4: ;
    MEM32(0x9132E8) = 0x912788;
    eax = MEM32(esi + 0x2C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x005097C7u); RECOMP_ABI_CALL(0x005232F0u, sub_005232F0); /* call 0x005232F0 */

loc_005097C7: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x59);
    PUSH32(esp, 0x871E08);
    PUSH32(esp, 0xC);
    { uint32_t _icall_target = MEM32(0x912788); PUSH32(esp, 0x005097D6u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x005097D0u); } /* indirect call */
    }

loc_005097D6: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005097EF; /* je: equal / zero */

loc_005097DD: ;
    ecx = MEM32(esi + 0x28);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x005097E8u); RECOMP_ABI_CALL(0x005299D0u, sub_005299D0); /* call 0x005299D0 */

loc_005097E8: ;
    MEM32(0x912770) = eax;
    goto loc_005097F5;

loc_005097EF: ;
    MEM32(0x912770) = ebx;

loc_005097F5: ;
    _fa = (uint32_t)(MEM32(esi + 0x34)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x34), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00509822; /* je: equal / zero */

loc_005097FA: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x59);
    PUSH32(esp, 0x871E08);
    PUSH32(esp, 0xC);
    { uint32_t _icall_target = MEM32(0x912788); PUSH32(esp, 0x00509809u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00509803u); } /* indirect call */
    }

loc_00509809: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00509822; /* je: equal / zero */

loc_00509810: ;
    edx = MEM32(esi + 0x34);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x0050981Bu); RECOMP_ABI_CALL(0x005299D0u, sub_005299D0); /* call 0x005299D0 */

loc_0050981B: ;
    MEM32(0x912774) = eax;
    goto loc_00509828;

loc_00509822: ;
    MEM32(0x912774) = ebx;

loc_00509828: ;
    PUSH32(esp, 0x0050982Du); RECOMP_ABI_CALL(0x0050EA40u, sub_0050EA40); /* call 0x0050EA40 */

loc_0050982D: ;
    PUSH32(esp, esi);
    ecx = 0x9132F0;
    PUSH32(esp, 0x00509838u); RECOMP_ABI_CALL(0x00515FA0u, sub_00515FA0); /* call 0x00515FA0 */

loc_00509838: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4F);
    PUSH32(esp, 0x871DC0);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(0x912788); PUSH32(esp, 0x00509847u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00509841u); } /* indirect call */
    }

loc_00509847: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00509857; /* je: equal / zero */

loc_0050984E: ;
    MEM32(eax) = ebx;
    MEM32(0x912734) = eax;
    goto loc_0050985D;

loc_00509857: ;
    MEM32(0x912734) = ebx;

loc_0050985D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x114);
    PUSH32(esp, 0x871DC0);
    PUSH32(esp, 0x18);
    { uint32_t _icall_target = MEM32(0x912788); PUSH32(esp, 0x0050986Fu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00509869u); } /* indirect call */
    }

loc_0050986F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00509892; /* je: equal / zero */

loc_00509876: ;
    MEM32(eax) = ebx;
    ecx = eax + 0x10;
    MEM32(eax + 4) = ebx;
    MEM32(eax + 8) = ebx;
    MEM32(eax + 0xC) = ecx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx) = edx;
    MEM32(ecx + 4) = edx;
    MEM32(0x912758) = eax;
    goto loc_00509898;

loc_00509892: ;
    MEM32(0x912758) = ebx;

loc_00509898: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x197);
    PUSH32(esp, 0x871DC0);
    PUSH32(esp, 0x1C);
    { uint32_t _icall_target = MEM32(0x912788); PUSH32(esp, 0x005098AAu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x005098A4u); } /* indirect call */
    }

loc_005098AA: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005098E6; /* je: equal / zero */

loc_005098B1: ;
    MEM32(eax) = ebx;
    MEM32(eax + 4) = ebx;
    ecx = eax + 0xC;
    MEM32(eax + 8) = ecx;
    MEM32(ecx) = 0x8DACCC;
    MEM16(0x8DACCC) = MEM16(0x8DACCC) + 1;
    _fa = (uint32_t)(MEM16(0x8DACCC)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 4) = ebx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = 0x8DACCC;
    MEM16(0x8DACCC) = MEM16(0x8DACCC) + 1;
    _fa = (uint32_t)(MEM16(0x8DACCC)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 4) = ebx;
    MEM32(0x912750) = eax;
    goto loc_005098EC;

loc_005098E6: ;
    MEM32(0x912750) = ebx;

loc_005098EC: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4EF);
    PUSH32(esp, 0x871D80);
    PUSH32(esp, 0x11AC);
    { uint32_t _icall_target = MEM32(0x912788); PUSH32(esp, 0x00509901u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x005098FBu); } /* indirect call */
    }

loc_00509901: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00509917; /* je: equal / zero */

loc_00509908: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x00509910u); RECOMP_ABI_CALL(0x00529580u, sub_00529580); /* call 0x00529580 */

loc_00509910: ;
    MEM32(0x912738) = eax;
    goto loc_0050991D;

loc_00509917: ;
    MEM32(0x912738) = ebx;

loc_0050991D: ;
    PUSH32(esp, 0x800);
    PUSH32(esp, 0x00509927u); RECOMP_ABI_CALL(0x00510F10u, sub_00510F10); /* call 0x00510F10 */

loc_00509927: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    MEM32(0x912760) = 1;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00509940
 * Original: 0x00509940 - 0x00509953 (19 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00509940(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00509940: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 4;
    PUSH32(esp, 0x0050994Bu); RECOMP_ABI_CALL(0x00508EF0u, sub_00508EF0); /* call 0x00508EF0 */

loc_0050994B: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_005091E0(); return; /* tail jmp 0x005091E0 */

}

/**
 * sub_00509960
 * Original: 0x00509960 - 0x0050998B (43 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00509960(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00509960: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 4;
    PUSH32(esp, 0x0050996Bu); RECOMP_ABI_CALL(0x00508EF0u, sub_00508EF0); /* call 0x00508EF0 */

loc_0050996B: ;
    ecx = esi;
    PUSH32(esp, 0x00509972u); RECOMP_ABI_CALL(0x005091E0u, sub_005091E0); /* call 0x005091E0 */

loc_00509972: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00509985; /* je: equal / zero */

loc_00509979: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x18);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x912790); PUSH32(esp, 0x00509982u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0050997Cu); } /* indirect call */
    }

loc_00509982: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00509985: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00509990
 * Original: 0x00509990 - 0x00509B33 (419 bytes, 110 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00509990(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00509990: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM8(0x91334C) = 1;
    PUSH32(esp, 0x0050999Eu); RECOMP_ABI_CALL(0x00510F40u, sub_00510F40); /* call 0x00510F40 */

loc_0050999E: ;
    ecx = MEM32(0x912738);
    PUSH32(esp, 0x005099A9u); RECOMP_ABI_CALL(0x00527ED0u, sub_00527ED0); /* call 0x00527ED0 */

loc_005099A9: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x005099B0u); RECOMP_ABI_CALL(0x005089C0u, sub_005089C0); /* call 0x005089C0 */

loc_005099B0: ;
    ecx = MEM32(0x912734);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_005099D2; /* je: equal / zero */

loc_005099C1: ;
    PUSH32(esp, 0x005099C6u); RECOMP_ABI_CALL(0x0050AE00u, sub_0050AE00); /* call 0x0050AE00 */

loc_005099C6: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x912790); PUSH32(esp, 0x005099CFu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x005099C9u); } /* indirect call */
    }

loc_005099CF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005099D2: ;
    eax = MEM32(0x912758);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    esi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_005099F8; /* je: equal / zero */

loc_005099DD: ;
    ecx = eax + 4;
    PUSH32(esp, 0x005099E5u); RECOMP_ABI_CALL(0x00508EF0u, sub_00508EF0); /* call 0x00508EF0 */

loc_005099E5: ;
    ecx = esi;
    PUSH32(esp, 0x005099ECu); RECOMP_ABI_CALL(0x005091E0u, sub_005091E0); /* call 0x005091E0 */

loc_005099EC: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x18);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x912790); PUSH32(esp, 0x005099F5u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x005099EFu); } /* indirect call */
    }

loc_005099F5: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005099F8: ;
    ecx = MEM32(0x912750);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00509A15; /* je: equal / zero */

loc_00509A04: ;
    PUSH32(esp, 0x00509A09u); RECOMP_ABI_CALL(0x00508F40u, sub_00508F40); /* call 0x00508F40 */

loc_00509A09: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1C);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x912790); PUSH32(esp, 0x00509A12u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00509A0Cu); } /* indirect call */
    }

loc_00509A12: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00509A15: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00509A1Fu); RECOMP_ABI_CALL(0x0050CE60u, sub_0050CE60); /* call 0x0050CE60 */

loc_00509A1F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00509A27u); RECOMP_ABI_CALL(0x0050F480u, sub_0050F480); /* call 0x0050F480 */

loc_00509A27: ;
    PUSH32(esp, 0x00509A2Cu); RECOMP_ABI_CALL(0x005378E0u, sub_005378E0); /* call 0x005378E0 */

loc_00509A2C: ;
    PUSH32(esp, 0x00509A31u); RECOMP_ABI_CALL(0x0052A010u, sub_0052A010); /* call 0x0052A010 */

loc_00509A31: ;
    PUSH32(esp, 0x00509A36u); RECOMP_ABI_CALL(0x0052A190u, sub_0052A190); /* call 0x0052A190 */

loc_00509A36: ;
    PUSH32(esp, 0x00509A3Bu); RECOMP_ABI_CALL(0x0052A240u, sub_0052A240); /* call 0x0052A240 */

loc_00509A3B: ;
    PUSH32(esp, 0x00509A40u); RECOMP_ABI_CALL(0x005374D0u, sub_005374D0); /* call 0x005374D0 */

loc_00509A40: ;
    PUSH32(esp, 0x00509A45u); RECOMP_ABI_CALL(0x005365B0u, sub_005365B0); /* call 0x005365B0 */

loc_00509A45: ;
    PUSH32(esp, 0x00509A4Au); RECOMP_ABI_CALL(0x00536580u, sub_00536580); /* call 0x00536580 */

loc_00509A4A: ;
    PUSH32(esp, 0x00509A4Fu); RECOMP_ABI_CALL(0x00536540u, sub_00536540); /* call 0x00536540 */

loc_00509A4F: ;
    PUSH32(esp, 0x00509A54u); RECOMP_ABI_CALL(0x00531140u, sub_00531140); /* call 0x00531140 */

loc_00509A54: ;
    PUSH32(esp, 0x00509A59u); RECOMP_ABI_CALL(0x0052F3F0u, sub_0052F3F0); /* call 0x0052F3F0 */

loc_00509A59: ;
    PUSH32(esp, 0x00509A5Eu); RECOMP_ABI_CALL(0x0052A3B0u, sub_0052A3B0); /* call 0x0052A3B0 */

loc_00509A5E: ;
    PUSH32(esp, 0x00509A63u); RECOMP_ABI_CALL(0x00529BF0u, sub_00529BF0); /* call 0x00529BF0 */

loc_00509A63: ;
    PUSH32(esp, 0x00509A68u); RECOMP_ABI_CALL(0x0050CF70u, sub_0050CF70); /* call 0x0050CF70 */

loc_00509A68: ;
    ecx = MEM32(0x912770);
    PUSH32(esp, 0x00509A73u); RECOMP_ABI_CALL(0x00529A20u, sub_00529A20); /* call 0x00529A20 */

loc_00509A73: ;
    ecx = MEM32(0x912738);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00509A93; /* je: equal / zero */

loc_00509A7F: ;
    PUSH32(esp, 0x00509A84u); RECOMP_ABI_CALL(0x00529830u, sub_00529830); /* call 0x00529830 */

loc_00509A84: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x11AC);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x912790); PUSH32(esp, 0x00509A90u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00509A8Au); } /* indirect call */
    }

loc_00509A90: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00509A93: ;
    ecx = MEM32(0x912774);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    MEM32(0x912738) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_00509AB6; /* je: equal / zero */

loc_00509AA3: ;
    esi = ecx;
    PUSH32(esp, 0x00509AAAu); RECOMP_ABI_CALL(0x00529A00u, sub_00529A00); /* call 0x00529A00 */

loc_00509AAA: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xC);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x912790); PUSH32(esp, 0x00509AB3u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00509AADu); } /* indirect call */
    }

loc_00509AB3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00509AB6: ;
    eax = MEM32(0x8DAA8C);
    MEM32(0x912774) = edi;
    MEM16(eax) = MEM16(eax) - 1;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), LO16(edi) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00509AD6; /* jne: not equal / not zero */

loc_00509AC9: ;
    ecx = MEM32(0x9132E8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 4); PUSH32(esp, 0x00509AD3u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00509AD0u); } /* indirect call */
    }

loc_00509AD3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00509AD6: ;
    MEM16(0x8DACCC) = MEM16(0x8DACCC) + 1;
    _fa = (uint32_t)(MEM16(0x8DACCC)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x8DAA8C) = 0x8DACCC;
    PUSH32(esp, 0x00509AECu); RECOMP_ABI_CALL(0x00526F20u, sub_00526F20); /* call 0x00526F20 */

loc_00509AEC: ;
    ecx = MEM32(0x912770);
    PUSH32(esp, 0x00509AF7u); RECOMP_ABI_CALL(0x00529A20u, sub_00529A20); /* call 0x00529A20 */

loc_00509AF7: ;
    ecx = MEM32(0x912770);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00509B14; /* je: equal / zero */

loc_00509B03: ;
    PUSH32(esp, 0x00509B08u); RECOMP_ABI_CALL(0x00529A00u, sub_00529A00); /* call 0x00529A00 */

loc_00509B08: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xC);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x912790); PUSH32(esp, 0x00509B11u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00509B0Bu); } /* indirect call */
    }

loc_00509B11: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00509B14: ;
    ecx = 0x9132F0;
    MEM32(0x912770) = edi;
    MEM32(0x9132E8) = edi;
    PUSH32(esp, 0x00509B2Au); RECOMP_ABI_CALL(0x00516030u, sub_00516030); /* call 0x00516030 */

loc_00509B2A: ;
    MEM32(0x912760) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00509B40
 * Original: 0x00509B40 - 0x00509B44 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00509B40(void)
{

loc_00509B40: ;
    eax = MEM32(ecx + 0x48);
    esp += 4; return; /* ret */

}

/**
 * sub_00509B50
 * Original: 0x00509B50 - 0x00509B69 (25 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00509B50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00509B50: ;
    eax = MEM32(esp + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x56D);
    PUSH32(esp, 0x871D80);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x912788); PUSH32(esp, 0x00509B65u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00509B5Fu); } /* indirect call */
    }

loc_00509B65: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00509B70
 * Original: 0x00509B70 - 0x00509B86 (22 bytes, 7 insns)
 * Category: game_io
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00509B70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00509B70: ;
    eax = MEM32(esp + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x24);
    PUSH32(esp, 0x871DC0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x912788); PUSH32(esp, 0x00509B82u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00509B7Cu); } /* indirect call */
    }

loc_00509B82: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00509B90
 * Original: 0x00509B90 - 0x00509B96 (6 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00509B90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00509B90: ;
    eax = MEM32(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00509BA0
 * Original: 0x00509BA0 - 0x00509BA6 (6 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00509BA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00509BA0: ;
    eax = MEM32(ecx);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00509BB0
 * Original: 0x00509BB0 - 0x00509BB9 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00509BB0(void)
{

loc_00509BB0: ;
    eax = ecx;
    MEM32(eax) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00509BC0
 * Original: 0x00509BC0 - 0x00509BC4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00509BC0(void)
{

loc_00509BC0: ;
    eax = ecx + 4;
    esp += 4; return; /* ret */

}

/**
 * sub_00509BD0
 * Original: 0x00509BD0 - 0x00509BD4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00509BD0(void)
{

loc_00509BD0: ;
    eax = MEM32(ecx + 0x10);
    esp += 4; return; /* ret */

}

/**
 * sub_00509BE0
 * Original: 0x00509BE0 - 0x00509BE4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00509BE0(void)
{

loc_00509BE0: ;
    eax = MEM32(ecx + 0x14);
    esp += 4; return; /* ret */

}

/**
 * sub_00509BF0
 * Original: 0x00509BF0 - 0x00509C08 (24 bytes, 7 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00509BF0(void)
{

loc_00509BF0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(ecx + 0xC) = eax;
    eax = MEM32(esp + 0xC);
    MEM32(ecx + 0x10) = edx;
    MEM32(ecx + 0x14) = eax;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00509C10
 * Original: 0x00509C10 - 0x00509C29 (25 bytes, 7 insns)
 * Category: game_io
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00509C10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00509C10: ;
    eax = MEM32(esp + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xCB);
    PUSH32(esp, 0x871DC0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x912788); PUSH32(esp, 0x00509C25u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00509C1Fu); } /* indirect call */
    }

loc_00509C25: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00509C30
 * Original: 0x00509C30 - 0x00509C36 (6 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00509C30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00509C30: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(0x912790)); return; /* indirect tail jmp */

}

/**
 * sub_00509C40
 * Original: 0x00509C40 - 0x00509C44 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00509C40(void)
{

loc_00509C40: ;
    eax = MEM32(ecx + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_00509C50
 * Original: 0x00509C50 - 0x00509C54 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00509C50(void)
{

loc_00509C50: ;
    SET_LO8(eax, MEM8(ecx + 0xC));
    esp += 4; return; /* ret */

}

/**
 * sub_00509C60
 * Original: 0x00509C60 - 0x00509C6A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00509C60(void)
{

loc_00509C60: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 0xC) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00509C70
 * Original: 0x00509C70 - 0x00509C89 (25 bytes, 7 insns)
 * Category: game_io
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00509C70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00509C70: ;
    eax = MEM32(esp + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xDC);
    PUSH32(esp, 0x871DC0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x912788); PUSH32(esp, 0x00509C85u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00509C7Fu); } /* indirect call */
    }

loc_00509C85: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00509C90
 * Original: 0x00509C90 - 0x00509C96 (6 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00509C90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00509C90: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(0x912790)); return; /* indirect tail jmp */

}

/**
 * sub_00509CA0
 * Original: 0x00509CA0 - 0x00509D42 (162 bytes, 85 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00509CA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00509CA0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00509D3D; /* je: equal / zero */

loc_00509CAE: ;
    esi = MEM32(esp + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00509D3D; /* je: equal / zero */

loc_00509CBA: ;
    eax = edi;
    edx = eax + 1;
    /* nop */

loc_00509CC0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00509CC0; /* jne: not equal / not zero */

loc_00509CC7: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = eax;
    eax = esi;
    edx = eax + 1;

loc_00509CD1: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00509CD1; /* jne: not equal / not zero */

loc_00509CD8: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00509CE4; /* je: equal / zero */

loc_00509CDE: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00509CE4: ;
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00509D2F; /* jle: less or equal (signed <=) */

loc_00509CEB: ;
    edx = esi;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_00509CF0: ;
    SET_LO8(eax, MEM8(edi + edx));
    SET_LO8(ecx, MEM8(edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ecx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00509D29; /* je: equal / zero */

loc_00509CF9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x61) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x61 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00509D05; /* jl: less (signed <) */

loc_00509CFD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x7A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x7A (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00509D05; /* jg: greater (signed >) */

loc_00509D01: ;
    _fb = (uint32_t)(0xE0) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 0xE0);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    goto loc_00509D0B;

loc_00509D05: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x5C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x5C (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00509D0B; /* jne: not equal / not zero */

loc_00509D09: ;
    SET_LO8(eax, 0x2F);

loc_00509D0B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ecx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00509D29; /* je: equal / zero */

loc_00509D0F: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x61) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x61 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00509D1E; /* jl: less (signed <) */

loc_00509D14: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x7A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x7A (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00509D1E; /* jg: greater (signed >) */

loc_00509D19: ;
    _fb = (uint32_t)(0xE0) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(ecx, LO8(ecx) + 0xE0);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    goto loc_00509D25;

loc_00509D1E: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x5C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x5C (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00509D25; /* jne: not equal / not zero */

loc_00509D23: ;
    SET_LO8(ecx, 0x2F);

loc_00509D25: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ecx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00509D36; /* jne: not equal / not zero */

loc_00509D29: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00509CF0; /* jl: less (signed <) */

loc_00509D2F: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00509D36: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00509D3D: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00509D50
 * Original: 0x00509D50 - 0x00509D5C (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00509D50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00509D50: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax) = ecx;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00509D60
 * Original: 0x00509D60 - 0x00509D6C (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00509D60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00509D60: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax) = ecx;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00509D70
 * Original: 0x00509D70 - 0x00509D7C (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00509D70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00509D70: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax) = ecx;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00509D80
 * Original: 0x00509D80 - 0x00509D8C (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00509D80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00509D80: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax) = ecx;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00509D90
 * Original: 0x00509D90 - 0x00509D9A (10 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00509D90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00509D90: ;
    edx = MEM32(ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

}

/**
 * sub_00509DA0
 * Original: 0x00509DA0 - 0x00509DAD (13 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00509DA0(void)
{

loc_00509DA0: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00509DB0
 * Original: 0x00509DB0 - 0x00509DBD (13 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00509DB0(void)
{

loc_00509DB0: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00509DC0
 * Original: 0x00509DC0 - 0x00509DC3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00509DC0(void)
{

loc_00509DC0: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00509DD0
 * Original: 0x00509DD0 - 0x00509DDD (13 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00509DD0(void)
{

loc_00509DD0: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00509DE0
 * Original: 0x00509DE0 - 0x00509DEA (10 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00509DE0(void)
{

loc_00509DE0: ;
    eax = ecx;
    ecx = MEM32(eax);
    edx = MEM32(ecx + 4);
    MEM32(eax) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_00509DF0
 * Original: 0x00509DF0 - 0x00509E00 (16 bytes, 6 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00509DF0(void)
{

loc_00509DF0: ;
    edx = MEM32(ecx);
    eax = MEM32(edx + 4);
    MEM32(ecx) = eax;
    eax = MEM32(esp + 4);
    MEM32(eax) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00509E10
 * Original: 0x00509E10 - 0x00509E20 (16 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00509E10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00509E10: ;
    eax = MEM32(ecx);
    ecx = MEM32(esp + 4);
    _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(ecx)));
    eax = eax - MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00509E40
 * Original: 0x00509E40 - 0x00509E51 (17 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00509E40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00509E40: ;
    edx = MEM32(esp + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    eax = ecx;
    MEM32(eax) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_00509E4E; /* je: equal / zero */

loc_00509E4C: ;
    MEM32(edx) = MEM32(edx) + 1;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00509E4E: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00509E60
 * Original: 0x00509E60 - 0x00509E73 (19 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00509E60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00509E60: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(eax) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_00509E70; /* je: equal / zero */

loc_00509E6E: ;
    MEM32(edx) = MEM32(edx) + 1;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00509E70: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00509E80
 * Original: 0x00509E80 - 0x00509E83 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00509E80(void)
{

loc_00509E80: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00509E90
 * Original: 0x00509E90 - 0x00509EA2 (18 bytes, 6 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00509E90(void)
{

loc_00509E90: ;
    edx = MEM32(esp + 8);
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax) = ecx;
    MEM32(eax + 4) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00509EB0
 * Original: 0x00509EB0 - 0x00509EB3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00509EB0(void)
{

loc_00509EB0: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00509EC0
 * Original: 0x00509EC0 - 0x00509EC4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00509EC0(void)
{

loc_00509EC0: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_00509ED0
 * Original: 0x00509ED0 - 0x00509EDB (11 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00509ED0(void)
{

loc_00509ED0: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00509EE0
 * Original: 0x00509EE0 - 0x00509EF4 (20 bytes, 7 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00509EE0(void)
{

loc_00509EE0: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx);
    ecx = MEM32(esp + 8);
    MEM32(eax) = edx;
    MEM32(eax + 4) = ecx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00509F00
 * Original: 0x00509F00 - 0x00509F16 (22 bytes, 7 insns)
 * Category: game_io
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00509F00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00509F00: ;
    eax = MEM32(esp + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x24);
    PUSH32(esp, 0x871DC0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x912788); PUSH32(esp, 0x00509F12u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00509F0Cu); } /* indirect call */
    }

loc_00509F12: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00509F20
 * Original: 0x00509F20 - 0x00509F36 (22 bytes, 7 insns)
 * Category: game_io
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00509F20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00509F20: ;
    eax = MEM32(esp + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x24);
    PUSH32(esp, 0x871DC0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x912788); PUSH32(esp, 0x00509F32u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00509F2Cu); } /* indirect call */
    }

loc_00509F32: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00509F40
 * Original: 0x00509F40 - 0x00509F52 (18 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00509F40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00509F40: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax);
    ecx = MEM32(esp + 8);
    _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(ecx)));
    eax = eax - MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
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
 * sub_00509F60
 * Original: 0x00509F60 - 0x00509F72 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00509F60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00509F60: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx);
    ecx = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

}

/**
 * sub_00509F80
 * Original: 0x00509F80 - 0x00509FA2 (34 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00509F80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00509F80: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = edx;
    ecx = MEM32(ecx);
    MEM32(eax + 4) = ecx;
    MEM16(ecx) = MEM16(ecx) + 1;
    _fa = (uint32_t)(MEM16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + 8) = 1;
    MEM32(eax + 0x10) = edx;
    MEM32(eax + 0x14) = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00509FB0
 * Original: 0x00509FB0 - 0x00509FF0 (64 bytes, 24 insns)
 * Category: game_io
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00509FB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00509FB0: ;
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x24);
    PUSH32(esp, 0x871DC0);
    PUSH32(esp, 8);
    esi = ecx;
    { uint32_t _icall_target = MEM32(0x912788); PUSH32(esp, 0x00509FC2u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00509FBCu); } /* indirect call */
    }

loc_00509FC2: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00509FE3; /* je: equal / zero */

loc_00509FC9: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    MEM32(eax + 4) = 0;
    ecx = MEM32(esi);
    MEM32(eax + 4) = ecx;
    MEM32(esi) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00509FE3: ;
    ecx = MEM32(esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(esi) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0050A020
 * Original: 0x0050A020 - 0x0050A02D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050A020(void)
{

loc_0050A020: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0050A030
 * Original: 0x0050A030 - 0x0050A034 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050A030(void)
{

loc_0050A030: ;
    eax = MEM32(ecx + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_0050A040
 * Original: 0x0050A040 - 0x0050A049 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050A040(void)
{

loc_0050A040: ;
    eax = MEM32(ecx);
    ecx = MEM32(ecx + 8);
    eax = ecx + eax * 4;
    esp += 4; return; /* ret */

}

/**
 * sub_0050A050
 * Original: 0x0050A050 - 0x0050A179 (297 bytes, 99 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050A050(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0050A050: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x24);
    eax = MEM32(edi);
    MEM32(edi) = ecx;
    edx = MEM32(esi + 4);
    MEM32(esi) = eax;
    eax = MEM32(edi + 4);
    MEM32(edi + 4) = edx;
    ecx = MEM32(esi + 8);
    ebp = esi + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    MEM32(esi + 4) = eax;
    eax = MEM32(edi + 8);
    MEM8(esp + 0x24) = (CMP_EQ(_fa, _fb)) ? 1 : 0; /* sete */
    ebx = edi + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0050A092; /* je: equal / zero */

loc_0050A08D: ;
    MEM32(esi + 8) = ebp;
    goto loc_0050A095;

loc_0050A092: ;
    MEM32(esi + 8) = eax;

loc_0050A095: ;
    SET_LO8(eax, MEM8(esp + 0x24));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0050A0A2; /* je: equal / zero */

loc_0050A09D: ;
    MEM32(edi + 8) = ebx;
    goto loc_0050A0A5;

loc_0050A0A2: ;
    MEM32(edi + 8) = ecx;

loc_0050A0A5: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0050A0B1; /* jne: not equal / not zero */

loc_0050A0A9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0050A16F; /* je: equal / zero */

loc_0050A0B1: ;
    SET_LO16(eax, MEM16(0x8DACCC));
    SET_LO16(eax, LO16(eax) + 1);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    SET_LO16(eax, LO16(eax) + 1);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    SET_LO16(eax, LO16(eax) + 1);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    SET_LO16(eax, LO16(eax) + 1);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    SET_LO16(eax, LO16(eax) - 1);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = 0x8DACCC;
    MEM32(esp + 0x14) = 0;
    MEM16(0x8DACCC) = LO16(eax);
    if ((_fa != 0)) goto loc_0050A0EF; /* jne: not equal / not zero */

loc_0050A0D9: ;
    eax = MEM32(0x9132E8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x8DACCC);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0050A0E6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0050A0E3u); } /* indirect call */
    }

loc_0050A0E6: ;
    SET_LO16(eax, MEM16(0x8DACCC));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0050A0EF: ;
    SET_LO16(eax, LO16(eax) - 1);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x18) = 0x8DACCC;
    MEM32(esp + 0x1C) = 0;
    MEM16(0x8DACCC) = LO16(eax);
    if ((_fa != 0)) goto loc_0050A11A; /* jne: not equal / not zero */

loc_0050A109: ;
    ecx = MEM32(0x9132E8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x8DACCC);
    { uint32_t _icall_target = MEM32(ecx + 4); PUSH32(esp, 0x0050A117u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0050A114u); } /* indirect call */
    }

loc_0050A117: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0050A11A: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x1C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0050A129u); RECOMP_ABI_CALL(0x00506580u, sub_00506580); /* call 0x00506580 */

loc_0050A129: ;
    PUSH32(esp, ebp);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x1C;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0050A134u); RECOMP_ABI_CALL(0x00506580u, sub_00506580); /* call 0x00506580 */

loc_0050A134: ;
    PUSH32(esp, ebx);
    eax = esp + 0x3C;
    PUSH32(esp, eax);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0050A144u); RECOMP_ABI_CALL(0x00506580u, sub_00506580); /* call 0x00506580 */

loc_0050A144: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esp + 0x20;
    edi = 2;

loc_0050A150: ;
    eax = MEM32(esi + -8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM16(eax) = MEM16(eax) - 1;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0050A16C; /* jne: not equal / not zero */

loc_0050A15F: ;
    edx = MEM32(0x9132E8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0050A169u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0050A166u); } /* indirect call */
    }

loc_0050A169: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0050A16C: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0050A150; /* jne: not equal / not zero */

loc_0050A16F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0050A180
 * Original: 0x0050A180 - 0x0050A1B4 (52 bytes, 17 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050A180(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0050A180: ;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0050A19E; /* je: equal / zero */

loc_0050A186: ;
    eax = MEM32(esp + 8);
    /* nop */

loc_0050A190: ;
    edx = MEM32(ecx);
    _fa = (uint32_t)(MEM32(edx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 8), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0050A1AB; /* je: equal / zero */

loc_0050A197: ;
    ecx = MEM32(ecx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0050A190; /* jne: not equal / not zero */

loc_0050A19E: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0;
    esp += 12; return; /* ret 8 */

loc_0050A1AB: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = ecx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0050A1C0
 * Original: 0x0050A1C0 - 0x0050A1CA (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050A1C0(void)
{

loc_0050A1C0: ;
    PUSH32(esp, 2);
    PUSH32(esp, 3);
    PUSH32(esp, 0x0050A1C9u); RECOMP_ABI_CALL(0x00507C10u, sub_00507C10); /* call 0x00507C10 */

loc_0050A1C9: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0050A1D0
 * Original: 0x0050A1D0 - 0x0050A230 (96 bytes, 40 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050A1D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0050A1D0: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0050A1F6; /* jne: not equal / not zero */

loc_0050A1DD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0050A22C; /* je: equal / zero */

loc_0050A1E1: ;
    PUSH32(esp, edi);
    edi = MEM32(eax + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x91278C); PUSH32(esp, 0x0050A1ECu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0050A1E6u); } /* indirect call */
    }

loc_0050A1EC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0050A1F6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0050A22C; /* je: equal / zero */

loc_0050A1FA: ;
    /* nop */

loc_0050A200: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0050A20B; /* je: equal / zero */

loc_0050A207: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0050A215; /* je: equal / zero */

loc_0050A20B: ;
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0050A200; /* jne: not equal / not zero */

loc_0050A211: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0050A215: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0050A222; /* je: equal / zero */

loc_0050A21C: ;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;

loc_0050A222: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(0x91278C); PUSH32(esp, 0x0050A229u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0050A223u); } /* indirect call */
    }

loc_0050A229: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0050A22C: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0050A230
 * Original: 0x0050A230 - 0x0050A286 (86 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050A230(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0050A230: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x912734);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0050A23Fu); RECOMP_ABI_CALL(0x0050A1D0u, sub_0050A1D0); /* call 0x0050A1D0 */

loc_0050A23F: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0050A251; /* je: equal / zero */

loc_0050A247: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0050A251; /* je: equal / zero */

loc_0050A24C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0050A26D; /* jne: not equal / not zero */

loc_0050A251: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, eax);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0050A260u); RECOMP_ABI_CALL(0x00528EF0u, sub_00528EF0); /* call 0x00528EF0 */

loc_0050A260: ;
    ecx = MEM32(esi + 0x14);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(0x9127AC); PUSH32(esp, 0x0050A26Au); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0050A264u); } /* indirect call */
    }

loc_0050A26A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0050A26D: ;
    eax = MEM32(esi + 4);
    MEM16(eax) = MEM16(eax) - 1;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), 0 (16-bit) */
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0050A285; /* jne: not equal / not zero */

loc_0050A27A: ;
    edx = MEM32(0x9132E8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0050A284u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0050A281u); } /* indirect call */
    }

loc_0050A284: ;
    POP32(esp, ecx);

loc_0050A285: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0050A290
 * Original: 0x0050A290 - 0x0050A2B1 (33 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050A290(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0050A290: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0050A298u); RECOMP_ABI_CALL(0x0050A230u, sub_0050A230); /* call 0x0050A230 */

loc_0050A298: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0050A2AB; /* je: equal / zero */

loc_0050A29F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x18);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x912790); PUSH32(esp, 0x0050A2A8u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0050A2A2u); } /* indirect call */
    }

loc_0050A2A8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0050A2AB: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0050A2C0
 * Original: 0x0050A2C0 - 0x0050A2DE (30 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050A2C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0050A2C0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0050A2DC; /* je: equal / zero */

loc_0050A2C9: ;
    ecx = esi;
    PUSH32(esp, 0x0050A2D0u); RECOMP_ABI_CALL(0x0050A230u, sub_0050A230); /* call 0x0050A230 */

loc_0050A2D0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x18);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x912790); PUSH32(esp, 0x0050A2D9u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0050A2D3u); } /* indirect call */
    }

loc_0050A2D9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0050A2DC: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0050A2E0
 * Original: 0x0050A2E0 - 0x0050A331 (81 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050A2E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0050A2E0: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = esp + 0xC;
    MEM32(esp + 8) = eax;
    SET_LO16(eax, MEM16(0x8DACCC));
    MEM32(esp) = edx;
    MEM32(esp + 4) = edx;
    SET_LO16(eax, LO16(eax) + 1);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x18) = edx;
    edx = esp;
    SET_LO16(eax, LO16(eax) + 1);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edx);
    MEM32(esp + 0x10) = 0x8DACCC;
    MEM32(esp + 0x18) = 0x8DACCC;
    MEM16(0x8DACCC) = LO16(eax);
    PUSH32(esp, 0x0050A325u); RECOMP_ABI_CALL(0x0050A050u, sub_0050A050); /* call 0x0050A050 */

loc_0050A325: ;
    ecx = esp;
    PUSH32(esp, 0x0050A32Du); RECOMP_ABI_CALL(0x00508F40u, sub_00508F40); /* call 0x00508F40 */

loc_0050A32D: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0050A340
 * Original: 0x0050A340 - 0x0050A3A2 (98 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050A340(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0050A340: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0050A39C; /* je: equal / zero */

loc_0050A34D: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, edi);

loc_0050A354: ;
    esi = ebp;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0050A38A; /* je: equal / zero */

loc_0050A35D: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0050A380; /* je: equal / zero */

loc_0050A363: ;
    MEM32(eax) = MEM32(eax) - 1;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0050A380; /* jne: not equal / not zero */

loc_0050A367: ;
    edi = MEM32(esi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0050A380; /* je: equal / zero */

loc_0050A36D: ;
    ecx = edi;
    PUSH32(esp, 0x0050A374u); RECOMP_ABI_CALL(0x0050A230u, sub_0050A230); /* call 0x0050A230 */

loc_0050A374: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x18);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x912790); PUSH32(esp, 0x0050A37Du); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0050A377u); } /* indirect call */
    }

loc_0050A37D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0050A380: ;
    eax = MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0050A38A; /* je: equal / zero */

loc_0050A388: ;
    MEM32(eax) = MEM32(eax) + 1;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0050A38A: ;
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0050A354; /* jne: not equal / not zero */

loc_0050A395: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0050A39C: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0050A3B0
 * Original: 0x0050A3B0 - 0x0050A412 (98 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050A3B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0050A3B0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0050A40C; /* je: equal / zero */

loc_0050A3BD: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, edi);

loc_0050A3C4: ;
    esi = ebp;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0050A3FA; /* je: equal / zero */

loc_0050A3CD: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0050A3F0; /* je: equal / zero */

loc_0050A3D3: ;
    MEM32(eax) = MEM32(eax) - 1;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0050A3F0; /* jne: not equal / not zero */

loc_0050A3D7: ;
    edi = MEM32(esi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0050A3F0; /* je: equal / zero */

loc_0050A3DD: ;
    ecx = edi;
    PUSH32(esp, 0x0050A3E4u); RECOMP_ABI_CALL(0x0050A230u, sub_0050A230); /* call 0x0050A230 */

loc_0050A3E4: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x18);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x912790); PUSH32(esp, 0x0050A3EDu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0050A3E7u); } /* indirect call */
    }

loc_0050A3ED: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0050A3F0: ;
    eax = MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0050A3FA; /* je: equal / zero */

loc_0050A3F8: ;
    MEM32(eax) = MEM32(eax) + 1;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0050A3FA: ;
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0050A3C4; /* jne: not equal / not zero */

loc_0050A405: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0050A40C: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0050A420
 * Original: 0x0050A420 - 0x0050A485 (101 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050A420(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0050A420: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    eax = edi;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    esi = ecx + eax * 4 + -4;
    if (CMP_EQ(_fa, _fb)) goto loc_0050A47F; /* je: equal / zero */

loc_0050A441: ;
    PUSH32(esp, ebp);
    ebp = eax;

loc_0050A444: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0050A475; /* je: equal / zero */

loc_0050A448: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0050A46B; /* je: equal / zero */

loc_0050A44E: ;
    MEM32(eax) = MEM32(eax) - 1;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0050A46B; /* jne: not equal / not zero */

loc_0050A452: ;
    ebx = MEM32(esi);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0050A46B; /* je: equal / zero */

loc_0050A458: ;
    ecx = ebx;
    PUSH32(esp, 0x0050A45Fu); RECOMP_ABI_CALL(0x0050A230u, sub_0050A230); /* call 0x0050A230 */

loc_0050A45F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x18);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(0x912790); PUSH32(esp, 0x0050A468u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0050A462u); } /* indirect call */
    }

loc_0050A468: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0050A46B: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0050A475; /* je: equal / zero */

loc_0050A473: ;
    MEM32(eax) = MEM32(eax) + 1;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0050A475: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0050A444; /* jne: not equal / not zero */

loc_0050A47E: ;
    POP32(esp, ebp);

loc_0050A47F: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0050A490
 * Original: 0x0050A490 - 0x0050A57F (239 bytes, 91 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050A490(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0050A490: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x10);
    ecx = MEM32(eax + 0x28);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    MEM32(esp + 0x18) = edi;
    MEM32(esp + 0x10) = ebp;
    if (CMP_LE(_fas, _fbs)) goto loc_0050A554; /* jle: less or equal (signed <=) */

loc_0050A4B1: ;
    eax = MEM32(eax + 0x2C);
    ecx = MEM32(eax + ebp);
    PUSH32(esp, ecx);
    ecx = esp + 0x18;
    PUSH32(esp, 0x0050A4C1u); RECOMP_ABI_CALL(0x00512FC0u, sub_00512FC0); /* call 0x00512FC0 */

loc_0050A4C1: ;
    esi = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x14);
    edx = MEM32(esi + 4);
    ecx = ZX16(MEM16(eax + 2));
    ebx = ZX16(MEM16(edx + 2));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0050A4DC; /* je: equal / zero */

loc_0050A4D8: ;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_0050A4F9;

loc_0050A4DC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0050A4E4; /* jne: not equal / not zero */

loc_0050A4E0: ;
    SET_LO8(ebx, 1);
    goto loc_0050A4F9;

loc_0050A4E4: ;
    edi = edx + 8;
    esi = eax + 8;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    edi = MEM32(esp + 0x18);
    esi = MEM32(esp + 0x20);
    SET_LO8(ebx, ((_flags != 0)) ? 1 : 0); /* sete */

loc_0050A4F9: ;
    MEM16(eax) = MEM16(eax) - 1;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0050A50E; /* jne: not equal / not zero */

loc_0050A502: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(0x9132E8);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0050A50Bu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0050A508u); } /* indirect call */
    }

loc_0050A50B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0050A50E: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0050A52A; /* jne: not equal / not zero */

loc_0050A512: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(edi + 0x10);
    edx = MEM32(eax + 0x28);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x10;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    MEM32(esp + 0x10) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_0050A4B1; /* jl: less (signed <) */

loc_0050A528: ;
    goto loc_0050A558;

loc_0050A52A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0050A545; /* je: equal / zero */

loc_0050A52E: ;
    MEM32(esi) = MEM32(esi) - 1;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0050A545; /* jne: not equal / not zero */

loc_0050A532: ;
    ecx = esi;
    PUSH32(esp, 0x0050A539u); RECOMP_ABI_CALL(0x0050A230u, sub_0050A230); /* call 0x0050A230 */

loc_0050A539: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x18);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x912790); PUSH32(esp, 0x0050A542u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0050A53Cu); } /* indirect call */
    }

loc_0050A542: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0050A545: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0050A554: ;
    esi = MEM32(esp + 0x20);

loc_0050A558: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0050A573; /* je: equal / zero */

loc_0050A55C: ;
    MEM32(esi) = MEM32(esi) - 1;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0050A573; /* jne: not equal / not zero */

loc_0050A560: ;
    ecx = esi;
    PUSH32(esp, 0x0050A567u); RECOMP_ABI_CALL(0x0050A230u, sub_0050A230); /* call 0x0050A230 */

loc_0050A567: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x18);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x912790); PUSH32(esp, 0x0050A570u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0050A56Au); } /* indirect call */
    }

loc_0050A570: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0050A573: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0050A580
 * Original: 0x0050A580 - 0x0050A592 (18 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050A580(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0050A580: ;
    ecx = MEM32(ecx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = MEM32(esp + 4);
    MEM32(eax) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0050A58F; /* je: equal / zero */

loc_0050A58D: ;
    MEM32(ecx) = MEM32(ecx) + 1;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0050A58F: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0050A5A0
 * Original: 0x0050A5A0 - 0x0050A5E4 (68 bytes, 26 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050A5A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0050A5A0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    esi = ecx;
    MEM32(esi) = 0;
    MEM32(esi + 4) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0050A5B7; /* je: equal / zero */

loc_0050A5B5: ;
    MEM32(edi) = MEM32(edi) + 1;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0050A5B7: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    eax = MEM32(esp + 0x10);
    MEM32(esi + 8) = eax;
    MEM8(esi + 0xC) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_0050A5DD; /* je: equal / zero */

loc_0050A5C6: ;
    MEM32(edi) = MEM32(edi) - 1;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0050A5DD; /* jne: not equal / not zero */

loc_0050A5CA: ;
    ecx = edi;
    PUSH32(esp, 0x0050A5D1u); RECOMP_ABI_CALL(0x0050A230u, sub_0050A230); /* call 0x0050A230 */

loc_0050A5D1: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x18);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x912790); PUSH32(esp, 0x0050A5DAu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0050A5D4u); } /* indirect call */
    }

loc_0050A5DA: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0050A5DD: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0050A5F0
 * Original: 0x0050A5F0 - 0x0050A642 (82 bytes, 32 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050A5F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0050A5F0: ;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0050A60E; /* je: equal / zero */

loc_0050A5FC: ;
    /* nop */

loc_0050A600: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0050A63A; /* je: equal / zero */

loc_0050A607: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0050A600; /* jne: not equal / not zero */

loc_0050A60E: ;
    edi = MEM32(esp + 0xC);
    MEM32(edi) = 0;

loc_0050A618: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0050A633; /* je: equal / zero */

loc_0050A61C: ;
    MEM32(esi) = MEM32(esi) - 1;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0050A633; /* jne: not equal / not zero */

loc_0050A620: ;
    ecx = esi;
    PUSH32(esp, 0x0050A627u); RECOMP_ABI_CALL(0x0050A230u, sub_0050A230); /* call 0x0050A230 */

loc_0050A627: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x18);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x912790); PUSH32(esp, 0x0050A630u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0050A62Au); } /* indirect call */
    }

loc_0050A630: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0050A633: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0050A63A: ;
    edi = MEM32(esp + 0xC);
    MEM32(edi) = eax;
    goto loc_0050A618;

}

/**
 * sub_0050A650
 * Original: 0x0050A650 - 0x0050A6C7 (119 bytes, 49 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050A650(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0050A650: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    if (CMP_EQ(_fa, _fb)) goto loc_0050A680; /* je: equal / zero */

loc_0050A65C: ;
    /* nop */

loc_0050A660: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0050A66B; /* je: equal / zero */

loc_0050A669: ;
    MEM32(edi) = MEM32(edi) + 1;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0050A66B: ;
    eax = MEM32(esi);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x0050A675u); RECOMP_ABI_CALL(0x0050A490u, sub_0050A490); /* call 0x0050A490 */

loc_0050A675: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0050A6A2; /* jne: not equal / not zero */

loc_0050A679: ;
    esi = MEM32(esi + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0050A660; /* jne: not equal / not zero */

loc_0050A680: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0050A69B; /* je: equal / zero */

loc_0050A684: ;
    MEM32(edi) = MEM32(edi) - 1;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0050A69B; /* jne: not equal / not zero */

loc_0050A688: ;
    ecx = edi;
    PUSH32(esp, 0x0050A68Fu); RECOMP_ABI_CALL(0x0050A230u, sub_0050A230); /* call 0x0050A230 */

loc_0050A68F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x18);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x912790); PUSH32(esp, 0x0050A698u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0050A692u); } /* indirect call */
    }

loc_0050A698: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0050A69B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0050A6A2: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0050A6BD; /* je: equal / zero */

loc_0050A6A6: ;
    MEM32(edi) = MEM32(edi) - 1;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0050A6BD; /* jne: not equal / not zero */

loc_0050A6AA: ;
    ecx = edi;
    PUSH32(esp, 0x0050A6B1u); RECOMP_ABI_CALL(0x0050A230u, sub_0050A230); /* call 0x0050A230 */

loc_0050A6B1: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x18);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x912790); PUSH32(esp, 0x0050A6BAu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0050A6B4u); } /* indirect call */
    }

loc_0050A6BA: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0050A6BD: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0050A6D0
 * Original: 0x0050A6D0 - 0x0050A7B5 (229 bytes, 84 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050A6D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0050A6D0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    eax = ecx;
    edx = MEM32(eax + 8);
    ebx = MEM32(eax);
    { uint32_t _sv=(uint32_t)(ebx), _sc=(uint32_t)(3) & 31u;
      if (_sc) {
        ebx = _sv << _sc;
        _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, ebp);
    ecx = edx;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0050A730; /* je: equal / zero */

loc_0050A6E9: ;
    ecx = MEM32(esp + 0x20);
    edi = MEM32(ecx);
    ecx = ZX16(MEM16(edi + 2));
    MEM32(esp + 0x14) = edi;
    MEM32(esp + 0x10) = ecx;
    goto loc_0050A700;

    /* nop */

loc_0050A700: ;
    esi = MEM32(edx);
    ecx = ZX16(MEM16(esi + 2));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esp + 0x10) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0050A724; /* jne: not equal / not zero */

loc_0050A70C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0050A79B; /* je: equal / zero */

loc_0050A714: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_0050A79B; /* je: equal / zero */

loc_0050A720: ;
    edi = MEM32(esp + 0x14);

loc_0050A724: ;
    ecx = MEM32(eax + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0050A700; /* jne: not equal / not zero */

loc_0050A730: ;
    edx = MEM32(esp + 0x20);
    ecx = MEM32(edx);
    MEM32(esp + 0x14) = ecx;
    MEM16(ecx) = MEM16(ecx) + 1;
    _fa = (uint32_t)(MEM16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    ecx = MEM32(esp + 0x2C);
    edx = MEM32(eax);
    MEM32(esp + 0x18) = ecx;
    ecx = MEM32(eax + 8);
    edx = ecx + edx * 8;
    MEM32(esp + 0x20) = edx;
    ecx = esp + 0x1C;
    MEM32(esp + 0x24) = ecx;
    edx = esp + 0x14;
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    MEM32(esp + 0x2C) = edx;
    edx = esp + 0x28;
    PUSH32(esp, edx);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x0050A777u); RECOMP_ABI_CALL(0x00508FD0u, sub_00508FD0); /* call 0x00508FD0 */

loc_0050A777: ;
    eax = MEM32(esp + 0x14);
    MEM16(eax) = MEM16(eax) - 1;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0050A791; /* jne: not equal / not zero */

loc_0050A784: ;
    edx = MEM32(0x9132E8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0050A78Eu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0050A78Bu); } /* indirect call */
    }

loc_0050A78E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0050A791: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

loc_0050A79B: ;
    eax = MEM32(edx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0x24) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0050A791; /* jne: not equal / not zero */

loc_0050A7A4: ;
    ecx = MEM32(esp + 0x28);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(edx + 4) = ecx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0050A7C0
 * Original: 0x0050A7C0 - 0x0050A7D3 (19 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050A7C0(void)
{

loc_0050A7C0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 2);
    PUSH32(esp, 3);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0050A7D0u); RECOMP_ABI_CALL(0x0050A6D0u, sub_0050A6D0); /* call 0x0050A6D0 */

loc_0050A7D0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0050A7E0
 * Original: 0x0050A7E0 - 0x0050A833 (83 bytes, 36 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050A7E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0050A7E0: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0050A80E; /* je: equal / zero */

loc_0050A7E8: ;
    eax = MEM32(esp + 0x10);
    eax = MEM32(eax);
    edi = eax + 8;

loc_0050A7F1: ;
    ecx = MEM32(esi);
    edx = MEM32(ecx + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0050A800u); RECOMP_ABI_CALL(0x00509CA0u, sub_00509CA0); /* call 0x00509CA0 */

loc_0050A800: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0050A81D; /* je: equal / zero */

loc_0050A807: ;
    esi = MEM32(esi + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0050A7F1; /* jne: not equal / not zero */

loc_0050A80E: ;
    eax = MEM32(esp + 0xC);
    MEM32(eax) = 0;

loc_0050A818: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0050A81D: ;
    esi = MEM32(esi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    eax = MEM32(esp + 0xC);
    MEM32(eax) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0050A818; /* je: equal / zero */

loc_0050A829: ;
    ecx = MEM32(esi);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(esi) = ecx;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0050A840
 * Original: 0x0050A840 - 0x0050A89C (92 bytes, 35 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050A840(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0050A840: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0050A851u); RECOMP_ABI_CALL(0x0050A7E0u, sub_0050A7E0); /* call 0x0050A7E0 */

loc_0050A851: ;
    esi = MEM32(esp + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0050A870; /* je: equal / zero */

loc_0050A859: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0050A866; /* je: equal / zero */

loc_0050A861: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0050A870; /* jne: not equal / not zero */

loc_0050A866: ;
    edi = MEM32(esp + 0xC);
    MEM32(edi) = esi;
    MEM32(esi) = MEM32(esi) + 1;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0050A87E;

loc_0050A870: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = MEM32(esp + 0xC);
    MEM32(edi) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_0050A895; /* je: equal / zero */

loc_0050A87E: ;
    MEM32(esi) = MEM32(esi) - 1;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0050A895; /* jne: not equal / not zero */

loc_0050A882: ;
    ecx = esi;
    PUSH32(esp, 0x0050A889u); RECOMP_ABI_CALL(0x0050A230u, sub_0050A230); /* call 0x0050A230 */

loc_0050A889: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x18);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x912790); PUSH32(esp, 0x0050A892u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0050A88Cu); } /* indirect call */
    }

loc_0050A892: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0050A895: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0050A8A0
 * Original: 0x0050A8A0 - 0x0050A966 (198 bytes, 71 insns)
 * Category: game_io
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050A8A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0050A8A0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    edi = ecx;
    PUSH32(esp, 0x0050A8B4u); RECOMP_ABI_CALL(0x0050A7E0u, sub_0050A7E0); /* call 0x0050A7E0 */

loc_0050A8B4: ;
    esi = MEM32(esp + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0050A8C4; /* je: equal / zero */

loc_0050A8BC: ;
    edi = MEM32(esp + 0x10);
    MEM32(edi) = esi;
    goto loc_0050A93F;

loc_0050A8C4: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xCB);
    PUSH32(esp, 0x871DC0);
    PUSH32(esp, 0x18);
    { uint32_t _icall_target = MEM32(0x912788); PUSH32(esp, 0x0050A8D6u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0050A8D0u); } /* indirect call */
    }

loc_0050A8D6: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0050A928; /* je: equal / zero */

loc_0050A8DD: ;
    MEM32(eax) = 0;
    ecx = MEM32(ebx);
    MEM32(eax + 4) = ecx;
    MEM16(ecx) = MEM16(ecx) + 1;
    _fa = (uint32_t)(MEM16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + 8) = 1;
    MEM32(eax + 0x10) = 0;
    MEM32(eax + 0x14) = 0;
    ecx = MEM32(eax);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = eax;
    MEM32(eax) = ecx;

loc_0050A907: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x24);
    PUSH32(esp, 0x871DC0);
    PUSH32(esp, 8);
    { uint32_t _icall_target = MEM32(0x912788); PUSH32(esp, 0x0050A916u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0050A910u); } /* indirect call */
    }

loc_0050A916: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0050A92C; /* je: equal / zero */

loc_0050A91D: ;
    MEM32(eax) = esi;
    MEM32(eax + 4) = 0;
    goto loc_0050A92E;

loc_0050A928: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0050A907;

loc_0050A92C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0050A92E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    ecx = MEM32(edi);
    MEM32(eax + 4) = ecx;
    MEM32(edi) = eax;
    edi = MEM32(esp + 0x10);
    MEM32(edi) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0050A95E; /* je: equal / zero */

loc_0050A93F: ;
    ecx = MEM32(esi);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi) = ecx;
    eax = ecx;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi) = eax;
    if ((_fa != 0)) goto loc_0050A95E; /* jne: not equal / not zero */

loc_0050A94B: ;
    ecx = esi;
    PUSH32(esp, 0x0050A952u); RECOMP_ABI_CALL(0x0050A230u, sub_0050A230); /* call 0x0050A230 */

loc_0050A952: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x18);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x912790); PUSH32(esp, 0x0050A95Bu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0050A955u); } /* indirect call */
    }

loc_0050A95B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0050A95E: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0050A970
 * Original: 0x0050A970 - 0x0050AA92 (290 bytes, 102 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050A970(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0050A970: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(ebp + 0x10);
    edx = MEM32(ecx + 0x28);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    MEM8(esp + 7) = 1;
    MEM32(esp + 0xC) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_0050AA6F; /* jle: less or equal (signed <=) */

loc_0050A995: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    MEM32(esp + 0x24) = eax;
    PUSH32(esp, edi);
    /* nop */

loc_0050A9A0: ;
    edx = MEM32(ebp + 0x10);
    eax = MEM32(edx + 0x2C);
    ecx = MEM32(esp + 0x28);
    edx = MEM32(eax + ecx);
    PUSH32(esp, edx);
    ecx = esp + 0x18;
    PUSH32(esp, 0x0050A9B7u); RECOMP_ABI_CALL(0x00512FC0u, sub_00512FC0); /* call 0x00512FC0 */

loc_0050A9B7: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, 0x0050A9CAu); RECOMP_ABI_CALL(0x0050A7E0u, sub_0050A7E0); /* call 0x0050A7E0 */

loc_0050A9CA: ;
    esi = MEM32(esp + 0x20);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0050A9E8; /* je: equal / zero */

loc_0050A9D2: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0050A9DF; /* je: equal / zero */

loc_0050A9DA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0050A9E8; /* jne: not equal / not zero */

loc_0050A9DF: ;
    ecx = MEM32(esi);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = esi;
    MEM32(esi) = ecx;
    goto loc_0050A9EE;

loc_0050A9E8: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0050AA05; /* je: equal / zero */

loc_0050A9EE: ;
    MEM32(esi) = MEM32(esi) - 1;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0050AA05; /* jne: not equal / not zero */

loc_0050A9F2: ;
    ecx = esi;
    PUSH32(esp, 0x0050A9F9u); RECOMP_ABI_CALL(0x0050A230u, sub_0050A230); /* call 0x0050A230 */

loc_0050A9F9: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x18);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x912790); PUSH32(esp, 0x0050AA02u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0050A9FCu); } /* indirect call */
    }

loc_0050AA02: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0050AA05: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    SET_LO8(ebx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0050AA25; /* je: equal / zero */

loc_0050AA0E: ;
    MEM32(edi) = MEM32(edi) - 1;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0050AA25; /* jne: not equal / not zero */

loc_0050AA12: ;
    ecx = edi;
    PUSH32(esp, 0x0050AA19u); RECOMP_ABI_CALL(0x0050A230u, sub_0050A230); /* call 0x0050A230 */

loc_0050AA19: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x18);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x912790); PUSH32(esp, 0x0050AA22u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0050AA1Cu); } /* indirect call */
    }

loc_0050AA22: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0050AA25: ;
    eax = MEM32(esp + 0x14);
    MEM16(eax) = MEM16(eax) - 1;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0050AA3F; /* jne: not equal / not zero */

loc_0050AA32: ;
    edx = MEM32(0x9132E8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0050AA3Cu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0050AA39u); } /* indirect call */
    }

loc_0050AA3C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0050AA3F: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0050AA67; /* jne: not equal / not zero */

loc_0050AA43: ;
    eax = MEM32(esp + 0x18);
    esi = MEM32(esp + 0x28);
    ecx = MEM32(ebp + 0x10);
    edx = MEM32(ecx + 0x28);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x28) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_0050A9A0; /* jl: less (signed <) */

loc_0050AA65: ;
    goto loc_0050AA6C;

loc_0050AA67: ;
    MEM8(esp + 0x13) = 0;

loc_0050AA6C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0050AA6F: ;
    MEM32(ebp) = MEM32(ebp) - 1;
    _fa = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0050AA87; /* jne: not equal / not zero */

loc_0050AA74: ;
    ecx = ebp;
    PUSH32(esp, 0x0050AA7Bu); RECOMP_ABI_CALL(0x0050A230u, sub_0050A230); /* call 0x0050A230 */

loc_0050AA7B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x18);
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(0x912790); PUSH32(esp, 0x0050AA84u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0050AA7Eu); } /* indirect call */
    }

loc_0050AA84: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0050AA87: ;
    SET_LO8(eax, MEM8(esp + 7));
    POP32(esp, ebp);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0050AAA0
 * Original: 0x0050AAA0 - 0x0050AB48 (168 bytes, 63 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050AAA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0050AAA0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0050AAD6; /* jne: not equal / not zero */

loc_0050AAAA: ;
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0050AB43; /* je: equal / zero */

loc_0050AAB6: ;
    MEM32(esi) = MEM32(esi) - 1;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0050AB43; /* jne: not equal / not zero */

loc_0050AABE: ;
    ecx = esi;
    PUSH32(esp, 0x0050AAC5u); RECOMP_ABI_CALL(0x0050A230u, sub_0050A230); /* call 0x0050A230 */

loc_0050AAC5: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x18);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x912790); PUSH32(esp, 0x0050AACEu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0050AAC8u); } /* indirect call */
    }

loc_0050AACE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

loc_0050AAD6: ;
    esi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    MEM32(edi + 8) = 3;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0050AAF2; /* je: equal / zero */

loc_0050AAED: ;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x14) = eax;

loc_0050AAF2: ;
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x20);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0050AB05u); RECOMP_ABI_CALL(0x00528EB0u, sub_00528EB0); /* call 0x00528EB0 */

loc_0050AB05: ;
    eax = MEM32(esi + 0x14);
    MEM32(edi + 0x14) = ebp;
    MEM32(edi + 0xC) = ebx;
    MEM32(edi + 0x10) = eax;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ebp);
    if (CMP_EQ(_fa, _fb)) goto loc_0050AB1E; /* je: equal / zero */

loc_0050AB19: ;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esi + 0x14) = eax;

loc_0050AB1E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x9127B0); PUSH32(esp, 0x0050AB25u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0050AB1Fu); } /* indirect call */
    }

loc_0050AB25: ;
    eax = MEM32(edi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(edi) = eax;
    if ((_fa != 0)) goto loc_0050AB42; /* jne: not equal / not zero */

loc_0050AB2F: ;
    ecx = edi;
    PUSH32(esp, 0x0050AB36u); RECOMP_ABI_CALL(0x0050A230u, sub_0050A230); /* call 0x0050A230 */

loc_0050AB36: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x18);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x912790); PUSH32(esp, 0x0050AB3Fu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0050AB39u); } /* indirect call */
    }

loc_0050AB3F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0050AB42: ;
    POP32(esp, edi);

loc_0050AB43: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0050AB50
 * Original: 0x0050AB50 - 0x0050ACC4 (372 bytes, 125 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050AB50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0050AB50: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = ecx;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0x0050AB6Au); RECOMP_ABI_CALL(0x0050A7E0u, sub_0050A7E0); /* call 0x0050A7E0 */

loc_0050AB6A: ;
    esi = MEM32(esp + 0x20);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0050ACBA; /* je: equal / zero */

loc_0050AB78: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0050AC8C; /* je: equal / zero */

loc_0050AB84: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0050ABA3; /* jne: not equal / not zero */

loc_0050AB89: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0050AC8C; /* je: equal / zero */

loc_0050AB94: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x9127AC); PUSH32(esp, 0x0050AB9Bu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0050AB95u); } /* indirect call */
    }

loc_0050AB9B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0050AC8C;

loc_0050ABA3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0050ABB6; /* je: equal / zero */

loc_0050ABA8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0050ABB6; /* je: equal / zero */

loc_0050ABAD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0050AC8C; /* jne: not equal / not zero */

loc_0050ABB6: ;
    edx = MEM32(esi + 0x10);
    _fa = (uint32_t)(MEM32(edx + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x28), ebx (32-bit) */
    MEM32(esp + 0x14) = ebx;
    if (CMP_LE(_fas, _fbs)) goto loc_0050AC8C; /* jle: less or equal (signed <=) */

loc_0050ABC6: ;
    eax = MEM32(esi + 0x10);
    ecx = MEM32(eax + 0x2C);
    edx = MEM32(ecx + ebx);
    PUSH32(esp, edx);
    ecx = esp + 0x24;
    PUSH32(esp, 0x0050ABD9u); RECOMP_ABI_CALL(0x00512FC0u, sub_00512FC0); /* call 0x00512FC0 */

loc_0050ABD9: ;
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0x0050ABEAu); RECOMP_ABI_CALL(0x0050A7E0u, sub_0050A7E0); /* call 0x0050A7E0 */

loc_0050ABEA: ;
    eax = MEM32(esp + 0x20);
    MEM16(eax) = MEM16(eax) - 1;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0050AC04; /* jne: not equal / not zero */

loc_0050ABF7: ;
    edx = MEM32(0x9132E8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0050AC01u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0050ABFEu); } /* indirect call */
    }

loc_0050AC01: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0050AC04: ;
    edi = MEM32(esp + 0x18);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0050AC72; /* je: equal / zero */

loc_0050AC0C: ;
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = edi;
    MEM32(edi) = MEM32(edi) + 1;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = MEM32(0x912758);
    PUSH32(esp, 0x0050AC1Eu); RECOMP_ABI_CALL(0x0050A650u, sub_0050A650); /* call 0x0050A650 */

loc_0050AC1E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0050AC5B; /* jne: not equal / not zero */

loc_0050AC22: ;
    eax = MEM32(esi + 0x10);
    ecx = MEM32(eax + 0x2C);
    edx = MEM32(ecx + ebx);
    PUSH32(esp, edx);
    ecx = esp + 0x14;
    PUSH32(esp, 0x0050AC35u); RECOMP_ABI_CALL(0x00512FC0u, sub_00512FC0); /* call 0x00512FC0 */

loc_0050AC35: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x0050AC41u); RECOMP_ABI_CALL(0x0050AB50u, sub_0050AB50); /* call 0x0050AB50 */

loc_0050AC41: ;
    eax = MEM32(esp + 0x10);
    MEM16(eax) = MEM16(eax) - 1;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0050AC5B; /* jne: not equal / not zero */

loc_0050AC4E: ;
    ecx = MEM32(0x9132E8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 4); PUSH32(esp, 0x0050AC58u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0050AC55u); } /* indirect call */
    }

loc_0050AC58: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0050AC5B: ;
    MEM32(edi) = MEM32(edi) - 1;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0050AC72; /* jne: not equal / not zero */

loc_0050AC5F: ;
    ecx = edi;
    PUSH32(esp, 0x0050AC66u); RECOMP_ABI_CALL(0x0050A230u, sub_0050A230); /* call 0x0050A230 */

loc_0050AC66: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x18);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x912790); PUSH32(esp, 0x0050AC6Fu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0050AC69u); } /* indirect call */
    }

loc_0050AC6F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0050AC72: ;
    eax = MEM32(esp + 0x14);
    edx = MEM32(esi + 0x10);
    ecx = MEM32(edx + 0x28);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0050ABC6; /* jl: less (signed <) */

loc_0050AC8C: ;
    MEM32(esi) = MEM32(esi) - 1;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0050ACA3; /* jne: not equal / not zero */

loc_0050AC90: ;
    ecx = esi;
    PUSH32(esp, 0x0050AC97u); RECOMP_ABI_CALL(0x0050A230u, sub_0050A230); /* call 0x0050A230 */

loc_0050AC97: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x18);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x912790); PUSH32(esp, 0x0050ACA0u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0050AC9Au); } /* indirect call */
    }

loc_0050ACA0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0050ACA3: ;
    MEM32(esi) = MEM32(esi) - 1;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0050ACBA; /* jne: not equal / not zero */

loc_0050ACA7: ;
    ecx = esi;
    PUSH32(esp, 0x0050ACAEu); RECOMP_ABI_CALL(0x0050A230u, sub_0050A230); /* call 0x0050A230 */

loc_0050ACAE: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x18);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x912790); PUSH32(esp, 0x0050ACB7u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0050ACB1u); } /* indirect call */
    }

loc_0050ACB7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0050ACBA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0050ACD0
 * Original: 0x0050ACD0 - 0x0050ACF8 (40 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050ACD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0050ACD0: ;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0050ACF7; /* je: equal / zero */

loc_0050ACD7: ;
    MEM32(eax) = MEM32(eax) - 1;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0050ACF7; /* jne: not equal / not zero */

loc_0050ACDB: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0050ACF6; /* je: equal / zero */

loc_0050ACE3: ;
    ecx = esi;
    PUSH32(esp, 0x0050ACEAu); RECOMP_ABI_CALL(0x0050A230u, sub_0050A230); /* call 0x0050A230 */

loc_0050ACEA: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x18);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x912790); PUSH32(esp, 0x0050ACF3u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0050ACEDu); } /* indirect call */
    }

loc_0050ACF3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0050ACF6: ;
    POP32(esp, esi);

loc_0050ACF7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0050AD00
 * Original: 0x0050AD00 - 0x0050ADF4 (244 bytes, 94 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050AD00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0050AD00: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    eax = MEM32(edi);
    MEM32(edi) = ecx;
    edx = MEM32(esi + 4);
    MEM32(esi) = eax;
    eax = MEM32(edi + 4);
    MEM32(edi + 4) = edx;
    ecx = MEM32(esi + 8);
    ebx = esi + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    MEM32(esi + 4) = eax;
    eax = MEM32(edi + 8);
    MEM8(esp + 0x1C) = (CMP_EQ(_fa, _fb)) ? 1 : 0; /* sete */
    ebp = edi + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0050AD42; /* je: equal / zero */

loc_0050AD3D: ;
    MEM32(esi + 8) = ebx;
    goto loc_0050AD45;

loc_0050AD42: ;
    MEM32(esi + 8) = eax;

loc_0050AD45: ;
    SET_LO8(eax, MEM8(esp + 0x1C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0050AD52; /* je: equal / zero */

loc_0050AD4D: ;
    MEM32(edi + 8) = ebp;
    goto loc_0050AD55;

loc_0050AD52: ;
    MEM32(edi + 8) = ecx;

loc_0050AD55: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0050AD61; /* jne: not equal / not zero */

loc_0050AD59: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0050ADEA; /* je: equal / zero */

loc_0050AD61: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x10) = ecx;
    if ((_fa == 0)) goto loc_0050AD80; /* je: equal / zero */

loc_0050AD69: ;
    MEM32(ecx) = MEM32(ecx) - 1;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0050AD80; /* jne: not equal / not zero */

loc_0050AD6D: ;
    PUSH32(esp, 0x0050AD72u); RECOMP_ABI_CALL(0x0050A230u, sub_0050A230); /* call 0x0050A230 */

loc_0050AD72: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x18);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x912790); PUSH32(esp, 0x0050AD7Du); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0050AD77u); } /* indirect call */
    }

loc_0050AD7D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0050AD80: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    MEM32(esp + 0x20) = 0;
    PUSH32(esp, 0x0050AD97u); RECOMP_ABI_CALL(0x0050A340u, sub_0050A340); /* call 0x0050A340 */

loc_0050AD97: ;
    PUSH32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x14;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0050ADA2u); RECOMP_ABI_CALL(0x0050A340u, sub_0050A340); /* call 0x0050A340 */

loc_0050ADA2: ;
    PUSH32(esp, ebp);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0050ADB2u); RECOMP_ABI_CALL(0x0050A340u, sub_0050A340); /* call 0x0050A340 */

loc_0050ADB2: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esp + 0x18;
    ebx = 2;
    edi = edi;

loc_0050ADC0: ;
    eax = MEM32(esi + -4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0050ADE7; /* je: equal / zero */

loc_0050ADCA: ;
    MEM32(eax) = MEM32(eax) - 1;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0050ADE7; /* jne: not equal / not zero */

loc_0050ADCE: ;
    edi = MEM32(esi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0050ADE7; /* je: equal / zero */

loc_0050ADD4: ;
    ecx = edi;
    PUSH32(esp, 0x0050ADDBu); RECOMP_ABI_CALL(0x0050A230u, sub_0050A230); /* call 0x0050A230 */

loc_0050ADDB: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x18);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x912790); PUSH32(esp, 0x0050ADE4u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0050ADDEu); } /* indirect call */
    }

loc_0050ADE4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0050ADE7: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0050ADC0; /* jne: not equal / not zero */

loc_0050ADEA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0050AE00
 * Original: 0x0050AE00 - 0x0050AE2B (43 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050AE00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0050AE00: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0050AE23; /* je: equal / zero */

loc_0050AE09: ;
    /* nop */

loc_0050AE10: ;
    eax = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0050AE1Du); RECOMP_ABI_CALL(0x0050AB50u, sub_0050AB50); /* call 0x0050AB50 */

loc_0050AE1D: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0050AE10; /* jne: not equal / not zero */

loc_0050AE23: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00508AE0(); return; /* tail jmp 0x00508AE0 */

}

/**
 * sub_0050AE30
 * Original: 0x0050AE30 - 0x0050AE73 (67 bytes, 27 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050AE30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0050AE30: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0050AE5A; /* je: equal / zero */

loc_0050AE3A: ;
    MEM32(eax) = MEM32(eax) - 1;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0050AE5A; /* jne: not equal / not zero */

loc_0050AE3E: ;
    PUSH32(esp, edi);
    edi = MEM32(esi + 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0050AE59; /* je: equal / zero */

loc_0050AE46: ;
    ecx = edi;
    PUSH32(esp, 0x0050AE4Du); RECOMP_ABI_CALL(0x0050A230u, sub_0050A230); /* call 0x0050A230 */

loc_0050AE4D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x18);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x912790); PUSH32(esp, 0x0050AE56u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0050AE50u); } /* indirect call */
    }

loc_0050AE56: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0050AE59: ;
    POP32(esp, edi);

loc_0050AE5A: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0050AE6D; /* je: equal / zero */

loc_0050AE61: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x912790); PUSH32(esp, 0x0050AE6Au); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0050AE64u); } /* indirect call */
    }

loc_0050AE6A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0050AE6D: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0050AE80
 * Original: 0x0050AE80 - 0x0050AEF7 (119 bytes, 48 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050AE80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0050AE80: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esi + 4) (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0050AEF2; /* jle: less or equal (signed <=) */

loc_0050AE8D: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0050AE9A; /* jg: greater (signed >) */

loc_0050AE92: ;
    MEM32(esi + 4) = ebx;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0050AE9A: ;
    PUSH32(esp, edi);
    eax = ebx + 1;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0050AEA8u); RECOMP_ABI_CALL(0x00508B40u, sub_00508B40); /* call 0x00508B40 */

loc_0050AEA8: ;
    ecx = MEM32(esi);
    edi = eax;
    eax = MEM32(esi + 8);
    PUSH32(esp, edi);
    edx = eax + ecx * 4;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0050AEBAu); RECOMP_ABI_CALL(0x0050A340u, sub_0050A340); /* call 0x0050A340 */

loc_0050AEBA: ;
    eax = MEM32(esi + 8);
    ecx = esi + 0xC;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esi + 4) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_0050AED7; /* je: equal / zero */

loc_0050AECA: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0050AED4u); RECOMP_ABI_CALL(0x00508B40u, sub_00508B40); /* call 0x00508B40 */

loc_0050AED4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0050AED7: ;
    eax = MEM32(esi);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = edi + eax * 4;
    MEM32(esi + 8) = edi;
    MEM32(esp + 0x14) = 0;
    PUSH32(esp, 0x0050AEF1u); RECOMP_ABI_CALL(0x00507280u, sub_00507280); /* call 0x00507280 */

loc_0050AEF1: ;
    POP32(esp, edi);

loc_0050AEF2: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0050AF00
 * Original: 0x0050AF00 - 0x0050AF3E (62 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050AF00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0050AF00: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0050AF3C; /* je: equal / zero */

loc_0050AF09: ;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0050AF30; /* je: equal / zero */

loc_0050AF10: ;
    MEM32(eax) = MEM32(eax) - 1;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0050AF30; /* jne: not equal / not zero */

loc_0050AF14: ;
    PUSH32(esp, esi);
    esi = MEM32(edi + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0050AF2F; /* je: equal / zero */

loc_0050AF1C: ;
    ecx = esi;
    PUSH32(esp, 0x0050AF23u); RECOMP_ABI_CALL(0x0050A230u, sub_0050A230); /* call 0x0050A230 */

loc_0050AF23: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x18);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x912790); PUSH32(esp, 0x0050AF2Cu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0050AF26u); } /* indirect call */
    }

loc_0050AF2C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0050AF2F: ;
    POP32(esp, esi);

loc_0050AF30: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x912790); PUSH32(esp, 0x0050AF39u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0050AF33u); } /* indirect call */
    }

loc_0050AF39: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0050AF3C: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0050AF40
 * Original: 0x0050AF40 - 0x0050B03B (251 bytes, 98 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050AF40(void)
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

loc_0050AF40: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, ebp);
    ebp = MEM32(ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(eax);
    eax = ebp;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0xC) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0050B032; /* je: equal / zero */

loc_0050AF67: ;
    edx = MEM32(esi);
    ecx = MEM32(esi + 4);
    PUSH32(esp, edi);
    edi = edx + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    MEM32(esp + 0x14) = ecx;
    if (CMP_GE(_fas, _fbs)) goto loc_0050AFEE; /* jge: greater or equal (signed >=) */

loc_0050AF78: ;
    ecx = MEM32(esi + 8);
    ebx = ecx + edx * 4;
    edx = MEM32(esp + 0x24);
    edx = MEM32(edx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0050AF99; /* jne: not equal / not zero */

loc_0050AF88: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0050AF94u); RECOMP_ABI_CALL(0x0050A3B0u, sub_0050A3B0); /* call 0x0050A3B0 */

loc_0050AF94: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0050AFCA;

loc_0050AF99: ;
    ebp = edx;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebp = (uint32_t)(((int32_t)(int32_t)(ebp)) >> ((2) & 31u));
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ecx + ebp * 4;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0050AFADu); RECOMP_ABI_CALL(0x0050A420u, sub_0050A420); /* call 0x0050A420 */

loc_0050AFAD: ;
    ecx = MEM32(esp + 0x30);
    edx = MEM32(ecx);
    eax = MEM32(esp + 0x2C);
    ecx = MEM32(eax);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x2C);
    eax = MEM32(edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0050AFC7u); RECOMP_ABI_CALL(0x0050A3B0u, sub_0050A3B0); /* call 0x0050A3B0 */

loc_0050AFC7: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0050AFCA: ;
    edx = MEM32(esi + 8);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    ecx = edx + edi * 4;
    MEM32(esp + 0x28) = 0;
    PUSH32(esp, 0x0050AFE2u); RECOMP_ABI_CALL(0x00507280u, sub_00507280); /* call 0x00507280 */

loc_0050AFE2: ;
    MEM32(esi) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_0050AFEE: ;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    PUSH32(esp, 0x0050AFF9u); RECOMP_ABI_CALL(0x005CBF44u, sub_005CBF44); /* call 0x005CBF44 */

loc_0050AFF9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0050AFFF; /* jge: greater or equal (signed >=) */

loc_0050AFFD: ;
    eax = edi;

loc_0050AFFF: ;
    edx = MEM32(esp + 0x24);
    ecx = MEM32(esi + 8);
    edi = MEM32(edx);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    ecx = esi;
    edi = (uint32_t)(((int32_t)(int32_t)(edi)) >> ((2) & 31u));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    PUSH32(esp, 0x0050B015u); RECOMP_ABI_CALL(0x0050AE80u, sub_0050AE80); /* call 0x0050AE80 */

loc_0050B015: ;
    eax = MEM32(esi + 8);
    edx = MEM32(esp + 0x1C);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    eax = eax + edi * 4;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(esp + 0x30) = eax;
    PUSH32(esp, 0x0050B031u); RECOMP_ABI_CALL(0x0050AF40u, sub_0050AF40); /* call 0x0050AF40 */

loc_0050B031: ;
    POP32(esp, edi);

loc_0050B032: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0050B040
 * Original: 0x0050B040 - 0x0050B076 (54 bytes, 18 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050B040(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0050B040: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(ecx + 8);
    eax = MEM32(ecx);
    eax = edx + eax * 4;
    MEM32(esp) = eax;
    eax = MEM32(esp + 0xC);
    edx = eax + 4;
    MEM32(esp + 4) = eax;
    eax = esp;
    PUSH32(esp, eax);
    MEM32(esp + 0x10) = edx;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0050B070u); RECOMP_ABI_CALL(0x0050AF40u, sub_0050AF40); /* call 0x0050AF40 */

loc_0050B070: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0050B080
 * Original: 0x0050B080 - 0x0050B0A4 (36 bytes, 13 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050B080(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0050B080: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(eax) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0050B09A; /* je: equal / zero */

loc_0050B08E: ;
    MEM32(ecx) = MEM32(ecx) + 1;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = MEM32(esp + 8);
    MEM32(eax + 4) = edx;
    esp += 12; return; /* ret 8 */

loc_0050B09A: ;
    ecx = MEM32(esp + 8);
    MEM32(eax + 4) = ecx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0050B0B0
 * Original: 0x0050B0B0 - 0x0050B14C (156 bytes, 59 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050B0B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0050B0B0: ;
    eax = MEM32(ecx + 0xC);
    edx = MEM32(ecx + 4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    esi = MEM32(ecx + 8);
    edx = esi + edx * 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0050B0E1; /* je: equal / zero */

loc_0050B0C8: ;
    esi = MEM32(ecx);
    edx = MEM32(esp + 0x18);
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        esi = _sv << _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }

loc_0050B0D1: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0050B13F; /* je: equal / zero */

loc_0050B0D5: ;
    edi = MEM32(ecx + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0050B0D1; /* jne: not equal / not zero */

loc_0050B0E1: ;
    edx = MEM32(ecx + 8);
    eax = MEM32(ecx);
    eax = edx + eax * 4;
    MEM32(esp + 8) = eax;
    edx = esp + 0x1C;
    MEM32(esp + 0xC) = edx;
    eax = esp + 0x18;
    edx = esp + 8;
    PUSH32(esp, edx);
    MEM32(esp + 0x14) = eax;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0050B111u); RECOMP_ABI_CALL(0x0050AF40u, sub_0050AF40); /* call 0x0050AF40 */

loc_0050B111: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0050B137; /* je: equal / zero */

loc_0050B119: ;
    MEM32(eax) = MEM32(eax) - 1;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0050B11B: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0050B137; /* jne: not equal / not zero */

loc_0050B120: ;
    ecx = MEM32(esp + 0x18);
    esi = ecx;
    PUSH32(esp, 0x0050B12Bu); RECOMP_ABI_CALL(0x0050A230u, sub_0050A230); /* call 0x0050A230 */

loc_0050B12B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x18);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x912790); PUSH32(esp, 0x0050B134u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0050B12Eu); } /* indirect call */
    }

loc_0050B134: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0050B137: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0050B13F: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0050B137; /* je: equal / zero */

loc_0050B143: ;
    esi = MEM32(edx);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    MEM32(edx) = esi;
    goto loc_0050B11B;

}

/**
 * sub_0050B150
 * Original: 0x0050B150 - 0x0050B1A6 (86 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050B150(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0050B150: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0050B160; /* je: equal / zero */

loc_0050B15E: ;
    MEM32(esi) = MEM32(esi) + 1;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0050B160: ;
    ecx = MEM32(0x912758);
    PUSH32(esp, 0x0050B16Bu); RECOMP_ABI_CALL(0x0050B0B0u, sub_0050B0B0); /* call 0x0050B0B0 */

loc_0050B16B: ;
    eax = MEM32(0x91273C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0050B189; /* je: equal / zero */

loc_0050B174: ;
    ecx = MEM32(0x912750);
    PUSH32(esp, 2);
    PUSH32(esp, 3);
    PUSH32(esp, 1);
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0050B189u); RECOMP_ABI_CALL(0x0050A6D0u, sub_0050A6D0); /* call 0x0050A6D0 */

loc_0050B189: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0050B1A4; /* je: equal / zero */

loc_0050B18D: ;
    MEM32(esi) = MEM32(esi) - 1;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0050B1A4; /* jne: not equal / not zero */

loc_0050B191: ;
    ecx = esi;
    PUSH32(esp, 0x0050B198u); RECOMP_ABI_CALL(0x0050A230u, sub_0050A230); /* call 0x0050A230 */

loc_0050B198: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x18);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x912790); PUSH32(esp, 0x0050B1A1u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0050B19Bu); } /* indirect call */
    }

loc_0050B1A1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0050B1A4: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0050B1B0
 * Original: 0x0050B1B0 - 0x0050B1F6 (70 bytes, 27 insns)
 * Category: game_io
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050B1B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0050B1B0: ;
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x24);
    PUSH32(esp, 0x871DC0);
    PUSH32(esp, 8);
    esi = ecx;
    { uint32_t _icall_target = MEM32(0x912788); PUSH32(esp, 0x0050B1C2u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0050B1BCu); } /* indirect call */
    }

loc_0050B1C2: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0050B1E9; /* je: equal / zero */

loc_0050B1C9: ;
    ecx = MEM32(esp + 8);
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(eax) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0050B1D7; /* je: equal / zero */

loc_0050B1D5: ;
    MEM32(ecx) = MEM32(ecx) + 1;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0050B1D7: ;
    MEM32(eax + 4) = 0;
    edx = MEM32(esi);
    MEM32(eax + 4) = edx;
    MEM32(esi) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0050B1E9: ;
    edx = MEM32(esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = edx;
    MEM32(esi) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0050B200
 * Original: 0x0050B200 - 0x0050B237 (55 bytes, 22 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050B200(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0050B200: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0050B210; /* je: equal / zero */

loc_0050B20E: ;
    MEM32(esi) = MEM32(esi) + 1;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0050B210: ;
    PUSH32(esp, 0x0050B215u); RECOMP_ABI_CALL(0x0050B150u, sub_0050B150); /* call 0x0050B150 */

loc_0050B215: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0050B233; /* je: equal / zero */

loc_0050B21C: ;
    MEM32(esi) = MEM32(esi) - 1;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0050B233; /* jne: not equal / not zero */

loc_0050B220: ;
    ecx = esi;
    PUSH32(esp, 0x0050B227u); RECOMP_ABI_CALL(0x0050A230u, sub_0050A230); /* call 0x0050A230 */

loc_0050B227: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x18);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x912790); PUSH32(esp, 0x0050B230u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0050B22Au); } /* indirect call */
    }

loc_0050B230: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0050B233: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0050B240
 * Original: 0x0050B240 - 0x0050B464 (548 bytes, 191 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050B240(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0050B240: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = ecx;

loc_0050B246: ;
    edi = MEM32(ebp);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0050B45F; /* je: equal / zero */

loc_0050B253: ;
    esi = MEM32(edi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0050B260; /* je: equal / zero */

loc_0050B259: ;
    MEM32(esi) = MEM32(esi) + 1;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0050B260;

    /* nop */

loc_0050B260: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0050B28B; /* jne: not equal / not zero */

loc_0050B268: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    MEM32(esi + 8) = 2;
    eax = esp;
    MEM32(eax) = esi;
    MEM32(esi) = MEM32(esi) + 1;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(esi + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x9127A8); PUSH32(esp, 0x0050B283u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0050B27Du); } /* indirect call */
    }

loc_0050B283: ;
    edi = MEM32(ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0050B260;

loc_0050B28B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0050B3E9; /* je: equal / zero */

loc_0050B294: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0050B3D7; /* jne: not equal / not zero */

loc_0050B29D: ;
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = esi;
    edx = MEM32(esi);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ebp;
    MEM32(esi) = edx;
    PUSH32(esp, 0x0050B2AEu); RECOMP_ABI_CALL(0x0050A970u, sub_0050A970); /* call 0x0050A970 */

loc_0050B2AE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0050B3E9; /* je: equal / zero */

loc_0050B2B6: ;
    ecx = MEM32(esi + 0x14);
    eax = MEM32(esi + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = eax + 8;
    MEM32(esi + 8) = 4;
    SET_LO8(ebx, 1);
    PUSH32(esp, 0x0050B2CFu); RECOMP_ABI_CALL(0x00527D30u, sub_00527D30); /* call 0x00527D30 */

loc_0050B2CF: ;
    eax = MEM32(esi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi) = eax;
    PUSH32(esp, ecx);
    edi = eax;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi) = edi;
    eax = esp;
    MEM32(eax) = esi;
    MEM32(esi) = MEM32(esi) + 1;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = MEM32(0x912758);
    PUSH32(esp, 0x0050B2EBu); RECOMP_ABI_CALL(0x0050B0B0u, sub_0050B0B0); /* call 0x0050B0B0 */

loc_0050B2EB: ;
    eax = MEM32(0x91273C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0050B309; /* je: equal / zero */

loc_0050B2F4: ;
    ecx = MEM32(0x912750);
    PUSH32(esp, 2);
    PUSH32(esp, 3);
    PUSH32(esp, 1);
    edx = esi + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0050B309u); RECOMP_ABI_CALL(0x0050A6D0u, sub_0050A6D0); /* call 0x0050A6D0 */

loc_0050B309: ;
    MEM32(esi) = MEM32(esi) - 1;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0050B36C; /* jne: not equal / not zero */

loc_0050B30D: ;
    ecx = MEM32(0x912734);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0050B319u); RECOMP_ABI_CALL(0x0050A1D0u, sub_0050A1D0); /* call 0x0050A1D0 */

loc_0050B319: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0050B32B; /* je: equal / zero */

loc_0050B321: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0050B32B; /* je: equal / zero */

loc_0050B326: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0050B347; /* jne: not equal / not zero */

loc_0050B32B: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, eax);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0050B33Au); RECOMP_ABI_CALL(0x00528EF0u, sub_00528EF0); /* call 0x00528EF0 */

loc_0050B33A: ;
    ecx = MEM32(esi + 0x14);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(0x9127AC); PUSH32(esp, 0x0050B344u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0050B33Eu); } /* indirect call */
    }

loc_0050B344: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0050B347: ;
    eax = MEM32(esi + 4);
    MEM16(eax) = MEM16(eax) - 1;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0050B360; /* jne: not equal / not zero */

loc_0050B353: ;
    edx = MEM32(0x9132E8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0050B35Du); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0050B35Au); } /* indirect call */
    }

loc_0050B35D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0050B360: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x18);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x912790); PUSH32(esp, 0x0050B369u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0050B363u); } /* indirect call */
    }

loc_0050B369: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0050B36C: ;
    MEM32(esi) = MEM32(esi) - 1;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0050B3E1; /* jne: not equal / not zero */

loc_0050B370: ;
    ecx = MEM32(0x912734);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0050B37Cu); RECOMP_ABI_CALL(0x0050A1D0u, sub_0050A1D0); /* call 0x0050A1D0 */

loc_0050B37C: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0050B38E; /* je: equal / zero */

loc_0050B384: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0050B38E; /* je: equal / zero */

loc_0050B389: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0050B3AA; /* jne: not equal / not zero */

loc_0050B38E: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, eax);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0050B39Du); RECOMP_ABI_CALL(0x00528EF0u, sub_00528EF0); /* call 0x00528EF0 */

loc_0050B39D: ;
    ecx = MEM32(esi + 0x14);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(0x9127AC); PUSH32(esp, 0x0050B3A7u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0050B3A1u); } /* indirect call */
    }

loc_0050B3A7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0050B3AA: ;
    eax = MEM32(esi + 4);
    MEM16(eax) = MEM16(eax) - 1;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0050B3C3; /* jne: not equal / not zero */

loc_0050B3B6: ;
    edx = MEM32(0x9132E8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0050B3C0u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0050B3BDu); } /* indirect call */
    }

loc_0050B3C0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0050B3C3: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x18);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x912790); PUSH32(esp, 0x0050B3CCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0050B3C6u); } /* indirect call */
    }

loc_0050B3CC: ;
    edi = MEM32(ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0050B260;

loc_0050B3D7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0050B3E9; /* je: equal / zero */

loc_0050B3DC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0050B3E9; /* je: equal / zero */

loc_0050B3E1: ;
    edi = MEM32(ebp);
    goto loc_0050B260;

loc_0050B3E9: ;
    MEM32(esi) = MEM32(esi) - 1;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0050B44C; /* jne: not equal / not zero */

loc_0050B3ED: ;
    ecx = MEM32(0x912734);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0050B3F9u); RECOMP_ABI_CALL(0x0050A1D0u, sub_0050A1D0); /* call 0x0050A1D0 */

loc_0050B3F9: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0050B40B; /* je: equal / zero */

loc_0050B401: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0050B40B; /* je: equal / zero */

loc_0050B406: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0050B427; /* jne: not equal / not zero */

loc_0050B40B: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, eax);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0050B41Au); RECOMP_ABI_CALL(0x00528EF0u, sub_00528EF0); /* call 0x00528EF0 */

loc_0050B41A: ;
    ecx = MEM32(esi + 0x14);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(0x9127AC); PUSH32(esp, 0x0050B424u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0050B41Eu); } /* indirect call */
    }

loc_0050B424: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0050B427: ;
    eax = MEM32(esi + 4);
    MEM16(eax) = MEM16(eax) - 1;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0050B440; /* jne: not equal / not zero */

loc_0050B433: ;
    edx = MEM32(0x9132E8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0050B43Du); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0050B43Au); } /* indirect call */
    }

loc_0050B43D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0050B440: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x18);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x912790); PUSH32(esp, 0x0050B449u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0050B443u); } /* indirect call */
    }

loc_0050B449: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0050B44C: ;
    edi = MEM32(edi + 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0050B253; /* jne: not equal / not zero */

loc_0050B457: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0050B246; /* jne: not equal / not zero */

loc_0050B45F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0050B470
 * Original: 0x0050B470 - 0x0050B7C4 (852 bytes, 271 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050B470(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0050B470: ;
    _fb = (uint32_t)(0x13C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x13C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = ecx;
    ecx = MEM32(0x912734);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x40) = ebp;
    MEM32(esp + 0x10) = edi;
    PUSH32(esp, 0x0050B491u); RECOMP_ABI_CALL(0x0050B240u, sub_0050B240); /* call 0x0050B240 */

loc_0050B491: ;
    _fa = (uint32_t)(MEM32(0x91273C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x91273C), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0050B4B0; /* je: equal / zero */

loc_0050B499: ;
    ecx = MEM32(0x912750);
    PUSH32(esp, 2);
    PUSH32(esp, 3);
    PUSH32(esp, 0x0050B4A8u); RECOMP_ABI_CALL(0x00507C10u, sub_00507C10); /* call 0x00507C10 */

loc_0050B4A8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0050B7B9; /* je: equal / zero */

loc_0050B4B0: ;
    eax = MEM32(ebp + 4);
    edx = MEM32(ebp + 0xC);
    esi = MEM32(ebp + 0xC);
    ebx = ebp + 4;
    ecx = eax;
    MEM32(esp + 0x44) = eax;
    eax = edx + ecx * 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    MEM32(esp + 0x3C) = ebx;
    MEM32(esp + 0x1C) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0050B724; /* je: equal / zero */

loc_0050B4D5: ;
    edi = MEM32(esi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esp + 0x14) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0050B4E1; /* je: equal / zero */

loc_0050B4DF: ;
    MEM32(edi) = MEM32(edi) + 1;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0050B4E1: ;
    eax = MEM32(ebp);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x18) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0050B6A5; /* je: equal / zero */

loc_0050B4F0: ;
    ecx = MEM32(esp + 0x18);
    ebp = MEM32(ecx);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0050B4FD; /* je: equal / zero */

loc_0050B4FA: ;
    MEM32(ebp) = MEM32(ebp) + 1;
    _fa = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0050B4FD: ;
    ecx = MEM32(esp + 0x10);
    esi = MEM32(ebp + 4);
    ecx = ecx | 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 0x10) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0050B511; /* je: equal / zero */

loc_0050B50F: ;
    MEM32(esi) = MEM32(esi) + 1;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0050B511: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0050B520; /* jne: not equal / not zero */

loc_0050B515: ;
    SET_LO8(eax, MEM8(ebp + 0xC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0050B520; /* jne: not equal / not zero */

loc_0050B51C: ;
    SET_LO8(ebx, 1);
    goto loc_0050B522;

loc_0050B520: ;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_0050B522: ;
    _fa = (uint32_t)(MEM8(esp + 0x10)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x10), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0050B54F; /* je: equal / zero */

loc_0050B529: ;
    ecx = MEM32(esp + 0x10);
    ecx = ecx & 0xFFFFFFFEu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 0x10) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0050B54F; /* je: equal / zero */

loc_0050B538: ;
    MEM32(esi) = MEM32(esi) - 1;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0050B54F; /* jne: not equal / not zero */

loc_0050B53C: ;
    ecx = esi;
    PUSH32(esp, 0x0050B543u); RECOMP_ABI_CALL(0x0050A230u, sub_0050A230); /* call 0x0050A230 */

loc_0050B543: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x18);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x912790); PUSH32(esp, 0x0050B54Cu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0050B546u); } /* indirect call */
    }

loc_0050B54C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0050B54F: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0050B650; /* je: equal / zero */

loc_0050B557: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x56D);
    PUSH32(esp, 0x871D80);
    PUSH32(esp, 0x38);
    { uint32_t _icall_target = MEM32(0x912788); PUSH32(esp, 0x0050B569u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0050B563u); } /* indirect call */
    }

loc_0050B569: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0050B586; /* je: equal / zero */

loc_0050B570: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0050B57B; /* je: equal / zero */

loc_0050B579: ;
    MEM32(edi) = MEM32(edi) + 1;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0050B57B: ;
    ecx = eax;
    PUSH32(esp, 0x0050B582u); RECOMP_ABI_CALL(0x005294A0u, sub_005294A0); /* call 0x005294A0 */

loc_0050B582: ;
    edi = eax;
    goto loc_0050B588;

loc_0050B586: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0050B588: ;
    esi = MEM32(ebp + 8);
    PUSH32(esp, 0x0050B590u); RECOMP_ABI_CALL(0x00505F40u, sub_00505F40); /* call 0x00505F40 */

loc_0050B590: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0050B5A4; /* jne: not equal / not zero */

loc_0050B594: ;
    ecx = edi;
    PUSH32(esp, 0x0050B59Bu); RECOMP_ABI_CALL(0x00527D10u, sub_00527D10); /* call 0x00527D10 */

loc_0050B59B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0050B5A1u); RECOMP_ABI_CALL(0x00505F30u, sub_00505F30); /* call 0x00505F30 */

loc_0050B5A1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0050B5A4: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x0050B5ADu); RECOMP_ABI_CALL(0x0053C8F0u, sub_0053C8F0); /* call 0x0053C8F0 */

loc_0050B5AD: ;
    edx = MEM32(esi + 4);
    edx = edx & 0xFFFFFFD2u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx | 0x8012;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0x48) = edi;
    MEM32(esi + 4) = edx;
    MEM32(edi + 0x18) = 0xFFFFFFFFu;
    eax = MEM32(esi + 0x48);
    edx = MEM32(eax + 0x1C);
    edx = edx | 0x1000000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = esi;
    MEM32(eax + 0x1C) = edx;
    PUSH32(esp, 0x0050B5DCu); RECOMP_ABI_CALL(0x0053D620u, sub_0053D620); /* call 0x0053D620 */

loc_0050B5DC: ;
    MEM8(ebp + 0xC) = 1;
    eax = MEM32(0x9127B4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0050B600; /* je: equal / zero */

loc_0050B5E9: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(esp + 0x14);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(edx + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0050B5FDu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0050B5FBu); } /* indirect call */
    }

loc_0050B5FD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0050B600: ;
    eax = MEM32(0x912768);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0050B64C; /* je: equal / zero */

loc_0050B609: ;
    edx = MEM32(esp + 0x14);
    eax = MEM32(edx + 4);
    esi = ZX16(MEM16(eax + 2));
    ecx = MEM32(0x912754);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x4D;
    MEM32(esp + 0x48) = ecx;
    MEM8(esp + 0x4C) = 6;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_0050B630: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(eax + edx) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0050B630; /* jne: not equal / not zero */

loc_0050B63A: ;
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 6;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x48;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(0x9127A0); PUSH32(esp, 0x0050B649u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0050B643u); } /* indirect call */
    }

loc_0050B649: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0050B64C: ;
    edi = MEM32(esp + 0x14);

loc_0050B650: ;
    MEM32(ebp) = MEM32(ebp) - 1;
    _fa = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0050B686; /* jne: not equal / not zero */

loc_0050B655: ;
    eax = MEM32(ebp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0050B67A; /* je: equal / zero */

loc_0050B65C: ;
    MEM32(eax) = MEM32(eax) - 1;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0050B67A; /* jne: not equal / not zero */

loc_0050B660: ;
    esi = MEM32(ebp + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0050B67A; /* je: equal / zero */

loc_0050B667: ;
    ecx = esi;
    PUSH32(esp, 0x0050B66Eu); RECOMP_ABI_CALL(0x0050A230u, sub_0050A230); /* call 0x0050A230 */

loc_0050B66E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x18);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x912790); PUSH32(esp, 0x0050B677u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0050B671u); } /* indirect call */
    }

loc_0050B677: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0050B67A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(0x912790); PUSH32(esp, 0x0050B683u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0050B67Du); } /* indirect call */
    }

loc_0050B683: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0050B686: ;
    eax = MEM32(esp + 0x18);
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x18) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0050B4F0; /* jne: not equal / not zero */

loc_0050B699: ;
    ebx = MEM32(esp + 0x3C);
    ebp = MEM32(esp + 0x40);
    esi = MEM32(esp + 0x1C);

loc_0050B6A5: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0050B70B; /* je: equal / zero */

loc_0050B6A9: ;
    MEM32(edi) = MEM32(edi) - 1;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0050B70B; /* jne: not equal / not zero */

loc_0050B6AD: ;
    ecx = MEM32(0x912734);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0050B6B9u); RECOMP_ABI_CALL(0x0050A1D0u, sub_0050A1D0); /* call 0x0050A1D0 */

loc_0050B6B9: ;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0050B6CB; /* je: equal / zero */

loc_0050B6C1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0050B6CB; /* je: equal / zero */

loc_0050B6C6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0050B6E7; /* jne: not equal / not zero */

loc_0050B6CB: ;
    ecx = MEM32(edi + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 0x10);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0050B6DAu); RECOMP_ABI_CALL(0x00528EF0u, sub_00528EF0); /* call 0x00528EF0 */

loc_0050B6DA: ;
    edx = MEM32(edi + 0x14);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(0x9127AC); PUSH32(esp, 0x0050B6E4u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0050B6DEu); } /* indirect call */
    }

loc_0050B6E4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0050B6E7: ;
    eax = MEM32(edi + 4);
    MEM16(eax) = MEM16(eax) - 1;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0050B6FF; /* jne: not equal / not zero */

loc_0050B6F3: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(0x9132E8);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0050B6FCu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0050B6F9u); } /* indirect call */
    }

loc_0050B6FC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0050B6FF: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x18);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x912790); PUSH32(esp, 0x0050B708u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0050B702u); } /* indirect call */
    }

loc_0050B708: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0050B70B: ;
    ecx = MEM32(ebx);
    edx = MEM32(ebx + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edx + ecx * 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    MEM32(esp + 0x1C) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_0050B4D5; /* jne: not equal / not zero */

loc_0050B722: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0050B724: ;
    _fa = (uint32_t)(MEM32(0x91273C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x91273C), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0050B779; /* je: equal / zero */

loc_0050B72C: ;
    ecx = MEM32(0x912750);
    edx = esp + 0x2C;
    MEM32(esp + 0x28) = edx;
    eax = edx;
    MEM32(esp + 0x20) = edi;
    MEM32(esp + 0x24) = edi;
    edx = 2;
    /* nop */

loc_0050B750: ;
    MEM32(eax) = 0x8DACCC;
    MEM16(0x8DACCC) = MEM16(0x8DACCC) + 1;
    _fa = (uint32_t)(MEM16(0x8DACCC)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + 4) = edi;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0050B750; /* jne: not equal / not zero */

loc_0050B766: ;
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0050B770u); RECOMP_ABI_CALL(0x0050A050u, sub_0050A050); /* call 0x0050A050 */

loc_0050B770: ;
    ecx = esp + 0x20;
    PUSH32(esp, 0x0050B779u); RECOMP_ABI_CALL(0x00508F40u, sub_00508F40); /* call 0x00508F40 */

loc_0050B779: ;
    _fa = (uint32_t)(MEM32(esp + 0x44)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x44), edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0050B7B9; /* jle: less or equal (signed <=) */

loc_0050B77F: ;
    ecx = esp + 0x2C;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = esp + 0x20;
    MEM32(esp + 0x28) = ecx;
    MEM32(esp + 0x2C) = edx;
    PUSH32(esp, eax);
    ecx = ebx;
    MEM32(esp + 0x24) = edi;
    MEM32(esp + 0x28) = edi;
    MEM32(esp + 0x34) = edx;
    PUSH32(esp, 0x0050B7A5u); RECOMP_ABI_CALL(0x0050AD00u, sub_0050AD00); /* call 0x0050AD00 */

loc_0050B7A5: ;
    ecx = MEM32(0x912738);
    PUSH32(esp, 0x0050B7B0u); RECOMP_ABI_CALL(0x005282D0u, sub_005282D0); /* call 0x005282D0 */

loc_0050B7B0: ;
    ecx = esp + 0x20;
    PUSH32(esp, 0x0050B7B9u); RECOMP_ABI_CALL(0x00508EF0u, sub_00508EF0); /* call 0x00508EF0 */

loc_0050B7B9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x13C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x13C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}
