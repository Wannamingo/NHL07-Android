/**
 * nhl_07_recomp - Recompiled code chunk 166
 * Functions: 250 (0x003393F0 - 0x00343790)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_003393F0
 * Original: 0x003393F0 - 0x00339405 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003393F0(void)
{

loc_003393F0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7BB384);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00339404u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00339402u); } /* indirect call */
    }

loc_00339404: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00339410
 * Original: 0x00339410 - 0x0033942B (27 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00339410(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00339410: ;
    eax = MEM32(ecx);
    ecx = ZX8(MEM8(eax + 0x13));
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x14);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    POP32(esp, edi);
    SET_LO8(eax, ((_flags != 0)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00339440
 * Original: 0x00339440 - 0x0033945B (27 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00339440(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00339440: ;
    eax = MEM32(ecx);
    ecx = ZX8(MEM8(eax + 0x13));
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x14);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    POP32(esp, edi);
    SET_LO8(eax, ((_flags == 0)) ? 1 : 0); /* setne */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00339470
 * Original: 0x00339470 - 0x00339485 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00339470(void)
{

loc_00339470: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7BB384);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00339484u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00339482u); } /* indirect call */
    }

loc_00339484: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00339490
 * Original: 0x00339490 - 0x003394AB (27 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00339490(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00339490: ;
    eax = MEM32(ecx);
    ecx = ZX8(MEM8(eax + 0x13));
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x14);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    POP32(esp, edi);
    SET_LO8(eax, ((_flags != 0)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003394C0
 * Original: 0x003394C0 - 0x003394D5 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003394C0(void)
{

loc_003394C0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7BB384);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003394D4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003394D2u); } /* indirect call */
    }

loc_003394D4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003394E0
 * Original: 0x003394E0 - 0x003394F5 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003394E0(void)
{

loc_003394E0: ;
    edx = MEM32(esp + 8);
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003394F4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003394F2u); } /* indirect call */
    }

loc_003394F4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00339500
 * Original: 0x00339500 - 0x00339511 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00339500(void)
{

loc_00339500: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00339510u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033950Du); } /* indirect call */
    }

loc_00339510: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00339520
 * Original: 0x00339520 - 0x0033954E (46 bytes, 19 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00339520(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00339520: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    esi = ecx;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x4F4B17B);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00339545u); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_00339545: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00339560
 * Original: 0x00339560 - 0x00339567 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00339560(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00339560: ;
    ecx = MEM32(ecx);
    g_seh_ebp = ebp; sub_0001A975(); return; /* tail jmp 0x0001A975 */

}

/**
 * sub_00339570
 * Original: 0x00339570 - 0x00339585 (21 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00339570(void)
{

loc_00339570: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033957Fu); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_0033957F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00339590
 * Original: 0x00339590 - 0x003395A5 (21 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00339590(void)
{

loc_00339590: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033959Fu); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_0033959F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003395B0
 * Original: 0x003395B0 - 0x003395C5 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003395B0(void)
{

loc_003395B0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7BB384);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003395C4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003395C2u); } /* indirect call */
    }

loc_003395C4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003395D0
 * Original: 0x003395D0 - 0x003395E5 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003395D0(void)
{

loc_003395D0: ;
    edx = MEM32(esp + 8);
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003395E4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003395E2u); } /* indirect call */
    }

loc_003395E4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003395F0
 * Original: 0x003395F0 - 0x00339601 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003395F0(void)
{

loc_003395F0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00339600u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003395FDu); } /* indirect call */
    }

loc_00339600: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00339610
 * Original: 0x00339610 - 0x0033963E (46 bytes, 19 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00339610(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00339610: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    esi = ecx;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x10F4A161);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00339635u); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_00339635: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00339650
 * Original: 0x00339650 - 0x0033965A (10 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00339650(void)
{

loc_00339650: ;
    eax = MEM32(ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00339658u); RECOMP_ABI_CALL(0x000356D0u, sub_000356D0); /* call 0x000356D0 */

loc_00339658: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00339660
 * Original: 0x00339660 - 0x00339666 (6 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00339660(void)
{

loc_00339660: ;
    eax = MEM32(ecx);
    eax = MEM32(eax + 0x14);
    esp += 4; return; /* ret */

}

/**
 * sub_00339670
 * Original: 0x00339670 - 0x00339677 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00339670(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00339670: ;
    ecx = MEM32(ecx);
    g_seh_ebp = ebp; sub_0001A975(); return; /* tail jmp 0x0001A975 */

}

/**
 * sub_00339680
 * Original: 0x00339680 - 0x00339686 (6 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00339680(void)
{

loc_00339680: ;
    eax = MEM32(ecx);
    eax = MEM32(eax + 0x14);
    esp += 4; return; /* ret */

}

/**
 * sub_00339690
 * Original: 0x00339690 - 0x003396A5 (21 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00339690(void)
{

loc_00339690: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033969Fu); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_0033969F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003396B0
 * Original: 0x003396B0 - 0x003396B4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003396B0(void)
{

loc_003396B0: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_003396C0
 * Original: 0x003396C0 - 0x003396CA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003396C0(void)
{

loc_003396C0: ;
    eax = MEM32(esp + 4);
    eax = ecx + eax * 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003396D0
 * Original: 0x003396D0 - 0x003396D6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003396D0(void)
{

loc_003396D0: ;
    eax = 0xD;
    esp += 4; return; /* ret */

}

/**
 * sub_003396E0
 * Original: 0x003396E0 - 0x003396EA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003396E0(void)
{

loc_003396E0: ;
    eax = MEM32(esp + 4);
    eax = ecx + eax * 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003396F0
 * Original: 0x003396F0 - 0x003396FA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003396F0(void)
{

loc_003396F0: ;
    eax = MEM32(esp + 4);
    eax = ecx + eax * 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00339700
 * Original: 0x00339700 - 0x0033970A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00339700(void)
{

loc_00339700: ;
    eax = MEM32(esp + 4);
    eax = ecx + eax * 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00339710
 * Original: 0x00339710 - 0x0033971A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00339710(void)
{

loc_00339710: ;
    eax = MEM32(esp + 4);
    eax = ecx + eax * 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00339720
 * Original: 0x00339720 - 0x00339726 (6 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00339720(void)
{

loc_00339720: ;
    eax = MEM32(ecx);
    eax = MEM32(eax + 0x14);
    esp += 4; return; /* ret */

}

/**
 * sub_00339730
 * Original: 0x00339730 - 0x00339745 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00339730(void)
{

loc_00339730: ;
    edx = MEM32(esp + 8);
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00339744u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00339742u); } /* indirect call */
    }

loc_00339744: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00339750
 * Original: 0x00339750 - 0x00339761 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00339750(void)
{

loc_00339750: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00339760u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033975Du); } /* indirect call */
    }

loc_00339760: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00339770
 * Original: 0x00339770 - 0x0033979E (46 bytes, 19 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00339770(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00339770: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    esi = ecx;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x8F4B794);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00339795u); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_00339795: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003397B0
 * Original: 0x003397B0 - 0x003397BA (10 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003397B0(void)
{

loc_003397B0: ;
    eax = MEM32(ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003397B8u); RECOMP_ABI_CALL(0x000356D0u, sub_000356D0); /* call 0x000356D0 */

loc_003397B8: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003397C0
 * Original: 0x003397C0 - 0x003397CD (13 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003397C0(void)
{

loc_003397C0: ;
    eax = MEM32(esp + 4);
    eax = eax + eax * 4;
    eax = ecx + eax * 8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003397D0
 * Original: 0x003397D0 - 0x003397E5 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003397D0(void)
{

loc_003397D0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7BB384);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003397E4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003397E2u); } /* indirect call */
    }

loc_003397E4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003397F0
 * Original: 0x003397F0 - 0x00339801 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003397F0(void)
{

loc_003397F0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00339800u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003397FDu); } /* indirect call */
    }

loc_00339800: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00339810
 * Original: 0x00339810 - 0x0033981A (10 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00339810(void)
{

loc_00339810: ;
    eax = MEM32(ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00339818u); RECOMP_ABI_CALL(0x000356D0u, sub_000356D0); /* call 0x000356D0 */

loc_00339818: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00339820
 * Original: 0x00339820 - 0x00339826 (6 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00339820(void)
{

loc_00339820: ;
    eax = MEM32(ecx);
    eax = MEM32(eax + 0x14);
    esp += 4; return; /* ret */

}

/**
 * sub_00339830
 * Original: 0x00339830 - 0x00339842 (18 bytes, 6 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00339830(void)
{

loc_00339830: ;
    edx = MEM32(esp + 8);
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax) = ecx;
    MEM32(eax + 4) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00339850
 * Original: 0x00339850 - 0x00339862 (18 bytes, 6 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00339850(void)
{

loc_00339850: ;
    edx = MEM32(esp + 8);
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax) = ecx;
    MEM32(eax + 4) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00339870
 * Original: 0x00339870 - 0x00339882 (18 bytes, 6 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00339870(void)
{

loc_00339870: ;
    edx = MEM32(esp + 8);
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax) = ecx;
    MEM32(eax + 4) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00339890
 * Original: 0x00339890 - 0x0033989A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00339890(void)
{

loc_00339890: ;
    eax = MEM32(esp + 4);
    eax = ecx + eax * 2;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003398A0
 * Original: 0x003398A0 - 0x003398AA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003398A0(void)
{

loc_003398A0: ;
    eax = MEM32(esp + 4);
    eax = ecx + eax * 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003398B0
 * Original: 0x003398B0 - 0x003398C5 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003398B0(void)
{

loc_003398B0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7BB384);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003398C4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003398C2u); } /* indirect call */
    }

loc_003398C4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003398D0
 * Original: 0x003398D0 - 0x003398E1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003398D0(void)
{

loc_003398D0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x003398E0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003398DDu); } /* indirect call */
    }

loc_003398E0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003398F0
 * Original: 0x003398F0 - 0x0033991E (46 bytes, 19 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003398F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003398F0: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    esi = ecx;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x6CF4AF5A);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00339915u); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_00339915: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00339930
 * Original: 0x00339930 - 0x0033993A (10 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00339930(void)
{

loc_00339930: ;
    eax = MEM32(ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00339938u); RECOMP_ABI_CALL(0x000356D0u, sub_000356D0); /* call 0x000356D0 */

loc_00339938: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00339940
 * Original: 0x00339940 - 0x00339946 (6 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00339940(void)
{

loc_00339940: ;
    eax = MEM32(ecx);
    eax = MEM32(eax + 0x14);
    esp += 4; return; /* ret */

}

/**
 * sub_00339950
 * Original: 0x00339950 - 0x00339957 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00339950(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00339950: ;
    ecx = MEM32(ecx);
    g_seh_ebp = ebp; sub_0001A975(); return; /* tail jmp 0x0001A975 */

}

/**
 * sub_00339960
 * Original: 0x00339960 - 0x00339975 (21 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00339960(void)
{

loc_00339960: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033996Fu); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_0033996F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00339980
 * Original: 0x00339980 - 0x0033998A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00339980(void)
{

loc_00339980: ;
    eax = MEM32(esp + 4);
    eax = ecx + eax * 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00339990
 * Original: 0x00339990 - 0x0033999D (13 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00339990(void)
{

loc_00339990: ;
    eax = MEM32(esp + 4);
    eax = eax + eax * 8;
    eax = ecx + eax * 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003399A0
 * Original: 0x003399A0 - 0x003399AD (13 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003399A0(void)
{

loc_003399A0: ;
    eax = MEM32(esp + 4);
    eax = eax + eax * 8;
    eax = ecx + eax * 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003399B0
 * Original: 0x003399B0 - 0x003399EB (59 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003399B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003399B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(edi);
    PUSH32(esp, 0x003399BBu); RECOMP_ABI_CALL(0x000166E5u, sub_000166E5); /* call 0x000166E5 */

loc_003399BB: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003399E6; /* je: equal / zero */

loc_003399C1: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x003399CDu); RECOMP_ABI_CALL(0x00033551u, sub_00033551); /* call 0x00033551 */

loc_003399CD: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003399E6; /* jne: not equal / not zero */

loc_003399D4: ;
    ecx = MEM32(edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x003399DDu); RECOMP_ABI_CALL(0x0001E219u, sub_0001E219); /* call 0x0001E219 */

loc_003399DD: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x003399E6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003399E3u); } /* indirect call */
    }

loc_003399E6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00339A00
 * Original: 0x00339A00 - 0x00339A07 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00339A00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00339A00: ;
    ecx = MEM32(ecx);
    g_seh_ebp = ebp; sub_0001A975(); return; /* tail jmp 0x0001A975 */

}

/**
 * sub_00339A10
 * Original: 0x00339A10 - 0x00339A13 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00339A10(void)
{

loc_00339A10: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00339A20
 * Original: 0x00339A20 - 0x00339A27 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00339A20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00339A20: ;
    ecx = MEM32(ecx);
    g_seh_ebp = ebp; sub_0001A975(); return; /* tail jmp 0x0001A975 */

}

/**
 * sub_00339A30
 * Original: 0x00339A30 - 0x00339A33 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00339A30(void)
{

loc_00339A30: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00339A40
 * Original: 0x00339A40 - 0x00339A7B (59 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00339A40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00339A40: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(edi);
    PUSH32(esp, 0x00339A4Bu); RECOMP_ABI_CALL(0x000166E5u, sub_000166E5); /* call 0x000166E5 */

loc_00339A4B: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00339A76; /* je: equal / zero */

loc_00339A51: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00339A5Du); RECOMP_ABI_CALL(0x00033551u, sub_00033551); /* call 0x00033551 */

loc_00339A5D: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00339A76; /* jne: not equal / not zero */

loc_00339A64: ;
    ecx = MEM32(edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00339A6Du); RECOMP_ABI_CALL(0x0001E219u, sub_0001E219); /* call 0x0001E219 */

loc_00339A6D: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00339A76u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00339A73u); } /* indirect call */
    }

loc_00339A76: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00339A90
 * Original: 0x00339A90 - 0x00339BE4 (340 bytes, 103 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00339A90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00339A90: ;
    edx = MEM32(ecx + 4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00339BBD; /* jle: less or equal (signed <=) */

loc_00339A9F: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    xmm0 = XMM_SCALAR(MEMF(esi)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00339ACF; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_00339AB1: ;
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esi);
    MEM32(eax) = ecx;
    edx = MEM32(esi + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(esi + 8);
    MEM32(eax + 8) = ecx;

loc_00339AC8: ;
    POP32(esp, esi);

loc_00339AC9: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00339ACF: ;
    eax = edx;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm1.f[0]; _fcb = MEMF(eax + -16); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00339AFA; /* jb: below (unsigned <) (xmm1.f[0] vs MEMF(eax + -16)) */

loc_00339ADC: ;
    ecx = MEM32(esp + 0x14);
    _fb = (uint32_t)(0xFFFFFFF4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFF4u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(eax);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 8) = eax;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00339AFA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00339AC8; /* jle: less or equal (signed <=) */

loc_00339B01: ;
    ecx = esi;

loc_00339B03: ;
    _fca = xmm1.f[0]; _fcb = MEMF(ecx); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00339B12; /* jb: below (unsigned <) (xmm1.f[0] vs MEMF(ecx)) */

loc_00339B08: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x10)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00339B21; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_00339B12: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00339B03; /* jl: less (signed <) */

loc_00339B1A: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00339B21: ;
    ecx = MEM32(esp + 0x14);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + esi); /* subss */
    xmm0 = XMM_SCALAR(MEMF(eax + esi + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + esi); /* subss */
    xmm4 = XMM_SCALAR(MEMF(eax + esi + 0x14)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(eax + esi + 0x18)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(eax + esi + 0x1C)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + esi + 8)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + esi + 0xC)); /* movss */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm1.f[0] = xmm1.f[0] / xmm0.f[0]; /* divss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm5.f[0] = xmm5.f[0] * xmm1.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 4); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm4.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 4);
    xmm2.f[0] = xmm2.f[0] + xmm5.f[0]; /* addss */
    MEM32(ecx) = edx;
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 8) = xmm2.f[0]; /* movss */
    eax = MEM32(esp + 8);
    xmm3.f[0] = xmm3.f[0] + xmm6.f[0]; /* addss */
    MEMF(esp + 0xC) = xmm3.f[0]; /* movss */
    edx = MEM32(esp + 0xC);
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = edx;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00339BBD: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00339AC9; /* jle: less or equal (signed <=) */

loc_00339BC5: ;
    eax = MEM32(ecx);
    ecx = MEM32(esp + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(eax);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 8) = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00339C40
 * Original: 0x00339C40 - 0x00339D38 (248 bytes, 89 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00339C40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00339C40: ;
    edx = MEM32(ecx + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00339D12; /* jle: less or equal (signed <=) */

loc_00339C4C: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    PUSH32(esp, edi);
    edi = MEM32(ecx);
    xmm1 = XMM_SCALAR(MEMF(edi)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00339C7F; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_00339C5E: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(edi);
    MEM32(eax) = ecx;
    edx = MEM32(edi + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(edi + 8);
    MEM32(eax + 8) = ecx;
    edx = MEM32(edi + 0xC);
    MEM32(eax + 0xC) = edx;
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

loc_00339C7F: ;
    eax = edx;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(5) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + -32); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00339CAD; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(eax + -32)) */

loc_00339C8C: ;
    ecx = MEM32(esp + 8);
    _fb = (uint32_t)(0xFFFFFFF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFF0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(eax);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 8) = edx;
    eax = MEM32(eax + 0xC);
    MEM32(ecx + 0xC) = eax;
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

loc_00339CAD: ;
    PUSH32(esp, esi);
    esi = edx + -1;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00339CD7; /* jle: less or equal (signed <=) */

loc_00339CB7: ;
    edx = edi;
    /* nop */

loc_00339CC0: ;
    _fca = xmm0.f[0]; _fcb = MEMF(edx); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00339CCF; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(edx)) */

loc_00339CC5: ;
    xmm1 = XMM_SCALAR(MEMF(edx + 0x20)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00339CDC; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_00339CCF: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00339CC0; /* jl: less (signed <) */

loc_00339CD7: ;
    POP32(esp, esi);
    POP32(esp, edi);

loc_00339CD9: ;
    esp += 12; return; /* ret 8 */

loc_00339CDC: ;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(5) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    xmm1 = XMM_SCALAR(MEMF(eax + edi + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + edi); /* subss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + edi); /* subss */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    edx = eax + 0x10;
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00339D0Du); RECOMP_ABI_CALL(0x0001D0A8u, sub_0001D0A8); /* call 0x0001D0A8 */

loc_00339D0D: ;
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

loc_00339D12: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00339CD9; /* jle: less or equal (signed <=) */

loc_00339D16: ;
    ecx = MEM32(ecx);
    edx = MEM32(esp + 4);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ecx);
    MEM32(edx) = eax;
    eax = MEM32(ecx + 4);
    MEM32(edx + 4) = eax;
    eax = MEM32(ecx + 8);
    MEM32(edx + 8) = eax;
    ecx = MEM32(ecx + 0xC);
    MEM32(edx + 0xC) = ecx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00339D80
 * Original: 0x00339D80 - 0x00339E41 (193 bytes, 59 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00339D80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00339D80: ;
    edx = MEM32(ecx + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00339E2B; /* jle: less or equal (signed <=) */

loc_00339D8C: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    xmm1 = XMM_SCALAR(MEMF(esi)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00339DAB; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_00339D9E: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(esp + 8);
    MEM32(ecx) = eax;

loc_00339DA7: ;
    POP32(esp, esi);

loc_00339DA8: ;
    esp += 12; return; /* ret 8 */

loc_00339DAB: ;
    _fca = xmm0.f[0]; _fcb = MEMF(esi + edx * 8 + -8); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00339DC0; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(esi + edx * 8 + -8)) */

loc_00339DB2: ;
    edx = MEM32(esi + edx * 8 + -4);
    eax = MEM32(esp + 8);
    MEM32(eax) = edx;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00339DC0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00339DA7; /* jle: less or equal (signed <=) */

loc_00339DC7: ;
    ecx = esi;
    /* nop */

loc_00339DD0: ;
    _fca = xmm0.f[0]; _fcb = MEMF(ecx); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00339DDF; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(ecx)) */

loc_00339DD5: ;
    xmm1 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00339DEB; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_00339DDF: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00339DD0; /* jl: less (signed <) */

loc_00339DE7: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00339DEB: ;
    xmm1 = XMM_SCALAR(MEMF(esi + eax * 8 + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esi + eax * 8); /* subss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + eax * 8); /* subss */
    xmm2 = XMM_SCALAR(MEMF(esi + eax * 8 + 0xC)); /* movss */
    ecx = MEM32(esp + 8);
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esi + eax * 8 + 4); /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    MEMF(ecx) = xmm1.f[0]; /* movss */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00339E2B: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00339DA8; /* jle: less or equal (signed <=) */

loc_00339E33: ;
    edx = MEM32(ecx);
    eax = MEM32(edx + 4);
    ecx = MEM32(esp + 4);
    MEM32(ecx) = eax;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00339E80
 * Original: 0x00339E80 - 0x00339EBB (59 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00339E80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00339E80: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(edi);
    PUSH32(esp, 0x00339E8Bu); RECOMP_ABI_CALL(0x000166E5u, sub_000166E5); /* call 0x000166E5 */

loc_00339E8B: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00339EB6; /* je: equal / zero */

loc_00339E91: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00339E9Du); RECOMP_ABI_CALL(0x00033551u, sub_00033551); /* call 0x00033551 */

loc_00339E9D: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00339EB6; /* jne: not equal / not zero */

loc_00339EA4: ;
    ecx = MEM32(edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00339EADu); RECOMP_ABI_CALL(0x0001E219u, sub_0001E219); /* call 0x0001E219 */

loc_00339EAD: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00339EB6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00339EB3u); } /* indirect call */
    }

loc_00339EB6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00339ED0
 * Original: 0x00339ED0 - 0x00339ED4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00339ED0(void)
{

loc_00339ED0: ;
    eax = ecx + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00339EE0
 * Original: 0x00339EE0 - 0x00339EE4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00339EE0(void)
{

loc_00339EE0: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_00339EF0
 * Original: 0x00339EF0 - 0x00339EF4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00339EF0(void)
{

loc_00339EF0: ;
    eax = MEM32(ecx + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_00339F00
 * Original: 0x00339F00 - 0x00339F03 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00339F00(void)
{

loc_00339F00: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00339F10
 * Original: 0x00339F10 - 0x00339F14 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00339F10(void)
{

loc_00339F10: ;
    eax = ecx + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00339F20
 * Original: 0x00339F20 - 0x00339F32 (18 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00339F20(void)
{

loc_00339F20: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00339F28u); RECOMP_ABI_CALL(0x00013148u, sub_00013148); /* call 0x00013148 */

loc_00339F28: ;
    MEM32(esi) = 0x82AEB4;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00339F40
 * Original: 0x00339F40 - 0x00339F45 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00339F40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00339F40: ;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 8)); return; /* indirect tail jmp */

}

/**
 * sub_00339F50
 * Original: 0x00339F50 - 0x00339F62 (18 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00339F50(void)
{

loc_00339F50: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00339F58u); RECOMP_ABI_CALL(0x00013148u, sub_00013148); /* call 0x00013148 */

loc_00339F58: ;
    MEM32(esi) = 0x82AEC4;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00339F70
 * Original: 0x00339F70 - 0x00339F82 (18 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00339F70(void)
{

loc_00339F70: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00339F78u); RECOMP_ABI_CALL(0x00013148u, sub_00013148); /* call 0x00013148 */

loc_00339F78: ;
    MEM32(esi) = 0x82AED4;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00339F90
 * Original: 0x00339F90 - 0x00339FB7 (39 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00339F90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00339F90: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x82AEB4;
    PUSH32(esp, 0x00339F9Eu); RECOMP_ABI_CALL(0x00017301u, sub_00017301); /* call 0x00017301 */

loc_00339F9E: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00339FB1; /* je: equal / zero */

loc_00339FA5: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00339FB1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00339FAEu); } /* indirect call */
    }

loc_00339FB1: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00339FC0
 * Original: 0x00339FC0 - 0x00339FE7 (39 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00339FC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00339FC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x82AEC4;
    PUSH32(esp, 0x00339FCEu); RECOMP_ABI_CALL(0x00017301u, sub_00017301); /* call 0x00017301 */

loc_00339FCE: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00339FE1; /* je: equal / zero */

loc_00339FD5: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00339FE1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00339FDEu); } /* indirect call */
    }

loc_00339FE1: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00339FF0
 * Original: 0x00339FF0 - 0x0033A017 (39 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00339FF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00339FF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x82AED4;
    PUSH32(esp, 0x00339FFEu); RECOMP_ABI_CALL(0x00017301u, sub_00017301); /* call 0x00017301 */

loc_00339FFE: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0033A011; /* je: equal / zero */

loc_0033A005: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0033A011u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033A00Eu); } /* indirect call */
    }

loc_0033A011: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0033A020
 * Original: 0x0033A020 - 0x0033A023 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033A020(void)
{

loc_0033A020: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0033A030
 * Original: 0x0033A030 - 0x0033A034 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033A030(void)
{

loc_0033A030: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_0033A040
 * Original: 0x0033A040 - 0x0033A071 (49 bytes, 13 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033A040(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033A040: ;
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033A05A; /* je: equal / zero */

loc_0033A047: ;
    ecx = MEM32(esp + 8);
    MEM32(ecx) = eax;
    eax = MEM32(esp + 4);
    MEM32(eax) = 1;
    esp += 12; return; /* ret 8 */

loc_0033A05A: ;
    edx = MEM32(esp + 8);
    eax = MEM32(esp + 4);
    MEM32(edx) = 0;
    MEM32(eax) = 0xFFFFFE6Au;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0033A080
 * Original: 0x0033A080 - 0x0033A105 (133 bytes, 45 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033A080(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033A080: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0033A098; /* jne: not equal / not zero */

loc_0033A08C: ;
    esi = MEM32(esp + 0xC);
    MEM32(esi) = 0xFFFFFEDAu;
    goto loc_0033A0DD;

loc_0033A098: ;
    esi = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0033A0A2u); RECOMP_ABI_CALL(0x0056748Du, sub_0056748D); /* call 0x0056748D */

loc_0033A0A2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033A0B5; /* jne: not equal / not zero */

loc_0033A0A9: ;
    esi = MEM32(esp + 0xC);
    MEM32(esi) = 0;
    goto loc_0033A0DD;

loc_0033A0B5: ;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0xB0);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x24);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0033A0DDu); RECOMP_ABI_CALL(0x00572FEFu, sub_00572FEF); /* call 0x00572FEF */

loc_0033A0DD: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x0033A0E6u); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_0033A0E6: ;
    _fa = (uint32_t)(MEM8(esp + 0x14)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x14), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0033A0F5; /* je: equal / zero */

loc_0033A0ED: ;
    MEM32(esp + 0x14) = 0;

loc_0033A0F5: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0x0033A0FEu); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_0033A0FE: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0033A130
 * Original: 0x0033A130 - 0x0033A199 (105 bytes, 36 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033A130(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033A130: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    esi = ecx;
    ecx = esp;
    MEM32(ecx) = 0;
    eax = MEM32(esp + 0x1C);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0033A14E; /* je: equal / zero */

loc_0033A14A: ;
    MEM32(ecx) = eax;
    goto loc_0033A158;

loc_0033A14E: ;
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0033A158u); RECOMP_ABI_CALL(0x005724DCu, sub_005724DC); /* call 0x005724DC */

loc_0033A158: ;
    PUSH32(esp, ecx);
    eax = esp + 0x1C;
    ecx = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033A165u); RECOMP_ABI_CALL(0x005720B5u, sub_005720B5); /* call 0x005720B5 */

loc_0033A165: ;
    edi = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0033A171u); RECOMP_ABI_CALL(0x00577AE4u, sub_00577AE4); /* call 0x00577AE4 */

loc_0033A171: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x0033A17Au); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_0033A17A: ;
    _fa = (uint32_t)(MEM8(esp + 0x14)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x14), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0033A189; /* je: equal / zero */

loc_0033A181: ;
    MEM32(esp + 0x14) = 0;

loc_0033A189: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0x0033A192u); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_0033A192: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0033A1C0
 * Original: 0x0033A1C0 - 0x0033A1F1 (49 bytes, 13 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033A1C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033A1C0: ;
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033A1DA; /* je: equal / zero */

loc_0033A1C7: ;
    ecx = MEM32(esp + 8);
    MEM32(ecx) = eax;
    eax = MEM32(esp + 4);
    MEM32(eax) = 1;
    esp += 12; return; /* ret 8 */

loc_0033A1DA: ;
    edx = MEM32(esp + 8);
    eax = MEM32(esp + 4);
    MEM32(edx) = 0;
    MEM32(eax) = 0xFFFFFE6Au;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0033A200
 * Original: 0x0033A200 - 0x0033A22F (47 bytes, 20 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033A200(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033A200: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0033A20Eu); RECOMP_ABI_CALL(0x005743CFu, sub_005743CF); /* call 0x005743CF */

loc_0033A20E: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x18);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0033A228u); RECOMP_ABI_CALL(0x00574CE7u, sub_00574CE7); /* call 0x00574CE7 */

loc_0033A228: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0033A240
 * Original: 0x0033A240 - 0x0033A2B2 (114 bytes, 40 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033A240(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033A240: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0033A258; /* jne: not equal / not zero */

loc_0033A24C: ;
    esi = MEM32(esp + 0xC);
    MEM32(esi) = 0xFFFFFEDAu;
    goto loc_0033A28A;

loc_0033A258: ;
    esi = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0033A262u); RECOMP_ABI_CALL(0x005743A5u, sub_005743A5); /* call 0x005743A5 */

loc_0033A262: ;
    ecx = MEM32(esp + 0x20);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x24);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0033A28Au); RECOMP_ABI_CALL(0x00572FEFu, sub_00572FEF); /* call 0x00572FEF */

loc_0033A28A: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x0033A293u); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_0033A293: ;
    _fa = (uint32_t)(MEM8(esp + 0x14)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x14), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0033A2A2; /* je: equal / zero */

loc_0033A29A: ;
    MEM32(esp + 0x14) = 0;

loc_0033A2A2: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0x0033A2ABu); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_0033A2AB: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0033A2D0
 * Original: 0x0033A2D0 - 0x0033A2FF (47 bytes, 20 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033A2D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033A2D0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0033A2DEu); RECOMP_ABI_CALL(0x005743E1u, sub_005743E1); /* call 0x005743E1 */

loc_0033A2DE: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x18);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0033A2F8u); RECOMP_ABI_CALL(0x00574CE7u, sub_00574CE7); /* call 0x00574CE7 */

loc_0033A2F8: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0033A310
 * Original: 0x0033A310 - 0x0033A33A (42 bytes, 18 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033A310(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033A310: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0033A31Eu); RECOMP_ABI_CALL(0x005743E1u, sub_005743E1); /* call 0x005743E1 */

loc_0033A31E: ;
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0033A333u); RECOMP_ABI_CALL(0x00574C39u, sub_00574C39); /* call 0x00574C39 */

loc_0033A333: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0033A350
 * Original: 0x0033A350 - 0x0033A38F (63 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033A350(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033A350: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 8);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x4F4A771);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0033A371u); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_0033A371: ;
    edx = MEM32(esp + 0x30);
    ecx = MEM32(esp + 0x24);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, 0x0033A382u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_0033A382: ;
    eax = MEM32(esp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033A38Bu); RECOMP_ABI_CALL(0x000356D0u, sub_000356D0); /* call 0x000356D0 */

loc_0033A38B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0033A3A0
 * Original: 0x0033A3A0 - 0x0033A3DF (63 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033A3A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033A3A0: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 8);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x4F4B810);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0033A3C1u); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_0033A3C1: ;
    edx = MEM32(esp + 0x30);
    ecx = MEM32(esp + 0x24);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, 0x0033A3D2u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_0033A3D2: ;
    eax = MEM32(esp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033A3DBu); RECOMP_ABI_CALL(0x000356D0u, sub_000356D0); /* call 0x000356D0 */

loc_0033A3DB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0033A3F0
 * Original: 0x0033A3F0 - 0x0033A42F (63 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033A3F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033A3F0: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 8);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x10F4A161);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0033A411u); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_0033A411: ;
    edx = MEM32(esp + 0x30);
    ecx = MEM32(esp + 0x24);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, 0x0033A422u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_0033A422: ;
    eax = MEM32(esp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033A42Bu); RECOMP_ABI_CALL(0x000356D0u, sub_000356D0); /* call 0x000356D0 */

loc_0033A42B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0033A440
 * Original: 0x0033A440 - 0x0033A46A (42 bytes, 18 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033A440(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033A440: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0033A44Eu); RECOMP_ABI_CALL(0x00574399u, sub_00574399); /* call 0x00574399 */

loc_0033A44E: ;
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0033A463u); RECOMP_ABI_CALL(0x00574C39u, sub_00574C39); /* call 0x00574C39 */

loc_0033A463: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0033A480
 * Original: 0x0033A480 - 0x0033A487 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033A480(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033A480: ;
    ecx = MEM32(ecx);
    g_seh_ebp = ebp; sub_0001A975(); return; /* tail jmp 0x0001A975 */

}

/**
 * sub_0033A490
 * Original: 0x0033A490 - 0x0033A4A6 (22 bytes, 6 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033A490(void)
{

loc_0033A490: ;
    eax = MEM32(ecx + 0x18);
    ecx = MEM32(esp + 8);
    MEM32(ecx) = eax;
    eax = MEM32(esp + 4);
    MEM32(eax) = 1;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0033A4B0
 * Original: 0x0033A4B0 - 0x0033A4DE (46 bytes, 19 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033A4B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033A4B0: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    esi = ecx;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x10F4A963);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0033A4D5u); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_0033A4D5: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0033A4F0
 * Original: 0x0033A4F0 - 0x0033A4FA (10 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033A4F0(void)
{

loc_0033A4F0: ;
    eax = MEM32(ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033A4F8u); RECOMP_ABI_CALL(0x000356D0u, sub_000356D0); /* call 0x000356D0 */

loc_0033A4F8: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0033A500
 * Original: 0x0033A500 - 0x0033A507 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033A500(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033A500: ;
    ecx = MEM32(ecx);
    g_seh_ebp = ebp; sub_0001A975(); return; /* tail jmp 0x0001A975 */

}

/**
 * sub_0033A510
 * Original: 0x0033A510 - 0x0033A582 (114 bytes, 40 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033A510(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033A510: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0033A528; /* jne: not equal / not zero */

loc_0033A51C: ;
    esi = MEM32(esp + 0xC);
    MEM32(esi) = 0xFFFFFEDAu;
    goto loc_0033A55A;

loc_0033A528: ;
    esi = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0033A532u); RECOMP_ABI_CALL(0x005674C3u, sub_005674C3); /* call 0x005674C3 */

loc_0033A532: ;
    ecx = MEM32(esp + 0x20);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0x70);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x24);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0033A55Au); RECOMP_ABI_CALL(0x00572FEFu, sub_00572FEF); /* call 0x00572FEF */

loc_0033A55A: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x0033A563u); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_0033A563: ;
    _fa = (uint32_t)(MEM8(esp + 0x14)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x14), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0033A572; /* je: equal / zero */

loc_0033A56A: ;
    MEM32(esp + 0x14) = 0;

loc_0033A572: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0x0033A57Bu); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_0033A57B: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0033A5A0
 * Original: 0x0033A5A0 - 0x0033A5A4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033A5A0(void)
{

loc_0033A5A0: ;
    eax = MEM32(ecx + 0x10);
    esp += 4; return; /* ret */

}

/**
 * sub_0033A5B0
 * Original: 0x0033A5B0 - 0x0033A5B4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033A5B0(void)
{

loc_0033A5B0: ;
    eax = MEM32(ecx + 0x1C);
    esp += 4; return; /* ret */

}

/**
 * sub_0033A5C0
 * Original: 0x0033A5C0 - 0x0033A5DC (28 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033A5C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033A5C0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    edx = MEM32(ecx + 0x14);
    eax = MEM32(edx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 8) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033A5DB; /* je: equal / zero */

loc_0033A5D1: ;
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0033A5DBu); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_0033A5DB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0033A5F0
 * Original: 0x0033A5F0 - 0x0033A616 (38 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033A5F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033A5F0: ;
    PUSH32(esp, ecx);
    ecx = MEM32(ecx + 4);
    eax = MEM32(ecx);
    ecx = ZX8(MEM8(eax + 0x13));
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x14);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esp + 8;
    MEM32(esp + 8) = 1;
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    POP32(esp, edi);
    SET_LO8(eax, ((_flags != 0)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0033A620
 * Original: 0x0033A620 - 0x0033A6F5 (213 bytes, 59 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033A620(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033A620: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = ecx;
    PUSH32(esp, ebx);
    PUSH32(esp, 0xEC);
    MEM32(esi) = 0x82AEE4;
    PUSH32(esp, 0x0033A637u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0033A637: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033A647; /* je: equal / zero */

loc_0033A63E: ;
    ecx = eax;
    PUSH32(esp, 0x0033A645u); RECOMP_ABI_CALL(0x00021D29u, sub_00021D29); /* call 0x00021D29 */

loc_0033A645: ;
    goto loc_0033A649;

loc_0033A647: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0033A649: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x110);
    MEM32(esi + 0x18) = eax;
    PUSH32(esp, 0x0033A657u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0033A657: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033A667; /* je: equal / zero */

loc_0033A65E: ;
    ecx = eax;
    PUSH32(esp, 0x0033A665u); RECOMP_ABI_CALL(0x00029D71u, sub_00029D71); /* call 0x00029D71 */

loc_0033A665: ;
    goto loc_0033A669;

loc_0033A667: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0033A669: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(esi + 0x1C) = eax;
    MEM32(esi + 0x28) = ebx;
    MEM32(esi + 0x2C) = ebx;
    MEM32(esi + 0x30) = ebx;
    MEM32(esi + 0x34) = 0x829EA0;
    MEM32(esi + 0x38) = ebx;
    MEM32(esi + 0x3C) = 0xFFFFFFFFu;
    MEMF(esi + 0x40) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x44) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x48) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x4C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x50) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x54) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x58) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x5C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x60) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x70) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x74) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x78) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(esi + 0x7C) = xmm0.f[0]; /* movss */
    MEM32(esi + 0x90) = ebx;
    MEM32(esi + 0x94) = ebx;
    MEM8(esi + 0x99) = LO8(ebx);
    MEM32(esi + 0x10) = ebx;
    MEM32(esi + 0x20) = ebx;
    MEM32(esi + 0x14) = ebx;
    MEM32(esi + 0x24) = ebx;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0033A730
 * Original: 0x0033A730 - 0x0033A759 (41 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033A730(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033A730: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x30);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x94) = eax;
    MEM32(esp + 4) = eax;
    ecx = MEM32(ecx);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033A74Fu); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_0033A74F: ;
    MEM32(esi + 0x3C) = 0xFFFFFFFFu;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0033A770
 * Original: 0x0033A770 - 0x0033A7C1 (81 bytes, 21 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033A770(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033A770: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x94) = 1;
    if (CMP_GE(_fas, _fbs)) goto loc_0033A7AA; /* jge: greater or equal (signed >=) */

loc_0033A784: ;
    SET_LO8(eax, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033A7A3; /* je: equal / zero */

loc_0033A78C: ;
    ecx = MEM32(esi + 0x30);
    eax = esp + 8;
    MEM32(esp + 8) = 1;
    ecx = MEM32(ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033A7A3u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_0033A7A3: ;
    MEM32(esi + 0x3C) = 0;

loc_0033A7AA: ;
    _fa = (uint32_t)(MEM32(esi + 0x90)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x90), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033A7BD; /* jne: not equal / not zero */

loc_0033A7B3: ;
    MEM32(esi + 0x94) = 2;

loc_0033A7BD: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0033A7E0
 * Original: 0x0033A7E0 - 0x0033A86B (139 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033A7E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033A7E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x94);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033A869; /* je: equal / zero */

loc_0033A7ED: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0033A7F4u); RECOMP_ABI_CALL(0x00030153u, sub_00030153); /* call 0x00030153 */

loc_0033A7F4: ;
    eax = MEM32(esi + 0x1C);
    ecx = MEM32(eax + 0xF8);
    edi = MEM32(eax + ecx * 4 + 0xEC);
    ecx = MEM32(edi + 0xC);
    PUSH32(esp, 7);
    PUSH32(esp, 0);
    ebx = esi + 0x4C;
    PUSH32(esp, 0x0033A813u); RECOMP_ABI_CALL(0x0057B9F0u, sub_0057B9F0); /* call 0x0057B9F0 */

loc_0033A813: ;
    ecx = MEM32(ebx);
    edx = ZX16(LO16(eax));
    eax = edi + edx * 4 + 0x10;
    MEM32(eax) = ecx;
    edx = MEM32(ebx + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ebx + 8);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esi + 0x1C);
    edx = MEM32(ecx + 0xF8);
    PUSH32(esp, 3);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0033A83Bu); RECOMP_ABI_CALL(0x00025B9Fu, sub_00025B9F); /* call 0x00025B9F */

loc_0033A83B: ;
    _fa = (uint32_t)(MEM32(esi + 0x94)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x94), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033A867; /* jne: not equal / not zero */

loc_0033A844: ;
    edi = MEM32(esi + 0x3C);
    eax = MEM32(esi + 0x38);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(esi + 0x3C) = edi;
    if (CMP_LE(_fas, _fbs)) goto loc_0033A867; /* jle: less or equal (signed <=) */

loc_0033A854: ;
    SET_LO8(ebx, MEM8(esi + 0x98));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x3C) = ecx;

loc_0033A867: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_0033A869: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0033A890
 * Original: 0x0033A890 - 0x0033A8B8 (40 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033A890(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033A890: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033A89Bu); RECOMP_ABI_CALL(0x000356D0u, sub_000356D0); /* call 0x000356D0 */

loc_0033A89B: ;
    SET_LO8(eax, MEM8(esp + 0xC));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0033A8B2; /* je: equal / zero */

loc_0033A8A6: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0033A8B2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033A8AFu); } /* indirect call */
    }

loc_0033A8B2: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0033A8D0
 * Original: 0x0033A8D0 - 0x0033A92F (95 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0033A8D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033A8D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = MEM32(0x8FCAB4);
    MEMF(esp) = xmm0.f[0]; /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    ecx = MEM32(eax);
    edx = MEM32(ecx + 0x14);
    xmm0 = XMM_SCALAR(MEMF(edx)); /* movss */
    ecx = MEM32(0x8FCAB0);
    eax = esp;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    ecx = MEM32(ecx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033A92Bu); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_0033A92B: ;
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0033A950
 * Original: 0x0033A950 - 0x0033A955 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033A950(void)
{

loc_0033A950: ;
    SET_LO16(eax, MEM16(ecx + 0x34));
    esp += 4; return; /* ret */

}

/**
 * sub_0033A960
 * Original: 0x0033A960 - 0x0033ACB0 (848 bytes, 296 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033A960(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033A960: ;
    edx = MEM32(0x8FCAD4);
    _fb = (uint32_t)(0x98) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x98;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = ecx;
    MEM32(0x8FCAD4) = edx;
    eax = MEM32(esi + 0x24);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0033A9A8; /* je: equal / zero */

loc_0033A982: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033A994; /* je: equal / zero */

loc_0033A989: ;
    PUSH32(esp, eax);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033A994u); RECOMP_ABI_CALL(0x00559AEFu, sub_00559AEF); /* call 0x00559AEF */

loc_0033A994: ;
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0033A9A2u); RECOMP_ABI_CALL(0x0055A84Au, sub_0055A84A); /* call 0x0055A84A */

loc_0033A9A2: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x24) = ebp;

loc_0033A9A8: ;
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033A9C4; /* je: equal / zero */

loc_0033A9AF: ;
    PUSH32(esp, eax);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033A9BAu); RECOMP_ABI_CALL(0x0055D52Du, sub_0055D52D); /* call 0x0055D52D */

loc_0033A9BA: ;
    ecx = eax;
    PUSH32(esp, 0x0033A9C1u); RECOMP_ABI_CALL(0x0055D70Fu, sub_0055D70F); /* call 0x0055D70F */

loc_0033A9C1: ;
    MEM32(esi + 0x20) = ebp;

loc_0033A9C4: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033A9E8; /* je: equal / zero */

loc_0033A9CB: ;
    _fa = (uint32_t)(MEM16(eax + 0x34)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebp)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0x34), LO16(ebp) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033A9E8; /* je: equal / zero */

loc_0033A9D1: ;
    PUSH32(esp, ebp);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, 0x0033A9DFu); RECOMP_ABI_CALL(0x0055991Au, sub_0055991A); /* call 0x0055991A */

loc_0033A9DF: ;
    edx = MEM32(esi + 0x10);
    _fa = (uint32_t)(MEM16(edx + 0x34)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebp)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edx + 0x34), LO16(ebp) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033A9D1; /* jne: not equal / not zero */

loc_0033A9E8: ;
    edi = esi + 0x14;
    ebx = 3;

loc_0033A9F0: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033AA0A; /* je: equal / zero */

loc_0033A9F6: ;
    PUSH32(esp, eax);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033AA01u); RECOMP_ABI_CALL(0x0055D52Du, sub_0055D52D); /* call 0x0055D52D */

loc_0033AA01: ;
    ecx = eax;
    PUSH32(esp, 0x0033AA08u); RECOMP_ABI_CALL(0x0055D5A6u, sub_0055D5A6); /* call 0x0055D5A6 */

loc_0033AA08: ;
    MEM32(edi) = ebp;

loc_0033AA0A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0033A9F0; /* jne: not equal / not zero */

loc_0033AA10: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033AA9F; /* je: equal / zero */

loc_0033AA1B: ;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0033AA26u); RECOMP_ABI_CALL(0x0055A895u, sub_0055A895); /* call 0x0055A895 */

loc_0033AA26: ;
    MEM32(esi + 0x10) = ebp;
    edx = MEM32(0x82AF00);
    eax = MEM32(0x82AF04);
    SET_LO16(ecx, MEM16(0x82AF08));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x1C) = eax;
    MEM16(esp + 0x20) = LO16(ecx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_0033AA50: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esp;
    SET_LO8(edx, LO8(ebx));
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x30) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + 0x30);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    MEM8(esp + 0x2C) = LO8(edx);
    ecx = esp;
    MEM32(esp + 0x1C) = ebp;
    PUSH32(esp, ebp);
    edx = esp + 0x28;
    MEM32(eax) = ebp;
    PUSH32(esp, edx);
    MEM32(eax) = ebp;
    PUSH32(esp, 0x0033AA77u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_0033AA77: ;
    ecx = MEM32(esi);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033AA83u); RECOMP_ABI_CALL(0x0057287Du, sub_0057287D); /* call 0x0057287D */

loc_0033AA83: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033AA99; /* je: equal / zero */

loc_0033AA8B: ;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0033AA96u); RECOMP_ABI_CALL(0x005737B4u, sub_005737B4); /* call 0x005737B4 */

loc_0033AA96: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0033AA99: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0033AA50; /* jl: less (signed <) */

loc_0033AA9F: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033AABB; /* je: equal / zero */

loc_0033AAA6: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033AAB8; /* je: equal / zero */

loc_0033AAAD: ;
    PUSH32(esp, eax);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0033AAB8u); RECOMP_ABI_CALL(0x005599F1u, sub_005599F1); /* call 0x005599F1 */

loc_0033AAB8: ;
    MEM32(esi + 0xC) = ebp;

loc_0033AABB: ;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033AB1C; /* je: equal / zero */

loc_0033AAC0: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033AB04; /* je: equal / zero */

loc_0033AAC4: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(esp + 0x1C) = ebp;
    PUSH32(esp, ebp);
    MEM32(eax) = ebp;
    PUSH32(esp, 0x82AEE8);
    MEM32(eax) = ebp;
    PUSH32(esp, 0x0033AAE2u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_0033AAE2: ;
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = MEM32(esi);
    PUSH32(esp, 0x0033AAEEu); RECOMP_ABI_CALL(0x0057287Du, sub_0057287D); /* call 0x0057287D */

loc_0033AAEE: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033AB04; /* je: equal / zero */

loc_0033AAF6: ;
    PUSH32(esp, eax);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0033AB01u); RECOMP_ABI_CALL(0x005737B4u, sub_005737B4); /* call 0x005737B4 */

loc_0033AB01: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0033AB04: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0033AB12u); RECOMP_ABI_CALL(0x0055D52Du, sub_0055D52D); /* call 0x0055D52D */

loc_0033AB12: ;
    ecx = eax;
    PUSH32(esp, 0x0033AB19u); RECOMP_ABI_CALL(0x0055D5A6u, sub_0055D5A6); /* call 0x0055D5A6 */

loc_0033AB19: ;
    MEM32(esi + 8) = ebp;

loc_0033AB1C: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033AC07; /* je: equal / zero */

loc_0033AB24: ;
    eax = MEM32(esi + 0x74);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, eax);
    MEM32(esp + 0x1C) = ebp;
    PUSH32(esp, 0x0033AB39u); RECOMP_ABI_CALL(0x005725B8u, sub_005725B8); /* call 0x005725B8 */

loc_0033AB39: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x829EF8);
    PUSH32(esp, 0x0033AB47u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_0033AB47: ;
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = MEM32(esi);
    PUSH32(esp, 0x0033AB53u); RECOMP_ABI_CALL(0x0057287Du, sub_0057287D); /* call 0x0057287D */

loc_0033AB53: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033AB69; /* je: equal / zero */

loc_0033AB5B: ;
    PUSH32(esp, eax);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0033AB66u); RECOMP_ABI_CALL(0x005737B4u, sub_005737B4); /* call 0x005737B4 */

loc_0033AB66: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0033AB69: ;
    eax = MEM32(esi + 0x74);
    ecx = MEM32(0x8C4580);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    MEM32(esp + 0x1C) = ebp;
    PUSH32(esp, 0x0033AB82u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0033AB82: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x30;
    ecx = esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0033AB97u); RECOMP_ABI_CALL(0x005725B8u, sub_005725B8); /* call 0x005725B8 */

loc_0033AB97: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x829EF8);
    PUSH32(esp, 0x0033ABA5u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_0033ABA5: ;
    ecx = MEM32(esi);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033ABB1u); RECOMP_ABI_CALL(0x0057287Du, sub_0057287D); /* call 0x0057287D */

loc_0033ABB1: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033ABC7; /* je: equal / zero */

loc_0033ABB9: ;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0033ABC4u); RECOMP_ABI_CALL(0x005737B4u, sub_005737B4); /* call 0x005737B4 */

loc_0033ABC4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0033ABC7: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(esp + 0x1C) = ebp;
    PUSH32(esp, ebp);
    MEM32(eax) = ebp;
    PUSH32(esp, 0x829EE8);
    MEM32(eax) = ebp;
    PUSH32(esp, 0x0033ABE5u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_0033ABE5: ;
    ecx = MEM32(esi);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033ABF1u); RECOMP_ABI_CALL(0x0057287Du, sub_0057287D); /* call 0x0057287D */

loc_0033ABF1: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033AC07; /* je: equal / zero */

loc_0033ABF9: ;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0033AC04u); RECOMP_ABI_CALL(0x005737B4u, sub_005737B4); /* call 0x005737B4 */

loc_0033AC04: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0033AC07: ;
    _fa = (uint32_t)(MEM32(0x8FCAD4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8FCAD4), ebp (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0033AC9D; /* jg: greater (signed >) */

loc_0033AC13: ;
    eax = MEM32(0x8FCAD0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033AC34; /* je: equal / zero */

loc_0033AC1C: ;
    PUSH32(esp, eax);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0033AC27u); RECOMP_ABI_CALL(0x0055D52Du, sub_0055D52D); /* call 0x0055D52D */

loc_0033AC27: ;
    ecx = eax;
    PUSH32(esp, 0x0033AC2Eu); RECOMP_ABI_CALL(0x0055DAC8u, sub_0055DAC8); /* call 0x0055DAC8 */

loc_0033AC2E: ;
    MEM32(0x8FCAD0) = ebp;

loc_0033AC34: ;
    eax = MEM32(0x8FCACC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033AC55; /* je: equal / zero */

loc_0033AC3D: ;
    PUSH32(esp, eax);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033AC48u); RECOMP_ABI_CALL(0x0055D52Du, sub_0055D52D); /* call 0x0055D52D */

loc_0033AC48: ;
    ecx = eax;
    PUSH32(esp, 0x0033AC4Fu); RECOMP_ABI_CALL(0x0055DAC8u, sub_0055DAC8); /* call 0x0055DAC8 */

loc_0033AC4F: ;
    MEM32(0x8FCACC) = ebp;

loc_0033AC55: ;
    eax = MEM32(0x8FCAC4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033AC76; /* je: equal / zero */

loc_0033AC5E: ;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0033AC69u); RECOMP_ABI_CALL(0x0055D52Du, sub_0055D52D); /* call 0x0055D52D */

loc_0033AC69: ;
    ecx = eax;
    PUSH32(esp, 0x0033AC70u); RECOMP_ABI_CALL(0x0055D588u, sub_0055D588); /* call 0x0055D588 */

loc_0033AC70: ;
    MEM32(0x8FCAC4) = ebp;

loc_0033AC76: ;
    eax = MEM32(0x8FCAC8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033AC97; /* je: equal / zero */

loc_0033AC7F: ;
    PUSH32(esp, eax);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0033AC8Au); RECOMP_ABI_CALL(0x0055D52Du, sub_0055D52D); /* call 0x0055D52D */

loc_0033AC8A: ;
    ecx = eax;
    PUSH32(esp, 0x0033AC91u); RECOMP_ABI_CALL(0x0055DCB8u, sub_0055DCB8); /* call 0x0055DCB8 */

loc_0033AC91: ;
    MEM32(0x8FCAC8) = ebp;

loc_0033AC97: ;
    MEM32(0x8FCAD4) = ebp;

loc_0033AC9D: ;
    POP32(esp, edi);
    MEM32(esi) = ebp;
    MEM32(esi + 4) = ebp;
    MEM32(esi + 0x74) = ebp;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x98) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x98;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0033AD90
 * Original: 0x0033AD90 - 0x0033B093 (771 bytes, 178 insns)
 * Category: game_render
 * CC: cdecl, 10 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033AD90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033AD90: ;
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x0033AD9Bu); RECOMP_ABI_CALL(0x0057494Cu, sub_0057494C); /* call 0x0057494C */

loc_0033AD9B: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0x826D5C);
    PUSH32(esp, 0x0033ADADu); RECOMP_ABI_CALL(0x005725B8u, sub_005725B8); /* call 0x005725B8 */

loc_0033ADAD: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x82A884);
    PUSH32(esp, 0x0033ADBCu); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_0033ADBC: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0033ADC6u); RECOMP_ABI_CALL(0x00574952u, sub_00574952); /* call 0x00574952 */

loc_0033ADC6: ;
    ecx = eax;
    PUSH32(esp, 0x0033ADCDu); RECOMP_ABI_CALL(0x00028949u, sub_00028949); /* call 0x00028949 */

loc_0033ADCD: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x108)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x10C)); /* movss */
    eax = MEM32(esp + 0x11C);
    xmm4 = XMM_SCALAR(MEMF(esp + 0x104)); /* movss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x64) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x6C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x110)); /* movss */
    MEMF(esp + 0x5C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x68) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x74) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x80) = xmm1.f[0]; /* movss */
    xmm1 = xmm3; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x118); /* mulss */
    MEMF(esp + 0x60) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x70) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x78) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x7C) = xmm0.f[0]; /* movss */
    xmm0 = xmm4; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x114); /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x2C) = eax;
    MEM32(esp + 0x30) = eax;
    eax = 1;
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    ecx = esp + 0x84;
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x4C) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x50) = xmm1.f[0]; /* movss */
    MEM32(esp + 0x14) = 0;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = 2;
    MEM32(esp + 0x20) = 3;
    MEM32(esp + 8) = 5;
    MEM32(esp + 4) = 4;
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, 0x0033AEF5u); RECOMP_ABI_CALL(0x0056A600u, sub_0056A600); /* call 0x0056A600 */

loc_0033AEF5: ;
    edx = MEM32(esp + 0x124);
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0033AF05u); RECOMP_ABI_CALL(0x005725B8u, sub_005725B8); /* call 0x005725B8 */

loc_0033AF05: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = esp + 0x8C;
    PUSH32(esp, 0x0033AF16u); RECOMP_ABI_CALL(0x0056798Eu, sub_0056798E); /* call 0x0056798E */

loc_0033AF16: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x30);
    ecx = esp + 0x5C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x829C64);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = esp + 0x98;
    PUSH32(esp, 0x0033AF35u); RECOMP_ABI_CALL(0x00568296u, sub_00568296); /* call 0x00568296 */

loc_0033AF35: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x20);
    eax = esp + 0x3C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x82AE08);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = esp + 0x98;
    PUSH32(esp, 0x0033AF54u); RECOMP_ABI_CALL(0x00568296u, sub_00568296); /* call 0x00568296 */

loc_0033AF54: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x10);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x82A09C);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0x98;
    PUSH32(esp, 0x0033AF73u); RECOMP_ABI_CALL(0x00568296u, sub_00568296); /* call 0x00568296 */

loc_0033AF73: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    edx = esp + 4;
    PUSH32(esp, edx);
    ecx = esp + 0x8C;
    PUSH32(esp, 0x0033AF89u); RECOMP_ABI_CALL(0x0056A770u, sub_0056A770); /* call 0x0056A770 */

loc_0033AF89: ;
    PUSH32(esp, 0x10);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x82A168);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = esp + 0x94;
    PUSH32(esp, 0x0033AFA6u); RECOMP_ABI_CALL(0x0056A304u, sub_0056A304); /* call 0x0056A304 */

loc_0033AFA6: ;
    PUSH32(esp, 0x10);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 0x82ADFC);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esp + 0x94;
    PUSH32(esp, 0x0033AFC3u); RECOMP_ABI_CALL(0x0056A304u, sub_0056A304); /* call 0x0056A304 */

loc_0033AFC3: ;
    PUSH32(esp, 0x10);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x82A158);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    ecx = esp + 0x94;
    PUSH32(esp, 0x0033AFE0u); RECOMP_ABI_CALL(0x0056A304u, sub_0056A304); /* call 0x0056A304 */

loc_0033AFE0: ;
    PUSH32(esp, 4);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x82AE0C);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = esp + 0x94;
    PUSH32(esp, 0x0033AFFDu); RECOMP_ABI_CALL(0x005682CDu, sub_005682CD); /* call 0x005682CD */

loc_0033AFFD: ;
    PUSH32(esp, 4);
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x82A150);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esp + 0x94;
    PUSH32(esp, 0x0033B01Au); RECOMP_ABI_CALL(0x005682CDu, sub_005682CD); /* call 0x005682CD */

loc_0033B01A: ;
    PUSH32(esp, 4);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x82A144);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    ecx = esp + 0x94;
    PUSH32(esp, 0x0033B037u); RECOMP_ABI_CALL(0x005682CDu, sub_005682CD); /* call 0x005682CD */

loc_0033B037: ;
    eax = MEM32(esp + 0x120);
    PUSH32(esp, eax);
    ecx = esp + 4;
    PUSH32(esp, 0x82ADE0);
    PUSH32(esp, ecx);
    ecx = esp + 0x90;
    PUSH32(esp, 0x0033B055u); RECOMP_ABI_CALL(0x0056A352u, sub_0056A352); /* call 0x0056A352 */

loc_0033B055: ;
    edx = esp;
    PUSH32(esp, edx);
    ecx = esp + 0x88;
    PUSH32(esp, 0x0033B065u); RECOMP_ABI_CALL(0x005679BBu, sub_005679BB); /* call 0x005679BB */

loc_0033B065: ;
    eax = MEM32(esp + 0x128);
    PUSH32(esp, eax);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    ecx = esp + 0x8C;
    PUSH32(esp, 0x0033B07Eu); RECOMP_ABI_CALL(0x0056973Eu, sub_0056973E); /* call 0x0056973E */

loc_0033B07E: ;
    ecx = esp + 0x84;
    PUSH32(esp, 0x0033B08Au); RECOMP_ABI_CALL(0x0056A677u, sub_0056A677); /* call 0x0056A677 */

loc_0033B08A: ;
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 44; return; /* ret 40 */

}

/**
 * sub_0033B160
 * Original: 0x0033B160 - 0x0033B188 (40 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033B160(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033B160: ;
    SET_LO8(edx, MEM8(esp + 4));
    ecx = MEM32(ecx + 0x18);
    ecx = MEM32(ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM32(esp + 4) = eax;
    edx = MEM32(ecx + 0x14);
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033B185; /* je: equal / zero */

loc_0033B17B: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033B185u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_0033B185: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0033B1A0
 * Original: 0x0033B1A0 - 0x0033B1C6 (38 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033B1A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033B1A0: ;
    PUSH32(esp, ecx);
    ecx = MEM32(ecx + 0x18);
    eax = MEM32(ecx);
    ecx = ZX8(MEM8(eax + 0x13));
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x14);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esp + 8;
    MEM32(esp + 8) = 0;
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    POP32(esp, edi);
    SET_LO8(eax, ((_flags == 0)) ? 1 : 0); /* setne */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0033B1D0
 * Original: 0x0033B1D0 - 0x0033B219 (73 bytes, 29 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033B1D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033B1D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esi) = 0x829F08;
    if (CMP_EQ(_fa, _fb)) goto loc_0033B1F8; /* je: equal / zero */

loc_0033B1E1: ;
    eax = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033B1E9u); RECOMP_ABI_CALL(0x000356D0u, sub_000356D0); /* call 0x000356D0 */

loc_0033B1E9: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0033B1F8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033B1F5u); } /* indirect call */
    }

loc_0033B1F8: ;
    esi = MEM32(esi + 0x18);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033B216; /* je: equal / zero */

loc_0033B1FF: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033B207u); RECOMP_ABI_CALL(0x000356D0u, sub_000356D0); /* call 0x000356D0 */

loc_0033B207: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0033B216u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033B213u); } /* indirect call */
    }

loc_0033B216: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0033B230
 * Original: 0x0033B230 - 0x0033B5F3 (963 bytes, 221 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0033B230(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_0033B230: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = 0; /* logical op clears CF */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x204) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x204));
    esp = esp - 0x204;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx + 0x18);
    eax = MEM32(eax);
    ecx = ZX8(MEM8(eax + 0x13));
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x14);
    PUSH32(esp, edi);
    edi = esp + 0x18;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x18) = 0;
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_0033B5EC; /* je: equal / zero */

loc_0033B263: ;
    ecx = MEM32(0x8FCB90);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033B26Eu); RECOMP_ABI_CALL(0x000330B5u, sub_000330B5); /* call 0x000330B5 */

loc_0033B26E: ;
    ecx = eax;
    MEM32(esp + 0x18) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033B279u); RECOMP_ABI_CALL(0x00018E31u, sub_00018E31); /* call 0x00018E31 */

loc_0033B279: ;
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    esi = eax;
    eax = MEM32(esp + 0x18);
    ecx = 0x10;
    edi = esp + 0x100;
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
    xmm0 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x124)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x120)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x128)); /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x74)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    MEMF(esp + 0x2C) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(ebx + 0x78)); /* movss */
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ebx + 0x70); /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    MEMF(esp + 0x138) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x134) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x130) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm4.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0033B322; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_0033B31D: ;
    xmm1 = xmm0; /* movaps */
    goto loc_0033B329;

loc_0033B322: ;
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */

loc_0033B329: ;
    xmm1.f[0] = xmm1.f[0] * MEMF(ebx + 0x20); /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x82AF0C); /* mulss */
    PUSH32(esp, ecx);
    ecx = esp + 0x2C;
    MEMF(esp) = xmm1.f[0]; /* movss */
    PUSH32(esp, ecx);
    ecx = esp + 0x148;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033B34Du); RECOMP_ABI_CALL(0x0002182Eu, sub_0002182E); /* call 0x0002182E */

loc_0033B34D: ;
    edx = esp + 0x190;
    PUSH32(esp, edx);
    eax = esp + 0x144;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033B362u); RECOMP_ABI_CALL(0x0059F7D7u, sub_0059F7D7); /* call 0x0059F7D7 */

loc_0033B362: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x3F800000);
    ecx = esp + 0x2C;
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033B37Cu); RECOMP_ABI_CALL(0x000130D0u, sub_000130D0); /* call 0x000130D0 */

loc_0033B37C: ;
    fp_pop(); /* fstp st(0) */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x78)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x30); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ebx + 0x74)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x2C); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(ebx + 0x70)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x28); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0033B3B4; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_0033B3AF: ;
    xmm1 = xmm0; /* movaps */
    goto loc_0033B3B8;

loc_0033B3B4: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */

loc_0033B3B8: ;
    _fca = xmm1.f[0]; _fcb = MEMF(ebx + 0x20); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0033B3E4; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs MEMF(ebx + 0x20)) */

loc_0033B3BE: ;
    xmm1.f[0] = xmm1.f[0] - MEMF(ebx + 0x20); /* subss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebx + 0x20); /* subss */
    xmm1.f[0] = xmm1.f[0] / xmm0.f[0]; /* divss */
    xmm1.f[0] = xmm1.f[0] + MEMF(0x7AA820); /* addss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    goto loc_0033B3F2;

loc_0033B3E4: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AA820)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */

loc_0033B3F2: ;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esp + 0x190;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033B422u); RECOMP_ABI_CALL(0x0001EC96u, sub_0001EC96); /* call 0x0001EC96 */

loc_0033B422: ;
    ecx = esp + 0x100;
    PUSH32(esp, ecx);
    edx = esp + 0x154;
    PUSH32(esp, edx);
    eax = esp + 0xC8;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033B43Fu); RECOMP_ABI_CALL(0x0001155Fu, sub_0001155F); /* call 0x0001155F */

loc_0033B43F: ;
    esi = eax;
    ecx = 0x10;
    edi = esp + 0x8C;
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
    xmm0 = XMM_MEM(esp + 0x8C); /* movaps */
    XMM_STORE(esp + 0x4C, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp + 0x9C); /* movaps */
    ecx = ebx + 0x30;
    PUSH32(esp, ecx);
    XMM_STORE(esp + 0x60, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp + 0xB0); /* movaps */
    edx = esp + 0x1A0;
    PUSH32(esp, edx);
    eax = esp + 0x94;
    XMM_STORE(esp + 0x74, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp + 0xC4); /* movaps */
    PUSH32(esp, eax);
    XMM_STORE(esp + 0x88, xmm0); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033B49Fu); RECOMP_ABI_CALL(0x0001155Fu, sub_0001155F); /* call 0x0001155F */

loc_0033B49F: ;
    esi = eax;
    ecx = 0x10;
    edi = esp + 0xD8;
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
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0xC0;
    PUSH32(esp, ecx);
    ecx = esp + 0x44;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033B4C3u); RECOMP_ABI_CALL(0x000367BFu, sub_000367BF); /* call 0x000367BF */

loc_0033B4C3: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x1C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AA840); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0033B5DD; /* jnp: not parity */

loc_0033B4D9: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x60)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebx + 0x64)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(ebx + 0x68)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x34); /* subss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x38); /* subss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 0x3C); /* subss */
    ecx = 0x10;
    esi = 0x8F9620;
    edi = esp + 0x80;
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
    PUSH32(esp, 0x3F800000);
    ecx = esp + 0x20;
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm2.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033B52Du); RECOMP_ABI_CALL(0x000130D0u, sub_000130D0); /* call 0x000130D0 */

loc_0033B52D: ;
    fp_pop(); /* fstp st(0) */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebx + 0x1C); /* subss */
    edx = esp + 0x80;
    PUSH32(esp, edx);
    eax = esp + 0x44;
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x20); /* mulss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 0x24); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x28); /* mulss */
    PUSH32(esp, eax);
    ecx = esp + 0x1D8;
    PUSH32(esp, ecx);
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xBC) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xC0) = xmm2.f[0]; /* movss */
    MEMF(esp + 0xC4) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033B596u); RECOMP_ABI_CALL(0x0001155Fu, sub_0001155F); /* call 0x0001155F */

loc_0033B596: ;
    ecx = 0x10;
    esi = eax;
    edi = esp + 0xCC;
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
    xmm0 = XMM_MEM(esp + 0xCC); /* movaps */
    XMM_STORE(esp + 0x4C, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp + 0xDC); /* movaps */
    XMM_STORE(esp + 0x5C, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp + 0xEC); /* movaps */
    XMM_STORE(esp + 0x6C, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp + 0xFC); /* movaps */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    XMM_STORE(esp + 0x70, xmm0); /* movaps */

loc_0033B5DD: ;
    eax = MEM32(ebx + 0x14);
    ecx = MEM32(eax);
    edx = esp + 0x40;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033B5ECu); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_0033B5EC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0033B6F0
 * Original: 0x0033B6F0 - 0x0033B70E (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033B6F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033B6F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0033B6F8u); RECOMP_ABI_CALL(0x00028DF4u, sub_00028DF4); /* call 0x00028DF4 */

loc_0033B6F8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0033B708; /* je: equal / zero */

loc_0033B6FF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0033B705u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0033B705: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0033B708: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0033B720
 * Original: 0x0033B720 - 0x0033B907 (487 bytes, 172 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033B720(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033B720: ;
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xA0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0xA8);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xBC);
    ebp = ecx;
    ecx = MEM32(esp + 0xB4);
    MEM32(ebp + 4) = eax;
    MEM32(ebp + 8) = ecx;
    edx = MEM32(edi);
    PUSH32(esp, 0x82AF18);
    PUSH32(esp, edx);
    esi = edi + 9;
    PUSH32(esp, 0x82AE2C);
    PUSH32(esp, esi);
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0033B766u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0033B766: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0033B76Eu); RECOMP_ABI_CALL(0x0002E40Cu, sub_0002E40C); /* call 0x0002E40C */

loc_0033B76E: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0033B776u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033B773u); } /* indirect call */
    }

loc_0033B776: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033B789; /* je: equal / zero */

loc_0033B77C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033B789; /* je: equal / zero */

loc_0033B780: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    goto loc_0033B7D8;

loc_0033B789: ;
    ecx = edi;
    MEM32(esp + 0x24) = ebx;
    MEM32(esp + 0x28) = ebx;
    MEM8(esp + 0x2C) = LO8(ebx);
    PUSH32(esp, 0x0033B79Cu); RECOMP_ABI_CALL(0x000377F5u, sub_000377F5); /* call 0x000377F5 */

loc_0033B79C: ;
    PUSH32(esp, 0x82AF18);
    PUSH32(esp, eax);
    edx = esp + 0x35;
    PUSH32(esp, 0x82AE2C);
    PUSH32(esp, edx);
    MEM32(esp + 0x34) = eax;
    PUSH32(esp, 0x0033B7B5u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0033B7B5: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0033B7BDu); RECOMP_ABI_CALL(0x0002E40Cu, sub_0002E40C); /* call 0x0002E40C */

loc_0033B7BD: ;
    edx = MEM32(eax);
    ecx = esp + 0x2D;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0033B7C9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033B7C6u); } /* indirect call */
    }

loc_0033B7C9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033B801; /* je: equal / zero */

loc_0033B7CD: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    edx = esp + 0x45;
    PUSH32(esp, edx);

loc_0033B7D8: ;
    eax = esp + 0x2C;
    PUSH32(esp, 0x4F4B17B);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033B7E7u); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_0033B7E7: ;
    eax = MEM32(esp + 0x34);
    ecx = MEM32(eax + 0x14);
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    PUSH32(esp, eax);
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0033B7FEu); RECOMP_ABI_CALL(0x000356D0u, sub_000356D0); /* call 0x000356D0 */

loc_0033B7FE: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0033B801: ;
    edx = MEM32(edi);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    PUSH32(esp, 0x82AF10);
    PUSH32(esp, edx);
    PUSH32(esp, 0x82AE2C);
    PUSH32(esp, esi);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0033B822u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0033B822: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0033B82Au); RECOMP_ABI_CALL(0x0002E40Cu, sub_0002E40C); /* call 0x0002E40C */

loc_0033B82A: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0033B832u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033B82Fu); } /* indirect call */
    }

loc_0033B832: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033B843; /* je: equal / zero */

loc_0033B836: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033B843; /* je: equal / zero */

loc_0033B83A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    goto loc_0033B892;

loc_0033B843: ;
    ecx = edi;
    MEM32(esp + 0x24) = ebx;
    MEM32(esp + 0x28) = ebx;
    MEM8(esp + 0x2C) = LO8(ebx);
    PUSH32(esp, 0x0033B856u); RECOMP_ABI_CALL(0x000377F5u, sub_000377F5); /* call 0x000377F5 */

loc_0033B856: ;
    PUSH32(esp, 0x82AF10);
    PUSH32(esp, eax);
    edx = esp + 0x35;
    PUSH32(esp, 0x82AE2C);
    PUSH32(esp, edx);
    MEM32(esp + 0x34) = eax;
    PUSH32(esp, 0x0033B86Fu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0033B86F: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0033B877u); RECOMP_ABI_CALL(0x0002E40Cu, sub_0002E40C); /* call 0x0002E40C */

loc_0033B877: ;
    edx = MEM32(eax);
    ecx = esp + 0x2D;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0033B883u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033B880u); } /* indirect call */
    }

loc_0033B883: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033B8BB; /* je: equal / zero */

loc_0033B887: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    edx = esp + 0x45;
    PUSH32(esp, edx);

loc_0033B892: ;
    eax = esp + 0x30;
    PUSH32(esp, 0x4F4B17B);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033B8A1u); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_0033B8A1: ;
    eax = MEM32(esp + 0x38);
    ecx = MEM32(eax + 0x14);
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    PUSH32(esp, eax);
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0033B8B8u); RECOMP_ABI_CALL(0x000356D0u, sub_000356D0); /* call 0x000356D0 */

loc_0033B8B8: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0033B8BB: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    eax = MEM32(ebp + 4);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    if (CMP_LE(_fas, _fbs)) goto loc_0033B8FA; /* jle: less or equal (signed <=) */

loc_0033B8DC: ;
    /* nop */

loc_0033B8E0: ;
    edx = MEM32(ebp + 8);
    ecx = MEM32(edx + esi * 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0033B8F2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033B8EFu); } /* indirect call */
    }

loc_0033B8F2: ;
    eax = MEM32(ebp + 4);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0033B8E0; /* jl: less (signed <) */

loc_0033B8FA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xA0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0033B980
 * Original: 0x0033B980 - 0x0033BA02 (130 bytes, 53 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033B980(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033B980: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033B9D2; /* jne: not equal / not zero */

loc_0033B98D: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0033B9CC; /* jle: less or equal (signed <=) */

loc_0033B997: ;
    SET_LO8(eax, MEM8(esp + 0x10));
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    SET_LO8(ebx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */

loc_0033B9A2: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(ecx + edi * 4);
    ecx = MEM32(edx + 0x18);
    ecx = MEM32(ecx);
    eax = ebx;
    MEM32(esp + 0x10) = eax;
    edx = MEM32(ecx + 0x14);
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033B9C4; /* je: equal / zero */

loc_0033B9BA: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033B9C4u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_0033B9C4: ;
    eax = MEM32(esi + 4);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0033B9A2; /* jl: less (signed <) */

loc_0033B9CC: ;
    POP32(esp, edi);

loc_0033B9CD: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0033B9D2: ;
    SET_LO8(ebx, MEM8(esp + 0xC));
    edx = MEM32(esi + 8);
    ecx = MEM32(edx + ecx * 4);
    ecx = MEM32(ecx + 0x18);
    ecx = MEM32(ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM32(esp + 0xC) = eax;
    edx = MEM32(ecx + 0x14);
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033B9CD; /* je: equal / zero */

loc_0033B9F3: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033B9FDu); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_0033B9FD: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0033BA30
 * Original: 0x0033BA30 - 0x0033BA80 (80 bytes, 33 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033BA30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033BA30: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 4);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0033BA7B; /* jle: less or equal (signed <=) */

loc_0033BA3D: ;
    SET_LO8(eax, MEM8(esp + 0xC));
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    SET_LO8(ebx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    /* nop */

loc_0033BA50: ;
    ecx = MEM32(edi + 8);
    edx = MEM32(ecx + esi * 4);
    ecx = MEM32(edx + 0x18);
    ecx = MEM32(ecx);
    eax = ebx;
    MEM32(esp + 0x10) = eax;
    edx = MEM32(ecx + 0x14);
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033BA72; /* je: equal / zero */

loc_0033BA68: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033BA72u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_0033BA72: ;
    eax = MEM32(edi + 4);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0033BA50; /* jl: less (signed <) */

loc_0033BA7A: ;
    POP32(esp, ebx);

loc_0033BA7B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0033BAA0
 * Original: 0x0033BAA0 - 0x0033BADD (61 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033BAA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033BAA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x829F2C;
    if (CMP_EQ(_fa, _fb)) goto loc_0033BAB9; /* je: equal / zero */

loc_0033BAB0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033BAB6u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0033BAB6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0033BAB9: ;
    ecx = esi;
    MEM32(esi + 0x18) = 0;
    PUSH32(esp, 0x0033BAC7u); RECOMP_ABI_CALL(0x00028DF4u, sub_00028DF4); /* call 0x00028DF4 */

loc_0033BAC7: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0033BAD7; /* je: equal / zero */

loc_0033BACE: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0033BAD4u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0033BAD4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0033BAD7: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0033BAF0
 * Original: 0x0033BAF0 - 0x0033BB0C (28 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033BAF0(void)
{

loc_0033BAF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0033BAF8u); RECOMP_ABI_CALL(0x00017680u, sub_00017680); /* call 0x00017680 */

loc_0033BAF8: ;
    MEM32(esi) = 0x82AF20;
    MEM32(esi + 0x80) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0033BB20
 * Original: 0x0033BB20 - 0x0033BB90 (112 bytes, 41 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033BB20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033BB20: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x80);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esi) = 0x82AF20;
    if (CMP_EQ(_fa, _fb)) goto loc_0033BB4B; /* je: equal / zero */

loc_0033BB34: ;
    eax = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033BB3Cu); RECOMP_ABI_CALL(0x000356D0u, sub_000356D0); /* call 0x000356D0 */

loc_0033BB3C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0033BB4Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033BB48u); } /* indirect call */
    }

loc_0033BB4B: ;
    edi = MEM32(esi + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esi) = 0x829F08;
    if (CMP_EQ(_fa, _fb)) goto loc_0033BB6F; /* je: equal / zero */

loc_0033BB58: ;
    eax = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033BB60u); RECOMP_ABI_CALL(0x000356D0u, sub_000356D0); /* call 0x000356D0 */

loc_0033BB60: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0033BB6Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033BB6Cu); } /* indirect call */
    }

loc_0033BB6F: ;
    esi = MEM32(esi + 0x18);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033BB8D; /* je: equal / zero */

loc_0033BB76: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033BB7Eu); RECOMP_ABI_CALL(0x000356D0u, sub_000356D0); /* call 0x000356D0 */

loc_0033BB7E: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0033BB8Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033BB8Au); } /* indirect call */
    }

loc_0033BB8D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0033BBB0
 * Original: 0x0033BBB0 - 0x0033BBDE (46 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033BBB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033BBB0: ;
    PUSH32(esp, ecx);
    edx = ecx;
    eax = MEM32(edx + 0x18);
    eax = MEM32(eax);
    ecx = ZX8(MEM8(eax + 0x13));
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x14);
    PUSH32(esp, edi);
    edi = esp + 8;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 8) = 0;
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    POP32(esp, edi);
    POP32(esp, esi);
    if ((_flags != 0)) goto loc_0033BBDC; /* je: equal / zero */

loc_0033BBD5: ;
    ecx = edx;
    PUSH32(esp, 0x0033BBDCu); RECOMP_ABI_CALL(0x0002783Cu, sub_0002783C); /* call 0x0002783C */

loc_0033BBDC: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0033BBF0
 * Original: 0x0033BBF0 - 0x0033BC14 (36 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033BBF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033BBF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x829F40;
    PUSH32(esp, 0x0033BBFEu); RECOMP_ABI_CALL(0x00028DF4u, sub_00028DF4); /* call 0x00028DF4 */

loc_0033BBFE: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0033BC0E; /* je: equal / zero */

loc_0033BC05: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0033BC0Bu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0033BC0B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0033BC0E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0033BC20
 * Original: 0x0033BC20 - 0x0033BD36 (278 bytes, 80 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033BC20(void)
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

loc_0033BC20: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = ebp * 4;
    esi = ecx;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    MEM32(esp + 0x18) = esi;
    PUSH32(esp, 0x0033BC3Fu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0033BC3F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    MEM32(esp + 0x1C) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_0033BD14; /* jle: less or equal (signed <=) */

loc_0033BC50: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x90);
    PUSH32(esp, 0x0033BC5Bu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0033BC5B: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033BCFE; /* je: equal / zero */

loc_0033BC68: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(esi) = 0x829F08;
    MEM32(esi + 0x10) = 0xFFFFFFFFu;
    MEM32(esi + 0x14) = ebx;
    MEM32(esi + 0x18) = ebx;
    MEMF(esi + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x70) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x74) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x78) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0033BC97u); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_0033BC97: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x3E9;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x829F04); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7ABD64); /* addss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(esi + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x829354)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0033BCDE; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0033BCD1: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AD3C8)); /* movss */
    MEMF(esi + 0x20) = xmm0.f[0]; /* movss */

loc_0033BCDE: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi + 0x70) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x74) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x78) = xmm0.f[0]; /* movss */
    MEM32(esi) = 0x82AF20;
    MEM32(esi + 0x80) = ebx;
    goto loc_0033BD00;

loc_0033BCFE: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0033BD00: ;
    edx = MEM32(esp + 0x1C);
    MEM32(edx + edi * 4) = esi;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0033BC50; /* jl: less (signed <) */

loc_0033BD10: ;
    esi = MEM32(esp + 0x10);

loc_0033BD14: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0033BD26u); RECOMP_ABI_CALL(0x0002D426u, sub_0002D426); /* call 0x0002D426 */

loc_0033BD26: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0033BD2Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033BD2Bu); } /* indirect call */
    }

loc_0033BD2E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0033BD80
 * Original: 0x0033BD80 - 0x0033BD85 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033BD80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033BD80: ;
    g_seh_ebp = ebp; sub_00028A75(); return; /* tail jmp 0x00028A75 */

}

/**
 * sub_0033BD90
 * Original: 0x0033BD90 - 0x0033BDB1 (33 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033BD90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033BD90: ;
    SET_LO8(eax, MEM8(esp + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_0033BD9E; /* je: equal / zero */

loc_0033BD9B: ;
    _fb = (uint32_t)(0xFFFFFFF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xFFFFFFF0u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0033BD9E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0033BDAB; /* je: equal / zero */

loc_0033BDA2: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0033BDA8u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0033BDA8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0033BDAB: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0033BDC0
 * Original: 0x0033BDC0 - 0x0033BE1C (92 bytes, 39 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0033BDC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033BDC0: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = esi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x150);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = ecx;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    MEM32(ebp + 4) = esi;
    PUSH32(esp, 0x0033BDDEu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0033BDDE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033BE12; /* je: equal / zero */

loc_0033BDE5: ;
    PUSH32(esp, ebx);
    ebx = eax + 0x10;
    MEM32(eax) = esi;
    eax = esi + -1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = ebx;
    if (CMP_L(_fas, _fbs)) goto loc_0033BE08; /* jl: less (signed <) */

loc_0033BDF5: ;
    esi = eax + 1;

loc_0033BDF8: ;
    ecx = edi;
    PUSH32(esp, 0x0033BDFFu); RECOMP_ABI_CALL(0x0002B6D5u, sub_0002B6D5); /* call 0x0002B6D5 */

loc_0033BDFF: ;
    _fb = (uint32_t)(0x150) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x150;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0033BDF8; /* jne: not equal / not zero */

loc_0033BE08: ;
    POP32(esp, edi);
    MEM32(ebp) = ebx;
    POP32(esp, ebx);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_0033BE12: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    MEM32(ebp) = eax;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0033BE40
 * Original: 0x0033BE40 - 0x0033BEAD (109 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033BE40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033BE40: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ebx = MEM32(esi + 4);
    eax = MEM32(esi);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0033BEAA; /* jle: less or equal (signed <=) */

loc_0033BE51: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    /* nop */

loc_0033BE60: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = edx;
    MEM32(eax + 4) = esi;
    SET_LO16(ebx, MEM16(eax + 0x38));
    ebx = ebx & 0xFFFC;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = ebx | 0xC;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM16(eax + 0x38) = LO16(ebx);
    MEM8(eax + 0x38) = MEM8(eax + 0x38) & 0xCF;
    _fa = (uint32_t)(MEM8(eax + 0x38)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ecx (32-bit) */
    SET_LO8(ebx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    { uint32_t _sv=(uint32_t)(LO8(ebx)), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        SET_LO8(ebx, _sv << _sc);
        _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
      } }
    SET_LO8(ebx, LO8(ebx) ^ MEM8(eax + 0xC));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(eax + 0x140) = LO8(ecx);
    SET_LO8(ebx, LO8(ebx) & 2);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(eax + 0xC) = MEM8(eax + 0xC) ^ LO8(ebx);
    _fa = (uint32_t)(MEM8(eax + 0xC)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(eax + 0x141) = LO8(ecx);
    MEMF(eax + 0x30) = xmm0.f[0]; /* movss */
    ebx = MEM32(esi + 4);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x150) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x150;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0033BE60; /* jl: less (signed <) */

loc_0033BEAA: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0033BED0
 * Original: 0x0033BED0 - 0x0033BED5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033BED0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033BED0: ;
    g_seh_ebp = ebp; sub_00019EAD(); return; /* tail jmp 0x00019EAD */

}

/**
 * sub_0033BEE0
 * Original: 0x0033BEE0 - 0x0033BF2E (78 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033BEE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033BEE0: ;
    ecx = MEM32(esp + 4);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x34);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0xA);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x0033BEFDu); RECOMP_ABI_CALL(0x0003270Fu, sub_0003270F); /* call 0x0003270F */

loc_0033BEFD: ;
    ebp = eax;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0033BF27; /* jle: less or equal (signed <=) */

loc_0033BF05: ;
    PUSH32(esp, esi);

loc_0033BF06: ;
    esi = MEM32(esp + edi * 4 + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0033BF21; /* jl: less (signed <) */

loc_0033BF0E: ;
    ecx = MEM32(ebx);
    PUSH32(esp, 0x0033BF15u); RECOMP_ABI_CALL(0x0001AEE3u, sub_0001AEE3); /* call 0x0001AEE3 */

loc_0033BF15: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0033BF21; /* jae: above or equal (unsigned >=) */

loc_0033BF19: ;
    ecx = MEM32(ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0033BF21u); RECOMP_ABI_CALL(0x0001686Bu, sub_0001686B); /* call 0x0001686B */

loc_0033BF21: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0033BF06; /* jl: less (signed <) */

loc_0033BF26: ;
    POP32(esp, esi);

loc_0033BF27: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0033BF50
 * Original: 0x0033BF50 - 0x0033BF9E (78 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033BF50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033BF50: ;
    ecx = MEM32(esp + 4);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x34);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0xA);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x0033BF6Du); RECOMP_ABI_CALL(0x0003270Fu, sub_0003270F); /* call 0x0003270F */

loc_0033BF6D: ;
    ebp = eax;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0033BF97; /* jle: less or equal (signed <=) */

loc_0033BF75: ;
    PUSH32(esp, esi);

loc_0033BF76: ;
    esi = MEM32(esp + edi * 4 + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0033BF91; /* jl: less (signed <) */

loc_0033BF7E: ;
    ecx = MEM32(ebx);
    PUSH32(esp, 0x0033BF85u); RECOMP_ABI_CALL(0x0001AEE3u, sub_0001AEE3); /* call 0x0001AEE3 */

loc_0033BF85: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0033BF91; /* jae: above or equal (unsigned >=) */

loc_0033BF89: ;
    ecx = MEM32(ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0033BF91u); RECOMP_ABI_CALL(0x0001BB22u, sub_0001BB22); /* call 0x0001BB22 */

loc_0033BF91: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0033BF76; /* jl: less (signed <) */

loc_0033BF96: ;
    POP32(esp, esi);

loc_0033BF97: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0033BFC0
 * Original: 0x0033BFC0 - 0x0033BFE8 (40 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033BFC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033BFC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033BFCBu); RECOMP_ABI_CALL(0x000356D0u, sub_000356D0); /* call 0x000356D0 */

loc_0033BFCB: ;
    SET_LO8(eax, MEM8(esp + 0xC));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0033BFE2; /* je: equal / zero */

loc_0033BFD6: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0033BFE2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033BFDFu); } /* indirect call */
    }

loc_0033BFE2: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0033C000
 * Original: 0x0033C000 - 0x0033C11C (284 bytes, 108 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033C000(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033C000: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x20);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033C025; /* je: equal / zero */

loc_0033C00E: ;
    eax = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033C016u); RECOMP_ABI_CALL(0x000356D0u, sub_000356D0); /* call 0x000356D0 */

loc_0033C016: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0033C025u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033C022u); } /* indirect call */
    }

loc_0033C025: ;
    edi = MEM32(esi + 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033C043; /* je: equal / zero */

loc_0033C02C: ;
    eax = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033C034u); RECOMP_ABI_CALL(0x000356D0u, sub_000356D0); /* call 0x000356D0 */

loc_0033C034: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0033C043u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033C040u); } /* indirect call */
    }

loc_0033C043: ;
    edi = MEM32(esi + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033C061; /* je: equal / zero */

loc_0033C04A: ;
    eax = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033C052u); RECOMP_ABI_CALL(0x000356D0u, sub_000356D0); /* call 0x000356D0 */

loc_0033C052: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0033C061u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033C05Eu); } /* indirect call */
    }

loc_0033C061: ;
    edi = MEM32(esi + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033C07F; /* je: equal / zero */

loc_0033C068: ;
    eax = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033C070u); RECOMP_ABI_CALL(0x000356D0u, sub_000356D0); /* call 0x000356D0 */

loc_0033C070: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0033C07Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033C07Cu); } /* indirect call */
    }

loc_0033C07F: ;
    edi = MEM32(esi + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033C09D; /* je: equal / zero */

loc_0033C086: ;
    eax = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033C08Eu); RECOMP_ABI_CALL(0x000356D0u, sub_000356D0); /* call 0x000356D0 */

loc_0033C08E: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0033C09Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033C09Au); } /* indirect call */
    }

loc_0033C09D: ;
    edi = MEM32(esi + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033C0BB; /* je: equal / zero */

loc_0033C0A4: ;
    eax = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033C0ACu); RECOMP_ABI_CALL(0x000356D0u, sub_000356D0); /* call 0x000356D0 */

loc_0033C0AC: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0033C0BBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033C0B8u); } /* indirect call */
    }

loc_0033C0BB: ;
    edi = MEM32(esi + 0x18);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033C0D9; /* je: equal / zero */

loc_0033C0C2: ;
    eax = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033C0CAu); RECOMP_ABI_CALL(0x000356D0u, sub_000356D0); /* call 0x000356D0 */

loc_0033C0CA: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0033C0D9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033C0D6u); } /* indirect call */
    }

loc_0033C0D9: ;
    edi = MEM32(esi + 0x1C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033C0F7; /* je: equal / zero */

loc_0033C0E0: ;
    eax = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033C0E8u); RECOMP_ABI_CALL(0x000356D0u, sub_000356D0); /* call 0x000356D0 */

loc_0033C0E8: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0033C0F7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033C0F4u); } /* indirect call */
    }

loc_0033C0F7: ;
    POP32(esp, edi);
    MEM32(esi + 0x20) = ebx;
    MEM32(esi + 0x18) = ebx;
    MEM32(esi + 0x10) = ebx;
    MEM32(esi + 0x14) = ebx;
    MEM32(esi + 0x24) = ebx;
    MEM32(esi + 0x28) = ebx;
    MEM32(esi + 0x2C) = ebx;
    MEM32(esi + 4) = ebx;
    MEM32(esi + 8) = ebx;
    MEM32(esi + 0xC) = ebx;
    MEM32(esi + 0x1C) = ebx;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0033C170
 * Original: 0x0033C170 - 0x0033C7C9 (1625 bytes, 559 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033C170(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033C170: ;
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x84;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    esi = ecx;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0033C18Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033C18Au); } /* indirect call */
    }

loc_0033C18C: ;
    edi = MEM32(esp + 0x94);
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033C1C6; /* je: equal / zero */

loc_0033C199: ;
    PUSH32(esp, 0x82B1B4);
    ecx = esp + 0x14;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0033C1A9u); RECOMP_ABI_CALL(0x00033A88u, sub_00033A88); /* call 0x00033A88 */

loc_0033C1A9: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x4F4B810);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0033C1C1u); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_0033C1C1: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0033C1C8;

loc_0033C1C6: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0033C1C8: ;
    MEM32(esi + 0xC) = ebx;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0033C1DCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033C1DAu); } /* indirect call */
    }

loc_0033C1DC: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033C20F; /* je: equal / zero */

loc_0033C1E2: ;
    PUSH32(esp, 0x82B1A0);
    eax = esp + 0x14;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033C1F2u); RECOMP_ABI_CALL(0x00033A88u, sub_00033A88); /* call 0x00033A88 */

loc_0033C1F2: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x4F4B810);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0033C20Au); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_0033C20A: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0033C211;

loc_0033C20F: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0033C211: ;
    MEM32(esi + 4) = ebx;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0033C225u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033C223u); } /* indirect call */
    }

loc_0033C225: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033C258; /* je: equal / zero */

loc_0033C22B: ;
    PUSH32(esp, 0x82B18C);
    eax = esp + 0x14;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033C23Bu); RECOMP_ABI_CALL(0x00033A88u, sub_00033A88); /* call 0x00033A88 */

loc_0033C23B: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x4F4B810);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0033C253u); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_0033C253: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0033C25A;

loc_0033C258: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0033C25A: ;
    MEM32(esi + 8) = ebx;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0033C26Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033C26Cu); } /* indirect call */
    }

loc_0033C26E: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033C2A1; /* je: equal / zero */

loc_0033C274: ;
    PUSH32(esp, 0x82B17C);
    eax = esp + 0x14;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033C284u); RECOMP_ABI_CALL(0x00033A88u, sub_00033A88); /* call 0x00033A88 */

loc_0033C284: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x4F4B810);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0033C29Cu); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_0033C29C: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0033C2A3;

loc_0033C2A1: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0033C2A3: ;
    MEM32(esi + 0x10) = ebx;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0033C2B7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033C2B5u); } /* indirect call */
    }

loc_0033C2B7: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033C2EA; /* je: equal / zero */

loc_0033C2BD: ;
    PUSH32(esp, 0x82B164);
    eax = esp + 0x14;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033C2CDu); RECOMP_ABI_CALL(0x00033A88u, sub_00033A88); /* call 0x00033A88 */

loc_0033C2CD: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x4F4A771);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0033C2E5u); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_0033C2E5: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0033C2EC;

loc_0033C2EA: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0033C2EC: ;
    MEM32(esi + 0x14) = ebx;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0033C300u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033C2FEu); } /* indirect call */
    }

loc_0033C300: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033C333; /* je: equal / zero */

loc_0033C306: ;
    PUSH32(esp, 0x82B13C);
    eax = esp + 0x14;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033C316u); RECOMP_ABI_CALL(0x00033A88u, sub_00033A88); /* call 0x00033A88 */

loc_0033C316: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x4F4A771);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0033C32Eu); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_0033C32E: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0033C335;

loc_0033C333: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0033C335: ;
    MEM32(esi + 0x18) = ebx;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0033C349u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033C347u); } /* indirect call */
    }

loc_0033C349: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033C37C; /* je: equal / zero */

loc_0033C34F: ;
    PUSH32(esp, 0x82B114);
    eax = esp + 0x14;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033C35Fu); RECOMP_ABI_CALL(0x00033A88u, sub_00033A88); /* call 0x00033A88 */

loc_0033C35F: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x4F4A771);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0033C377u); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_0033C377: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0033C37E;

loc_0033C37C: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0033C37E: ;
    MEM32(esi + 0x1C) = ebx;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0033C392u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033C390u); } /* indirect call */
    }

loc_0033C392: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033C3C5; /* je: equal / zero */

loc_0033C398: ;
    PUSH32(esp, 0x82B0F0);
    eax = esp + 0x14;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033C3A8u); RECOMP_ABI_CALL(0x00033A88u, sub_00033A88); /* call 0x00033A88 */

loc_0033C3A8: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x4F4A771);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0033C3C0u); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_0033C3C0: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0033C3C7;

loc_0033C3C5: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0033C3C7: ;
    MEM32(esi + 0x20) = ebx;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0033C3DBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033C3D9u); } /* indirect call */
    }

loc_0033C3DB: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033C40E; /* je: equal / zero */

loc_0033C3E1: ;
    PUSH32(esp, 0x82B0C8);
    eax = esp + 0x14;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033C3F1u); RECOMP_ABI_CALL(0x00033A88u, sub_00033A88); /* call 0x00033A88 */

loc_0033C3F1: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x4F4A771);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0033C409u); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_0033C409: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0033C410;

loc_0033C40E: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0033C410: ;
    MEM32(esi + 0x24) = ebx;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0033C424u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033C422u); } /* indirect call */
    }

loc_0033C424: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033C457; /* je: equal / zero */

loc_0033C42A: ;
    PUSH32(esp, 0x82B0A0);
    eax = esp + 0x14;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033C43Au); RECOMP_ABI_CALL(0x00033A88u, sub_00033A88); /* call 0x00033A88 */

loc_0033C43A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x4F4A771);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0033C452u); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_0033C452: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0033C459;

loc_0033C457: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0033C459: ;
    MEM32(esi + 0x28) = ebx;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0033C46Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033C46Bu); } /* indirect call */
    }

loc_0033C46D: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033C4A0; /* je: equal / zero */

loc_0033C473: ;
    PUSH32(esp, 0x82B078);
    eax = esp + 0x14;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033C483u); RECOMP_ABI_CALL(0x00033A88u, sub_00033A88); /* call 0x00033A88 */

loc_0033C483: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x4F4A771);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0033C49Bu); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_0033C49B: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0033C4A2;

loc_0033C4A0: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0033C4A2: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x82B060);
    ecx = esp + 0x18;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    MEM32(esi + 0x2C) = ebx;
    PUSH32(esp, 0x0033C4B6u); RECOMP_ABI_CALL(0x00033A88u, sub_00033A88); /* call 0x00033A88 */

loc_0033C4B6: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = esi + 0x40;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x0033C4C4u); RECOMP_ABI_CALL(0x00019EADu, sub_00019EAD); /* call 0x00019EAD */

loc_0033C4C4: ;
    PUSH32(esp, 0x82B03C);
    edx = esp + 0x18;
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0033C4D4u); RECOMP_ABI_CALL(0x00033A88u, sub_00033A88); /* call 0x00033A88 */

loc_0033C4D4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = esi + 0x44;
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x0033C4E2u); RECOMP_ABI_CALL(0x00019EADu, sub_00019EAD); /* call 0x00019EAD */

loc_0033C4E2: ;
    PUSH32(esp, 0x82B018);
    eax = esp + 0x18;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033C4F2u); RECOMP_ABI_CALL(0x00033A88u, sub_00033A88); /* call 0x00033A88 */

loc_0033C4F2: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + 0x48;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033C4FEu); RECOMP_ABI_CALL(0x00019EADu, sub_00019EAD); /* call 0x00019EAD */

loc_0033C4FE: ;
    PUSH32(esp, 0x82AFF0);
    ecx = esp + 0x18;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0033C50Eu); RECOMP_ABI_CALL(0x00033A88u, sub_00033A88); /* call 0x00033A88 */

loc_0033C50E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0033C516u); RECOMP_ABI_CALL(0x0002E40Cu, sub_0002E40C); /* call 0x0002E40C */

loc_0033C516: ;
    edx = MEM32(eax);
    ecx = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0033C522u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033C51Fu); } /* indirect call */
    }

loc_0033C522: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033C52C; /* je: equal / zero */

loc_0033C526: ;
    edx = MEM32(eax + 0x14);
    MEM32(esi + 0x38) = edx;

loc_0033C52C: ;
    PUSH32(esp, 0x82AFC8);
    eax = esp + 0x18;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033C53Cu); RECOMP_ABI_CALL(0x00033A88u, sub_00033A88); /* call 0x00033A88 */

loc_0033C53C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0033C544u); RECOMP_ABI_CALL(0x0002E40Cu, sub_0002E40C); /* call 0x0002E40C */

loc_0033C544: ;
    edx = MEM32(eax);
    ecx = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0033C550u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033C54Du); } /* indirect call */
    }

loc_0033C550: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033C55A; /* je: equal / zero */

loc_0033C554: ;
    edx = MEM32(eax + 0x14);
    MEM32(esi + 0x3C) = edx;

loc_0033C55A: ;
    PUSH32(esp, 0x82AFA4);
    eax = esp + 0x18;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033C56Au); RECOMP_ABI_CALL(0x00033A88u, sub_00033A88); /* call 0x00033A88 */

loc_0033C56A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0033C572u); RECOMP_ABI_CALL(0x0002E40Cu, sub_0002E40C); /* call 0x0002E40C */

loc_0033C572: ;
    edx = MEM32(eax);
    ecx = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0033C57Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033C57Bu); } /* indirect call */
    }

loc_0033C57E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033C588; /* je: equal / zero */

loc_0033C582: ;
    edx = MEM32(eax + 0x14);
    MEM32(esi + 0x30) = edx;

loc_0033C588: ;
    PUSH32(esp, 0x82AF80);
    eax = esp + 0x18;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033C598u); RECOMP_ABI_CALL(0x00033A88u, sub_00033A88); /* call 0x00033A88 */

loc_0033C598: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0033C5A0u); RECOMP_ABI_CALL(0x0002E40Cu, sub_0002E40C); /* call 0x0002E40C */

loc_0033C5A0: ;
    edx = MEM32(eax);
    ecx = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0033C5ACu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033C5A9u); } /* indirect call */
    }

loc_0033C5AC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033C5B6; /* je: equal / zero */

loc_0033C5B0: ;
    edx = MEM32(eax + 0x14);
    MEM32(esi + 0x34) = edx;

loc_0033C5B6: ;
    eax = MEM32(esi + 0x70);
    edx = MEM32(esi + 0xC);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 0x3FFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = esp + 0x10;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, ecx);
    ecx = MEM32(edx);
    PUSH32(esp, 0x0033C5D4u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_0033C5D4: ;
    eax = MEM32(esi + 0x70);
    edx = MEM32(esi + 0x10);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x12) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 0x1FFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = esp + 0x10;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, ecx);
    ecx = MEM32(edx);
    PUSH32(esp, 0x0033C5F2u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_0033C5F2: ;
    ecx = MEM32(esi + 4);
    eax = esp + 0x10;
    MEM32(esp + 0x10) = 0x15E0;
    ecx = MEM32(ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033C609u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_0033C609: ;
    eax = MEM32(esi + 8);
    edx = esp + 0x10;
    MEM32(esp + 0x10) = 0x157C;
    ecx = MEM32(eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0033C620u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_0033C620: ;
    ecx = MEM32(esi + 0x74);
    eax = MEM32(esi + 0x14);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(0xF) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = ecx & 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = esp + 0x10;
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0033C63Cu); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_0033C63C: ;
    eax = MEM32(esi + 0x74);
    ecx = eax;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(0x10) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0xF) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(esi + 0x18);
    ecx = ecx & 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = esp + 0x10;
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0033C65Fu); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_0033C65F: ;
    eax = MEM32(esi + 0x74);
    ecx = eax;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(0x10) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0xF) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(esi + 0x1C);
    ecx = ecx & 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = esp + 0x10;
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0033C682u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_0033C682: ;
    ecx = MEM32(esi + 0x74);
    eax = MEM32(esi + 0x20);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(0xF) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = ecx & 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = esp + 0x10;
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0033C69Eu); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_0033C69E: ;
    ecx = MEM32(esi + 0x74);
    eax = MEM32(esi + 0x24);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(0xF) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = ecx & 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = esp + 0x10;
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0033C6BAu); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_0033C6BA: ;
    edx = MEM32(esi + 0x28);
    ecx = esp + 0x10;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, ecx);
    ecx = MEM32(edx);
    PUSH32(esp, 0x0033C6D1u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_0033C6D1: ;
    ecx = MEM32(esi + 0x2C);
    eax = esp + 0x10;
    MEM32(esp + 0x10) = 0;
    ecx = MEM32(ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033C6E8u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_0033C6E8: ;
    eax = MEM32(esi + 0x6C);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x20 (8-bit) */
    PUSH32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_0033C711; /* je: equal / zero */

loc_0033C6F1: ;
    PUSH32(esp, 0x829CBC);
    PUSH32(esp, 0x0033C6FBu); RECOMP_ABI_CALL(0x00038236u, sub_00038236); /* call 0x00038236 */

loc_0033C6FB: ;
    eax = esi + 0x48;
    PUSH32(esp, eax);
    PUSH32(esp, 0x829C90);
    PUSH32(esp, 0x0033C709u); RECOMP_ABI_CALL(0x00038236u, sub_00038236); /* call 0x00038236 */

loc_0033C709: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x829C9C);
    goto loc_0033C72F;

loc_0033C711: ;
    PUSH32(esp, 0x829CB4);
    PUSH32(esp, 0x0033C71Bu); RECOMP_ABI_CALL(0x00038236u, sub_00038236); /* call 0x00038236 */

loc_0033C71B: ;
    eax = esi + 0x48;
    PUSH32(esp, eax);
    PUSH32(esp, 0x829CA8);
    PUSH32(esp, 0x0033C729u); RECOMP_ABI_CALL(0x00038236u, sub_00038236); /* call 0x00038236 */

loc_0033C729: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x829C84);

loc_0033C72F: ;
    PUSH32(esp, 0x0033C734u); RECOMP_ABI_CALL(0x00038236u, sub_00038236); /* call 0x00038236 */

loc_0033C734: ;
    edx = MEM32(esi + 0x6C);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = edx & 0x7F;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0xA (8-bit) */
    POP32(esp, ebp);
    PUSH32(esp, ebx);
    if (CMP_AE(_fa, _fb)) goto loc_0033C74B; /* jae: above or equal (unsigned >=) */

loc_0033C744: ;
    PUSH32(esp, 0x829CC4);
    goto loc_0033C750;

loc_0033C74B: ;
    PUSH32(esp, 0x829CCC);

loc_0033C750: ;
    PUSH32(esp, 0x0033C755u); RECOMP_ABI_CALL(0x00038236u, sub_00038236); /* call 0x00038236 */

loc_0033C755: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x82AF58);
    eax = esp + 0x14;
    PUSH32(esp, edi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    MEM32(esp + 0x18) = esi;
    PUSH32(esp, 0x0033C76Eu); RECOMP_ABI_CALL(0x00033A88u, sub_00033A88); /* call 0x00033A88 */

loc_0033C76E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, 0x0033C77Bu); RECOMP_ABI_CALL(0x00019EADu, sub_00019EAD); /* call 0x00019EAD */

loc_0033C77B: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x829C78);
    PUSH32(esp, 0x0033C78Au); RECOMP_ABI_CALL(0x00038236u, sub_00038236); /* call 0x00038236 */

loc_0033C78A: ;
    PUSH32(esp, 0x82AF30);
    edx = esp + 0x1C;
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    MEM32(esp + 0x20) = esi;
    PUSH32(esp, 0x0033C79Eu); RECOMP_ABI_CALL(0x00033A88u, sub_00033A88); /* call 0x00033A88 */

loc_0033C79E: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, 0x0033C7ABu); RECOMP_ABI_CALL(0x00019EADu, sub_00019EAD); /* call 0x00019EAD */

loc_0033C7AB: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x829C6C);
    PUSH32(esp, 0x0033C7BAu); RECOMP_ABI_CALL(0x00038236u, sub_00038236); /* call 0x00038236 */

loc_0033C7BA: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x84;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0033C960
 * Original: 0x0033C960 - 0x0033CA96 (310 bytes, 98 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033C960(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033C960: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x18);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033CA8E; /* je: equal / zero */

loc_0033C974: ;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1C), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033CA8E; /* je: equal / zero */

loc_0033C97D: ;
    ecx = MEM32(esp + 0x38);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0033CA3D; /* je: equal / zero */

loc_0033C989: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0033C9E4; /* je: equal / zero */

loc_0033C98C: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0033CA8E; /* jne: not equal / not zero */

loc_0033C993: ;
    ecx = esp + 0x38;
    MEM32(esp + 0x38) = edi;
    PUSH32(esp, ecx);
    ecx = MEM32(eax);
    PUSH32(esp, 0x0033C9A3u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_0033C9A3: ;
    eax = MEM32(esi + 0x1C);
    edx = esp + 8;
    MEM32(esp + 8) = edi;
    ecx = MEM32(eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0033C9B6u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_0033C9B6: ;
    edx = MEM32(esi + 0x2C);
    ecx = esp + 0xC;
    MEM32(esp + 0xC) = edi;
    PUSH32(esp, ecx);
    ecx = MEM32(edx);
    PUSH32(esp, 0x0033C9C9u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_0033C9C9: ;
    ecx = MEM32(esi + 0x28);
    eax = esp + 0x10;
    MEM32(esp + 0x10) = edi;
    ecx = MEM32(ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033C9DCu); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_0033C9DC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0033C9E4: ;
    edx = esp + 0x14;
    MEM32(esp + 0x14) = 1;
    ecx = MEM32(eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0033C9F8u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_0033C9F8: ;
    ecx = MEM32(esi + 0x1C);
    eax = esp + 0x18;
    MEM32(esp + 0x18) = edi;
    ecx = MEM32(ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033CA0Bu); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_0033CA0B: ;
    eax = MEM32(esi + 0x2C);
    edx = esp + 0x1C;
    MEM32(esp + 0x1C) = edi;
    ecx = MEM32(eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0033CA1Eu); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_0033CA1E: ;
    edx = MEM32(esi + 0x28);
    ecx = esp + 0x20;
    MEM32(esp + 0x20) = 1;
    PUSH32(esp, ecx);
    ecx = MEM32(edx);
    PUSH32(esp, 0x0033CA35u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_0033CA35: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0033CA3D: ;
    ecx = esp + 0x24;
    MEM32(esp + 0x24) = edi;
    PUSH32(esp, ecx);
    ecx = MEM32(eax);
    PUSH32(esp, 0x0033CA4Du); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_0033CA4D: ;
    eax = MEM32(esi + 0x1C);
    edx = esp + 0x28;
    MEM32(esp + 0x28) = 1;
    ecx = MEM32(eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0033CA64u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_0033CA64: ;
    edx = MEM32(esi + 0x2C);
    ecx = esp + 0x2C;
    MEM32(esp + 0x2C) = 1;
    PUSH32(esp, ecx);
    ecx = MEM32(edx);
    PUSH32(esp, 0x0033CA7Bu); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_0033CA7B: ;
    ecx = MEM32(esi + 0x28);
    eax = esp + 0x30;
    MEM32(esp + 0x30) = edi;
    ecx = MEM32(ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033CA8Eu); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_0033CA8E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0033CAF0
 * Original: 0x0033CAF0 - 0x0033CB28 (56 bytes, 21 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033CAF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033CAF0: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0033CB12; /* je: equal / zero */

loc_0033CAF9: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0033CB25; /* jne: not equal / not zero */

loc_0033CAFC: ;
    ecx = MEM32(ecx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033CB25; /* je: equal / zero */

loc_0033CB03: ;
    ecx = MEM32(ecx);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033CB0Fu); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_0033CB0F: ;
    esp += 12; return; /* ret 8 */

loc_0033CB12: ;
    ecx = MEM32(ecx + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033CB25; /* je: equal / zero */

loc_0033CB19: ;
    ecx = MEM32(ecx);
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0033CB25u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_0033CB25: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0033CB40
 * Original: 0x0033CB40 - 0x0033CCCE (398 bytes, 145 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033CB40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033CB40: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x18);
    edx = MEM32(ebx + 0x28);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x74);
    ecx = edi;
    eax = edx;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(0x10) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x10) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = ecx & 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033CB7A; /* jne: not equal / not zero */

loc_0033CB67: ;
    ebp = edx;
    ebp = ebp ^ edi;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, 0x8000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0033CB7A; /* jne: not equal / not zero */

loc_0033CB73: ;
    ebp = 2;
    goto loc_0033CB8B;

loc_0033CB7A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033CB89; /* je: equal / zero */

loc_0033CB7E: ;
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp HI8(edx), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_0033CB89; /* jns: not sign (positive) */

loc_0033CB82: ;
    ebp = 1;
    goto loc_0033CB8B;

loc_0033CB89: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0033CB8B: ;
    eax = MEM32(ebx + 0x24);
    edx = MEM32(esi + 0x70);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x1F) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(0x1F) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033CBA2; /* jne: not equal / not zero */

loc_0033CB9B: ;
    ebx = 2;
    goto loc_0033CBA9;

loc_0033CBA2: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(ebx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */

loc_0033CBA9: ;
    edx = ebp;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0033CC16; /* je: equal / zero */

loc_0033CBB1: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0033CBFF; /* je: equal / zero */

loc_0033CBB4: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0033CC6B; /* jne: not equal / not zero */

loc_0033CBBB: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033CBE1; /* jne: not equal / not zero */

loc_0033CBC0: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033CC6B; /* je: equal / zero */

loc_0033CBC8: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, 0x8000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0033CC6B; /* je: equal / zero */

loc_0033CBD4: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0033CBDCu); RECOMP_ABI_CALL(0x000239B7u, sub_000239B7); /* call 0x000239B7 */

loc_0033CBDC: ;
    goto loc_0033CC6B;

loc_0033CBE1: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033CC6B; /* jne: not equal / not zero */

loc_0033CBE9: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033CC6B; /* je: equal / zero */

loc_0033CBED: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, 0x8000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0033CC6B; /* je: equal / zero */

loc_0033CBF5: ;
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x0033CBFDu); RECOMP_ABI_CALL(0x000239B7u, sub_000239B7); /* call 0x000239B7 */

loc_0033CBFD: ;
    goto loc_0033CC6B;

loc_0033CBFF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    ecx = esi;
    if (CMP_NE(_fa, _fb)) goto loc_0033CC0D; /* jne: not equal / not zero */

loc_0033CC05: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0033CC0Bu); RECOMP_ABI_CALL(0x000239B7u, sub_000239B7); /* call 0x000239B7 */

loc_0033CC0B: ;
    goto loc_0033CC6B;

loc_0033CC0D: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0033CC14u); RECOMP_ABI_CALL(0x000239B7u, sub_000239B7); /* call 0x000239B7 */

loc_0033CC14: ;
    goto loc_0033CC6B;

loc_0033CC16: ;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033CC6B; /* je: equal / zero */

loc_0033CC1D: ;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1C), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033CC6B; /* je: equal / zero */

loc_0033CC22: ;
    ecx = esp + 0x10;
    MEM32(esp + 0x10) = ebp;
    PUSH32(esp, ecx);
    ecx = MEM32(eax);
    PUSH32(esp, 0x0033CC32u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_0033CC32: ;
    eax = MEM32(esi + 0x1C);
    edx = esp + 0x14;
    MEM32(esp + 0x14) = ebp;
    ecx = MEM32(eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0033CC45u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_0033CC45: ;
    edx = MEM32(esi + 0x2C);
    ecx = esp + 0x18;
    MEM32(esp + 0x18) = ebp;
    PUSH32(esp, ecx);
    ecx = MEM32(edx);
    PUSH32(esp, 0x0033CC58u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_0033CC58: ;
    ecx = MEM32(esi + 0x28);
    eax = esp + 0x1C;
    MEM32(esp + 0x1C) = ebp;
    ecx = MEM32(ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033CC6Bu); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_0033CC6B: ;
    ecx = MEM32(esp + 0x24);
    eax = MEM32(ecx + 0x28);
    edx = MEM32(esi + 0x74);
    eax = eax & 0x3FFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx & 0x3FFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033CC89; /* jne: not equal / not zero */

loc_0033CC84: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033CCC4; /* je: equal / zero */

loc_0033CC89: ;
    edx = MEM32(ecx + 0x24);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(esp + 0x24) = eax;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_0033CCB1; /* js: sign (negative) */

loc_0033CC94: ;
    esi = MEM32(esi + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033CCC4; /* je: equal / zero */

loc_0033CC9B: ;
    ecx = MEM32(esi);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033CCA7u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_0033CCA7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0033CCB1: ;
    esi = MEM32(esi + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033CCC4; /* je: equal / zero */

loc_0033CCB8: ;
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    ecx = MEM32(esi);
    PUSH32(esp, 0x0033CCC4u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_0033CCC4: ;
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
 * sub_0033CD40
 * Original: 0x0033CD40 - 0x0033CFA4 (612 bytes, 204 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033CD40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033CD40: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(edi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033CD7B; /* je: equal / zero */

loc_0033CD50: ;
    eax = MEM32(esi + 0x24);
    edx = MEM32(edi + 0x70);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 0x3FFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx & 0x3FFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033CD7B; /* je: equal / zero */

loc_0033CD6B: ;
    MEM32(esp + 0x10) = eax;
    ecx = MEM32(ecx);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033CD7Bu); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_0033CD7B: ;
    ecx = MEM32(edi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033CDAD; /* je: equal / zero */

loc_0033CD82: ;
    eax = MEM32(esi + 0x24);
    edx = MEM32(edi + 0x70);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x12) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(0x12) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 0x1FFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx & 0x1FFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033CDAD; /* je: equal / zero */

loc_0033CD9D: ;
    MEM32(esp + 0x10) = eax;
    ecx = MEM32(ecx);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033CDADu); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_0033CDAD: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0033CDB5u); RECOMP_ABI_CALL(0x0001AE57u, sub_0001AE57); /* call 0x0001AE57 */

loc_0033CDB5: ;
    eax = MEM32(esi + 0x28);
    ecx = MEM32(edi + 0x74);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0xF) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(0xF) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx & 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033CE1A; /* je: equal / zero */

loc_0033CDCB: ;
    ecx = MEM32(edi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033CE1A; /* je: equal / zero */

loc_0033CDD2: ;
    edx = esp + 0x10;
    MEM32(esp + 0x10) = eax;
    ecx = MEM32(ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0033CDE2u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_0033CDE2: ;
    eax = MEM32(esi + 0x28);
    edx = MEM32(edi + 0x20);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0xF) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = esp + 0x10;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, ecx);
    ecx = MEM32(edx);
    PUSH32(esp, 0x0033CDFEu); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_0033CDFE: ;
    eax = MEM32(esi + 0x28);
    edx = MEM32(edi + 0x24);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0xF) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = esp + 0x10;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, ecx);
    ecx = MEM32(edx);
    PUSH32(esp, 0x0033CE1Au); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_0033CE1A: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(edi + 0x6C);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0xD) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(0xD) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx & 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033CF4A; /* je: equal / zero */

loc_0033CE34: ;
    PUSH32(esp, ebp);
    ebp = edi + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = MEM32(ebp);
    if (CMP_EQ(_fa, _fb)) goto loc_0033CEC5; /* je: equal / zero */

loc_0033CE43: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033CE55; /* je: equal / zero */

loc_0033CE47: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x829CBC);
    PUSH32(esp, 0x0033CE52u); RECOMP_ABI_CALL(0x00038236u, sub_00038236); /* call 0x00038236 */

loc_0033CE52: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0033CE55: ;
    eax = MEM32(edi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033CE6D; /* je: equal / zero */

loc_0033CE5C: ;
    edx = edi + 0x48;
    PUSH32(esp, edx);
    PUSH32(esp, 0x829C90);
    PUSH32(esp, 0x0033CE6Au); RECOMP_ABI_CALL(0x00038236u, sub_00038236); /* call 0x00038236 */

loc_0033CE6A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0033CE6D: ;
    eax = MEM32(edi + 0x48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ebx = edi + 0x48;
    if (CMP_EQ(_fa, _fb)) goto loc_0033CE88; /* je: equal / zero */

loc_0033CE77: ;
    eax = edi + 0x44;
    PUSH32(esp, eax);
    PUSH32(esp, 0x829C9C);
    PUSH32(esp, 0x0033CE85u); RECOMP_ABI_CALL(0x00038236u, sub_00038236); /* call 0x00038236 */

loc_0033CE85: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0033CE88: ;
    _fa = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033CE9C; /* je: equal / zero */

loc_0033CE8E: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x829CB4);
    PUSH32(esp, 0x0033CE99u); RECOMP_ABI_CALL(0x0001E877u, sub_0001E877); /* call 0x0001E877 */

loc_0033CE99: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0033CE9C: ;
    eax = MEM32(edi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ebp = edi + 0x44;
    if (CMP_EQ(_fa, _fb)) goto loc_0033CEB4; /* je: equal / zero */

loc_0033CEA6: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x829CA8);
    PUSH32(esp, 0x0033CEB1u); RECOMP_ABI_CALL(0x0001E877u, sub_0001E877); /* call 0x0001E877 */

loc_0033CEB1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0033CEB4: ;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033CF49; /* je: equal / zero */

loc_0033CEBD: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x829C84);
    goto loc_0033CF41;

loc_0033CEC5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033CED7; /* je: equal / zero */

loc_0033CEC9: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x829CB4);
    PUSH32(esp, 0x0033CED4u); RECOMP_ABI_CALL(0x00038236u, sub_00038236); /* call 0x00038236 */

loc_0033CED4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0033CED7: ;
    eax = MEM32(edi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033CEEF; /* je: equal / zero */

loc_0033CEDE: ;
    eax = edi + 0x48;
    PUSH32(esp, eax);
    PUSH32(esp, 0x829CA8);
    PUSH32(esp, 0x0033CEECu); RECOMP_ABI_CALL(0x00038236u, sub_00038236); /* call 0x00038236 */

loc_0033CEEC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0033CEEF: ;
    eax = MEM32(edi + 0x48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ebx = edi + 0x48;
    if (CMP_EQ(_fa, _fb)) goto loc_0033CF0A; /* je: equal / zero */

loc_0033CEF9: ;
    eax = edi + 0x44;
    PUSH32(esp, eax);
    PUSH32(esp, 0x829C84);
    PUSH32(esp, 0x0033CF07u); RECOMP_ABI_CALL(0x00038236u, sub_00038236); /* call 0x00038236 */

loc_0033CF07: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0033CF0A: ;
    _fa = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033CF1E; /* je: equal / zero */

loc_0033CF10: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x829CBC);
    PUSH32(esp, 0x0033CF1Bu); RECOMP_ABI_CALL(0x0001E877u, sub_0001E877); /* call 0x0001E877 */

loc_0033CF1B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0033CF1E: ;
    eax = MEM32(edi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ebp = edi + 0x44;
    if (CMP_EQ(_fa, _fb)) goto loc_0033CF36; /* je: equal / zero */

loc_0033CF28: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x829C90);
    PUSH32(esp, 0x0033CF33u); RECOMP_ABI_CALL(0x0001E877u, sub_0001E877); /* call 0x0001E877 */

loc_0033CF33: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0033CF36: ;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033CF49; /* je: equal / zero */

loc_0033CF3B: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x829C9C);

loc_0033CF41: ;
    PUSH32(esp, 0x0033CF46u); RECOMP_ABI_CALL(0x0001E877u, sub_0001E877); /* call 0x0001E877 */

loc_0033CF46: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0033CF49: ;
    POP32(esp, ebp);

loc_0033CF4A: ;
    eax = MEM32(edi + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ebx = edi + 0x40;
    if (CMP_EQ(_fa, _fb)) goto loc_0033CF94; /* je: equal / zero */

loc_0033CF54: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(edi + 0x6C);
    eax = eax & 0x7F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx & 0x7F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033CF94; /* je: equal / zero */

loc_0033CF64: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    PUSH32(esp, ebx);
    if (CMP_AE(_fa, _fb)) goto loc_0033CF7C; /* jae: above or equal (unsigned >=) */

loc_0033CF6A: ;
    PUSH32(esp, 0x829CC4);
    PUSH32(esp, 0x0033CF74u); RECOMP_ABI_CALL(0x00038236u, sub_00038236); /* call 0x00038236 */

loc_0033CF74: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x829CCC);
    goto loc_0033CF8C;

loc_0033CF7C: ;
    PUSH32(esp, 0x829CCC);
    PUSH32(esp, 0x0033CF86u); RECOMP_ABI_CALL(0x00038236u, sub_00038236); /* call 0x00038236 */

loc_0033CF86: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x829CC4);

loc_0033CF8C: ;
    PUSH32(esp, 0x0033CF91u); RECOMP_ABI_CALL(0x0001E877u, sub_0001E877); /* call 0x0001E877 */

loc_0033CF91: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0033CF94: ;
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x4C;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0xC;
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
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0033D040
 * Original: 0x0033D040 - 0x0033D1BF (383 bytes, 144 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033D040(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033D040: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0xC);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033D065; /* je: equal / zero */

loc_0033D04E: ;
    eax = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033D056u); RECOMP_ABI_CALL(0x000356D0u, sub_000356D0); /* call 0x000356D0 */

loc_0033D056: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0033D065u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033D062u); } /* indirect call */
    }

loc_0033D065: ;
    edi = MEM32(esi + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033D083; /* je: equal / zero */

loc_0033D06C: ;
    eax = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033D074u); RECOMP_ABI_CALL(0x000356D0u, sub_000356D0); /* call 0x000356D0 */

loc_0033D074: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0033D083u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033D080u); } /* indirect call */
    }

loc_0033D083: ;
    edi = MEM32(esi + 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033D0A1; /* je: equal / zero */

loc_0033D08A: ;
    eax = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033D092u); RECOMP_ABI_CALL(0x000356D0u, sub_000356D0); /* call 0x000356D0 */

loc_0033D092: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0033D0A1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033D09Eu); } /* indirect call */
    }

loc_0033D0A1: ;
    edi = MEM32(esi + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033D0BF; /* je: equal / zero */

loc_0033D0A8: ;
    eax = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033D0B0u); RECOMP_ABI_CALL(0x000356D0u, sub_000356D0); /* call 0x000356D0 */

loc_0033D0B0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0033D0BFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033D0BCu); } /* indirect call */
    }

loc_0033D0BF: ;
    edi = MEM32(esi + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033D0DD; /* je: equal / zero */

loc_0033D0C6: ;
    eax = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033D0CEu); RECOMP_ABI_CALL(0x000356D0u, sub_000356D0); /* call 0x000356D0 */

loc_0033D0CE: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0033D0DDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033D0DAu); } /* indirect call */
    }

loc_0033D0DD: ;
    edi = MEM32(esi + 0x18);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033D0FB; /* je: equal / zero */

loc_0033D0E4: ;
    eax = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033D0ECu); RECOMP_ABI_CALL(0x000356D0u, sub_000356D0); /* call 0x000356D0 */

loc_0033D0EC: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0033D0FBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033D0F8u); } /* indirect call */
    }

loc_0033D0FB: ;
    edi = MEM32(esi + 0x1C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033D119; /* je: equal / zero */

loc_0033D102: ;
    eax = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033D10Au); RECOMP_ABI_CALL(0x000356D0u, sub_000356D0); /* call 0x000356D0 */

loc_0033D10A: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0033D119u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033D116u); } /* indirect call */
    }

loc_0033D119: ;
    edi = MEM32(esi + 0x20);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033D137; /* je: equal / zero */

loc_0033D120: ;
    eax = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033D128u); RECOMP_ABI_CALL(0x000356D0u, sub_000356D0); /* call 0x000356D0 */

loc_0033D128: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0033D137u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033D134u); } /* indirect call */
    }

loc_0033D137: ;
    edi = MEM32(esi + 0x24);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033D155; /* je: equal / zero */

loc_0033D13E: ;
    eax = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033D146u); RECOMP_ABI_CALL(0x000356D0u, sub_000356D0); /* call 0x000356D0 */

loc_0033D146: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0033D155u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033D152u); } /* indirect call */
    }

loc_0033D155: ;
    edi = MEM32(esi + 0x28);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033D173; /* je: equal / zero */

loc_0033D15C: ;
    eax = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033D164u); RECOMP_ABI_CALL(0x000356D0u, sub_000356D0); /* call 0x000356D0 */

loc_0033D164: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0033D173u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033D170u); } /* indirect call */
    }

loc_0033D173: ;
    edi = MEM32(esi + 0x2C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033D191; /* je: equal / zero */

loc_0033D17A: ;
    eax = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033D182u); RECOMP_ABI_CALL(0x000356D0u, sub_000356D0); /* call 0x000356D0 */

loc_0033D182: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0033D191u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033D18Eu); } /* indirect call */
    }

loc_0033D191: ;
    POP32(esp, edi);
    MEM32(esi + 0x28) = ebx;
    MEM32(esi + 0x2C) = ebx;
    MEM32(esi + 0x20) = ebx;
    MEM32(esi + 0x24) = ebx;
    MEM32(esi + 0x30) = ebx;
    MEM32(esi + 0x34) = ebx;
    MEM32(esi + 0x38) = ebx;
    MEM32(esi + 0xC) = ebx;
    MEM32(esi + 0x10) = ebx;
    MEM32(esi + 4) = ebx;
    MEM32(esi + 8) = ebx;
    MEM32(esi + 0x14) = ebx;
    MEM32(esi + 0x18) = ebx;
    MEM32(esi + 0x1C) = ebx;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0033D220
 * Original: 0x0033D220 - 0x0033D2B7 (151 bytes, 35 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033D220(void)
{
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0033D220: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x7AA820)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    PUSH32(esp, esi);
    esi = ecx;
    MEMF(esi + eax * 4 + 0x288) = xmm0.f[0]; /* movss */
    ecx = MEM32(eax * 8 + 0x829728);
    PUSH32(esp, edi);
    edi = MEM32(eax * 8 + 0x82972C);
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0033D271; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0033D252: ;
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7ABE28); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    goto loc_0033D286;

loc_0033D271: ;
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7ABE28); /* mulss */
    MEMF(esp + 0x10) = xmm2.f[0]; /* movss */

loc_0033D286: ;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    ecx = MEM32(esi + ecx * 4 + 0x13C);
    ecx = MEM32(ecx);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033D29Fu); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_0033D29F: ;
    eax = MEM32(esi + edi * 4 + 0x13C);
    ecx = MEM32(eax);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0033D2B2u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_0033D2B2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0033D2E0
 * Original: 0x0033D2E0 - 0x0033D2EE (14 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033D2E0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0033D2E0: ;
    eax = MEM32(esp + 4);
    fp_push(MEMF(ecx + eax * 4 + 0x288)); /* fld float */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0033D300
 * Original: 0x0033D300 - 0x0033D382 (130 bytes, 30 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033D300(void)
{
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0033D300: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax * 8 + 0x829728);
    xmm1 = XMM_SCALAR(MEMF(0x7AA820)); /* movss */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    MEM32(esi) = edx;
    esi = MEM32(esp + 0x10);
    edx = MEM32(eax * 8 + 0x82972C);
    MEM32(esi) = edx;
    xmm0 = XMM_SCALAR(MEMF(ecx + eax * 4 + 0x288)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    POP32(esp, esi);
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0033D360; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0033D336: ;
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7ABE28); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x14);
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax) = xmm1.f[0]; /* movss */
    MEMF(ecx) = xmm0.f[0]; /* movss */
    esp += 24; return; /* ret 20 */

loc_0033D360: ;
    edx = MEM32(esp + 0x10);
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    eax = MEM32(esp + 0x14);
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7ABE28); /* mulss */
    MEMF(edx) = xmm2.f[0]; /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0033D3B0
 * Original: 0x0033D3B0 - 0x0033D3C2 (18 bytes, 4 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033D3B0(void)
{

loc_0033D3B0: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    MEM32(ecx + edx * 4 + 0x254) = eax;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0033D3D0
 * Original: 0x0033D3D0 - 0x0033D3DE (14 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033D3D0(void)
{

loc_0033D3D0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(ecx + eax * 4 + 0x254);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0033D3F0
 * Original: 0x0033D3F0 - 0x0033D42A (58 bytes, 18 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033D3F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033D3F0: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0033D407; /* jne: not equal / not zero */

loc_0033D404: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_0033D407: ;
    ecx = MEM32(esi + 0x21C);
    eax = esp + 0xC;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    ecx = MEM32(ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033D41Fu); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_0033D41F: ;
    MEM8(esi + 0x308) = LO8(ebx);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0033D440
 * Original: 0x0033D440 - 0x0033D4B3 (115 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033D440(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033D440: ;
    _fb = (uint32_t)(0x200) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x200;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = ecx + 0x13C;

loc_0033D451: ;
    PUSH32(esp, edi);
    eax = esp + 0x10;
    PUSH32(esp, 0x82B1C4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033D461u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0033D461: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0033D475u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033D473u); } /* indirect call */
    }

loc_0033D475: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033D49C; /* je: equal / zero */

loc_0033D47B: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, 0x4F4B17B);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0033D497u); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_0033D497: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0033D49E;

loc_0033D49C: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0033D49E: ;
    MEM32(ebx) = esi;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x46) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x46 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0033D451; /* jl: less (signed <) */

loc_0033D4A9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x200) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x200;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0033D4D0
 * Original: 0x0033D4D0 - 0x0033D4F8 (40 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033D4D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033D4D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033D4DBu); RECOMP_ABI_CALL(0x000356D0u, sub_000356D0); /* call 0x000356D0 */

loc_0033D4DB: ;
    SET_LO8(eax, MEM8(esp + 0xC));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0033D4F2; /* je: equal / zero */

loc_0033D4E6: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0033D4F2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033D4EFu); } /* indirect call */
    }

loc_0033D4F2: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0033D510
 * Original: 0x0033D510 - 0x0033D628 (280 bytes, 90 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033D510(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033D510: ;
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x88;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x94);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x82B1E8);
    eax = esp + 0x1C;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0033D533u); RECOMP_ABI_CALL(0x00033A88u, sub_00033A88); /* call 0x00033A88 */

loc_0033D533: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0033D53Bu); RECOMP_ABI_CALL(0x0002E40Cu, sub_0002E40C); /* call 0x0002E40C */

loc_0033D53B: ;
    edx = MEM32(eax);
    ecx = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0033D547u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033D544u); } /* indirect call */
    }

loc_0033D547: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033D550; /* je: equal / zero */

loc_0033D54B: ;
    edx = MEM32(eax + 0x14);
    MEM32(esi) = edx;

loc_0033D550: ;
    eax = MEM32(esi + 4);
    edi = esi + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0033D55Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033D559u); } /* indirect call */
    }

loc_0033D55C: ;
    edx = MEM32(esi + 0x5C);
    ebx = esi + 0x5C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0033D568u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033D565u); } /* indirect call */
    }

loc_0033D568: ;
    ecx = MEM32(esp + 0x9C);
    eax = MEM32(esi + 0xC0);
    ebp = esi + 0xC0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0033D581u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033D57Eu); } /* indirect call */
    }

loc_0033D581: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033D5A4; /* je: equal / zero */

loc_0033D587: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0033D58Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033D58Cu); } /* indirect call */
    }

loc_0033D58F: ;
    ecx = MEM32(esi);
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0033D599u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033D596u); } /* indirect call */
    }

loc_0033D599: ;
    eax = MEM32(esi);
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0033D5A4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033D5A1u); } /* indirect call */
    }

loc_0033D5A4: ;
    ecx = esi;
    PUSH32(esp, 0x0033D5ABu); RECOMP_ABI_CALL(0x0002701Cu, sub_0002701C); /* call 0x0002701C */

loc_0033D5AB: ;
    ebx = esi + 0x288;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0033D5C0;

    /* nop */
    /* nop */

loc_0033D5C0: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AA820)); /* movss */
    MEMF(ebx) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = MEM32(edi + 0x829728);
    ebp = MEM32(edi + 0x82972C);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    eax = MEM32(esi + edx * 4 + 0x13C);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = MEM32(eax);
    PUSH32(esp, 0x0033D5FAu); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_0033D5FA: ;
    edx = MEM32(esi + ebp * 4 + 0x13C);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = MEM32(edx);
    PUSH32(esp, 0x0033D60Du); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_0033D60D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x100 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0033D5C0; /* jb: below (unsigned <) */

loc_0033D61B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x88;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0033D670
 * Original: 0x0033D670 - 0x0033D692 (34 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033D670(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033D670: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x829E54;
    if (TEST_Z(_fa, _fb)) goto loc_0033D68C; /* je: equal / zero */

loc_0033D680: ;
    ecx = MEM32(0x9093C0);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0033D68Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033D689u); } /* indirect call */
    }

loc_0033D68C: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0033D6A0
 * Original: 0x0033D6A0 - 0x0033D736 (150 bytes, 50 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0033D6A0(void)
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

loc_0033D6A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    eax = esp + 0x28;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033D6BFu); RECOMP_ABI_CALL(0x0055B642u, sub_0055B642); /* call 0x0055B642 */

loc_0033D6BF: ;
    edi = MEM32(ebp + 8);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033D6CDu); RECOMP_ABI_CALL(0x00019615u, sub_00019615); /* call 0x00019615 */

loc_0033D6CD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033D6DE; /* je: equal / zero */

loc_0033D6D4: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_0033D6DE: ;
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 8)); /* fmul dword ptr [esi + 8] */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    MEMF(esp + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x4C);
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    PUSH32(esp, edi);
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033D72Bu); RECOMP_ABI_CALL(0x00012955u, sub_00012955); /* call 0x00012955 */

loc_0033D72B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0033D760
 * Original: 0x0033D760 - 0x0033D77F (31 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033D760(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033D760: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x829FD4;
    if (TEST_Z(_fa, _fb)) goto loc_0033D779; /* je: equal / zero */

loc_0033D770: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0033D776u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0033D776: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0033D779: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0033D790
 * Original: 0x0033D790 - 0x0033D7AF (31 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033D790(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033D790: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x829FD4;
    if (TEST_Z(_fa, _fb)) goto loc_0033D7A9; /* je: equal / zero */

loc_0033D7A0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0033D7A6u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0033D7A6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0033D7A9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0033D7C0
 * Original: 0x0033D7C0 - 0x0033D7DF (31 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033D7C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033D7C0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x829FD4;
    if (TEST_Z(_fa, _fb)) goto loc_0033D7D9; /* je: equal / zero */

loc_0033D7D0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0033D7D6u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0033D7D6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0033D7D9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0033D7F0
 * Original: 0x0033D7F0 - 0x0033D824 (52 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033D7F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033D7F0: ;
    eax = MEM32(0x8FCADC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033D823; /* jne: not equal / not zero */

loc_0033D7F9: ;
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x14BC);
    PUSH32(esp, 0x0033D808u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0033D808: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033D81C; /* je: equal / zero */

loc_0033D80F: ;
    ecx = eax;
    PUSH32(esp, 0x0033D816u); RECOMP_ABI_CALL(0x0001DF03u, sub_0001DF03); /* call 0x0001DF03 */

loc_0033D816: ;
    MEM32(0x8FCADC) = eax;
    esp += 4; return; /* ret */

loc_0033D81C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x8FCADC) = eax;

loc_0033D823: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0033D840
 * Original: 0x0033D840 - 0x0033D850 (16 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033D840(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033D840: ;
    ecx = MEM32(0x8FCADC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033D84F; /* je: equal / zero */

loc_0033D84A: ;
    g_seh_ebp = ebp; sub_000197E6(); return; /* tail jmp 0x000197E6 */

loc_0033D84F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0033D860
 * Original: 0x0033D860 - 0x0033D87E (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033D860(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033D860: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0033D868u); RECOMP_ABI_CALL(0x0002ED7Bu, sub_0002ED7B); /* call 0x0002ED7B */

loc_0033D868: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0033D878; /* je: equal / zero */

loc_0033D86F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0033D875u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0033D875: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0033D878: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0033D890
 * Original: 0x0033D890 - 0x0033D925 (149 bytes, 45 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033D890(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033D890: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    ebx = MEM32(esi + 0xDD4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x0033D8A4u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0033D8A4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033D8BC; /* je: equal / zero */

loc_0033D8AB: ;
    MEM32(eax) = 0x829FF4;
    MEM32(eax + 4) = 0x18;
    edi = eax;
    goto loc_0033D8BE;

loc_0033D8BC: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0033D8BE: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x18);
    MEM32(edi + 8) = 0;
    MEM32(edi + 0xC) = eax;
    MEM32(edi + 0x10) = ecx;
    MEM32(edi + 0x14) = edx;
    eax = MEM32(esi + 0x14B8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033D90B; /* jne: not equal / not zero */

loc_0033D8E4: ;
    PUSH32(esp, 0);
    PUSH32(esp, 8);
    PUSH32(esp, 0x0033D8EDu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0033D8ED: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033D903; /* je: equal / zero */

loc_0033D8F4: ;
    MEM32(eax) = 0x82A078;
    MEM32(eax + 4) = 0;
    goto loc_0033D905;

loc_0033D903: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0033D905: ;
    MEM32(esi + 0x14B8) = eax;

loc_0033D90B: ;
    MEM32(esi + ebx * 4 + 0xDD8) = edi;
    eax = MEM32(esi + 0xDD4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(esi + 0xDD4) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0033D950
 * Original: 0x0033D950 - 0x0033DBBF (623 bytes, 178 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033D950(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033D950: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    eax = MEM32(ebx + 4);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x1C);
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0x0033D967u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0033D967: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033D98F; /* je: equal / zero */

loc_0033D96E: ;
    MEM32(eax) = 0x82A018;
    MEM32(eax + 4) = 0x1C;
    MEM32(eax + 0xC) = edi;
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM16(eax + 0x18) = LO16(ecx);
    esi = eax;
    goto loc_0033D991;

loc_0033D98F: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0033D991: ;
    edx = MEM32(esp + 0x14);
    MEM32(esi + 0xC) = edx;
    MEM32(esi + 8) = edi;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    SET_LO8(eax, MEM8(ebp + 0x46));
    MEM8(esi + 0x10) = LO8(eax);
    SET_LO8(ecx, MEM8(ebp + 0x47));
    MEM8(esi + 0x11) = LO8(ecx);
    SET_LO8(edx, MEM8(ebp + 0x48));
    MEM8(esi + 0x12) = LO8(edx);
    SET_LO8(eax, MEM8(ebp + 0x4A));
    MEM8(esi + 0x13) = LO8(eax);
    SET_LO8(ecx, MEM8(ebp + 0x4C));
    MEM8(esi + 0x14) = LO8(ecx);
    SET_LO8(edx, MEM8(ebp + 0x4D));
    MEM8(esi + 0x15) = LO8(edx);
    SET_LO8(eax, MEM8(ebp + 0x4E));
    MEM8(esi + 0x16) = LO8(eax);
    SET_LO8(ecx, MEM8(ebp + 0x4F));
    MEM8(esi + 0x17) = LO8(ecx);
    SET_LO8(edx, MEM8(ebp + 0x51));
    MEM8(esi + 0x18) = LO8(edx);
    SET_LO8(eax, MEM8(ebp + 0x52));
    MEM8(esi + 0x19) = LO8(eax);
    _fa = (uint32_t)(MEM32(ebx + 0x6E8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x6E8), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033DA03; /* jne: not equal / not zero */

loc_0033D9E4: ;
    PUSH32(esp, edi);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0033D9ECu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0033D9EC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033D9FB; /* je: equal / zero */

loc_0033D9F3: ;
    MEM32(eax) = 0x82A064;
    goto loc_0033D9FD;

loc_0033D9FB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0033D9FD: ;
    MEM32(ebx + 0x6E8) = eax;

loc_0033DA03: ;
    ecx = MEM32(esp + 0x10);
    MEM32(ebx + ecx * 4 + 8) = esi;
    eax = MEM32(ebx + 4);
    edx = MEM32(ebx + 0x6EC);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    PUSH32(esp, 0x128);
    MEM32(ebx + 4) = eax;
    MEM32(esp + 0x18) = edx;
    PUSH32(esp, 0x0033DA27u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0033DA27: ;
    edx = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033DA4E; /* je: equal / zero */

loc_0033DA30: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edx + 0x10;
    ecx = 0x46;
    MEM32(edx) = 0x82A030;
    MEM32(edx + 4) = 0x128;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(edx + 0xC) = eax;
    edi = edx;

loc_0033DA4E: ;
    eax = MEM32(esp + 0x18);
    xmm0 = XMM_SCALAR(MEMF(0x7BB48C)); /* movss */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi + 0xC) = eax;
    MEM32(edi + 8) = esi;
    ecx = ebp + 1;
    eax = edi + 0x14;
    edx = 7;
    /* nop */

loc_0033DA70: ;
    ebp = ZX8(MEM8(ecx + -1));
    xmm1.f[0] = (float)(int32_t)ebp; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax + -4) = xmm1.f[0]; /* movss */
    ebp = ZX8(MEM8(ecx));
    xmm1.f[0] = (float)(int32_t)ebp; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax) = xmm1.f[0]; /* movss */
    ebp = ZX8(MEM8(ecx + 1));
    xmm1.f[0] = (float)(int32_t)ebp; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    ebp = ZX8(MEM8(ecx + 2));
    xmm1.f[0] = (float)(int32_t)ebp; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax + 8) = xmm1.f[0]; /* movss */
    ebp = ZX8(MEM8(ecx + 3));
    xmm1.f[0] = (float)(int32_t)ebp; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax + 0xC) = xmm1.f[0]; /* movss */
    ebp = ZX8(MEM8(ecx + 4));
    xmm1.f[0] = (float)(int32_t)ebp; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax + 0x10) = xmm1.f[0]; /* movss */
    ebp = ZX8(MEM8(ecx + 5));
    xmm1.f[0] = (float)(int32_t)ebp; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax + 0x14) = xmm1.f[0]; /* movss */
    ebp = ZX8(MEM8(ecx + 6));
    xmm1.f[0] = (float)(int32_t)ebp; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax + 0x18) = xmm1.f[0]; /* movss */
    ebp = ZX8(MEM8(ecx + 7));
    xmm1.f[0] = (float)(int32_t)ebp; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax + 0x1C) = xmm1.f[0]; /* movss */
    ebp = ZX8(MEM8(ecx + 8));
    xmm1.f[0] = (float)(int32_t)ebp; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax + 0x20) = xmm1.f[0]; /* movss */
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x28;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xA) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xA;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0033DA70; /* jne: not equal / not zero */

loc_0033DB25: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(edi + 0x88) = xmm0.f[0]; /* movss */
    MEMF(edi + 0x8C) = xmm0.f[0]; /* movss */
    MEMF(edi + 0x90) = xmm0.f[0]; /* movss */
    MEMF(edi + 0x94) = xmm0.f[0]; /* movss */
    MEMF(edi + 0x98) = xmm0.f[0]; /* movss */
    _fa = (uint32_t)(MEM32(ebx + 0xDD0)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0xDD0), esi (32-bit) */
    POP32(esp, ebp);
    if (CMP_NE(_fa, _fb)) goto loc_0033DBA0; /* jne: not equal / not zero */

loc_0033DB59: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x0033DB61u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0033DB61: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033DB79; /* je: equal / zero */

loc_0033DB68: ;
    MEM32(eax) = 0x82A050;
    MEM32(eax + 4) = esi;
    MEM32(eax + 8) = esi;
    MEM32(eax + 0xC) = esi;
    goto loc_0033DB7B;

loc_0033DB79: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0033DB7B: ;
    ecx = MEM32(esp + 0xC);
    MEM32(ebx + 0xDD0) = eax;
    MEM32(ebx + ecx * 4 + 0x6F0) = edi;
    eax = MEM32(ebx + 0x6EC);
    POP32(esp, edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(ebx + 0x6EC) = eax;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_0033DBA0: ;
    edx = MEM32(esp + 0xC);
    MEM32(ebx + edx * 4 + 0x6F0) = edi;
    eax = MEM32(ebx + 0x6EC);
    POP32(esp, edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(ebx + 0x6EC) = eax;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0033DC60
 * Original: 0x0033DC60 - 0x0033DC93 (51 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033DC60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033DC60: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(eax + 0x28) = ecx;
    MEM8(eax + 8) = LO8(ecx);
    MEM8(eax + 0x30) = LO8(ecx);
    edx = eax + 0x28;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x28;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx) = ecx;
    MEM8(edx + 8) = LO8(ecx);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x28;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx) = ecx;
    MEM8(edx + 8) = LO8(ecx);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x28;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx) = ecx;
    MEM8(edx + 8) = LO8(ecx);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x28;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx) = ecx;
    MEM8(edx + 8) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0033DCA0
 * Original: 0x0033DCA0 - 0x0033DCA1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033DCA0(void)
{

loc_0033DCA0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0033DCB0
 * Original: 0x0033DCB0 - 0x0033DD04 (84 bytes, 27 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033DCB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033DCB0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033DD01; /* je: equal / zero */

loc_0033DCB9: ;
    eax = eax + eax * 4;
    PUSH32(esp, esi);
    esi = ecx + eax * 8;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033DCEE; /* je: equal / zero */

loc_0033DCC7: ;
    edx = MEM32(esi + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    PUSH32(esp, eax);
    if (CMP_NE(_fa, _fb)) goto loc_0033DCE6; /* jne: not equal / not zero */

loc_0033DCCF: ;
    ecx = MEM32(0x909394);
    ecx = MEM32(ecx + 8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0033DCDDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033DCDAu); } /* indirect call */
    }

loc_0033DCDD: ;
    MEM32(esi + 8) = 0;
    goto loc_0033DCEE;

loc_0033DCE6: ;
    ecx = MEM32(ecx + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0033DCEEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033DCEBu); } /* indirect call */
    }

loc_0033DCEE: ;
    MEM32(esi + 8) = 0;
    MEM32(esi + 0xC) = 1;
    MEM8(esi + 0x10) = 0;
    POP32(esp, esi);

loc_0033DD01: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0033DD20
 * Original: 0x0033DD20 - 0x0033DE5A (314 bytes, 118 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033DD20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033DD20: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    eax = eax + eax * 4;
    PUSH32(esp, esi);
    ebx = ecx;
    esi = ebx + eax * 8;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0033DD96; /* je: equal / zero */

loc_0033DD39: ;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033DD4B; /* jne: not equal / not zero */

loc_0033DD40: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033DD46u); RECOMP_ABI_CALL(0x0059D501u, sub_0059D501); /* call 0x0059D501 */

loc_0033DD46: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0033DD59;

loc_0033DD4B: ;
    ebx = MEM32(ebx + 4);
    edx = MEM32(ebx);
    eax = esi + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0033DD59u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033DD56u); } /* indirect call */
    }

loc_0033DD59: ;
    ecx = MEM32(0x909394);
    ecx = MEM32(ecx + 8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x500);
    PUSH32(esp, 0);
    PUSH32(esp, 0x80);
    edi = eax;
    PUSH32(esp, edi);
    PUSH32(esp, 0x82B1F8);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0033DD7Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033DD78u); } /* indirect call */
    }

loc_0033DD7B: ;
    ebx = eax;
    eax = MEM32(esi + 8);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0033DD88u); RECOMP_ABI_CALL(0x0059EADCu, sub_0059EADC); /* call 0x0059EADC */

loc_0033DD88: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0033DD96: ;
    ecx = MEM32(0x909394);
    eax = MEM32(ecx + 8);
    ecx = MEM32(ebx + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x500);
    edi = esi + 0x10;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0033DDBBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033DDB8u); } /* indirect call */
    }

loc_0033DDBB: ;
    ecx = esp + 0xC;
    esi = eax;
    PUSH32(esp, 0x0033DDC6u); RECOMP_ABI_CALL(0x0059DE73u, sub_0059DE73); /* call 0x0059DE73 */

loc_0033DDC6: ;
    PUSH32(esp, esi);
    ecx = esp + 0x10;
    PUSH32(esp, 0x0033DDD0u); RECOMP_ABI_CALL(0x0059E1E4u, sub_0059E1E4); /* call 0x0059E1E4 */

loc_0033DDD0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033DE10; /* jne: not equal / not zero */

loc_0033DDD4: ;
    ecx = MEM32(ebx + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x0033DDDEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033DDDBu); } /* indirect call */
    }

loc_0033DDDE: ;
    ecx = MEM32(0x909394);
    ecx = MEM32(ecx + 8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x500);
    PUSH32(esp, 0);
    PUSH32(esp, 0x80);
    ebp = eax;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x82B1F8);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0033DE00u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033DDFDu); } /* indirect call */
    }

loc_0033DE00: ;
    PUSH32(esp, ebp);
    edi = eax;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0033DE0Au); RECOMP_ABI_CALL(0x0059EADCu, sub_0059EADC); /* call 0x0059EADC */

loc_0033DE0A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    goto loc_0033DE3D;

loc_0033DE10: ;
    ecx = MEM32(0x909394);
    ecx = MEM32(ecx + 8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x500);
    PUSH32(esp, 0);
    PUSH32(esp, 0x80);
    PUSH32(esp, eax);
    PUSH32(esp, 0x82B1F8);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0033DE30u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033DE2Du); } /* indirect call */
    }

loc_0033DE30: ;
    edi = eax;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    ecx = esp + 0x14;
    PUSH32(esp, 0x0033DE3Du); RECOMP_ABI_CALL(0x0059DF4Fu, sub_0059DF4F); /* call 0x0059DF4F */

loc_0033DE3D: ;
    ecx = MEM32(ebx + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0033DE46u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033DE43u); } /* indirect call */
    }

loc_0033DE46: ;
    ecx = esp + 0xC;
    PUSH32(esp, 0x0033DE4Fu); RECOMP_ABI_CALL(0x0059DEB2u, sub_0059DEB2); /* call 0x0059DEB2 */

loc_0033DE4F: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0033DEB0
 * Original: 0x0033DEB0 - 0x0033DF17 (103 bytes, 38 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0033DEB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033DEB0: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = ecx;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = ebp + 8;
    /* nop */

loc_0033DEC0: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esp + 0x10) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033DF08; /* je: equal / zero */

loc_0033DEC6: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 6 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033DF08; /* je: equal / zero */

loc_0033DECB: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033DEF7; /* je: equal / zero */

loc_0033DED1: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, eax);
    if (CMP_NE(_fa, _fb)) goto loc_0033DEEF; /* jne: not equal / not zero */

loc_0033DED9: ;
    ecx = MEM32(0x909394);
    ecx = MEM32(ecx + 8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0033DEE7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033DEE4u); } /* indirect call */
    }

loc_0033DEE7: ;
    MEM32(esi) = 0;
    goto loc_0033DEF7;

loc_0033DEEF: ;
    ecx = MEM32(ebp + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0033DEF7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033DEF4u); } /* indirect call */
    }

loc_0033DEF7: ;
    MEM32(esi) = 0;
    MEM32(esi + 4) = 1;
    MEM8(esi + 8) = 0;

loc_0033DF08: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x28;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 6 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0033DEC0; /* jl: less (signed <) */

loc_0033DF11: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0033DF30
 * Original: 0x0033DF30 - 0x0033DF5A (42 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033DF30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033DF30: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = eax;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    MEM32(esi) = 0x829FE0;
    if (TEST_Z(_fa, _fb)) goto loc_0033DF54; /* je: equal / zero */

loc_0033DF4B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0033DF51u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0033DF51: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0033DF54: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0033DF70
 * Original: 0x0033DF70 - 0x0033E00D (157 bytes, 59 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033DF70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033DF70: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(0x8FCAE0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0033DF83u); RECOMP_ABI_CALL(0x00022CBFu, sub_00022CBF); /* call 0x00022CBF */

loc_0033DF83: ;
    esi = eax;
    eax = esp + 0xC;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033DF90u); RECOMP_ABI_CALL(0x0057494Cu, sub_0057494C); /* call 0x0057494C */

loc_0033DF90: ;
    ecx = eax;
    PUSH32(esp, 0x0033DF97u); RECOMP_ABI_CALL(0x00574BAAu, sub_00574BAA); /* call 0x00574BAA */

loc_0033DF97: ;
    PUSH32(esp, 0x82B210);
    ecx = esi;
    PUSH32(esp, 0x0033DFA3u); RECOMP_ABI_CALL(0x00576A02u, sub_00576A02); /* call 0x00576A02 */

loc_0033DFA3: ;
    ebx = MEM32(esp + 0x14);
    edx = MEM32(edi + 8);
    PUSH32(esp, 0x46);
    ecx = ebx + 0x10;
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 4);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x0033DFC1u); RECOMP_ABI_CALL(0x0055C2F9u, sub_0055C2F9); /* call 0x0055C2F9 */

loc_0033DFC1: ;
    edi = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    MEM32(edi + 0x20) = esi;
    PUSH32(esp, 0x0033DFCEu); RECOMP_ABI_CALL(0x0059D501u, sub_0059D501); /* call 0x0059D501 */

loc_0033DFCE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x20);
    MEM32(edi + 0x24) = eax;
    eax = MEM32(ebx);
    PUSH32(esp, edi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0033DFDDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033DFDBu); } /* indirect call */
    }

loc_0033DFDD: ;
    PUSH32(esp, 0x0033DFE2u); RECOMP_ABI_CALL(0x0057494Cu, sub_0057494C); /* call 0x0057494C */

loc_0033DFE2: ;
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x0033DFEAu); RECOMP_ABI_CALL(0x005743CFu, sub_005743CF); /* call 0x005743CF */

loc_0033DFEA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 0x32E4A0);
    PUSH32(esp, esi);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0033E001u); RECOMP_ABI_CALL(0x00574CE7u, sub_00574CE7); /* call 0x00574CE7 */

loc_0033E001: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0033E040
 * Original: 0x0033E040 - 0x0033E0A5 (101 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033E040(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033E040: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0xC);
    PUSH32(esp, 0x0033E04Fu); RECOMP_ABI_CALL(0x0057494Cu, sub_0057494C); /* call 0x0057494C */

loc_0033E04F: ;
    PUSH32(esp, edi);
    ebx = eax;
    PUSH32(esp, 0x0033E057u); RECOMP_ABI_CALL(0x005743CFu, sub_005743CF); /* call 0x005743CF */

loc_0033E057: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebp);
    PUSH32(esp, 0x32E4A0);
    PUSH32(esp, edi);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x0033E06Fu); RECOMP_ABI_CALL(0x00574CE7u, sub_00574CE7); /* call 0x00574CE7 */

loc_0033E06F: ;
    PUSH32(esp, 0x0033E074u); RECOMP_ABI_CALL(0x0057494Cu, sub_0057494C); /* call 0x0057494C */

loc_0033E074: ;
    ecx = eax;
    PUSH32(esp, 0x0033E07Bu); RECOMP_ABI_CALL(0x0057524Eu, sub_0057524E); /* call 0x0057524E */

loc_0033E07B: ;
    MEM32(0x8FCAE4) = MEM32(0x8FCAE4) - 1;
    _fa = (uint32_t)(MEM32(0x8FCAE4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0033E099; /* jne: not equal / not zero */

loc_0033E083: ;
    ecx = MEM32(0x8FCAE0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033E093; /* je: equal / zero */

loc_0033E08D: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0033E093u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033E091u); } /* indirect call */
    }

loc_0033E093: ;
    MEM32(0x8FCAE0) = ebp;

loc_0033E099: ;
    POP32(esp, edi);
    MEM32(esi + 4) = ebp;
    MEM32(esi + 8) = ebp;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0033E0C0
 * Original: 0x0033E0C0 - 0x0033E0DF (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033E0C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033E0C0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x829FE0;
    if (TEST_Z(_fa, _fb)) goto loc_0033E0D9; /* je: equal / zero */

loc_0033E0D0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0033E0D6u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0033E0D6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0033E0D9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0033E0F0
 * Original: 0x0033E0F0 - 0x0033E10F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033E0F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033E0F0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x829FE0;
    if (TEST_Z(_fa, _fb)) goto loc_0033E109; /* je: equal / zero */

loc_0033E100: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0033E106u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0033E106: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0033E109: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0033E120
 * Original: 0x0033E120 - 0x0033E125 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033E120(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033E120: ;
    g_seh_ebp = ebp; sub_0001F083(); return; /* tail jmp 0x0001F083 */

}

/**
 * sub_0033E130
 * Original: 0x0033E130 - 0x0033E5F7 (1223 bytes, 353 insns)
 * Category: game_ui
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033E130(void)
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

loc_0033E130: ;
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x110;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = esp + 0x20;
    esi = ecx;
    ecx = MEM32(esp + 0x124);
    PUSH32(esp, eax);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    MEM32(esi + 0x58) = ecx;
    PUSH32(esp, 0x0033E155u); RECOMP_ABI_CALL(0x0055D4AAu, sub_0055D4AA); /* call 0x0055D4AA */

loc_0033E155: ;
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, 0x0033E15Eu); RECOMP_ABI_CALL(0x00561417u, sub_00561417); /* call 0x00561417 */

loc_0033E15E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x14) = eax;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_0033E170; /* jge: greater or equal (signed >=) */

loc_0033E16A: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7B8E10)); /* fadd dword ptr [0x7b8e10] */

loc_0033E170: ;
    ecx = MEM32(esp + 0x20);
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0033E17Du); RECOMP_ABI_CALL(0x0056141Bu, sub_0056141B); /* call 0x0056141B */

loc_0033E17D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x10) = eax;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_0033E18F; /* jge: greater or equal (signed >=) */

loc_0033E189: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7B8E10)); /* fadd dword ptr [0x7b8e10] */

loc_0033E18F: ;
    eax = MEM32(esp + 0x14);
    MEMF(0x8C4794) = (float)fp_top(); /* fst */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(0x8C47AC) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = eax;
    MEM32(0x8C47A8) = ecx;
    ecx = esp + 0xA4;
    MEMF(0x8C4784) = xmm0.f[0]; /* movss */
    MEMF(0x8C4788) = xmm0.f[0]; /* movss */
    MEMF(0x8C4790) = xmm0.f[0]; /* movss */
    MEM32(0x8C479C) = eax;
    MEMF(0x8C47A0) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0033E1DBu); RECOMP_ABI_CALL(0x0056A600u, sub_0056A600); /* call 0x0056A600 */

loc_0033E1DB: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0x82AE18);
    PUSH32(esp, 0x0033E1E8u); RECOMP_ABI_CALL(0x005725B8u, sub_005725B8); /* call 0x005725B8 */

loc_0033E1E8: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ecx = esp + 0xAC;
    PUSH32(esp, 0x0033E1F9u); RECOMP_ABI_CALL(0x0056798Eu, sub_0056798E); /* call 0x0056798E */

loc_0033E1F9: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x30);
    PUSH32(esp, 0x8C4784);
    PUSH32(esp, 0x829C64);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esp + 0xB8;
    PUSH32(esp, 0x0033E218u); RECOMP_ABI_CALL(0x00568296u, sub_00568296); /* call 0x00568296 */

loc_0033E218: ;
    PUSH32(esp, 2);
    PUSH32(esp, 4);
    ebp = esi + 0x5C;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x82A09C);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = esp + 0xB8;
    PUSH32(esp, 0x0033E236u); RECOMP_ABI_CALL(0x00568296u, sub_00568296); /* call 0x00568296 */

loc_0033E236: ;
    PUSH32(esp, 0x82B270);
    PUSH32(esp, 0x0033E240u); RECOMP_ABI_CALL(0x00027864u, sub_00027864); /* call 0x00027864 */

loc_0033E240: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = eax;
    PUSH32(esp, ebx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ecx = esp + 0xAC;
    PUSH32(esp, 0x0033E257u); RECOMP_ABI_CALL(0x0056A770u, sub_0056A770); /* call 0x0056A770 */

loc_0033E257: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x8C45D8);
    PUSH32(esp, 0x82A168);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = esp + 0xB4;
    PUSH32(esp, 0x0033E274u); RECOMP_ABI_CALL(0x0056A304u, sub_0056A304); /* call 0x0056A304 */

loc_0033E274: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x8FCAE8);
    PUSH32(esp, 0x82A158);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = esp + 0xB4;
    PUSH32(esp, 0x0033E291u); RECOMP_ABI_CALL(0x0056A304u, sub_0056A304); /* call 0x0056A304 */

loc_0033E291: ;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x82A150);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    ecx = esp + 0xB4;
    PUSH32(esp, 0x0033E2AAu); RECOMP_ABI_CALL(0x005682CDu, sub_005682CD); /* call 0x005682CD */

loc_0033E2AA: ;
    PUSH32(esp, 4);
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x82A144);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = esp + 0xB4;
    PUSH32(esp, 0x0033E2C6u); RECOMP_ABI_CALL(0x005682CDu, sub_005682CD); /* call 0x005682CD */

loc_0033E2C6: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = esp + 0xA8;
    PUSH32(esp, 0x0033E2D7u); RECOMP_ABI_CALL(0x005679BBu, sub_005679BB); /* call 0x005679BB */

loc_0033E2D7: ;
    edi = esi + 0x50;
    PUSH32(esp, edi);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ecx = esp + 0xAC;
    PUSH32(esp, 0x0033E2ECu); RECOMP_ABI_CALL(0x0056973Eu, sub_0056973E); /* call 0x0056973E */

loc_0033E2EC: ;
    ecx = esp + 0x28;
    PUSH32(esp, 0x0033E2F5u); RECOMP_ABI_CALL(0x0056A600u, sub_0056A600); /* call 0x0056A600 */

loc_0033E2F5: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0x82AE18);
    PUSH32(esp, 0x0033E302u); RECOMP_ABI_CALL(0x005725B8u, sub_005725B8); /* call 0x005725B8 */

loc_0033E302: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esp + 0x30;
    PUSH32(esp, 0x0033E310u); RECOMP_ABI_CALL(0x0056798Eu, sub_0056798E); /* call 0x0056798E */

loc_0033E310: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x30);
    PUSH32(esp, 0x8C4784);
    PUSH32(esp, 0x829C64);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = esp + 0x3C;
    PUSH32(esp, 0x0033E32Cu); RECOMP_ABI_CALL(0x00568296u, sub_00568296); /* call 0x00568296 */

loc_0033E32C: ;
    PUSH32(esp, 2);
    PUSH32(esp, 4);
    eax = esi + 0x60;
    PUSH32(esp, eax);
    PUSH32(esp, 0x82A09C);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    ecx = esp + 0x3C;
    MEM32(esp + 0x28) = eax;
    PUSH32(esp, 0x0033E34Bu); RECOMP_ABI_CALL(0x00568296u, sub_00568296); /* call 0x00568296 */

loc_0033E34B: ;
    PUSH32(esp, ebx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esp + 0x30;
    PUSH32(esp, 0x0033E35Au); RECOMP_ABI_CALL(0x0056A770u, sub_0056A770); /* call 0x0056A770 */

loc_0033E35A: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x8C45D8);
    PUSH32(esp, 0x82A168);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = esp + 0x38;
    PUSH32(esp, 0x0033E374u); RECOMP_ABI_CALL(0x0056A304u, sub_0056A304); /* call 0x0056A304 */

loc_0033E374: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x8FCAE8);
    PUSH32(esp, 0x82A158);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    ecx = esp + 0x38;
    PUSH32(esp, 0x0033E38Eu); RECOMP_ABI_CALL(0x0056A304u, sub_0056A304); /* call 0x0056A304 */

loc_0033E38E: ;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x82A150);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = esp + 0x38;
    PUSH32(esp, 0x0033E3A4u); RECOMP_ABI_CALL(0x005682CDu, sub_005682CD); /* call 0x005682CD */

loc_0033E3A4: ;
    PUSH32(esp, 4);
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x82A144);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = esp + 0x38;
    PUSH32(esp, 0x0033E3BDu); RECOMP_ABI_CALL(0x005682CDu, sub_005682CD); /* call 0x005682CD */

loc_0033E3BD: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = esp + 0x2C;
    PUSH32(esp, 0x0033E3CBu); RECOMP_ABI_CALL(0x005679BBu, sub_005679BB); /* call 0x005679BB */

loc_0033E3CB: ;
    ebx = esi + 0x54;
    PUSH32(esp, ebx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esp + 0x30;
    PUSH32(esp, 0x0033E3DDu); RECOMP_ABI_CALL(0x0056973Eu, sub_0056973E); /* call 0x0056973E */

loc_0033E3DD: ;
    edx = MEM32(esp + 0x128);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x82B268);
    PUSH32(esp, 0x0033E3F9u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_0033E3F9: ;
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033E403u); RECOMP_ABI_CALL(0x00572F47u, sub_00572F47); /* call 0x00572F47 */

loc_0033E403: ;
    xmm0 = XMM_MEM(0x8F9620); /* movaps */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi + 0x10;
    XMM_STORE(eax, xmm0); /* movaps */
    xmm0 = XMM_MEM(0x8F9630); /* movaps */
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    XMM_STORE(eax + 0x10, xmm0); /* movaps */
    xmm0 = XMM_MEM(0x8F9640); /* movaps */
    PUSH32(esp, eax);
    XMM_STORE(eax + 0x20, xmm0); /* movaps */
    xmm0 = XMM_MEM(0x8F9650); /* movaps */
    PUSH32(esp, ecx);
    XMM_STORE(eax + 0x30, xmm0); /* movaps */
    eax = esp;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    MEM32(eax) = 0;
    PUSH32(esp, 0x829EE8);
    MEM32(eax) = 0;
    PUSH32(esp, 0x0033E458u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_0033E458: ;
    ecx = MEM32(esp + 0x28);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0033E466u); RECOMP_ABI_CALL(0x000257B2u, sub_000257B2); /* call 0x000257B2 */

loc_0033E466: ;
    ecx = MEM32(edi);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    MEM32(eax) = 0;
    PUSH32(esp, 0x82B250);
    MEM32(eax) = 0;
    PUSH32(esp, 0x0033E48Cu); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_0033E48C: ;
    ecx = MEM32(esp + 0x28);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0033E49Au); RECOMP_ABI_CALL(0x00028D5Eu, sub_00028D5E); /* call 0x00028D5E */

loc_0033E49A: ;
    ecx = MEM32(ebx);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    MEM32(eax) = 0;
    PUSH32(esp, 0x82B240);
    MEM32(eax) = 0;
    PUSH32(esp, 0x0033E4C0u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_0033E4C0: ;
    ecx = MEM32(esp + 0x28);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0033E4CEu); RECOMP_ABI_CALL(0x00028D5Eu, sub_00028D5E); /* call 0x00028D5E */

loc_0033E4CE: ;
    ecx = MEM32(edi);
    edi = MEM32(esp + 0x12C);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x0033E4E9u); RECOMP_ABI_CALL(0x0055A6ACu, sub_0055A6AC); /* call 0x0055A6AC */

loc_0033E4E9: ;
    ecx = MEM32(ebx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ebx = MEM32(esp + 0x138);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    ecx = ebx;
    PUSH32(esp, 0x0033E504u); RECOMP_ABI_CALL(0x0055A6ACu, sub_0055A6AC); /* call 0x0055A6AC */

loc_0033E504: ;
    PUSH32(esp, 0x82B22C);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0033E511u); RECOMP_ABI_CALL(0x0001EF9Du, sub_0001EF9D); /* call 0x0001EF9D */

loc_0033E511: ;
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = eax;
    MEM32(esi + 0x64) = eax;
    PUSH32(esp, 0x0033E524u); RECOMP_ABI_CALL(0x00560D03u, sub_00560D03); /* call 0x00560D03 */

loc_0033E524: ;
    ecx = MEM32(esi + 0x64);
    PUSH32(esp, 1);
    PUSH32(esp, 7);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0033E535u); RECOMP_ABI_CALL(0x00560D03u, sub_00560D03); /* call 0x00560D03 */

loc_0033E535: ;
    ecx = MEM32(esi + 0x64);
    PUSH32(esp, 0x306);
    PUSH32(esp, 0x15);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033E549u); RECOMP_ABI_CALL(0x00560D03u, sub_00560D03); /* call 0x00560D03 */

loc_0033E549: ;
    PUSH32(esp, 0x8006);
    PUSH32(esp, 0x17);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x64);
    PUSH32(esp, 0x0033E55Du); RECOMP_ABI_CALL(0x00560D03u, sub_00560D03); /* call 0x00560D03 */

loc_0033E55D: ;
    ecx = MEM32(esi + 0x64);
    PUSH32(esp, 0x300);
    PUSH32(esp, 0x16);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0033E571u); RECOMP_ABI_CALL(0x00560D03u, sub_00560D03); /* call 0x00560D03 */

loc_0033E571: ;
    ecx = MEM32(esi + 0x64);
    PUSH32(esp, 8);
    PUSH32(esp, 8);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033E582u); RECOMP_ABI_CALL(0x00560D03u, sub_00560D03); /* call 0x00560D03 */

loc_0033E582: ;
    PUSH32(esp, 0x82B21C);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0033E58Fu); RECOMP_ABI_CALL(0x0001EF9Du, sub_0001EF9D); /* call 0x0001EF9D */

loc_0033E58F: ;
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = eax;
    MEM32(esi + 0x68) = eax;
    PUSH32(esp, 0x0033E5A2u); RECOMP_ABI_CALL(0x00560D03u, sub_00560D03); /* call 0x00560D03 */

loc_0033E5A2: ;
    ecx = MEM32(esi + 0x68);
    PUSH32(esp, 1);
    PUSH32(esp, 7);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0033E5B3u); RECOMP_ABI_CALL(0x00560D03u, sub_00560D03); /* call 0x00560D03 */

loc_0033E5B3: ;
    ecx = MEM32(esi + 0x68);
    PUSH32(esp, 0);
    PUSH32(esp, 8);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033E5C4u); RECOMP_ABI_CALL(0x00560D03u, sub_00560D03); /* call 0x00560D03 */

loc_0033E5C4: ;
    ecx = MEM32(esp + 0x14);
    MEM32(ecx) = 0;
    ecx = esp + 0x28;
    MEM32(ebp) = 0xFFFFFFFFu;
    PUSH32(esp, 0x0033E5DEu); RECOMP_ABI_CALL(0x0056A677u, sub_0056A677); /* call 0x0056A677 */

loc_0033E5DE: ;
    ecx = esp + 0xA4;
    PUSH32(esp, 0x0033E5EAu); RECOMP_ABI_CALL(0x0056A677u, sub_0056A677); /* call 0x0056A677 */

loc_0033E5EA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x110;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0033E730
 * Original: 0x0033E730 - 0x0033E749 (25 bytes, 9 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033E730(void)
{

loc_0033E730: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, eax);
    MEM32(esi) = 0;
    PUSH32(esp, 0x0033E743u); RECOMP_ABI_CALL(0x00019EADu, sub_00019EAD); /* call 0x00019EAD */

loc_0033E743: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0033E750
 * Original: 0x0033E750 - 0x0033E79F (79 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033E750(void)
{

loc_0033E750: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = ecx;
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
    MEMF(eax + 0x30) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x34) = xmm0.f[0]; /* movss */
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0xFFFFFFFFu;
    esp += 4; return; /* ret */

}

/**
 * sub_0033E7C0
 * Original: 0x0033E7C0 - 0x0033E7E6 (38 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033E7C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033E7C0: ;
    PUSH32(esp, ecx);
    ecx = MEM32(ecx + 0x4C);
    eax = MEM32(ecx);
    ecx = ZX8(MEM8(eax + 0x13));
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x14);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esp + 8;
    MEM32(esp + 8) = 1;
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    POP32(esp, edi);
    SET_LO8(eax, ((_flags != 0)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0033E7F0
 * Original: 0x0033E7F0 - 0x0033E816 (38 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033E7F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033E7F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0;
    MEM32(esi + 4) = 0;
    PUSH32(esp, 0x0033E805u); RECOMP_ABI_CALL(0x00012C39u, sub_00012C39); /* call 0x00012C39 */

loc_0033E805: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0xC) = eax;
    MEM8(esi + 8) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0033E820
 * Original: 0x0033E820 - 0x0033E82D (13 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033E820(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033E820: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(eax + 8) = LO8(ecx);
    MEM32(eax + 4) = ecx;
    MEM32(eax) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0033E830
 * Original: 0x0033E830 - 0x0033E859 (41 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033E830(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033E830: ;
    PUSH32(esp, ecx);
    ecx = MEM32(ecx + 0xF0);
    eax = MEM32(ecx);
    ecx = ZX8(MEM8(eax + 0x13));
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x14);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esp + 8;
    MEM32(esp + 8) = 1;
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    POP32(esp, edi);
    SET_LO8(eax, ((_flags != 0)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0033E870
 * Original: 0x0033E870 - 0x0033E890 (32 bytes, 10 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033E870(void)
{

loc_0033E870: ;
    SET_LO8(edx, MEM8(esp + 8));
    eax = ecx;
    SET_LO8(ecx, MEM8(esp + 4));
    MEM8(eax + 3) = LO8(ecx);
    SET_LO8(ecx, MEM8(esp + 0xC));
    MEM8(eax + 2) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x10));
    MEM8(eax + 1) = LO8(ecx);
    MEM8(eax) = LO8(edx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0033E8A0
 * Original: 0x0033E8A0 - 0x0033E8BE (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033E8A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033E8A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0033E8A8u); RECOMP_ABI_CALL(0x0002562Cu, sub_0002562C); /* call 0x0002562C */

loc_0033E8A8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0033E8B8; /* je: equal / zero */

loc_0033E8AF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0033E8B5u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0033E8B5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0033E8B8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0033E8D0
 * Original: 0x0033E8D0 - 0x0033E92B (91 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033E8D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033E8D0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(eax + 8) = ecx;
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x30) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x34) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x38) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x40) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x44) = xmm0.f[0]; /* movss */
    edx = edx | 0xFFFFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = edx;
    MEM32(eax + 0x48) = ecx;
    MEM32(eax + 0x4C) = ecx;
    MEM32(eax + 0x78) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_0033E950
 * Original: 0x0033E950 - 0x0033E971 (33 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033E950(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033E950: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x4C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033E96F; /* je: equal / zero */

loc_0033E958: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033E960u); RECOMP_ABI_CALL(0x000356D0u, sub_000356D0); /* call 0x000356D0 */

loc_0033E960: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0033E96Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033E96Cu); } /* indirect call */
    }

loc_0033E96F: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0033E980
 * Original: 0x0033E980 - 0x0033EB49 (457 bytes, 136 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033E980(void)
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

loc_0033E980: ;
    _fb = (uint32_t)(0xF4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xF4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0xF8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = ecx;
    MEM32(ebp) = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(ebp + 4) = LO8(ebx);
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x90;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    MEM32(ebp + 8) = eax;
    MEM8(ebp + 0xC) = LO8(ebx);
    ecx = MEM32(0x907BA4);
    PUSH32(esp, 0x7B891F);
    MEM32(esp + 0x48) = ebx;
    MEM8(esp + 0x4C) = LO8(ebx);
    MEM32(esp + 0x44) = 0x82B2D4;
    eax = MEM32(ecx);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0033E9C7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033E9C5u); } /* indirect call */
    }

loc_0033E9C7: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033EA03; /* je: equal / zero */

loc_0033E9CD: ;
    ecx = MEM32(esp + 0x40);
    PUSH32(esp, 0x82B2C0);
    PUSH32(esp, ecx);
    edx = esp + 0x51;
    PUSH32(esp, 0x82AE2C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0033E9E6u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0033E9E6: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    eax = esp + 0x71;
    PUSH32(esp, eax);
    PUSH32(esp, 0x4F4A771);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0033E9FCu); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_0033E9FC: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    goto loc_0033EA05;

loc_0033EA03: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0033EA05: ;
    ecx = esp + 0x10;
    esi = 1;
    MEM32(ebp + 0x4C) = eax;
    MEM32(esp + 0x10) = esi;
    PUSH32(esp, ecx);
    ecx = MEM32(eax);
    PUSH32(esp, 0x0033EA1Du); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_0033EA1D: ;
    eax = MEM32(0x8FCAA0);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x48) = eax;
    MEM8(eax + 0x98) = LO8(ebx);
    edx = MEM32(ebp + 0x48);
    MEM32(edx + 0x90) = esi;
    eax = MEM32(0x8FCB8C);
    eax = MEM32(eax + 0xB4);
    ecx = 0xD;
    esi = 0x82B27C;
    edi = esp + 0xCC;
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
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    ecx = esp + 0xCC;
    PUSH32(esp, ecx);
    ecx = eax;
    MEM8(edi) = MEM8(esi); esi += RECOMP_DF_STEP(1); edi += RECOMP_DF_STEP(1); /* movsb */
    PUSH32(esp, 0x0033EA67u); RECOMP_ABI_CALL(0x00020CCBu, sub_00020CCB); /* call 0x00020CCB */

loc_0033EA67: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033EB3C; /* je: equal / zero */

loc_0033EA6F: ;
    esi = MEM32(eax + 0x28);
    ecx = esi;
    PUSH32(esp, 0x0033EA79u); RECOMP_ABI_CALL(0x0001AEE3u, sub_0001AEE3); /* call 0x0001AEE3 */

loc_0033EA79: ;
    PUSH32(esp, ebx);
    ecx = esi;
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0x0033EA85u); RECOMP_ABI_CALL(0x000303CEu, sub_000303CE); /* call 0x000303CE */

loc_0033EA85: ;
    edi = ebp + 0x50;
    PUSH32(esp, edi);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x0033EA95u); RECOMP_ABI_CALL(0x0055B642u, sub_0055B642); /* call 0x0055B642 */

loc_0033EA95: ;
    eax = MEM32(esp + 0x10);
    ebx = 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0033EB3C; /* jle: less or equal (signed <=) */

loc_0033EAA6: ;
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0033EAB8u); RECOMP_ABI_CALL(0x000303CEu, sub_000303CE); /* call 0x000303CE */

loc_0033EAB8: ;
    ecx = eax;
    PUSH32(esp, 0x0033EABFu); RECOMP_ABI_CALL(0x0055B642u, sub_0055B642); /* call 0x0055B642 */

loc_0033EABF: ;
    xmm1 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0033EAD2; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0033EACE: ;
    MEMF(edi) = xmm0.f[0]; /* movss */

loc_0033EAD2: ;
    xmm1 = XMM_SCALAR(MEMF(ebp + 0x54)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0033EAE7; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0033EAE2: ;
    MEMF(ebp + 0x54) = xmm0.f[0]; /* movss */

loc_0033EAE7: ;
    xmm1 = XMM_SCALAR(MEMF(ebp + 0x58)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0033EAFC; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0033EAF7: ;
    MEMF(ebp + 0x58) = xmm0.f[0]; /* movss */

loc_0033EAFC: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ebp + 0x5C); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0033EB0D; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ebp + 0x5C)) */

loc_0033EB08: ;
    MEMF(ebp + 0x5C) = xmm0.f[0]; /* movss */

loc_0033EB0D: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ebp + 0x60); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0033EB1E; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ebp + 0x60)) */

loc_0033EB19: ;
    MEMF(ebp + 0x60) = xmm0.f[0]; /* movss */

loc_0033EB1E: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ebp + 0x64); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0033EB2F; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ebp + 0x64)) */

loc_0033EB2A: ;
    MEMF(ebp + 0x64) = xmm0.f[0]; /* movss */

loc_0033EB2F: ;
    eax = MEM32(esp + 0x10);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0033EAA6; /* jl: less (signed <) */

loc_0033EB3C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xF4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xF4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0033EBC0
 * Original: 0x0033EBC0 - 0x0033ECFE (318 bytes, 103 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033EBC0(void)
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

loc_0033EBC0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033EBD5; /* je: equal / zero */

loc_0033EBCC: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0033EBD5: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(ecx);
    eax = esi + 0x18;
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 8);
    PUSH32(esp, edi);
    MEM32(eax + 8) = ecx;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = esi + 0x10;
    ebx = esi;

loc_0033EBF6: ;
    PUSH32(esp, ebp);
    ecx = ebx;
    PUSH32(esp, 0x0033EBFEu); RECOMP_ABI_CALL(0x00023B79u, sub_00023B79); /* call 0x00023B79 */

loc_0033EBFE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033EC0D; /* jne: not equal / not zero */

loc_0033EC02: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0033EBF6; /* jl: less (signed <) */

loc_0033EC0B: ;
    goto loc_0033EC14;

loc_0033EC0D: ;
    ebx = esi + edi * 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033EC2E; /* jne: not equal / not zero */

loc_0033EC14: ;
    POP32(esp, edi);
    MEM32(ebp) = 0;
    MEM32(ebp + 4) = 0xFFFFFFFFu;
    POP32(esp, ebp);
    POP32(esp, ebx);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0033EC2E: ;
    edi = MEM32(esi + 0x48);
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    edx = esi + 0x24;
    eax = MEM32(edx);
    ecx = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x58;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = eax;
    MEM32(edi + 4) = ecx;
    MEM32(edi + 8) = edx;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x64)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x58); /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca >= _fcb)) goto loc_0033EC60; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0033EC59: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm0 = xmm1; /* movaps */

loc_0033EC60: ;
    eax = MEM32(esi + 0x48);
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    ecx = MEM32(esp + 0x10);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x4C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x3C)); /* movss */
    edx = MEM32(esp + 0x14);
    MEM32(eax) = ecx;
    MEM32(eax + 4) = edx;
    xmm1.f[0] = xmm1.f[0] / xmm0.f[0]; /* divss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    ecx = MEM32(esp + 0x18);
    MEM32(eax + 8) = ecx;
    edi = MEM32(esi + 0x48);
    ecx = MEM32(edi + 0x3C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = 1;
    MEM32(edi + 0x94) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_0033ECD1; /* jge: greater or equal (signed >=) */

loc_0033ECB2: ;
    MEM32(esp + 0x20) = eax;
    eax = MEM32(edi + 0x30);
    ecx = MEM32(eax);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0033ECC5u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_0033ECC5: ;
    MEM32(edi + 0x3C) = 0;
    eax = 1;

loc_0033ECD1: ;
    _fa = (uint32_t)(MEM32(edi + 0x90)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x90), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033ECE3; /* jne: not equal / not zero */

loc_0033ECD9: ;
    MEM32(edi + 0x94) = 2;

loc_0033ECE3: ;
    PUSH32(esp, ebp);
    ecx = ebx;
    PUSH32(esp, 0x0033ECEBu); RECOMP_ABI_CALL(0x00019412u, sub_00019412); /* call 0x00019412 */

loc_0033ECEB: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(esi + 0x78) = 0;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0033ED50
 * Original: 0x0033ED50 - 0x0033ED9A (74 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033ED50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033ED50: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x14);
    ebx = ebx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033ED96; /* je: equal / zero */

loc_0033ED5F: ;
    ecx = MEM32(edi + 0x10);
    PUSH32(esp, esi);
    esi = edi + 0x10;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0033ED6Cu); RECOMP_ABI_CALL(0x0001A637u, sub_0001A637); /* call 0x0001A637 */

loc_0033ED6C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = eax;
    MEM32(esi + 4) = ebx;
    esi = MEM32(edi + 0x48);
    ecx = MEM32(esi + 0x30);
    MEM32(esi + 0x94) = eax;
    MEM32(esp + 0xC) = eax;
    ecx = MEM32(ecx);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033ED8Fu); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_0033ED8F: ;
    MEM32(esi + 0x3C) = ebx;
    MEM32(edi + 0x78) = ebx;
    POP32(esp, esi);

loc_0033ED96: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0033EDB0
 * Original: 0x0033EDB0 - 0x0033EDD1 (33 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033EDB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033EDB0: ;
    SET_LO8(edx, MEM8(esp + 4));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    edx = esp + 4;
    PUSH32(esp, edx);
    MEM32(esp + 8) = eax;
    eax = MEM32(ecx + 0x4C);
    ecx = MEM32(eax);
    PUSH32(esp, 0x0033EDCEu); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_0033EDCE: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0033EDE0
 * Original: 0x0033EDE0 - 0x0033EE08 (40 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033EDE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033EDE0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033EDEBu); RECOMP_ABI_CALL(0x000356D0u, sub_000356D0); /* call 0x000356D0 */

loc_0033EDEB: ;
    SET_LO8(eax, MEM8(esp + 0xC));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0033EE02; /* je: equal / zero */

loc_0033EDF6: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0033EE02u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033EDFFu); } /* indirect call */
    }

loc_0033EE02: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0033EE20
 * Original: 0x0033EE20 - 0x0033EE3C (28 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033EE20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033EE20: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033EE3A; /* je: equal / zero */

loc_0033EE28: ;
    ecx = esi;
    PUSH32(esp, 0x0033EE2Fu); RECOMP_ABI_CALL(0x005582DAu, sub_005582DA); /* call 0x005582DA */

loc_0033EE2F: ;
    PUSH32(esp, 0x1C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0033EE37u); RECOMP_ABI_CALL(0x00574573u, sub_00574573); /* call 0x00574573 */

loc_0033EE37: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0033EE3A: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0033EE50
 * Original: 0x0033EE50 - 0x0033F008 (440 bytes, 131 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033EE50(void)
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

loc_0033EE50: ;
    _fb = (uint32_t)(0xB4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xB4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x82B318);
    PUSH32(esp, 0x82B2D4);
    eax = esp + 0x41;
    PUSH32(esp, 0x82AE2C);
    PUSH32(esp, eax);
    esi = ecx;
    MEM32(esp + 0x44) = 0;
    MEM8(esp + 0x48) = 0;
    MEM32(esp + 0x40) = 0x82B2D4;
    PUSH32(esp, 0x0033EE88u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0033EE88: ;
    ecx = MEM32(0x8FCB8C);
    ecx = MEM32(ecx + 0xB4);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x39;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0033EEA1u); RECOMP_ABI_CALL(0x00020CCBu, sub_00020CCB); /* call 0x00020CCB */

loc_0033EEA1: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEM32(esi) = eax;
    eax = MEM32(eax + 0x30);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x1C);
    MEM32(esi + 4) = eax;
    PUSH32(esp, 0x0033EEB6u); RECOMP_ABI_CALL(0x0057446Du, sub_0057446D); /* call 0x0057446D */

loc_0033EEB6: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033EECA; /* je: equal / zero */

loc_0033EEBD: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x0033EEC8u); RECOMP_ABI_CALL(0x005582A6u, sub_005582A6); /* call 0x005582A6 */

loc_0033EEC8: ;
    goto loc_0033EECC;

loc_0033EECA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0033EECC: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x7AB330)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x82B314)); /* movss */
    edx = esi + 0x14;
    PUSH32(esp, edx);
    MEMF(edx) = xmm0.f[0]; /* movss */
    edx = esp + 0xC;
    edi = esi + 0x20;
    PUSH32(esp, edx);
    ecx = eax;
    MEM32(esi + 8) = eax;
    MEMF(esi + 0x18) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x1C) = xmm2.f[0]; /* movss */
    MEMF(edi) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x24) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x28) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0033EF11u); RECOMP_ABI_CALL(0x005582DBu, sub_005582DB); /* call 0x005582DB */

loc_0033EF11: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, edi);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033EF1Fu); RECOMP_ABI_CALL(0x00558464u, sub_00558464); /* call 0x00558464 */

loc_0033EF1F: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 4);
    PUSH32(esp, 0x0033EF4Au); RECOMP_ABI_CALL(0x00557980u, sub_00557980); /* call 0x00557980 */

loc_0033EF4A: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    eax = esp + 0x3C;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 4);
    PUSH32(esp, 0x0033EF70u); RECOMP_ABI_CALL(0x00557E6Bu, sub_00557E6B); /* call 0x00557E6B */

loc_0033EF70: ;
    fp_push((double)SMEM32(esp + 0x24)); /* fild */
    edi = MEM32(esp + 0x24);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0033EF82; /* jge: greater or equal (signed >=) */

loc_0033EF7C: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7B8E10)); /* fadd dword ptr [0x7b8e10] */

loc_0033EF82: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x82B310)); /* fmul dword ptr [0x82b310] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7AA820)); /* fadd dword ptr [0x7aa820] */
    PUSH32(esp, 0x0033EF93u); RECOMP_ABI_CALL(0x005CBF44u, sub_005CBF44); /* call 0x005CBF44 */

loc_0033EF93: ;
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    MEM32(esp + 0x28) = eax;
    eax = MEM32(esp + 0x24);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 4);
    PUSH32(esp, 0x0033EFB7u); RECOMP_ABI_CALL(0x0055852Du, sub_0055852D); /* call 0x0055852D */

loc_0033EFB7: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(0x7AD334)); /* movss */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x40B40000);
    PUSH32(esp, 0x420C0000);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 4);
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0033EFE6u); RECOMP_ABI_CALL(0x00557A00u, sub_00557A00); /* call 0x00557A00 */

loc_0033EFE6: ;
    edx = MEM32(esi + 4);
    eax = MEM32(0x8FCB8C);
    ecx = MEM32(eax + 0xB4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x82B2FC);
    PUSH32(esp, 0x0033EFFFu); RECOMP_ABI_CALL(0x0002D6C9u, sub_0002D6C9); /* call 0x0002D6C9 */

loc_0033EFFF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0xB4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xB4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0033F080
 * Original: 0x0033F080 - 0x0033F0A6 (38 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033F080(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033F080: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    PUSH32(esp, edi);
    esi = ebx;
    edi = 2;
    /* nop */

loc_0033F090: ;
    ecx = esi;
    PUSH32(esp, 0x0033F097u); RECOMP_ABI_CALL(0x000330ECu, sub_000330EC); /* call 0x000330EC */

loc_0033F097: ;
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x90;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0033F090; /* jne: not equal / not zero */

loc_0033F0A0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0033F0B0
 * Original: 0x0033F0B0 - 0x0033F0D3 (35 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033F0B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033F0B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx + 0x120;
    edi = 2;
    /* nop */

loc_0033F0C0: ;
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x90;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esi;
    PUSH32(esp, 0x0033F0CDu); RECOMP_ABI_CALL(0x00027DEBu, sub_00027DEB); /* call 0x00027DEB */

loc_0033F0CD: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0033F0C0; /* jne: not equal / not zero */

loc_0033F0D0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0033F0E0
 * Original: 0x0033F0E0 - 0x0033F0FE (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033F0E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033F0E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0033F0E8u); RECOMP_ABI_CALL(0x00027DEBu, sub_00027DEB); /* call 0x00027DEB */

loc_0033F0E8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0033F0F8; /* je: equal / zero */

loc_0033F0EF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0033F0F5u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0033F0F5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0033F0F8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0033F110
 * Original: 0x0033F110 - 0x0033F2D7 (455 bytes, 175 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033F110(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033F110: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x20);
    PUSH32(esp, ebx);
    ebx = ecx;
    ecx = MEM32(eax + 0x34);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebx + 4) = ecx;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), ebp (32-bit) */
    edx = MEM32(eax + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x24) = ebp;
    MEM32(esp + 0x28) = ebp;
    MEM32(esp + 0x14) = ebp;
    if (CMP_LE(_fas, _fbs)) goto loc_0033F1D6; /* jle: less or equal (signed <=) */

loc_0033F141: ;
    esi = ebx + 0xC;
    MEM32(esp + 0x10) = esi;
    goto loc_0033F152;

loc_0033F14A: ;
    eax = MEM32(esp + 0x30);
    esi = MEM32(esp + 0x10);

loc_0033F152: ;
    eax = MEM32(eax + 8);
    edx = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x18);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033F165u); RECOMP_ABI_CALL(0x000303CEu, sub_000303CE); /* call 0x000303CE */

loc_0033F165: ;
    MEM32(esi) = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_0033F170: ;
    ecx = MEM32(edi + 0x8C462C);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    ebp = esi + -4;
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    ecx = MEM32(eax);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0033F18Cu); RECOMP_ABI_CALL(0x0055B805u, sub_0055B805); /* call 0x0055B805 */

loc_0033F18C: ;
    ecx = MEM32(esi);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebp));
    eax = MEM32(esp + edi + 0x24);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + edi + 0x24) = ecx;
    MEM32(esi + -8) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0033F170; /* jl: less (signed <) */

loc_0033F1AA: ;
    edx = MEM32(esp + 0x10);
    edi = MEM32(ebx + 8);
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x1C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = edx;
    edx = MEM32(esp + 0x30);
    MEM32(ebx + 8) = edi;
    ecx = MEM32(edx + 0xC);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0033F14A; /* jl: less (signed <) */

loc_0033F1D6: ;
    MEM32(esp + 0x1C) = ebp;
    MEM32(esp + 0x20) = ebp;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0033F1E0: ;
    eax = MEM32(esp + esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033F1F6; /* je: equal / zero */

loc_0033F1E8: ;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033F1EFu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0033F1EF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + esi + 0x1C) = eax;

loc_0033F1F6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0033F1E0; /* jl: less (signed <) */

loc_0033F1FE: ;
    eax = MEM32(ebx + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0033F222; /* jle: less or equal (signed <=) */

loc_0033F207: ;
    esi = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x20);
    eax = ebx + 0x1C;

loc_0033F212: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax + -12) = MEM32(eax + -12) + esi;
    _fa = (uint32_t)(MEM32(eax + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax) = MEM32(eax) + edx;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = MEM32(ebx + 8);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0033F212; /* jl: less (signed <) */

loc_0033F222: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0033F224: ;
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0033F22Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033F22Au); } /* indirect call */
    }

loc_0033F22D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033F243; /* je: equal / zero */

loc_0033F231: ;
    edi = MEM32(ebx);
    edx = edi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0033F23Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033F238u); } /* indirect call */
    }

loc_0033F23B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edi + 0xC); PUSH32(esp, 0x0033F243u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033F240u); } /* indirect call */
    }

loc_0033F243: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0033F224; /* jl: less (signed <) */

loc_0033F249: ;
    ecx = MEM32(ebx + 8);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0033F25F; /* jle: less or equal (signed <=) */

loc_0033F252: ;
    eax = ebx + 0x18;
    edx = ecx;

loc_0033F257: ;
    _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + MEM32(eax);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0033F257; /* jne: not equal / not zero */

loc_0033F25F: ;
    eax = edi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    MEM32(ebx + 0x7C) = eax;
    eax = MEM32(ebx);
    PUSH32(esp, ebp);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0033F275u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033F272u); } /* indirect call */
    }

loc_0033F275: ;
    ecx = MEM32(ebx + 0x7C);
    ecx = ecx + ecx * 2;
    eax = eax + ecx * 8 + -12;
    esi = eax;
    ecx = MEM32(esi);
    edx = MEM32(esi + 4);
    esi = MEM32(esi + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = eax;
    MEM32(ebp) = ecx;
    MEM32(ebp + 4) = edx;
    MEM32(ebp + 8) = esi;
    ebp = eax + 0xC;
    MEM32(ebp) = ecx;
    MEM32(ebp + 4) = edx;
    MEM32(ebp + 8) = esi;
    ebp = eax + 0x18;
    MEM32(ebp) = ecx;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x24;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    MEM32(ebp + 4) = edx;
    MEM32(eax + 4) = edx;
    PUSH32(esp, 0);
    MEM32(ebp + 8) = esi;
    MEM32(eax + 8) = esi;
    edx = MEM32(ebx);
    PUSH32(esp, 0);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0033F2C6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033F2C3u); } /* indirect call */
    }

loc_0033F2C6: ;
    ecx = ebx;
    PUSH32(esp, 0x0033F2CDu); RECOMP_ABI_CALL(0x000278A5u, sub_000278A5); /* call 0x000278A5 */

loc_0033F2CD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0033F350
 * Original: 0x0033F350 - 0x0033F377 (39 bytes, 13 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033F350(void)
{

loc_0033F350: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    ecx = MEM32(ecx + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    eax = MEM32(edx * 4 + 0x8C462C);
    PUSH32(esp, eax);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0033F374u); RECOMP_ABI_CALL(0x0055B890u, sub_0055B890); /* call 0x0055B890 */

loc_0033F374: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0033F380
 * Original: 0x0033F380 - 0x0033F3B2 (50 bytes, 16 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033F380(void)
{

loc_0033F380: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    edx = eax + edx + -1;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    edx = eax + eax * 2;
    edx = MEM32(ecx + edx * 4 + 0x10);
    eax = MEM32(eax * 4 + 0x8C462C);
    ecx = MEM32(ecx + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0033F3AFu); RECOMP_ABI_CALL(0x0055B890u, sub_0055B890); /* call 0x0055B890 */

loc_0033F3AF: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0033F3C0
 * Original: 0x0033F3C0 - 0x0033F3F2 (50 bytes, 16 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033F3C0(void)
{

loc_0033F3C0: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    edx = eax + edx + -1;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    edx = eax + eax * 2;
    edx = MEM32(ecx + edx * 4 + 0x10);
    eax = MEM32(eax * 4 + 0x8C462C);
    ecx = MEM32(ecx + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0033F3EFu); RECOMP_ABI_CALL(0x0055BACEu, sub_0055BACE); /* call 0x0055BACE */

loc_0033F3EF: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0033F400
 * Original: 0x0033F400 - 0x0033F458 (88 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033F400(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033F400: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi + 0xF0);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033F425; /* je: equal / zero */

loc_0033F40E: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033F416u); RECOMP_ABI_CALL(0x000356D0u, sub_000356D0); /* call 0x000356D0 */

loc_0033F416: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0033F425u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033F422u); } /* indirect call */
    }

loc_0033F425: ;
    esi = edi + 0x100;
    edi = 2;

loc_0033F430: ;
    eax = MEM32(esi + -40);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x24;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033F443; /* je: equal / zero */

loc_0033F43A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033F440u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0033F440: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0033F443: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033F452; /* je: equal / zero */

loc_0033F449: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033F44Fu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0033F44F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0033F452: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0033F430; /* jne: not equal / not zero */

loc_0033F455: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0033F470
 * Original: 0x0033F470 - 0x0033F57E (270 bytes, 85 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033F470(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033F470: ;
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x90;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    ecx = MEM32(0x907BA4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7BB384);
    MEM32(esp + 0x18) = 0;
    MEM8(esp + 0x1C) = 0;
    MEM32(esp + 0x14) = 0x82B2D4;
    eax = MEM32(ecx);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0033F4A1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033F49Fu); } /* indirect call */
    }

loc_0033F4A1: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033F4E3; /* je: equal / zero */

loc_0033F4A7: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, 0x82B330);
    PUSH32(esp, ecx);
    edx = esp + 0x21;
    PUSH32(esp, 0x82AE2C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0033F4C0u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0033F4C0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = esp + 0x41;
    PUSH32(esp, eax);
    PUSH32(esp, 0x4F4A771);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0033F4DCu); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_0033F4DC: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    goto loc_0033F4E5;

loc_0033F4E3: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0033F4E5: ;
    PUSH32(esp, ebp);
    ecx = esp + 0x10;
    MEM32(ebx + 0xF0) = eax;
    MEM32(esp + 0x10) = 1;
    PUSH32(esp, ecx);
    ecx = MEM32(eax);
    PUSH32(esp, 0x0033F500u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_0033F500: ;
    esi = MEM32(esp + 0xA4);
    edi = ebx + 0xA8;
    ebp = 2;

loc_0033F512: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0033F51Au); RECOMP_ABI_CALL(0x00031B11u, sub_00031B11); /* call 0x00031B11 */

loc_0033F51A: ;
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x90;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x24;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0033F512; /* jne: not equal / not zero */

loc_0033F526: ;
    esi = MEM32(esp + 0xA4);
    edi = 2;
    POP32(esp, ebp);

loc_0033F533: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0033F53Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033F53Bu); } /* indirect call */
    }

loc_0033F53E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033F558; /* jne: not equal / not zero */

loc_0033F542: ;
    ecx = MEM32(ebx + 0xF0);
    MEM32(esp + 0xC) = eax;
    ecx = MEM32(ecx);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033F558u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_0033F558: ;
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x90;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0033F533; /* jne: not equal / not zero */

loc_0033F561: ;
    POP32(esp, edi);
    edx = ebx + 0x24;
    eax = ebx + 0x50;
    ecx = ebx + 0x7C;
    POP32(esp, esi);
    MEM32(ebx) = edx;
    MEM32(ebx + 0xC) = eax;
    MEM32(ebx + 0x18) = ecx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x90;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0033F5D0
 * Original: 0x0033F5D0 - 0x0033F60B (59 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033F5D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033F5D0: ;
    eax = MEM32(ecx + 0xF0);
    edx = MEM32(eax);
    eax = MEM32(edx + 0x14);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033F60A; /* je: equal / zero */

loc_0033F5E0: ;
    eax = MEM32(0x8FC604);
    PUSH32(esp, edi);
    edi = 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033F609; /* jne: not equal / not zero */

loc_0033F5EF: ;
    PUSH32(esp, esi);
    esi = ecx + 0xA8;

loc_0033F5F6: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033F602; /* je: equal / zero */

loc_0033F5FB: ;
    ecx = esi;
    PUSH32(esp, 0x0033F602u); RECOMP_ABI_CALL(0x00026531u, sub_00026531); /* call 0x00026531 */

loc_0033F602: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x24;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0033F5F6; /* jne: not equal / not zero */

loc_0033F608: ;
    POP32(esp, esi);

loc_0033F609: ;
    POP32(esp, edi);

loc_0033F60A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0033F620
 * Original: 0x0033F620 - 0x0033F745 (293 bytes, 97 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033F620(void)
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

loc_0033F620: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = ecx;
    eax = MEM32(ebp + 0xF0);
    eax = MEM32(eax);
    ecx = ZX8(MEM8(eax + 0x13));
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x14);
    PUSH32(esp, edi);
    ebx = 1;
    edi = esp + 0x10;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x10) = ebx;
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_0033F73D; /* jne: not equal / not zero */

loc_0033F64D: ;
    ecx = ebp;
    PUSH32(esp, 0x0033F654u); RECOMP_ABI_CALL(0x00031102u, sub_00031102); /* call 0x00031102 */

loc_0033F654: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0033F73D; /* jl: less (signed <) */

loc_0033F65E: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7B9D60); /* mulss */
    ecx = eax + eax * 2;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    esi = ebp + ecx * 4;
    eax = eax + ebp + 0x24;
    MEM8(esi + 8) = 0;
    MEM32(esi + 4) = edi;
    MEM32(esi) = eax;
    xmm1 = XMM_SCALAR(MEMF(0x829854)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0033F693; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0033F690: ;
    xmm0 = xmm1; /* movaps */

loc_0033F693: ;
    edx = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x18);
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    MEM32(eax + 0x18) = edx;
    eax = MEM32(esi);
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    eax = MEM32(ecx);
    edx = MEM32(esi);
    MEM32(edx) = eax;
    eax = MEM32(ecx + 4);
    MEM32(edx + 4) = eax;
    ecx = MEM32(ecx + 8);
    MEM32(edx + 8) = ecx;
    edx = MEM32(esi);
    MEMF(edx + 4) = xmm1.f[0]; /* movss */
    eax = MEM32(esi);
    xmm1 = XMM_SCALAR(MEMF(0x829848)); /* movss */
    MEMF(eax + 0x14) = xmm1.f[0]; /* movss */
    ecx = MEM32(esi);
    MEMF(ecx + 0xC) = xmm0.f[0]; /* movss */
    MEM8(esi + 8) = LO8(ebx);
    ebx = ebp + 0xA8;
    MEM32(esp + 0x1C) = ebx;

loc_0033F6E4: ;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x0033F6ECu); RECOMP_ABI_CALL(0x0002C7F1u, sub_0002C7F1); /* call 0x0002C7F1 */

loc_0033F6EC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033F6FB; /* jne: not equal / not zero */

loc_0033F6F0: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x24;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0033F6E4; /* jl: less (signed <) */

loc_0033F6F9: ;
    goto loc_0033F709;

loc_0033F6FB: ;
    edx = edi + edi * 8;
    ebp = ebp + edx * 4 + 0xA8;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033F722; /* jne: not equal / not zero */

loc_0033F709: ;
    POP32(esp, edi);
    MEM8(esi + 8) = 0;
    MEM32(esi + 4) = 0;
    MEM32(esi) = 0;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_0033F722: ;
    ecx = MEM32(esp + 0x1C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0033F728: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033F738; /* je: equal / zero */

loc_0033F72C: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x24;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0033F728; /* jl: less (signed <) */

loc_0033F735: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0033F738: ;
    ecx = MEM32(esi);
    MEM32(ecx + 0x1C) = eax;

loc_0033F73D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0033F790
 * Original: 0x0033F790 - 0x0033F8A7 (279 bytes, 74 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033F790(void)
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

loc_0033F790: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = 0;
    esi = ecx;
    ebx = 3;
    goto loc_0033F7B0;

    /* nop */
    /* nop */

loc_0033F7B0: ;
    SET_LO8(eax, MEM8(esi + 8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033F879; /* je: equal / zero */

loc_0033F7BB: ;
    ecx = MEM32(0x8FCB94);
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 8); /* cvtsi2ss */
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0033F7DF; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_0033F7D9: ;
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */

loc_0033F7DF: ;
    ebp = MEM32(esi);
    eax = MEM32(ecx);
    edi = MEM32(esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0xC;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0033F7EBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033F7E8u); } /* indirect call */
    }

loc_0033F7EB: ;
    xmm0.f[0] = (float)(int32_t)MEM32(edi + 0x18); /* cvtsi2ss */
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x10)); /* movss */
    xmm2.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm3.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0033F894; /* ja: above (unsigned >) (xmm3.f[0] vs xmm2.f[0]) */

loc_0033F809: ;
    xmm0 = XMM_SCALAR(MEMF(0x7ABE28)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp + 0x14); /* divss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7A9EBC); /* mulss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7D6830); /* mulss */
    eax = (int32_t)xmm0.f[0]; /* cvttss2si */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0033F857; /* jle: less or equal (signed <=) */

loc_0033F839: ;
    xmm0 = XMM_SCALAR(MEMF(0x82984C)); /* movss */

loc_0033F841: ;
    xmm2 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0033F88F; /* ja: above (unsigned >) (xmm2.f[0] vs xmm1.f[0]) */

loc_0033F853: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0033F841; /* jg: greater (signed >) */

loc_0033F857: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = sin(fp_top()); /* fsin */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(ebp) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x10) = eax;

loc_0033F879: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0033F7B0; /* jne: not equal / not zero */

loc_0033F883: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0033F88F: ;
    MEMF(ebp) = xmm3.f[0]; /* movss */

loc_0033F894: ;
    MEM8(esi + 8) = 0;
    MEM32(esi + 4) = 0;
    MEM32(esi) = 0;
    goto loc_0033F879;

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0033F8F0
 * Original: 0x0033F8F0 - 0x0033F9EC (252 bytes, 92 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033F8F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033F8F0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    MEM8(ecx + 8) = 0;
    MEM32(ecx + 4) = eax;
    MEM32(ecx) = eax;
    MEM8(ecx + 0x14) = LO8(eax);
    MEM32(ecx + 0x10) = eax;
    MEM32(ecx + 0xC) = eax;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    ebp = MEM32(esp + 0x14);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    ebx = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    MEM8(ecx + 0x20) = LO8(eax);
    MEM32(ecx + 0x1C) = eax;
    MEM32(ecx + 0x18) = eax;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    esi = ecx + 0xBC;
    MEM32(esp + 0x10) = 2;
    /* nop */

loc_0033F940: ;
    ecx = MEM32(esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0033F96B; /* jbe: below or equal (unsigned <=) */

loc_0033F948: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_0033F950: ;
    edx = MEM32(esi + -4);
    edi = MEM32(esp + 0x14);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx) = edi;
    MEM32(edx + 4) = ebp;
    MEM32(edx + 8) = ebx;
    edx = MEM32(esi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0033F950; /* jb: below (unsigned <) */

loc_0033F96B: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM8(esi + 4) = 0;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 8) = eax;
    ecx = MEM32(esi + -16);
    eax = MEM32(ecx);
    edi = MEM32(esi + -8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0033F987u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033F984u); } /* indirect call */
    }

loc_0033F987: ;
    edx = MEM32(esi + -12);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0033F9BC; /* jbe: below or equal (unsigned <=) */

loc_0033F990: ;
    edx = edi;

loc_0033F992: ;
    edi = edx;
    ebp = MEM32(edi);
    ebx = eax;
    MEM32(ebx) = ebp;
    ebp = MEM32(edi + 4);
    MEM32(ebx + 4) = ebp;
    edi = MEM32(edi + 8);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + 8) = edi;
    edi = MEM32(esi + -12);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0033F992; /* jb: below (unsigned <) */

loc_0033F9B4: ;
    ebp = MEM32(esp + 0x18);
    ebx = MEM32(esp + 0x1C);

loc_0033F9BC: ;
    eax = MEM32(esi + -12);
    ecx = MEM32(esi + -16);
    edx = MEM32(ecx);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0033F9CEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033F9CBu); } /* indirect call */
    }

loc_0033F9CE: ;
    eax = MEM32(esp + 0x10);
    MEM8(esi + -20) = 0;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x24;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = eax;
    if ((_fa != 0)) goto loc_0033F940; /* jne: not equal / not zero */

loc_0033F9E4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0033FA30
 * Original: 0x0033FA30 - 0x0033FA63 (51 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033FA30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033FA30: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    edi = esi + 0x10;
    MEM8(esi) = LO8(ebx);
    MEM32(esi + 4) = ebx;
    MEM32(esi + 8) = ebx;
    MEM32(esi + 0xC) = ebx;
    ecx = edi;
    MEM32(edi) = ebx;
    MEM32(edi + 4) = ebx;
    PUSH32(esp, 0x0033FA51u); RECOMP_ABI_CALL(0x00012C39u, sub_00012C39); /* call 0x00012C39 */

loc_0033FA51: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM8(edi + 8) = LO8(ebx);
    MEM32(edi + 0x10) = eax;
    MEM32(edi + 0xC) = eax;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0033FA70
 * Original: 0x0033FA70 - 0x0033FAC5 (85 bytes, 38 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033FA70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033FA70: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    ebx = MEM32(esi + 0x28);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x24);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    ebp = ecx;
    if (CMP_GE(_fas, _fbs)) goto loc_0033FA8C; /* jge: greater or equal (signed >=) */

loc_0033FA87: ;
    edi = 1;

loc_0033FA8C: ;
    eax = MEM32(ebp + 8);
    _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_G(_fas, _fbs)) ebx = eax; /* cmovg */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0033FAB6; /* jg: greater (signed >) */

loc_0033FA9B: ;
    goto loc_0033FAA0;

    /* nop */

loc_0033FAA0: ;
    ecx = MEM32(esi + 0x14);
    edx = MEM32(esi + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0x0033FAB1u); RECOMP_ABI_CALL(0x00026F86u, sub_00026F86); /* call 0x00026F86 */

loc_0033FAB1: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0033FAA0; /* jle: less or equal (signed <=) */

loc_0033FAB6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(ebp + 0x18) = 1;
    MEM8(ebp) = 1;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0033FAE0
 * Original: 0x0033FAE0 - 0x0033FAFE (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033FAE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033FAE0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0033FAE8u); RECOMP_ABI_CALL(0x0002562Cu, sub_0002562C); /* call 0x0002562C */

loc_0033FAE8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0033FAF8; /* je: equal / zero */

loc_0033FAEF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0033FAF5u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0033FAF5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0033FAF8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0033FB10
 * Original: 0x0033FB10 - 0x0033FB38 (40 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033FB10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033FB10: ;
    eax = MEM32(0x8FCB18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033FB37; /* je: equal / zero */

loc_0033FB19: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_0033FB20: ;
    eax = MEM32(0x8FCB2C);
    ecx = MEM32(esi + eax + 4);
    PUSH32(esp, 0x0033FB2Eu); RECOMP_ABI_CALL(0x00016325u, sub_00016325); /* call 0x00016325 */

loc_0033FB2E: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x30 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0033FB20; /* jb: below (unsigned <) */

loc_0033FB36: ;
    POP32(esp, esi);

loc_0033FB37: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0033FB50
 * Original: 0x0033FB50 - 0x00340090 (1344 bytes, 344 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0033FB50(void)
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

loc_0033FB50: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x144) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x144;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(0x8FCB2C);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = esp + 0xA0;
    edi = ecx;
    PUSH32(esp, eax);
    PUSH32(esp, 0x829C64);
    ecx = esp + 0x38;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ecx);
    ecx = MEM32(edx);
    MEM32(esp + 0x48) = edi;
    MEM32(esp + 0x1C) = ebx;
    MEM32(esp + 0x18) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033FB8Eu); RECOMP_ABI_CALL(0x0055BA0Au, sub_0055BA0A); /* call 0x0055BA0A */

loc_0033FB8E: ;
    edx = MEM32(0x8FCB2C);
    eax = esp + 0xF8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x82A09C);
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    ecx = MEM32(edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033FBADu); RECOMP_ABI_CALL(0x0055BA0Au, sub_0055BA0A); /* call 0x0055BA0A */

loc_0033FBAD: ;
    eax = MEM32(esp + 0xA4);
    esi = MEM32(edi + 0x48);
    ecx = MEM32(esp + 0xFC);
    MEM32(esp + 0x24) = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x44)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edi + 0x44) (32-bit) */
    MEM32(esp + 0x34) = ebx;
    MEM32(esp + 0x2C) = ebx;
    MEM32(esp + 0x18) = ebx;
    MEM32(esp + 0x28) = ecx;
    MEM32(esp + 0x1C) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00340032; /* je: equal / zero */

loc_0033FBDF: ;
    goto loc_0033FBF0;

loc_0033FBE1: ;
    edi = MEM32(esp + 0x3C);
    esi = MEM32(esp + 0x1C);
    /* nop */

loc_0033FBF0: ;
    edx = MEM32(0x8FCB18);
    eax = MEM32(edx + 0x4C);
    ecx = MEM32(edi + 0x40);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(7) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(0x8C47C0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x8C47C0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esi + esi * 4;
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        esi = _sv << _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    xmm1 = XMM_SCALAR(MEMF(esi + ecx + 4)); /* movss */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    edx = MEM32(ecx);
    MEM32(esp + 0x60) = edx;
    edx = MEM32(ecx + 4);
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x64) = edx;
    edx = MEM32(ecx + 8);
    ecx = MEM32(ecx + 0xC);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x68) = edx;
    edx = MEM32(eax);
    MEM32(esp + 0x80) = edx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x80)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x60); /* addss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x6C) = ecx;
    ecx = MEM32(eax + 4);
    edx = MEM32(eax + 8);
    eax = MEM32(eax + 0xC);
    MEM32(esp + 0x84) = ecx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x84)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x64); /* addss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x88) = edx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x88)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x68); /* addss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x6C); /* addss */
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x7FE8B4)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEM32(esp + 0x8C) = eax;
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_0033FCD8; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_0033FCD0: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0033FCDE; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0033FCD8: ;
    MEMF(esp + 0x4C) = xmm1.f[0]; /* movss */

loc_0033FCDE: ;
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033FCE7u); RECOMP_ABI_CALL(0x005CBF44u, sub_005CBF44); /* call 0x005CBF44 */

loc_0033FCE7: ;
    fp_push(MEMF(esp + 0x40)); /* fld float */
    edi = eax;
    { uint32_t _sv=(uint32_t)(edi), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        edi = _sv << _sc;
        _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033FCF5u); RECOMP_ABI_CALL(0x005CBF44u, sub_005CBF44); /* call 0x005CBF44 */

loc_0033FCF5: ;
    fp_push(MEMF(esp + 0x44)); /* fld float */
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi | eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    { uint32_t _sv=(uint32_t)(edi), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        edi = _sv << _sc;
        _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033FD08u); RECOMP_ABI_CALL(0x005CBF44u, sub_005CBF44); /* call 0x005CBF44 */

loc_0033FD08: ;
    fp_push(MEMF(esp + 0x48)); /* fld float */
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi | eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    { uint32_t _sv=(uint32_t)(edi), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        edi = _sv << _sc;
        _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033FD1Bu); RECOMP_ABI_CALL(0x005CBF44u, sub_005CBF44); /* call 0x005CBF44 */

loc_0033FD1B: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi | eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(esp + 0x14);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x54)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7C40B8); /* mulss */
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x58)); /* movss */
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    MEM32(esp + 0x30) = edi;
    MEMF(esp + 0x7C) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x14) = 0;
    if (CMP_BE(_fa, _fb)) goto loc_0033FFDE; /* jbe: below or equal (unsigned <=) */

loc_0033FD67: ;
    edi = MEM32(esp + 0xC);
    eax = 0x8FCCDC;
    { uint32_t _sv=(uint32_t)(edi), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        edi = _sv << _sc;
        _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM32(esp + 0x20) = eax;
    goto loc_0033FD80;

loc_0033FD79: ;
    eax = MEM32(esp + 0x20);
    /* nop */

loc_0033FD80: ;
    xmm4 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x20)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(esi + 0x14)); /* movss */
    xmm7 = XMM_SCALAR(MEMF(esi + 0x28)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x30)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + -8)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(esi + 8); /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm4.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm4.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] + xmm0.f[0]; /* addss */
    edx = MEM32(esp + 0x24);
    xmm6.f[0] = xmm6.f[0] * xmm4.f[0]; /* mulss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0x24); /* mulss */
    xmm6.f[0] = xmm6.f[0] + xmm0.f[0]; /* addss */
    xmm0 = xmm4; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0x18); /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] * xmm1.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(eax + -12)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 8); /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x40)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0x44)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0x38)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm4.f[0]; /* mulss */
    xmm4 = XMM_SCALAR(MEMF(eax + -4)); /* movss */
    xmm4.f[0] = xmm4.f[0] * MEMF(esi + 8); /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(esi + 0x48)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    ecx = ebx + ebx * 2;
    eax = edx + ecx * 4;
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x7C)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm6.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x5C); /* addss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm2.f[0] = xmm2.f[0] + xmm5.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] + xmm7.f[0]; /* addss */
    MEMF(eax) = xmm2.f[0]; /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEMF(eax + 8) = xmm3.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0033FE88; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0033FE83: ;
    MEMF(eax + 4) = xmm1.f[0]; /* movss */

loc_0033FE88: ;
    ecx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x30);
    edx = MEM32(esp + 0x28);
    MEM32(edx + ecx * 4) = eax;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(esp + 0x34);
    edx = MEM32(esp + eax * 4 + 0xCC);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    MEM32(esp + 0x18) = ecx;
    if (CMP_B(_fa, _fb)) goto loc_0033FEC2; /* jb: below (unsigned <) */

loc_0033FEB0: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x34) = eax;
    eax = MEM32(esp + eax * 4 + 0xA4);
    MEM32(esp + 0x24) = eax;

loc_0033FEC2: ;
    eax = MEM32(esp + 0x2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + eax * 4 + 0x124)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esp + eax * 4 + 0x124) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0033FEE7; /* jb: below (unsigned <) */

loc_0033FECF: ;
    ecx = MEM32(esp + eax * 4 + 0x100);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x18) = 0;
    MEM32(esp + 0x2C) = eax;
    MEM32(esp + 0x28) = ecx;

loc_0033FEE7: ;
    ecx = MEM32(esp + 0x10);
    eax = 0x3E8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033FFC0; /* jne: not equal / not zero */

loc_0033FEF8: ;
    edx = MEM32(0x8FCB2C);
    MEM32(edi + edx + 0xC) = eax;
    eax = MEM32(0x8FCB2C);
    eax = MEM32(edi + eax + 4);
    SET_LO8(edx, MEM8(eax + 0x10));
    ecx = MEM32(eax + 0x20);
    SET_LO8(edx, LO8(edx) | 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM8(eax + 0x10) = LO8(edx);
    if (CMP_EQ(_fa, _fb)) goto loc_0033FF42; /* je: equal / zero */

loc_0033FF1B: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(eax + 0x24)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0x24), LO16(ecx) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0033FF42; /* jbe: below or equal (unsigned <=) */

loc_0033FF23: ;
    edx = MEM32(eax + 0x20);
    SET_LO16(edx, MEM16(edx + ecx * 2));
    ebx = MEM32(eax + 0x28);
    ebx = MEM32(ebx + 0x10);
    edx = ZX16(LO16(edx));
    edx = ebx + edx * 4;
    MEM32(edx) = MEM32(edx) | 1;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = ZX16(MEM16(eax + 0x24));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0033FF23; /* jb: below (unsigned <) */

loc_0033FF42: ;
    ebx = MEM32(esp + 0xC);
    edx = MEM32(0x8FCB2C);
    eax = esp + 0xA0;
    PUSH32(esp, eax);
    PUSH32(esp, 0x829C64);
    ecx = esp + 0xA0;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = MEM32(edi + edx);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x18) = ebx;
    MEM32(esp + 0x1C) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033FF79u); RECOMP_ABI_CALL(0x0055BA0Au, sub_0055BA0A); /* call 0x0055BA0A */

loc_0033FF79: ;
    edx = MEM32(0x8FCB2C);
    eax = esp + 0xF8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x82A09C);
    ecx = esp + 0xA4;
    PUSH32(esp, ecx);
    ecx = MEM32(edi + edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033FF9Cu); RECOMP_ABI_CALL(0x0055BA0Au, sub_0055BA0A); /* call 0x0055BA0A */

loc_0033FF9C: ;
    eax = MEM32(esp + 0xA4);
    ecx = MEM32(esp + 0xFC);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x34) = ebx;
    MEM32(esp + 0x2C) = ebx;
    MEM32(esp + 0x18) = ebx;
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x28) = ecx;

loc_0033FFC0: ;
    eax = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x20);
    ecx = MEM32(esi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x20) = edx;
    if (CMP_B(_fa, _fb)) goto loc_0033FD79; /* jb: below (unsigned <) */

loc_0033FFDE: ;
    eax = MEM32(esp + 0x1C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x32;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = MEM32(esp + 0x3C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x44)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax + 0x44) (32-bit) */
    MEM32(esp + 0x1C) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_0033FBE1; /* jne: not equal / not zero */

loc_0033FFFC: ;
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0034002B; /* je: equal / zero */

loc_00340004: ;
    esi = MEM32(esp + 0xC);
    edx = MEM32(0x8FCB2C);
    eax = esi;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM32(eax + edx + 0xC) = ecx;
    ecx = MEM32(0x8FCB2C);
    ecx = MEM32(eax + ecx + 4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00340026u); RECOMP_ABI_CALL(0x00013C4Cu, sub_00013C4C); /* call 0x00013C4C */

loc_00340026: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0xC) = esi;

loc_0034002B: ;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xC), 3 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00340089; /* jae: above or equal (unsigned >=) */

loc_00340032: ;
    eax = MEM32(esp + 0xC);
    edi = eax;
    ebx = 3;
    { uint32_t _sv=(uint32_t)(edi), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        edi = _sv << _sc;
        _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00340042: ;
    edx = MEM32(0x8FCB2C);
    eax = MEM32(edi + edx + 4);
    SET_LO8(edx, MEM8(eax + 0x10));
    ecx = MEM32(eax + 0x20);
    SET_LO8(edx, LO8(edx) & 0xFE);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM8(eax + 0x10) = LO8(edx);
    if (CMP_EQ(_fa, _fb)) goto loc_00340083; /* je: equal / zero */

loc_0034005C: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(eax + 0x24)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0x24), LO16(ecx) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00340083; /* jbe: below or equal (unsigned <=) */

loc_00340064: ;
    edx = MEM32(eax + 0x20);
    SET_LO16(edx, MEM16(edx + ecx * 2));
    esi = MEM32(eax + 0x28);
    esi = MEM32(esi + 0x10);
    edx = ZX16(LO16(edx));
    edx = esi + edx * 4;
    MEM32(edx) = MEM32(edx) & 0xFFFFFFFEu;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = ZX16(MEM16(eax + 0x24));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00340064; /* jb: below (unsigned <) */

loc_00340083: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00340042; /* jne: not equal / not zero */

loc_00340089: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00340000
 * Original: 0x00340000 - 0x00340090 (144 bytes, 50 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00340000(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00340000: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0034002B; /* je: equal / zero */

loc_00340004: ;
    esi = MEM32(esp + 0xC);
    edx = MEM32(0x8FCB2C);
    eax = esi;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM32(eax + edx + 0xC) = ecx;
    ecx = MEM32(0x8FCB2C);
    ecx = MEM32(eax + ecx + 4);
    PUSH32(esp, 0x00340026u); RECOMP_ABI_CALL(0x00013C4Cu, sub_00013C4C); /* call 0x00013C4C */

loc_00340026: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0xC) = esi;

loc_0034002B: ;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xC), 3 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00340089; /* jae: above or equal (unsigned >=) */

loc_00340032: ;
    eax = MEM32(esp + 0xC);
    edi = eax;
    ebx = 3;
    { uint32_t _sv=(uint32_t)(edi), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        edi = _sv << _sc;
        _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00340042: ;
    edx = MEM32(0x8FCB2C);
    eax = MEM32(edi + edx + 4);
    SET_LO8(edx, MEM8(eax + 0x10));
    ecx = MEM32(eax + 0x20);
    SET_LO8(edx, LO8(edx) & 0xFE);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM8(eax + 0x10) = LO8(edx);
    if (CMP_EQ(_fa, _fb)) goto loc_00340083; /* je: equal / zero */

loc_0034005C: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(eax + 0x24)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0x24), LO16(ecx) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00340083; /* jbe: below or equal (unsigned <=) */

loc_00340064: ;
    edx = MEM32(eax + 0x20);
    SET_LO16(edx, MEM16(edx + ecx * 2));
    esi = MEM32(eax + 0x28);
    esi = MEM32(esi + 0x10);
    edx = ZX16(LO16(edx));
    edx = esi + edx * 4;
    MEM32(edx) = MEM32(edx) & 0xFFFFFFFEu;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = ZX16(MEM16(eax + 0x24));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00340064; /* jb: below (unsigned <) */

loc_00340083: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00340042; /* jne: not equal / not zero */

loc_00340089: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00340026
 * Original: 0x00340026 - 0x00340090 (106 bytes, 40 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00340026(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00340026: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0xC) = esi;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xC), 3 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00340089; /* jae: above or equal (unsigned >=) */

loc_00340032: ;
    eax = MEM32(esp + 0xC);
    edi = eax;
    ebx = 3;
    { uint32_t _sv=(uint32_t)(edi), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        edi = _sv << _sc;
        _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00340042: ;
    edx = MEM32(0x8FCB2C);
    eax = MEM32(edi + edx + 4);
    SET_LO8(edx, MEM8(eax + 0x10));
    ecx = MEM32(eax + 0x20);
    SET_LO8(edx, LO8(edx) & 0xFE);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM8(eax + 0x10) = LO8(edx);
    if (CMP_EQ(_fa, _fb)) goto loc_00340083; /* je: equal / zero */

loc_0034005C: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(eax + 0x24)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0x24), LO16(ecx) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00340083; /* jbe: below or equal (unsigned <=) */

loc_00340064: ;
    edx = MEM32(eax + 0x20);
    SET_LO16(edx, MEM16(edx + ecx * 2));
    esi = MEM32(eax + 0x28);
    esi = MEM32(esi + 0x10);
    edx = ZX16(LO16(edx));
    edx = esi + edx * 4;
    MEM32(edx) = MEM32(edx) & 0xFFFFFFFEu;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = ZX16(MEM16(eax + 0x24));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00340064; /* jb: below (unsigned <) */

loc_00340083: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00340042; /* jne: not equal / not zero */

loc_00340089: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0034002B
 * Original: 0x0034002B - 0x00340090 (101 bytes, 38 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034002B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034002B: ;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xC), 3 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00340089; /* jae: above or equal (unsigned >=) */

loc_00340032: ;
    eax = MEM32(esp + 0xC);
    edi = eax;
    ebx = 3;
    { uint32_t _sv=(uint32_t)(edi), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        edi = _sv << _sc;
        _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00340042: ;
    edx = MEM32(0x8FCB2C);
    eax = MEM32(edi + edx + 4);
    SET_LO8(edx, MEM8(eax + 0x10));
    ecx = MEM32(eax + 0x20);
    SET_LO8(edx, LO8(edx) & 0xFE);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM8(eax + 0x10) = LO8(edx);
    if (CMP_EQ(_fa, _fb)) goto loc_00340083; /* je: equal / zero */

loc_0034005C: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(eax + 0x24)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0x24), LO16(ecx) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00340083; /* jbe: below or equal (unsigned <=) */

loc_00340064: ;
    edx = MEM32(eax + 0x20);
    SET_LO16(edx, MEM16(edx + ecx * 2));
    esi = MEM32(eax + 0x28);
    esi = MEM32(esi + 0x10);
    edx = ZX16(LO16(edx));
    edx = esi + edx * 4;
    MEM32(edx) = MEM32(edx) & 0xFFFFFFFEu;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = ZX16(MEM16(eax + 0x24));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00340064; /* jb: below (unsigned <) */

loc_00340083: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00340042; /* jne: not equal / not zero */

loc_00340089: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003401E0
 * Original: 0x003401E0 - 0x003401E3 (3 bytes, 1 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003401E0(void)
{

loc_003401E0: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003401F0
 * Original: 0x003401F0 - 0x00340D7D (2957 bytes, 516 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003401F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003401F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0);
    PUSH32(esp, 0x1C);
    MEM32(esi + 0x4C) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034020Cu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0034020C: ;
    edi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00340238; /* je: equal / zero */

loc_00340215: ;
    ecx = MEM32(0x8FC1D0);
    edx = MEM32(ecx + 0x1E4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x82A134);
    PUSH32(esp, edx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00340230u); RECOMP_ABI_CALL(0x00018E81u, sub_00018E81); /* call 0x00018E81 */

loc_00340230: ;
    MEM32(edi) = 0x82A124;
    goto loc_0034023A;

loc_00340238: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0034023A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xFA0);
    MEM32(esi + 0x50) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00340249u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00340249: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003402C7; /* je: equal / zero */

loc_0034025B: ;
    ecx = eax + 0x18;
    edx = 0x32;
    goto loc_00340270;

    /* nop */
    /* nop */

loc_00340270: ;
    MEMF(ecx + -8) = xmm1.f[0]; /* movss */
    MEMF(ecx + -4) = xmm1.f[0]; /* movss */
    MEMF(ecx) = xmm1.f[0]; /* movss */
    MEMF(ecx + 4) = xmm0.f[0]; /* movss */
    MEMF(ecx + 8) = xmm1.f[0]; /* movss */
    MEMF(ecx + 0xC) = xmm1.f[0]; /* movss */
    MEMF(ecx + 0x10) = xmm1.f[0]; /* movss */
    MEMF(ecx + 0x14) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x18) = xmm1.f[0]; /* movss */
    MEMF(ecx + 0x1C) = xmm1.f[0]; /* movss */
    MEMF(ecx + 0x20) = xmm1.f[0]; /* movss */
    MEMF(ecx + 0x24) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x28) = xmm1.f[0]; /* movss */
    MEMF(ecx + 0x2C) = xmm1.f[0]; /* movss */
    MEMF(ecx + 0x30) = xmm1.f[0]; /* movss */
    MEMF(ecx + 0x34) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x50;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00340270; /* jne: not equal / not zero */

loc_003402C5: ;
    goto loc_003402C9;

loc_003402C7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003402C9: ;
    MEM32(esi + 0x40) = eax;
    MEM32(esi + 0x48) = 0;
    MEM32(esi + 0x44) = 0;
    xmm2 = XMM_MEM(0x8F9620); /* movaps */
    XMM_STORE(esi, xmm2); /* movaps */
    xmm2 = XMM_MEM(0x8F9630); /* movaps */
    XMM_STORE(esi + 0x10, xmm2); /* movaps */
    xmm2 = XMM_MEM(0x8F9640); /* movaps */
    xmm3 = XMM_SCALAR(MEMF(0x82B384)); /* movss */
    XMM_STORE(esi + 0x20, xmm2); /* movaps */
    xmm2 = XMM_MEM(0x8F9650); /* movaps */
    XMM_STORE(esi + 0x30, xmm2); /* movaps */
    xmm4 = XMM_SCALAR(MEMF(0x82B380)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x82B37C)); /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x7ABD64)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(0x7AD404)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(0x7AA820)); /* movss */
    MEMF(0x8C4814) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x82B378)); /* movss */
    MEMF(0x8C481C) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x82B374)); /* movss */
    MEMF(0x8C4820) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x82B370)); /* movss */
    MEMF(0x8C4824) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x7C8DD8)); /* movss */
    MEMF(0x8C4828) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x82B36C)); /* movss */
    MEMF(0x8C482C) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x7FBFA8)); /* movss */
    MEMF(0x8C4830) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x7FE8B4)); /* movss */
    MEMF(esp + 0x10) = xmm3.f[0]; /* movss */
    eax = MEM32(esp + 0x10);
    MEMF(esp + 0x14) = xmm3.f[0]; /* movss */
    ecx = MEM32(esp + 0x14);
    MEMF(esp + 0x18) = xmm3.f[0]; /* movss */
    edx = MEM32(esp + 0x18);
    MEM32(0x8C47C0) = eax;
    MEMF(esp + 0x1C) = xmm3.f[0]; /* movss */
    eax = MEM32(esp + 0x1C);
    MEM32(0x8C47C4) = ecx;
    MEM32(0x8C47C8) = edx;
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    ecx = MEM32(esp + 0x10);
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 0x14);
    MEMF(esp + 0x1C) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */
    MEM32(0x8C47CC) = eax;
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    eax = MEM32(esp + 0x18);
    MEM32(0x8C47D0) = ecx;
    ecx = MEM32(esp + 0x1C);
    MEM32(0x8C47D4) = edx;
    MEMF(esp + 0x10) = xmm4.f[0]; /* movss */
    edx = MEM32(esp + 0x10);
    MEMF(esp + 0x14) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    MEM32(0x8C47D8) = eax;
    eax = MEM32(esp + 0x14);
    MEM32(0x8C47DC) = ecx;
    ecx = MEM32(esp + 0x18);
    MEM32(0x8C47E0) = edx;
    edx = MEM32(esp + 0x1C);
    MEMF(0x8C4804) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x7AD378)); /* movss */
    MEMF(0x8FCB34) = xmm1.f[0]; /* movss */
    MEMF(0x8C4800) = xmm7.f[0]; /* movss */
    MEMF(0x8C4808) = xmm5.f[0]; /* movss */
    MEMF(0x8C480C) = xmm6.f[0]; /* movss */
    MEMF(0x8C4810) = xmm2.f[0]; /* movss */
    MEMF(0x8C4818) = xmm1.f[0]; /* movss */
    MEMF(0x8C4834) = xmm2.f[0]; /* movss */
    MEM32(0x8C47E4) = eax;
    MEM32(0x8C47E8) = ecx;
    MEM32(0x8C47EC) = edx;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x18);
    MEMF(0x8C4880) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x82B37C)); /* movss */
    MEMF(0x8C4884) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x82B384)); /* movss */
    MEMF(0x8C4894) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x82B378)); /* movss */
    MEMF(0x8C489C) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x82B374)); /* movss */
    MEMF(0x8C48A0) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x82B368)); /* movss */
    MEMF(0x8C48A4) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x7C8DD8)); /* movss */
    MEMF(0x8C48A8) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x7B9D1C)); /* movss */
    MEMF(0x8C48AC) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x7FBFA8)); /* movss */
    MEM32(0x8C47F0) = eax;
    eax = MEM32(esp + 0x1C);
    MEM32(0x8C47F4) = ecx;
    MEMF(0x8C48B0) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x82B364)); /* movss */
    MEMF(esp + 0x10) = xmm7.f[0]; /* movss */
    ecx = MEM32(esp + 0x10);
    MEM32(0x8C47F8) = edx;
    MEM32(0x8C47FC) = eax;
    MEM32(0x8C4840) = ecx;
    MEMF(esp + 0x14) = xmm7.f[0]; /* movss */
    edx = MEM32(esp + 0x14);
    MEMF(esp + 0x18) = xmm7.f[0]; /* movss */
    eax = MEM32(esp + 0x18);
    MEMF(esp + 0x1C) = xmm7.f[0]; /* movss */
    ecx = MEM32(esp + 0x1C);
    xmm7 = XMM_SCALAR(MEMF(0x82B380)); /* movss */
    MEM32(0x8C4844) = edx;
    MEM32(0x8C4848) = eax;
    MEM32(0x8C484C) = ecx;
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 0x10);
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    eax = MEM32(esp + 0x14);
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    ecx = MEM32(esp + 0x18);
    MEMF(esp + 0x1C) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x7ABD64)); /* movss */
    MEM32(0x8C4850) = edx;
    edx = MEM32(esp + 0x1C);
    MEM32(0x8C4854) = eax;
    MEM32(0x8C4858) = ecx;
    MEMF(esp + 0x10) = xmm4.f[0]; /* movss */
    eax = MEM32(esp + 0x10);
    MEMF(esp + 0x14) = xmm4.f[0]; /* movss */
    ecx = MEM32(esp + 0x14);
    MEM32(0x8C485C) = edx;
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 0x18);
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    MEM32(0x8C4860) = eax;
    eax = MEM32(esp + 0x1C);
    MEM32(0x8C4864) = ecx;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x10);
    MEM32(0x8C4868) = edx;
    MEM32(0x8C486C) = eax;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x14);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x18);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEM32(0x8C4870) = ecx;
    ecx = MEM32(esp + 0x1C);
    MEMF(0x8C4888) = xmm5.f[0]; /* movss */
    MEMF(0x8C488C) = xmm6.f[0]; /* movss */
    MEMF(0x8C4890) = xmm2.f[0]; /* movss */
    MEMF(0x8C4898) = xmm1.f[0]; /* movss */
    MEMF(0x8C48B4) = xmm2.f[0]; /* movss */
    MEM32(0x8C4874) = edx;
    MEM32(0x8C4878) = eax;
    MEM32(0x8C487C) = ecx;
    MEMF(0x8C4980) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x82B37C)); /* movss */
    MEMF(0x8C4984) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x82B384)); /* movss */
    MEMF(0x8C4994) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x82B378)); /* movss */
    MEMF(0x8C499C) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x82B374)); /* movss */
    MEMF(0x8C49A0) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x82B360)); /* movss */
    MEMF(0x8C49A4) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x7C8DD8)); /* movss */
    MEMF(0x8C49A8) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x7B9D1C)); /* movss */
    MEMF(0x8C49AC) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x7FBFA8)); /* movss */
    MEMF(0x8C49B0) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x82B35C)); /* movss */
    MEMF(esp + 0x10) = xmm7.f[0]; /* movss */
    edx = MEM32(esp + 0x10);
    xmm7 = XMM_SCALAR(MEMF(0x82B358)); /* movss */
    MEMF(esp + 0x14) = xmm7.f[0]; /* movss */
    eax = MEM32(esp + 0x14);
    xmm7 = XMM_SCALAR(MEMF(0x82B354)); /* movss */
    MEMF(esp + 0x18) = xmm7.f[0]; /* movss */
    ecx = MEM32(esp + 0x18);
    xmm7 = XMM_SCALAR(MEMF(0x82B380)); /* movss */
    MEM32(0x8C4940) = edx;
    MEMF(esp + 0x1C) = xmm3.f[0]; /* movss */
    edx = MEM32(esp + 0x1C);
    MEM32(0x8C4944) = eax;
    MEM32(0x8C4948) = ecx;
    MEM32(0x8C494C) = edx;
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    eax = MEM32(esp + 0x10);
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    ecx = MEM32(esp + 0x14);
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 0x18);
    MEMF(esp + 0x1C) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x7AD310)); /* movss */
    MEM32(0x8C4950) = eax;
    eax = MEM32(esp + 0x1C);
    MEM32(0x8C4954) = ecx;
    MEM32(0x8C4958) = edx;
    MEMF(esp + 0x10) = xmm4.f[0]; /* movss */
    ecx = MEM32(esp + 0x10);
    MEMF(esp + 0x14) = xmm4.f[0]; /* movss */
    edx = MEM32(esp + 0x14);
    MEM32(0x8C495C) = eax;
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    eax = MEM32(esp + 0x18);
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    MEM32(0x8C4960) = ecx;
    ecx = MEM32(esp + 0x1C);
    MEM32(0x8C4964) = edx;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x10);
    MEM32(0x8C4968) = eax;
    MEM32(0x8C496C) = ecx;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x14);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x18);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEM32(0x8C4970) = edx;
    edx = MEM32(esp + 0x1C);
    MEMF(0x8C4900) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x7AB7CC)); /* movss */
    MEMF(0x8C4988) = xmm2.f[0]; /* movss */
    MEMF(0x8C498C) = xmm6.f[0]; /* movss */
    MEMF(0x8C4990) = xmm2.f[0]; /* movss */
    MEMF(0x8C4998) = xmm1.f[0]; /* movss */
    MEMF(0x8C49B4) = xmm2.f[0]; /* movss */
    MEM32(0x8C4974) = eax;
    MEM32(0x8C4978) = ecx;
    MEM32(0x8C497C) = edx;
    MEMF(0x8C4904) = xmm7.f[0]; /* movss */
    MEMF(0x8C4908) = xmm5.f[0]; /* movss */
    MEMF(0x8C490C) = xmm6.f[0]; /* movss */
    MEMF(0x8C4910) = xmm2.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x82B384)); /* movss */
    MEMF(esp + 0x10) = xmm3.f[0]; /* movss */
    eax = MEM32(esp + 0x10);
    MEMF(esp + 0x14) = xmm3.f[0]; /* movss */
    ecx = MEM32(esp + 0x14);
    MEMF(esp + 0x18) = xmm3.f[0]; /* movss */
    edx = MEM32(esp + 0x18);
    MEMF(esp + 0x1C) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x82B380)); /* movss */
    MEM32(0x8C48C0) = eax;
    eax = MEM32(esp + 0x1C);
    MEM32(0x8C48C4) = ecx;
    MEM32(0x8C48C8) = edx;
    MEMF(0x8C4914) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x82B350)); /* movss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    ecx = MEM32(esp + 0x10);
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 0x14);
    MEM32(0x8C48CC) = eax;
    MEMF(esp + 0x1C) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x7AD310)); /* movss */
    MEM32(0x8C48D0) = ecx;
    ecx = MEM32(esp + 0x1C);
    MEM32(0x8C48D4) = edx;
    MEMF(0x8C4918) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x82B378)); /* movss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    eax = MEM32(esp + 0x18);
    MEMF(esp + 0x10) = xmm4.f[0]; /* movss */
    edx = MEM32(esp + 0x10);
    MEMF(0x8C491C) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x82B374)); /* movss */
    MEM32(0x8C48D8) = eax;
    MEM32(0x8C48DC) = ecx;
    MEM32(0x8C48E0) = edx;
    MEMF(esp + 0x14) = xmm4.f[0]; /* movss */
    eax = MEM32(esp + 0x14);
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    ecx = MEM32(esp + 0x18);
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 0x1C);
    MEMF(0x8C4920) = xmm7.f[0]; /* movss */
    MEMF(0x8C4924) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x7C8DD8)); /* movss */
    MEM32(0x8C48E4) = eax;
    MEM32(0x8C48E8) = ecx;
    MEM32(0x8C48EC) = edx;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x10);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x14);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x18);
    MEMF(0x8C4928) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x82B34C)); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEM32(0x8C48F0) = eax;
    eax = MEM32(esp + 0x1C);
    MEM32(0x8C48F4) = ecx;
    MEM32(0x8C48F8) = edx;
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    ecx = MEM32(esp + 0x10);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x14);
    MEMF(0x8C492C) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x7FBFA8)); /* movss */
    MEMF(0x8C4A00) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x829A30)); /* movss */
    MEMF(0x8C4930) = xmm7.f[0]; /* movss */
    MEMF(0x8C4934) = xmm2.f[0]; /* movss */
    MEM32(0x8C48FC) = eax;
    MEMF(0x8C49C0) = xmm1.f[0]; /* movss */
    MEMF(0x8C49E0) = xmm2.f[0]; /* movss */
    MEMF(0x8C4A20) = xmm3.f[0]; /* movss */
    MEMF(0x8C4A40) = xmm5.f[0]; /* movss */
    MEMF(0x8C4A60) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEM32(0x8C49D0) = ecx;
    MEM32(0x8C49D4) = edx;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x1C);
    xmm3 = XMM_SCALAR(MEMF(0x82B37C)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(0x7C4070)); /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x7AD43C)); /* movss */
    MEMF(esp + 0x10) = xmm3.f[0]; /* movss */
    edx = MEM32(esp + 0x10);
    xmm3 = XMM_SCALAR(MEMF(0x7AD3BC)); /* movss */
    MEM32(0x8C49D8) = eax;
    MEMF(esp + 0x1C) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x7AD414)); /* movss */
    MEM32(0x8C49DC) = ecx;
    MEM32(0x8C49F0) = edx;
    edx = MEM32(esp + 0x1C);
    MEMF(esp + 0x14) = xmm4.f[0]; /* movss */
    eax = MEM32(esp + 0x14);
    MEM32(0x8C49F4) = eax;
    MEMF(esp + 0x10) = xmm3.f[0]; /* movss */
    eax = MEM32(esp + 0x10);
    xmm3 = XMM_SCALAR(MEMF(0x7AD374)); /* movss */
    MEMF(esp + 0x1C) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x7AD434)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x18);
    MEM32(0x8C49F8) = ecx;
    MEM32(0x8C49FC) = edx;
    MEMF(esp + 0x14) = xmm3.f[0]; /* movss */
    ecx = MEM32(esp + 0x14);
    xmm3 = XMM_SCALAR(MEMF(0x7AD3C8)); /* movss */
    MEM32(0x8C4A10) = eax;
    eax = MEM32(esp + 0x1C);
    MEMF(esp + 0x10) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x82B348)); /* movss */
    MEMF(esp + 0x18) = xmm3.f[0]; /* movss */
    edx = MEM32(esp + 0x18);
    MEM32(0x8C4A14) = ecx;
    ecx = MEM32(esp + 0x10);
    MEM32(0x8C4A18) = edx;
    MEM32(0x8C4A1C) = eax;
    MEMF(esp + 0x1C) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x82984C)); /* movss */
    MEMF(esp + 0x14) = xmm3.f[0]; /* movss */
    edx = MEM32(esp + 0x14);
    MEMF(esp + 0x18) = xmm5.f[0]; /* movss */
    eax = MEM32(esp + 0x18);
    MEMF(esp + 0x18) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x82B344)); /* movss */
    MEM32(0x8C4A30) = ecx;
    ecx = MEM32(esp + 0x1C);
    MEM32(0x8C4A34) = edx;
    MEM32(0x8C4A38) = eax;
    MEMF(esp + 0x10) = xmm4.f[0]; /* movss */
    edx = MEM32(esp + 0x10);
    MEMF(esp + 0x14) = xmm5.f[0]; /* movss */
    eax = MEM32(esp + 0x14);
    MEMF(esp + 0x1C) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x82B348)); /* movss */
    MEM32(0x8C4A3C) = ecx;
    ecx = MEM32(esp + 0x18);
    MEM32(0x8C4A50) = edx;
    edx = MEM32(esp + 0x1C);
    MEM32(0x8C4A54) = eax;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x10);
    MEMF(esp + 0x14) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x7AB7CC)); /* movss */
    MEM32(0x8C4A58) = ecx;
    ecx = MEM32(esp + 0x14);
    MEM32(0x8C4A5C) = edx;
    MEMF(esp + 0x18) = xmm6.f[0]; /* movss */
    edx = MEM32(esp + 0x18);
    MEMF(esp + 0x1C) = xmm6.f[0]; /* movss */
    MEM32(0x8C4A70) = eax;
    eax = MEM32(esp + 0x1C);
    MEM32(0x8C4A74) = ecx;
    MEM32(0x8C4A78) = edx;
    MEM32(0x8C4A7C) = eax;
    MEMF(0x8FCBE8) = xmm7.f[0]; /* movss */
    MEMF(0x8FCBF8) = xmm2.f[0]; /* movss */
    MEMF(0x8FCC08) = xmm6.f[0]; /* movss */
    MEMF(0x8FCC18) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x14);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x18);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    ecx = MEM32(esp + 0x10);
    xmm1 = XMM_SCALAR(MEMF(0x82984C)); /* movss */
    MEM32(0x8FCBF4) = eax;
    MEM32(0x8FCBF0) = edx;
    edx = MEM32(esp + 0x14);
    MEMF(esp + 0x18) = xmm3.f[0]; /* movss */
    eax = MEM32(esp + 0x18);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEM32(0x8FCBEC) = ecx;
    MEMF(esp + 0x10) = xmm3.f[0]; /* movss */
    ecx = MEM32(esp + 0x10);
    MEM32(0x8FCC04) = eax;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEM32(0x8FCC00) = edx;
    edx = MEM32(esp + 0x14);
    MEMF(esp + 0x18) = xmm5.f[0]; /* movss */
    eax = MEM32(esp + 0x18);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AD344)); /* movss */
    MEM32(0x8FCBFC) = ecx;
    ecx = MEM32(esp + 0x10);
    MEM32(0x8FCC14) = eax;
    eax = MEM32(esp + 0x18);
    MEMF(0x8FCA74) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x8298AC)); /* movss */
    MEM32(0x8FCC0C) = ecx;
    MEM32(0x8FCC10) = edx;
    edx = MEM32(esp + 0x14);
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    ecx = MEM32(esp + 0x10);
    MEM32(0x8FCC24) = eax;
    MEMF(0x8FCA80) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7B1DE4)); /* movss */
    POP32(esp, edi);
    eax = esi;
    MEM32(0x8FCC1C) = ecx;
    MEM32(0x8FCC20) = edx;
    MEMF(0x8FCA7C) = xmm4.f[0]; /* movss */
    MEMF(0x8FCA78) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00341060
 * Original: 0x00341060 - 0x003410EE (142 bytes, 46 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00341060(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00341060: ;
    eax = MEM32(0x8FCB18);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003410DC; /* jne: not equal / not zero */

loc_0034106C: ;
    PUSH32(esp, 0x00341071u); RECOMP_ABI_CALL(0x0057494Cu, sub_0057494C); /* call 0x0057494C */

loc_00341071: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0x82B388);
    PUSH32(esp, 0x00341083u); RECOMP_ABI_CALL(0x005725B8u, sub_005725B8); /* call 0x005725B8 */

loc_00341083: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x82A884);
    PUSH32(esp, 0x00341092u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_00341092: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0034109Cu); RECOMP_ABI_CALL(0x00574952u, sub_00574952); /* call 0x00574952 */

loc_0034109C: ;
    ecx = eax;
    PUSH32(esp, 0x003410A3u); RECOMP_ABI_CALL(0x00028949u, sub_00028949); /* call 0x00028949 */

loc_003410A3: ;
    eax = MEM32(esp);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003410DC; /* jle: less or equal (signed <=) */

loc_003410AA: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x60);
    PUSH32(esp, 0x003410B3u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_003410B3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003410E0; /* je: equal / zero */

loc_003410BA: ;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x003410C6u); RECOMP_ABI_CALL(0x00012EA0u, sub_00012EA0); /* call 0x00012EA0 */

loc_003410C6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(0x8FCB18) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_003410DC; /* je: equal / zero */

loc_003410CF: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003410D9u); RECOMP_ABI_CALL(0x00025A96u, sub_00025A96); /* call 0x00025A96 */

loc_003410D9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003410DC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_003410E0: ;
    MEM32(0x8FCB18) = 0;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00341120
 * Original: 0x00341120 - 0x003411B2 (146 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00341120(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00341120: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x8FCB18);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003411AE; /* je: equal / zero */

loc_0034112F: ;
    ecx = MEM32(esi + 0x50);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0034113C; /* je: equal / zero */

loc_00341136: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0034113Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0034113Au); } /* indirect call */
    }

loc_0034113C: ;
    ecx = MEM32(esi + 0x40);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00341146u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00341146: ;
    PUSH32(esp, esi);
    MEM32(0x8FCB0C) = ebx;
    MEM32(0x8FCB10) = ebx;
    PUSH32(esp, 0x00341158u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00341158: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x8FCB18) = ebx;
    PUSH32(esp, 0x00341166u); RECOMP_ABI_CALL(0x0055D52Du, sub_0055D52D); /* call 0x0055D52D */

loc_00341166: ;
    edi = eax;
    _fa = (uint32_t)(MEM32(0x8FCB2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8FCB2C), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003411AD; /* je: equal / zero */

loc_00341170: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00341172: ;
    edx = MEM32(0x8FCB2C);
    eax = MEM32(esi + edx);
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x00341188u); RECOMP_ABI_CALL(0x0055D5A6u, sub_0055D5A6); /* call 0x0055D5A6 */

loc_00341188: ;
    edx = MEM32(0x8FCB2C);
    MEM32(esi + edx) = ebx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x30 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00341172; /* jb: below (unsigned <) */

loc_00341199: ;
    eax = MEM32(0x8FCB2C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003411A4u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_003411A4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x8FCB2C) = ebx;

loc_003411AD: ;
    POP32(esp, edi);

loc_003411AE: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003411E0
 * Original: 0x003411E0 - 0x0034133B (347 bytes, 110 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003411E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003411E0: ;
    eax = MEM32(0x8FCB18);
    _fb = (uint32_t)(0x114) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x114;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00341332; /* je: equal / zero */

loc_003411F5: ;
    eax = MEM32(esp + 0x120);
    PUSH32(esp, 0x8FCB0C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x82B3CC);
    PUSH32(esp, 0x00341211u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_00341211: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0034121Bu); RECOMP_ABI_CALL(0x00572F47u, sub_00572F47); /* call 0x00572F47 */

loc_0034121B: ;
    eax = MEM32(0x8FCB18);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    MEM32(eax) = 0;
    PUSH32(esp, 0x829EE8);
    MEM32(eax) = 0;
    PUSH32(esp, 0x00341247u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_00341247: ;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = MEM32(0x8FCB0C);
    PUSH32(esp, 0x00341257u); RECOMP_ABI_CALL(0x000257B2u, sub_000257B2); /* call 0x000257B2 */

loc_00341257: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00341260;

    /* nop */

loc_00341260: ;
    PUSH32(esp, edi);
    edx = esp + 0x20;
    PUSH32(esp, 0x82B3BC);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00341270u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00341270: ;
    ecx = MEM32(0x8FCB0C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0034128Eu); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_0034128E: ;
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00341298u); RECOMP_ABI_CALL(0x00572F47u, sub_00572F47); /* call 0x00572F47 */

loc_00341298: ;
    edx = MEM32(0x8FCB2C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    eax = esi + edx + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    MEM32(eax) = 0;
    PUSH32(esp, 0x82B3AC);
    MEM32(eax) = 0;
    PUSH32(esp, 0x003412C9u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003412C9: ;
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, 0x003412D7u); RECOMP_ABI_CALL(0x00023A25u, sub_00023A25); /* call 0x00023A25 */

loc_003412D7: ;
    PUSH32(esp, edi);
    edx = esp + 0x20;
    PUSH32(esp, 0x82B398);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003412E7u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_003412E7: ;
    ecx = MEM32(0x8FCB2C);
    edx = MEM32(esi + ecx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, ecx);
    MEM32(eax) = 0;
    ecx = esp;
    MEM32(eax) = 0;
    PUSH32(esp, 0);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00341317u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_00341317: ;
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, 0x00341325u); RECOMP_ABI_CALL(0x00028D5Eu, sub_00028D5E); /* call 0x00028D5E */

loc_00341325: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x30 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00341260; /* jb: below (unsigned <) */

loc_00341332: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x114) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x114;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003413A0
 * Original: 0x003413A0 - 0x003413FA (90 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003413A0(void)
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

loc_003413A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ebp + 8);
    PUSH32(esp, 0x8FCC40);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003413BBu); RECOMP_ABI_CALL(0x00012B99u, sub_00012B99); /* call 0x00012B99 */

loc_003413BB: ;
    edx = MEM32(eax + 4);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    ecx = MEM32(eax);
    MEM32(esp + 4) = edx;
    edx = MEM32(eax + 0xC);
    MEM32(esp + 0xC) = edx;
    xmm0.f[0] = xmm0.f[0] / MEMF(esp + 0xC); /* divss */
    MEM32(esp) = ecx;
    ecx = MEM32(eax + 8);
    MEM32(esp + 8) = ecx;
    xmm1 = XMM_MEM(esp); /* movaps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */
    xmm1 = XMM_MUL(xmm1, xmm0); /* mulps */
    XMM_STORE(esp, xmm1); /* movaps */
    fp_push(MEMF(esp + 8)); /* fld float */
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00341410
 * Original: 0x00341410 - 0x00341426 (22 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00341410(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00341410: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x82A190;
    PUSH32(esp, 0x0034141Eu); RECOMP_ABI_CALL(0x000122FCu, sub_000122FC); /* call 0x000122FC */

loc_0034141E: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00029EE3(); return; /* tail jmp 0x00029EE3 */

}

/**
 * sub_00341430
 * Original: 0x00341430 - 0x00341468 (56 bytes, 20 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00341430(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00341430: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0034143Du); RECOMP_ABI_CALL(0x00016294u, sub_00016294); /* call 0x00016294 */

loc_0034143D: ;
    SET_LO8(eax, MEM8(esi + 0x48));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00341464; /* jne: not equal / not zero */

loc_00341444: ;
    PUSH32(esp, 1);
    MEM8(esi + 0x48) = 1;
    PUSH32(esp, 0x0034144Fu); RECOMP_ABI_CALL(0x00023728u, sub_00023728); /* call 0x00023728 */

loc_0034144F: ;
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00341458u); RECOMP_ABI_CALL(0x00028926u, sub_00028926); /* call 0x00028926 */

loc_00341458: ;
    edx = MEM32(esi + 0x44);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00341461u); RECOMP_ABI_CALL(0x000377B9u, sub_000377B9); /* call 0x000377B9 */

loc_00341461: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00341464: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00341480
 * Original: 0x00341480 - 0x003414A5 (37 bytes, 14 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00341480(void)
{

loc_00341480: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 8);
    ecx = MEM32(ecx);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00341492u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_00341492: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(eax);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x003414A1u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_003414A1: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003414B0
 * Original: 0x003414B0 - 0x003414D5 (37 bytes, 14 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003414B0(void)
{

loc_003414B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x10);
    ecx = MEM32(ecx);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003414C2u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_003414C2: ;
    eax = MEM32(esi + 0x14);
    ecx = MEM32(eax);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x003414D1u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_003414D1: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003414E0
 * Original: 0x003414E0 - 0x003415D5 (245 bytes, 82 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003414E0(void)
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

loc_003414E0: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x18));
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    edx = MEM32(esi + 8);
    MEM32(esp + 4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00341531; /* je: equal / zero */

loc_003414F4: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(eax);
    eax = MEM32(ecx + 0x14);
    ecx = MEM32(edx);
    edx = MEM32(eax);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x14);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(esp + 0xC); PUSH32(esp, 0x00341509u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00341505u); } /* indirect call */
    }

loc_00341509: ;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(esi + 4); PUSH32(esp, 0x00341513u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00341510u); } /* indirect call */
    }

loc_00341513: ;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x10);
    xmm2 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x14) = ecx;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    POP32(esp, edi);
    goto loc_00341546;

loc_00341531: ;
    eax = MEM32(edx);
    ecx = MEM32(eax + 0x14);
    edx = MEM32(esi + 0xC);
    eax = MEM32(edx);
    xmm2 = XMM_SCALAR(MEMF(ecx)); /* movss */
    ecx = MEM32(eax + 0x14);
    xmm1 = XMM_SCALAR(MEMF(ecx)); /* movss */

loc_00341546: ;
    edx = MEM32(esi + 0x10);
    eax = MEM32(edx);
    ecx = MEM32(eax + 0x14);
    edx = MEM32(esi + 0x14);
    eax = MEM32(edx);
    xmm4 = XMM_SCALAR(MEMF(ecx)); /* movss */
    ecx = MEM32(eax + 0x14);
    SET_LO8(eax, MEM8(esp + 0x24));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    xmm3 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00341594; /* je: equal / zero */

loc_0034156D: ;
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00341584; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm2.f[0]) */

loc_00341572: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0034157A; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00341577: ;
    xmm0 = xmm1; /* movaps */

loc_0034157A: ;
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00341594; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_0034157F: ;
    xmm0 = xmm2; /* movaps */
    goto loc_00341594;

loc_00341584: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0034158C; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_00341589: ;
    xmm0 = xmm2; /* movaps */

loc_0034158C: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00341594; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00341591: ;
    xmm0 = xmm1; /* movaps */

loc_00341594: ;
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_003415AD; /* jp: parity */

loc_0034159D: ;
    MEMF(esp + 0x20) = xmm3.f[0]; /* movss */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_003415AD: ;
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    xmm3.f[0] = xmm3.f[0] - xmm4.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00341620
 * Original: 0x00341620 - 0x0034166C (76 bytes, 32 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00341620(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00341620: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00341635u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00341633u); } /* indirect call */
    }

loc_00341635: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00341662; /* je: equal / zero */

loc_0034163B: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x10F4A161);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00341657u); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_00341657: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0x1C) = esi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00341662: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi + 0x1C) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00341680
 * Original: 0x00341680 - 0x00341743 (195 bytes, 63 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00341680(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_00341680: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = 0; /* logical op clears CF */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x1C));
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034169Bu); RECOMP_ABI_CALL(0x0001B02Du, sub_0001B02D); /* call 0x0001B02D */

loc_0034169B: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x14)); /* fmul dword ptr [ebp + 0x14] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x7A9980)); /* fld float */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_003416BC; /* jbe: below or equal (unsigned <=) */

loc_003416B2: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    goto loc_003416D0;

loc_003416BC: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    xmm0 = xmm1; /* movaps */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003416D0; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm1.f[0]) */

loc_003416CD: ;
    xmm0 = xmm2; /* movaps */

loc_003416D0: ;
    edx = MEM32(esi + 0x1C);
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    eax = MEM32(edx);
    eax = MEM32(eax + 0x14);
    ecx = MEM32(eax);
    MEM32(esp + 0x10) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esp + 0x14) = edx;
    ecx = MEM32(eax + 8);
    MEM32(esp + 0x18) = ecx;
    edx = MEM32(eax + 0xC);
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esp + 0x1C) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_00341708; /* jne: not equal / not zero */

loc_00341700: ;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    goto loc_0034171A;

loc_00341708: ;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */

loc_0034171A: ;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0034172D; /* je: equal / zero */

loc_00341721: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = MEM32(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034172Du); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_0034172D: ;
    eax = MEM32(esi + 0x1C);
    ecx = MEM32(eax);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034173Cu); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_0034173C: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00341780
 * Original: 0x00341780 - 0x003418D2 (338 bytes, 107 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00341780(void)
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

loc_00341780: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x1C));
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00341795u); RECOMP_ABI_CALL(0x0002E40Cu, sub_0002E40C); /* call 0x0002E40C */

loc_00341795: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x82B3D8);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x003417A1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0034179Eu); } /* indirect call */
    }

loc_003417A1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003417B3; /* je: equal / zero */

loc_003417A5: ;
    eax = MEM32(eax + 0x14);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    goto loc_003417B8;

loc_003417B3: ;
    xmm0 = XMM_SCALAR(MEMF(esp)); /* movss */

loc_003417B8: ;
    eax = MEM32(0x8FCB64);
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax + 4;
    ebx = eax;
    MEM32(esp + 0xC) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00341814; /* je: equal / zero */

loc_003417CF: ;
    ecx = MEM32(eax + 0xC);
    edx = MEM32(ecx);
    eax = MEM32(eax + 8);
    ecx = MEM32(edx + 0x14);
    edx = MEM32(eax);
    eax = MEM32(ecx);
    PUSH32(esp, edi);
    edi = MEM32(edx + 0x14);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(esp + 0x14); PUSH32(esp, 0x003417E7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003417E3u); } /* indirect call */
    }

loc_003417E7: ;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(esi); PUSH32(esp, 0x003417F0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003417EEu); } /* indirect call */
    }

loc_003417F0: ;
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x18);
    xmm3 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x1C) = edx;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    POP32(esp, edi);
    goto loc_0034182C;

loc_00341814: ;
    ecx = MEM32(eax + 8);
    edx = MEM32(ecx);
    ecx = MEM32(edx + 0x14);
    edx = MEM32(eax + 0xC);
    eax = MEM32(edx);
    xmm3 = XMM_SCALAR(MEMF(ecx)); /* movss */
    ecx = MEM32(eax + 0x14);
    xmm1 = XMM_SCALAR(MEMF(ecx)); /* movss */

loc_0034182C: ;
    edx = MEM32(ebx + 0x10);
    eax = MEM32(edx);
    ecx = MEM32(eax + 0x14);
    edx = MEM32(ebx + 0x14);
    eax = MEM32(edx);
    xmm4 = XMM_SCALAR(MEMF(ecx)); /* movss */
    ecx = MEM32(eax + 0x14);
    xmm2 = XMM_SCALAR(MEMF(ecx)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00341855; /* jp: parity */

loc_0034184D: ;
    MEMF(esp + 8) = xmm2.f[0]; /* movss */
    goto loc_00341873;

loc_00341855: ;
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] - xmm3.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    xmm2.f[0] = xmm2.f[0] - xmm4.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */

loc_00341873: ;
    ecx = MEM32(0x8FCB90);
    PUSH32(esp, 0x0034187Eu); RECOMP_ABI_CALL(0x000330B5u, sub_000330B5); /* call 0x000330B5 */

loc_0034187E: ;
    edx = MEM32(eax + 0x1C);
    eax = MEM32(esp + 8);
    ecx = MEM32(0x8FCB44);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    esi = edx;
    PUSH32(esp, esi);
    MEM32(esp + 0x1C) = edx;
    PUSH32(esp, 0x0034189Cu); RECOMP_ABI_CALL(0x00036C51u, sub_00036C51); /* call 0x00036C51 */

loc_0034189C: ;
    ecx = MEM32(0x8FCB38);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    ecx = MEM32(0x8FCB5C);
    PUSH32(esp, 0x003418B0u); RECOMP_ABI_CALL(0x0001B02Du, sub_0001B02D); /* call 0x0001B02D */

loc_003418B0: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    ecx = MEM32(0x8FCB50);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, 0x003418CCu); RECOMP_ABI_CALL(0x00036C51u, sub_00036C51); /* call 0x00036C51 */

loc_003418CC: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x1C)) >> 32) & 1);
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00341930
 * Original: 0x00341930 - 0x0034195A (42 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00341930(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    int _cf = 0; /* carry flag */

loc_00341930: ;
    eax = MEM32(0x8FCB3C);
    ecx = MEM32(eax);
    edx = MEM32(ecx + 0x14);
    xmm0 = XMM_SCALAR(MEMF(edx)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AA840); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00341951; /* jp: parity */

loc_0034194B: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */

loc_00341951: ;
    MEMF(0x8FCB38) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00341970
 * Original: 0x00341970 - 0x00341A4B (219 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00341970(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00341970: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = ecx;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00341985: ;
    eax = MEM32(ebp + 0x10);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(eax + 0x10) = LO8(ebx);
    MEM8(eax + 0x11) = LO8(ebx);
    MEM8(eax + 0x12) = 0xFF;
    MEM8(eax + 0x13) = LO8(ebx);
    MEM16(eax + 0x14) = LO16(ebx);
    MEM32(eax + 0x18) = ebx;
    MEM8(eax + 0x4C) = LO8(ebx);
    MEM16(eax + 0x3C) = LO16(ebx);
    MEMF(eax + 0x40) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x44) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x48) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x30) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x34) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x38) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x50) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x54) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x58) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x5C) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 0x10);
    eax = MEM32(eax + edi + 0x20);
    SET_LO8(edx, MEM8(eax + 0x10));
    ecx = MEM32(eax + 0x20);
    SET_LO8(edx, LO8(edx) & 0xFE);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    MEM8(eax + 0x10) = LO8(edx);
    if (CMP_EQ(_fa, _fb)) goto loc_00341A24; /* je: equal / zero */

loc_003419FD: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(eax + 0x24)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0x24), LO16(ebx) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00341A24; /* jbe: below or equal (unsigned <=) */

loc_00341A05: ;
    edx = MEM32(eax + 0x20);
    SET_LO16(edx, MEM16(edx + ecx * 2));
    esi = MEM32(eax + 0x28);
    esi = MEM32(esi + 0x10);
    edx = ZX16(LO16(edx));
    edx = esi + edx * 4;
    MEM32(edx) = MEM32(edx) & 0xFFFFFFFEu;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = ZX16(MEM16(eax + 0x24));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00341A05; /* jb: below (unsigned <) */

loc_00341A24: ;
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x60;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xB40 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00341985; /* jl: less (signed <) */

loc_00341A33: ;
    edi = ebp + 0x74;
    ecx = 0x19;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp + 0x68) = 0x8BFE50;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00341A90
 * Original: 0x00341A90 - 0x00341B33 (163 bytes, 60 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00341A90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00341A90: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 2 (8-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_00341AF6; /* je: equal / zero */

loc_00341A9B: ;
    eax = MEM32(edi + -16);
    PUSH32(esp, ebx);
    ebx = edi + -16;
    PUSH32(esp, esi);
    esi = eax + eax * 2;
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(5) & 31u;
      if (_sc) {
        esi = _sv << _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_00341ADD; /* js: sign (negative) */

loc_00341AAE: ;
    edi = eax + 1;

loc_00341AB1: ;
    eax = MEM32(esi + -68);
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x60;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x82A1D0;
    if (CMP_EQ(_fa, _fb)) goto loc_00341ADA; /* je: equal / zero */

loc_00341AC1: ;
    PUSH32(esp, eax);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00341ACCu); RECOMP_ABI_CALL(0x0055D52Du, sub_0055D52D); /* call 0x0055D52D */

loc_00341ACC: ;
    ecx = eax;
    PUSH32(esp, 0x00341AD3u); RECOMP_ABI_CALL(0x0055D5A6u, sub_0055D5A6); /* call 0x0055D5A6 */

loc_00341AD3: ;
    MEM32(esi + 0x1C) = 0;

loc_00341ADA: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00341AB1; /* jne: not equal / not zero */

loc_00341ADD: ;
    _fa = (uint32_t)(MEM8(esp + 0x14)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x14), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00341AED; /* je: equal / zero */

loc_00341AE4: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00341AEAu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00341AEA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00341AED: ;
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_00341AF6: ;
    eax = MEM32(edi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(edi) = 0x82A1D0;
    if (CMP_EQ(_fa, _fb)) goto loc_00341B1C; /* je: equal / zero */

loc_00341B03: ;
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00341B0Eu); RECOMP_ABI_CALL(0x0055D52Du, sub_0055D52D); /* call 0x0055D52D */

loc_00341B0E: ;
    ecx = eax;
    PUSH32(esp, 0x00341B15u); RECOMP_ABI_CALL(0x0055D5A6u, sub_0055D5A6); /* call 0x0055D5A6 */

loc_00341B15: ;
    MEM32(edi + 0x1C) = 0;

loc_00341B1C: ;
    _fa = (uint32_t)(MEM8(esp + 0xC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0xC), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00341B2C; /* je: equal / zero */

loc_00341B23: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00341B29u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00341B29: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00341B2C: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00341B60
 * Original: 0x00341B60 - 0x00341BEB (139 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00341B60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00341B60: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, edi);
    MEM32(esi) = 0x82B400;
    if (CMP_EQ(_fa, _fb)) goto loc_00341B94; /* je: equal / zero */

loc_00341B72: ;
    edx = MEM32(ecx + -16);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    eax = ecx + -16;
    if (CMP_EQ(_fa, _fb)) goto loc_00341B84; /* je: equal / zero */

loc_00341B7C: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00341B82u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00341B80u); } /* indirect call */
    }

loc_00341B82: ;
    goto loc_00341B8D;

loc_00341B84: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00341B8Au); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00341B8A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00341B8D: ;
    MEM32(esi + 0x10) = 0;

loc_00341B94: ;
    eax = MEM32(esi + 0x60);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00341BB4; /* je: equal / zero */

loc_00341B9B: ;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00341BA6u); RECOMP_ABI_CALL(0x0055D52Du, sub_0055D52D); /* call 0x0055D52D */

loc_00341BA6: ;
    ecx = eax;
    PUSH32(esp, 0x00341BADu); RECOMP_ABI_CALL(0x0055DAC8u, sub_0055DAC8); /* call 0x0055DAC8 */

loc_00341BAD: ;
    MEM32(esi + 0x60) = 0;

loc_00341BB4: ;
    edi = MEM32(esi + 0x64);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00341BE7; /* je: equal / zero */

loc_00341BBB: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00341BC1u); RECOMP_ABI_CALL(0x0057494Cu, sub_0057494C); /* call 0x0057494C */

loc_00341BC1: ;
    PUSH32(esp, edi);
    ebx = eax;
    PUSH32(esp, 0x00341BC9u); RECOMP_ABI_CALL(0x005743E1u, sub_005743E1); /* call 0x005743E1 */

loc_00341BC9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x3320B0);
    PUSH32(esp, edi);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    ecx = ebx;
    PUSH32(esp, 0x00341BDFu); RECOMP_ABI_CALL(0x00574CE7u, sub_00574CE7); /* call 0x00574CE7 */

loc_00341BDF: ;
    MEM32(esi + 0x64) = 0;
    POP32(esp, ebx);

loc_00341BE7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00341C10
 * Original: 0x00341C10 - 0x00341F7D (877 bytes, 228 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00341C10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00341C10: ;
    _fb = (uint32_t)(0x664) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x664;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0xC8);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = esp + 0x354;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ebp = ecx;
    PUSH32(esp, 0x00341C30u); RECOMP_ABI_CALL(0x0059E9C2u, sub_0059E9C2); /* call 0x0059E9C2 */

loc_00341C30: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00341C35: ;
    MEM32(esp + eax * 4 + 0x288) = eax;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x32) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x32 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00341C35; /* jl: less (signed <) */

loc_00341C42: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = esp + 0x420;
    ecx = 0x32;

loc_00341C51: ;
    MEMF(eax + -8) = xmm0.f[0]; /* movss */
    MEMF(eax + -4) = xmm0.f[0]; /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00341C51; /* jne: not equal / not zero */

loc_00341C65: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esp + 0x420;
    edi = edi;

loc_00341C70: ;
    MEM32(esp + eax * 4 + 0x1C0) = eax;
    MEMF(ecx + -8) = xmm0.f[0]; /* movss */
    MEMF(ecx + -4) = xmm0.f[0]; /* movss */
    MEMF(ecx) = xmm0.f[0]; /* movss */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x32) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x32 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00341C70; /* jl: less (signed <) */

loc_00341C8E: ;
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x44) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm1.f[0]; /* movss */
    SET_LO8(ecx, 1);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 3;
    /* nop */

loc_00341CD0: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00341CEA; /* je: equal / zero */

loc_00341CD4: ;
    MEM32(esp + eax * 8 + 0xF8) = edi;
    MEM32(esp + eax * 8 + 0xFC) = 1;
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_00341CFE;

loc_00341CEA: ;
    MEM32(esp + eax * 8 + 0xF8) = 2;
    MEM32(esp + eax * 8 + 0xFC) = edx;
    SET_LO8(ecx, 1);

loc_00341CFE: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x19) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x19 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00341CD0; /* jl: less (signed <) */

loc_00341D04: ;
    ecx = MEM32(0x82B424);
    edx = MEM32(0x82B428);
    SET_LO16(eax, MEM16(0x82B42C));
    MEM32(esp + 0x20) = ecx;
    SET_LO8(ecx, MEM8(0x82B42E));
    MEM32(esp + 0x24) = edx;
    MEM16(esp + 0x28) = LO16(eax);
    MEM8(esp + 0x2A) = LO8(ecx);
    PUSH32(esp, 0x00341D32u); RECOMP_ABI_CALL(0x0057494Cu, sub_0057494C); /* call 0x0057494C */

loc_00341D32: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x82A884);
    ecx = esp + 0x18;
    PUSH32(esp, 0x00341D41u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_00341D41: ;
    edx = esp + 0x20;
    PUSH32(esp, edx);
    ecx = esp + 0x10;
    PUSH32(esp, 0x00341D4Fu); RECOMP_ABI_CALL(0x005725B8u, sub_005725B8); /* call 0x005725B8 */

loc_00341D4F: ;
    PUSH32(esp, 0x00341D54u); RECOMP_ABI_CALL(0x00574952u, sub_00574952); /* call 0x00574952 */

loc_00341D54: ;
    esi = eax;
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = edi;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00341D6C; /* je: equal / zero */

loc_00341D68: ;
    MEM32(ecx) = eax;
    goto loc_00341D76;

loc_00341D6C: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00341D76u); RECOMP_ABI_CALL(0x005724DCu, sub_005724DC); /* call 0x005724DC */

loc_00341D76: ;
    PUSH32(esp, ecx);
    eax = esp + 0x1C;
    ecx = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00341D83u); RECOMP_ABI_CALL(0x005720B5u, sub_005720B5); /* call 0x005720B5 */

loc_00341D83: ;
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00341D8Fu); RECOMP_ABI_CALL(0x00577AE4u, sub_00577AE4); /* call 0x00577AE4 */

loc_00341D8F: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x00341D98u); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_00341D98: ;
    _fa = (uint32_t)(MEM8(esp + 0xC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0xC), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00341DA3; /* je: equal / zero */

loc_00341D9F: ;
    MEM32(esp + 0xC) = edi;

loc_00341DA3: ;
    ecx = esp + 0xC;
    PUSH32(esp, 0x00341DACu); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_00341DAC: ;
    MEM32(esp + 0x14) = 0x32;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 5;
    goto loc_00341DC0;

    /* nop */

loc_00341DC0: ;
    ecx = esp + 0x7C;
    PUSH32(esp, 0x00341DC9u); RECOMP_ABI_CALL(0x0056A600u, sub_0056A600); /* call 0x0056A600 */

loc_00341DC9: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0x82B414);
    PUSH32(esp, 0x00341DD6u); RECOMP_ABI_CALL(0x005725B8u, sub_005725B8); /* call 0x005725B8 */

loc_00341DD6: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = esp + 0x84;
    PUSH32(esp, 0x00341DE7u); RECOMP_ABI_CALL(0x0056798Eu, sub_0056798E); /* call 0x0056798E */

loc_00341DE7: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x258);
    eax = esp + 0x420;
    PUSH32(esp, eax);
    PUSH32(esp, 0x829C64);
    ecx = esp + 0x74;
    PUSH32(esp, ecx);
    ecx = esp + 0x90;
    PUSH32(esp, 0x00341E0Cu); RECOMP_ABI_CALL(0x00568296u, sub_00568296); /* call 0x00568296 */

loc_00341E0C: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0xC8);
    edx = esp + 0x358;
    PUSH32(esp, edx);
    PUSH32(esp, 0x82A09C);
    eax = esp + 0x68;
    PUSH32(esp, eax);
    ecx = esp + 0x90;
    PUSH32(esp, 0x00341E31u); RECOMP_ABI_CALL(0x00568296u, sub_00568296); /* call 0x00568296 */

loc_00341E31: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x20);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x82AE08);
    edx = esp + 0x70;
    PUSH32(esp, edx);
    ecx = esp + 0x90;
    PUSH32(esp, 0x00341E50u); RECOMP_ABI_CALL(0x00568296u, sub_00568296); /* call 0x00568296 */

loc_00341E50: ;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    ecx = esp + 0x58;
    PUSH32(esp, ecx);
    ecx = esp + 0x84;
    MEM32(esp + 0x18) = edi;
    PUSH32(esp, 0x00341E6Au); RECOMP_ABI_CALL(0x0056A770u, sub_0056A770); /* call 0x0056A770 */

loc_00341E6A: ;
    PUSH32(esp, 0xC8);
    edx = esp + 0x1C4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x82A168);
    eax = esp + 0x74;
    PUSH32(esp, eax);
    ecx = esp + 0x8C;
    PUSH32(esp, 0x00341E8Du); RECOMP_ABI_CALL(0x0056A304u, sub_0056A304); /* call 0x0056A304 */

loc_00341E8D: ;
    PUSH32(esp, 0xC8);
    ecx = esp + 0x28C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x82A158);
    edx = esp + 0x68;
    PUSH32(esp, edx);
    ecx = esp + 0x8C;
    PUSH32(esp, 0x00341EB0u); RECOMP_ABI_CALL(0x0056A304u, sub_0056A304); /* call 0x0056A304 */

loc_00341EB0: ;
    PUSH32(esp, 0xC8);
    eax = esp + 0xFC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x82ADFC);
    ecx = esp + 0x7C;
    PUSH32(esp, ecx);
    ecx = esp + 0x8C;
    PUSH32(esp, 0x00341ED3u); RECOMP_ABI_CALL(0x0056A304u, sub_0056A304); /* call 0x0056A304 */

loc_00341ED3: ;
    PUSH32(esp, 4);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 0x82A150);
    eax = esp + 0x58;
    PUSH32(esp, eax);
    ecx = esp + 0x8C;
    PUSH32(esp, 0x00341EF0u); RECOMP_ABI_CALL(0x005682CDu, sub_005682CD); /* call 0x005682CD */

loc_00341EF0: ;
    PUSH32(esp, 4);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x82A144);
    edx = esp + 0x84;
    PUSH32(esp, edx);
    ecx = esp + 0x8C;
    PUSH32(esp, 0x00341F10u); RECOMP_ABI_CALL(0x005682CDu, sub_005682CD); /* call 0x005682CD */

loc_00341F10: ;
    PUSH32(esp, 0x82B404);
    PUSH32(esp, 0x82ADE0);
    eax = esp + 0x74;
    PUSH32(esp, eax);
    ecx = esp + 0x88;
    PUSH32(esp, 0x00341F2Bu); RECOMP_ABI_CALL(0x0056A352u, sub_0056A352); /* call 0x0056A352 */

loc_00341F2B: ;
    ecx = esp + 0x74;
    PUSH32(esp, ecx);
    ecx = esp + 0x80;
    PUSH32(esp, 0x00341F3Cu); RECOMP_ABI_CALL(0x005679BBu, sub_005679BB); /* call 0x005679BB */

loc_00341F3C: ;
    edx = MEM32(ebp + 0x10);
    eax = esi + edx + 0x1C;
    PUSH32(esp, eax);
    ecx = esp + 0x54;
    PUSH32(esp, ecx);
    ecx = esp + 0x84;
    PUSH32(esp, 0x00341F55u); RECOMP_ABI_CALL(0x0056973Eu, sub_0056973E); /* call 0x0056973E */

loc_00341F55: ;
    edx = MEM32(eax);
    ecx = esp + 0x7C;
    MEM32(esp + 0x18) = edx;
    PUSH32(esp, 0x00341F64u); RECOMP_ABI_CALL(0x0056A677u, sub_0056A677); /* call 0x0056A677 */

loc_00341F64: ;
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x60;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xB40 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00341DC0; /* jl: less (signed <) */

loc_00341F73: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x664) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x664;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00342060
 * Original: 0x00342060 - 0x003420E0 (128 bytes, 49 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00342060(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00342060: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, 2);
    MEM32(edi + 0x14) = ecx;
    PUSH32(esp, 0x00342073u); RECOMP_ABI_CALL(0x005589ADu, sub_005589AD); /* call 0x005589AD */

loc_00342073: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00342075: ;
    eax = MEM32(edi + 0x10);
    edx = MEM32(eax + ebp + 0x1C);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax + 0x20;
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 0x14);
    PUSH32(esp, edx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00342090u); RECOMP_ABI_CALL(0x0055A6ACu, sub_0055A6AC); /* call 0x0055A6AC */

loc_00342090: ;
    ecx = MEM32(edi + 0x10);
    eax = MEM32(ecx + ebp + 0x20);
    SET_LO8(edx, MEM8(eax + 0x10));
    ecx = MEM32(eax + 0x20);
    SET_LO8(edx, LO8(edx) & 0xFE);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM8(eax + 0x10) = LO8(edx);
    if (CMP_EQ(_fa, _fb)) goto loc_003420CF; /* je: equal / zero */

loc_003420A7: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(eax + 0x24)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0x24), LO16(ecx) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003420CF; /* jbe: below or equal (unsigned <=) */

loc_003420AF: ;
    /* nop */

loc_003420B0: ;
    edx = MEM32(eax + 0x20);
    SET_LO16(edx, MEM16(edx + ecx * 2));
    esi = MEM32(eax + 0x28);
    esi = MEM32(esi + 0x10);
    edx = ZX16(LO16(edx));
    edx = esi + edx * 4;
    MEM32(edx) = MEM32(edx) & 0xFFFFFFFEu;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = ZX16(MEM16(eax + 0x24));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003420B0; /* jb: below (unsigned <) */

loc_003420CF: ;
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x60;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xB40 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00342075; /* jl: less (signed <) */

loc_003420DA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00342100
 * Original: 0x00342100 - 0x003422BC (444 bytes, 144 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00342100(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00342100: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x124) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x124;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    edx = esi + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    MEM32(esi + 0x18) = eax;
    eax = esp;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    MEM32(eax) = 0;
    PUSH32(esp, 0x829EE8);
    MEM32(eax) = 0;
    PUSH32(esp, 0x0034213Au); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_0034213A: ;
    ecx = MEM32(esi + 0x18);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00342147u); RECOMP_ABI_CALL(0x000257B2u, sub_000257B2); /* call 0x000257B2 */

loc_00342147: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00342150;

    /* nop */

loc_00342150: ;
    PUSH32(esp, ebp);
    ecx = esp + 0x38;
    PUSH32(esp, 0x82B464);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00342160u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00342160: ;
    eax = MEM32(esp + 0x144);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    edx = esp + 0x44;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0034217Fu); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_0034217F: ;
    eax = esp + 0x3C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00342189u); RECOMP_ABI_CALL(0x00572F47u, sub_00572F47); /* call 0x00572F47 */

loc_00342189: ;
    PUSH32(esp, ebp);
    ecx = esp + 0x48;
    PUSH32(esp, 0x82B444);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00342199u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00342199: ;
    eax = MEM32(esi + 0x10);
    ecx = MEM32(eax + edi + 0x1C);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    edx = esp + 0x48;
    MEM32(eax) = 0;
    PUSH32(esp, edx);
    MEM32(eax) = 0;
    PUSH32(esp, 0x003421C7u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003421C7: ;
    ecx = MEM32(esp + 0x30);
    eax = esp + 0x3C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003421D5u); RECOMP_ABI_CALL(0x00028D5Eu, sub_00028D5E); /* call 0x00028D5E */

loc_003421D5: ;
    ecx = MEM32(eax);
    PUSH32(esp, 0);
    MEM32(esp + 0x28) = ecx;
    PUSH32(esp, 0x82B434);
    ecx = esp + 0x1C;
    MEM32(esp + 0x18) = 0;
    PUSH32(esp, 0x003421F3u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003421F3: ;
    eax = MEM32(esp + 0x20);
    edx = MEM32(esi + 0x10);
    MEM32(esp + 0x28) = eax;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ebx = edx + edi + 0x50;
    if (CMP_NE(_fa, _fb)) goto loc_00342214; /* jne: not equal / not zero */

loc_0034220A: ;
    MEM32(esp + 0x1C) = 0xFFFFFEDAu;
    goto loc_00342244;

loc_00342214: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0034221Au); RECOMP_ABI_CALL(0x00574405u, sub_00574405); /* call 0x00574405 */

loc_0034221A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0x10);
    PUSH32(esp, ebx);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x48);
    PUSH32(esp, eax);
    edx = esp + 0x40;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00342244u); RECOMP_ABI_CALL(0x00572FEFu, sub_00572FEF); /* call 0x00572FEF */

loc_00342244: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0x0034224Du); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_0034224D: ;
    _fa = (uint32_t)(MEM8(esp + 0x10)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x10), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0034225C; /* je: equal / zero */

loc_00342254: ;
    MEM32(esp + 0x10) = 0;

loc_0034225C: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x00342265u); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_00342265: ;
    eax = MEM32(esp + 0x1C);
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x60;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xB40 (32-bit) */
    MEM32(esp + 0x24) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00342150; /* jl: less (signed <) */

loc_0034227D: ;
    edx = MEM32(esi + 0x60);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0x82B404);
    PUSH32(esp, 0x00342293u); RECOMP_ABI_CALL(0x005725B8u, sub_005725B8); /* call 0x005725B8 */

loc_00342293: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x829EF8);
    PUSH32(esp, 0x003422A2u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003422A2: ;
    ecx = MEM32(esi + 0x18);
    eax = esp + 0x3C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003422AFu); RECOMP_ABI_CALL(0x00023F34u, sub_00023F34); /* call 0x00023F34 */

loc_003422AF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x124) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x124;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00342330
 * Original: 0x00342330 - 0x00342446 (278 bytes, 84 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00342330(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00342330: ;
    _fb = (uint32_t)(0xCC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xCC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0xD8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00342408; /* je: equal / zero */

loc_00342347: ;
    edx = MEM32(esp + 0xD8);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xD8);
    ecx = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_0034235F; /* jne: not equal / not zero */

loc_0034235C: ;
    ecx = ebx + 0x32;

loc_0034235F: ;
    SET_LO8(eax, MEM8(ecx + esi + 0x74));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00342412; /* jae: above or equal (unsigned >=) */

loc_0034236B: ;
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    MEM8(ecx + esi + 0x74) = LO8(eax);
    if (CMP_B(_fa, _fb)) goto loc_00342407; /* jb: below (unsigned <) */

loc_00342379: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00342381u); RECOMP_ABI_CALL(0x0001D1E3u, sub_0001D1E3); /* call 0x0001D1E3 */

loc_00342381: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00342406; /* je: equal / zero */

loc_00342388: ;
    PUSH32(esp, 0xC8);
    eax = esp + 0x14;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00342399u); RECOMP_ABI_CALL(0x0059E9C2u, sub_0059E9C2); /* call 0x0059E9C2 */

loc_00342399: ;
    ecx = MEM32(esi + 0x10);
    edi = edi + edi * 2;
    { uint32_t _sv=(uint32_t)(edi), _sc=(uint32_t)(5) & 31u;
      if (_sc) {
        edi = _sv << _sc;
        _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x003423ACu); RECOMP_ABI_CALL(0x0001F452u, sub_0001F452); /* call 0x0001F452 */

loc_003423AC: ;
    ecx = MEM32(esi + 0x10);
    ecx = MEM32(ecx + edi + 0x20);
    PUSH32(esp, 0x003423B8u); RECOMP_ABI_CALL(0x00013C4Cu, sub_00013C4C); /* call 0x00013C4C */

loc_003423B8: ;
    ecx = MEM32(esi + 0x10);
    ecx = MEM32(ecx + edi + 0x1C);
    PUSH32(esp, 0x32);
    PUSH32(esp, 0);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 0x82A09C);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003423D7u); RECOMP_ABI_CALL(0x0055BACEu, sub_0055BACE); /* call 0x0055BACE */

loc_003423D7: ;
    edx = MEM32(esi + 0x10);
    SET_LO8(ecx, MEM8(esp + 0xE0));
    MEM8(edx + edi + 0x12) = LO8(ebx);
    eax = MEM32(esi + 0x10);
    edx = MEM32(esp + 0xE8);
    MEM8(eax + edi + 0x13) = LO8(ecx);
    eax = MEM32(esp + 0xE4);
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00342406u); RECOMP_ABI_CALL(0x0001582Bu, sub_0001582B); /* call 0x0001582B */

loc_00342406: ;
    POP32(esp, edi);

loc_00342407: ;
    POP32(esp, ebx);

loc_00342408: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0xCC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xCC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

loc_00342412: ;
    ecx = MEM32(esp + 0xE4);
    eax = MEM32(esp + 0xE0);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0034242Bu); RECOMP_ABI_CALL(0x00028E44u, sub_00028E44); /* call 0x00028E44 */

loc_0034242B: ;
    ecx = eax + eax * 2;
    eax = MEM32(esi + 0x10);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(5) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0034243Bu); RECOMP_ABI_CALL(0x0001CB85u, sub_0001CB85); /* call 0x0001CB85 */

loc_0034243B: ;
    POP32(esp, ebx);
    POP32(esp, esi);
    _fb = (uint32_t)(0xCC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xCC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00342490
 * Original: 0x00342490 - 0x003424F4 (100 bytes, 39 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00342490(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00342490: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0xD8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003424F0; /* je: equal / zero */

loc_0034249D: ;
    edx = MEM32(esp + 0xC);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    ecx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    ebp = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_003424AF; /* jne: not equal / not zero */

loc_003424AC: ;
    ebp = ecx + 0x32;

loc_003424AF: ;
    SET_LO8(eax, MEM8(esi + ebp + 0x74));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003424EA; /* je: equal / zero */

loc_003424B7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003424EA; /* jb: below (unsigned <) */

loc_003424BB: ;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x003424C4u); RECOMP_ABI_CALL(0x00028E44u, sub_00028E44); /* call 0x00028E44 */

loc_003424C4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003424EF; /* je: equal / zero */

loc_003424C9: ;
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, edi);
    edi = eax + eax * 2;
    { uint32_t _sv=(uint32_t)(edi), _sc=(uint32_t)(5) & 31u;
      if (_sc) {
        edi = _sv << _sc;
        _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x003424DAu); RECOMP_ABI_CALL(0x00019089u, sub_00019089); /* call 0x00019089 */

loc_003424DA: ;
    ecx = MEM32(esi + 0x68);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x003424E2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003424DFu); } /* indirect call */
    }

loc_003424E2: ;
    ecx = MEM32(esi + 0x10);
    MEM32(ecx + edi + 0x18) = eax;
    POP32(esp, edi);

loc_003424EA: ;
    MEM8(esi + ebp + 0x74) = 0;

loc_003424EF: ;
    POP32(esp, ebp);

loc_003424F0: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00342510
 * Original: 0x00342510 - 0x00342659 (329 bytes, 105 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00342510(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00342510: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0xD8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00342654; /* je: equal / zero */

loc_00342524: ;
    eax = MEM32(0x8FC604);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00342654; /* je: equal / zero */

loc_00342532: ;
    _fa = (uint32_t)(MEM8(0x907E70)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x907E70), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00342654; /* je: equal / zero */

loc_0034253F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00342654; /* je: equal / zero */

loc_00342548: ;
    ecx = MEM32(esi + 0x68);
    eax = MEM32(ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00342552u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0034254Fu); } /* indirect call */
    }

loc_00342552: ;
    MEM32(esi + 0x70) = eax;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00342557: ;
    ecx = MEM32(esi + 0x10);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(edi + ecx + 0x4C) = LO8(ebx);
    edx = MEM32(esi + 0x10);
    SET_LO8(ecx, MEM8(edi + edx + 0x10));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    eax = edi + edx;
    if (CMP_NE(_fa, _fb)) goto loc_003425C1; /* jne: not equal / not zero */

loc_0034256E: ;
    SET_LO8(ecx, MEM8(eax + 0x11));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003425C1; /* je: equal / zero */

loc_00342575: ;
    ecx = MEM32(eax + 0x20);
    _fa = (uint32_t)(MEM8(ecx + 0x10)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x10), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003425C1; /* je: equal / zero */

loc_0034257E: ;
    edx = ZX16(MEM16(eax + 0x14));
    ecx = MEM32(esi + 0x70);
    xmm1.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    _fb = (uint32_t)(MEM32(eax + 0x18)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(eax + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = ZX16(MEM16(esi + 0x6C));
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm2.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm2.f[0] = xmm2.f[0] / xmm0.f[0]; /* divss */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x7AD380); /* mulss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003425B8; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_003425B3: ;
    xmm0 = xmm2; /* movaps */
    SET_LO8(ebx, 1);

loc_003425B8: ;
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    MEMF(eax + 0x5C) = xmm0.f[0]; /* movss */

loc_003425C1: ;
    eax = MEM32(esi + 0x10);
    SET_LO8(ecx, MEM8(eax + edi + 0x10));
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0034262A; /* je: equal / zero */

loc_003425CE: ;
    ecx = ZX16(MEM16(eax + 0x3C));
    edx = ecx + -1;
    PUSH32(esp, edx);
    _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFFEu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = eax + 0x24;
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x1C);
    PUSH32(esp, 0x829C64);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x003425F0u); RECOMP_ABI_CALL(0x0055BACEu, sub_0055BACE); /* call 0x0055BACE */

loc_003425F0: ;
    eax = MEM32(esi + 0x10);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM16(eax + 0x3C)) & 0xFFFFu; _fb = (uint32_t)(4) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0x3C), 4 (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0034262A; /* jb: below (unsigned <) */

loc_003425FC: ;
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = ecx;
    ecx = ZX16(MEM16(eax + 0x3C));
    edx = ecx + -3;
    PUSH32(esp, edx);
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFFCu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x1C);
    PUSH32(esp, 0x82A09C);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0034262Au); RECOMP_ABI_CALL(0x0055BACEu, sub_0055BACE); /* call 0x0055BACE */

loc_0034262A: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00342643; /* je: equal / zero */

loc_0034262E: ;
    eax = MEM32(esi + 0x10);
    SET_LO8(ecx, MEM8(eax + edi + 0x11));
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00342643; /* je: equal / zero */

loc_0034263B: ;
    ecx = MEM32(eax + 0x20);
    PUSH32(esp, 0x00342643u); RECOMP_ABI_CALL(0x00016325u, sub_00016325); /* call 0x00016325 */

loc_00342643: ;
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x60;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xB40 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00342557; /* jl: less (signed <) */

loc_00342652: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_00342654: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003426B0
 * Original: 0x003426B0 - 0x00342757 (167 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003426B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003426B0: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = esp + 0x20;
    PUSH32(esp, 0x003426C2u); RECOMP_ABI_CALL(0x0059DE73u, sub_0059DE73); /* call 0x0059DE73 */

loc_003426C2: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x82B480);
    PUSH32(esp, 0x003426D6u); RECOMP_ABI_CALL(0x0002B3D3u, sub_0002B3D3); /* call 0x0002B3D3 */

loc_003426D6: ;
    ebx = MEM32(esp + 0x1C);
    esi = eax;
    MEM32(edi + 0x64) = esi;
    PUSH32(esp, 0x003426E4u); RECOMP_ABI_CALL(0x0057494Cu, sub_0057494C); /* call 0x0057494C */

loc_003426E4: ;
    PUSH32(esp, esi);
    ebp = eax;
    PUSH32(esp, 0x003426ECu); RECOMP_ABI_CALL(0x005743E1u, sub_005743E1); /* call 0x005743E1 */

loc_003426EC: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0x003426FDu); RECOMP_ABI_CALL(0x00574C39u, sub_00574C39); /* call 0x00574C39 */

loc_003426FD: ;
    esi = MEM32(edi + 0x64);
    ecx = esi;
    PUSH32(esp, 0x00342707u); RECOMP_ABI_CALL(0x005A2986u, sub_005A2986); /* call 0x005A2986 */

loc_00342707: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0034272C; /* jle: less or equal (signed <=) */

loc_0034270B: ;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x00342723u); RECOMP_ABI_CALL(0x005A29FFu, sub_005A29FF); /* call 0x005A29FF */

loc_00342723: ;
    edx = MEM32(esp + 0x14);
    eax = edx + esi;
    goto loc_0034272E;

loc_0034272C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0034272E: ;
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x60;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0034273Fu); RECOMP_ABI_CALL(0x0055D52Du, sub_0055D52D); /* call 0x0055D52D */

loc_0034273F: ;
    ecx = eax;
    PUSH32(esp, 0x00342746u); RECOMP_ABI_CALL(0x0055D9F6u, sub_0055D9F6); /* call 0x0055D9F6 */

loc_00342746: ;
    ecx = esp + 0x20;
    PUSH32(esp, 0x0034274Fu); RECOMP_ABI_CALL(0x0059DEB2u, sub_0059DEB2); /* call 0x0059DEB2 */

loc_0034274F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00342780
 * Original: 0x00342780 - 0x003427E0 (96 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00342780(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00342780: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = ecx;
    PUSH32(esp, edi);
    MEM8(ebp + 0xD8) = 1;
    PUSH32(esp, 0x00342791u); RECOMP_ABI_CALL(0x000208D4u, sub_000208D4); /* call 0x000208D4 */

loc_00342791: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00342793: ;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(edi + eax + 0x20);
    SET_LO8(edx, MEM8(eax + 0x10));
    ecx = MEM32(eax + 0x20);
    SET_LO8(edx, LO8(edx) | 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM8(eax + 0x10) = LO8(edx);
    if (CMP_EQ(_fa, _fb)) goto loc_003427D1; /* je: equal / zero */

loc_003427AA: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(eax + 0x24)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0x24), LO16(ecx) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003427D1; /* jbe: below or equal (unsigned <=) */

loc_003427B2: ;
    edx = MEM32(eax + 0x20);
    SET_LO16(edx, MEM16(edx + ecx * 2));
    esi = MEM32(eax + 0x28);
    esi = MEM32(esi + 0x10);
    edx = ZX16(LO16(edx));
    edx = esi + edx * 4;
    MEM32(edx) = MEM32(edx) | 1;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = ZX16(MEM16(eax + 0x24));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003427B2; /* jb: below (unsigned <) */

loc_003427D1: ;
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x60;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xB40 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00342793; /* jl: less (signed <) */

loc_003427DC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00342800
 * Original: 0x00342800 - 0x0034285F (95 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00342800(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00342800: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = ecx;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM8(ebp + 0xD8) = 0;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, 0xFE);

loc_00342811: ;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebx + eax + 0x20);
    MEM8(eax + 0x10) = MEM8(eax + 0x10) & LO8(ecx);
    _fa = (uint32_t)(MEM8(eax + 0x10)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    edx = MEM32(eax + 0x20);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0034284F; /* je: equal / zero */

loc_00342822: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(eax + 0x24)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0x24), LO16(edx) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0034284F; /* jbe: below or equal (unsigned <=) */

loc_0034282A: ;
    /* nop */

loc_00342830: ;
    esi = MEM32(eax + 0x20);
    SET_LO16(esi, MEM16(esi + edx * 2));
    edi = MEM32(eax + 0x28);
    edi = MEM32(edi + 0x10);
    esi = ZX16(LO16(esi));
    esi = edi + esi * 4;
    MEM32(esi) = MEM32(esi) & 0xFFFFFFFEu;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = ZX16(MEM16(eax + 0x24));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00342830; /* jb: below (unsigned <) */

loc_0034284F: ;
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x60;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xB40 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00342811; /* jl: less (signed <) */

loc_0034285A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00342880
 * Original: 0x00342880 - 0x00342941 (193 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00342880(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00342880: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = ecx;
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEM32(eax) = 0x82A1D0;
    edx = eax + 0x24;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x1C) = ebx;
    MEM32(eax + 0x20) = ebx;
    ecx = edx;
    MEMF(ecx) = xmm0.f[0]; /* movss */
    MEMF(ecx + 4) = xmm0.f[0]; /* movss */
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0xC) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x10) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x40) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x44) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x48) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x50) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x54) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x58) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x5C) = xmm1.f[0]; /* movss */
    MEM8(eax + 0x10) = LO8(ebx);
    MEM8(eax + 0x11) = LO8(ebx);
    MEM8(eax + 0x13) = LO8(ebx);
    MEM16(eax + 0x14) = LO16(ebx);
    MEM32(eax + 0x18) = ebx;
    MEM8(eax + 0x4C) = LO8(ebx);
    MEM16(eax + 0x3C) = LO16(ebx);
    MEM8(eax + 0x12) = 0xFF;
    MEMF(eax + 0x40) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x44) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x48) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(edx) = xmm0.f[0]; /* movss */
    MEMF(edx + 4) = xmm0.f[0]; /* movss */
    MEMF(edx + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x30) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x34) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x38) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x50) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x54) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x58) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x5C) = xmm0.f[0]; /* movss */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00342980
 * Original: 0x00342980 - 0x00342A3F (191 bytes, 71 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00342980(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00342980: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x18);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esi) = 0x82B48C;
    if (CMP_EQ(_fa, _fb)) goto loc_003429A9; /* je: equal / zero */

loc_00342994: ;
    PUSH32(esp, eax);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0034299Fu); RECOMP_ABI_CALL(0x0055D52Du, sub_0055D52D); /* call 0x0055D52D */

loc_0034299F: ;
    ecx = eax;
    PUSH32(esp, 0x003429A6u); RECOMP_ABI_CALL(0x0055DAC8u, sub_0055DAC8); /* call 0x0055DAC8 */

loc_003429A6: ;
    MEM32(esi + 0x18) = ebx;

loc_003429A9: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003429C5; /* je: equal / zero */

loc_003429B0: ;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003429BBu); RECOMP_ABI_CALL(0x0055D52Du, sub_0055D52D); /* call 0x0055D52D */

loc_003429BB: ;
    ecx = eax;
    PUSH32(esp, 0x003429C2u); RECOMP_ABI_CALL(0x0055D5A6u, sub_0055D5A6); /* call 0x0055D5A6 */

loc_003429C2: ;
    MEM32(esi + 0x10) = ebx;

loc_003429C5: ;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x24);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003429F5; /* je: equal / zero */

loc_003429CD: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x003429D3u); RECOMP_ABI_CALL(0x0057494Cu, sub_0057494C); /* call 0x0057494C */

loc_003429D3: ;
    PUSH32(esp, edi);
    ebp = eax;
    PUSH32(esp, 0x003429DBu); RECOMP_ABI_CALL(0x005743E1u, sub_005743E1); /* call 0x005743E1 */

loc_003429DB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x3328C0);
    PUSH32(esp, edi);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    ecx = ebp;
    PUSH32(esp, 0x003429F1u); RECOMP_ABI_CALL(0x00574CE7u, sub_00574CE7); /* call 0x00574CE7 */

loc_003429F1: ;
    MEM32(esi + 0x24) = ebx;
    POP32(esp, ebp);

loc_003429F5: ;
    eax = MEM32(esi + 0x39F8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00342A0F; /* je: equal / zero */

loc_00342A00: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00342A06u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00342A06: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x39F8) = ebx;

loc_00342A0F: ;
    eax = MEM32(esi + 0x39FC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00342A28; /* je: equal / zero */

loc_00342A19: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00342A1Fu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00342A1F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x39F8) = ebx;

loc_00342A28: ;
    eax = MEM32(esi + 0x70);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00342A3B; /* je: equal / zero */

loc_00342A2F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00342A35u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00342A35: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x70) = ebx;

loc_00342A3B: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00342A70
 * Original: 0x00342A70 - 0x00342AC8 (88 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00342A70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00342A70: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esi + 0x1074;
    ecx = 0x861;
    PUSH32(esp, 0x2184);
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(esi + 0x70);
    PUSH32(esp, 0xFFFFFF00u);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00342A97u); RECOMP_ABI_CALL(0x0059E9C2u, sub_0059E9C2); /* call 0x0059E9C2 */

loc_00342A97: ;
    ecx = MEM32(esi + 0x70);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x861);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, 0x82A09C);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00342AB8u); RECOMP_ABI_CALL(0x0055BACEu, sub_0055BACE); /* call 0x0055BACE */

loc_00342AB8: ;
    MEM32(esi + 0x3A08) = edi;
    MEM32(esi + 0x3A0C) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00342AE0
 * Original: 0x00342AE0 - 0x00342BBC (220 bytes, 50 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00342AE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00342AE0: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00342AF9u); RECOMP_ABI_CALL(0x0002462Du, sub_0002462D); /* call 0x0002462D */

loc_00342AF9: ;
    SET_LO8(edx, MEM8(eax + esi + 0x31F8));
    SET_LO8(ecx, 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ecx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00342BB8; /* je: equal / zero */

loc_00342B0A: ;
    xmm1 = XMM_SCALAR(MEMF(0x7AD378)); /* movss */
    MEM8(eax + esi + 0x31F8) = LO8(ecx);
    SET_LO8(ecx, MEM8(esp + 0x14));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00342B29; /* jne: not equal / not zero */

loc_00342B21: ;
    xmm1 = XMM_SCALAR(MEMF(0x8298B0)); /* movss */

loc_00342B29: ;
    ecx = ZX16(MEM16(esi + eax * 2 + 0x74));
    xmm0 = XMM_SCALAR(MEMF(esi + ecx * 4 + 0x1074)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x7FE8B4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00342B51; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_00342B48: ;
    MEMF(esi + ecx * 4 + 0x1074) = xmm0.f[0]; /* movss */

loc_00342B51: ;
    ecx = ZX16(MEM16(esi + eax * 2 + 0x74));
    xmm0 = XMM_SCALAR(MEMF(esi + ecx * 4 + 0x1078)); /* movss */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00342B72; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_00342B69: ;
    MEMF(esi + ecx * 4 + 0x1074) = xmm0.f[0]; /* movss */

loc_00342B72: ;
    ecx = ZX16(MEM16(esi + eax * 2 + 0x74));
    xmm0 = XMM_SCALAR(MEMF(esi + ecx * 4 + 0x1178)); /* movss */
    _fb = (uint32_t)(0x41) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x41;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00342B95; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_00342B8C: ;
    MEMF(esi + ecx * 4 + 0x1074) = xmm0.f[0]; /* movss */

loc_00342B95: ;
    eax = ZX16(MEM16(esi + eax * 2 + 0x74));
    xmm0 = XMM_SCALAR(MEMF(esi + eax * 4 + 0x117C)); /* movss */
    _fb = (uint32_t)(0x42) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x42;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00342BB8; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_00342BAF: ;
    MEMF(esi + eax * 4 + 0x1074) = xmm0.f[0]; /* movss */

loc_00342BB8: ;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00342C00
 * Original: 0x00342C00 - 0x00342C5A (90 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00342C00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00342C00: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = ecx + 0x1074;
    goto loc_00342C10;

    /* nop */

loc_00342C10: ;
    xmm0 = XMM_SCALAR(MEMF(esi)); /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 8); /* cvttss2si */
    edi = MEM32(ecx + 0x70);
    eax = eax | 0xFFFFFF00u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edx + edi) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2184) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x2184 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00342C10; /* jl: less (signed <) */

loc_00342C39: ;
    eax = MEM32(ecx + 0x70);
    ecx = MEM32(ecx + 0x10);
    PUSH32(esp, 0x861);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x82A09C);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00342C56u); RECOMP_ABI_CALL(0x0055BACEu, sub_0055BACE); /* call 0x0055BACE */

loc_00342C56: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00342C70
 * Original: 0x00342C70 - 0x00342DD9 (361 bytes, 114 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00342C70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00342C70: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    SET_LO8(eax, MEM8(0x896174));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    MEM8(esp + 0x1B) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_00342DD2; /* jne: not equal / not zero */

loc_00342C90: ;
    eax = MEM32(0x8FC604);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00342DD2; /* je: equal / zero */

loc_00342C9E: ;
    _fa = (uint32_t)(MEM8(0x907E70)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x907E70), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00342DD2; /* je: equal / zero */

loc_00342CAB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00342DD2; /* je: equal / zero */

loc_00342CB4: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00342CE6; /* je: equal / zero */

loc_00342CBD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00342CE6; /* je: equal / zero */

loc_00342CC1: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00342CC6u); RECOMP_ABI_CALL(0x00014791u, sub_00014791); /* call 0x00014791 */

loc_00342CC6: ;
    edi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00342CCDu); RECOMP_ABI_CALL(0x00014791u, sub_00014791); /* call 0x00014791 */

loc_00342CCD: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00342CD4u); RECOMP_ABI_CALL(0x0001FC9Au, sub_0001FC9A); /* call 0x0001FC9A */

loc_00342CD4: ;
    ecx = edi;
    esi = SX16(LO16(eax));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00342CDEu); RECOMP_ABI_CALL(0x0001457Fu, sub_0001457F); /* call 0x0001457F */

loc_00342CDE: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x1C) = esi;
    goto loc_00342D02;

loc_00342CE6: ;
    ecx = MEM32(ebx + 0x3A10);
    eax = MEM32(ecx);
    esi = MEM32(ecx + 8);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00342CF4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00342CF1u); } /* indirect call */
    }

loc_00342CF4: ;
    eax = eax + eax * 4;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    MEM32(esp + 0x1C) = eax;
    esi = eax;

loc_00342D02: ;
    edx = MEM32(ebx + 0x3A08);
    ecx = esi;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00342DAE; /* jl: less (signed <) */

loc_00342D15: ;
    edx = ebx + 0x31F8;
    PUSH32(esp, 0x800);
    PUSH32(esp, edx);
    MEM8(esp + 0x23) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00342D2Bu); RECOMP_ABI_CALL(0x0059EBE8u, sub_0059EBE8); /* call 0x0059EBE8 */

loc_00342D2B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + 0x3A08) = esi;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00342D36: ;
    eax = MEM32(edi + 0x8E9058);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00342DA3; /* je: equal / zero */

loc_00342D40: ;
    esi = MEM32(eax + 0x28);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00342D4C; /* je: equal / zero */

loc_00342D47: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00342D9F; /* jne: not equal / not zero */

loc_00342D4C: ;
    ecx = MEM32(eax + 0x3C);
    SET_LO8(edx, MEM8(ecx + 0x3B));
    SET_LO8(edx, LO8(edx) & 3);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00342D9F; /* jne: not equal / not zero */

loc_00342D5A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00342D70; /* je: equal / zero */

loc_00342D5F: ;
    ecx = MEM32(eax + 0x20);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x8298BC); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00342D9F; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x8298BC)) */

loc_00342D70: ;
    ecx = MEM32(eax + 0x48);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00342D78u); RECOMP_ABI_CALL(0x0001A17Du, sub_0001A17D); /* call 0x0001A17D */

loc_00342D78: ;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    esi = MEM32(eax + 8);
    eax = MEM32(eax + 0xC);
    MEM32(esp + 0x2C) = eax;
    eax = MEM32(edi + 0x8E9058);
    _fa = (uint32_t)(MEM32(eax + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x28), 1 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00342D9Fu); RECOMP_ABI_CALL(0x000134D1u, sub_000134D1); /* call 0x000134D1 */

loc_00342D9F: ;
    esi = MEM32(esp + 0x1C);

loc_00342DA3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xA4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00342D36; /* jl: less (signed <) */

loc_00342DAE: ;
    edx = MEM32(ebx + 0x3A0C);
    ecx = esi;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00342DD2; /* jl: less (signed <) */

loc_00342DBD: ;
    SET_LO8(eax, MEM8(esp + 0x1B));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00342DD2; /* jne: not equal / not zero */

loc_00342DC5: ;
    ecx = ebx;
    MEM32(ebx + 0x3A0C) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00342DD2u); RECOMP_ABI_CALL(0x0002466Eu, sub_0002466E); /* call 0x0002466E */

loc_00342DD2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00342E40
 * Original: 0x00342E40 - 0x00342EE7 (167 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00342E40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00342E40: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = esp + 0x20;
    PUSH32(esp, 0x00342E52u); RECOMP_ABI_CALL(0x0059DE73u, sub_0059DE73); /* call 0x0059DE73 */

loc_00342E52: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x82B490);
    PUSH32(esp, 0x00342E66u); RECOMP_ABI_CALL(0x0002B3D3u, sub_0002B3D3); /* call 0x0002B3D3 */

loc_00342E66: ;
    ebx = MEM32(esp + 0x1C);
    esi = eax;
    MEM32(edi + 0x24) = esi;
    PUSH32(esp, 0x00342E74u); RECOMP_ABI_CALL(0x0057494Cu, sub_0057494C); /* call 0x0057494C */

loc_00342E74: ;
    PUSH32(esp, esi);
    ebp = eax;
    PUSH32(esp, 0x00342E7Cu); RECOMP_ABI_CALL(0x005743E1u, sub_005743E1); /* call 0x005743E1 */

loc_00342E7C: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0x00342E8Du); RECOMP_ABI_CALL(0x00574C39u, sub_00574C39); /* call 0x00574C39 */

loc_00342E8D: ;
    esi = MEM32(edi + 0x24);
    ecx = esi;
    PUSH32(esp, 0x00342E97u); RECOMP_ABI_CALL(0x005A2986u, sub_005A2986); /* call 0x005A2986 */

loc_00342E97: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00342EBC; /* jle: less or equal (signed <=) */

loc_00342E9B: ;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x00342EB3u); RECOMP_ABI_CALL(0x005A29FFu, sub_005A29FF); /* call 0x005A29FF */

loc_00342EB3: ;
    edx = MEM32(esp + 0x14);
    eax = edx + esi;
    goto loc_00342EBE;

loc_00342EBC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00342EBE: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x18;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00342ECFu); RECOMP_ABI_CALL(0x0055D52Du, sub_0055D52D); /* call 0x0055D52D */

loc_00342ECF: ;
    ecx = eax;
    PUSH32(esp, 0x00342ED6u); RECOMP_ABI_CALL(0x0055D9F6u, sub_0055D9F6); /* call 0x0055D9F6 */

loc_00342ED6: ;
    ecx = esp + 0x20;
    PUSH32(esp, 0x00342EDFu); RECOMP_ABI_CALL(0x0059DEB2u, sub_0059DEB2); /* call 0x0059DEB2 */

loc_00342EDF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00342F10
 * Original: 0x00342F10 - 0x00343271 (865 bytes, 253 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00342F10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00342F10: ;
    _fb = (uint32_t)(0x13C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x13C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x648C);
    ebp = ecx;
    PUSH32(esp, 0x00342F2Bu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00342F2B: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00342F5F; /* je: equal / zero */

loc_00342F34: ;
    ecx = eax + 8;
    edx = 0x861;
    /* nop */

loc_00342F40: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(ecx + -8) = xmm0.f[0]; /* movss */
    MEMF(ecx + -4) = xmm0.f[0]; /* movss */
    MEMF(ecx) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00342F40; /* jne: not equal / not zero */

loc_00342F57: ;
    ebx = eax;
    MEM32(esp + 0x1C) = ebx;
    goto loc_00342F65;

loc_00342F5F: ;
    MEM32(esp + 0x1C) = esi;
    ebx = esi;

loc_00342F65: ;
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x4308);
    PUSH32(esp, 0x00342F74u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00342F74: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00342F9C; /* je: equal / zero */

loc_00342F7B: ;
    ecx = eax;
    edx = 0x861;

loc_00342F82: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(ecx + 4) = xmm0.f[0]; /* movss */
    MEMF(ecx) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00342F82; /* jne: not equal / not zero */

loc_00342F94: ;
    edi = eax;
    MEM32(esp + 0x18) = edi;
    goto loc_00342FA2;

loc_00342F9C: ;
    MEM32(esp + 0x18) = esi;
    edi = esi;

loc_00342FA2: ;
    PUSH32(esp, 0x648C);
    PUSH32(esp, ebx);
    ecx = ebp;
    PUSH32(esp, 0x00342FAFu); RECOMP_ABI_CALL(0x00012E4Bu, sub_00012E4B); /* call 0x00012E4B */

loc_00342FAF: ;
    PUSH32(esp, 0x4308);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00342FBAu); RECOMP_ABI_CALL(0x0002A32Fu, sub_0002A32F); /* call 0x0002A32F */

loc_00342FBA: ;
    /* nop */

loc_00342FC0: ;
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x208);
    PUSH32(esp, 0x00342FCFu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00342FCF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + esi * 4 + 0xCC) = eax;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x20 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00342FC0; /* jl: less (signed <) */

loc_00342FDF: ;
    eax = MEM32(ebp + 0x70);
    PUSH32(esp, 0x2184);
    PUSH32(esp, 0xFFFFFF00u);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00342FF2u); RECOMP_ABI_CALL(0x0059E9C2u, sub_0059E9C2); /* call 0x0059E9C2 */

loc_00342FF2: ;
    ecx = MEM32(0x826D5C);
    edx = MEM32(0x826D60);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x34) = ecx;
    MEM32(esp + 0x38) = edx;
    PUSH32(esp, 0x0034300Eu); RECOMP_ABI_CALL(0x0057494Cu, sub_0057494C); /* call 0x0057494C */

loc_0034300E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x82A884);
    ecx = esp + 0x18;
    PUSH32(esp, 0x0034301Eu); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_0034301E: ;
    eax = esp + 0x34;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, 0x0034302Cu); RECOMP_ABI_CALL(0x005725B8u, sub_005725B8); /* call 0x005725B8 */

loc_0034302C: ;
    PUSH32(esp, 0x00343031u); RECOMP_ABI_CALL(0x00574952u, sub_00574952); /* call 0x00574952 */

loc_00343031: ;
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = esp;
    esi = eax;
    MEM32(ecx) = 0;
    eax = MEM32(esp + 0x1C);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0034304D; /* je: equal / zero */

loc_00343049: ;
    MEM32(ecx) = eax;
    goto loc_00343057;

loc_0034304D: ;
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00343057u); RECOMP_ABI_CALL(0x005724DCu, sub_005724DC); /* call 0x005724DC */

loc_00343057: ;
    PUSH32(esp, ecx);
    eax = esp + 0x1C;
    ecx = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00343064u); RECOMP_ABI_CALL(0x005720B5u, sub_005720B5); /* call 0x005720B5 */

loc_00343064: ;
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00343070u); RECOMP_ABI_CALL(0x00577AE4u, sub_00577AE4); /* call 0x00577AE4 */

loc_00343070: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x00343079u); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_00343079: ;
    _fa = (uint32_t)(MEM8(esp + 0x14)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x14), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00343088; /* je: equal / zero */

loc_00343080: ;
    MEM32(esp + 0x14) = 0;

loc_00343088: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0x00343091u); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_00343091: ;
    eax = MEM32(esp + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00343266; /* jle: less or equal (signed <=) */

loc_0034309D: ;
    ecx = esp + 0x50;
    PUSH32(esp, 0x003430A6u); RECOMP_ABI_CALL(0x0056A600u, sub_0056A600); /* call 0x0056A600 */

loc_003430A6: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0x82B4AC);
    PUSH32(esp, 0x003430B3u); RECOMP_ABI_CALL(0x005725B8u, sub_005725B8); /* call 0x005725B8 */

loc_003430B3: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ecx = esp + 0x58;
    PUSH32(esp, 0x003430C1u); RECOMP_ABI_CALL(0x0056798Eu, sub_0056798E); /* call 0x0056798E */

loc_003430C1: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x648C);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x829C64);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esp + 0x64;
    PUSH32(esp, 0x003430DCu); RECOMP_ABI_CALL(0x00568296u, sub_00568296); /* call 0x00568296 */

loc_003430DC: ;
    ecx = MEM32(ebp + 0x70);
    PUSH32(esp, 2);
    PUSH32(esp, 0x2184);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x82A09C);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    ecx = esp + 0x64;
    PUSH32(esp, 0x003430FAu); RECOMP_ABI_CALL(0x00568296u, sub_00568296); /* call 0x00568296 */

loc_003430FA: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x4308);
    PUSH32(esp, edi);
    PUSH32(esp, 0x82AE08);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esp + 0x64;
    PUSH32(esp, 0x00343115u); RECOMP_ABI_CALL(0x00568296u, sub_00568296); /* call 0x00568296 */

loc_00343115: ;
    MEM32(esp + 0x30) = 0x82;
    MEM32(esp + 0x24) = 5;
    ebx = esp + 0xCC;
    esi = 0x41;

loc_00343131: ;
    edi = MEM32(ebx);
    eax = edi;
    ecx = 0x41;
    /* nop */

loc_00343140: ;
    edx = esi + -65;
    MEM32(eax + 4) = esi;
    MEM32(eax) = edx;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00343140; /* jne: not equal / not zero */

loc_0034314F: ;
    eax = MEM32(esp + 0x28);
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = esp + 0x58;
    PUSH32(esp, 0x00343162u); RECOMP_ABI_CALL(0x0056A770u, sub_0056A770); /* call 0x0056A770 */

loc_00343162: ;
    PUSH32(esp, 0x208);
    PUSH32(esp, edi);
    PUSH32(esp, 0x82A168);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    ecx = esp + 0x60;
    PUSH32(esp, 0x0034317Bu); RECOMP_ABI_CALL(0x0056A304u, sub_0056A304); /* call 0x0056A304 */

loc_0034317B: ;
    PUSH32(esp, 0x208);
    PUSH32(esp, edi);
    PUSH32(esp, 0x82A158);
    eax = esp + 0x48;
    PUSH32(esp, eax);
    ecx = esp + 0x60;
    PUSH32(esp, 0x00343194u); RECOMP_ABI_CALL(0x0056A304u, sub_0056A304); /* call 0x0056A304 */

loc_00343194: ;
    PUSH32(esp, 0x208);
    PUSH32(esp, edi);
    PUSH32(esp, 0x82ADFC);
    ecx = esp + 0x4C;
    PUSH32(esp, ecx);
    ecx = esp + 0x60;
    PUSH32(esp, 0x003431ADu); RECOMP_ABI_CALL(0x0056A304u, sub_0056A304); /* call 0x0056A304 */

loc_003431AD: ;
    PUSH32(esp, 4);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    PUSH32(esp, 0x82A150);
    eax = esp + 0x50;
    PUSH32(esp, eax);
    ecx = esp + 0x60;
    PUSH32(esp, 0x003431C7u); RECOMP_ABI_CALL(0x005682CDu, sub_005682CD); /* call 0x005682CD */

loc_003431C7: ;
    PUSH32(esp, 4);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x82A144);
    edx = esp + 0x58;
    PUSH32(esp, edx);
    ecx = esp + 0x60;
    PUSH32(esp, 0x003431E1u); RECOMP_ABI_CALL(0x005682CDu, sub_005682CD); /* call 0x005682CD */

loc_003431E1: ;
    PUSH32(esp, 0x82B49C);
    PUSH32(esp, 0x82ADE0);
    eax = esp + 0x50;
    PUSH32(esp, eax);
    ecx = esp + 0x5C;
    PUSH32(esp, 0x003431F9u); RECOMP_ABI_CALL(0x0056A352u, sub_0056A352); /* call 0x0056A352 */

loc_003431F9: ;
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    ecx = esp + 0x54;
    PUSH32(esp, 0x00343207u); RECOMP_ABI_CALL(0x005679BBu, sub_005679BB); /* call 0x005679BB */

loc_00343207: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x861) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x861 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00343131; /* jl: less (signed <) */

loc_00343216: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x10;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebp);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    ecx = esp + 0x58;
    PUSH32(esp, 0x00343228u); RECOMP_ABI_CALL(0x0056973Eu, sub_0056973E); /* call 0x0056973E */

loc_00343228: ;
    eax = MEM32(eax);
    MEM32(esp + 0x20) = eax;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00343230: ;
    ecx = MEM32(esp + esi * 4 + 0xCC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0034323Du); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0034323D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x20 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00343230; /* jl: less (signed <) */

loc_00343246: ;
    edx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00343250u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00343250: ;
    eax = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0034325Au); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0034325A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x50;
    PUSH32(esp, 0x00343266u); RECOMP_ABI_CALL(0x0056A677u, sub_0056A677); /* call 0x0056A677 */

loc_00343266: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x13C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x13C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00343230
 * Original: 0x00343230 - 0x00343271 (65 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00343230(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00343230: ;
    ecx = MEM32(esp + esi * 4 + 0xCC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0034323Du); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0034323D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x20 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00343230; /* jl: less (signed <) */

loc_00343246: ;
    edx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00343250u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00343250: ;
    eax = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0034325Au); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0034325A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x50;
    PUSH32(esp, 0x00343266u); RECOMP_ABI_CALL(0x0056A677u, sub_0056A677); /* call 0x0056A677 */

loc_00343266: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x13C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x13C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00343350
 * Original: 0x00343350 - 0x00343404 (180 bytes, 61 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00343350(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00343350: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    edx = esi + 0x30;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    MEM32(esi + 0x20) = eax;
    eax = esp;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    MEM32(eax) = 0;
    PUSH32(esp, 0x829EE8);
    MEM32(eax) = 0;
    PUSH32(esp, 0x00343384u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_00343384: ;
    ecx = MEM32(esi + 0x20);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00343391u); RECOMP_ABI_CALL(0x000257B2u, sub_000257B2); /* call 0x000257B2 */

loc_00343391: ;
    edx = MEM32(esi + 0x10);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    MEM32(eax) = 0;
    PUSH32(esp, 0x82B4B8);
    MEM32(eax) = 0;
    PUSH32(esp, 0x003433B8u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003433B8: ;
    ecx = MEM32(esi + 0x20);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003433C5u); RECOMP_ABI_CALL(0x00028D5Eu, sub_00028D5E); /* call 0x00028D5E */

loc_003433C5: ;
    ecx = MEM32(eax);
    eax = MEM32(esi + 0x18);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEM32(esp + 0x10) = ecx;
    ecx = esp;
    PUSH32(esp, 0x82B49C);
    PUSH32(esp, 0x003433E1u); RECOMP_ABI_CALL(0x005725B8u, sub_005725B8); /* call 0x005725B8 */

loc_003433E1: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x829EF8);
    PUSH32(esp, 0x003433F0u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003433F0: ;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, 0x003433FDu); RECOMP_ABI_CALL(0x00023F34u, sub_00023F34); /* call 0x00023F34 */

loc_003433FD: ;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00343440
 * Original: 0x00343440 - 0x00343464 (36 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00343440(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00343440: ;
    PUSH32(esp, ecx);
    eax = MEM32(ecx + 0x6C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00343462; /* je: equal / zero */

loc_00343448: ;
    ecx = MEM32(eax);
    MEM32(esp) = 1;
    eax = MEM32(ecx + 0x14);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00343462; /* je: equal / zero */

loc_00343459: ;
    edx = esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00343462u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_00343462: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00343470
 * Original: 0x00343470 - 0x00343496 (38 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00343470(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00343470: ;
    PUSH32(esp, ecx);
    eax = MEM32(ecx + 0x6C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00343494; /* je: equal / zero */

loc_00343478: ;
    eax = MEM32(eax);
    MEM32(esp) = 0;
    ecx = MEM32(eax + 0x14);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00343494; /* je: equal / zero */

loc_00343489: ;
    edx = esp;
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x00343494u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_00343494: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003434A0
 * Original: 0x003434A0 - 0x003434C4 (36 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003434A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003434A0: ;
    PUSH32(esp, ecx);
    eax = MEM32(ecx + 0x64);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003434C2; /* je: equal / zero */

loc_003434A8: ;
    ecx = MEM32(eax);
    MEM32(esp) = 1;
    eax = MEM32(ecx + 0x14);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003434C2; /* je: equal / zero */

loc_003434B9: ;
    edx = esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0x003434C2u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_003434C2: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003434D0
 * Original: 0x003434D0 - 0x003434F6 (38 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003434D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003434D0: ;
    PUSH32(esp, ecx);
    eax = MEM32(ecx + 0x64);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003434F4; /* je: equal / zero */

loc_003434D8: ;
    eax = MEM32(eax);
    MEM32(esp) = 0;
    ecx = MEM32(eax + 0x14);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003434F4; /* je: equal / zero */

loc_003434E9: ;
    edx = esp;
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x003434F4u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_003434F4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00343500
 * Original: 0x00343500 - 0x003436CB (459 bytes, 89 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00343500(void)
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

loc_00343500: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x148) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x148;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    fp_top() = sin(fp_top()); /* fsin */
    xmm1 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = esp + 0x50;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    edx = esp + 0x118;
    MEMF(esp + 0x58) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x6C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x80) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    PUSH32(esp, edx);
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x64) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x68) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x6C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x74) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x78) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x7C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x80) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x88) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x8C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x90) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x94) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x98) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x58) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(esp + 0x3C) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x18) = (float)fp_top(); /* fst */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    MEMF(esp + 0x44) = xmm2.f[0]; /* movss */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034362Au); RECOMP_ABI_CALL(0x0001155Fu, sub_0001155F); /* call 0x0001155F */

loc_0034362A: ;
    esi = eax;
    eax = MEM32(ebp + 8);
    ecx = 0x10;
    edi = esp + 0xDC;
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
    xmm0 = XMM_MEM(esp + 0xDC); /* movaps */
    ecx = MEM32(ebp + 0x14);
    ecx = MEM32(ecx);
    XMM_STORE(esp + 0x9C, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp + 0xEC); /* movaps */
    XMM_STORE(esp + 0xAC, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp + 0xFC); /* movaps */
    XMM_STORE(esp + 0xBC, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp + 0x10C); /* movaps */
    XMM_STORE(esp + 0xCC, xmm0); /* movaps */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEMF(esp + 0xCC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x7AB82C); /* subss */
    MEMF(esp + 0xD0) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x90;
    MEMF(esp + 0xC8) = xmm0.f[0]; /* movss */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003436C3u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_003436C3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00343740
 * Original: 0x00343740 - 0x00343774 (52 bytes, 14 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00343740(void)
{

loc_00343740: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(ecx);
    eax = MEM32(esp + 8);
    MEM32(eax + 0x30) = edx;
    xmm0 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x7AB82C); /* subss */
    edx = MEM32(esp + 4);
    MEMF(eax + 0x34) = xmm0.f[0]; /* movss */
    ecx = MEM32(ecx + 8);
    MEM32(eax + 0x38) = ecx;
    ecx = MEM32(edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00343771u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_00343771: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00343790
 * Original: 0x00343790 - 0x003437A4 (20 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00343790(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00343790: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = 0x82B4C8;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    esp += 4; return; /* ret */

}
